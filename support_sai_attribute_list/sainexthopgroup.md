| Api | Sai Attribute | Enums | Support | Private |
| --- | --- | --- | --- | --- |
| create_next_hop_group | SAI_NEXT_HOP_GROUP_ATTR_TYPE | SAI_NEXT_HOP_GROUP_TYPE_DYNAMIC_UNORDERED_ECMP | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_ECMP | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_DYNAMIC_ORDERED_ECMP | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_FINE_GRAIN_ECMP | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_PROTECTION | no |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_CLASS_BASED | no |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_HW_PROTECTION | no |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_ECMP_WITH_MEMBERS | no |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_BRIDGE_PORT | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SET_SWITCHOVER |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_COUNTER_ID |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_CONFIGURED_SIZE |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SELECTION_MAP |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_HIERARCHICAL_NEXTHOP |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_OBJECT_ID |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_LIST |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_WEIGHT_LIST |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_COUNTER_LIST |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_HASH_ALGORITHM | SAI_HASH_ALGORITHM_CRC | no |  |
|  |  | SAI_HASH_ALGORITHM_XOR | no |  |
|  |  | SAI_HASH_ALGORITHM_RANDOM | no |  |
|  |  | SAI_HASH_ALGORITHM_CRC_32LO | no |  |
|  |  | SAI_HASH_ALGORITHM_CRC_32HI | no |  |
|  |  | SAI_HASH_ALGORITHM_CRC_CCITT | no |  |
|  |  | SAI_HASH_ALGORITHM_CRC_XOR | no |  |
|  |  | SAI_HASH_ALGORITHM_NONE | no |  |
|  |  | SAI_HASH_ALGORITHM_ROUND_ROBIN | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_LABEL |  | no |  |
| remove_next_hop_group |  |  | yes |  |
| set_next_hop_group_attribute | SAI_NEXT_HOP_GROUP_ATTR_SET_SWITCHOVER |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_COUNTER_ID |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SELECTION_MAP |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_OBJECT_ID |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_LIST |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_WEIGHT_LIST |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_COUNTER_LIST |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_LABEL |  | no |  |
| get_next_hop_group_attribute | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_COUNT |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_LIST |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_TYPE |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SET_SWITCHOVER |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_COUNTER_ID |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_CONFIGURED_SIZE |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_REAL_SIZE |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SELECTION_MAP |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_HIERARCHICAL_NEXTHOP |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_OBJECT_ID |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_PACKET_DROPS |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_NEXT_HOP_REASSIGNMENTS |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_PORT_REASSIGNMENTS |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_LIST |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_WEIGHT_LIST |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_COUNTER_LIST |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_HASH_ALGORITHM |  | no |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_LABEL |  | no |  |
| create_next_hop_group_member | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_GROUP_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_WEIGHT |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_CONFIGURED_ROLE | SAI_NEXT_HOP_GROUP_MEMBER_CONFIGURED_ROLE_PRIMARY | no |  |
|  |  | SAI_NEXT_HOP_GROUP_MEMBER_CONFIGURED_ROLE_STANDBY | no |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_OBSERVED_ROLE | SAI_NEXT_HOP_GROUP_MEMBER_OBSERVED_ROLE_ACTIVE | no |  |
|  |  | SAI_NEXT_HOP_GROUP_MEMBER_OBSERVED_ROLE_INACTIVE | no |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_MONITORED_OBJECT |  | no |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_INDEX |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_SEQUENCE_ID |  | no |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_COUNTER_ID |  | no |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_ARS_ALTERNATE_PATH |  | no |  |
| remove_next_hop_group_member |  |  | yes |  |
| set_next_hop_group_member_attribute | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_WEIGHT |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_CONFIGURED_ROLE | SAI_NEXT_HOP_GROUP_MEMBER_CONFIGURED_ROLE_PRIMARY | no |  |
|  |  | SAI_NEXT_HOP_GROUP_MEMBER_CONFIGURED_ROLE_STANDBY | no |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_MONITORED_OBJECT |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_SEQUENCE_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_COUNTER_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_ARS_ALTERNATE_PATH |  | yes |  |
| get_next_hop_group_member_attribute | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_GROUP_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_WEIGHT |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_CONFIGURED_ROLE |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_MONITORED_OBJECT |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_INDEX |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_SEQUENCE_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_COUNTER_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_ARS_ALTERNATE_PATH |  | yes |  |
| create_next_hop_group_members |  |  | no |  |
| remove_next_hop_group_members |  |  | no |  |
| create_next_hop_group_map |  |  | no |  |
| remove_next_hop_group_map |  |  | no |  |
| set_next_hop_group_map_attribute |  |  | no |  |
| get_next_hop_group_map_attribute |  |  | no |  |
| set_next_hop_group_members_attribute |  |  | no |  |
| get_next_hop_group_members_attribute |  |  | no |  |