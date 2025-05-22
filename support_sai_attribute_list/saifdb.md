| Api | Sai Attribute | Enums | Support | Private |
| --- | --- | --- | --- | --- |
| create_fdb_entry | SAI_FDB_ENTRY_ATTR_TYPE | SAI_FDB_ENTRY_TYPE_DYNAMIC | yes |  |
|  |  | SAI_FDB_ENTRY_TYPE_STATIC | yes |  |
|  | SAI_FDB_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no |  |
|  |  | SAI_PACKET_ACTION_DENY | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no |  |
|  |  | SAI_PACKET_ACTION_REMARK | no |  |
|  | SAI_FDB_ENTRY_ATTR_USER_TRAP_ID |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_BRIDGE_PORT_ID |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_META_DATA |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_ENDPOINT_IP |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_COUNTER_ID |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_ALLOW_MAC_MOVE |  | no |  |
| remove_fdb_entry |  |  | yes |  |
| set_fdb_entry_attribute | SAI_FDB_ENTRY_ATTR_TYPE | SAI_FDB_ENTRY_TYPE_DYNAMIC | yes |  |
|  |  | SAI_FDB_ENTRY_TYPE_STATIC | yes |  |
|  | SAI_FDB_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no |  |
|  |  | SAI_PACKET_ACTION_DENY | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no |  |
|  |  | SAI_PACKET_ACTION_REMARK | no |  |
|  | SAI_FDB_ENTRY_ATTR_USER_TRAP_ID |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_BRIDGE_PORT_ID |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_META_DATA |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_ENDPOINT_IP |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_COUNTER_ID |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_ALLOW_MAC_MOVE |  | no |  |
| get_fdb_entry_attribute | SAI_FDB_ENTRY_ATTR_TYPE |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_PACKET_ACTION |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_USER_TRAP_ID |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_BRIDGE_PORT_ID |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_META_DATA |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_ENDPOINT_IP |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_COUNTER_ID |  | yes |  |
|  | SAI_FDB_ENTRY_ATTR_ALLOW_MAC_MOVE |  | no |  |
| flush_fdb_entries | SAI_FDB_FLUSH_ATTR_BRIDGE_PORT_ID |  | yes |  |
|  | SAI_FDB_FLUSH_ATTR_BV_ID |  | yes |  |
|  | SAI_FDB_FLUSH_ATTR_ENTRY_TYPE | SAI_FDB_FLUSH_ENTRY_TYPE_DYNAMIC | yes |  |
|  |  | SAI_FDB_FLUSH_ENTRY_TYPE_STATIC | yes |  |
|  |  | SAI_FDB_FLUSH_ENTRY_TYPE_ALL | yes |  |
| create_fdb_entries |  |  | no |  |
| remove_fdb_entries |  |  | no |  |
| set_fdb_entries_attribute |  |  | no |  |
| get_fdb_entries_attribute |  |  | no |  |



