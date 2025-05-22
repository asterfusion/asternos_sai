| Api | Sai Attribute | Enums | Support | Private |
| --- | --- | --- | --- | --- |
| create_policer | SAI_POLICER_ATTR_METER_TYPE | SAI_METER_TYPE_PACKETS | yes |  |
|  |  | SAI_METER_TYPE_BYTES | yes |  |
|  | SAI_POLICER_ATTR_MODE | SAI_POLICER_MODE_SR_TCM | yes |  |
|  |  | SAI_POLICER_MODE_TR_TCM | yes |  |
|  |  | SAI_POLICER_MODE_STORM_CONTROL | no |  |
|  | SAI_POLICER_ATTR_COLOR_SOURCE |  | yes |  |
|  | SAI_POLICER_ATTR_CBS |  | yes |  |
|  | SAI_POLICER_ATTR_CIR |  | yes |  |
|  | SAI_POLICER_ATTR_PBS |  | yes |  |
|  | SAI_POLICER_ATTR_PIR |  | yes |  |
|  | SAI_POLICER_ATTR_GREEN_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no |  |
|  |  | SAI_PACKET_ACTION_TRAP | no |  |
|  |  | SAI_PACKET_ACTION_LOG | no |  |
|  |  | SAI_PACKET_ACTION_DENY | no |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no |  |
|  |  | SAI_PACKET_ACTION_REMARK | yes |  |
|  | SAI_POLICER_ATTR_YELLOW_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no |  |
|  |  | SAI_PACKET_ACTION_TRAP | no |  |
|  |  | SAI_PACKET_ACTION_LOG | no |  |
|  |  | SAI_PACKET_ACTION_DENY | no |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no |  |
|  |  | SAI_PACKET_ACTION_REMARK | yes |  |
|  | SAI_POLICER_ATTR_RED_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no |  |
|  |  | SAI_PACKET_ACTION_TRAP | no |  |
|  |  | SAI_PACKET_ACTION_LOG | no |  |
|  |  | SAI_PACKET_ACTION_DENY | no |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no |  |
|  |  | SAI_PACKET_ACTION_REMARK | yes |  |
|  | SAI_POLICER_ATTR_ENABLE_COUNTER_PACKET_ACTION_LIST |  | yes |  |
|  | SAI_POLICER_ATTR_OBJECT_STAGE | SAI_OBJECT_STAGE_BOTH | no |  |
|  |  | SAI_OBJECT_STAGE_INGRESS | no |  |
|  |  | SAI_OBJECT_STAGE_EGRESS | no |  |
|  | SAI_POLICER_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no |  |
|  | SAI_POLICER_ATTR_SELECTIVE_COUNTER_LIST |  | no |  |
|  | SAI_POLICER_ATTR_CUSTOM_QOS_PROFILE |  | yes | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_DOT1P |  | yes | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_DSCP |  | yes | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_TC |  | yes | yes |
| remove_policer |  |  | yes |  |
| set_policer_attribute | SAI_POLICER_ATTR_CBS |  | yes |  |
|  | SAI_POLICER_ATTR_CIR |  | yes |  |
|  | SAI_POLICER_ATTR_PBS |  | yes |  |
|  | SAI_POLICER_ATTR_PIR |  | yes |  |
|  | SAI_POLICER_ATTR_GREEN_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no |  |
|  |  | SAI_PACKET_ACTION_TRAP | no |  |
|  |  | SAI_PACKET_ACTION_LOG | no |  |
|  |  | SAI_PACKET_ACTION_DENY | no |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no |  |
|  |  | SAI_PACKET_ACTION_REMARK | yes |  |
|  | SAI_POLICER_ATTR_YELLOW_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no |  |
|  |  | SAI_PACKET_ACTION_TRAP | no |  |
|  |  | SAI_PACKET_ACTION_LOG | no |  |
|  |  | SAI_PACKET_ACTION_DENY | no |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no |  |
|  |  | SAI_PACKET_ACTION_REMARK | yes |  |
|  | SAI_POLICER_ATTR_RED_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no |  |
|  |  | SAI_PACKET_ACTION_TRAP | no |  |
|  |  | SAI_PACKET_ACTION_LOG | no |  |
|  |  | SAI_PACKET_ACTION_DENY | no |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no |  |
|  |  | SAI_PACKET_ACTION_REMARK | yes |  |
|  | SAI_POLICER_ATTR_ENABLE_COUNTER_PACKET_ACTION_LIST |  | yes |  |
|  | SAI_POLICER_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no |  |
|  | SAI_POLICER_ATTR_SELECTIVE_COUNTER_LIST |  | no |  |
|  | SAI_POLICER_ATTR_CUSTOM_QOS_PROFILE |  | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_DOT1P |  | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_DSCP |  | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_TC |  | no | yes |
| get_policer_attribute | SAI_POLICER_ATTR_METER_TYPE |  | yes |  |
|  | SAI_POLICER_ATTR_COLOR_SOURCE |  | yes |  |
|  | SAI_POLICER_ATTR_CBS |  | yes |  |
|  | SAI_POLICER_ATTR_CIR |  | yes |  |
|  | SAI_POLICER_ATTR_PBS |  | yes |  |
|  | SAI_POLICER_ATTR_PIR |  | yes |  |
|  | SAI_POLICER_ATTR_GREEN_PACKET_ACTION |  | yes |  |
|  | SAI_POLICER_ATTR_YELLOW_PACKET_ACTION |  | yes |  |
|  | SAI_POLICER_ATTR_RED_PACKET_ACTION |  | yes |  |
|  | SAI_POLICER_ATTR_ENABLE_COUNTER_PACKET_ACTION_LIST |  | yes |  |
|  | SAI_POLICER_ATTR_OBJECT_STAGE |  | no |  |
|  | SAI_POLICER_ATTR_STATS_COUNT_MODE |  | no |  |
|  | SAI_POLICER_ATTR_SELECTIVE_COUNTER_LIST |  | no |  |
|  | SAI_POLICER_ATTR_CUSTOM_QOS_PROFILE |  | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_DOT1P |  | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_DSCP |  | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_TC |  | no | yes |
| get_policer_stats | SAI_POLICER_STAT_PACKETS |  | yes |  |
|  | SAI_POLICER_STAT_ATTR_BYTES |  | yes |  |
|  | SAI_POLICER_STAT_GREEN_PACKETS |  | yes |  |
|  | SAI_POLICER_STAT_GREEN_BYTES |  | yes |  |
|  | SAI_POLICER_STAT_YELLOW_PACKETS |  | yes |  |
|  | SAI_POLICER_STAT_YELLOW_BYTES |  | yes |  |
|  | SAI_POLICER_STAT_RED_PACKETS |  | yes |  |
|  | SAI_POLICER_STAT_RED_BYTES |  | yes |  |
| get_policer_stats_ext |  |  | no |  |
| clear_policer_stats |  |  | yes |  |




