| Api | Sai Attribute | Enums | Support | Private |
| --- | --- | --- | --- | --- |
| create_hash | SAI_HASH_ATTR_NATIVE_HASH_FIELD_LIST | SAI_NATIVE_HASH_FIELD_SRC_IP | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_DST_IP | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_SRC_IP | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_DST_IP | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_SRC_IPV4 | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_DST_IPV4 | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_SRC_IPV6 | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_DST_IPV6 | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_SRC_IPV4 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_DST_IPV4 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_SRC_IPV6 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_DST_IPV6 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_VLAN_ID | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_IP_PROTOCOL | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_ETHERTYPE | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_L4_SRC_PORT | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_L4_DST_PORT | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_SRC_MAC | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_DST_MAC | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_IN_PORT | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_IP_PROTOCOL | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_ETHERTYPE | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_L4_SRC_PORT | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_L4_DST_PORT | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_SRC_MAC | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_DST_MAC | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_MPLS_LABEL_ALL | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_MPLS_LABEL_0 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_MPLS_LABEL_1 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_MPLS_LABEL_2 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_MPLS_LABEL_3 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_MPLS_LABEL_4 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_IPV6_FLOW_LABEL | no |  |
|  | SAI_HASH_ATTR_UDF_GROUP_LIST |  | no |  |
|  | SAI_HASH_ATTR_FINE_GRAINED_HASH_FIELD_LIST |  | no |  |
| remove_hash |  |  | yes |  |
| set_hash_attribute | SAI_HASH_ATTR_NATIVE_HASH_FIELD_LIST | SAI_NATIVE_HASH_FIELD_SRC_IP | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_DST_IP | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_SRC_IP | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_DST_IP | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_SRC_IPV4 | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_DST_IPV4 | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_SRC_IPV6 | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_DST_IPV6 | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_SRC_IPV4 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_DST_IPV4 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_SRC_IPV6 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_DST_IPV6 | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_VLAN_ID | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_IP_PROTOCOL | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_ETHERTYPE | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_L4_SRC_PORT | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_L4_DST_PORT | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_SRC_MAC | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_DST_MAC | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_IN_PORT | yes |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_IP_PROTOCOL | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_ETHERTYPE | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_L4_SRC_PORT | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_L4_DST_PORT | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_SRC_MAC | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_INNER_DST_MAC | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_MPLS_LABEL_ALL | no |  |
|  |  | SAI_NATIVE_HASH_FIELD_MPLS_LABEL_0 | no  |
|  |  | SAI_NATIVE_HASH_FIELD_MPLS_LABEL_1 | no  |
|  |  | SAI_NATIVE_HASH_FIELD_MPLS_LABEL_2 | no  |
|  |  | SAI_NATIVE_HASH_FIELD_MPLS_LABEL_3 | no  |
|  |  | SAI_NATIVE_HASH_FIELD_MPLS_LABEL_4 | no  |
|  |  | SAI_NATIVE_HASH_FIELD_IPV6_FLOW_LABEL | no  |
|  | SAI_HASH_ATTR_UDF_GROUP_LIST |  | no |  |
|  | SAI_HASH_ATTR_FINE_GRAINED_HASH_FIELD_LIST |  | no |  |
| get_hash_attribute | SAI_HASH_ATTR_NATIVE_HASH_FIELD_LIST |  | yes |  |
|  | SAI_HASH_ATTR_UDF_GROUP_LIST |  | no |  |
|  | SAI_HASH_ATTR_FINE_GRAINED_HASH_FIELD_LIST |  | no |  |
| create_fine_grained_hash_field |  |  | no |  |
| remove_fine_grained_hash_field |  |  | no |  |
| set_fine_grained_hash_field_attribute |  |  | no |  |
| get_fine_grained_hash_field_attribute |  |  | no |  |


