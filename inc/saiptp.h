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
 * @brief Transport mode of PTP
 */
typedef enum _sai_ptp_clock_transport_mode_t
{
    /** UDP IPv4 or IPv6 */
    SAI_PTP_CLOCK_TRANSPORT_MODE_UDP,

    /** Ethernet */
    SAI_PTP_CLOCK_TRANSPORT_MODE_IEEE_802_3,

} sai_ptp_clock_transport_mode_t;

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
 * @brief Clock type of PTP domain
 */
typedef enum _sai_ptp_domain_clock_type_t
{
    /** OC */
    SAI_PTP_DOMAIN_CLOCK_TYPE_OC,

    /** BC */
    SAI_PTP_DOMAIN_CLOCK_TYPE_BC,

    /** TC */
    SAI_PTP_DOMAIN_CLOCK_TYPE_TC,

} sai_ptp_domain_clock_type_t;

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

typedef enum _sai_ptp_clock_attr_t
{
    /**
     * @brief Start of attributes
     */
    SAI_PTP_CLOCK_ATTR_START,

    /**
     * @brief PTP packet transport mode
     *
     * @type sai_ptp_clock_transport_mode_t
     * @flags MANDATORY_ON_CREATE | CREATE_AND_SET
     */
    SAI_PTP_CLOCK_ATTR_TRANSPORT_MODE = SAI_PTP_CLOCK_ATTR_START,

    /**
     * @brief The ether type of PTP
     *
     * @type sai_uint32_t
     * @flags CREATE_ONLY
     * @default 0
     * @validonly SAI_PTP_CLOCK_ATTR_TRANSPORT_MODE == SAI_PTP_CLOCK_TRANSPORT_MODE_IEEE_802_3
     */
    SAI_PTP_CLOCK_ATTR_ETHER_TYPE_0,

    /**
     * @brief The ether type of PTP
     *
     * @type sai_uint32_t
     * @flags CREATE_ONLY
     * @default 0
     * @validonly SAI_PTP_CLOCK_ATTR_TRANSPORT_MODE == SAI_PTP_CLOCK_TRANSPORT_MODE_IEEE_802_3
     */
    SAI_PTP_CLOCK_ATTR_ETHER_TYPE_1,

    /**
     * @brief Destination Port
     *
     * @type sai_uint32_t
     * @flags CREATE_ONLY
     * @default 0
     * @validonly SAI_PTP_CLOCK_ATTR_TRANSPORT_MODE == SAI_PTP_CLOCK_TRANSPORT_MODE_UDP
     */
    SAI_PTP_CLOCK_ATTR_DST_PORT_0,

    /**
     * @brief Destination Port
     *
     * @type sai_uint32_t
     * @flags CREATE_ONLY
     * @default 0
     * @validonly SAI_PTP_CLOCK_ATTR_TRANSPORT_MODE == SAI_PTP_CLOCK_TRANSPORT_MODE_UDP
     */
    SAI_PTP_CLOCK_ATTR_DST_PORT_1,

    /**
     * @brief End of attributes
     */
    SAI_PTP_CLOCK_ATTR_END,

    /** Custom range base value */
    SAI_PTP_CLOCK_ATTR_CUSTOM_RANGE_START = 0x10000000,

    /** End of custom range base */
    SAI_PTP_CLOCK_ATTR_CUSTOM_RANGE_END

} sai_ptp_clock_attr_t;

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
     * @brief The clock type of PTP domain
     *
     * @type sai_object_id_t
     * @flags MANDATORY_ON_CREATE | CREATE_ONLY
     * @objects SAI_OBJECT_TYPE_PTP_CLOCK
     */
    SAI_PTP_DOMAIN_ENTRY_ATTR_CLOCK_ID,

    /**
     * @brief Query/Configure list of Domains
     *
     * @type sai_u32_list_t
     * @flags CREATE_AND_SET
     * @default empty
     */
    SAI_PTP_DOMAIN_ENTRY_ATTR_PTP_DOMAIN_LIST,

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
 * @brief Create PTP clock.
 *
 * @param[out] ptp_clock_id PTP Clock id
 * @param[in] switch_id Switch id
 * @param[in] attr_count Number of attributes
 * @param[in] attr_list Value of attributes
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_create_ptp_clock_fn)(
        _Out_ sai_object_id_t *ptp_clock_id,
        _In_ sai_object_id_t switch_id,
        _In_ uint32_t attr_count,
        _In_ const sai_attribute_t *attr_list);

/**
 * @brief Remove PTP Clock.
 *
 * @param[in] ptp_clock_id PTP Clock id
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_remove_ptp_clock_fn)(
        _In_ sai_object_id_t ptp_clock_id);

/**
 * @brief Set PTP clock attributes.
 *
 * @param[in] ptp_clock_id PTP Clock id
 * @param[in] attr Value of attribute
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_set_ptp_clock_attribute_fn)(
        _In_ sai_object_id_t ptp_clock_id,
        _In_ const sai_attribute_t *attr);

/**
 * @brief Get PTP clock attributes.
 *
 * @param[in] ptp_clock_id PTP Clock id
 * @param[in] attr_count Number of attributes
 * @param[inout] attr_list Value of attribute
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_get_ptp_clock_attribute_fn)(
        _In_ sai_object_id_t ptp_clock_id,
        _In_ uint32_t attr_count,
        _Inout_ sai_attribute_t *attr_list);

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
    sai_create_ptp_clock_fn                create_ptp_clock;
    sai_remove_ptp_clock_fn                remove_ptp_clock;
    sai_set_ptp_clock_attribute_fn         set_ptp_clock_attribute;
    sai_get_ptp_clock_attribute_fn         get_ptp_clock_attribute;
    sai_create_ptp_domain_entry_fn         create_ptp_domain_entry;
    sai_remove_ptp_domain_entry_fn         remove_ptp_domain_entry;
    sai_set_ptp_domain_entry_attribute_fn  set_ptp_domain_entry_attribute;
    sai_get_ptp_domain_entry_attribute_fn  get_ptp_domain_entry_attribute;

} sai_ptp_api_t;

/**
 * @}
 */
#endif /** __SAIPTP_H_ */
