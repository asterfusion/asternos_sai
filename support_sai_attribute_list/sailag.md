| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_lag | SAI_LAG_ATTR_INGRESS_ACL |  | no | yes |  |
|  | SAI_LAG_ATTR_EGRESS_ACL |  | no | yes |  |
|  | SAI_LAG_ATTR_PORT_VLAN_ID |  | yes | yes |  |
|  | SAI_LAG_ATTR_DEFAULT_VLAN_PRIORITY |  | yes | yes |  |
|  | SAI_LAG_ATTR_DROP_UNTAGGED |  | yes | yes |  |
|  | SAI_LAG_ATTR_DROP_TAGGED |  | yes | yes |  |
|  | SAI_LAG_ATTR_TPID |  | no | yes |  |
|  | SAI_LAG_ATTR_SYSTEM_PORT_AGGREGATE_ID |  | no | yes |  |
|  | SAI_LAG_ATTR_LABEL |  | no | yes |  |
|  | SAI_LAG_ATTR_ARS_OBJECT_ID |  | no | yes |  |
|  | SAI_LAG_ATTR_HASH_ALGORITHM | SAI_HASH_ALGORITHM_CRC | no | no |  |
|  |  | SAI_HASH_ALGORITHM_XOR | no | yes |  |
|  |  | SAI_HASH_ALGORITHM_RANDOM | no | yes |  |
|  |  | SAI_HASH_ALGORITHM_CRC_32LO | no | yes |  |
|  |  | SAI_HASH_ALGORITHM_CRC_32HI | no | yes |  |
|  |  | SAI_HASH_ALGORITHM_CRC_CCITT | no | no |  |
|  |  | SAI_HASH_ALGORITHM_CRC_XOR | no | no |  |
|  |  | SAI_HASH_ALGORITHM_NONE | no | no |  |
|  |  | SAI_HASH_ALGORITHM_ROUND_ROBIN | no | no |  |
|  | SAI_LAG_ATTR_CUSTOM_ISOLATION_GROUP |  | no | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_FDB_LEARNING_PRIORITY |  | no | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_FDB_LEARNING_GROUP |  | no | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_BASIC_QINQ_ENABLE |  | no | no | yes |
| remove_lag |  |  | yes | yes |  |
| set_lag_attribute | SAI_LAG_ATTR_INGRESS_ACL |  | yes | yes |  |
|  | SAI_LAG_ATTR_EGRESS_ACL |  | yes | yes |  |
|  | SAI_LAG_ATTR_PORT_VLAN_ID |  | yes | yes |  |
|  | SAI_LAG_ATTR_DEFAULT_VLAN_PRIORITY |  | yes | yes |  |
|  | SAI_LAG_ATTR_DROP_UNTAGGED |  | yes | yes |  |
|  | SAI_LAG_ATTR_DROP_TAGGED |  | yes | yes |  |
|  | SAI_LAG_ATTR_TPID |  | no | yes |  |
|  | SAI_LAG_ATTR_LABEL |  | no | yes |  |
|  | SAI_LAG_ATTR_ARS_OBJECT_ID |  | no | yes |  |
|  | SAI_LAG_ATTR_CUSTOM_ISOLATION_GROUP |  | no | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_FDB_LEARNING_PRIORITY |  | no | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_FDB_LEARNING_GROUP |  | no | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_BASIC_QINQ_ENABLE |  | no | no | yes |
| get_lag_attribute | SAI_LAG_ATTR_PORT_LIST |  | yes | yes |  |
|  | SAI_LAG_ATTR_INGRESS_ACL |  | yes | yes |  |
|  | SAI_LAG_ATTR_EGRESS_ACL |  | yes | yes |  |
|  | SAI_LAG_ATTR_PORT_VLAN_ID |  | yes | yes |  |
|  | SAI_LAG_ATTR_DEFAULT_VLAN_PRIORITY |  | yes | yes |  |
|  | SAI_LAG_ATTR_DROP_UNTAGGED |  | yes | yes |  |
|  | SAI_LAG_ATTR_DROP_TAGGED |  | yes | yes |  |
|  | SAI_LAG_ATTR_TPID |  | no | yes |  |
|  | SAI_LAG_ATTR_SYSTEM_PORT_AGGREGATE_ID |  | no | yes |  |
|  | SAI_LAG_ATTR_LABEL |  | no | yes |  |
|  | SAI_LAG_ATTR_ARS_OBJECT_ID |  | no | yes |  |
|  | SAI_LAG_ATTR_ARS_PACKET_DROPS |  | no | yes |  |
|  | SAI_LAG_ATTR_ARS_PORT_REASSIGNMENTS |  | no | yes |  |
|  | SAI_LAG_ATTR_HASH_ALGORITHM |  | no | no |  |
|  | SAI_LAG_ATTR_CUSTOM_ISOLATION_GROUP |  | no | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_FDB_LEARNING_PRIORITY |  | no | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_FDB_LEARNING_GROUP |  | no | no | yes |
|  | SAI_LAG_ATTR_CUSTOM_BASIC_QINQ_ENABLE |  | no | no | yes |
| create_lag_member | SAI_LAG_MEMBER_ATTR_LAG_ID |  | yes | yes |  |
|  | SAI_LAG_MEMBER_ATTR_PORT_ID |  | yes | yes |  |
|  | SAI_LAG_MEMBER_ATTR_EGRESS_DISABLE |  | yes | yes |  |
|  | SAI_LAG_MEMBER_ATTR_INGRESS_DISABLE |  | yes | yes |  |
|  | SAI_LAG_MEMBER_ATTR_WEIGHT |  | no | no |  |
| remove_lag_member | SAI_LAG_MEMBER_ATTR_LAG_ID |  | yes | yes |  |
| set_lag_member_attribute | SAI_LAG_MEMBER_ATTR_EGRESS_DISABLE |  | yes | yes |  |
|  | SAI_LAG_MEMBER_ATTR_INGRESS_DISABLE |  | yes | yes |  |
|  | SAI_LAG_MEMBER_ATTR_WEIGHT |  | no | no |  |
| get_lag_member_attribute | SAI_LAG_MEMBER_ATTR_LAG_ID |  | yes | yes |  |
|  | SAI_LAG_MEMBER_ATTR_PORT_ID |  | yes | yes |  |
|  | SAI_LAG_MEMBER_ATTR_EGRESS_DISABLE |  | yes | yes |  |
|  | SAI_LAG_MEMBER_ATTR_INGRESS_DISABLE |  | yes | yes |  |
|  | SAI_LAG_MEMBER_ATTR_WEIGHT |  | no | no |  |
| create_lag_members |  |  | no | yes |  |
| remove_lag_members |  |  | no | no |  |
