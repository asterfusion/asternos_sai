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
 * @file    saiobjectgroup.h
 *
 * @brief   This module defines SAI Object Group interface
 */

#if !defined (__SAIOBJECTGROUP_H_)
#define __SAIOBJECTGROUP_H_

#include <saitypes.h>

/**
 * @defgroup SAIOBJECTGROUP SAI - Object Group API definitions.
 *
 * @{
 */

/**
 * @brief SAI object group type
 */
typedef enum _sai_object_group_type_t
{
    /** The object group is used by ACL redirect flood */
    SAI_OBJECT_GROUP_TYPE_REDIRECT_FLOOD,

    /** The object group is used by mirror */
    SAI_OBJECT_GROUP_TYPE_MIRROR,

    /** The object group is used by ACL redirect */
    SAI_OBJECT_GROUP_TYPE_REDIRECT,

} sai_object_group_type_t;

/**
 * @brief SAI attributes for object group
 */
typedef enum _sai_object_group_attr_t
{
    /**
     * @brief Start of attributes
     */
    SAI_OBJECT_GROUP_ATTR_START,

    /**
     * @brief Object group type REDIRECT_FLOOD/MIRROR/REDIRECT
     *
     * @type sai_object_group_type_t
     * @flags CREATE_ONLY
     * @default SAI_OBJECT_GROUP_TYPE_REDIRECT_FLOOD
     */
    SAI_OBJECT_GROUP_ATTR_TYPE = SAI_OBJECT_GROUP_ATTR_START,

    /**
     * @brief Object list
     *
     * @type sai_object_list_t
     * @flags MANDATORY_ON_CREATE | CREATE_AND_SET
     * @objects SAI_OBJECT_TYPE_PORT, SAI_OBJECT_TYPE_LAG, SAI_OBJECT_TYPE_BRIDGE_PORT
     */
    SAI_OBJECT_GROUP_ATTR_OBJECT_LIST,

    /**
     * @brief End of attributes
     */
    SAI_OBJECT_GROUP_ATTR_END,

    /** Custom range base value */
    SAI_OBJECT_GROUP_ATTR_CUSTOM_RANGE_START = 0x10000000,

    /** End of custom range base */
    SAI_OBJECT_GROUP_ATTR_CUSTOM_RANGE_END
} sai_object_group_attr_t;

/**
 * @brief Create object group.
 *
 * @param[out] object_group_id Object group id
 * @param[in] switch_id Switch id
 * @param[in] attr_count Number of attributes
 * @param[in] attr_list Value of attributes
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_create_object_group_fn)(
        _Out_ sai_object_id_t *object_group_id,
        _In_ sai_object_id_t switch_id,
        _In_ uint32_t attr_count,
        _In_ const sai_attribute_t *attr_list);

/**
 * @brief Remove object group.
 *
 * @param[in] object_group_id Object group id
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_remove_object_group_fn)(
        _In_ sai_object_id_t object_group_id);

/**
 * @brief Set object group attributes.
 *
 * @param[in] object_group_id Object group id
 * @param[in] attr Value of attribute
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_set_object_group_attribute_fn)(
        _In_ sai_object_id_t object_group_id,
        _In_ const sai_attribute_t *attr);

/**
 * @brief Get object group attributes.
 *
 * @param[in] object_group_id Object group id
 * @param[in] attr_count Number of attributes
 * @param[inout] attr_list Value of attribute
 *
 * @return #SAI_STATUS_SUCCESS if operation is successful otherwise a different
 * error code is returned.
 */
typedef sai_status_t (*sai_get_object_group_attribute_fn)(
        _In_ sai_object_id_t object_group_id,
        _In_ uint32_t attr_count,
        _Inout_ sai_attribute_t *attr_list);

/**
 * @brief Object group method table retrieved with sai_api_query()
 */
typedef struct _sai_object_group_api_t
{
    sai_create_object_group_fn            create_object_group;
    sai_remove_object_group_fn            remove_object_group;
    sai_set_object_group_attribute_fn     set_object_group_attribute;
    sai_get_object_group_attribute_fn     get_object_group_attribute;
} sai_object_group_api_t;

/**
 * @}
 */
#endif /** __SAIOBJECTGROUP_H_ */
