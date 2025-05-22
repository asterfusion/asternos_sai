| Api | Sai Attribute | Enums | Support | Private |
| --- | --- | --- | --- | --- |
| create_samplepacket | SAI_SAMPLEPACKET_ATTR_SAMPLE_RATE |  | yes |  |
|  | SAI_SAMPLEPACKET_ATTR_TYPE | SAI_SAMPLEPACKET_TYPE_SLOW_PATH | yes |  |
|  |  | SAI_SAMPLEPACKET_TYPE_MIRROR_SESSION | no |  |
|  | SAI_SAMPLEPACKET_ATTR_MODE | SAI_SAMPLEPACKET_MODE_EXCLUSIVE | no |  |
|  |  | SAI_SAMPLEPACKET_MODE_SHARED | yes |  |
|  | SAI_SAMPLEPACKET_ATTR_TRUNCATE_ENABLE |  | no |  |
|  | SAI_SAMPLEPACKET_ATTR_TRUNCATE_SIZE |  | no |  |
| remove_samplepacket |  |  | yes |  |
| set_samplepacket_attribute | SAI_SAMPLEPACKET_ATTR_SAMPLE_RATE |  | yes |  |
|  | SAI_SAMPLEPACKET_ATTR_TRUNCATE_ENABLE |  | no |  |
|  | SAI_SAMPLEPACKET_ATTR_TRUNCATE_SIZE |  | no |  |
| get_samplepacket_attribute | SAI_SAMPLEPACKET_ATTR_SAMPLE_RATE |  | yes |  |
|  | SAI_SAMPLEPACKET_ATTR_MODE |  | yes |  |
|  | SAI_SAMPLEPACKET_ATTR_TRUNCATE_ENABLE |  | no |  |
|  | SAI_SAMPLEPACKET_ATTR_TRUNCATE_SIZE |  | no |  |
