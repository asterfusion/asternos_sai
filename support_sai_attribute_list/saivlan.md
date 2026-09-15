| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_vlan | SAI_VLAN_ATTR_VLAN_ID |  | yes | yes |  |
|  | SAI_VLAN_ATTR_MAX_LEARNED_ADDRESSES |  | yes | yes |  |
|  | SAI_VLAN_ATTR_STP_INSTANCE |  | yes | yes |  |
|  | SAI_VLAN_ATTR_LEARN_DISABLE |  | yes | yes |  |
|  | SAI_VLAN_ATTR_IPV4_MCAST_LOOKUP_KEY_TYPE | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_MAC_DA | no | yes |  |
|  |  | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_XG | no | no |  |
|  |  | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_SG | no | no |  |
|  |  | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_XG_AND_SG | no | no |  |
|  | SAI_VLAN_ATTR_IPV6_MCAST_LOOKUP_KEY_TYPE | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_MAC_DA | no | yes |  |
|  |  | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_XG | no | no |  |
|  |  | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_SG | no | no |  |
|  |  | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_XG_AND_SG | no | no |  |
|  | SAI_VLAN_ATTR_UNKNOWN_NON_IP_MCAST_OUTPUT_GROUP_ID |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_IPV4_MCAST_OUTPUT_GROUP_ID |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_IPV6_MCAST_OUTPUT_GROUP_ID |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_LINKLOCAL_MCAST_OUTPUT_GROUP_ID |  | no | yes |  |
|  | SAI_VLAN_ATTR_INGRESS_ACL |  | no | yes |  |
|  | SAI_VLAN_ATTR_EGRESS_ACL |  | no | yes |  |
|  | SAI_VLAN_ATTR_META_DATA |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_UNICAST_FLOOD_CONTROL_TYPE | SAI_VLAN_FLOOD_CONTROL_TYPE_ALL | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_NONE | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_L2MC_GROUP | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_COMBINED | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_UNICAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_MULTICAST_FLOOD_CONTROL_TYPE | SAI_VLAN_FLOOD_CONTROL_TYPE_ALL | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_NONE | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_L2MC_GROUP | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_COMBINED | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_MULTICAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_VLAN_ATTR_BROADCAST_FLOOD_CONTROL_TYPE | SAI_VLAN_FLOOD_CONTROL_TYPE_ALL | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_NONE | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_L2MC_GROUP | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_COMBINED | no | yes |  |
|  | SAI_VLAN_ATTR_BROADCAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_VLAN_ATTR_CUSTOM_IGMP_SNOOPING_ENABLE |  | yes | yes |  |
|  | SAI_VLAN_ATTR_TAM_OBJECT |  | no | yes |  |
|  | SAI_VLAN_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
|  | SAI_VLAN_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_VLAN_ATTR_CUSTOM_MAC_TRIGGER_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_INGRESS_MIRROR_SESSION |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_EGRESS_MIRROR_SESSION |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IPSG_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IPSGV6_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_DAI_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_SAVI_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IPSG_TRUST_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_DAI_TRUST_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IPSGV6_TRUST_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_SAVI_TRUST_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IGNORE_MSTP_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_MLD_SNOOPING_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_CREATE_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_REMOVE_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_TRAP_ARP |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_COUNTER_ENABLE |  | yes | no | yes |
| remove_vlan |  |  | yes | yes |  |
| set_vlan_attribute | SAI_VLAN_ATTR_MAX_LEARNED_ADDRESSES |  | yes | yes |  |
|  | SAI_VLAN_ATTR_STP_INSTANCE |  | yes | yes |  |
|  | SAI_VLAN_ATTR_LEARN_DISABLE |  | yes | yes |  |
|  | SAI_VLAN_ATTR_IPV4_MCAST_LOOKUP_KEY_TYPE | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_MAC_DA | no | yes |  |
|  |  | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_XG | no | no |  |
|  |  | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_SG | no | no |  |
|  |  | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_XG_AND_SG | no | no |  |
|  | SAI_VLAN_ATTR_IPV6_MCAST_LOOKUP_KEY_TYPE | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_MAC_DA | no | yes |  |
|  |  | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_XG | no | no |  |
|  |  | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_SG | no | no |  |
|  |  | SAI_VLAN_MCAST_LOOKUP_KEY_TYPE_XG_AND_SG | no | no |  |
|  | SAI_VLAN_ATTR_UNKNOWN_NON_IP_MCAST_OUTPUT_GROUP_ID |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_IPV4_MCAST_OUTPUT_GROUP_ID |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_IPV6_MCAST_OUTPUT_GROUP_ID |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_LINKLOCAL_MCAST_OUTPUT_GROUP_ID |  | no | yes |  |
|  | SAI_VLAN_ATTR_INGRESS_ACL |  | no | yes |  |
|  | SAI_VLAN_ATTR_EGRESS_ACL |  | no | yes |  |
|  | SAI_VLAN_ATTR_META_DATA |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_UNICAST_FLOOD_CONTROL_TYPE | SAI_VLAN_FLOOD_CONTROL_TYPE_ALL | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_NONE | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_L2MC_GROUP | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_COMBINED | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_UNICAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_MULTICAST_FLOOD_CONTROL_TYPE | SAI_VLAN_FLOOD_CONTROL_TYPE_ALL | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_NONE | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_L2MC_GROUP | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_COMBINED | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_MULTICAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_VLAN_ATTR_BROADCAST_FLOOD_CONTROL_TYPE | SAI_VLAN_FLOOD_CONTROL_TYPE_ALL | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_NONE | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_L2MC_GROUP | yes | yes |  |
|  |  | SAI_VLAN_FLOOD_CONTROL_TYPE_COMBINED | no | yes |  |
|  | SAI_VLAN_ATTR_BROADCAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_VLAN_ATTR_CUSTOM_IGMP_SNOOPING_ENABLE |  | yes | yes |  |
|  | SAI_VLAN_ATTR_TAM_OBJECT |  | no | yes |  |
|  | SAI_VLAN_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
|  | SAI_VLAN_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_VLAN_ATTR_CUSTOM_MAC_TRIGGER_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_INGRESS_MIRROR_SESSION |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_EGRESS_MIRROR_SESSION |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IPSG_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IPSGV6_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_DAI_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_SAVI_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IPSG_TRUST_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_DAI_TRUST_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IPSGV6_TRUST_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_SAVI_TRUST_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IGNORE_MSTP_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_MLD_SNOOPING_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_CREATE_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_REMOVE_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_TRAP_ARP |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_COUNTER_ENABLE |  | yes | no | yes |
| get_vlan_attribute | SAI_VLAN_ATTR_VLAN_ID |  | yes | yes |  |
|  | SAI_VLAN_ATTR_MEMBER_LIST |  | yes | yes |  |
|  | SAI_VLAN_ATTR_MAX_LEARNED_ADDRESSES |  | yes | yes |  |
|  | SAI_VLAN_ATTR_STP_INSTANCE |  | yes | yes |  |
|  | SAI_VLAN_ATTR_LEARN_DISABLE |  | yes | yes |  |
|  | SAI_VLAN_ATTR_IPV4_MCAST_LOOKUP_KEY_TYPE |  | no | yes |  |
|  | SAI_VLAN_ATTR_IPV4_MCAST_LOOKUP_KEY_TYPE |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_NON_IP_MCAST_OUTPUT_GROUP_ID |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_IPV4_MCAST_OUTPUT_GROUP_ID |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_IPV6_MCAST_OUTPUT_GROUP_ID |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_LINKLOCAL_MCAST_OUTPUT_GROUP_ID |  | no | yes |  |
|  | SAI_VLAN_ATTR_INGRESS_ACL |  | no | yes |  |
|  | SAI_VLAN_ATTR_EGRESS_ACL |  | no | yes |  |
|  | SAI_VLAN_ATTR_META_DATA |  | no | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_UNICAST_FLOOD_CONTROL_TYPE |  | yes | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_UNICAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_MULTICAST_FLOOD_CONTROL_TYPE |  | yes | yes |  |
|  | SAI_VLAN_ATTR_UNKNOWN_MULTICAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_VLAN_ATTR_BROADCAST_FLOOD_CONTROL_TYPE |  | yes | yes |  |
|  | SAI_VLAN_ATTR_BROADCAST_FLOOD_GROUP |  | yes | yes |  |
|  | SAI_VLAN_ATTR_CUSTOM_IGMP_SNOOPING_ENABLE |  | yes | yes |  |
|  | SAI_VLAN_ATTR_TAM_OBJECT |  | no | yes |  |
|  | SAI_VLAN_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_VLAN_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_VLAN_ATTR_CUSTOM_MAC_TRIGGER_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_INGRESS_MIRROR_SESSION |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_EGRESS_MIRROR_SESSION |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IPSG_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IPSGV6_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_DAI_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_SAVI_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IPSG_TRUST_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_DAI_TRUST_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IPSGV6_TRUST_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_SAVI_TRUST_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_IGNORE_MSTP_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_MLD_SNOOPING_ENABLE |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_CREATE_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_REMOVE_PORTS |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_TRAP_ARP |  | yes | no | yes |
|  | SAI_VLAN_ATTR_CUSTOM_COUNTER_ENABLE |  | yes | no | yes |
| create_vlan_member | SAI_VLAN_MEMBER_ATTR_VLAN_ID |  | yes | yes |  |
|  | SAI_VLAN_MEMBER_ATTR_BRIDGE_PORT_ID |  | yes | yes |  |
|  | SAI_VLAN_MEMBER_ATTR_VLAN_TAGGING_MODE | SAI_VLAN_TAGGING_MODE_UNTAGGED | yes | yes |  |
|  |  | SAI_VLAN_TAGGING_MODE_TAGGED | yes | yes |  |
|  |  | SAI_VLAN_TAGGING_MODE_PRIORITY_TAGGED | yes | no |  |
|  | SAI_VLAN_MEMBER_ATTR_TUNNEL_TERM_BUM_TX_DROP |  | no | yes |  |
|  | SAI_VLAN_MEMBER_ATTR_RX_DROP |  | no | no |  |
|  | SAI_VLAN_MEMBER_ATTR_TX_DROP |  | no | no |  |
| remove_vlan_member |  |  | yes | yes |  |
| set_vlan_member_attribute | SAI_VLAN_MEMBER_ATTR_VLAN_TAGGING_MODE | SAI_VLAN_TAGGING_MODE_UNTAGGED | yes | yes |  |
|  |  | SAI_VLAN_TAGGING_MODE_TAGGED | yes | yes |  |
|  |  | SAI_VLAN_TAGGING_MODE_PRIORITY_TAGGED | yes | no |  |
|  | SAI_VLAN_MEMBER_ATTR_TUNNEL_TERM_BUM_TX_DROP |  | no | yes |  |
|  | SAI_VLAN_MEMBER_ATTR_RX_DROP |  | no | no |  |
|  | SAI_VLAN_MEMBER_ATTR_TX_DROP |  | no | no |  |
| get_vlan_member_attribute | SAI_VLAN_MEMBER_ATTR_VLAN_ID |  | yes | yes |  |
|  | SAI_VLAN_MEMBER_ATTR_BRIDGE_PORT_ID |  | yes | yes |  |
|  | SAI_VLAN_MEMBER_ATTR_VLAN_TAGGING_MODE |  | yes | yes |  |
|  | SAI_VLAN_MEMBER_ATTR_TUNNEL_TERM_BUM_TX_DROP |  | no | yes |  |
|  | SAI_VLAN_MEMBER_ATTR_RX_DROP |  | no | no |  |
|  | SAI_VLAN_MEMBER_ATTR_TX_DROP |  | no | no |  |
| create_vlan_members |  |  | no | yes |  |
| remove_vlan_members |  |  | no | yes |  |
| get_vlan_stats | SAI_VLAN_STAT_IN_OCTETS |  | no | no |  |
|  | SAI_VLAN_STAT_IN_PACKETS |  | no | no |  |
|  | SAI_VLAN_STAT_IN_UCAST_PKTS |  | no | no |  |
|  | SAI_VLAN_STAT_IN_NON_UCAST_PKTS |  | no | no |  |
|  | SAI_VLAN_STAT_IN_DISCARDS |  | no | no |  |
|  | SAI_VLAN_STAT_IN_ERRORS |  | no | no |  |
|  | SAI_VLAN_STAT_IN_UNKNOWN_PROTOS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_OCTETS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_PACKETS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_UCAST_PKTS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_NON_UCAST_PKTS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_DISCARDS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_ERRORS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_QLEN |  | no | no |  |
| get_vlan_stats_ext |  |  | no | yes |  |
| clear_vlan_stats | SAI_VLAN_STAT_IN_OCTETS |  | no | no |  |
|  | SAI_VLAN_STAT_IN_PACKETS |  | no | no |  |
|  | SAI_VLAN_STAT_IN_UCAST_PKTS |  | no | no |  |
|  | SAI_VLAN_STAT_IN_NON_UCAST_PKTS |  | no | no |  |
|  | SAI_VLAN_STAT_IN_DISCARDS |  | no | no |  |
|  | SAI_VLAN_STAT_IN_ERRORS |  | no | no |  |
|  | SAI_VLAN_STAT_IN_UNKNOWN_PROTOS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_OCTETS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_PACKETS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_UCAST_PKTS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_NON_UCAST_PKTS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_DISCARDS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_ERRORS |  | no | no |  |
|  | SAI_VLAN_STAT_OUT_QLEN |  | no | no |  |
