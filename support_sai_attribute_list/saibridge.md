| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_bridge | SAI_BRIDGE_ATTR_TYPE | SAI_BRIDGE_TYPE_1Q | no | yes |  |
|  |  | SAI_BRIDGE_TYPE_1D | yes | yes |  |
|  | SAI_BRIDGE_ATTR_MAX_LEARNED_ADDRESSES |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_LEARN_DISABLE |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_UNKNOWN_UNICAST_FLOOD_CONTROL_TYPE | SAI_BRIDGE_FLOOD_CONTROL_TYPE_SUB_PORTS | yes | yes |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_NONE | yes | no |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_L2MC_GROUP | yes | no |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_COMBINED | no | no |  |
|  | SAI_BRIDGE_ATTR_UNKNOWN_UNICAST_FLOOD_GROUP |  | no | yes |  |
|  | SAI_BRIDGE_ATTR_UNKNOWN_MULTICAST_FLOOD_CONTROL_TYPE | SAI_BRIDGE_FLOOD_CONTROL_TYPE_SUB_PORTS | yes | yes |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_NONE | yes | no |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_L2MC_GROUP | yes | no |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_COMBINED | no | no |  |
|  | SAI_BRIDGE_ATTR_UNKNOWN_MULTICAST_FLOOD_GROUP |  | no | yes |  |
|  | SAI_BRIDGE_ATTR_BROADCAST_FLOOD_CONTROL_TYPE | SAI_BRIDGE_FLOOD_CONTROL_TYPE_SUB_PORTS | yes | yes |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_NONE | yes | no |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_L2MC_GROUP | yes | no |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_COMBINED | no | no |  |
|  | SAI_BRIDGE_ATTR_BROADCAST_FLOOD_GROUP |  | no | yes |  |
|  | SAI_BRIDGE_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
|  | SAI_BRIDGE_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| remove_bridge |  |  | yes | yes |  |
| set_bridge_attribute | SAI_BRIDGE_ATTR_MAX_LEARNED_ADDRESSES |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_LEARN_DISABLE |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_UNKNOWN_UNICAST_FLOOD_CONTROL_TYPE | SAI_BRIDGE_FLOOD_CONTROL_TYPE_SUB_PORTS | yes | yes |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_NONE | yes | no |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_L2MC_GROUP | yes | no |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_COMBINED | no | no |  |
|  | SAI_BRIDGE_ATTR_UNKNOWN_UNICAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_UNKNOWN_MULTICAST_FLOOD_CONTROL_TYPE | SAI_BRIDGE_FLOOD_CONTROL_TYPE_SUB_PORTS | yes | yes |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_NONE | yes | no |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_L2MC_GROUP | yes | no |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_COMBINED | no | no |  |
|  | SAI_BRIDGE_ATTR_UNKNOWN_MULTICAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_BROADCAST_FLOOD_CONTROL_TYPE | SAI_BRIDGE_FLOOD_CONTROL_TYPE_SUB_PORTS | yes | yes |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_NONE | yes | no |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_L2MC_GROUP | yes | no |  |
|  |  | SAI_BRIDGE_FLOOD_CONTROL_TYPE_COMBINED | no | no |  |
|  | SAI_BRIDGE_ATTR_BROADCAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
|  | SAI_BRIDGE_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| get_bridge_attribute | SAI_BRIDGE_ATTR_TYPE |  | no | yes |  |
|  | SAI_BRIDGE_ATTR_PORT_LIST |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_MAX_LEARNED_ADDRESSES |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_LEARN_DISABLE |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_UNKNOWN_UNICAST_FLOOD_CONTROL_TYPE |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_UNKNOWN_UNICAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_UNKNOWN_MULTICAST_FLOOD_CONTROL_TYPE |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_UNKNOWN_MULTICAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_BROADCAST_FLOOD_CONTROL_TYPE |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_BROADCAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_BRIDGE_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_BRIDGE_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| get_bridge_stats |  |  | no | yes |  |
| get_bridge_stats_ext |  |  | no | yes |  |
| clear_bridge_stats |  |  | no | yes |  |
| create_bridge_port | SAI_BRIDGE_PORT_ATTR_TYPE | SAI_BRIDGE_PORT_TYPE_PORT | yes | yes |  |
|  |  | SAI_BRIDGE_PORT_TYPE_SUB_PORT | yes | yes |  |
|  |  | SAI_BRIDGE_PORT_TYPE_1Q_ROUTER | no | yes |  |
|  |  | SAI_BRIDGE_PORT_TYPE_1D_ROUTER | yes | yes |  |
|  |  | SAI_BRIDGE_PORT_TYPE_TUNNEL | yes | yes |  |
|  |  | SAI_BRIDGE_PORT_TYPE_BRIDGE_PORT_NEXT_HOP_GROUP | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_PORT_ID |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_TAGGING_MODE | SAI_BRIDGE_PORT_TAGGING_MODE_UNTAGGED | yes | yes |  |
|  |  | SAI_BRIDGE_PORT_TAGGING_MODE_TAGGED | yes | no |  |
|  | SAI_BRIDGE_PORT_ATTR_VLAN_ID |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_RIF_ID |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_TUNNEL_ID |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_BRIDGE_ID |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_FDB_LEARNING_MODE | SAI_BRIDGE_PORT_FDB_LEARNING_MODE_DROP | yes | yes |  |
|  |  | SAI_BRIDGE_PORT_FDB_LEARNING_MODE_DISABLE | yes | yes |  |
|  |  | SAI_BRIDGE_PORT_FDB_LEARNING_MODE_HW | yes | yes |  |
|  |  | SAI_BRIDGE_PORT_FDB_LEARNING_MODE_CPU_TRAP | no | yes |  |
|  |  | SAI_BRIDGE_PORT_FDB_LEARNING_MODE_CPU_LOG | no | yes |  |
|  |  | SAI_BRIDGE_PORT_FDB_LEARNING_MODE_FDB_NOTIFICATION | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_MAX_LEARNED_ADDRESSES |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_FDB_LEARNING_LIMIT_VIOLATION_PACKET_ACTION | SAI_PACKET_ACTION_DROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_ADMIN_STATE |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_INGRESS_FILTERING |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_EGRESS_FILTERING |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_ISOLATION_GROUP |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_BRIDGE_PORT_NEXT_HOP_GROUP_ID |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_TUNNEL_TERM_BUM_TX_DROP |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_RX_DROP |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_TX_DROP |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_BRIDGE_PORT_PROTECTION_NEXT_HOP_GROUP_ID |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_BRIDGE_PORT_SET_SWITCHOVER |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_CUSTOM_SRV6_SIDLIST_ID |  | yes | no | yes |
| remove_bridge_port |  |  | yes | yes |  |
| set_bridge_port_attribute | SAI_BRIDGE_PORT_ATTR_TAGGING_MODE | SAI_BRIDGE_PORT_TAGGING_MODE_UNTAGGED | no | yes |  |
|  |  | SAI_BRIDGE_PORT_TAGGING_MODE_TAGGED | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_BRIDGE_ID |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_FDB_LEARNING_MODE | SAI_BRIDGE_PORT_FDB_LEARNING_MODE_DROP | yes | yes |  |
|  |  | SAI_BRIDGE_PORT_FDB_LEARNING_MODE_DISABLE | yes | yes |  |
|  |  | SAI_BRIDGE_PORT_FDB_LEARNING_MODE_HW | yes | yes |  |
|  |  | SAI_BRIDGE_PORT_FDB_LEARNING_MODE_CPU_TRAP | no | yes |  |
|  |  | SAI_BRIDGE_PORT_FDB_LEARNING_MODE_CPU_LOG | no | yes |  |
|  |  | SAI_BRIDGE_PORT_FDB_LEARNING_MODE_FDB_NOTIFICATION | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_MAX_LEARNED_ADDRESSES |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_FDB_LEARNING_LIMIT_VIOLATION_PACKET_ACTION | SAI_PACKET_ACTION_DROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_ADMIN_STATE |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_INGRESS_FILTERING |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_EGRESS_FILTERING |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_ISOLATION_GROUP |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_TUNNEL_TERM_BUM_TX_DROP |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_RX_DROP |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_TX_DROP |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_BRIDGE_PORT_PROTECTION_NEXT_HOP_GROUP_ID |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_BRIDGE_PORT_SET_SWITCHOVER |  | no | yes |  |
| get_bridge_port_attribute | SAI_BRIDGE_PORT_ATTR_TYPE |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_PORT_ID |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_TAGGING_MODE |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_VLAN_ID |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_RIF_ID |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_TUNNEL_ID |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_BRIDGE_ID |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_FDB_LEARNING_MODE |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_MAX_LEARNED_ADDRESSES |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_FDB_LEARNING_LIMIT_VIOLATION_PACKET_ACTION |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_ADMIN_STATE |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_INGRESS_FILTERING |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_EGRESS_FILTERING |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_ISOLATION_GROUP |  | yes | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_BRIDGE_PORT_NEXT_HOP_GROUP_ID |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_TUNNEL_TERM_BUM_TX_DROP |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_RX_DROP |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_TX_DROP |  | no | no |  |
|  | SAI_BRIDGE_PORT_ATTR_BRIDGE_PORT_PROTECTION_NEXT_HOP_GROUP_ID |  | no | yes |  |
|  | SAI_BRIDGE_PORT_ATTR_BRIDGE_PORT_SET_SWITCHOVER |  | no | yes |  |
| get_bridge_port_stats |  |  | no | yes |  |
| get_bridge_port_stats_ext |  |  | no | yes |  |
| clear_bridge_port_stats |  |  | no | no |  |
