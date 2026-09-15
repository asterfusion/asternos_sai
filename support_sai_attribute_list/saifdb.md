| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_fdb_entry | SAI_FDB_ENTRY_ATTR_TYPE | SAI_FDB_ENTRY_TYPE_DYNAMIC | yes | yes |  |
|  |  | SAI_FDB_ENTRY_TYPE_STATIC | yes | yes |  |
|  | SAI_FDB_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | yes | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_FDB_ENTRY_ATTR_USER_TRAP_ID |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_BRIDGE_PORT_ID |  | yes | yes |  |
|  | SAI_FDB_ENTRY_ATTR_META_DATA |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_ENDPOINT_IP |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_ALLOW_MAC_MOVE |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_CUSTOM_BRIDGE_PORT_ID_LIST |  | yes | no | yes |
| remove_fdb_entry |  |  | yes | yes |  |
| set_fdb_entry_attribute | SAI_FDB_ENTRY_ATTR_TYPE | SAI_FDB_ENTRY_TYPE_DYNAMIC | yes | yes |  |
|  |  | SAI_FDB_ENTRY_TYPE_STATIC | yes | yes |  |
|  | SAI_FDB_ENTRY_ATTR_PACKET_ACTION | SAI_PACKET_ACTION_DROP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_FORWARD | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | yes | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | yes | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | yes | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_FDB_ENTRY_ATTR_USER_TRAP_ID |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_BRIDGE_PORT_ID |  | yes | yes |  |
|  | SAI_FDB_ENTRY_ATTR_META_DATA |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_ENDPOINT_IP |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_ALLOW_MAC_MOVE |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_CUSTOM_BRIDGE_PORT_ID_LIST |  | yes | no | yes |
| get_fdb_entry_attribute | SAI_FDB_ENTRY_ATTR_TYPE |  | yes | yes |  |
|  | SAI_FDB_ENTRY_ATTR_PACKET_ACTION |  | yes | yes |  |
|  | SAI_FDB_ENTRY_ATTR_USER_TRAP_ID |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_BRIDGE_PORT_ID |  | yes | yes |  |
|  | SAI_FDB_ENTRY_ATTR_META_DATA |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_ENDPOINT_IP |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_ALLOW_MAC_MOVE |  | no | yes |  |
|  | SAI_FDB_ENTRY_ATTR_CUSTOM_BRIDGE_PORT_ID_LIST |  | yes | no | yes |
| flush_fdb_entries | SAI_FDB_FLUSH_ATTR_BRIDGE_PORT_ID |  | yes | no |  |
|  | SAI_FDB_FLUSH_ATTR_BV_ID |  | yes | no |  |
|  | SAI_FDB_FLUSH_ATTR_ENTRY_TYPE | SAI_FDB_FLUSH_ENTRY_TYPE_DYNAMIC | yes | no |  |
|  |  | SAI_FDB_FLUSH_ENTRY_TYPE_STATIC | yes | yes |  |
|  |  | SAI_FDB_FLUSH_ENTRY_TYPE_ALL | yes | yes |  |
| create_fdb_entries |  |  | no | yes |  |
| remove_fdb_entries |  |  | no | yes |  |
| set_fdb_entries_attribute |  |  | no | no |  |
| get_fdb_entries_attribute |  |  | no | no |  |
