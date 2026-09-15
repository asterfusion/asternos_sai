| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_router_interface | SAI_ROUTER_INTERFACE_ATTR_VIRTUAL_ROUTER_ID |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_TYPE | SAI_ROUTER_INTERFACE_TYPE_PORT | yes | yes |  |
|  |  | SAI_ROUTER_INTERFACE_TYPE_VLAN | yes | yes |  |
|  |  | SAI_ROUTER_INTERFACE_TYPE_LOOPBACK | yes | yes |  |
|  |  | SAI_ROUTER_INTERFACE_TYPE_MPLS_ROUTER | no | yes |  |
|  |  | SAI_ROUTER_INTERFACE_TYPE_SUB_PORT | yes | yes |  |
|  |  | SAI_ROUTER_INTERFACE_TYPE_BRIDGE | yes | yes |  |
|  |  | SAI_ROUTER_INTERFACE_TYPE_QINQ_PORT | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_PORT_ID |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_VLAN_ID |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_OUTER_VLAN_ID |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_INNER_VLAN_ID |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_BRIDGE_ID |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_SRC_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_ADMIN_V4_STATE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_ADMIN_V6_STATE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_MTU |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_INGRESS_ACL |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_EGRESS_ACL |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_NEIGHBOR_MISS_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_ROUTER_INTERFACE_ATTR_V4_MCAST_ENABLE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_V6_MCAST_ENABLE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_LOOPBACK_PACKET_ACTION | SAI_PACKET_ACTION_DROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_ROUTER_INTERFACE_ATTR_IS_VIRTUAL |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_NAT_ZONE_ID |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_DISABLE_DECREMENT_TTL |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_ADMIN_MPLS_STATE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_ROUTER_INTERFACE_ATTR_LABEL |  | no | no |  |
|  | SAI_ROUTER_INTERFACE_ATTR_MY_MAC |  | no | no |  |
|  | SAI_ROUTER_INTERFACE_ATTR_CUSTOM_URPF_MODE |  | yes | no | yes |
| remove_router_interface |  |  | yes | yes |  |
| set_router_interface_attribute | SAI_ROUTER_INTERFACE_ATTR_SRC_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_ADMIN_V4_STATE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_ADMIN_V6_STATE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_MTU |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_INGRESS_ACL |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_EGRESS_ACL |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_NEIGHBOR_MISS_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_ROUTER_INTERFACE_ATTR_V4_MCAST_ENABLE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_V6_MCAST_ENABLE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_LOOPBACK_PACKET_ACTION | SAI_PACKET_ACTION_DROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_ROUTER_INTERFACE_ATTR_NAT_ZONE_ID |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_DISABLE_DECREMENT_TTL |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_ADMIN_MPLS_STATE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_ROUTER_INTERFACE_ATTR_LABEL |  | no | no |  |
|  | SAI_ROUTER_INTERFACE_ATTR_CUSTOM_URPF_MODE |  | yes | no | yes |
| get_router_interface_attribute | SAI_ROUTER_INTERFACE_ATTR_VIRTUAL_ROUTER_ID |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_TYPE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_PORT_ID |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_VLAN_ID |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_OUTER_VLAN_ID |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_INNER_VLAN_ID |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_BRIDGE_ID |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_SRC_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_ADMIN_V4_STATE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_ADMIN_V6_STATE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_MTU |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_INGRESS_ACL |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_EGRESS_ACL |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_NEIGHBOR_MISS_PACKET_ACTION |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_V4_MCAST_ENABLE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_V6_MCAST_ENABLE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_LOOPBACK_PACKET_ACTION |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_IS_VIRTUAL |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_NAT_ZONE_ID |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_DISABLE_DECREMENT_TTL |  | no | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_ADMIN_MPLS_STATE |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_ROUTER_INTERFACE_ATTR_LABEL |  | no | no |  |
|  | SAI_ROUTER_INTERFACE_ATTR_MY_MAC |  | no | no |  |
|  | SAI_ROUTER_INTERFACE_ATTR_CUSTOM_URPF_MODE |  | yes | no | yes |
| get_router_interface_stats | SAI_ROUTER_INTERFACE_STAT_IN_OCTETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_IN_PACKETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_OUT_OCTETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_OUT_PACKETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_IN_ERROR_OCTETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_IN_ERROR_PACKETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_OUT_ERROR_OCTETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_OUT_ERROR_PACKETS |  | yes | yes |  |
| get_router_interface_stats_ext |  |  | no | yes |  |
| clear_router_interface_stats | SAI_ROUTER_INTERFACE_STAT_IN_OCTETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_IN_PACKETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_OUT_OCTETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_OUT_PACKETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_IN_ERROR_OCTETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_IN_ERROR_PACKETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_OUT_ERROR_OCTETS |  | yes | yes |  |
|  | SAI_ROUTER_INTERFACE_STAT_OUT_ERROR_PACKETS |  | yes | yes |  |
| create_router_interfaces |  |  | no | yes |  |
| remove_router_interfaces |  |  | no | yes |  |
| set_router_interfaces_attribute |  |  | no | yes |  |
| get_router_interfaces_attribute |  |  | no | yes |  |
