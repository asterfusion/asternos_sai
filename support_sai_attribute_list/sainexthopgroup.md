| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_next_hop_group | SAI_NEXT_HOP_GROUP_ATTR_TYPE | SAI_NEXT_HOP_GROUP_TYPE_DYNAMIC_UNORDERED_ECMP | yes | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_ECMP | yes | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_DYNAMIC_ORDERED_ECMP | yes | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_FINE_GRAIN_ECMP | yes | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_PROTECTION | no | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_CLASS_BASED | no | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_HW_PROTECTION | no | no |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_ECMP_WITH_MEMBERS | no | no |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_BRIDGE_PORT | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SET_SWITCHOVER |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_CONFIGURED_SIZE |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SELECTION_MAP |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_HIERARCHICAL_NEXTHOP |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_OBJECT_ID |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_LIST |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_WEIGHT_LIST |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_COUNTER_LIST |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_HASH_ALGORITHM | SAI_HASH_ALGORITHM_CRC | no | no |  |
|  |  | SAI_HASH_ALGORITHM_XOR | no | yes |  |
|  |  | SAI_HASH_ALGORITHM_RANDOM | no | yes |  |
|  |  | SAI_HASH_ALGORITHM_CRC_32LO | no | yes |  |
|  |  | SAI_HASH_ALGORITHM_CRC_32HI | no | yes |  |
|  |  | SAI_HASH_ALGORITHM_CRC_CCITT | no | no |  |
|  |  | SAI_HASH_ALGORITHM_CRC_XOR | no | no |  |
|  |  | SAI_HASH_ALGORITHM_NONE | no | no |  |
|  |  | SAI_HASH_ALGORITHM_ROUND_ROBIN | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_LABEL |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ADMIN_ROLE |  | no | no |  |
| remove_next_hop_group |  |  | yes | yes |  |
| set_next_hop_group_attribute | SAI_NEXT_HOP_GROUP_ATTR_SET_SWITCHOVER |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SELECTION_MAP |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_OBJECT_ID |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_LIST |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_WEIGHT_LIST |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_COUNTER_LIST |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_LABEL |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ADMIN_ROLE |  | no | no |  |
| get_next_hop_group_attribute | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_COUNT |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_LIST |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_TYPE |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SET_SWITCHOVER |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_CONFIGURED_SIZE |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_REAL_SIZE |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SELECTION_MAP |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_HIERARCHICAL_NEXTHOP |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_OBJECT_ID |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_PACKET_DROPS |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_NEXT_HOP_REASSIGNMENTS |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_PORT_REASSIGNMENTS |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_LIST |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_WEIGHT_LIST |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_COUNTER_LIST |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_HASH_ALGORITHM |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_LABEL |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ADMIN_ROLE |  | no | no |  |
| create_next_hop_group_member | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_GROUP_ID |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_ID |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_WEIGHT |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_CONFIGURED_ROLE | SAI_NEXT_HOP_GROUP_MEMBER_CONFIGURED_ROLE_PRIMARY | no | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_MEMBER_CONFIGURED_ROLE_STANDBY | no | no |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_OBSERVED_ROLE | SAI_NEXT_HOP_GROUP_MEMBER_OBSERVED_ROLE_ACTIVE | no | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_MEMBER_OBSERVED_ROLE_INACTIVE | no | no |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_MONITORED_OBJECT |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_INDEX |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_SEQUENCE_ID |  | no | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_COUNTER_ID |  | no | no |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_ARS_ALTERNATE_PATH |  | no | yes |  |
| remove_next_hop_group_member |  |  | yes | yes |  |
| set_next_hop_group_member_attribute | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_ID |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_WEIGHT |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_CONFIGURED_ROLE | SAI_NEXT_HOP_GROUP_MEMBER_CONFIGURED_ROLE_PRIMARY | no | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_MEMBER_CONFIGURED_ROLE_STANDBY | no | no |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_MONITORED_OBJECT |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_SEQUENCE_ID |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_COUNTER_ID |  | yes | no |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_ARS_ALTERNATE_PATH |  | yes | yes |  |
| get_next_hop_group_member_attribute | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_GROUP_ID |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_ID |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_WEIGHT |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_CONFIGURED_ROLE |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_MONITORED_OBJECT |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_INDEX |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_SEQUENCE_ID |  | yes | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_COUNTER_ID |  | yes | no |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_ARS_ALTERNATE_PATH |  | yes | yes |  |
| create_next_hop_group_members |  |  | no | yes |  |
| remove_next_hop_group_members |  |  | no | yes |  |
| create_next_hop_group_map |  |  | no | yes |  |
| remove_next_hop_group_map |  |  | no | yes |  |
| set_next_hop_group_map_attribute |  |  | no | yes |  |
| get_next_hop_group_map_attribute |  |  | no | yes |  |
| set_next_hop_group_members_attribute |  |  | no | yes |  |
| get_next_hop_group_members_attribute |  |  | no | yes |  |
