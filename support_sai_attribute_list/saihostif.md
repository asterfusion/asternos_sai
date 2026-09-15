| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_hostif | SAI_HOSTIF_ATTR_TYPE | SAI_HOSTIF_TYPE_NETDEV | yes | yes |  |
|  |  | SAI_HOSTIF_TYPE_FD | yes | yes |  |
|  |  | SAI_HOSTIF_TYPE_GENETLINK | yes | yes |  |
|  | SAI_HOSTIF_ATTR_OBJ_ID |  | yes | yes |  |
|  | SAI_HOSTIF_ATTR_NAME |  | yes | yes |  |
|  | SAI_HOSTIF_ATTR_OPER_STATUS |  | no | yes |  |
|  | SAI_HOSTIF_ATTR_QUEUE |  | no | yes |  |
|  | SAI_HOSTIF_ATTR_VLAN_TAG | SAI_HOSTIF_VLAN_TAG_STRIP | no | yes |  |
|  |  | SAI_HOSTIF_VLAN_TAG_KEEP | no | yes |  |
|  |  | SAI_HOSTIF_VLAN_TAG_ORIGINAL | no | yes |  |
|  | SAI_HOSTIF_ATTR_GENETLINK_MCGRP_NAME |  | yes | yes |  |
| remove_hostif |  |  | yes | yes |  |
| set_hostif_attribute | SAI_HOSTIF_ATTR_OPER_STATUS |  | yes | yes |  |
|  | SAI_HOSTIF_ATTR_QUEUE |  | no | yes |  |
|  | SAI_HOSTIF_ATTR_VLAN_TAG | SAI_HOSTIF_VLAN_TAG_STRIP | yes | yes |  |
|  |  | SAI_HOSTIF_VLAN_TAG_KEEP | yes | yes |  |
|  |  | SAI_HOSTIF_VLAN_TAG_ORIGINAL | yes | yes |  |
| get_hostif_attribute | SAI_HOSTIF_ATTR_TYPE |  | yes | yes |  |
|  | SAI_HOSTIF_ATTR_OBJ_ID |  | yes | yes |  |
|  | SAI_HOSTIF_ATTR_NAME |  | yes | yes |  |
|  | SAI_HOSTIF_ATTR_OPER_STATUS |  | yes | yes |  |
|  | SAI_HOSTIF_ATTR_QUEUE |  | no | yes |  |
|  | SAI_HOSTIF_ATTR_VLAN_TAG |  | yes | yes |  |
|  | SAI_HOSTIF_ATTR_GENETLINK_MCGRP_NAME |  | no | yes |  |
| create_hostif_table_entry | SAI_HOSTIF_TABLE_ENTRY_ATTR_TYPE | SAI_HOSTIF_TABLE_ENTRY_TYPE_PORT | yes | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_TYPE_LAG | yes | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_TYPE_VLAN | yes | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_TYPE_TRAP_ID | yes | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_TYPE_WILDCARD | yes | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_OBJ_ID |  | yes | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_TRAP_ID |  | yes | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_CHANNEL_TYPE | SAI_HOSTIF_TABLE_ENTRY_CHANNEL_TYPE_CB | no | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_CHANNEL_TYPE_FD | yes | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_CHANNEL_TYPE_NETDEV_PHYSICAL_PORT | no | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_CHANNEL_TYPE_NETDEV_LOGICAL_PORT | no | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_CHANNEL_TYPE_NETDEV_L3 | no | yes |  |
|  |  | SAI_HOSTIF_TABLE_ENTRY_CHANNEL_TYPE_GENETLINK | yes | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_HOST_IF |  | yes | yes |  |
| remove_hostif_table_entry |  |  | yes | yes |  |
| set_hostif_table_entry_attribute |  |  | yes | yes |  |
| get_hostif_table_entry | SAI_HOSTIF_TABLE_ENTRY_ATTR_TYPE |  | yes | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_OBJ_ID |  | yes | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_TRAP_ID |  | yes | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_CHANNEL_TYPE |  | yes | yes |  |
|  | SAI_HOSTIF_TABLE_ENTRY_ATTR_HOST_IF |  | yes | yes |  |
| create_hostif_trap_group | SAI_HOSTIF_TRAP_GROUP_ATTR_ADMIN_STATE |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_QUEUE |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_POLICER |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_OBJECT_STAGE | SAI_OBJECT_STAGE_BOTH | no | yes |  |
|  |  | SAI_OBJECT_STAGE_INGRESS | no | no |  |
|  |  | SAI_OBJECT_STAGE_EGRESS | no | no |  |
| remove_hostif_trap_group |  |  | yes | yes |  |
| set_hostif_trap_group_attribute | SAI_HOSTIF_TRAP_GROUP_ATTR_ADMIN_STATE |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_QUEUE |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_POLICER |  | yes | yes |  |
| get_hostif_trap_group_attribute | SAI_HOSTIF_TRAP_GROUP_ATTR_ADMIN_STATE |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_QUEUE |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_POLICER |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_GROUP_ATTR_OBJECT_STAGE |  | no | yes |  |
| create_hostif_trap | SAI_HOSTIF_TRAP_ATTR_TRAP_TYPE | SAI_HOSTIF_TRAP_TYPE_STP | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_LACP | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_EAPOL | yes | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_LLDP | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PVRST | no | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IGMP_TYPE_QUERY | yes | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IGMP_TYPE_LEAVE | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IGMP_TYPE_V1_REPORT | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IGMP_TYPE_V2_REPORT | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IGMP_TYPE_V3_REPORT | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_SAMPLEPACKET | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_UDLD | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_CDP | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_VTP | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_DTP | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PAGP | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PTP | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PTP_TX_EVENT | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_DHCP_L2 | no | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_DHCPV6_L2 | no | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_ESMC | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_CUSTOM_ICCP | yes | no | yes |
|  |  | SAI_HOSTIF_TRAP_TYPE_CUSTOM_SNP | yes | no | yes |
|  |  | SAI_HOSTIF_TRAP_TYPE_CUSTOM_TELNET | yes | no | yes |
|  |  | SAI_HOSTIF_TRAP_TYPE_CUSTOM_ICMP_ECHO | yes | no | yes |
|  |  | SAI_HOSTIF_TRAP_TYPE_CUSTOM_ACL_TRAP | yes | no | yes |
|  |  | SAI_HOSTIF_TRAP_TYPE_ARP_REQUEST | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_ARP_RESPONSE | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_DHCP | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_OSPF | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PIM | yes | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_VRRP | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_DHCPV6 | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_OSPFV6 | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_VRRPV6 | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IPV6_NEIGHBOR_DISCOVERY | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IPV6_MLD_V1_V2 | yes | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IPV6_MLD_V1_REPORT | yes | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IPV6_MLD_V1_DONE | yes | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_MLD_V2_REPORT | yes | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_UNKNOWN_L3_MULTICAST | yes | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_SNAT_MISS | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_DNAT_MISS | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_NAT_HAIRPIN | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IPV6_NEIGHBOR_SOLICITATION | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IPV6_NEIGHBOR_ADVERTISEMENT | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_ISIS | no | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_NEIGHBOR_MISS | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_IP2ME | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_SSH | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_SNMP | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_BGP | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_BGPV6 | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_BFD | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_BFDV6 | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_BFD_MICRO | no | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_BFDV6_MICRO | no | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_LDP | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_GNMI | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_P4RT | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_NTPCLIENT | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_NTPSERVER | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_HTTPCLIENT | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_HTTPSERVER | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_L3_MTU_ERROR | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_TTL_ERROR | yes | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_STATIC_FDB_MOVE | no | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PIPELINE_DISCARD_EGRESS_BUFFER | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PIPELINE_DISCARD_WRED | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_PIPELINE_DISCARD_ROUTER | no | yes |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_MPLS_TTL_ERROR | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_MPLS_ROUTER_ALERT_LABEL | no | no |  |
|  |  | SAI_HOSTIF_TRAP_TYPE_MPLS_LABEL_LOOKUP_MISS | no | no |  |
|  | SAI_HOSTIF_TRAP_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | yes | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_HOSTIF_TRAP_ATTR_TRAP_PRIORITY |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_EXCLUDE_PORT_LIST |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_TRAP_GROUP |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_MIRROR_SESSION |  | no | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_COUNTER_ID |  | no | yes |  |
| remove_hostif_trap |  |  | yes | yes |  |
| set_hostif_trap_attribute | SAI_HOSTIF_TRAP_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | yes | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_HOSTIF_TRAP_ATTR_TRAP_PRIORITY |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_EXCLUDE_PORT_LIST |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_TRAP_GROUP |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_MIRROR_SESSION |  | no | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_COUNTER_ID |  | no | yes |  |
| get_hostif_trap_attribute | SAI_HOSTIF_TRAP_ATTR_TRAP_TYPE |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_PACKET_ACTION |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_TRAP_PRIORITY |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_EXCLUDE_PORT_LIST |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_TRAP_GROUP |  | yes | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_MIRROR_SESSION |  | no | yes |  |
|  | SAI_HOSTIF_TRAP_ATTR_COUNTER_ID |  | no | yes |  |
| create_hostif_user_defined_trap | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TYPE | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_ROUTER | no | yes |  |
|  |  | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_NEIGHBOR | no | no |  |
|  |  | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_NEIGH | no | no |  |
|  |  | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_ACL | yes | no |  |
|  |  | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_FDB | no | no |  |
|  |  | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_INSEG_ENTRY | no | no |  |
|  |  | SAI_HOSTIF_USER_DEFINED_TRAP_TYPE_TAM | no | yes |  |
|  | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TRAP_PRIORITY |  | yes | yes |  |
|  | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TRAP_GROUP |  | yes | yes |  |
| remove_hostif_user_defined_trap |  |  | yes | yes |  |
| set_hostif_user_defined_trap_attribute | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TRAP_PRIORITY |  | yes | yes |  |
|  | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TRAP_GROUP |  | yes | yes |  |
| get_hostif_user_defined_trap_attribute | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TYPE |  | yes | yes |  |
|  | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TRAP_PRIORITY |  | yes | yes |  |
|  | SAI_HOSTIF_USER_DEFINED_TRAP_ATTR_TRAP_GROUP |  | yes | yes |  |
| recv_hostif_packet |  |  | no | yes |  |
| send_hostif_packet |  |  | no | yes |  |
| allocate_hostif_packet |  |  | no | no |  |
| free_hostif_packet |  |  | no | no |  |
