| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_macsec | SAI_MACSEC_ATTR_CTAG_TPID |  | yes | no |  |
|  | SAI_MACSEC_ATTR_DIRECTION |  | yes | no |  |
|  | SAI_MACSEC_ATTR_MAX_VLAN_TAGS_PARSED |  | yes | no |  |
|  | SAI_MACSEC_ATTR_PHYSICAL_BYPASS_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_ATTR_STAG_TPID |  | yes | no |  |
|  | SAI_MACSEC_ATTR_STATS_MODE |  | yes | no |  |
|  | SAI_MACSEC_ATTR_WARM_BOOT_ENABLE |  | no | no |  |
|  | SAI_MACSEC_ATTR_ENABLE_POST |  | no | no |  |
| remove_macsec |  |  | yes | no |  |
| set_macsec_attribute | SAI_MACSEC_ATTR_CTAG_TPID |  | yes | no |  |
|  | SAI_MACSEC_ATTR_MAX_VLAN_TAGS_PARSED |  | yes | no |  |
|  | SAI_MACSEC_ATTR_PHYSICAL_BYPASS_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_ATTR_STAG_TPID |  | yes | no |  |
|  | SAI_MACSEC_ATTR_STATS_MODE |  | yes | no |  |
|  | SAI_MACSEC_ATTR_WARM_BOOT_ENABLE |  | no | no |  |
| get_macsec_attribute | SAI_MACSEC_ATTR_AVAILABLE_MACSEC_FLOW |  | yes | no |  |
|  | SAI_MACSEC_ATTR_AVAILABLE_MACSEC_SA |  | yes | no |  |
|  | SAI_MACSEC_ATTR_AVAILABLE_MACSEC_SC |  | yes | no |  |
|  | SAI_MACSEC_ATTR_CTAG_TPID |  | yes | no |  |
|  | SAI_MACSEC_ATTR_DIRECTION |  | yes | no |  |
|  | SAI_MACSEC_ATTR_FLOW_LIST |  | yes | no |  |
|  | SAI_MACSEC_ATTR_GCM_AES128_SUPPORTED |  | yes | no |  |
|  | SAI_MACSEC_ATTR_GCM_AES256_SUPPORTED |  | yes | no | k |
|  | SAI_MACSEC_ATTR_MAX_SECURE_ASSOCIATIONS_PER_SC |  | yes | no |  |
|  | SAI_MACSEC_ATTR_MAX_VLAN_TAGS_PARSED |  | yes | no |  |
|  | SAI_MACSEC_ATTR_PHYSICAL_BYPASS_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_ATTR_SCI_IN_INGRESS_MACSEC_ACL |  | yes | no |  |
|  | SAI_MACSEC_ATTR_SECTAG_OFFSETS_SUPPORTED |  | yes | no |  |
|  | SAI_MACSEC_ATTR_STAG_TPID |  | yes | no |  |
|  | SAI_MACSEC_ATTR_STATS_MODE |  | yes | no |  |
|  | SAI_MACSEC_ATTR_STATS_MODE_READ_CLEAR_SUPPORTED |  | yes | no |  |
|  | SAI_MACSEC_ATTR_STATS_MODE_READ_SUPPORTED |  | yes | no |  |
|  | SAI_MACSEC_ATTR_SUPPORTED_CIPHER_SUITE_LIST |  | yes | no |  |
|  | SAI_MACSEC_ATTR_SUPPORTED_PORT_LIST |  | yes | no |  |
|  | SAI_MACSEC_ATTR_SWITCHING_MODE_CUT_THROUGH_SUPPORTED |  | yes | no |  |
|  | SAI_MACSEC_ATTR_SWITCHING_MODE_STORE_AND_FORWARD_SUPPORTED |  | yes | no |  |
|  | SAI_MACSEC_ATTR_SYSTEM_SIDE_MTU |  | no | no |  |
|  | SAI_MACSEC_ATTR_WARM_BOOT_ENABLE |  | no | no |  |
|  | SAI_MACSEC_ATTR_WARM_BOOT_SUPPORTED |  | yes | no |  |
|  | SAI_MACSEC_ATTR_PN_32BIT_SUPPORTED |  | yes | no |  |
|  | SAI_MACSEC_ATTR_XPN_64BIT_SUPPORTED |  | yes | no |  |
|  | SAI_MACSEC_ATTR_POST_STATUS |  | no | no |  |
|  | SAI_MACSEC_ATTR_ENABLE_POST |  | no | no |  |
| create_macsec_flow | SAI_MACSEC_FLOW_ATTR_MACSEC_DIRECTION |  | yes | no |  |
|  | SAI_MACSEC_FLOW_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_MACSEC_FLOW_ATTR_STATS_COUNT_MODE |  | no | no |  |
| remove_macsec_flow |  |  | yes | no |  |
| set_macsec_flow_attribute | SAI_MACSEC_FLOW_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_MACSEC_FLOW_ATTR_STATS_COUNT_MODE |  | no | no |  |
| get_macsec_flow_attribute | SAI_MACSEC_FLOW_ATTR_ACL_ENTRY_LIST |  | yes | no |  |
|  | SAI_MACSEC_FLOW_ATTR_MACSEC_DIRECTION |  | yes | no |  |
|  | SAI_MACSEC_FLOW_ATTR_SC_LIST |  | yes | no |  |
|  | SAI_MACSEC_FLOW_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_MACSEC_FLOW_ATTR_STATS_COUNT_MODE |  | no | no |  |
| create_macsec_port | SAI_MACSEC_PORT_ATTR_CTAG_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_PORT_ATTR_MACSEC_DIRECTION |  | yes | no |  |
|  | SAI_MACSEC_PORT_ATTR_PORT_ID |  | yes | no |  |
|  | SAI_MACSEC_PORT_ATTR_STAG_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_PORT_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_MACSEC_PORT_ATTR_SWITCH_SWITCHING_MODE |  | yes | no |  |
|  | SAI_MACSEC_PORT_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| remove_macsec_port |  |  | yes | no |  |
| set_macsec_port_attribute | SAI_MACSEC_PORT_ATTR_CTAG_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_PORT_ATTR_STAG_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_PORT_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_MACSEC_PORT_ATTR_SWITCH_SWITCHING_MODE |  | no | no |  |
|  | SAI_MACSEC_PORT_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| get_macsec_port_attribute | SAI_MACSEC_PORT_ATTR_CTAG_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_PORT_ATTR_MACSEC_DIRECTION |  | yes | no |  |
|  | SAI_MACSEC_PORT_ATTR_PORT_ID |  | yes | no |  |
|  | SAI_MACSEC_PORT_ATTR_STAG_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_PORT_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_MACSEC_PORT_ATTR_SWITCH_SWITCHING_MODE |  | no | no |  |
|  | SAI_MACSEC_PORT_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
| create_macsec_sc | SAI_MACSEC_SC_ATTR_ENCRYPTION_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_FLOW_ID |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_DIRECTION |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_EXPLICIT_SCI_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_REPLAY_PROTECTION_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_REPLAY_PROTECTION_WINDOW |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_SCI |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_CIPHER_SUITE |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_SECTAG_OFFSET |  | yes | no |  |
| remove_macsec_sc |  |  | yes | no |  |
| set_macsec_sc_attribute | SAI_MACSEC_SC_ATTR_ENCRYPTION_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_EXPLICIT_SCI_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_REPLAY_PROTECTION_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_REPLAY_PROTECTION_WINDOW |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_CIPHER_SUITE |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_SECTAG_OFFSET |  | yes | no |  |
| get_macsec_sc_attribute | SAI_MACSEC_SC_ATTR_ACTIVE_EGRESS_SA_ID |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_ENCRYPTION_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_FLOW_ID |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_DIRECTION |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_EXPLICIT_SCI_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_REPLAY_PROTECTION_ENABLE |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_REPLAY_PROTECTION_WINDOW |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_SCI |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_SA_LIST |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_CIPHER_SUITE |  | yes | no |  |
|  | SAI_MACSEC_SC_ATTR_MACSEC_SECTAG_OFFSET |  | yes | no |  |
| create_macsec_sa | SAI_MACSEC_SA_ATTR_AN |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_AUTH_KEY |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_CONFIGURED_EGRESS_XPN |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_MACSEC_DIRECTION |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_MACSEC_SSCI |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_MINIMUM_INGRESS_XPN |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_SAK |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_SALT |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_SC_ID |  | yes | no |  |
| remove_macsec_sa |  |  | yes | no |  |
| set_macsec_sa_attribute | SAI_MACSEC_SA_ATTR_CONFIGURED_EGRESS_XPN |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_MINIMUM_INGRESS_XPN |  | yes | no |  |
| get_macsec_sa_attribute | SAI_MACSEC_SA_ATTR_AN |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_AUTH_KEY |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_CONFIGURED_EGRESS_XPN |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_CURRENT_XPN |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_MACSEC_DIRECTION |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_MACSEC_SSCI |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_MINIMUM_INGRESS_XPN |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_SAK |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_SALT |  | yes | no |  |
|  | SAI_MACSEC_SA_ATTR_SC_ID |  | yes | no |  |
