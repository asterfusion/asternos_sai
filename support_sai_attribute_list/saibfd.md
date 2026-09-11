| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_bfd_session | SAI_BFD_SESSION_ATTR_TYPE | SAI_BFD_SESSION_TYPE_DEMAND_ACTIVE | no | yes |  |
|  |  | SAI_BFD_SESSION_TYPE_DEMAND_PASSIVE | no | yes |  |
|  |  | SAI_BFD_SESSION_TYPE_ASYNC_ACTIVE | yes | no |  |
|  |  | SAI_BFD_SESSION_TYPE_ASYNC_PASSIVE | no | yes |  |
|  |  | SAI_BFD_SESSION_TYPE_REFLECTOR | no | no |  |
|  |  | SAI_BFD_SESSION_TYPE_INITIATOR | no | no |  |
|  | SAI_BFD_SESSION_ATTR_HW_LOOKUP_VALID |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_VIRTUAL_ROUTER |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_PORT |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_LOCAL_DISCRIMINATOR |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_REMOTE_DISCRIMINATOR |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_UDP_SRC_PORT |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_TC |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_TPID |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_ID |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_PRI |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_CFI |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_HEADER_VALID |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_BFD_ENCAPSULATION_TYPE |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_IPHDR_VERSION |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_TOS |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TTL |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_SRC_IP_ADDRESS |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_DST_IP_ADDRESS |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_TUNNEL_TOS |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TUNNEL_TTL |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TUNNEL_SRC_IP_ADDRESS |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TUNNEL_DST_IP_ADDRESS |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_SRC_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_DST_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_ECHO_ENABLE |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_MULTIHOP |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_CBIT |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_MIN_TX |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_MIN_RX |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_MULTIPLIER |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_OFFLOAD_TYPE |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_SRV6_SIDLIST_ID |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_BFD_SESSION_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_BFD_SESSION_ATTR_USE_NEXT_HOP |  | no | no |  |
|  | SAI_BFD_SESSION_ATTR_NEXT_HOP_ID |  | no | no |  |
|  | SAI_BFD_SESSION_ATTR_CUSTOM_RIF |  | yes | no | yes |
|  | SAI_BFD_SESSION_ATTR_CUSTOM_RX_LEVEL |  | yes | no | yes |
|  | SAI_BFD_SESSION_ATTR_CUSTOM_TX_LEVEL |  | yes | no | yes |
| remove_bfd_session |  |  | yes | yes |  |
| set_bfd_session_attribute | SAI_BFD_SESSION_ATTR_VIRTUAL_ROUTER |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_PORT |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TC |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_TPID |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_PRI |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_CFI |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_BFD_ENCAPSULATION_TYPE |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_IPHDR_VERSION |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TOS |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TTL |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TUNNEL_TOS |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TUNNEL_TTL |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_SRC_MAC_ADDRESS |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_DST_MAC_ADDRESS |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_ECHO_ENABLE |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_MIN_TX |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_MIN_RX |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_MULTIPLIER |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_STATE |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_BFD_SESSION_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_BFD_SESSION_ATTR_NEXT_HOP_ID |  | no | no |  |
|  | SAI_BFD_SESSION_ATTR_CUSTOM_RIF |  | no | no | yes |
|  | SAI_BFD_SESSION_ATTR_CUSTOM_RX_LEVEL |  | yes | no | yes |
|  | SAI_BFD_SESSION_ATTR_CUSTOM_TX_LEVEL |  | yes | no | yes |
| get_bfd_session_attribute | SAI_BFD_SESSION_ATTR_TYPE |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_HW_LOOKUP_VALID |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_VIRTUAL_ROUTER |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_PORT |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_LOCAL_DISCRIMINATOR |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_REMOTE_DISCRIMINATOR |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_UDP_SRC_PORT |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_TC |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_TPID |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_ID |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_PRI |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_CFI |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_VLAN_HEADER_VALID |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_BFD_ENCAPSULATION_TYPE |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_IPHDR_VERSION |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_TOS |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TTL |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_SRC_IP_ADDRESS |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_DST_IP_ADDRESS |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_TUNNEL_TOS |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TUNNEL_TTL |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TUNNEL_SRC_IP_ADDRESS |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_TUNNEL_DST_IP_ADDRESS |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_SRC_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_DST_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_ECHO_ENABLE |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_MULTIHOP |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_REMOTE_MIN_TX |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_REMOTE_MIN_RX |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_STATE |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_CBIT |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_MIN_TX |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_MIN_RX |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_MULTIPLIER |  | yes | yes |  |
|  | SAI_BFD_SESSION_ATTR_OFFLOAD_TYPE |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_NEGOTIATED_TX |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_NEGOTIATED_RX |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_LOCAL_DIAG |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_REMOTE_DIAG |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_REMOTE_MULTIPLIER |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_SRV6_SIDLIST_ID |  | no | yes |  |
|  | SAI_BFD_SESSION_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_BFD_SESSION_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_BFD_SESSION_ATTR_USE_NEXT_HOP |  | no | no |  |
|  | SAI_BFD_SESSION_ATTR_NEXT_HOP_ID |  | no | no |  |
|  | SAI_BFD_SESSION_ATTR_CUSTOM_RIF |  | no | no | yes |
|  | SAI_BFD_SESSION_ATTR_CUSTOM_RX_LEVEL |  | yes | no | yes |
|  | SAI_BFD_SESSION_ATTR_CUSTOM_TX_LEVEL |  | yes | no | yes |
| get_bfd_session_stats | SAI_BFD_SESSION_STAT_IN_PACKETS |  | yes | yes |  |
|  | SAI_BFD_SESSION_STAT_OUT_PACKETS |  | yes | yes |  |
|  | SAI_BFD_SESSION_STAT_DROP_PACKETS |  | yes | yes |  |
| get_bfd_session_stats_ext |  |  | no | yes |  |
| clear_bfd_session_stats | SAI_BFD_SESSION_STAT_IN_PACKETS |  | yes | yes |  |
|  | SAI_BFD_SESSION_STAT_OUT_PACKETS |  | yes | yes |  |
|  | SAI_BFD_SESSION_STAT_DROP_PACKETS |  | no | yes |  |
