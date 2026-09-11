| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_mirror_session | SAI_MIRROR_SESSION_ATTR_TYPE | SAI_MIRROR_SESSION_TYPE_LOCAL | yes | yes |  |
|  |  | SAI_MIRROR_SESSION_TYPE_REMOTE | yes | yes |  |
|  |  | SAI_MIRROR_SESSION_TYPE_ENHANCED_REMOTE | yes | yes |  |
|  |  | SAI_MIRROR_SESSION_TYPE_SFLOW | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_MONITOR_PORT |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_TRUNCATE_SIZE |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_SAMPLE_RATE |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_CONGESTION_MODE | SAI_MIRROR_SESSION_CONGESTION_MODE_INDEPENDENT | yes | no |  |
|  |  | SAI_MIRROR_SESSION_CONGESTION_MODE_CORRELATED | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_TC |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_TPID |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_ID |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_PRI |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_CFI |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_HEADER_VALID |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_ERSPAN_ENCAPSULATION_TYPE | SAI_ERSPAN_ENCAPSULATION_TYPE_MIRROR_L3_GRE_TUNNEL | yes | yes |  |
|  |  | SAI_ERSPAN_ENCAPSULATION_TYPE_II | no | no |  |
|  |  | SAI_ERSPAN_ENCAPSULATION_TYPE_III | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_IPHDR_VERSION |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_TOS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_TTL |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_SRC_IP_ADDRESS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_DST_IP_ADDRESS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_SRC_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_DST_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_GRE_PROTOCOL_TYPE |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_MONITOR_PORTLIST_VALID |  | yes | no |  |
|  | SAI_MIRROR_SESSION_ATTR_POLICER |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_UDP_SRC_PORT |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_UDP_DST_PORT |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_COUNTER_ID |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_ERSPAN_SESSION_ID |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_GRE_HEADER_FIRST_16BIT |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_LABEL |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_CUSTOM_VIRTUAL_ROUTER |  | yes | no | yes |
|  | SAI_MIRROR_SESSION_ATTR_CUSTOM_HW_LOOKUP_VALID |  | yes | no | yes |
| remove_mirror_session |  |  | yes | yes |  |
| set_mirror_session_attribute | SAI_MIRROR_SESSION_ATTR_MONITOR_PORT |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_TRUNCATE_SIZE |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_SAMPLE_RATE |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_CONGESTION_MODE | SAI_MIRROR_SESSION_CONGESTION_MODE_INDEPENDENT | yes | no |  |
|  |  | SAI_MIRROR_SESSION_CONGESTION_MODE_CORRELATED | yes | no |  |
|  | SAI_MIRROR_SESSION_ATTR_TC |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_TPID |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_ID |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_PRI |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_CFI |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_HEADER_VALID |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_IPHDR_VERSION |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_TOS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_TTL |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_SRC_IP_ADDRESS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_DST_IP_ADDRESS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_SRC_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_DST_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_GRE_PROTOCOL_TYPE |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_POLICER |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_UDP_SRC_PORT |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_UDP_DST_PORT |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_COUNTER_ID |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_ERSPAN_SESSION_ID |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_GRE_HEADER_FIRST_16BIT |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_LABEL |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_CUSTOM_VIRTUAL_ROUTER |  | yes | no | yes |
|  | SAI_MIRROR_SESSION_ATTR_CUSTOM_HW_LOOKUP_VALID |  | yes | no | yes |
| get_mirror_session_attribute | SAI_MIRROR_SESSION_ATTR_TYPE |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_MONITOR_PORT |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_TRUNCATE_SIZE |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_SAMPLE_RATE |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_CONGESTION_MODE |  | yes | no |  |
|  | SAI_MIRROR_SESSION_ATTR_TC |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_TPID |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_ID |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_PRI |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_CFI |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_VLAN_HEADER_VALID |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_ERSPAN_ENCAPSULATION_TYPE |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_IPHDR_VERSION |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_TOS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_TTL |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_SRC_IP_ADDRESS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_DST_IP_ADDRESS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_SRC_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_DST_MAC_ADDRESS |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_GRE_PROTOCOL_TYPE |  | yes | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_MONITOR_PORTLIST_VALID |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_POLICER |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_UDP_SRC_PORT |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_UDP_DST_PORT |  | no | yes |  |
|  | SAI_MIRROR_SESSION_ATTR_COUNTER_ID |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_ERSPAN_SESSION_ID |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_GRE_HEADER_FIRST_16BIT |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_LABEL |  | no | no |  |
|  | SAI_MIRROR_SESSION_ATTR_CUSTOM_VIRTUAL_ROUTER |  | yes | no | yes |
|  | SAI_MIRROR_SESSION_ATTR_CUSTOM_HW_LOOKUP_VALID |  | yes | no | yes |
