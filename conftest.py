"""Pytest hooks for PTF Test Explorer. Not loaded by the PTF CLI (test-dir is ptf/)."""

import sys
from pathlib import Path

_SONIC_SAI_ROOT = Path(__file__).resolve().parent
if str(_SONIC_SAI_ROOT) not in sys.path:
    sys.path.insert(0, str(_SONIC_SAI_ROOT))

from ptf_pytest_plugin.plugin import pytest_pycollect_makemodule, pytest_sessionfinish
