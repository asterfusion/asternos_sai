| Api | Sai Attribute | Enums | Support | Private |
| --- | --- | --- | --- | --- |
| create_hostif | SAI_HOSTIF_ATTR_TYPE | SAI_HOSTIF_TYPE_NETDEV | yes |  |
|  |  | SAI_HOSTIF_TYPE_FD | yes |  |
|  |  | SAI_HOSTIF_TYPE_GENETLINK | yes |  |
|  | SAI_HOSTIF_ATTR_OBJ_ID |  | yes |  |
|  | SAI_HOSTIF_ATTR_NAME |  | yes |  |
|  | SAI_HOSTIF_ATTR_OPER_STATUS |  | yes |  |
|  | SAI_HOSTIF_ATTR_QUEUE |  | yes |  |
|  | SAI_HOSTIF_ATTR_VLAN_TAG | SAI_HOSTIF_VLAN_TAG_STRIP | yes |  |
|  |  | SAI_HOSTIF_VLAN_TAG_KEEP | yes |  |
|  |  | SAI_HOSTIF_VLAN_TAG_ORIGINAL | yes |  |
|  | SAI_HOSTIF_ATTR_GENETLINK_MCGRP_NAME |  | yes |  |
| remove_hostif |  |  | yes |  |
| set_hostif_attribute | SAI_HOSTIF_ATTR_OPER_STATUS |  | yes |  |
|  | SAI_HOSTIF_ATTR_QUEUE |  | yes |  |
|  | SAI_HOSTIF_ATTR_VLAN_TAG | SAI_HOSTIF_VLAN_TAG_STRIP | yes |  |
|  |  | SAI_HOSTIF_VLAN_TAG_KEEP | yes |  |
|  |  | SAI_HOSTIF_VLAN_TAG_ORIGINAL | yes |  |
| get_hostif_attribute | SAI_HOSTIF_ATTR_TYPE |  | yes |  |
|  | SAI_HOSTIF_ATTR_OBJ_ID |  | yes |  |
|  | SAI_HOSTIF_ATTR_NAME |  | yes |  |
|  | SAI_HOSTIF_ATTR_OPER_STATUS |  | yes |  |
|  | SAI_HOSTIF_ATTR_QUEUE |  | yes |  |
|  | SAI_HOSTIF_ATTR_VLAN_TAG |  | yes |  |
|  | SAI_HOSTIF_ATTR_GENETLINK_MCGRP_NAME |  | yes |  |
| create_hostif_table_entry | SAI_HOSTIF_TABLE_ENTRY_ATTR_TYPE | SAI_HOSTIF_TABLE_ENTRY_TYPE_PORT | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_TYPE_LAG | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_TYPE_VLAN | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_TYPE_TRAP_ID | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_TYPE_WILDCARD | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_OBJ_ID |  | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_TRAP_ID |  | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_CHANNEL_TYPE | SAI_HOSTIF_TABLE_ENTRY_CHANNEL_TYPE_CB | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_CHANNEL_TYPE_FD | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_CHANNEL_TYPE_NETDEV_PHYSICAL_PORT | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_CHANNEL_TYPE_NETDEV_LOGICAL_PORT | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_CHANNEL_TYPE_NETDEV_L3 | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_CHANNEL_TYPE_GENETLINK | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_HOST_IF |  | yes |  |
| remove_hostif_table_entry |  |  | yes |  |
| set_hostif_table_entry_attribute |  |  | no |  |
| get_hostif_table_entry | SAI_HOSTIF_TABLE_ENTRY_ATTR_TYPE |  | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_OBJ_ID |  | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_TRAP_ID |  | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_CHANNEL_TYPE |  | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_HOST_IF |  | yes |  |
| create_hostif_trap_group | SAI_HOSTIF_TRAP_GROUP_ATTR_ADMIN_STATE |  | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_QUEUE |  | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_POLICER |  | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_OBJECT_STAGE | SAI_OBJECT_STAGE_BOTH | yes |  |
|  |  | SAI_OBJECT_STAGE_INGRESS | yes |  |
|  |  | SAI_OBJECT_STAGE_EGRESS | yes |  |
| remove_hostif_trap_group | SAI_HOSTIF_TRAP_GROUP_ATTR_ADMIN_STATE |  | yes |  |
| set_hostif_trap_group_attribute | SAI_HOSTIF_TRAP_GROUP_ATTR_ADMIN_STATE |  | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_QUEUE |  | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_POLICER |  | yes |  |
| get_hostif_trap_group_attribute | SAI_HOSTIF_TRAP_GROUP_ATTR_ADMIN_STATE |  | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_QUEUE |  | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_POLICER |  | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_OBJECT_STAGE |  | yes |  |
| create_hostif_trap | SAI_HOSTIF_TRAP_ATTR_TRAP_TYPE | SAI_HOSTIF_TRAP_TYPE_STP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_LACP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_EAPOL | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_LLDP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PVRST | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IGMP_TYPE_QUERY | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IGMP_TYPE_LEAVE | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IGMP_TYPE_V1_REPORT | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IGMP_TYPE_V2_REPORT | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IGMP_TYPE_V3_REPORT | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_SAMPLEPACKET | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_UDLD | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_CDP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_VTP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_DTP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PAGP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PTP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PTP_TX_EVENT | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_DHCP_L2 | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_DHCPV6_L2 | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_CUSTOM_ICCP | yes | yes |
|  |  | SAI_HOSTIF_TRAP_TYPE_CUSTOM_SNP | yes | yes |
|  |  | SAI_HOSTIF_TRAP_TYPE_CUSTOM_TELNET | yes | yes |
|  |  | SAI_HOSTIF_TRAP_TYPE_CUSTOM_ICMP_ECHO | yes | yes |
|  |  | SAI_HOSTIF_TRAP_TYPE_CUSTOM_ACL_TRAP | yes | yes |
|  |  | SAI_HOSTIF_TRAP_TYPE_ARP_REQUEST | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_ARP_RESPONSE | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_DHCP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_OSPF | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PIM | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_VRRP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_DHCPV6 | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_OSPFV6 | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_VRRPV6 | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IPV6_NEIGHBOR_DISCOVERY | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IPV6_MLD_V1_V2 | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IPV6_MLD_V1_REPORT | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IPV6_MLD_V1_DONE | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_MLD_V2_REPORT | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_UNKNOWN_L3_MULTICAST | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_SNAT_MISS | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_DNAT_MISS | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_NAT_HAIRPIN | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IPV6_NEIGHBOR_SOLICITATION | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IPV6_NEIGHBOR_ADVERTISEMENT | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_ISIS | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_NEIGHBOR_MISS | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IP2ME | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_SSH | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_SNMP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_BGP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_BGPV6 | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_BFD | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_BFDV6 | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_BFD_MICRO | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_BFDV6_MICRO | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_LDP | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_GNMI | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_P4RT | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_NTPCLIENT | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_NTPSERVER | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_HTTPCLIENT | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_HTTPSERVER | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_L3_MTU_ERROR | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_TTL_ERROR | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_STATIC_FDB_MOVE | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PIPELINE_DISCARD_EGRESS_BUFFER | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PIPELINE_DISCARD_WRED | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PIPELINE_DISCARD_ROUTER | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_MPLS_TTL_ERROR | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_MPLS_ROUTER_ALERT_LABEL | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_MPLS_LABEL_LOOKUP_MISS | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no |  |
|  |  | SAI_PACKET_ACTION_DENY | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no |  |
|  |  | SAI_PACKET_ACTION_REMARK | no |  |
|  | SAI_HOSTIF_TRAP_ATTR_TRAP_PRIORITY |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_EXCLUDE_PORT_LIST |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_TRAP_GROUP |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_MIRROR_SESSION |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_COUNTER_ID |  | yes |  |
| remove_hostif_trap |  |  | yes |  |
| set_hostif_trap_attribute | SAI_HOSTIF_TRAP_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no |  |
|  |  | SAI_PACKET_ACTION_DENY | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no |  |
|  |  | SAI_PACKET_ACTION_REMARK | no |  |
|  | SAI_HOSTIF_TRAP_ATTR_TRAP_PRIORITY |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_EXCLUDE_PORT_LIST |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_TRAP_GROUP |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_MIRROR_SESSION |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_COUNTER_ID |  | yes |  |
| get_hostif_trap_attribute | SAI_HOSTIF_TRAP_ATTR_TRAP_TYPE |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_PACKET_ACTION |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_TRAP_PRIORITY |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_EXCLUDE_PORT_LIST |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_TRAP_GROUP |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_MIRROR_SESSION |  | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_COUNTER_ID |  | yes |  |
| create_hostif_user_defined_trap | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TYPE | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_ROUTER | yes |  |
|  |  | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_NEIGHBOR | yes |  |
|  |  | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_NEIGH | yes |  |
|  |  | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_ACL | yes |  |
|  |  | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_FDB | yes |  |
|  |  | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_INSEG_ENTRY | yes |  |
|  |  | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_TAM | yes |  |
|  | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TRAP_PRIORITY |  | yes |  |
|  | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TRAP_GROUP |  | yes |  |
| remove_hostif_user_defined_trap |  |  | yes |  |
| set_hostif_user_defined_trap_attribute | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TRAP_PRIORITY |  | yes |  |
|  | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TRAP_GROUP |  | yes |  |
| get_hostif_user_defined_trap_attribute | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TYPE |  | yes |  |
|  | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TRAP_PRIORITY |  | yes |  |
|  | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TRAP_GROUP |  | yes |  |
| recv_hostif_packet |  |  | yes |  |
| send_hostif_packet |  |  | yes |  |
| allocate_hostif_packet |  |  | no |  |
| free_hostif_packet |  |  | no |  |
