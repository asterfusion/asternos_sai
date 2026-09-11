| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_inseg_entry | SAI_INSEG_ENTRY_ATTR_NUM_OF_POP |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | no |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_TRAP_PRIORITY |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_NEXT_HOP_ID |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_PSC_TYPE | SAI_INSEG_ENTRY_PSC_TYPE_ELSP | no | no |  |
|  |  | SAI_INSEG_ENTRY_PSC_TYPE_LLSP | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_QOS_TC |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_MPLS_EXP_TO_TC_MAP |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_MPLS_EXP_TO_COLOR_MAP |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_POP_QOS_MODE | SAI_INSEG_ENTRY_POP_QOS_MODE_UNIFORM | yes | no |  |
|  |  | SAI_INSEG_ENTRY_POP_QOS_MODE_PIPE | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_COUNTER_ID |  | no | no |  |
| remove_inseg_entry |  |  | yes | no |  |
| set_inseg_entry_attribute | SAI_INSEG_ENTRY_ATTR_NUM_OF_POP |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | no |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_TRAP_PRIORITY |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_NEXT_HOP_ID |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_PSC_TYPE | SAI_INSEG_ENTRY_PSC_TYPE_ELSP | no | no |  |
|  |  | SAI_INSEG_ENTRY_PSC_TYPE_LLSP | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_QOS_TC |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_MPLS_EXP_TO_TC_MAP |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_MPLS_EXP_TO_COLOR_MAP |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_POP_QOS_MODE | SAI_INSEG_ENTRY_POP_QOS_MODE_UNIFORM | yes | no |  |
|  |  | SAI_INSEG_ENTRY_POP_QOS_MODE_PIPE | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_COUNTER_ID |  | no | no |  |
| get_inseg_entry_attribute | SAI_INSEG_ENTRY_ATTR_NUM_OF_POP |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_PACKET_ACTION |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_TRAP_PRIORITY |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_NEXT_HOP_ID |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_PSC_TYPE |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_QOS_TC |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_MPLS_EXP_TO_TC_MAP |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_MPLS_EXP_TO_COLOR_MAP |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_POP_QOS_MODE |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_COUNTER_ID |  | no | no |  |
| create_inseg_entries | SAI_INSEG_ENTRY_ATTR_NUM_OF_POP |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | no |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_TRAP_PRIORITY |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_NEXT_HOP_ID |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_PSC_TYPE | SAI_INSEG_ENTRY_PSC_TYPE_ELSP | no | no |  |
|  |  | SAI_INSEG_ENTRY_PSC_TYPE_LLSP | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_QOS_TC |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_MPLS_EXP_TO_TC_MAP |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_MPLS_EXP_TO_COLOR_MAP |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_POP_QOS_MODE | SAI_INSEG_ENTRY_POP_QOS_MODE_UNIFORM | yes | no |  |
|  |  | SAI_INSEG_ENTRY_POP_QOS_MODE_PIPE | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_COUNTER_ID |  | no | no |  |
| remove_inseg_entries |  |  | yes | no |  |
| set_inseg_entries_attribute | SAI_INSEG_ENTRY_ATTR_NUM_OF_POP |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | no |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_TRAP_PRIORITY |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_NEXT_HOP_ID |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_PSC_TYPE | SAI_INSEG_ENTRY_PSC_TYPE_ELSP | no | no |  |
|  |  | SAI_INSEG_ENTRY_PSC_TYPE_LLSP | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_QOS_TC |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_MPLS_EXP_TO_TC_MAP |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_MPLS_EXP_TO_COLOR_MAP |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_POP_QOS_MODE | SAI_INSEG_ENTRY_POP_QOS_MODE_UNIFORM | yes | no |  |
|  |  | SAI_INSEG_ENTRY_POP_QOS_MODE_PIPE | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_COUNTER_ID |  | no | no |  |
| get_inseg_entries_attribute | SAI_INSEG_ENTRY_ATTR_NUM_OF_POP |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_PACKET_ACTION |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_TRAP_PRIORITY |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_NEXT_HOP_ID |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_PSC_TYPE |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_QOS_TC |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_MPLS_EXP_TO_TC_MAP |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_MPLS_EXP_TO_COLOR_MAP |  | no | no |  |
|  | SAI_INSEG_ENTRY_ATTR_POP_QOS_MODE |  | yes | no |  |
|  | SAI_INSEG_ENTRY_ATTR_COUNTER_ID |  | no | no |  |
