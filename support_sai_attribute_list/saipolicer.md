| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_policer | SAI_POLICER_ATTR_METER_TYPE | SAI_METER_TYPE_PACKETS | yes | yes |  |
|  |  | SAI_METER_TYPE_BYTES | yes | yes |  |
|  | SAI_POLICER_ATTR_MODE | SAI_POLICER_MODE_SR_TCM | yes | yes |  |
|  |  | SAI_POLICER_MODE_TR_TCM | yes | yes |  |
|  |  | SAI_POLICER_MODE_STORM_CONTROL | no | yes |  |
|  | SAI_POLICER_ATTR_COLOR_SOURCE |  | yes | yes |  |
|  | SAI_POLICER_ATTR_CBS |  | yes | yes |  |
|  | SAI_POLICER_ATTR_CIR |  | yes | yes |  |
|  | SAI_POLICER_ATTR_PBS |  | yes | yes |  |
|  | SAI_POLICER_ATTR_PIR |  | yes | yes |  |
|  | SAI_POLICER_ATTR_GREEN_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | yes | no |  |
|  | SAI_POLICER_ATTR_YELLOW_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | yes | no |  |
|  | SAI_POLICER_ATTR_RED_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | yes | no |  |
|  | SAI_POLICER_ATTR_ENABLE_COUNTER_PACKET_ACTION_LIST |  | yes | yes |  |
|  | SAI_POLICER_ATTR_OBJECT_STAGE | SAI_OBJECT_STAGE_BOTH | no | yes |  |
|  |  | SAI_OBJECT_STAGE_INGRESS | no | no |  |
|  |  | SAI_OBJECT_STAGE_EGRESS | no | no |  |
|  | SAI_POLICER_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
|  | SAI_POLICER_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_POLICER_ATTR_CUSTOM_QOS_PROFILE |  | yes | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_DOT1P |  | yes | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_DSCP |  | yes | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_TC |  | yes | no | yes |
| remove_policer |  |  | yes | yes |  |
| set_policer_attribute | SAI_POLICER_ATTR_CBS |  | yes | yes |  |
|  | SAI_POLICER_ATTR_CIR |  | yes | yes |  |
|  | SAI_POLICER_ATTR_PBS |  | yes | yes |  |
|  | SAI_POLICER_ATTR_PIR |  | yes | yes |  |
|  | SAI_POLICER_ATTR_GREEN_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | yes | no |  |
|  | SAI_POLICER_ATTR_YELLOW_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | yes | no |  |
|  | SAI_POLICER_ATTR_RED_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | yes | no |  |
|  | SAI_POLICER_ATTR_ENABLE_COUNTER_PACKET_ACTION_LIST |  | yes | yes |  |
|  | SAI_POLICER_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
|  | SAI_POLICER_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_POLICER_ATTR_CUSTOM_QOS_PROFILE |  | no | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_DOT1P |  | no | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_DSCP |  | no | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_TC |  | no | no | yes |
| get_policer_attribute | SAI_POLICER_ATTR_METER_TYPE |  | yes | yes |  |
|  | SAI_POLICER_ATTR_COLOR_SOURCE |  | yes | yes |  |
|  | SAI_POLICER_ATTR_CBS |  | yes | yes |  |
|  | SAI_POLICER_ATTR_CIR |  | yes | yes |  |
|  | SAI_POLICER_ATTR_PBS |  | yes | yes |  |
|  | SAI_POLICER_ATTR_PIR |  | yes | yes |  |
|  | SAI_POLICER_ATTR_GREEN_PACKET_ACTION |  | yes | yes |  |
|  | SAI_POLICER_ATTR_YELLOW_PACKET_ACTION |  | yes | yes |  |
|  | SAI_POLICER_ATTR_RED_PACKET_ACTION |  | yes | yes |  |
|  | SAI_POLICER_ATTR_ENABLE_COUNTER_PACKET_ACTION_LIST |  | yes | yes |  |
|  | SAI_POLICER_ATTR_OBJECT_STAGE |  | no | yes |  |
|  | SAI_POLICER_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_POLICER_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_POLICER_ATTR_CUSTOM_QOS_PROFILE |  | no | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_DOT1P |  | no | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_DSCP |  | no | no | yes |
|  | SAI_POLICER_ATTR_CUSTOM_REMARK_TC |  | no | no | yes |
| get_policer_stats | SAI_POLICER_STAT_PACKETS |  | yes | yes |  |
|  | SAI_POLICER_STAT_ATTR_BYTES |  | yes | yes |  |
|  | SAI_POLICER_STAT_GREEN_PACKETS |  | yes | yes |  |
|  | SAI_POLICER_STAT_GREEN_BYTES |  | yes | yes |  |
|  | SAI_POLICER_STAT_YELLOW_PACKETS |  | yes | yes |  |
|  | SAI_POLICER_STAT_YELLOW_BYTES |  | yes | yes |  |
|  | SAI_POLICER_STAT_RED_PACKETS |  | yes | yes |  |
|  | SAI_POLICER_STAT_RED_BYTES |  | yes | yes |  |
| get_policer_stats_ext |  |  | no | yes |  |
| clear_policer_stats |  |  | yes | no |  |
