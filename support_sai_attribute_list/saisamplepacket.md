| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_samplepacket | SAI_SAMPLEPACKET_ATTR_SAMPLE_RATE |  | yes | yes |  |
|  | SAI_SAMPLEPACKET_ATTR_TYPE | SAI_SAMPLEPACKET_TYPE_SLOW_PATH | yes | yes |  |
|  |  | SAI_SAMPLEPACKET_TYPE_MIRROR_SESSION | no | yes |  |
|  | SAI_SAMPLEPACKET_ATTR_MODE | SAI_SAMPLEPACKET_MODE_EXCLUSIVE | no | yes |  |
|  |  | SAI_SAMPLEPACKET_MODE_SHARED | yes | yes |  |
|  | SAI_SAMPLEPACKET_ATTR_TRUNCATE_ENABLE |  | no | no |  |
|  | SAI_SAMPLEPACKET_ATTR_TRUNCATE_SIZE |  | no | no |  |
| remove_samplepacket |  |  | yes | yes |  |
| set_samplepacket_attribute | SAI_SAMPLEPACKET_ATTR_SAMPLE_RATE |  | yes | yes |  |
|  | SAI_SAMPLEPACKET_ATTR_TRUNCATE_ENABLE |  | no | no |  |
|  | SAI_SAMPLEPACKET_ATTR_TRUNCATE_SIZE |  | no | no |  |
| get_samplepacket_attribute | SAI_SAMPLEPACKET_ATTR_SAMPLE_RATE |  | yes | yes |  |
|  | SAI_SAMPLEPACKET_ATTR_MODE |  | yes | yes |  |
|  | SAI_SAMPLEPACKET_ATTR_TRUNCATE_ENABLE |  | no | no |  |
|  | SAI_SAMPLEPACKET_ATTR_TRUNCATE_SIZE |  | no | no |  |
