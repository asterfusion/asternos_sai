| Api | Sai Attribute | Enums | Support | Private |
| --- | --- | --- | --- | --- |
| create_next_hop | SAI_NEXT_HOP_ATTR_TYPE | SAI_NEXT_HOP_TYPE_IP | yes |  |
|  |  | SAI_NEXT_HOP_TYPE_MPLS | yes |  |
|  |  | SAI_NEXT_HOP_TYPE_TUNNEL_ENCAP | yes |  |
|  |  | SAI_NEXT_HOP_TYPE_SRV6_SIDLIST | yes |  |
|  |  | SAI_NEXT_HOP_TYPE_IPMC | yes |  |
|  | SAI_NEXT_HOP_ATTR_IP |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_ROUTER_INTERFACE_ID |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_ID |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_VNI |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_MAC |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_SRV6_SIDLIST_ID |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_LABELSTACK |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_COUNTER_ID |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_DECREMENT_TTL |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TYPE | SAI_OUTSEG_TYPE_PUSH | yes |  |
|  |  | SAI_OUTSEG_TYPE_SWAP | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TTL_MODE | SAI_OUTSEG_TTL_MODE_UNIFORM | yes |  |
|  |  | SAI_OUTSEG_TTL_MODE_PIPE | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TTL_VALUE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_EXP_MODE | SAI_OUTSEG_EXP_MODE_UNIFORM | yes |  |
|  |  | SAI_OUTSEG_EXP_MODE_PIPE | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_EXP_VALUE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_QOS_TC_AND_COLOR_TO_MPLS_EXP_MAP |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_SRC_MAC_REWRITE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_DST_MAC_REWRITE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_VLAN_REWRITE |  | yes |  |
| remove_next_hop |  |  | yes |  |
| set_next_hop_attribute | SAI_NEXT_HOP_ATTR_TUNNEL_VNI |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_MAC |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_COUNTER_ID |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_DECREMENT_TTL |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TYPE | SAI_OUTSEG_TYPE_PUSH | yes |  |
|  |  | SAI_OUTSEG_TYPE_SWAP | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TTL_MODE | SAI_OUTSEG_TTL_MODE_UNIFORM | yes |  |
|  |  | SAI_OUTSEG_TTL_MODE_PIPE | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TTL_VALUE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_EXP_MODE | SAI_OUTSEG_EXP_MODE_UNIFORM | yes |  |
|  |  | SAI_OUTSEG_EXP_MODE_PIPE | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_EXP_VALUE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_QOS_TC_AND_COLOR_TO_MPLS_EXP_MAP |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_SRC_MAC_REWRITE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_DST_MAC_REWRITE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_VLAN_REWRITE |  | yes |  |
| get_next_hop_attribute | SAI_NEXT_HOP_ATTR_TYPE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_IP |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_ROUTER_INTERFACE_ID |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_ID |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_VNI |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_TUNNEL_MAC |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_SRV6_SIDLIST_ID |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_LABELSTACK |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_COUNTER_ID |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_DECREMENT_TTL |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TYPE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TTL_MODE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_TTL_VALUE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_EXP_MODE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_OUTSEG_EXP_VALUE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_QOS_TC_AND_COLOR_TO_MPLS_EXP_MAP |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_SRC_MAC_REWRITE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_DST_MAC_REWRITE |  | yes |  |
|  | SAI_NEXT_HOP_ATTR_DISABLE_VLAN_REWRITE |  | yes |  |
| create_next_hops |  |  | no |  |
| remove_next_hops |  |  | no |  |
| set_next_hops_attribute |  |  | no |  |
| get_next_hops_attribute |  |  | no |  |