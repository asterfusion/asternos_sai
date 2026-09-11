| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_isolation_group | SAI_ISOLATION_GROUP_ATTR_TYPE | SAI_ISOLATION_GROUP_TYPE_PORT | no | yes |  |
|  |  | SAI_ISOLATION_GROUP_TYPE_BRIDGE_PORT | yes | yes |  |
|  | SAI_ISOLATION_GROUP_ATTR_ISOLATION_MEMBER_LIST |  | yes | yes |  |
|  | SAI_ISOLATION_GROUP_ATTR_CUSTOM_FLOODING_FLOW_FILTER_OUTER_SRC_IP |  | yes | no | yes |
|  | SAI_ISOLATION_GROUP_ATTR_CUSTOM_FLOODING_FLOW_FILTER_OUTER_SRC_IP_MASK |  | yes | no | yes |
| remove_isolation_group |  |  | yes | yes |  |
| set_isolation_group_attribute |  |  | no | yes |  |
| get_isolation_group_attribute | SAI_ISOLATION_GROUP_ATTR_TYPE |  | yes | yes |  |
|  | SAI_ISOLATION_GROUP_ATTR_ISOLATION_MEMBER_LIST |  | yes | yes |  |
| create_isolation_group_member | SAI_ISOLATION_GROUP_MEMBER_ATTR_ISOLATION_GROUP_ID |  | yes | yes |  |
|  | SAI_ISOLATION_GROUP_MEMBER_ATTR_ISOLATION_OBJECT |  | yes | yes |  |
| remove_isolation_group_member |  |  | yes | yes |  |
| set_isolation_group_member_attribute |  |  | no | yes |  |
| get_isolation_group_member_attribute | SAI_ISOLATION_GROUP_MEMBER_ATTR_ISOLATION_GROUP_ID |  | yes | yes |  |
|  | SAI_ISOLATION_GROUP_MEMBER_ATTR_ISOLATION_OBJECT |  | yes | yes |  |
