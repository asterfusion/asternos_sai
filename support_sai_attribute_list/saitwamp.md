| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_twamp_session | SAI_TWAMP_SESSION_ATTR_TWAMP_MODE | SAI_TWAMP_MODE_FULL | no | no |  |
|  |  | SAI_TWAMP_MODE_LIGHT | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_SESSION_ROLE | SAI_TWAMP_SESSION_ROLE_SENDER | yes | no |  |
|  |  | SAI_TWAMP_SESSION_ROLE_REFLECTOR | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_AUTH_MODE | SAI_TWAMP_SESSION_AUTH_MODE_UNAUTHENTICATED | yes | no |  |
|  |  | SAI_TWAMP_SESSION_AUTH_MODE_AUTHENTICATED | no | no |  |
|  |  | SAI_TWAMP_SESSION_AUTH_MODE_ENCRYPTED | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_HW_LOOKUP_VALID |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_VIRTUAL_ROUTER |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_SRC_MAC |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_DST_MAC |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_VLAN_ID |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_VLAN_PRI |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_VLAN_CFI |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_VLAN_HEADER_VALID |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_SRC_IP |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_DST_IP |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_UDP_SRC_PORT |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_UDP_DST_PORT |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_DSCP |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TTL |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TUNNEL_SRC_MAC |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TUNNEL_DST_MAC |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TUNNEL_OUTER_VLAN_ID |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TUNNEL_OUTER_VLAN_PRI |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TUNNEL_OUTER_VLAN_CFI |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TUNNEL_OUTER_VLAN_HEADER_VALID |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TUNNEL_LABELSTACK |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TUNNEL_SRC_IP |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TUNNEL_DST_IP |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TUNNEL_VNI |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TUNNEL_UDP_SRC_PORT |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TUNNEL_UDP_DST_PORT |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TWAMP_ENCAPSULATION_TYPE | SAI_TWAMP_ENCAPSULATION_TYPE_IP | yes | no |  |
|  |  | SAI_TWAMP_ENCAPSULATION_TYPE_MPLS_L2VPN | no | no |  |
|  |  | SAI_TWAMP_ENCAPSULATION_TYPE_MPLS_L3VPN | no | no |  |
|  |  | SAI_TWAMP_ENCAPSULATION_TYPE_VXLAN | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TWAMP_TIMESTAMP_FORMAT | SAI_TWAMP_TIMESTAMP_FORMAT_NTP | yes | no |  |
|  |  | SAI_TWAMP_TIMESTAMP_FORMAT_PTP | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_SESSION_ENABLE_TRANSMIT |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_PACKET_LENGTH |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_PORT |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TRANSMIT_PORT |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_RECEIVE_PORT |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TWAMP_PKT_TX_MODE | SAI_TWAMP_PKT_TX_MODE_CONTINUOUS | yes | no |  |
|  |  | SAI_TWAMP_PKT_TX_MODE_PACKET_COUNT | yes | no |  |
|  |  | SAI_TWAMP_PKT_TX_MODE_PERIOD | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TX_PKT_CNT |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TX_PKT_PERIOD |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TX_INTERVAL |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_TIMEOUT |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_STATISTICS_INTERVAL |  | yes | no |  |
|  | SAI_TWAMP_SESSION_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_TWAMP_SESSION_ATTR_CUSTOM_TX_LEVEL |  | yes | no | yes |
| remove_twamp_session |  |  | yes | no |  |
| set_twamp_session_attribute | SAI_TWAMP_SESSION_ATTR_SESSION_ENABLE_TRANSMIT |  | yes | no |  |
| get_twamp_session_attribute | SAI_TWAMP_SESSION_ATTR_SESSION_ENABLE_TRANSMIT |  | yes | no |  |
| get_twamp_session_stats | SAI_TWAMP_SESSION_STAT_RX_PACKETS |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_RX_BYTE |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_TX_PACKETS |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_TX_BYTE |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_DROP_PACKETS |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_MAX_LATENCY |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_MIN_LATENCY |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_AVG_LATENCY |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_MAX_JITTER |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_MIN_JITTER |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_AVG_JITTER |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_FIRST_TS |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_LAST_TS |  | yes | no |  |
|  | SAI_TWAMP_SESSION_STAT_DURATION_TS |  | yes | no |  |
| get_twamp_session_stats_ext |  |  | no | no |  |
| clear_twamp_session_stats |  |  | no | no |  |
