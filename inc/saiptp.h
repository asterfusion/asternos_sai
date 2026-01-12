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
 * @file    saiptp.h
 *
 * @brief   This module defines SAI PTP interface
 */

#if !defined (__SAIPTP_H_)
#define __SAIPTP_H_

#include <saitypes.h>

/**
 * @defgroup SAIPTP SAI - PTP specific public APIs and data structures
 *
 * @{
 */

/**
 * @brief PTP domain mode of PTP
 */
typedef enum _sai_ptp_domain_mode_t
{
    /** PTP v1 */
    SAI_PTP_DOMAIN_MODE_PTP_V1,

    /** PTP v2 */
    SAI_PTP_DOMAIN_MODE_PTP_V2,

} sai_ptp_domain_mode_t;

/**
 * @brief Step type of PTP domain
 */
typedef enum _sai_ptp_domain_step_type_t
{
    /** One step */
    SAI_PTP_DOMAIN_STEP_TYPE_ONE_STEP,

    /** Two step */
    SAI_PTP_DOMAIN_STEP_TYPE_TWO_STEP,

} sai_ptp_domain_step_type_t;

/**
 * @brief Delay measurement of PTP domain
 */
typedef enum _sai_ptp_domain_delay_mesurement_type_t
{
    /** P2P */
    SAI_PTP_DOMAIN_DELAY_MESUREMENT_TYPE_P2P,

    /** E2E */
    SAI_PTP_DOMAIN_DELAY_MESUREMENT_TYPE_E2E,

} sai_ptp_domain_delay_mesurement_type_t;

typedef enum _sai_ptp_domain_entry_attr_t
{
    /**
     * @brief Start of attributes
     */
    SAI_PTP_DOMAIN_ENTRY_ATTR_START,

    /**
     * @brief The mode of PTP domain
     *
     * @type sai_ptp_domain_mode_t
     * @flags MANDATORY_ON_CREATE | CREATE_ONLY
     */
    SAI_PTP_DOMAIN_ENTRY_ATTR_PTP_DOMAIN_MODE = SAI_PTP_DOMAIN_ENTRY_ATTR_START,

    /**
     * @brief Query/Configure Domain ID
     *
     * @type sai_uint32_t
     * @flags CREATE_AND_SET
     * @default 0
     */
    SAI_PTP_DOMAIN_ENTRY_ATTR_PTP_DOMAIN_ID,

    /**
     * @brief Query/Configure 1PPS signal process
     *
     * @type bool
     * @flags CREATE_AND_SET
     * @default false
     */
    SAI_PTP_DOMAIN_ENTRY_ATTR_PTP_PPS_RECEPTION,

    /**
     * @brief End of attributes
     */
    SAI_PTP_DOMAIN_ENTRY_ATTR_END,

    /** Custom range base value */
    SAI_PTP_DOMAIN_ENTRY_ATTR_CUSTOM_RANGE_START = 0x10000000,

    /** End of custom range base */
    SAI_PTP_DOMAIN_ENTRY_ATTR_CUSTOM_RANGE_END

} sai_ptp_domain_entry_attr_t;

/**
 * @brief Create PTP domain entry.
 *
 * @param[out] ptp_domain_entry_id PTP Domain entry id
 * @param[in] switch_id Switch id
 * @param[in] attr_count Number of attributes
 * @param[in] attr_list Value of attributes
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_create_ptp_domain_entry_fn)(
        _Out_ sai_object_id_t *ptp_domain_entry_id,
        _In_ sai_object_id_t switch_id,
        _In_ uint32_t attr_count,
        _In_ const sai_attribute_t *attr_list);

/**
 * @brief Remove PTP Domain entry.
 *
 * @param[in] ptp_domain_entry_id PTP Domain entry id
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_remove_ptp_domain_entry_fn)(
        _In_ sai_object_id_t ptp_domain_entry_id);

/**
 * @brief Set PTP Domain Entry attributes.
 *
 * @param[in] ptp_domain_entry_id PTP Domain entry id
 * @param[in] attr Value of attribute
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_set_ptp_domain_entry_attribute_fn)(
        _In_ sai_object_id_t ptp_domain_entry_id,
        _In_ const sai_attribute_t *attr);

/**
 * @brief Get PTP Domain Entry attributes.
 *
 * @param[in] ptp_domain_entry_id PTP Domain entry id
 * @param[in] attr_count Number of attributes
 * @param[inout] attr_list Value of attribute
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_get_ptp_domain_entry_attribute_fn)(
        _In_ sai_object_id_t ptp_domain_entry_id,
        _In_ uint32_t attr_count,
        _Inout_ sai_attribute_t *attr_list);

/**
 * @brief PTP method table retrieved with sai_api_query()
 */
typedef struct _sai_ptp_api_t
{
    sai_create_ptp_domain_entry_fn         create_ptp_domain_entry;
    sai_remove_ptp_domain_entry_fn         remove_ptp_domain_entry;
    sai_set_ptp_domain_entry_attribute_fn  set_ptp_domain_entry_attribute;
    sai_get_ptp_domain_entry_attribute_fn  get_ptp_domain_entry_attribute;
} sai_ptp_api_t;

/**
 * @}
 */
#endif /** __SAIPTP_H_ */
