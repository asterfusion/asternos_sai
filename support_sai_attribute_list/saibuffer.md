| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_buffer_pool | SAI_BUFFER_POOL_ATTR_TYPE | SAI_BUFFER_POOL_TYPE_INGRESS | yes | yes |  |
|  |  | SAI_BUFFER_POOL_TYPE_EGRESS | yes | yes |  |
|  |  | SAI_BUFFER_POOL_TYPE_BOTH | no | yes |  |
|  | SAI_BUFFER_POOL_ATTR_SIZE |  | yes | yes |  |
|  | SAI_BUFFER_POOL_ATTR_THRESHOLD_MODE | SAI_BUFFER_POOL_THRESHOLD_MODE_STATIC | yes | yes |  |
|  |  | SAI_BUFFER_POOL_THRESHOLD_MODE_DYNAMIC | yes | yes |  |
|  | SAI_BUFFER_POOL_ATTR_TAM |  | no | yes |  |
|  | SAI_BUFFER_POOL_ATTR_XOFF_SIZE |  | yes | yes |  |
|  | SAI_BUFFER_POOL_ATTR_WRED_PROFILE_ID |  | no | yes |  |
|  | SAI_BUFFER_POOL_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| remove_buffer_pool |  |  | no | yes |  |
| set_buffer_pool_attribute | SAI_BUFFER_POOL_ATTR_SIZE |  | yes | yes |  |
|  | SAI_BUFFER_POOL_ATTR_TAM |  | no | yes |  |
|  | SAI_BUFFER_POOL_ATTR_XOFF_SIZE |  | yes | yes |  |
|  | SAI_BUFFER_POOL_ATTR_WRED_PROFILE_ID |  | no | yes |  |
|  | SAI_BUFFER_POOL_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| get_buffer_pool_attribute | SAI_BUFFER_POOL_ATTR_SHARED_SIZE |  | no | yes |  |
|  | SAI_BUFFER_POOL_ATTR_TYPE |  | yes | yes |  |
|  | SAI_BUFFER_POOL_ATTR_SIZE |  | yes | yes |  |
|  | SAI_BUFFER_POOL_ATTR_THRESHOLD_MODE |  | yes | yes |  |
|  | SAI_BUFFER_POOL_ATTR_TAM |  | no | yes |  |
|  | SAI_BUFFER_POOL_ATTR_XOFF_SIZE |  | yes | yes |  |
|  | SAI_BUFFER_POOL_ATTR_WRED_PROFILE_ID |  | no | yes |  |
|  | SAI_BUFFER_POOL_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| get_buffer_pool_stats | SAI_BUFFER_POOL_STAT_CURR_OCCUPANCY_BYTES |  | yes | yes |  |
|  | SAI_BUFFER_POOL_STAT_WATERMARK_BYTES |  | no | yes |  |
|  | SAI_BUFFER_POOL_STAT_DROPPED_PACKETS |  | no | yes |  |
|  | SAI_BUFFER_POOL_STAT_GREEN_WRED_DROPPED_PACKETS |  | no | yes |  |
|  | SAI_BUFFER_POOL_STAT_GREEN_WRED_DROPPED_BYTES |  | no | yes |  |
|  | SAI_BUFFER_POOL_STAT_YELLOW_WRED_DROPPED_PACKETS |  | no | yes |  |
|  | SAI_BUFFER_POOL_STAT_YELLOW_WRED_DROPPED_BYTES |  | no | yes |  |
|  | SAI_BUFFER_POOL_STAT_RED_WRED_DROPPED_PACKETS |  | no | yes |  |
|  | SAI_BUFFER_POOL_STAT_RED_WRED_DROPPED_BYTES |  | no | yes |  |
|  | SAI_BUFFER_POOL_STAT_WRED_DROPPED_PACKETS |  | no | yes |  |
|  | SAI_BUFFER_POOL_STAT_WRED_DROPPED_BYTES |  | no | yes |  |
|  | SAI_BUFFER_POOL_STAT_GREEN_WRED_ECN_MARKED_PACKETS |  | no | no |  |
|  | SAI_BUFFER_POOL_STAT_GREEN_WRED_ECN_MARKED_BYTES |  | no | no |  |
|  | SAI_BUFFER_POOL_STAT_YELLOW_WRED_ECN_MARKED_PACKETS |  | no | no |  |
|  | SAI_BUFFER_POOL_STAT_YELLOW_WRED_ECN_MARKED_BYTES |  | no | no |  |
|  | SAI_BUFFER_POOL_STAT_RED_WRED_ECN_MARKED_PACKETS |  | no | no |  |
|  | SAI_BUFFER_POOL_STAT_RED_WRED_ECN_MARKED_BYTES |  | no | no |  |
|  | SAI_BUFFER_POOL_STAT_WRED_ECN_MARKED_PACKETS |  | no | no |  |
|  | SAI_BUFFER_POOL_STAT_WRED_ECN_MARKED_BYTES |  | no | no |  |
|  | SAI_BUFFER_POOL_STAT_XOFF_ROOM_CURR_OCCUPANCY_BYTES |  | yes | yes |  |
|  | SAI_BUFFER_POOL_STAT_XOFF_ROOM_WATERMARK_BYTES |  | yes | yes |  |
|  | SAI_BUFFER_POOL_STAT_XOFF_ROOM_CURR_OCCUPANCY_CELLS |  | no | no |  |
|  | SAI_BUFFER_POOL_STAT_XOFF_ROOM_WATERMARK_CELLS |  | no | no |  |
|  | SAI_BUFFER_POOL_STAT_CURR_OCCUPANCY_CELLS |  | no | no |  |
|  | SAI_BUFFER_POOL_STAT_WATERMARK_CELLS |  | no | no |  |
| get_buffer_pool_stats_ext |  |  | no | yes |  |
| clear_buffer_pool_stats |  |  | no | yes |  |
| create_ingress_priority_group | SAI_INGRESS_PRIORITY_GROUP_ATTR_BUFFER_PROFILE |  | yes | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_PORT |  | yes | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_TAM |  | no | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_INDEX |  | yes | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| remove_ingress_priority_group |  |  | no | yes |  |
| set_ingress_priority_group_attribute | SAI_INGRESS_PRIORITY_GROUP_ATTR_BUFFER_PROFILE |  | yes | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_TAM |  | no | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| get_ingress_priority_group_attribute | SAI_INGRESS_PRIORITY_GROUP_ATTR_BUFFER_PROFILE |  | yes | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_PORT |  | yes | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_TAM |  | no | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_INDEX |  | yes | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_INGRESS_PRIORITY_GROUP_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| get_ingress_priority_group_stats | SAI_INGRESS_PRIORITY_GROUP_STAT_PACKETS |  | no | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_BYTES |  | no | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_CURR_OCCUPANCY_BYTES |  | yes | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_WATERMARK_BYTES |  | no | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_SHARED_CURR_OCCUPANCY_BYTES |  | no | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_SHARED_WATERMARK_BYTES |  | no | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_XOFF_ROOM_CURR_OCCUPANCY_BYTES |  | yes | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_XOFF_ROOM_WATERMARK_BYTES |  | no | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_DROPPED_PACKETS |  | no | yes |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_CURR_OCCUPANCY_CELLS |  | no | no |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_WATERMARK_CELLS |  | no | no |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_SHARED_CURR_OCCUPANCY_CELLS |  | no | no |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_SHARED_WATERMARK_CELLS |  | no | no |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_XOFF_ROOM_CURR_OCCUPANCY_CELLS |  | no | no |  |
|  | SAI_INGRESS_PRIORITY_GROUP_STAT_XOFF_ROOM_WATERMARK_CELLS |  | no | no |  |
| get_ingress_priority_group_stats_ext |  |  | no | yes |  |
| clear_ingress_priority_group_stats |  |  | no | yes |  |
| create_buffer_profile | SAI_BUFFER_PROFILE_ATTR_POOL_ID |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_RESERVED_BUFFER_SIZE |  | yes | no |  |
|  | SAI_BUFFER_PROFILE_ATTR_BUFFER_SIZE |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_THRESHOLD_MODE | SAI_BUFFER_PROFILE_THRESHOLD_MODE_STATIC | yes | yes |  |
|  |  | SAI_BUFFER_PROFILE_THRESHOLD_MODE_DYNAMIC | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_SHARED_DYNAMIC_TH |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_SHARED_STATIC_TH |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_XOFF_TH |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_XON_TH |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_XON_OFFSET_TH |  | no | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_PACKET_ADMISSION_FAIL_ACTION | SAI_BUFFER_PROFILE_PACKET_ADMISSION_FAIL_ACTION_DROP | no | no |  |
|  |  | SAI_BUFFER_PROFILE_PACKET_ADMISSION_FAIL_ACTION_DROP_AND_TRIM | no | no |  |
| remove_buffer_profile |  |  | no | yes |  |
| set_buffer_profile_attribute | SAI_BUFFER_PROFILE_ATTR_RESERVED_BUFFER_SIZE |  | no | no |  |
|  | SAI_BUFFER_PROFILE_ATTR_BUFFER_SIZE |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_SHARED_DYNAMIC_TH |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_SHARED_STATIC_TH |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_XOFF_TH |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_XON_TH |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_XON_OFFSET_TH |  | no | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_PACKET_ADMISSION_FAIL_ACTION | SAI_BUFFER_PROFILE_PACKET_ADMISSION_FAIL_ACTION_DROP | no | no |  |
|  |  | SAI_BUFFER_PROFILE_PACKET_ADMISSION_FAIL_ACTION_DROP_AND_TRIM | no | no |  |
| get_buffer_profile | SAI_BUFFER_PROFILE_ATTR_POOL_ID |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_RESERVED_BUFFER_SIZE |  | yes | no |  |
|  | SAI_BUFFER_PROFILE_ATTR_BUFFER_SIZE |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_THRESHOLD_MODE |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_SHARED_DYNAMIC_TH |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_SHARED_STATIC_TH |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_XOFF_TH |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_XON_TH |  | yes | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_XON_OFFSET_TH |  | no | yes |  |
|  | SAI_BUFFER_PROFILE_ATTR_PACKET_ADMISSION_FAIL_ACTION |  | no | no |  |
| set_ingress_priority_groups_attribute |  |  | no | no |  |
| get_ingress_priority_groups_attribute |  |  | no | no |  |
