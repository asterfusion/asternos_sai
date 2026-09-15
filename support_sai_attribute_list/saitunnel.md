| Api | Sai Attribute | Enums | Marvell Support | Clonix Support | Private |
| --- | --- | --- | --- | --- | --- |
| create_tunnel_map | SAI_TUNNEL_MAP_ATTR_TYPE | SAI_TUNNEL_MAP_TYPE_OECN_TO_UECN | no | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_UECN_OECN_TO_OECN | no | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VNI_TO_VLAN_ID | yes | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VLAN_ID_TO_VNI | yes | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VNI_TO_BRIDGE_IF | yes | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_BRIDGE_IF_TO_VNI | yes | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VNI_TO_VIRTUAL_ROUTER_ID | yes | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VIRTUAL_ROUTER_ID_TO_VNI | yes | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VSID_TO_VLAN_ID | no | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VLAN_ID_TO_VSID | no | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VSID_TO_BRIDGE_IF | no | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_BRIDGE_IF_TO_VSID | no | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VIRTUAL_ROUTER_ID_TO_VPN_SID | no | no |  |
|  |  | SAI_TUNNEL_MAP_TYPE_PREFIX_AGG_ID_TO_SRV6_VPN_SID | no | no |  |
|  |  | SAI_TUNNEL_MAP_TYPE_PREFIX_AGG_ID_TO_TUNNEL_MAP_ID | no | no |  |
|  |  | SAI_TUNNEL_MAP_TYPE_FORWARDING_CLASS_TO_SRV6_VPN_SID | no | no |  |
|  |  | SAI_TUNNEL_MAP_TYPE_CUSTOM_REMOTE_LABEL | yes | no | yes |
|  |  | SAI_TUNNEL_MAP_TYPE_CUSTOM_LOCAL_LABEL | yes | no | yes |
|  | SAI_TUNNEL_MAP_ATTR_ENTRY_LIST |  | no | yes |  |
| remove_tunnel_map |  |  | yes | yes |  |
| set_tunnel_map_attribute |  |  | yes | yes |  |
| get_tunnel_map_attribute | SAI_TUNNEL_MAP_ATTR_TYPE |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ATTR_ENTRY_LIST |  | yes | yes |  |
| create_tunnel | SAI_TUNNEL_ATTR_TYPE | SAI_TUNNEL_TYPE_IPINIP | yes | yes |  |
|  |  | SAI_TUNNEL_TYPE_IPINIP_GRE | yes | yes |  |
|  |  | SAI_TUNNEL_TYPE_VXLAN | yes | yes |  |
|  |  | SAI_TUNNEL_TYPE_MPLS | yes | yes |  |
|  |  | SAI_TUNNEL_TYPE_SRV6 | no | no |  |
|  |  | SAI_TUNNEL_TYPE_NVGRE | no | yes |  |
|  |  | SAI_TUNNEL_TYPE_IPINIP_ESP | no | no |  |
|  |  | SAI_TUNNEL_TYPE_IPINIP_UDP_ESP | no | no |  |
|  |  | SAI_TUNNEL_TYPE_VXLAN_UDP_ESP | no | no |  |
|  | SAI_TUNNEL_ATTR_UNDERLAY_INTERFACE |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_OVERLAY_INTERFACE |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_PEER_MODE | SAI_TUNNEL_PEER_MODE_P2P | yes | yes |  |
|  |  | SAI_TUNNEL_PEER_MODE_P2MP | yes | no |  |
|  | SAI_TUNNEL_ATTR_ENCAP_SRC_IP |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_DST_IP |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_TTL_MODE | SAI_TUNNEL_TTL_MODE_UNIFORM_MODEL | yes | yes |  |
|  |  | SAI_TUNNEL_TTL_MODE_PIPE_MODEL | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_TTL_VAL |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_DSCP_MODE | SAI_TUNNEL_DSCP_MODE_UNIFORM_MODEL | yes | yes |  |
|  |  | SAI_TUNNEL_DSCP_MODE_PIPE_MODEL | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_DSCP_VAL |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_GRE_KEY_VALID |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_GRE_KEY |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_ECN_MODE | SAI_TUNNEL_ENCAP_ECN_MODE_STANDARD | yes | yes |  |
|  |  | SAI_TUNNEL_ENCAP_ECN_MODE_USER_DEFINED | yes | no |  |
|  | SAI_TUNNEL_ATTR_ENCAP_MAPPERS |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_ECN_MODE |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_MAPPERS |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_TTL_MODE | SAI_TUNNEL_TTL_MODE_UNIFORM_MODEL | yes | yes |  |
|  |  | SAI_TUNNEL_TTL_MODE_PIPE_MODEL | yes | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_DSCP_MODE | SAI_TUNNEL_DSCP_MODE_UNIFORM_MODEL | yes | yes |  |
|  |  | SAI_TUNNEL_DSCP_MODE_PIPE_MODEL | yes | yes |  |
|  | SAI_TUNNEL_ATTR_LOOPBACK_PACKET_ACTION | SAI_PACKET_ACTION_DROP | no | no |  |
|  |  | SAI_PACKET_ACTION_FORWARD | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_TUNNEL_ATTR_VXLAN_UDP_SPORT_MODE | SAI_TUNNEL_VXLAN_UDP_SPORT_MODE_USER_DEFINED | no | yes |  |
|  |  | SAI_TUNNEL_VXLAN_UDP_SPORT_MODE_EPHEMERAL | no | no |  |
|  | SAI_TUNNEL_ATTR_VXLAN_UDP_SPORT |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_VXLAN_UDP_SPORT_MASK |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_SA_INDEX |  | no | no |  |
|  | SAI_TUNNEL_ATTR_IPSEC_SA_PORT_LIST |  | no | no |  |
|  | SAI_TUNNEL_ATTR_ENCAP_QOS_TC_AND_COLOR_TO_DSCP_MAP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_QOS_TC_TO_QUEUE_MAP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_QOS_DSCP_TO_TC_MAP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_QOS_TC_TO_PRIORITY_GROUP_MAP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_VXLAN_UDP_SPORT_SECURITY |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  | 
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
|  | 
| SAI_TUNNEL_ATTR_SELECTIVE_COUNTER_LIST |  | no |  | no |  |
|  | 
| SAI_TUNNEL_ATTR_CUSTOM_EGRESS_MIRROR_SESSION |  | yes | yes | no |  |
|  | 
| SAI_TUNNEL_ATTR_CUSTOM_INGRESS_MIRROR_SESSION |  | yes | yes | no |  |
| remove_tunnel |  |  | yes | yes |  |
| set_tunnel_attribute | SAI_TUNNEL_ATTR_ENCAP_TTL_MODE | SAI_TUNNEL_TTL_MODE_UNIFORM_MODEL | yes | yes |  |
|  |  | SAI_TUNNEL_TTL_MODE_PIPE_MODEL | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_TTL_VAL |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_DSCP_MODE | SAI_TUNNEL_DSCP_MODE_UNIFORM_MODEL | yes | yes |  |
|  |  | SAI_TUNNEL_DSCP_MODE_PIPE_MODEL | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_DSCP_VAL |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_GRE_KEY |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_TTL_MODE | SAI_TUNNEL_TTL_MODE_UNIFORM_MODEL | yes | yes |  |
|  |  | SAI_TUNNEL_TTL_MODE_PIPE_MODEL | yes | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_DSCP_MODE | SAI_TUNNEL_DSCP_MODE_UNIFORM_MODEL | yes | yes |  |
|  |  | SAI_TUNNEL_DSCP_MODE_PIPE_MODEL | yes | yes |  |
|  | SAI_TUNNEL_ATTR_LOOPBACK_PACKET_ACTION | SAI_PACKET_ACTION_DROP | no | no |  |
|  |  | SAI_PACKET_ACTION_FORWARD | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY | no | yes |  |
|  |  | SAI_PACKET_ACTION_COPY_CANCEL | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRAP | no | yes |  |
|  |  | SAI_PACKET_ACTION_LOG | no | yes |  |
|  |  | SAI_PACKET_ACTION_DENY | no | yes |  |
|  |  | SAI_PACKET_ACTION_TRANSIT | no | yes |  |
|  |  | SAI_PACKET_ACTION_DONOTDROP | no | yes |  |
|  |  | SAI_PACKET_ACTION_REMARK | no | no |  |
|  | SAI_TUNNEL_ATTR_VXLAN_UDP_SPORT_MODE | SAI_TUNNEL_VXLAN_UDP_SPORT_MODE_USER_DEFINED | no | yes |  |
|  |  | SAI_TUNNEL_VXLAN_UDP_SPORT_MODE_EPHEMERAL | no | no |  |
|  | SAI_TUNNEL_ATTR_VXLAN_UDP_SPORT |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_VXLAN_UDP_SPORT_MASK |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_SA_INDEX |  | no | no |  |
|  | SAI_TUNNEL_ATTR_IPSEC_SA_PORT_LIST |  | no | no |  |
|  | SAI_TUNNEL_ATTR_ENCAP_QOS_TC_AND_COLOR_TO_DSCP_MAP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_QOS_TC_TO_QUEUE_MAP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_QOS_DSCP_TO_TC_MAP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_QOS_TC_TO_PRIORITY_GROUP_MAP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_VXLAN_UDP_SPORT_SECURITY |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_STATS_COUNT_MODE | SAI_STATS_COUNT_MODE_PACKET_AND_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_PACKET | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_BYTE | no | no |  |
|  |  | SAI_STATS_COUNT_MODE_NONE | no | no |  |
|  | SAI_TUNNEL_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_TUNNEL_ATTR_CUSTOM_EGRESS_MIRROR_SESSION |  | yes | no | yes |
|  | SAI_TUNNEL_ATTR_CUSTOM_INGRESS_MIRROR_SESSION |  | yes | no | yes |
| get_tunnel_attribute | SAI_TUNNEL_ATTR_TYPE |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_UNDERLAY_INTERFACE |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_OVERLAY_INTERFACE |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_PEER_MODE |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_SRC_IP |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_DST_IP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_TTL_MODE |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_TTL_VAL |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_DSCP_MODE |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_DSCP_VAL |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_GRE_KEY_VALID |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_GRE_KEY |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_ECN_MODE |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_MAPPERS |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_ECN_MODE |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_MAPPERS |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_TTL_MODE |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_DSCP_MODE |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_TERM_TABLE_ENTRY_LIST |  | yes | yes |  |
|  | SAI_TUNNEL_ATTR_LOOPBACK_PACKET_ACTION |  | no | no |  |
|  | SAI_TUNNEL_ATTR_VXLAN_UDP_SPORT_MODE |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_VXLAN_UDP_SPORT |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_VXLAN_UDP_SPORT_MASK |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_SA_INDEX |  | no | no |  |
|  | SAI_TUNNEL_ATTR_IPSEC_SA_PORT_LIST |  | no | no |  |
|  | SAI_TUNNEL_ATTR_ENCAP_QOS_TC_AND_COLOR_TO_DSCP_MAP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_ENCAP_QOS_TC_TO_QUEUE_MAP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_QOS_DSCP_TO_TC_MAP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_DECAP_QOS_TC_TO_PRIORITY_GROUP_MAP |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_VXLAN_UDP_SPORT_SECURITY |  | no | yes |  |
|  | SAI_TUNNEL_ATTR_STATS_COUNT_MODE |  | no | no |  |
|  | SAI_TUNNEL_ATTR_SELECTIVE_COUNTER_LIST |  | no | no |  |
|  | SAI_TUNNEL_ATTR_CUSTOM_EGRESS_MIRROR_SESSION |  | no | no | yes |
|  | SAI_TUNNEL_ATTR_CUSTOM_INGRESS_MIRROR_SESSION |  | no | no | yes |
| get_tunnel_stats | SAI_TUNNEL_STAT_IN_OCTETS |  | yes | yes |  |
|  | SAI_TUNNEL_STAT_IN_PACKETS |  | yes | yes |  |
|  | SAI_TUNNEL_STAT_OUT_OCTETS |  | yes | yes |  |
|  | SAI_TUNNEL_STAT_OUT_PACKETS |  | yes | yes |  |
| get_tunnel_stats_ext |  |  | no | yes |  |
| clear_tunnel_stats | SAI_TUNNEL_STAT_IN_OCTETS |  | yes | yes |  |
|  | SAI_TUNNEL_STAT_IN_PACKETS |  | yes | yes |  |
|  | SAI_TUNNEL_STAT_OUT_OCTETS |  | yes | yes |  |
|  | SAI_TUNNEL_STAT_OUT_PACKETS |  | yes | yes |  |
| create_tunnel_term_table_entry | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_VR_ID |  | yes | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_TYPE | SAI_TUNNEL_TERM_TABLE_ENTRY_TYPE_P2P | yes | yes |  |
|  |  | SAI_TUNNEL_TERM_TABLE_ENTRY_TYPE_P2MP | yes | yes |  |
|  |  | SAI_TUNNEL_TERM_TABLE_ENTRY_TYPE_MP2P | no | no |  |
|  |  | SAI_TUNNEL_TERM_TABLE_ENTRY_TYPE_MP2MP | no | no |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_DST_IP |  | yes | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_DST_IP_MASK |  | no | no |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_SRC_IP |  | yes | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_SRC_IP_MASK |  | no | no |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_TUNNEL_TYPE | SAI_TUNNEL_TYPE_IPINIP | yes | yes |  |
|  |  | SAI_TUNNEL_TYPE_IPINIP_GRE | yes | yes |  |
|  |  | SAI_TUNNEL_TYPE_VXLAN | yes | yes |  |
|  |  | SAI_TUNNEL_TYPE_MPLS | yes | yes |  |
|  |  | SAI_TUNNEL_TYPE_SRV6 | no | no |  |
|  |  | SAI_TUNNEL_TYPE_NVGRE | no | yes |  |
|  |  | SAI_TUNNEL_TYPE_IPINIP_ESP | no | no |  |
|  |  | SAI_TUNNEL_TYPE_IPINIP_UDP_ESP | no | no |  |
|  |  | SAI_TUNNEL_TYPE_VXLAN_UDP_ESP | no | no |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_ACTION_TUNNEL_ID |  | yes | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_IPSEC_VERIFIED |  | no | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_PRIORITY |  | no | yes |  |
| remove_tunnel_term_table_entry |  |  | yes | yes |  |
| set_tunnel_term_table_entry_attribute | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_VR_ID |  | no | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_IPSEC_VERIFIED |  | no | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_PRIORITY |  | no | yes |  |
| get_tunnel_term_table_entry_attribute | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_VR_ID |  | yes | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_TYPE |  | yes | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_DST_IP |  | yes | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_DST_IP_MASK |  | no | no |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_SRC_IP |  | yes | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_SRC_IP_MASK |  | no | no |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_TUNNEL_TYPE |  | yes | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_ACTION_TUNNEL_ID |  | yes | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_IP_ADDR_FAMILY |  | no | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_IPSEC_VERIFIED |  | no | yes |  |
|  | SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_PRIORITY |  | no | yes |  |
| create_tunnel_map_entry | SAI_TUNNEL_MAP_ENTRY_ATTR_TUNNEL_MAP_TYPE | SAI_TUNNEL_MAP_TYPE_OECN_TO_UECN | no | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_UECN_OECN_TO_OECN | no | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VNI_TO_VLAN_ID | yes | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VLAN_ID_TO_VNI | yes | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VNI_TO_BRIDGE_IF | yes | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_BRIDGE_IF_TO_VNI | yes | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VNI_TO_VIRTUAL_ROUTER_ID | yes | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VIRTUAL_ROUTER_ID_TO_VNI | yes | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VSID_TO_VLAN_ID | no | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VLAN_ID_TO_VSID | no | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VSID_TO_BRIDGE_IF | no | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_BRIDGE_IF_TO_VSID | no | yes |  |
|  |  | SAI_TUNNEL_MAP_TYPE_VIRTUAL_ROUTER_ID_TO_VPN_SID | no | no |  |
|  |  | SAI_TUNNEL_MAP_TYPE_PREFIX_AGG_ID_TO_SRV6_VPN_SID | no | no |  |
|  |  | SAI_TUNNEL_MAP_TYPE_PREFIX_AGG_ID_TO_TUNNEL_MAP_ID | no | no |  |
|  |  | SAI_TUNNEL_MAP_TYPE_FORWARDING_CLASS_TO_SRV6_VPN_SID | no | no |  |
|  |  | SAI_TUNNEL_MAP_TYPE_CUSTOM_REMOTE_LABEL | yes | no | yes |
|  |  | SAI_TUNNEL_MAP_TYPE_CUSTOM_REMOTE_LABEL | yes | no | yes |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_TUNNEL_MAP |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_OECN_KEY |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_OECN_VALUE |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_UECN_KEY |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_UECN_VALUE |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VLAN_ID_KEY |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VLAN_ID_VALUE |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VNI_ID_KEY |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VNI_ID_VALUE |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_BRIDGE_ID_KEY |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_BRIDGE_ID_VALUE |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VIRTUAL_ROUTER_ID_KEY |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VIRTUAL_ROUTER_ID_VALUE |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VSID_ID_KEY |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VSID_ID_VALUE |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_PREFIX_AGG_ID_KEY |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_SRV6_VPN_SID_VALUE |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_CUSTOM_MPLS_LABEL_VALUE |  | yes | no | yes |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_CUSTOM_MPLS_DST_IP |  | yes | no | yes |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_CUSTOM_MPLS_AC_INTERFACE |  | yes | no | yes |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_CUSTOM_MPLS_VLAN_ID |  | yes | no | yes |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_CUSTOM_TUNNEL_MPLS_TYPE |  | yes | no | yes |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_CUSTOM_MPLS_NEXTHOP |  | yes | no | yes |
| remove_tunnel_map_entry |  |  | yes | yes |  |
| set_tunnel_map_entry_attribute |  |  | yes | yes |  |
| get_tunnel_map_entry_attribute | SAI_TUNNEL_MAP_ENTRY_ATTR_TUNNEL_MAP_TYPE |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_TUNNEL_MAP |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_OECN_KEY |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_OECN_VALUE |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_UECN_KEY |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_UECN_VALUE |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VLAN_ID_KEY |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VLAN_ID_VALUE |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VNI_ID_KEY |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VNI_ID_VALUE |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_BRIDGE_ID_KEY |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_BRIDGE_ID_VALUE |  | yes | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VIRTUAL_ROUTER_ID_KEY |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VIRTUAL_ROUTER_ID_VALUE |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VSID_ID_KEY |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_VSID_ID_VALUE |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_PREFIX_AGG_ID_KEY |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_SRV6_VPN_SID_VALUE |  | no | yes |  |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_CUSTOM_MPLS_LABEL_VALUE |  | no | no | yes |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_CUSTOM_MPLS_DST_IP |  | no | no | yes |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_CUSTOM_MPLS_AC_INTERFACE |  | no | no | yes |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_CUSTOM_MPLS_VLAN_ID |  | no | no | yes |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_CUSTOM_TUNNEL_MPLS_TYPE |  | no | no | yes |
|  | SAI_TUNNEL_MAP_ENTRY_ATTR_CUSTOM_MPLS_NEXTHOP |  | no | no | yes |
| create_tunnels |  |  | no | yes |  |
| remove_tunnels |  |  | no | yes |  |
| set_tunnels_attribute |  |  | no | yes |  |
| get_tunnels_attribute |  |  | no | yes |  |
