| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_srv6_sidlist | SAI_SRV6_SIDLIST_ATTR_TYPE | SAI_SRV6_SIDLIST_TYPE_INSERT | no | no |  |
|  |  | SAI_SRV6_SIDLIST_TYPE_INSERT_RED | no | no |  |
|  |  | SAI_SRV6_SIDLIST_TYPE_ENCAPS | no | no |  |
|  |  | SAI_SRV6_SIDLIST_TYPE_ENCAPS_RED | yes | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_TLV_LIST |  | no | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_SEGMENT_LIST |  | yes | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_NEXT_HOP_ID |  | no | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_SELECTIVE_COUNTER_LIST | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
| remove_srv6_sidlist |  |  | yes | no |  |
| set_srv6_sidlist_attribute | SAI_SRV6_SIDLIST_ATTR_TLV_LIST |  | no | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_SEGMENT_LIST |  | yes | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_NEXT_HOP_ID |  | no | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_SELECTIVE_COUNTER_LIST | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
| get_srv6_sidlist_attribute | SAI_SRV6_SIDLIST_ATTR_TYPE |  | yes | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_TLV_LIST |  | no | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_SEGMENT_LIST |  | yes | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_NEXT_HOP_ID |  | no | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_SRV6_SIDLIST_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| create_srv6_sidlists |  |  | no | no |  |
| remove_srv6_sidlists |  |  | no | no |  |
| get_srv6_sidlist_stats |  |  | no | no |  |
| get_srv6_sidlist_stats_ext |  |  | no | no |  |
| clear_srv6_sidlist_stats |  |  | no | no |  |
| create_my_sid_entry | SAI_MY_SID_ENTRY_ATTR_ENDPOINT_BEHAVIOR | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_E | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_X | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_T | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_DX6 | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_DX4 | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_DT6 | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_DT4 | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_DT46 | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_B6_ENCAPS | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_B6_ENCAPS_RED | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_B6_INSERT | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_B6_INSERT_RED | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UN | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UA | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UDX4 | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UDX6 | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UDT4 | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UDT6 | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UDT46 | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_CUSTOM_DX2 | yes | no | yes |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_CUSTOM_DT2U | yes | no | yes |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_CUSTOM_DT2M | yes | no | yes |
|  | SAI_MY_SID_ENTRY_ATTR_ENDPOINT_BEHAVIOR_FLAVOR | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_NONE | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_PSP | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_USP | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_USD | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_PSP_AND_USP | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_USD_AND_USP | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_PSP_AND_USD | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_PSP_AND_USP_AND_USD | no | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | no |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_NONE_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_DROP_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_CAPTURE_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_ADD_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_ADD_CORRECTED_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_CAPTURE_ADD_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_CAPTURE_ADD_CORRECTED_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_ADD_INGRESS_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_CAPTURE_INGRESS_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_CAPTURE_ADD_INGRESS_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_ADD_INGRESS_EGRESS_TIME_E | no | no | yes |
|  | SAI_MY_SID_ENTRY_ATTR_TRAP_PRIORITY |  | no | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_NEXT_HOP_ID |  | yes | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_TUNNEL_ID |  | no | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_VRF |  | yes | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_COUNTER_ID |  | yes | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_CUSTOM_VLAN_ID |  | yes | no | yes |
|  | SAI_MY_SID_ENTRY_ATTR_CUSTOM_AC_PORT_ID |  | yes | no | yes |
| remove_my_sid_entry |  |  | yes | no |  |
| set_my_sid_entry_attribute | SAI_MY_SID_ENTRY_ATTR_ENDPOINT_BEHAVIOR | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_E | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_X | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_T | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_DX6 | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_DX4 | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_DT6 | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_DT4 | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_DT46 | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_B6_ENCAPS | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_B6_ENCAPS_RED | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_B6_INSERT | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_B6_INSERT_RED | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UN | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UA | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UDX4 | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UDX6 | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UDT4 | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UDT6 | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_UDT46 | no | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_ENDPOINT_BEHAVIOR_FLAVOR | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_NONE | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_PSP | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_USP | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_USD | yes | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_PSP_AND_USP | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_USD_AND_USP | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_PSP_AND_USD | no | no |  |
|  |  | SAI_MY_SID_ENTRY_ENDPOINT_BEHAVIOR_FLAVOR_PSP_AND_USP_AND_USD | no | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | no |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_NONE_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_DROP_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_CAPTURE_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_ADD_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_ADD_CORRECTED_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_CAPTURE_ADD_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_CAPTURE_ADD_CORRECTED_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_ADD_INGRESS_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_CAPTURE_INGRESS_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_CAPTURE_ADD_INGRESS_TIME_E | no | no | yes |
|  |  | SAI_PACKET_ACTION_CUSTOM_PTP_TS_ACTION_ADD_INGRESS_EGRESS_TIME_E | no | no | yes |
|  | SAI_MY_SID_ENTRY_ATTR_TRAP_PRIORITY |  | no | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_NEXT_HOP_ID |  | yes | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_TUNNEL_ID |  | no | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_VRF |  | yes | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_COUNTER_ID |  | yes | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_CUSTOM_IS_GSID |  | yes | no | yes |
| get_my_sid_entry_attribute | SAI_MY_SID_ENTRY_ATTR_ENDPOINT_BEHAVIOR |  | yes | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_TRAP_PRIORITY |  | no | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_NEXT_HOP_ID |  | yes | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_TUNNEL_ID |  | no | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_VRF |  | yes | no |  |
|  | SAI_MY_SID_ENTRY_ATTR_COUNTER_ID |  | yes | no |  |
| create_my_sid_entries |  |  | no | no |  |
| remove_my_sid_entries |  |  | no | no |  |
| set_my_sid_entries_attribute |  |  | no | no |  |
| get_my_sid_entries_attribute |  |  | no | no |  |
