# Copyright (c) 2026 Clounix, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License"); you may
# not use this file except in compliance with the License. You may obtain
# a copy of the License at http://www.apache.org/licenses/LICENSE-2.0

"""
This file contains class for CLX (Clounix) specified functions.
"""
from platform_helper.common_sai_helper import *

class ClxSaiHelper(CommonSaiHelper):
    """
    This class contains CLX (Clounix) specified functions for the platform setup
    and test context configuration.
    """
    platform = 'clx'

    def __init__(self, *args, **kwargs) -> None:
        super().__init__(*args, **kwargs)

    def saveNumberOfAvaiableResources(self, debug=False):
        """
        Save number of available resources supported by CLX.
        Avoids querying unsupported attributes (like available_double_nat_entry).
        """
        attrs = [
            "available_ipv4_route_entry",
            "available_ipv6_route_entry",
            "available_ipv4_nexthop_entry",
            "available_ipv6_nexthop_entry",
            "available_ipv4_neighbor_entry",
            "available_ipv6_neighbor_entry",
            "available_next_hop_group_entry",
            "available_next_hop_group_member_entry",
            "available_fdb_entry",
            "available_ipmc_entry",
            "available_snat_entry",
            "available_dnat_entry",
            "number_of_ecmp_groups",
            "ecmp_members"
        ]
        switch_resources = {}
        for a in attrs:
            try:
                kwargs = {a: True}
                res = sai_thrift_get_switch_attribute(self.client, **kwargs)
                if a in res:
                    switch_resources[a] = res[a]
            except Exception:
                pass

        if debug:
            self.printNumberOfAvaiableResources(switch_resources)

        return switch_resources

    def turn_up_and_check_ports(self):
        """
        Check ports for CLX. Turn on admin_state and wait briefly for link up.
        """
        print("CLX platform: Enabling ports and checking oper status...")
        for index in range(min(32, len(self.port_list))):
            oid = self.port_list[index]
            try:
                sai_thrift_set_port_attribute(self.client, oid, admin_state=True)
            except Exception:
                pass
        time.sleep(2)
        for index in range(min(32, len(self.port_list))):
            oid = self.port_list[index]
            try:
                port_attr = sai_thrift_get_port_attribute(self.client, oid, oper_status=True)
                print("Port %d (oid 0x%x) oper status: %s" % (index, oid, port_attr.get('oper_status')))
            except Exception as e:
                pass

    def create_bridge_ports(self, ports=None):
        """
        CLX ASIC automatically pre-creates 1Q bridge ports for all front ports
        during switch initialization. Map existing bridge ports rather than
        calling create_bridge_port (which returns SAI_STATUS_ITEM_ALREADY_EXISTS).
        """
        ports = ports or range(0, len(self.port_list))
        bp_map = {}
        try:
            attr = sai_thrift_get_bridge_attribute(
                self.client,
                self.default_1q_bridge,
                port_list=sai_thrift_object_list_t(idlist=[], count=100)
            )
            if 'port_list' in attr:
                for bp in attr['port_list'].idlist:
                    bp_attr = sai_thrift_get_bridge_port_attribute(self.client, bp, port_id=True)
                    if 'port_id' in bp_attr:
                        bp_map[bp_attr['port_id']] = bp
        except Exception as e:
            print("Error retrieving default bridge ports:", e)

        for port_index in ports:
            port_id = getattr(self, 'port%s' % port_index)
            if port_id in bp_map:
                port_bp = bp_map[port_id]
            else:
                port_bp = sai_thrift_create_bridge_port(
                    self.client,
                    bridge_id=self.default_1q_bridge,
                    port_id=port_id,
                    type=SAI_BRIDGE_PORT_TYPE_PORT,
                    admin_state=True
                )
            setattr(self, 'port%s_bp' % port_index, port_bp)
            self.def_bridge_port_list.append(port_bp)

    def remove_bridge_port(self):
        """
        Do not remove pre-created 1Q bridge ports on CLX.
        """
        pass

    def destroy_bridge_ports(self):
        """
        Do not remove pre-created 1Q bridge ports on CLX.
        """
        pass

    def create_default_v4_v6_route_entry(self):
        """
        Create default v4 and v6 route entry.
        Tolerates SAI_STATUS_ITEM_ALREADY_EXISTS if entries persist from previous tests.
        """
        DEFAULT_IP_V4_PREFIX = '0.0.0.0/0'
        DEFAULT_IP_V6_PREFIX = '0000:0000:0000:0000:0000:0000:0000:0000'
        print("Create default v4&v6 route entry...")
        v6_default = sai_thrift_ip_prefix_t(addr_family=1,
                                            addr=sai_thrift_ip_addr_t(
                                                ip6=DEFAULT_IP_V6_PREFIX),
                                            mask=sai_thrift_ip_addr_t(ip6=DEFAULT_IP_V6_PREFIX))
        self.default_ipv6_route_entry = sai_thrift_route_entry_t(vr_id=self.default_vrf,
                                                                 destination=v6_default)
        status = sai_thrift_create_route_entry(
            self.client,
            route_entry=self.default_ipv6_route_entry,
            packet_action=SAI_PACKET_ACTION_DROP)
        if status != SAI_STATUS_SUCCESS and status != SAI_STATUS_ITEM_ALREADY_EXISTS:
            self.assertEqual(status, SAI_STATUS_SUCCESS)

        self.default_ipv4_route_entry = sai_thrift_route_entry_t(vr_id=self.default_vrf,
                                                                 destination=sai_ipprefix(DEFAULT_IP_V4_PREFIX))
        status = sai_thrift_create_route_entry(
            self.client,
            route_entry=self.default_ipv4_route_entry,
            packet_action=SAI_PACKET_ACTION_DROP)
        if status != SAI_STATUS_SUCCESS and status != SAI_STATUS_ITEM_ALREADY_EXISTS:
            self.assertEqual(self.status(), SAI_STATUS_SUCCESS)

    def tearDown(self):
        try:
            if hasattr(self, 'default_ipv6_route_entry'):
                sai_thrift_remove_route_entry(self.client, self.default_ipv6_route_entry)
        except Exception:
            pass
        try:
            if hasattr(self, 'default_ipv4_route_entry'):
                sai_thrift_remove_route_entry(self.client, self.default_ipv4_route_entry)
        except Exception:
            pass
        super().tearDown()

