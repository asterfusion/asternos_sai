"""Pytest plugin: collect PTF unittest classes (runTest) without importing them.

Compatible with pytest 6 (path/fspath) and pytest 7+ (module_path/path).
"""

from __future__ import print_function

import ast
import json
import logging
import os
import sys
import threading
from pathlib import Path

import pytest

_PLUGIN_DIR = os.path.dirname(os.path.abspath(__file__))
_SONIC_SAI_ROOT = os.path.dirname(_PLUGIN_DIR)
_PTF_TEST_DIR = os.path.join(_SONIC_SAI_ROOT, "ptf")
_CONFIG_PATH = os.path.join(_PLUGIN_DIR, "ptf_args.json")

_init_lock = threading.Lock()
_ptf_ready = False

_CONFIG_DEFAULT = {
    "list": False,
    "list_test_names": False,
    "allow_user": True,
    "test_spec": "",
    "test_file": None,
    "test_dir": None,
    "test_order": "default",
    "test_order_seed": 0xABA,
    "num_shards": 1,
    "shard_id": 0,
    "platform": "eth",
    "platform_args": None,
    "platform_dir": None,
    "interfaces": [],
    "port_info": {},
    "device_sockets": [],
    "log_file": "ptf.log",
    "log_dir": None,
    "debug": "verbose",
    "profile": False,
    "profile_file": "profile.out",
    "xunit": False,
    "xunit_dir": "xunit",
    "relax": False,
    "test_params": None,
    "failfast": False,
    "fail_skipped": False,
    "default_timeout": 2.0,
    "default_negative_timeout": 0.1,
    "minsize": 0,
    "random_seed": None,
    "disable_ipv6": False,
    "disable_vxlan": False,
    "disable_erspan": False,
    "disable_geneve": False,
    "disable_mpls": False,
    "disable_nvgre": False,
    "disable_igmp": False,
    "disable_rocev2": False,
    "qlen": 100,
    "test_case_timeout": None,
    "socket_recv_size": 4096,
    "packet_manipulation_module": "ptf.packet_scapy",
    "port_map": None,
}

_DEBUG_LEVELS = {
    "debug": logging.DEBUG,
    "verbose": logging.DEBUG,
    "info": logging.INFO,
    "warning": logging.WARNING,
    "warn": logging.WARNING,
    "error": logging.ERROR,
    "critical": logging.CRITICAL,
}

def _find_runtest_classes(py_path):
    """Return [(class_name, lineno), ...] for top-level classes that define runTest."""
    with open(str(py_path), "r") as handle:
        source = handle.read()
    tree = ast.parse(source, filename=str(py_path))
    found = []
    for node in tree.body:
        if not isinstance(node, ast.ClassDef):
            continue
        if any(
            isinstance(item, ast.FunctionDef) and item.name == "runTest"
            for item in node.body
        ):
            found.append((node.name, node.lineno))
    return found

def _parse_device_socket(value):
    def parse_ports(ports):
        port_set = set()
        ports = ports.strip("{}").split(",")
        for port in ports:
            port = port.strip()
            if not port:
                continue
            if "-" in port:
                start, end = port.split("-", 1)
                for idx in range(int(start), int(end) + 1):
                    port_set.add(idx)
            else:
                port_set.add(int(port))
        return port_set

    dev_and_port, addr = value.split("@", 1)
    if dev_and_port[0] == "{":
        return (0, parse_ports(dev_and_port), addr)
    device, ports = dev_and_port.split("-", 1)
    return (int(device), parse_ports(ports), addr)

def _parse_test_params(params_str):
    if not params_str:
        return None
    namespace = {}
    exec("class _TestParams:\n    " + params_str, namespace)
    params = {}
    for key, value in vars(namespace["_TestParams"]).items():
        if not key.startswith("__"):
            params[key] = value
    return params

def _setup_ptf_runtime():
    """Initialize ptf.config, TEST_PARAMS, nn platform, and dataplane once."""
    global _ptf_ready
    with _init_lock:
        if _ptf_ready:
            return

        os.chdir(_SONIC_SAI_ROOT)
        with open(_CONFIG_PATH, "r") as handle:
            ide_cfg = json.load(handle)

        # import xxx_sai_helper according PLATFORM env
        platform = ide_cfg.get("sai_platform_env") or os.environ.get("PLATFORM") or "clx"
        os.environ["PLATFORM"] = str(platform)
        import ptf
        from ptf import platforms

        config = dict(_CONFIG_DEFAULT)
        config["test_dir"] = _PTF_TEST_DIR
        config["qlen"] = int(ide_cfg.get("qlen", 10000))
        config["platform"] = ide_cfg.get("platform", "nn")
        config["test_params"] = ide_cfg.get("test_params")
        config["device_sockets"] = [
            _parse_device_socket(ide_cfg["device_socket"])
        ]
        config["allow_user"] = True
        config["platform_dir"] = os.path.dirname(
            os.path.abspath(platforms.__file__)
        )
        ptf.config.update(config)

        logging.getLogger().setLevel(_DEBUG_LEVELS[config["debug"]])
        ptf.open_logfile("main")

        import ptf.testutils
        import ptf.ptfutils
        import ptf.dataplane

        ptf.testutils.TEST_PARAMS = _parse_test_params(config["test_params"])
        ptf.testutils.PORT_INFO = config["port_info"]

        if config["platform"] == "nn":
            import nnpy

        sys.path.append(config["platform_dir"])
        import importlib
        platform_mod = importlib.import_module(config["platform"])
        platform_mod.platform_config_update(config)
        ptf.config.update(config)

        if config.get("port_map") is None:
            raise RuntimeError(
                "PTF platform did not define port_map; check device_socket in ptf_args.json"
            )

        ptf.ptfutils.default_timeout = config["default_timeout"]
        ptf.ptfutils.default_negative_timeout = config["default_negative_timeout"]
        ptf.testutils.MINSIZE = config["minsize"]

        ptf.dataplane_instance = ptf.dataplane.DataPlane(config)
        try:
            for port_id, ifname in config["port_map"].items():
                device, port = port_id
                ptf.dataplane_instance.port_add(ifname, device, port)
        except Exception as exc:
            ptf.dataplane_instance.kill()
            ptf.dataplane_instance = None
            pytest.exit("PTF nn agent is not reachable: %s" % exc)

        _ptf_ready = True

def _teardown_ptf_runtime():
    global _ptf_ready
    with _init_lock:
        if not _ptf_ready:
            return
        try:
            import ptf
            if ptf.dataplane_instance is not None:
                ptf.dataplane_instance.stop_pcap()
                ptf.dataplane_instance.kill()
                ptf.dataplane_instance = None
        finally:
            _ptf_ready = False

def _run_ptf_case(module_name, class_name):
    """Import the PTF unittest class and run its runTest in this process."""

    if _PTF_TEST_DIR not in sys.path:
        sys.path.insert(0, _PTF_TEST_DIR)

    _setup_ptf_runtime()

    module = __import__(module_name)
    cls = getattr(module, class_name)
    case = cls()
    # Always tearDown so DUT objects are removed even when assert fails.
    # Breakpoints in runTest still hit (same process as Debug Test).
    try:
        case.setUp()
        case.runTest()
    finally:
        case.tearDown()
        case.doCleanups()

def _node_path(node):
    path = getattr(node, "path", None)
    if path is not None:
        return Path(str(path))
    return Path(str(node.fspath))

def _make_file_collector(parent, py_path, raw_path):
    try:
        collector = PtfModuleFile.from_parent(parent, path=py_path)
    except TypeError:
        collector = PtfModuleFile.from_parent(parent, fspath=raw_path)
    collector._ptf_classes = _find_runtest_classes(py_path)
    return collector

def _makemodule(raw_path, parent):
    """Replace the default pytest.Module importer so PTF files are not imported."""
    py_path = Path(str(raw_path))
    if py_path.suffix != ".py" or not py_path.name.startswith("sai"):
        return None
    if py_path.parent.name != "ptf":
        return None
    return _make_file_collector(parent, py_path, raw_path)

_PYTEST_VER = tuple(int(part) for part in pytest.__version__.split(".")[:2])
if _PYTEST_VER >= (7, 0):
    def pytest_pycollect_makemodule(module_path, parent):
        return _makemodule(module_path, parent)
else:
    def pytest_pycollect_makemodule(path, parent):
        return _makemodule(path, parent)

def pytest_sessionfinish(session, exitstatus):
    _teardown_ptf_runtime()

class PtfModuleFile(pytest.File):
    def collect(self):
        classes = getattr(self, "_ptf_classes", None)
        if classes is None:
            classes = _find_runtest_classes(_node_path(self))
        for class_name, lineno in classes:
            item = PtfCaseItem.from_parent(self, name=class_name)
            item._ptf_class = class_name
            item._ptf_lineno = lineno
            yield item

class PtfCaseItem(pytest.Item):
    def runtest(self):
        _run_ptf_case(_node_path(self).stem, self._ptf_class)

    def reportinfo(self):
        return _node_path(self), self._ptf_lineno - 1, self._ptf_class
