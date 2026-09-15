| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_ipmc_entry | SAI_IPMC_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_IPMC_ENTRY_ATTR_OUTPUT_GROUP_ID |  | yes | yes |  |
|  | SAI_IPMC_ENTRY_ATTR_RPF_GROUP_ID |  | yes | yes |  |
|  | SAI_IPMC_ENTRY_ATTR_COUNTER_ID |  | no | yes |  |
| remove_ipmc_entry |  |  | yes | yes |  |
| set_ipmc_entry_attribute | SAI_IPMC_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_IPMC_ENTRY_ATTR_OUTPUT_GROUP_ID |  | yes | yes |  |
|  | SAI_IPMC_ENTRY_ATTR_RPF_GROUP_ID |  | yes | yes |  |
|  | SAI_IPMC_ENTRY_ATTR_COUNTER_ID |  | no | yes |  |
| get_ipmc_entry_attribute | SAI_IPMC_ENTRY_ATTR_PACKET_ACTION |  | yes | yes |  |
|  | SAI_IPMC_ENTRY_ATTR_OUTPUT_GROUP_ID |  | yes | yes |  |
|  | SAI_IPMC_ENTRY_ATTR_RPF_GROUP_ID |  | yes | yes |  |
|  | SAI_IPMC_ENTRY_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_IPMC_ENTRY_ATTR_CUSTOM_ACTIVE_STATUS |  | yes | no | yes |
