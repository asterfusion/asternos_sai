| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_scheduler | SAI_SCHEDULER_ATTR_SCHEDULING_TYPE | SAI_SCHEDULING_TYPE_STRICT | yes | yes |  |
|  |  | SAI_SCHEDULING_TYPE_WRR | no | no |  |
|  |  | SAI_SCHEDULING_TYPE_DWRR | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_SCHEDULING_WEIGHT |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_METER_TYPE | SAI_METER_TYPE_PACKETS | no | yes |  |
|  |  | SAI_METER_TYPE_BYTES | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_MIN_BANDWIDTH_RATE |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_MIN_BANDWIDTH_BURST_RATE |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_MAX_BANDWIDTH_RATE |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_MAX_BANDWIDTH_BURST_RATE |  | yes | yes |  |
| remove_scheduler |  |  | yes | yes |  |
| set_scheduler_attribute | SAI_SCHEDULER_ATTR_SCHEDULING_TYPE | SAI_SCHEDULING_TYPE_STRICT | yes | yes |  |
|  |  | SAI_SCHEDULING_TYPE_WRR | no | no |  |
|  |  | SAI_SCHEDULING_TYPE_DWRR | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_SCHEDULING_WEIGHT |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_METER_TYPE | SAI_METER_TYPE_PACKETS | no | yes |  |
|  |  | SAI_METER_TYPE_BYTES | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_MIN_BANDWIDTH_RATE |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_MIN_BANDWIDTH_BURST_RATE |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_MAX_BANDWIDTH_RATE |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_MAX_BANDWIDTH_BURST_RATE |  | yes | yes |  |
| get_scheduler_attribute | SAI_SCHEDULER_ATTR_SCHEDULING_TYPE |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_SCHEDULING_WEIGHT |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_METER_TYPE |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_MIN_BANDWIDTH_RATE |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_MIN_BANDWIDTH_BURST_RATE |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_MAX_BANDWIDTH_RATE |  | yes | yes |  |
|  | SAI_SCHEDULER_ATTR_MAX_BANDWIDTH_BURST_RATE |  | yes | yes |  |
