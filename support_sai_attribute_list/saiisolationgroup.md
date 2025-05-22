| Api | Sai Attribute | Enums | Support | Private |
| --- | --- | --- | --- | --- |
| create_isolation_group | SAI_ISOLATION_GROUP_ATTR_TYPE | SAI_ISOLATION_GROUP_TYPE_PORT | no |  |
|  |  | SAI_ISOLATION_GROUP_TYPE_BRIDGE_PORT | yes |  |
|  | SAI_ISOLATION_GROUP_ATTR_ISOLATION_MEMBER_LIST |  | yes |  |
| remove_isolation_group |  |  | yes |  |
| set_isolation_group_attribute |  |  | no |  |
| get_isolation_group_attribute | SAI_ISOLATION_GROUP_ATTR_TYPE |  | yes |  |
|  | SAI_ISOLATION_GROUP_ATTR_ISOLATION_MEMBER_LIST |  | yes |  |
| create_isolation_group_member | SAI_ISOLATION_GROUP_MEMBER_ATTR_ISOLATION_GROUP_ID |  | yes |  |
|  | SAI_ISOLATION_GROUP_MEMBER_ATTR_ISOLATION_OBJECT |  | yes |  |
| remove_isolation_group_member |  |  | yes |  |
| set_isolation_group_member_attribute |  |  | no |  |
| get_isolation_group_member_attribute | SAI_ISOLATION_GROUP_MEMBER_ATTR_ISOLATION_GROUP_ID |  | yes |  |
|  | SAI_ISOLATION_GROUP_MEMBER_ATTR_ISOLATION_OBJECT |  | yes |  |
