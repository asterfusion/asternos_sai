| Api | Sai Attribute | Enums | Support | Private |
| --- | --- | --- | --- | --- |
| create_next_hop_group | SAI_NEXT_HOP_GROUP_ATTR_TYPE | SAI_NEXT_HOP_GROUP_TYPE_DYNAMIC_UNORDERED_ECMP | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_ECMP | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_DYNAMIC_ORDERED_ECMP | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_FINE_GRAIN_ECMP | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_PROTECTION | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_CLASS_BASED | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_TYPE_HW_PROTECTION | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SET_SWITCHOVER |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_COUNTER_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_CONFIGURED_SIZE |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SELECTION_MAP |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_HIERARCHICAL_NEXTHOP |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_OBJECT_ID |  | yes |  |
| remove_next_hop_group |  |  | yes |  |
| set_next_hop_group_attribute | SAI_NEXT_HOP_GROUP_ATTR_SET_SWITCHOVER |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_COUNTER_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SELECTION_MAP |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_OBJECT_ID |  | yes |  |
| get_next_hop_group_attribute | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_COUNT |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_NEXT_HOP_MEMBER_LIST |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_TYPE |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SET_SWITCHOVER |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_COUNTER_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_CONFIGURED_SIZE |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_REAL_SIZE |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_SELECTION_MAP |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_HIERARCHICAL_NEXTHOP |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_OBJECT_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_PACKET_DROPS |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_NEXT_HOP_REASSIGNMENTS |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_ATTR_ARS_PORT_REASSIGNMENTS |  | yes |  |
| create_next_hop_group_member | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_GROUP_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_WEIGHT |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_CONFIGURED_ROLE | SAI_NEXT_HOP_GROUP_MEMBER_CONFIGURED_ROLE_PRIMARY | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_MEMBER_CONFIGURED_ROLE_STANDBY | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_OBSERVED_ROLE | SAI_NEXT_HOP_GROUP_MEMBER_OBSERVED_ROLE_ACTIVE | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_MEMBER_OBSERVED_ROLE_INACTIVE | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_MONITORED_OBJECT |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_INDEX |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_SEQUENCE_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_COUNTER_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_ARS_ALTERNATE_PATH |  | yes |  |
| remove_next_hop_group_member |  |  | yes |  |
| set_next_hop_group_member_attribute | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_NEXT_HOP_ID |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_WEIGHT |  | yes |  |
|  | SAI_NEXT_HOP_GROUP_MEMBER_ATTR_CONFIGURED_ROLE | SAI_NEXT_HOP_GROUP_MEMBER_CONFIGURED_ROLE_PRIMARY | yes |  |
|  |  | SAI_NEXT_HOP_GROUP_MEMBER_CONFIGURED_ROLE_STANDBY | yes |  |
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