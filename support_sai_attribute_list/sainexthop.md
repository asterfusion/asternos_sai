| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_next_hop | SAI_NEXT_HOP_ATTR_TYPE | SAI_NEXT_HOP_TYPE_IP | yes | yes |  |
|  |  | SAI_NEXT_HOP_TYPE_MPLS | yes | yes |  |
|  |  | SAI_NEXT_HOP_TYPE_TUNNEL_ENCAP | yes | yes |  |
|  |  | SAI_NEXT_HOP_TYPE_SRV6_SIDLIST | yes | yes |  |
|  |  | SAI_NEXT_HOP_TYPE_IPMC | no | no |  |
|  |  | SAI_NEXT_HOP_TYPE_BRIDGE_PORT | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_IP |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_ROUTER_INTERFACE_ID |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_ID |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_VNI |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_MAC |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_SRV6_SIDLIST_ID |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_LABELSTACK |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_DECREMENT_TTL |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TYPE | SAI_OUTSEG_TYPE_PUSH | yes | yes |  |
|  |  | SAI_OUTSEG_TYPE_SWAP | yes | no |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TTL_MODE | SAI_OUTSEG_TTL_MODE_UNIFORM | no | yes |  |
|  |  | SAI_OUTSEG_TTL_MODE_PIPE | no | no |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TTL_VALUE |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_EXP_MODE | SAI_OUTSEG_EXP_MODE_UNIFORM | no | yes |  |
|  |  | SAI_OUTSEG_EXP_MODE_PIPE | no | no |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_EXP_VALUE |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_QOS_TC_AND_COLOR_TO_MPLS_EXP_MAP |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_SRC_MAC_REWRITE |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_DST_MAC_REWRITE |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_VLAN_REWRITE |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_META_DATA |  | no | no |  |
| remove_next_hop |  |  | yes | yes |  |
| set_next_hop_attribute | SAI_NEXT_HOP_ATTR_TUNNEL_VNI |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_MAC |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_DECREMENT_TTL |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TYPE | SAI_OUTSEG_TYPE_PUSH | yes | yes |  |
|  |  | SAI_OUTSEG_TYPE_SWAP | yes | no |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TTL_MODE | SAI_OUTSEG_TTL_MODE_UNIFORM | no | yes |  |
|  |  | SAI_OUTSEG_TTL_MODE_PIPE | no | no |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TTL_VALUE |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_EXP_MODE | SAI_OUTSEG_EXP_MODE_UNIFORM | no | yes |  |
|  |  | SAI_OUTSEG_EXP_MODE_PIPE | no | no |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_EXP_VALUE |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_QOS_TC_AND_COLOR_TO_MPLS_EXP_MAP |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_SRC_MAC_REWRITE |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_DST_MAC_REWRITE |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_VLAN_REWRITE |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_META_DATA |  | no | no |  |
| get_next_hop_attribute | SAI_NEXT_HOP_ATTR_TYPE |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_IP |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_ROUTER_INTERFACE_ID |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_ID |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_VNI |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_MAC |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_SRV6_SIDLIST_ID |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_LABELSTACK |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_COUNTER_ID |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_DECREMENT_TTL |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TYPE |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TTL_MODE |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TTL_VALUE |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_EXP_MODE |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_EXP_VALUE |  | yes | yes |  |
|  | SAI_NEXT_HOP_ATTR_QOS_TC_AND_COLOR_TO_MPLS_EXP_MAP |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_SRC_MAC_REWRITE |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_DST_MAC_REWRITE |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_VLAN_REWRITE |  | no | yes |  |
|  | SAI_NEXT_HOP_ATTR_META_DATA |  | no | no |  |
| create_next_hops |  |  | no | yes |  |
| remove_next_hops |  |  | no | yes |  |
| set_next_hops_attribute |  |  | no | no |  |
| get_next_hops_attribute |  |  | no | no |  |
