| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_l2mc_group |  |  | yes | no |  |
| remove_l2mc_group |  |  | yes | no |  |
| set_l2mc_group_attribute |  |  | yes | no |  |
| get_l2mc_group_attribute | SAI_L2MC_GROUP_ATTR_L2MC_OUTPUT_COUNT |  | yes | yes |  |
|  | SAI_L2MC_GROUP_ATTR_L2MC_MEMBER_LIST |  | yes | yes |  |
| create_l2mc_group_member | SAI_L2MC_GROUP_MEMBER_ATTR_L2MC_GROUP_ID |  | yes | yes |  |
|  | SAI_L2MC_GROUP_MEMBER_ATTR_L2MC_OUTPUT_ID |  | yes | yes |  |
|  | SAI_L2MC_GROUP_MEMBER_ATTR_L2MC_ENDPOINT_IP |  | no | yes |  |
|  | SAI_L2MC_GROUP_MEMBER_ATTR_CUSTOM_L2MC_VLAN_ID |  | yes | no | yes |
| remove_l2mc_group_member |  |  | yes | no |  |
| set_l2mc_group_member_attribute |  |  | yes | no |  |
| get_l2mc_group_member_attribute | SAI_L2MC_GROUP_MEMBER_ATTR_L2MC_GROUP_ID |  | yes | yes |  |
|  | SAI_L2MC_GROUP_MEMBER_ATTR_L2MC_OUTPUT_ID |  | yes | yes |  |
|  | SAI_L2MC_GROUP_MEMBER_ATTR_L2MC_ENDPOINT_IP |  | no | yes |  |
|  | SAI_L2MC_GROUP_MEMBER_ATTR_CUSTOM_L2MC_VLAN_ID |  | yes | no | yes |
