| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_route_entry | SAI_ROUTE_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_ROUTE_ENTRY_ATTR_USER_TRAP_ID |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_NEXT_HOP_ID |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_META_DATA |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_PREFIX_AGG_ID |  | no | yes |  |
| remove_route_entry |  |  | yes | yes |  |
| set_route_entry_attribute | SAI_ROUTE_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_ROUTE_ENTRY_ATTR_USER_TRAP_ID |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_NEXT_HOP_ID |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_META_DATA |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_PREFIX_AGG_ID |  | no | yes |  |
| get_route_entry_attribute | SAI_ROUTE_ENTRY_ATTR_PACKET_ACTION |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_USER_TRAP_ID |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_NEXT_HOP_ID |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_META_DATA |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_IP_ADDR_FAMILY |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_PREFIX_AGG_ID |  | no | yes |  |
| create_route_entries | SAI_ROUTE_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_ROUTE_ENTRY_ATTR_USER_TRAP_ID |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_NEXT_HOP_ID |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_META_DATA |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_PREFIX_AGG_ID |  | no | yes |  |
| remove_route_entries |  |  | yes | yes |  |
| set_route_entries_attribute | SAI_ROUTE_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_ROUTE_ENTRY_ATTR_USER_TRAP_ID |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_NEXT_HOP_ID |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_META_DATA |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_PREFIX_AGG_ID |  | no | yes |  |
| get_route_entries_attribute | SAI_ROUTE_ENTRY_ATTR_PACKET_ACTION |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_USER_TRAP_ID |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_NEXT_HOP_ID |  | yes | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_META_DATA |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_IP_ADDR_FAMILY |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_ROUTE_ENTRY_ATTR_PREFIX_AGG_ID |  | no | yes |  |
