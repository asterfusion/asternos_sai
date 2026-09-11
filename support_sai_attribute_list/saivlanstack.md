| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_vlan_stack | SAI_VLAN_STACK_ATTR_STAGE | SAI_VLAN_STACK_STAGE_INGRESS | yes | no | yes |
|  |  | SAI_VLAN_STACK_STAGE_EGRESS | no | no | yes |
|  | SAI_VLAN_STACK_ATTR_ACTION | SAI_VLAN_STACK_ACTION_SWAP | no | no | yes |
|  |  | SAI_VLAN_STACK_ACTION_PUSH | yes | no | yes |
|  |  | SAI_VLAN_STACK_ACTION_POP | no | no | yes |
|  | SAI_VLAN_STACK_ATTR_ORIGINAL_VLAN_ID_INNER |  | no | no | yes |
|  | SAI_VLAN_STACK_ATTR_ORIGINAL_VLAN_ID_OUTER |  | yes | no | yes |
|  | SAI_VLAN_STACK_ATTR_PORT |  | yes | no | yes |
|  | SAI_VLAN_STACK_ATTR_APPLIED_VLAN_ID_INNER |  | yes | no | yes |
|  | SAI_VLAN_STACK_ATTR_APPLIED_VLAN_ID_OUTER |  | yes | no | yes |
|  | SAI_VLAN_STACK_ATTR_VLAN_APPLIED_PRI |  | no | no | yes |
|  | SAI_VLAN_STACK_ATTR_CUSTOM_UPSTREAM_PORT_LIST |  | yes | no | yes |
| remove_vlan_stack |  |  | yes | no | yes |
| set_vlan_stack_attribute | SAI_VLAN_STACK_ATTR_ORIGINAL_VLAN_ID_INNER |  | no | no | yes |
|  | SAI_VLAN_STACK_ATTR_ORIGINAL_VLAN_ID_OUTER |  | no | no | yes |
|  | SAI_VLAN_STACK_ATTR_APPLIED_VLAN_ID_INNER |  | no | no | yes |
|  | SAI_VLAN_STACK_ATTR_APPLIED_VLAN_ID_OUTER |  | no | no | yes |
|  | SAI_VLAN_STACK_ATTR_VLAN_APPLIED_PRI |  | no | no | yes |
| get_vlan_stack_attribute | SAI_VLAN_STACK_ATTR_STAGE |  | yes | no | yes |
|  | SAI_VLAN_STACK_ATTR_ACTION |  | yes | no | yes |
|  | SAI_VLAN_STACK_ATTR_ORIGINAL_VLAN_ID_INNER |  | yes | no | yes |
|  | SAI_VLAN_STACK_ATTR_ORIGINAL_VLAN_ID_OUTER |  | yes | no | yes |
|  | SAI_VLAN_STACK_ATTR_PORT |  | yes | no | yes |
|  | SAI_VLAN_STACK_ATTR_APPLIED_VLAN_ID_INNER |  | yes | no | yes |
|  | SAI_VLAN_STACK_ATTR_APPLIED_VLAN_ID_OUTER |  | yes | no | yes |
|  | SAI_VLAN_STACK_ATTR_VLAN_APPLIED_PRI |  | yes | no | yes |
|  | SAI_VLAN_STACK_ATTR_CUSTOM_UPSTREAM_PORT_LIST |  | yes | no | yes |
