| Api | Sai Attribute | Enums | Support | Private |
| --- | --- | --- | --- | --- |
| create_lag | SAI_LAG_ATTR_INGRESS_ACL |  | no |  |
|  | SAI_LAG_ATTR_EGRESS_ACL |  | no |  |
|  | SAI_LAG_ATTR_PORT_VLAN_ID |  | yes |  |
|  | SAI_LAG_ATTR_DEFAULT_VLAN_PRIORITY |  | yes |  |
|  | SAI_LAG_ATTR_DROP_UNTAGGED |  | yes |  |
|  | SAI_LAG_ATTR_DROP_TAGGED |  | yes |  |
|  | SAI_LAG_ATTR_TPID |  | no |  |
|  | SAI_LAG_ATTR_SYSTEM_PORT_AGGREGATE_ID |  | no |  |
|  | SAI_LAG_ATTR_LABEL |  | no |  |
|  | SAI_LAG_ATTR_ARS_OBJECT_ID |  | no |  |
|  | SAI_LAG_ATTR_HASH_ALGORITHM | SAI_HASH_ALGORITHM_CRC | no |  |
|  |  | SAI_HASH_ALGORITHM_XOR | no |  |
|  |  | SAI_HASH_ALGORITHM_RANDOM | no |  |
|  |  | SAI_HASH_ALGORITHM_CRC_32LO | no |  |
|  |  | SAI_HASH_ALGORITHM_CRC_32HI | no |  |
|  |  | SAI_HASH_ALGORITHM_CRC_CCITT | no |  |
|  |  | SAI_HASH_ALGORITHM_CRC_XOR | no |  |
|  |  | SAI_HASH_ALGORITHM_NONE | no |  |
|  |  | SAI_HASH_ALGORITHM_ROUND_ROBIN | no |  |
|  | SAI_LAG_ATTR_CUSTOM_ISOLATION_GROUP |  | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_FDB_LEARNING_PRIORITY |  | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_FDB_LEARNING_GROUP |  | no | yes |
| remove_lag |  |  | yes |  |
| set_lag_attribute | SAI_LAG_ATTR_INGRESS_ACL |  | yes |  |
|  | SAI_LAG_ATTR_EGRESS_ACL |  | yes |  |
|  | SAI_LAG_ATTR_PORT_VLAN_ID |  | yes |  |
|  | SAI_LAG_ATTR_DEFAULT_VLAN_PRIORITY |  | yes |  |
|  | SAI_LAG_ATTR_DROP_UNTAGGED |  | yes |  |
|  | SAI_LAG_ATTR_DROP_TAGGED |  | yes |  |
|  | SAI_LAG_ATTR_TPID |  | no |  |
|  | SAI_LAG_ATTR_LABEL |  | no |  |
|  | SAI_LAG_ATTR_ARS_OBJECT_ID |  | no |  |
|  | SAI_LAG_ATTR_CUSTOM_ISOLATION_GROUP |  | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_FDB_LEARNING_PRIORITY |  | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_FDB_LEARNING_GROUP |  | no | yes |
| get_lag_attribute | SAI_LAG_ATTR_PORT_LIST |  | yes |  |
|  | SAI_LAG_ATTR_INGRESS_ACL |  | yes |  |
|  | SAI_LAG_ATTR_EGRESS_ACL |  | yes |  |
|  | SAI_LAG_ATTR_PORT_VLAN_ID |  | yes |  |
|  | SAI_LAG_ATTR_DEFAULT_VLAN_PRIORITY |  | yes |  |
|  | SAI_LAG_ATTR_DROP_UNTAGGED |  | yes |  |
|  | SAI_LAG_ATTR_DROP_TAGGED |  | yes |  |
|  | SAI_LAG_ATTR_TPID |  | no |  |
|  | SAI_LAG_ATTR_SYSTEM_PORT_AGGREGATE_ID |  | no |  |
|  | SAI_LAG_ATTR_LABEL |  | no |  |
|  | SAI_LAG_ATTR_ARS_OBJECT_ID |  | no |  |
|  | SAI_LAG_ATTR_ARS_PACKET_DROPS |  | no |  |
|  | SAI_LAG_ATTR_ARS_PORT_REASSIGNMENTS |  | no |  |
|  | SAI_LAG_ATTR_HASH_ALGORITHM |  | no |  |
|  | SAI_LAG_ATTR_CUSTOM_ISOLATION_GROUP |  | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_FDB_LEARNING_PRIORITY |  | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_FDB_LEARNING_GROUP |  | no | yes |
| create_lag_member | SAI_LAG_MEMBER_ATTR_LAG_ID |  | yes |  |
|  | SAI_LAG_MEMBER_ATTR_PORT_ID |  | yes |  |
|  | SAI_LAG_MEMBER_ATTR_EGRESS_DISABLE |  | yes |  |
|  | SAI_LAG_MEMBER_ATTR_INGRESS_DISABLE |  | yes |  |
|  | SAI_LAG_MEMBER_ATTR_WEIGHT |  | no |  |
| remove_lag_member | SAI_LAG_MEMBER_ATTR_LAG_ID |  | yes |  |
| set_lag_member_attribute | SAI_LAG_MEMBER_ATTR_EGRESS_DISABLE |  | yes |  |
|  | SAI_LAG_MEMBER_ATTR_INGRESS_DISABLE |  | yes |  |
|  | SAI_LAG_MEMBER_ATTR_WEIGHT |  | no |  |
| get_lag_member_attribute | SAI_LAG_MEMBER_ATTR_LAG_ID |  | yes |  |
|  | SAI_LAG_MEMBER_ATTR_PORT_ID |  | yes |  |
|  | SAI_LAG_MEMBER_ATTR_EGRESS_DISABLE |  | yes |  |
|  | SAI_LAG_MEMBER_ATTR_INGRESS_DISABLE |  | yes |  |
|  | SAI_LAG_MEMBER_ATTR_WEIGHT |  | no |  |
| create_lag_members |  |  | no |  |
| remove_lag_members |  |  | no |  |
