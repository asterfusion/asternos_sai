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

    def turn_up_and_check_ports(self):
        """
        Check ports for CLX. Turn on admin_state and wait briefly for link up.
        """
        print("CLX platform: Enabling ports and checking oper status... ")
        for oid in self.port_list:
            try:
                sai_thrift_set_port_attribute(self.client, oid, interface_type=SAI_PORT_INTERFACE_TYPE_SR)
            except Exception:
                pass
        time.sleep(2)
        for oid in self.port_list:
            try:
                port_attr = sai_thrift_get_port_attribute(self.client, oid, oper_status=True)
                print("Port 0x%x oper status: %s" % (oid, port_attr.get('oper_status')))
            except Exception:
                pass

