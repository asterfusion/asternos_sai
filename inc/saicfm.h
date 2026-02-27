/**
 * Copyright (c) 2014 Microsoft Open Technologies, Inc.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License"); you may
 *    not use this file except in compliance with the License. You may obtain
 *    a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 *    THIS CODE IS PROVIDED ON AN *AS IS* BASIS, WITHOUT WARRANTIES OR
 *    CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT
 *    LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS
 *    FOR A PARTICULAR PURPOSE, MERCHANTABILITY OR NON-INFRINGEMENT.
 *
 *    See the Apache Version 2.0 License for specific language governing
 *    permissions and limitations under the License.
 *
 *    Microsoft would like to thank the following companies for their review and
 *    assistance with these files: Intel Corporation, Mellanox Technologies Ltd,
 *    Dell Products, L.P., Facebook, Inc., Marvell International Ltd.
 *
 * @file    saicfm.h
 *
 * @brief   This module defines SAI CFM interface
 */

#if !defined (__SAICFM_H_)
#define __SAICFM_H_

#include <saitypes.h>

/**
 * @defgroup SAICFM SAI - CFM specific public APIs and data structures
 *
 * @{
 */

/**
 * @brief SAI MP type of CFM
 */
typedef enum _sai_cfm_mp_type_t
{
    /** MEP type */
    SAI_CFM_MP_TYPE_MEP,

    /** MIP type */
    SAI_CFM_MP_TYPE_MIP,

    /** Remote MEP type */
    SAI_CFM_MP_TYPE_REMOTE_MEP,
}sai_cfm_mp_type_t;


/**
 * @brief SAI attributes for CFM MEP node
 */
typedef enum _sai_cfm_mp_attr_t {

    /**
     * @brief Start of attributes
     */
    SAI_CFM_MP_ATTR_START,

    /**
     * @brief The type of CFM MEP ID
     * @type sai_cfm_mp_type_t
     * @flags MANDATORY_ON_CREATE | CREATE_ONLY
     */
     SAI_CFM_MP_ATTR_MEP_ID = SAI_CFM_MP_ATTR_START,

    /**
     * @brief The type of CFM MP node
     * @type sai_cfm_mp_type_t
     * @flags MANDATORY_ON_CREATE | CREATE_ONLY
     */
     SAI_CFM_MP_ATTR_TYPE,

     /**
     * @brief The MAC addr of MP node
     * @type sai_mac_t
     * @flags MANDATORY_ON_CREATE | CREATE_ONLY
     */
     SAI_CFM_MP_ATTR_MAC_ADDR,

     /**
     * @brief RX or Tx port
     * @type sai_object_id_t
     * @flags MANDATORY_ON_CREATE | CREATE_ONLY
     */
     SAI_CFM_MP_ATTR_PORT,

     /**
     * @brief The VLAN of MP node
     * @type sai_uint16_t
     * @flags CREATE_ONLY
     */
     SAI_CFM_MP_ATTR_VLAN,

     /**
     * @brief The name of CFM MD
     * @type char
     * @flags MANDATORY_ON_CREATE | CREATE_AND_SET
     */
     SAI_CFM_MP_ATTR_MD_NAME,

     /**
     * @brief The name of CFM MA ID
     * @type sai_uint16_t
     * @flags MANDATORY_ON_CREATE | CREATE_AND_SET
     */
     SAI_CFM_MP_ATTR_MA_ID,

     /**
     * @brief The MEG level of MP node
     * @type sai_uint8_t
     * @flags MANDATORY_ON_CREATE | CREATE_AND_SET
     */
     SAI_CFM_MP_ATTR_MEG_LEVEL,

     /** @brief End of attributes */
     SAI_CFM_MP_ATTR_END,

     /** Custom range base value */
     SAI_CFM_MP_ATTR_CUSTOM_RANGE_START = 0x10000000,

     /** End of custom range base */
     SAI_CFM_MP_ATTR_CUSTOM_RANGE_END

}sai_cfm_mp_attr_t;


/**
 * @brief Create CFM MP node.
 *
 * @param[out] cfm_mp_id CFM MP node Id
 * @param[in] switch_id Switch id
 * @param[in] attr_count Number of attributes
 * @param[in] attr_list Value of attributes
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_create_cfm_mp_fn)(
        _Out_ sai_object_id_t *cfm_mp_id,
        _In_ sai_object_id_t switch_id,
        _In_ uint32_t attr_count,
        _In_ const sai_attribute_t *attr_list);

/**
 * @brief Remove CFM MP node.
 *
 * @param[in] cfm_mp_id CFM MP node Id
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_remove_cfm_mp_fn)(
        _In_ sai_object_id_t cfm_mp_id);

/**
 * @brief Set CFM MP node attributes.
 *
 * @param[in] cfm_mp_id CFM MP node Id
 * @param[in] attr Value of attribute
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_set_cfm_mp_attribute_fn)(
        _In_ sai_object_id_t cfm_mp_id,
        _In_ const sai_attribute_t *attr);

/**
 * @brief Get CFM MP node attributes.
 *
 * @param[in] cfm_mp_id CFM MP node Id
 * @param[in] attr_count Number of attributes
 * @param[inout] attr_list Value of attribute
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_get_cfm_mp_attribute_fn)(
        _In_ sai_object_id_t cfm_mp_id,
        _In_ uint32_t attr_count,
        _Inout_ sai_attribute_t *attr_list);


/**
 * @brief SAI direction type of CFM Maintenance End Point
 */
typedef enum _sai_cfm_mp_dir_t {

    /* Inward MEP.
     * The MP processes OAM frames arriving from the network (ingress direction).
     * Used to monitor traffic entering the maintenance domain. */
    SAI_CFM_DIR_TYPE_INWARD,

    /* Outward MEP.
     * The MP sends OAM frames toward the network (egress direction).
     * Used to generate CCM/LBM/LTM/DM/LM packets outward to remote MPs. */
    SAI_CFM_DIR_TYPE_OUTWARD
} sai_cfm_mp_dir_t;


/**
 * @brief SAI CFM Loss Measurement (LM) type
 */
typedef enum _sai_cfm_lm_type_t {

    /* Single-ended Loss Measurement.
     * Loss is measured based on synthetic frames sent by one endpoint only.
     * Remote MEP returns LMR frames used to compute frame loss. */
    SAI_CFM_LM_TYPE_SINGLE_ENDED,

    /* Dual-ended Loss Measurement.
     * Both local and remote endpoints exchange LM frames and maintain counters.
     * Provides more accurate in/out loss statistics. */
    SAI_CFM_LM_TYPE_DURAL_ENDED
} sai_cfm_lm_type_t;


/**
 * @brief SAI CFM Delay Measurement (DM) type
 */
typedef enum _sai_cfm_dm_type_t {

    /* One-way DM (1DM).
     * Measures one-way delay using timestamp carried in DM frames.
     * Requires clock synchronization between endpoints (e.g., IEEE 1588). */
    SAI_CFM_DM_TYPE_ONE_WAY,

    /* Two-way DM (DMM/DMR).
     * Measures round-trip delay using request/response timestamps.
     * Does not require clock synchronization. */
    SAI_CFM_DM_TYPE_TWO_WAY
} sai_cfm_dm_type_t;

/**
 * @brief SAI CFM CCM pkts MD format
 */
typedef enum _sai_cfm_md_format_t {

    SAI_CFM_MD_FORMAT_NONE = 1,
    SAI_CFM_MD_FORMAT_DNS,
    SAI_CFM_MD_FORMAT_MAC,
    SAI_CFM_MD_FORMAT_STRING,
} sai_cfm_md_format_t;


/**
 * @brief SAI CFM CCM pkts MA format
 */
typedef enum _sai_cfm_ma_format_t {

    SAI_CFM_MA_FORMAT_ICC_BASED = 1,
    SAI_CFM_MA_FORMAT_STRING,
} sai_cfm_ma_format_t;

/**
 * @brief SAI CFM operational role of a Maintenance Point for LM/DM session
 */
typedef enum _sai_cfm_role_t {

    /* MP acts as sender of LM/DM frames.
     * Generates LMM/SLM/DMM packets for performance measurement. */
    SAI_CFM_LM_ROLE_SEND,

    /* MP acts as receiver of LM/DM frames.
     * Receives LMR/SLR/DMR packets and updates performance counters. */
    SAI_CFM_LM_ROLE_RECEIVE,

    /* MP does not participate as sender or receiver.
     * Applicable when MP is only forwarding OAM frames (MIP). */
    SAI_CFM_LM_ROLE_NONE,
} sai_cfm_role_t;


/**
 * @brief SAI attributes for CFM peer
 */
typedef enum _sai_cfm_mep_peer_attr_t {
    
    /**
     * @brief Start of attributes
     */
    SAI_CFM_MEP_PEER_ATTR_START,

     /**
     * @brief Local MEP ID
     * @type sai_uint16_t
     * @flags MANDATORY_ON_CREATE | CREATE_ONLY
     */
     SAI_CFM_MEP_PEER_ATTR_MEP_ID = SAI_CFM_MEP_PEER_ATTR_START,

     /**
     * @brief Remote MEP ID
     * @type sai_uint16_t
     * @flags MANDATORY_ON_CREATE | CREATE_ONLY
     */
     SAI_CFM_MEP_PEER_ATTR_REMOTE_MEP_ID,

     /**
     * @brief The VLAN of CFM MP
     * @type sai_uint16_t
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_VLAN_ID,

     /**
     * @brief The direction of CFM MP
     * @type sai_cfm_mp_dir_t
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_DIRECTION,

     /**
     * @brief Allow Receiving CCM pkts
     * @type bool
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_CCM_RX_ENABLE,

     /**
     * @brief Allow sending CCM pkts
     * @type bool
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_CCM_TX_ENABLE,

     /**
     * @brief The interval Level of CCM pkts
     * @type sai_uint32_t
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_CCM_INTERVAL_LEVEL,

     /**
     * @brief The MD identify fotmat in CCM pkts
     * @type sai_cfm_md_format_t
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_CCM_MD_FORMAT,

     /**
     * @brief The MD identify name in CCM pkts
     * @type char
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_CCM_MD_NAME,

     /**
     * @brief The MA identify fotmat in CCM pkts
     * @type sai_cfm_ma_format_t
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_CCM_MA_FORMAT,

     /**
     * @brief The MA identify name in CCM pkts
     * @type char
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_CCM_MA_NAME,

     /**
     * @brief The type of loss measurement
     * @type sai_cfm_lm_type_t
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_LM_TYPE,

     /**
     * @brief The type of loss measurement
     * @type sai_cfm_role_t
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_LM_ROLE,

     /**
     * @brief The type of loss measurement
     * @type sai_cfm_dm_type_t
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_DM_TYPE,

     /**
     * @brief The type of loss measurement
     * @type sai_cfm_role_t
     * @flags CREATE_AND_SET
     */
     SAI_CFM_MEP_PEER_ATTR_DM_ROLE,

     /** @brief End of attributes */
     SAI_CFM_MEP_PEER_ATTR_END,

     /** Custom range base value */
     SAI_CFM_MEP_PEER_ATTR_CUSTOM_RANGE_START = 0x10000000,

     /** End of custom range base */
     SAI_CFM_MEP_PEER_ATTR_CUSTOM_RANGE_END

} sai_cfm_mep_peer_attr_t;


/**
 * @brief SAI CFM peer state
 */
typedef enum _sai_cfm_peer_state_t
{
    /** BFD Session is down */
    SAI_CFM_PEER_STATE_DOWN,

    /** BFD Session is Up */
    SAI_CFM_PEER_STATE_UP,

} sai_cfm_peer_state_t;

/**
 * @brief Defines maximum MA or MD name length
 */
#define SAI_CFM_MD_NAME_SIZE 48
#define SAI_CFM_MA_NAME_SIZE 16

/**
 * @brief Defines the operational status of the CFM peer
 */
typedef struct _sai_custom_cfm_peer_state_notification_t
{
    /**
     * @brief BFD Session id
     *
     * @objects SAI_OBJECT_TYPE_BFD_SESSION
     */
    sai_object_id_t cfm_peer_id;

    sai_cfm_peer_state_t state;
 
    uint16_t             mepId;
    uint16_t             remoteMepId;
    uint16_t             vlanId;
    sai_cfm_mp_dir_t     dir;

    /* CCM config */
    sai_cfm_md_format_t  mdFormat;
    sai_cfm_ma_format_t  maFormat;
    char                 mdName[SAI_CFM_MD_NAME_SIZE];
    char                 maName[SAI_CFM_MA_NAME_SIZE];                   
    bool                 ccmRxEnable;
    bool                 ccmTxEnable;
    uint32_t             ccmIntervalLevel;
    uint32_t             ccmInterval;

    /* LM config */
    sai_cfm_lm_type_t    lmType;
    sai_cfm_role_t       lmRole;

    /* DM config */
    sai_cfm_dm_type_t    dmType;
    sai_cfm_role_t       dmRole;

} sai_custom_cfm_peer_state_notification_t;

/**
 * @brief Create CFM peer.
 *
 * @param[out] cfm_peer_id CFM peer Id
 * @param[in] switch_id Switch id
 * @param[in] attr_count Number of attributes
 * @param[in] attr_list Value of attributes
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_create_cfm_peer_fn)(
        _Out_ sai_object_id_t *cfm_peer_id,
        _In_ sai_object_id_t switch_id,
        _In_ uint32_t attr_count,
        _In_ const sai_attribute_t *attr_list);

/**
 * @brief Remove CFM peer.
 *
 * @param[in] cfm_peer_id CFM peer Id
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_remove_cfm_peer_fn)(
        _In_ sai_object_id_t cfm_peer_id);

/**
 * @brief Set CFM peer attributes.
 *
 * @param[in] cfm_peer_id CFM peer Id
 * @param[in] attr Value of attribute
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_set_cfm_peer_attribute_fn)(
        _In_ sai_object_id_t cfm_peer_id,
        _In_ const sai_attribute_t *attr);

/**
 * @brief Get CFM peer attributes.
 *
 * @param[in] cfm_peer_id CFM peer Id
 * @param[in] attr_count Number of attributes
 * @param[inout] attr_list Value of attribute
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_get_cfm_peer_attribute_fn)(
        _In_ sai_object_id_t cfm_peer_id,
        _In_ uint32_t attr_count,
        _Inout_ sai_attribute_t *attr_list);


/**
 * @brief CFM peer state change notification
 *
 * Passed as a parameter into sai_initialize_switch()
 *
 * @count data[count]
 *
 * @param[in] count Number of notifications
 * @param[in] data Array of CFM peer state
 */
typedef void (*sai_custom_cfm_peer_state_change_notification_fn)(
        _In_ uint32_t count,
        _In_ const sai_custom_cfm_peer_state_notification_t *data);


/**
 * @brief CFM method table retrieved with sai_api_query()
 */
typedef struct _sai_cfm_api_t
{
    sai_create_cfm_mp_fn            create_cfm_mp;
    sai_remove_cfm_mp_fn            remove_cfm_mp;
    sai_set_cfm_mp_attribute_fn     set_cfm_mp_attribute;
    sai_get_cfm_mp_attribute_fn     get_cfm_mp_attribute;

    sai_create_cfm_peer_fn   create_cfm_peer;
    sai_remove_cfm_peer_fn   remove_cfm_peer;
    sai_set_cfm_peer_attribute_fn  set_cfm_peer_attribute;
    sai_get_cfm_peer_attribute_fn  get_cfm_peer_attribute;
} sai_cfm_api_t;

/**
 * @}
 */
#endif /** __SAICFM_H_ */
