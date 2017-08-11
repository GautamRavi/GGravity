/*
** Copyright (c) 2015-2017 The Khronos Group Inc.
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

/*
** This header is generated from the Khronos Vulkan XML API Registry.
**
*/

#ifndef PARAMETER_VALIDATION_H
#define PARAMETER_VALIDATION_H 1

#include <string>

#include "vulkan/vulkan.h"
#include "vk_layer_extension_utils.h"
#include "parameter_validation_utils.h"

#ifndef UNUSED_PARAMETER
#define UNUSED_PARAMETER(x) (void)(x)
#endif // UNUSED_PARAMETER

namespace parameter_validation {
const uint32_t GeneratedHeaderVersion = 54;

const VkAccessFlags AllVkAccessFlagBits = VK_ACCESS_INDIRECT_COMMAND_READ_BIT|VK_ACCESS_INDEX_READ_BIT|VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT|VK_ACCESS_UNIFORM_READ_BIT|VK_ACCESS_INPUT_ATTACHMENT_READ_BIT|VK_ACCESS_SHADER_READ_BIT|VK_ACCESS_SHADER_WRITE_BIT|VK_ACCESS_COLOR_ATTACHMENT_READ_BIT|VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT|VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT|VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT|VK_ACCESS_TRANSFER_READ_BIT|VK_ACCESS_TRANSFER_WRITE_BIT|VK_ACCESS_HOST_READ_BIT|VK_ACCESS_HOST_WRITE_BIT|VK_ACCESS_MEMORY_READ_BIT|VK_ACCESS_MEMORY_WRITE_BIT|VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX|VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX|VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT;
const VkAttachmentDescriptionFlags AllVkAttachmentDescriptionFlagBits = VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT;
const VkBufferCreateFlags AllVkBufferCreateFlagBits = VK_BUFFER_CREATE_SPARSE_BINDING_BIT|VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT|VK_BUFFER_CREATE_SPARSE_ALIASED_BIT;
const VkBufferUsageFlags AllVkBufferUsageFlagBits = VK_BUFFER_USAGE_TRANSFER_SRC_BIT|VK_BUFFER_USAGE_TRANSFER_DST_BIT|VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT|VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT|VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT|VK_BUFFER_USAGE_STORAGE_BUFFER_BIT|VK_BUFFER_USAGE_INDEX_BUFFER_BIT|VK_BUFFER_USAGE_VERTEX_BUFFER_BIT|VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT;
const VkColorComponentFlags AllVkColorComponentFlagBits = VK_COLOR_COMPONENT_R_BIT|VK_COLOR_COMPONENT_G_BIT|VK_COLOR_COMPONENT_B_BIT|VK_COLOR_COMPONENT_A_BIT;
const VkCommandBufferResetFlags AllVkCommandBufferResetFlagBits = VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT;
const VkCommandBufferUsageFlags AllVkCommandBufferUsageFlagBits = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT|VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT|VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
const VkCommandPoolCreateFlags AllVkCommandPoolCreateFlagBits = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT|VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
const VkCommandPoolResetFlags AllVkCommandPoolResetFlagBits = VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT;
const VkCullModeFlags AllVkCullModeFlagBits = VK_CULL_MODE_NONE|VK_CULL_MODE_FRONT_BIT|VK_CULL_MODE_BACK_BIT|VK_CULL_MODE_FRONT_AND_BACK;
const VkDependencyFlags AllVkDependencyFlagBits = VK_DEPENDENCY_BY_REGION_BIT|VK_DEPENDENCY_VIEW_LOCAL_BIT_KHX|VK_DEPENDENCY_DEVICE_GROUP_BIT_KHX;
const VkDescriptorPoolCreateFlags AllVkDescriptorPoolCreateFlagBits = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
const VkDescriptorSetLayoutCreateFlags AllVkDescriptorSetLayoutCreateFlagBits = VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR;
const VkFenceCreateFlags AllVkFenceCreateFlagBits = VK_FENCE_CREATE_SIGNALED_BIT;
const VkFormatFeatureFlags AllVkFormatFeatureFlagBits = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT|VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT|VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT|VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT|VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT|VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT|VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT|VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT|VK_FORMAT_FEATURE_BLIT_SRC_BIT|VK_FORMAT_FEATURE_BLIT_DST_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG|VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR|VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT;
const VkImageAspectFlags AllVkImageAspectFlagBits = VK_IMAGE_ASPECT_COLOR_BIT|VK_IMAGE_ASPECT_DEPTH_BIT|VK_IMAGE_ASPECT_STENCIL_BIT|VK_IMAGE_ASPECT_METADATA_BIT;
const VkImageCreateFlags AllVkImageCreateFlagBits = VK_IMAGE_CREATE_SPARSE_BINDING_BIT|VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT|VK_IMAGE_CREATE_SPARSE_ALIASED_BIT|VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT|VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT|VK_IMAGE_CREATE_BIND_SFR_BIT_KHX|VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR;
const VkImageUsageFlags AllVkImageUsageFlagBits = VK_IMAGE_USAGE_TRANSFER_SRC_BIT|VK_IMAGE_USAGE_TRANSFER_DST_BIT|VK_IMAGE_USAGE_SAMPLED_BIT|VK_IMAGE_USAGE_STORAGE_BIT|VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT|VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT|VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT|VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT;
const VkMemoryHeapFlags AllVkMemoryHeapFlagBits = VK_MEMORY_HEAP_DEVICE_LOCAL_BIT|VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHX;
const VkMemoryPropertyFlags AllVkMemoryPropertyFlagBits = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT|VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT|VK_MEMORY_PROPERTY_HOST_COHERENT_BIT|VK_MEMORY_PROPERTY_HOST_CACHED_BIT|VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT;
const VkPipelineCreateFlags AllVkPipelineCreateFlagBits = VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT|VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT|VK_PIPELINE_CREATE_DERIVATIVE_BIT|VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHX|VK_PIPELINE_CREATE_DISPATCH_BASE_KHX;
const VkPipelineStageFlags AllVkPipelineStageFlagBits = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT|VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT|VK_PIPELINE_STAGE_VERTEX_INPUT_BIT|VK_PIPELINE_STAGE_VERTEX_SHADER_BIT|VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT|VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT|VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT|VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT|VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT|VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT|VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT|VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT|VK_PIPELINE_STAGE_TRANSFER_BIT|VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT|VK_PIPELINE_STAGE_HOST_BIT|VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT|VK_PIPELINE_STAGE_ALL_COMMANDS_BIT|VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX;
const VkQueryControlFlags AllVkQueryControlFlagBits = VK_QUERY_CONTROL_PRECISE_BIT;
const VkQueryPipelineStatisticFlags AllVkQueryPipelineStatisticFlagBits = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT|VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT|VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT|VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT|VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT|VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT|VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT;
const VkQueryResultFlags AllVkQueryResultFlagBits = VK_QUERY_RESULT_64_BIT|VK_QUERY_RESULT_WAIT_BIT|VK_QUERY_RESULT_WITH_AVAILABILITY_BIT|VK_QUERY_RESULT_PARTIAL_BIT;
const VkQueueFlags AllVkQueueFlagBits = VK_QUEUE_GRAPHICS_BIT|VK_QUEUE_COMPUTE_BIT|VK_QUEUE_TRANSFER_BIT|VK_QUEUE_SPARSE_BINDING_BIT;
const VkSampleCountFlags AllVkSampleCountFlagBits = VK_SAMPLE_COUNT_1_BIT|VK_SAMPLE_COUNT_2_BIT|VK_SAMPLE_COUNT_4_BIT|VK_SAMPLE_COUNT_8_BIT|VK_SAMPLE_COUNT_16_BIT|VK_SAMPLE_COUNT_32_BIT|VK_SAMPLE_COUNT_64_BIT;
const VkShaderStageFlags AllVkShaderStageFlagBits = VK_SHADER_STAGE_VERTEX_BIT|VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT|VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT|VK_SHADER_STAGE_GEOMETRY_BIT|VK_SHADER_STAGE_FRAGMENT_BIT|VK_SHADER_STAGE_COMPUTE_BIT|VK_SHADER_STAGE_ALL_GRAPHICS|VK_SHADER_STAGE_ALL;
const VkSparseImageFormatFlags AllVkSparseImageFormatFlagBits = VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT|VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT|VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT;
const VkSparseMemoryBindFlags AllVkSparseMemoryBindFlagBits = VK_SPARSE_MEMORY_BIND_METADATA_BIT;
const VkStencilFaceFlags AllVkStencilFaceFlagBits = VK_STENCIL_FACE_FRONT_BIT|VK_STENCIL_FACE_BACK_BIT|VK_STENCIL_FRONT_AND_BACK;
const VkSubpassDescriptionFlags AllVkSubpassDescriptionFlagBits = VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX|VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX;
const VkCompositeAlphaFlagsKHR AllVkCompositeAlphaFlagBitsKHR = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR|VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR|VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR|VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
const VkSurfaceTransformFlagsKHR AllVkSurfaceTransformFlagBitsKHR = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR|VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR;
const VkSwapchainCreateFlagsKHR AllVkSwapchainCreateFlagBitsKHR = VK_SWAPCHAIN_CREATE_BIND_SFR_BIT_KHX;
const VkDisplayPlaneAlphaFlagsKHR AllVkDisplayPlaneAlphaFlagBitsKHR = VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR;
const VkExternalMemoryFeatureFlagsKHR AllVkExternalMemoryFeatureFlagBitsKHR = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR|VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR|VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR;
const VkExternalMemoryHandleTypeFlagsKHR AllVkExternalMemoryHandleTypeFlagBitsKHR = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR;
const VkExternalSemaphoreFeatureFlagsKHR AllVkExternalSemaphoreFeatureFlagBitsKHR = VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR|VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR;
const VkExternalSemaphoreHandleTypeFlagsKHR AllVkExternalSemaphoreHandleTypeFlagBitsKHR = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR;
const VkSemaphoreImportFlagsKHR AllVkSemaphoreImportFlagBitsKHR = VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR;
const VkExternalFenceFeatureFlagsKHR AllVkExternalFenceFeatureFlagBitsKHR = VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR|VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR;
const VkExternalFenceHandleTypeFlagsKHR AllVkExternalFenceHandleTypeFlagBitsKHR = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR|VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR|VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR|VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR;
const VkFenceImportFlagsKHR AllVkFenceImportFlagBitsKHR = VK_FENCE_IMPORT_TEMPORARY_BIT_KHR;
const VkDebugReportFlagsEXT AllVkDebugReportFlagBitsEXT = VK_DEBUG_REPORT_INFORMATION_BIT_EXT|VK_DEBUG_REPORT_WARNING_BIT_EXT|VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT|VK_DEBUG_REPORT_ERROR_BIT_EXT|VK_DEBUG_REPORT_DEBUG_BIT_EXT;
const VkExternalMemoryFeatureFlagsNV AllVkExternalMemoryFeatureFlagBitsNV = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV|VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV|VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV;
const VkExternalMemoryHandleTypeFlagsNV AllVkExternalMemoryHandleTypeFlagBitsNV = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV;
const VkDeviceGroupPresentModeFlagsKHX AllVkDeviceGroupPresentModeFlagBitsKHX = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHX|VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHX|VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHX|VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHX;
const VkMemoryAllocateFlagsKHX AllVkMemoryAllocateFlagBitsKHX = VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHX;
const VkPeerMemoryFeatureFlagsKHX AllVkPeerMemoryFeatureFlagBitsKHX = VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHX|VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHX|VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHX|VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHX;
const VkIndirectCommandsLayoutUsageFlagsNVX AllVkIndirectCommandsLayoutUsageFlagBitsNVX = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX|VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX|VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX|VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX;
const VkObjectEntryUsageFlagsNVX AllVkObjectEntryUsageFlagBitsNVX = VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX|VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX;
const VkSurfaceCounterFlagsEXT AllVkSurfaceCounterFlagBitsEXT = VK_SURFACE_COUNTER_VBLANK_EXT;

static bool parameter_validation_vkCreateInstance(
    instance_layer_data*                        layer_data,
    const VkInstanceCreateInfo*                 pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkInstance*                                 pInstance)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateInstance", "pCreateInfo", "VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO, true, VALIDATION_ERROR_0be2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateInstance", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_0be09005);

        skipCall |= validate_struct_type(layer_data->report_data, "vkCreateInstance", "pCreateInfo->pApplicationInfo", "VK_STRUCTURE_TYPE_APPLICATION_INFO", pCreateInfo->pApplicationInfo, VK_STRUCTURE_TYPE_APPLICATION_INFO, false, VALIDATION_ERROR_0062b00b);

        if (pCreateInfo->pApplicationInfo != NULL)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateInstance", "pCreateInfo->pApplicationInfo->pNext", NULL, pCreateInfo->pApplicationInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0061c40d);
        }

        skipCall |= validate_string_array(layer_data->report_data, "vkCreateInstance", "pCreateInfo->enabledLayerCount", "pCreateInfo->ppEnabledLayerNames", pCreateInfo->enabledLayerCount, pCreateInfo->ppEnabledLayerNames, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_0be29001);

        skipCall |= validate_string_array(layer_data->report_data, "vkCreateInstance", "pCreateInfo->enabledExtensionCount", "pCreateInfo->ppEnabledExtensionNames", pCreateInfo->enabledExtensionCount, pCreateInfo->ppEnabledExtensionNames, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_0be28e01);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateInstance", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateInstance", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateInstance", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateInstance", "pInstance", pInstance, VALIDATION_ERROR_21219c01);

    return skipCall;
}

static bool parameter_validation_vkDestroyInstance(
    instance_layer_data*                        layer_data,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyInstance", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyInstance", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyInstance", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkEnumeratePhysicalDevices(
    instance_layer_data*                        layer_data,
    uint32_t*                                   pPhysicalDeviceCount,
    VkPhysicalDevice*                           pPhysicalDevices)
{
    bool skipCall = false;

    skipCall |= validate_array(layer_data->report_data, "vkEnumeratePhysicalDevices", "pPhysicalDeviceCount", "pPhysicalDevices", pPhysicalDeviceCount, pPhysicalDevices, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2801dc01);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceFeatures(
    instance_layer_data*                        layer_data,
    VkPhysicalDeviceFeatures*                   pFeatures)
{
    bool skipCall = false;

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetPhysicalDeviceFeatures", "pFeatures", pFeatures, VALIDATION_ERROR_2c016e01);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceFormatProperties(
    instance_layer_data*                        layer_data,
    VkFormat                                    format,
    VkFormatProperties*                         pFormatProperties)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceFormatProperties", "format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, format, VALIDATION_ERROR_2c409201);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetPhysicalDeviceFormatProperties", "pFormatProperties", pFormatProperties, VALIDATION_ERROR_2c417601);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceImageFormatProperties(
    instance_layer_data*                        layer_data,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkImageFormatProperties*                    pImageFormatProperties)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties", "format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, format, VALIDATION_ERROR_2ca09201);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties", "type", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, type, VALIDATION_ERROR_2ca30401);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties", "tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, tiling, VALIDATION_ERROR_2ca2fa01);

    skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties", "usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, usage, true, false, VALIDATION_ERROR_2ca30603);

    skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties", "flags", "VkImageCreateFlagBits", AllVkImageCreateFlagBits, flags, false, false, VALIDATION_ERROR_2ca09001);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties", "pImageFormatProperties", pImageFormatProperties, VALIDATION_ERROR_2ca18401);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceProperties(
    instance_layer_data*                        layer_data,
    VkPhysicalDeviceProperties*                 pProperties)
{
    bool skipCall = false;

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetPhysicalDeviceProperties", "pProperties", pProperties, VALIDATION_ERROR_2d61f401);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceQueueFamilyProperties(
    instance_layer_data*                        layer_data,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties*                    pQueueFamilyProperties)
{
    bool skipCall = false;

    skipCall |= validate_array(layer_data->report_data, "vkGetPhysicalDeviceQueueFamilyProperties", "pQueueFamilyPropertyCount", "pQueueFamilyProperties", pQueueFamilyPropertyCount, pQueueFamilyProperties, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2da20001);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceMemoryProperties(
    instance_layer_data*                        layer_data,
    VkPhysicalDeviceMemoryProperties*           pMemoryProperties)
{
    bool skipCall = false;

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetPhysicalDeviceMemoryProperties", "pMemoryProperties", pMemoryProperties, VALIDATION_ERROR_2ce1b001);

    return skipCall;
}

static bool parameter_validation_vkCreateDevice(
    instance_layer_data*                        layer_data,
    const VkDeviceCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDevice*                                   pDevice)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateDevice", "pCreateInfo", "VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO, true, VALIDATION_ERROR_0562b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateDevice", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_05609005);

        skipCall |= validate_struct_type_array(layer_data->report_data, "vkCreateDevice", "pCreateInfo->queueCreateInfoCount", "pCreateInfo->pQueueCreateInfos", "VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO", pCreateInfo->queueCreateInfoCount, pCreateInfo->pQueueCreateInfos, VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO, true, true, VALIDATION_ERROR_0561fe01);

        if (pCreateInfo->pQueueCreateInfos != NULL)
        {
            for (uint32_t queueCreateInfoIndex = 0; queueCreateInfoIndex < pCreateInfo->queueCreateInfoCount; ++queueCreateInfoIndex)
            {
                skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateDevice", ParameterName("pCreateInfo->pQueueCreateInfos[%i].pNext", ParameterName::IndexVector{ queueCreateInfoIndex }), NULL, pCreateInfo->pQueueCreateInfos[queueCreateInfoIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_06c1c40d);

                skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateDevice", ParameterName("pCreateInfo->pQueueCreateInfos[%i].flags", ParameterName::IndexVector{ queueCreateInfoIndex }), pCreateInfo->pQueueCreateInfos[queueCreateInfoIndex].flags, VALIDATION_ERROR_06c09005);

                skipCall |= validate_array(layer_data->report_data, "vkCreateDevice", ParameterName("pCreateInfo->pQueueCreateInfos[%i].queueCount", ParameterName::IndexVector{ queueCreateInfoIndex }), ParameterName("pCreateInfo->pQueueCreateInfos[%i].pQueuePriorities", ParameterName::IndexVector{ queueCreateInfoIndex }), pCreateInfo->pQueueCreateInfos[queueCreateInfoIndex].queueCount, pCreateInfo->pQueueCreateInfos[queueCreateInfoIndex].pQueuePriorities, true, true, VALIDATION_ERROR_06c29e1b, VALIDATION_ERROR_06c20401);
            }
        }

        skipCall |= validate_string_array(layer_data->report_data, "vkCreateDevice", "pCreateInfo->enabledLayerCount", "pCreateInfo->ppEnabledLayerNames", pCreateInfo->enabledLayerCount, pCreateInfo->ppEnabledLayerNames, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_05629001);

        skipCall |= validate_string_array(layer_data->report_data, "vkCreateDevice", "pCreateInfo->enabledExtensionCount", "pCreateInfo->ppEnabledExtensionNames", pCreateInfo->enabledExtensionCount, pCreateInfo->ppEnabledExtensionNames, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_05628e01);

        if (pCreateInfo->pEnabledFeatures != NULL)
        {
            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->robustBufferAccess", pCreateInfo->pEnabledFeatures->robustBufferAccess);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->fullDrawIndexUint32", pCreateInfo->pEnabledFeatures->fullDrawIndexUint32);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->imageCubeArray", pCreateInfo->pEnabledFeatures->imageCubeArray);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->independentBlend", pCreateInfo->pEnabledFeatures->independentBlend);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->geometryShader", pCreateInfo->pEnabledFeatures->geometryShader);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->tessellationShader", pCreateInfo->pEnabledFeatures->tessellationShader);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sampleRateShading", pCreateInfo->pEnabledFeatures->sampleRateShading);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->dualSrcBlend", pCreateInfo->pEnabledFeatures->dualSrcBlend);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->logicOp", pCreateInfo->pEnabledFeatures->logicOp);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->multiDrawIndirect", pCreateInfo->pEnabledFeatures->multiDrawIndirect);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->drawIndirectFirstInstance", pCreateInfo->pEnabledFeatures->drawIndirectFirstInstance);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->depthClamp", pCreateInfo->pEnabledFeatures->depthClamp);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->depthBiasClamp", pCreateInfo->pEnabledFeatures->depthBiasClamp);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->fillModeNonSolid", pCreateInfo->pEnabledFeatures->fillModeNonSolid);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->depthBounds", pCreateInfo->pEnabledFeatures->depthBounds);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->wideLines", pCreateInfo->pEnabledFeatures->wideLines);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->largePoints", pCreateInfo->pEnabledFeatures->largePoints);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->alphaToOne", pCreateInfo->pEnabledFeatures->alphaToOne);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->multiViewport", pCreateInfo->pEnabledFeatures->multiViewport);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->samplerAnisotropy", pCreateInfo->pEnabledFeatures->samplerAnisotropy);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->textureCompressionETC2", pCreateInfo->pEnabledFeatures->textureCompressionETC2);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->textureCompressionASTC_LDR", pCreateInfo->pEnabledFeatures->textureCompressionASTC_LDR);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->textureCompressionBC", pCreateInfo->pEnabledFeatures->textureCompressionBC);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->occlusionQueryPrecise", pCreateInfo->pEnabledFeatures->occlusionQueryPrecise);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->pipelineStatisticsQuery", pCreateInfo->pEnabledFeatures->pipelineStatisticsQuery);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->vertexPipelineStoresAndAtomics", pCreateInfo->pEnabledFeatures->vertexPipelineStoresAndAtomics);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->fragmentStoresAndAtomics", pCreateInfo->pEnabledFeatures->fragmentStoresAndAtomics);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderTessellationAndGeometryPointSize", pCreateInfo->pEnabledFeatures->shaderTessellationAndGeometryPointSize);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderImageGatherExtended", pCreateInfo->pEnabledFeatures->shaderImageGatherExtended);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderStorageImageExtendedFormats", pCreateInfo->pEnabledFeatures->shaderStorageImageExtendedFormats);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderStorageImageMultisample", pCreateInfo->pEnabledFeatures->shaderStorageImageMultisample);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderStorageImageReadWithoutFormat", pCreateInfo->pEnabledFeatures->shaderStorageImageReadWithoutFormat);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderStorageImageWriteWithoutFormat", pCreateInfo->pEnabledFeatures->shaderStorageImageWriteWithoutFormat);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderUniformBufferArrayDynamicIndexing", pCreateInfo->pEnabledFeatures->shaderUniformBufferArrayDynamicIndexing);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderSampledImageArrayDynamicIndexing", pCreateInfo->pEnabledFeatures->shaderSampledImageArrayDynamicIndexing);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderStorageBufferArrayDynamicIndexing", pCreateInfo->pEnabledFeatures->shaderStorageBufferArrayDynamicIndexing);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderStorageImageArrayDynamicIndexing", pCreateInfo->pEnabledFeatures->shaderStorageImageArrayDynamicIndexing);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderClipDistance", pCreateInfo->pEnabledFeatures->shaderClipDistance);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderCullDistance", pCreateInfo->pEnabledFeatures->shaderCullDistance);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderFloat64", pCreateInfo->pEnabledFeatures->shaderFloat64);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderInt64", pCreateInfo->pEnabledFeatures->shaderInt64);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderInt16", pCreateInfo->pEnabledFeatures->shaderInt16);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderResourceResidency", pCreateInfo->pEnabledFeatures->shaderResourceResidency);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->shaderResourceMinLod", pCreateInfo->pEnabledFeatures->shaderResourceMinLod);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseBinding", pCreateInfo->pEnabledFeatures->sparseBinding);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidencyBuffer", pCreateInfo->pEnabledFeatures->sparseResidencyBuffer);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidencyImage2D", pCreateInfo->pEnabledFeatures->sparseResidencyImage2D);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidencyImage3D", pCreateInfo->pEnabledFeatures->sparseResidencyImage3D);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidency2Samples", pCreateInfo->pEnabledFeatures->sparseResidency2Samples);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidency4Samples", pCreateInfo->pEnabledFeatures->sparseResidency4Samples);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidency8Samples", pCreateInfo->pEnabledFeatures->sparseResidency8Samples);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidency16Samples", pCreateInfo->pEnabledFeatures->sparseResidency16Samples);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->sparseResidencyAliased", pCreateInfo->pEnabledFeatures->sparseResidencyAliased);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->variableMultisampleRate", pCreateInfo->pEnabledFeatures->variableMultisampleRate);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateDevice", "pCreateInfo->pEnabledFeatures->inheritedQueries", pCreateInfo->pEnabledFeatures->inheritedQueries);
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDevice", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDevice", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDevice", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDevice", "pDevice", pDevice, VALIDATION_ERROR_1fc13801);

    return skipCall;
}

static bool parameter_validation_vkDestroyDevice(
    layer_data*                                 layer_data,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDevice", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDevice", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDevice", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkEnumerateInstanceExtensionProperties(
    layer_data*                                 layer_data,
    uint32_t*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties)
{
    bool skipCall = false;

    skipCall |= validate_array(layer_data->report_data, "vkEnumerateInstanceExtensionProperties", "pPropertyCount", "pProperties", pPropertyCount, pProperties, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_27a1f401);

    return skipCall;
}

static bool parameter_validation_vkEnumerateDeviceExtensionProperties(
    instance_layer_data*                        layer_data,
    const char*                                 pLayerName,
    uint32_t*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties)
{
    UNUSED_PARAMETER(pLayerName);

    bool skipCall = false;

    skipCall |= validate_array(layer_data->report_data, "vkEnumerateDeviceExtensionProperties", "pPropertyCount", "pProperties", pPropertyCount, pProperties, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2761f401);

    return skipCall;
}

static bool parameter_validation_vkGetDeviceQueue(
    layer_data*                                 layer_data,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    VkQueue*                                    pQueue)
{
    UNUSED_PARAMETER(queueFamilyIndex);
    UNUSED_PARAMETER(queueIndex);

    bool skipCall = false;

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetDeviceQueue", "pQueue", pQueue, VALIDATION_ERROR_2961fc01);

    return skipCall;
}

static bool parameter_validation_vkQueueSubmit(
    layer_data*                                 layer_data,
    uint32_t                                    submitCount,
    const VkSubmitInfo*                         pSubmits,
    VkFence                                     fence)
{
    UNUSED_PARAMETER(fence);

    bool skipCall = false;

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkQueueSubmit", "submitCount", "pSubmits", "VK_STRUCTURE_TYPE_SUBMIT_INFO", submitCount, pSubmits, VK_STRUCTURE_TYPE_SUBMIT_INFO, false, true, VALIDATION_ERROR_31a24001);

    if (pSubmits != NULL)
    {
        for (uint32_t submitIndex = 0; submitIndex < submitCount; ++submitIndex)
        {
            const VkStructureType allowed_structs_VkSubmitInfo[] = { VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV, VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR, VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR, VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHX };

            skipCall |= validate_struct_pnext(layer_data->report_data, "vkQueueSubmit", ParameterName("pSubmits[%i].pNext", ParameterName::IndexVector{ submitIndex }), "VkWin32KeyedMutexAcquireReleaseInfoNV, VkWin32KeyedMutexAcquireReleaseInfoKHR, VkD3D12FenceSubmitInfoKHR, VkDeviceGroupSubmitInfoKHX", pSubmits[submitIndex].pNext, ARRAY_SIZE(allowed_structs_VkSubmitInfo), allowed_structs_VkSubmitInfo, GeneratedHeaderVersion, VALIDATION_ERROR_13c1c40d);

            skipCall |= validate_array(layer_data->report_data, "vkQueueSubmit", ParameterName("pSubmits[%i].waitSemaphoreCount", ParameterName::IndexVector{ submitIndex }), ParameterName("pSubmits[%i].pWaitSemaphores", ParameterName::IndexVector{ submitIndex }), pSubmits[submitIndex].waitSemaphoreCount, pSubmits[submitIndex].pWaitSemaphores, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_13c27601);

            skipCall |= validate_flags_array(layer_data->report_data, "vkQueueSubmit", ParameterName("pSubmits[%i].waitSemaphoreCount", ParameterName::IndexVector{ submitIndex }), ParameterName("pSubmits[%i].pWaitDstStageMask", ParameterName::IndexVector{ submitIndex }), "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, pSubmits[submitIndex].waitSemaphoreCount, pSubmits[submitIndex].pWaitDstStageMask, false, true);

            skipCall |= validate_array(layer_data->report_data, "vkQueueSubmit", ParameterName("pSubmits[%i].commandBufferCount", ParameterName::IndexVector{ submitIndex }), ParameterName("pSubmits[%i].pCommandBuffers", ParameterName::IndexVector{ submitIndex }), pSubmits[submitIndex].commandBufferCount, pSubmits[submitIndex].pCommandBuffers, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_13c11401);

            skipCall |= validate_array(layer_data->report_data, "vkQueueSubmit", ParameterName("pSubmits[%i].signalSemaphoreCount", ParameterName::IndexVector{ submitIndex }), ParameterName("pSubmits[%i].pSignalSemaphores", ParameterName::IndexVector{ submitIndex }), pSubmits[submitIndex].signalSemaphoreCount, pSubmits[submitIndex].pSignalSemaphores, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_13c23401);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkAllocateMemory(
    layer_data*                                 layer_data,
    const VkMemoryAllocateInfo*                 pAllocateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDeviceMemory*                             pMemory)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkAllocateMemory", "pAllocateInfo", "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO", pAllocateInfo, VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO, true, VALIDATION_ERROR_0c62b00b);

    if (pAllocateInfo != NULL)
    {
        const VkStructureType allowed_structs_VkMemoryAllocateInfo[] = { VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV, VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHX, VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR, VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHR, VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR, VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV, VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR, VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV, VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR, VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV };

        skipCall |= validate_struct_pnext(layer_data->report_data, "vkAllocateMemory", "pAllocateInfo->pNext", "VkDedicatedAllocationMemoryAllocateInfoNV, VkMemoryAllocateFlagsInfoKHX, VkMemoryDedicatedAllocateInfoKHR, VkExportMemoryAllocateInfoKHR, VkImportMemoryWin32HandleInfoKHR, VkImportMemoryWin32HandleInfoNV, VkImportMemoryFdInfoKHR, VkExportMemoryAllocateInfoNV, VkExportMemoryWin32HandleInfoKHR, VkExportMemoryWin32HandleInfoNV", pAllocateInfo->pNext, ARRAY_SIZE(allowed_structs_VkMemoryAllocateInfo), allowed_structs_VkMemoryAllocateInfo, GeneratedHeaderVersion, VALIDATION_ERROR_0c61c40d);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkAllocateMemory", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkAllocateMemory", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkAllocateMemory", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkAllocateMemory", "pMemory", pMemory, VALIDATION_ERROR_16c1aa01);

    return skipCall;
}

static bool parameter_validation_vkFreeMemory(
    layer_data*                                 layer_data,
    VkDeviceMemory                              memory,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(memory);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkFreeMemory", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkFreeMemory", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkFreeMemory", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkMapMemory(
    layer_data*                                 layer_data,
    VkDeviceMemory                              memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    void**                                      ppData)
{
    UNUSED_PARAMETER(offset);
    UNUSED_PARAMETER(size);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkMapMemory", "memory", memory);

    skipCall |= validate_reserved_flags(layer_data->report_data, "vkMapMemory", "flags", flags, VALIDATION_ERROR_31209005);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkMapMemory", "ppData", ppData, VALIDATION_ERROR_31228c01);

    return skipCall;
}

static bool parameter_validation_vkUnmapMemory(
    layer_data*                                 layer_data,
    VkDeviceMemory                              memory)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkUnmapMemory", "memory", memory);

    return skipCall;
}

static bool parameter_validation_vkFlushMappedMemoryRanges(
    layer_data*                                 layer_data,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges)
{
    bool skipCall = false;

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkFlushMappedMemoryRanges", "memoryRangeCount", "pMemoryRanges", "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE", memoryRangeCount, pMemoryRanges, VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE, true, true, VALIDATION_ERROR_2821b201);

    if (pMemoryRanges != NULL)
    {
        for (uint32_t memoryRangeIndex = 0; memoryRangeIndex < memoryRangeCount; ++memoryRangeIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkFlushMappedMemoryRanges", ParameterName("pMemoryRanges[%i].pNext", ParameterName::IndexVector{ memoryRangeIndex }), NULL, pMemoryRanges[memoryRangeIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0c21c40d);

            skipCall |= validate_required_handle(layer_data->report_data, "vkFlushMappedMemoryRanges", ParameterName("pMemoryRanges[%i].memory", ParameterName::IndexVector{ memoryRangeIndex }), pMemoryRanges[memoryRangeIndex].memory);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkInvalidateMappedMemoryRanges(
    layer_data*                                 layer_data,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges)
{
    bool skipCall = false;

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkInvalidateMappedMemoryRanges", "memoryRangeCount", "pMemoryRanges", "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE", memoryRangeCount, pMemoryRanges, VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE, true, true, VALIDATION_ERROR_3101b201);

    if (pMemoryRanges != NULL)
    {
        for (uint32_t memoryRangeIndex = 0; memoryRangeIndex < memoryRangeCount; ++memoryRangeIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkInvalidateMappedMemoryRanges", ParameterName("pMemoryRanges[%i].pNext", ParameterName::IndexVector{ memoryRangeIndex }), NULL, pMemoryRanges[memoryRangeIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0c21c40d);

            skipCall |= validate_required_handle(layer_data->report_data, "vkInvalidateMappedMemoryRanges", ParameterName("pMemoryRanges[%i].memory", ParameterName::IndexVector{ memoryRangeIndex }), pMemoryRanges[memoryRangeIndex].memory);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkGetDeviceMemoryCommitment(
    layer_data*                                 layer_data,
    VkDeviceMemory                              memory,
    VkDeviceSize*                               pCommittedMemoryInBytes)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetDeviceMemoryCommitment", "memory", memory);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetDeviceMemoryCommitment", "pCommittedMemoryInBytes", pCommittedMemoryInBytes, VALIDATION_ERROR_29211801);

    return skipCall;
}

static bool parameter_validation_vkBindBufferMemory(
    layer_data*                                 layer_data,
    VkBuffer                                    buffer,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset)
{
    UNUSED_PARAMETER(memoryOffset);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkBindBufferMemory", "buffer", buffer);

    skipCall |= validate_required_handle(layer_data->report_data, "vkBindBufferMemory", "memory", memory);

    return skipCall;
}

static bool parameter_validation_vkBindImageMemory(
    layer_data*                                 layer_data,
    VkImage                                     image,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset)
{
    UNUSED_PARAMETER(memoryOffset);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkBindImageMemory", "image", image);

    skipCall |= validate_required_handle(layer_data->report_data, "vkBindImageMemory", "memory", memory);

    return skipCall;
}

static bool parameter_validation_vkGetBufferMemoryRequirements(
    layer_data*                                 layer_data,
    VkBuffer                                    buffer,
    VkMemoryRequirements*                       pMemoryRequirements)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetBufferMemoryRequirements", "buffer", buffer);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetBufferMemoryRequirements", "pMemoryRequirements", pMemoryRequirements, VALIDATION_ERROR_28a1b401);

    return skipCall;
}

static bool parameter_validation_vkGetImageMemoryRequirements(
    layer_data*                                 layer_data,
    VkImage                                     image,
    VkMemoryRequirements*                       pMemoryRequirements)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetImageMemoryRequirements", "image", image);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetImageMemoryRequirements", "pMemoryRequirements", pMemoryRequirements, VALIDATION_ERROR_2a21b401);

    return skipCall;
}

static bool parameter_validation_vkGetImageSparseMemoryRequirements(
    layer_data*                                 layer_data,
    VkImage                                     image,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements*            pSparseMemoryRequirements)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetImageSparseMemoryRequirements", "image", image);

    skipCall |= validate_array(layer_data->report_data, "vkGetImageSparseMemoryRequirements", "pSparseMemoryRequirementCount", "pSparseMemoryRequirements", pSparseMemoryRequirementCount, pSparseMemoryRequirements, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2a423801);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceSparseImageFormatProperties(
    instance_layer_data*                        layer_data,
    VkFormat                                    format,
    VkImageType                                 type,
    VkSampleCountFlagBits                       samples,
    VkImageUsageFlags                           usage,
    VkImageTiling                               tiling,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties*              pProperties)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties", "format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, format, VALIDATION_ERROR_2de09201);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties", "type", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, type, VALIDATION_ERROR_2de30401);

    skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties", "samples", "VkSampleCountFlagBits", AllVkSampleCountFlagBits, samples, true, true, VALIDATION_ERROR_2de2b401);

    skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties", "usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, usage, true, false, VALIDATION_ERROR_2de30603);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties", "tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, tiling, VALIDATION_ERROR_2de2fa01);

    skipCall |= validate_array(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties", "pPropertyCount", "pProperties", pPropertyCount, pProperties, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2de1f401);

    return skipCall;
}

static bool parameter_validation_vkQueueBindSparse(
    layer_data*                                 layer_data,
    uint32_t                                    bindInfoCount,
    const VkBindSparseInfo*                     pBindInfo,
    VkFence                                     fence)
{
    UNUSED_PARAMETER(fence);

    bool skipCall = false;

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkQueueBindSparse", "bindInfoCount", "pBindInfo", "VK_STRUCTURE_TYPE_BIND_SPARSE_INFO", bindInfoCount, pBindInfo, VK_STRUCTURE_TYPE_BIND_SPARSE_INFO, false, true, VALIDATION_ERROR_3160f801);

    if (pBindInfo != NULL)
    {
        for (uint32_t bindInfoIndex = 0; bindInfoIndex < bindInfoCount; ++bindInfoIndex)
        {
            const VkStructureType allowed_structs_VkBindSparseInfo[] = { VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHX };

            skipCall |= validate_struct_pnext(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pNext", ParameterName::IndexVector{ bindInfoIndex }), "VkDeviceGroupBindSparseInfoKHX", pBindInfo[bindInfoIndex].pNext, ARRAY_SIZE(allowed_structs_VkBindSparseInfo), allowed_structs_VkBindSparseInfo, GeneratedHeaderVersion, VALIDATION_ERROR_0121c40d);

            skipCall |= validate_array(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].waitSemaphoreCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfo[%i].pWaitSemaphores", ParameterName::IndexVector{ bindInfoIndex }), pBindInfo[bindInfoIndex].waitSemaphoreCount, pBindInfo[bindInfoIndex].pWaitSemaphores, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_01227601);

            skipCall |= validate_array(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].bufferBindCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfo[%i].pBufferBinds", ParameterName::IndexVector{ bindInfoIndex }), pBindInfo[bindInfoIndex].bufferBindCount, pBindInfo[bindInfoIndex].pBufferBinds, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_01210201);

            if (pBindInfo[bindInfoIndex].pBufferBinds != NULL)
            {
                for (uint32_t bufferBindIndex = 0; bufferBindIndex < pBindInfo[bindInfoIndex].bufferBindCount; ++bufferBindIndex)
                {
                    skipCall |= validate_required_handle(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pBufferBinds[%i].buffer", ParameterName::IndexVector{ bindInfoIndex, bufferBindIndex }), pBindInfo[bindInfoIndex].pBufferBinds[bufferBindIndex].buffer);

                    skipCall |= validate_array(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pBufferBinds[%i].bindCount", ParameterName::IndexVector{ bindInfoIndex, bufferBindIndex }), ParameterName("pBindInfo[%i].pBufferBinds[%i].pBinds", ParameterName::IndexVector{ bindInfoIndex, bufferBindIndex }), pBindInfo[bindInfoIndex].pBufferBinds[bufferBindIndex].bindCount, pBindInfo[bindInfoIndex].pBufferBinds[bufferBindIndex].pBinds, true, true, VALIDATION_ERROR_12c0141b, VALIDATION_ERROR_12c0fe01);

                    if (pBindInfo[bindInfoIndex].pBufferBinds[bufferBindIndex].pBinds != NULL)
                    {
                        for (uint32_t bindIndex = 0; bindIndex < pBindInfo[bindInfoIndex].pBufferBinds[bufferBindIndex].bindCount; ++bindIndex)
                        {
                            skipCall |= validate_flags(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pBufferBinds[%i].pBinds[%i].flags", ParameterName::IndexVector{ bindInfoIndex, bufferBindIndex, bindIndex }), "VkSparseMemoryBindFlagBits", AllVkSparseMemoryBindFlagBits, pBindInfo[bindInfoIndex].pBufferBinds[bufferBindIndex].pBinds[bindIndex].flags, false, false, VALIDATION_ERROR_13409001);
                        }
                    }
                }
            }

            skipCall |= validate_array(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].imageOpaqueBindCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfo[%i].pImageOpaqueBinds", ParameterName::IndexVector{ bindInfoIndex }), pBindInfo[bindInfoIndex].imageOpaqueBindCount, pBindInfo[bindInfoIndex].pImageOpaqueBinds, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_01218c01);

            if (pBindInfo[bindInfoIndex].pImageOpaqueBinds != NULL)
            {
                for (uint32_t imageOpaqueBindIndex = 0; imageOpaqueBindIndex < pBindInfo[bindInfoIndex].imageOpaqueBindCount; ++imageOpaqueBindIndex)
                {
                    skipCall |= validate_required_handle(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageOpaqueBinds[%i].image", ParameterName::IndexVector{ bindInfoIndex, imageOpaqueBindIndex }), pBindInfo[bindInfoIndex].pImageOpaqueBinds[imageOpaqueBindIndex].image);

                    skipCall |= validate_array(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageOpaqueBinds[%i].bindCount", ParameterName::IndexVector{ bindInfoIndex, imageOpaqueBindIndex }), ParameterName("pBindInfo[%i].pImageOpaqueBinds[%i].pBinds", ParameterName::IndexVector{ bindInfoIndex, imageOpaqueBindIndex }), pBindInfo[bindInfoIndex].pImageOpaqueBinds[imageOpaqueBindIndex].bindCount, pBindInfo[bindInfoIndex].pImageOpaqueBinds[imageOpaqueBindIndex].pBinds, true, true, VALIDATION_ERROR_1320141b, VALIDATION_ERROR_1320fe01);

                    if (pBindInfo[bindInfoIndex].pImageOpaqueBinds[imageOpaqueBindIndex].pBinds != NULL)
                    {
                        for (uint32_t bindIndex = 0; bindIndex < pBindInfo[bindInfoIndex].pImageOpaqueBinds[imageOpaqueBindIndex].bindCount; ++bindIndex)
                        {
                            skipCall |= validate_flags(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageOpaqueBinds[%i].pBinds[%i].flags", ParameterName::IndexVector{ bindInfoIndex, imageOpaqueBindIndex, bindIndex }), "VkSparseMemoryBindFlagBits", AllVkSparseMemoryBindFlagBits, pBindInfo[bindInfoIndex].pImageOpaqueBinds[imageOpaqueBindIndex].pBinds[bindIndex].flags, false, false, VALIDATION_ERROR_13409001);
                        }
                    }
                }
            }

            skipCall |= validate_array(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].imageBindCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfo[%i].pImageBinds", ParameterName::IndexVector{ bindInfoIndex }), pBindInfo[bindInfoIndex].imageBindCount, pBindInfo[bindInfoIndex].pImageBinds, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_01218001);

            if (pBindInfo[bindInfoIndex].pImageBinds != NULL)
            {
                for (uint32_t imageBindIndex = 0; imageBindIndex < pBindInfo[bindInfoIndex].imageBindCount; ++imageBindIndex)
                {
                    skipCall |= validate_required_handle(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageBinds[%i].image", ParameterName::IndexVector{ bindInfoIndex, imageBindIndex }), pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].image);

                    skipCall |= validate_array(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageBinds[%i].bindCount", ParameterName::IndexVector{ bindInfoIndex, imageBindIndex }), ParameterName("pBindInfo[%i].pImageBinds[%i].pBinds", ParameterName::IndexVector{ bindInfoIndex, imageBindIndex }), pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].bindCount, pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].pBinds, true, true, VALIDATION_ERROR_1300141b, VALIDATION_ERROR_1300fe01);

                    if (pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].pBinds != NULL)
                    {
                        for (uint32_t bindIndex = 0; bindIndex < pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].bindCount; ++bindIndex)
                        {
                            skipCall |= validate_flags(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageBinds[%i].pBinds[%i].subresource.aspectMask", ParameterName::IndexVector{ bindInfoIndex, imageBindIndex, bindIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].pBinds[bindIndex].subresource.aspectMask, true, false, VALIDATION_ERROR_0a400c03);

                            skipCall |= validate_flags(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].pImageBinds[%i].pBinds[%i].flags", ParameterName::IndexVector{ bindInfoIndex, imageBindIndex, bindIndex }), "VkSparseMemoryBindFlagBits", AllVkSparseMemoryBindFlagBits, pBindInfo[bindInfoIndex].pImageBinds[imageBindIndex].pBinds[bindIndex].flags, false, false, VALIDATION_ERROR_12e09001);
                        }
                    }
                }
            }

            skipCall |= validate_array(layer_data->report_data, "vkQueueBindSparse", ParameterName("pBindInfo[%i].signalSemaphoreCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfo[%i].pSignalSemaphores", ParameterName::IndexVector{ bindInfoIndex }), pBindInfo[bindInfoIndex].signalSemaphoreCount, pBindInfo[bindInfoIndex].pSignalSemaphores, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_01223401);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCreateFence(
    layer_data*                                 layer_data,
    const VkFenceCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateFence", "pCreateInfo", "VK_STRUCTURE_TYPE_FENCE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_FENCE_CREATE_INFO, true, VALIDATION_ERROR_0922b00b);

    if (pCreateInfo != NULL)
    {
        const VkStructureType allowed_structs_VkFenceCreateInfo[] = { VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO_KHR, VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR };

        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateFence", "pCreateInfo->pNext", "VkExportFenceCreateInfoKHR, VkExportFenceWin32HandleInfoKHR", pCreateInfo->pNext, ARRAY_SIZE(allowed_structs_VkFenceCreateInfo), allowed_structs_VkFenceCreateInfo, GeneratedHeaderVersion, VALIDATION_ERROR_0921c40d);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateFence", "pCreateInfo->flags", "VkFenceCreateFlagBits", AllVkFenceCreateFlagBits, pCreateInfo->flags, false, false, VALIDATION_ERROR_09209001);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateFence", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateFence", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateFence", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateFence", "pFence", pFence, VALIDATION_ERROR_20417001);

    return skipCall;
}

static bool parameter_validation_vkDestroyFence(
    layer_data*                                 layer_data,
    VkFence                                     fence,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(fence);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyFence", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyFence", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyFence", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkResetFences(
    layer_data*                                 layer_data,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences)
{
    bool skipCall = false;

    skipCall |= validate_handle_array(layer_data->report_data, "vkResetFences", "fenceCount", "pFences", fenceCount, pFences, true, true);

    return skipCall;
}

static bool parameter_validation_vkGetFenceStatus(
    layer_data*                                 layer_data,
    VkFence                                     fence)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetFenceStatus", "fence", fence);

    return skipCall;
}

static bool parameter_validation_vkWaitForFences(
    layer_data*                                 layer_data,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout)
{
    UNUSED_PARAMETER(timeout);

    bool skipCall = false;

    skipCall |= validate_handle_array(layer_data->report_data, "vkWaitForFences", "fenceCount", "pFences", fenceCount, pFences, true, true);

    skipCall |= validate_bool32(layer_data->report_data, "vkWaitForFences", "waitAll", waitAll);

    return skipCall;
}

static bool parameter_validation_vkCreateSemaphore(
    layer_data*                                 layer_data,
    const VkSemaphoreCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSemaphore*                                pSemaphore)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateSemaphore", "pCreateInfo", "VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO, true, VALIDATION_ERROR_1282b00b);

    if (pCreateInfo != NULL)
    {
        const VkStructureType allowed_structs_VkSemaphoreCreateInfo[] = { VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR, VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR };

        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateSemaphore", "pCreateInfo->pNext", "VkExportSemaphoreCreateInfoKHR, VkExportSemaphoreWin32HandleInfoKHR", pCreateInfo->pNext, ARRAY_SIZE(allowed_structs_VkSemaphoreCreateInfo), allowed_structs_VkSemaphoreCreateInfo, GeneratedHeaderVersion, VALIDATION_ERROR_1281c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateSemaphore", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_12809005);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSemaphore", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSemaphore", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSemaphore", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSemaphore", "pSemaphore", pSemaphore, VALIDATION_ERROR_22422801);

    return skipCall;
}

static bool parameter_validation_vkDestroySemaphore(
    layer_data*                                 layer_data,
    VkSemaphore                                 semaphore,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(semaphore);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroySemaphore", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroySemaphore", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroySemaphore", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkCreateEvent(
    layer_data*                                 layer_data,
    const VkEventCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkEvent*                                    pEvent)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateEvent", "pCreateInfo", "VK_STRUCTURE_TYPE_EVENT_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_EVENT_CREATE_INFO, true, VALIDATION_ERROR_07e2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateEvent", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_07e1c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateEvent", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_07e09005);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateEvent", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateEvent", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateEvent", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateEvent", "pEvent", pEvent, VALIDATION_ERROR_20215e01);

    return skipCall;
}

static bool parameter_validation_vkDestroyEvent(
    layer_data*                                 layer_data,
    VkEvent                                     event,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(event);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyEvent", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyEvent", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyEvent", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkGetEventStatus(
    layer_data*                                 layer_data,
    VkEvent                                     event)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetEventStatus", "event", event);

    return skipCall;
}

static bool parameter_validation_vkSetEvent(
    layer_data*                                 layer_data,
    VkEvent                                     event)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkSetEvent", "event", event);

    return skipCall;
}

static bool parameter_validation_vkResetEvent(
    layer_data*                                 layer_data,
    VkEvent                                     event)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkResetEvent", "event", event);

    return skipCall;
}

static bool parameter_validation_vkCreateQueryPool(
    layer_data*                                 layer_data,
    const VkQueryPoolCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkQueryPool*                                pQueryPool)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateQueryPool", "pCreateInfo", "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO, true, VALIDATION_ERROR_11c2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateQueryPool", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_11c1c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateQueryPool", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_11c09005);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateQueryPool", "pCreateInfo->queryType", "VkQueryType", VK_QUERY_TYPE_BEGIN_RANGE, VK_QUERY_TYPE_END_RANGE, pCreateInfo->queryType, VALIDATION_ERROR_11c29a01);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateQueryPool", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateQueryPool", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateQueryPool", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateQueryPool", "pQueryPool", pQueryPool, VALIDATION_ERROR_21e1fa01);

    return skipCall;
}

static bool parameter_validation_vkDestroyQueryPool(
    layer_data*                                 layer_data,
    VkQueryPool                                 queryPool,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(queryPool);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyQueryPool", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyQueryPool", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyQueryPool", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkGetQueryPoolResults(
    layer_data*                                 layer_data,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    size_t                                      dataSize,
    void*                                       pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    UNUSED_PARAMETER(firstQuery);
    UNUSED_PARAMETER(queryCount);
    UNUSED_PARAMETER(stride);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetQueryPoolResults", "queryPool", queryPool);

    skipCall |= validate_array(layer_data->report_data, "vkGetQueryPoolResults", "dataSize", "pData", dataSize, pData, true, true, VALIDATION_ERROR_2fa03c1b, VALIDATION_ERROR_2fa12201);

    skipCall |= validate_flags(layer_data->report_data, "vkGetQueryPoolResults", "flags", "VkQueryResultFlagBits", AllVkQueryResultFlagBits, flags, false, false, VALIDATION_ERROR_2fa09001);

    return skipCall;
}

static bool parameter_validation_vkCreateBuffer(
    layer_data*                                 layer_data,
    const VkBufferCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBuffer*                                   pBuffer)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateBuffer", "pCreateInfo", "VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO, true, VALIDATION_ERROR_0142b00b);

    if (pCreateInfo != NULL)
    {
        const VkStructureType allowed_structs_VkBufferCreateInfo[] = { VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV, VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHR };

        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateBuffer", "pCreateInfo->pNext", "VkDedicatedAllocationBufferCreateInfoNV, VkExternalMemoryBufferCreateInfoKHR", pCreateInfo->pNext, ARRAY_SIZE(allowed_structs_VkBufferCreateInfo), allowed_structs_VkBufferCreateInfo, GeneratedHeaderVersion, VALIDATION_ERROR_0141c40d);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateBuffer", "pCreateInfo->flags", "VkBufferCreateFlagBits", AllVkBufferCreateFlagBits, pCreateInfo->flags, false, false, VALIDATION_ERROR_01409001);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateBuffer", "pCreateInfo->usage", "VkBufferUsageFlagBits", AllVkBufferUsageFlagBits, pCreateInfo->usage, true, false, VALIDATION_ERROR_01430603);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateBuffer", "pCreateInfo->sharingMode", "VkSharingMode", VK_SHARING_MODE_BEGIN_RANGE, VK_SHARING_MODE_END_RANGE, pCreateInfo->sharingMode, VALIDATION_ERROR_0142c001);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateBuffer", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateBuffer", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateBuffer", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateBuffer", "pBuffer", pBuffer, VALIDATION_ERROR_1ec10001);

    return skipCall;
}

static bool parameter_validation_vkDestroyBuffer(
    layer_data*                                 layer_data,
    VkBuffer                                    buffer,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(buffer);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyBuffer", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyBuffer", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyBuffer", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkCreateBufferView(
    layer_data*                                 layer_data,
    const VkBufferViewCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBufferView*                               pView)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateBufferView", "pCreateInfo", "VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO, true, VALIDATION_ERROR_01a2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateBufferView", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_01a1c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateBufferView", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_01a09005);

        skipCall |= validate_required_handle(layer_data->report_data, "vkCreateBufferView", "pCreateInfo->buffer", pCreateInfo->buffer);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateBufferView", "pCreateInfo->format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfo->format, VALIDATION_ERROR_01a09201);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateBufferView", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateBufferView", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateBufferView", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateBufferView", "pView", pView, VALIDATION_ERROR_1ee26a01);

    return skipCall;
}

static bool parameter_validation_vkDestroyBufferView(
    layer_data*                                 layer_data,
    VkBufferView                                bufferView,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(bufferView);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyBufferView", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyBufferView", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyBufferView", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkCreateImage(
    layer_data*                                 layer_data,
    const VkImageCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImage*                                    pImage)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateImage", "pCreateInfo", "VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO, true, VALIDATION_ERROR_09e2b00b);

    if (pCreateInfo != NULL)
    {
        const VkStructureType allowed_structs_VkImageCreateInfo[] = { VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV, VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHX, VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHR, VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV };

        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateImage", "pCreateInfo->pNext", "VkDedicatedAllocationImageCreateInfoNV, VkImageSwapchainCreateInfoKHX, VkExternalMemoryImageCreateInfoKHR, VkExternalMemoryImageCreateInfoNV", pCreateInfo->pNext, ARRAY_SIZE(allowed_structs_VkImageCreateInfo), allowed_structs_VkImageCreateInfo, GeneratedHeaderVersion, VALIDATION_ERROR_09e1c40d);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateImage", "pCreateInfo->flags", "VkImageCreateFlagBits", AllVkImageCreateFlagBits, pCreateInfo->flags, false, false, VALIDATION_ERROR_09e09001);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateImage", "pCreateInfo->imageType", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, pCreateInfo->imageType, VALIDATION_ERROR_09e0ac01);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateImage", "pCreateInfo->format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfo->format, VALIDATION_ERROR_09e09201);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateImage", "pCreateInfo->samples", "VkSampleCountFlagBits", AllVkSampleCountFlagBits, pCreateInfo->samples, true, true, VALIDATION_ERROR_09e2b401);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateImage", "pCreateInfo->tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, pCreateInfo->tiling, VALIDATION_ERROR_09e2fa01);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateImage", "pCreateInfo->usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, pCreateInfo->usage, true, false, VALIDATION_ERROR_09e30603);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateImage", "pCreateInfo->sharingMode", "VkSharingMode", VK_SHARING_MODE_BEGIN_RANGE, VK_SHARING_MODE_END_RANGE, pCreateInfo->sharingMode, VALIDATION_ERROR_09e2c001);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateImage", "pCreateInfo->initialLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->initialLayout, VALIDATION_ERROR_09e0b801);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateImage", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateImage", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateImage", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateImage", "pImage", pImage, VALIDATION_ERROR_20c17e01);

    return skipCall;
}

static bool parameter_validation_vkDestroyImage(
    layer_data*                                 layer_data,
    VkImage                                     image,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(image);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyImage", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyImage", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyImage", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkGetImageSubresourceLayout(
    layer_data*                                 layer_data,
    VkImage                                     image,
    const VkImageSubresource*                   pSubresource,
    VkSubresourceLayout*                        pLayout)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetImageSubresourceLayout", "image", image);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetImageSubresourceLayout", "pSubresource", pSubresource, VALIDATION_ERROR_2a624401);

    if (pSubresource != NULL)
    {
        skipCall |= validate_flags(layer_data->report_data, "vkGetImageSubresourceLayout", "pSubresource->aspectMask", "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pSubresource->aspectMask, true, false, VALIDATION_ERROR_0a400c03);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetImageSubresourceLayout", "pLayout", pLayout, VALIDATION_ERROR_2a61a201);

    return skipCall;
}

static bool parameter_validation_vkCreateImageView(
    layer_data*                                 layer_data,
    const VkImageViewCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImageView*                                pView)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateImageView", "pCreateInfo", "VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO, true, VALIDATION_ERROR_0ac2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateImageView", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0ac1c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateImageView", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_0ac09005);

        skipCall |= validate_required_handle(layer_data->report_data, "vkCreateImageView", "pCreateInfo->image", pCreateInfo->image);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateImageView", "pCreateInfo->viewType", "VkImageViewType", VK_IMAGE_VIEW_TYPE_BEGIN_RANGE, VK_IMAGE_VIEW_TYPE_END_RANGE, pCreateInfo->viewType, VALIDATION_ERROR_0ac30801);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateImageView", "pCreateInfo->format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfo->format, VALIDATION_ERROR_0ac09201);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateImageView", "pCreateInfo->components.r", "VkComponentSwizzle", VK_COMPONENT_SWIZZLE_BEGIN_RANGE, VK_COMPONENT_SWIZZLE_END_RANGE, pCreateInfo->components.r, VALIDATION_ERROR_02e2a201);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateImageView", "pCreateInfo->components.g", "VkComponentSwizzle", VK_COMPONENT_SWIZZLE_BEGIN_RANGE, VK_COMPONENT_SWIZZLE_END_RANGE, pCreateInfo->components.g, VALIDATION_ERROR_02e09a01);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateImageView", "pCreateInfo->components.b", "VkComponentSwizzle", VK_COMPONENT_SWIZZLE_BEGIN_RANGE, VK_COMPONENT_SWIZZLE_END_RANGE, pCreateInfo->components.b, VALIDATION_ERROR_02e01001);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateImageView", "pCreateInfo->components.a", "VkComponentSwizzle", VK_COMPONENT_SWIZZLE_BEGIN_RANGE, VK_COMPONENT_SWIZZLE_END_RANGE, pCreateInfo->components.a, VALIDATION_ERROR_02e00001);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateImageView", "pCreateInfo->subresourceRange.aspectMask", "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pCreateInfo->subresourceRange.aspectMask, true, false, VALIDATION_ERROR_0a800c03);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateImageView", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateImageView", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateImageView", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateImageView", "pView", pView, VALIDATION_ERROR_20e26a01);

    return skipCall;
}

static bool parameter_validation_vkDestroyImageView(
    layer_data*                                 layer_data,
    VkImageView                                 imageView,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(imageView);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyImageView", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyImageView", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyImageView", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkCreateShaderModule(
    layer_data*                                 layer_data,
    const VkShaderModuleCreateInfo*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkShaderModule*                             pShaderModule)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateShaderModule", "pCreateInfo", "VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO, true, VALIDATION_ERROR_12a2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateShaderModule", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_12a1c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateShaderModule", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_12a09005);

        skipCall |= validate_array(layer_data->report_data, "vkCreateShaderModule", "pCreateInfo->codeSize", "pCreateInfo->pCode", pCreateInfo->codeSize, pCreateInfo->pCode, true, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_12a10c01);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateShaderModule", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateShaderModule", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateShaderModule", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateShaderModule", "pShaderModule", pShaderModule, VALIDATION_ERROR_22622e01);

    return skipCall;
}

static bool parameter_validation_vkDestroyShaderModule(
    layer_data*                                 layer_data,
    VkShaderModule                              shaderModule,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(shaderModule);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyShaderModule", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyShaderModule", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyShaderModule", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkCreatePipelineCache(
    layer_data*                                 layer_data,
    const VkPipelineCacheCreateInfo*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineCache*                            pPipelineCache)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreatePipelineCache", "pCreateInfo", "VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO, true, VALIDATION_ERROR_0f02b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreatePipelineCache", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0f01c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreatePipelineCache", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_0f009005);

        skipCall |= validate_array(layer_data->report_data, "vkCreatePipelineCache", "pCreateInfo->initialDataSize", "pCreateInfo->pInitialData", pCreateInfo->initialDataSize, pCreateInfo->pInitialData, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_0f019601);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreatePipelineCache", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreatePipelineCache", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreatePipelineCache", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreatePipelineCache", "pPipelineCache", pPipelineCache, VALIDATION_ERROR_21a1de01);

    return skipCall;
}

static bool parameter_validation_vkDestroyPipelineCache(
    layer_data*                                 layer_data,
    VkPipelineCache                             pipelineCache,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(pipelineCache);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyPipelineCache", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyPipelineCache", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyPipelineCache", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkGetPipelineCacheData(
    layer_data*                                 layer_data,
    VkPipelineCache                             pipelineCache,
    size_t*                                     pDataSize,
    void*                                       pData)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetPipelineCacheData", "pipelineCache", pipelineCache);

    skipCall |= validate_array(layer_data->report_data, "vkGetPipelineCacheData", "pDataSize", "pData", pDataSize, pData, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2f812201);

    return skipCall;
}

static bool parameter_validation_vkMergePipelineCaches(
    layer_data*                                 layer_data,
    VkPipelineCache                             dstCache,
    uint32_t                                    srcCacheCount,
    const VkPipelineCache*                      pSrcCaches)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkMergePipelineCaches", "dstCache", dstCache);

    skipCall |= validate_handle_array(layer_data->report_data, "vkMergePipelineCaches", "srcCacheCount", "pSrcCaches", srcCacheCount, pSrcCaches, true, true);

    return skipCall;
}

static bool parameter_validation_vkCreateGraphicsPipelines(
    layer_data*                                 layer_data,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkGraphicsPipelineCreateInfo*         pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines)
{
    UNUSED_PARAMETER(pipelineCache);

    bool skipCall = false;

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkCreateGraphicsPipelines", "createInfoCount", "pCreateInfos", "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO", createInfoCount, pCreateInfos, VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO, true, true, VALIDATION_ERROR_20812001);

    if (pCreateInfos != NULL)
    {
        for (uint32_t createInfoIndex = 0; createInfoIndex < createInfoCount; ++createInfoIndex)
        {
            const VkStructureType allowed_structs_VkGraphicsPipelineCreateInfo[] = { VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT };

            skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pNext", ParameterName::IndexVector{ createInfoIndex }), "VkPipelineDiscardRectangleStateCreateInfoEXT", pCreateInfos[createInfoIndex].pNext, ARRAY_SIZE(allowed_structs_VkGraphicsPipelineCreateInfo), allowed_structs_VkGraphicsPipelineCreateInfo, GeneratedHeaderVersion, VALIDATION_ERROR_0961c40d);

            skipCall |= validate_flags(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].flags", ParameterName::IndexVector{ createInfoIndex }), "VkPipelineCreateFlagBits", AllVkPipelineCreateFlagBits, pCreateInfos[createInfoIndex].flags, false, false, VALIDATION_ERROR_09609001);

            skipCall |= validate_struct_type_array(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].stageCount", ParameterName::IndexVector{ createInfoIndex }), ParameterName("pCreateInfos[%i].pStages", ParameterName::IndexVector{ createInfoIndex }), "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO", pCreateInfos[createInfoIndex].stageCount, pCreateInfos[createInfoIndex].pStages, VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO, true, true, VALIDATION_ERROR_09623e01);

            if (pCreateInfos[createInfoIndex].pStages != NULL)
            {
                for (uint32_t stageIndex = 0; stageIndex < pCreateInfos[createInfoIndex].stageCount; ++stageIndex)
                {
                    skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pStages[%i].pNext", ParameterName::IndexVector{ createInfoIndex, stageIndex }), NULL, pCreateInfos[createInfoIndex].pStages[stageIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_1061c40d);

                    skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pStages[%i].flags", ParameterName::IndexVector{ createInfoIndex, stageIndex }), pCreateInfos[createInfoIndex].pStages[stageIndex].flags, VALIDATION_ERROR_10609005);

                    skipCall |= validate_flags(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pStages[%i].stage", ParameterName::IndexVector{ createInfoIndex, stageIndex }), "VkShaderStageFlagBits", AllVkShaderStageFlagBits, pCreateInfos[createInfoIndex].pStages[stageIndex].stage, true, true, VALIDATION_ERROR_1062d801);

                    skipCall |= validate_required_handle(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pStages[%i].module", ParameterName::IndexVector{ createInfoIndex, stageIndex }), pCreateInfos[createInfoIndex].pStages[stageIndex].module);

                    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pStages[%i].pName", ParameterName::IndexVector{ createInfoIndex, stageIndex }), pCreateInfos[createInfoIndex].pStages[stageIndex].pName, VALIDATION_ERROR_1061c001);

                    if (pCreateInfos[createInfoIndex].pStages[stageIndex].pSpecializationInfo != NULL)
                    {
                        skipCall |= validate_array(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pStages[%i].pSpecializationInfo->dataSize", ParameterName::IndexVector{ createInfoIndex, stageIndex }), ParameterName("pCreateInfos[%i].pStages[%i].pSpecializationInfo->pData", ParameterName::IndexVector{ createInfoIndex, stageIndex }), pCreateInfos[createInfoIndex].pStages[stageIndex].pSpecializationInfo->dataSize, pCreateInfos[createInfoIndex].pStages[stageIndex].pSpecializationInfo->pData, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_13612201);
                    }
                }
            }

            skipCall |= validate_struct_type(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState", ParameterName::IndexVector{ createInfoIndex }), "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO", pCreateInfos[createInfoIndex].pVertexInputState, VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO, true, VALIDATION_ERROR_10a2b00b);

            if (pCreateInfos[createInfoIndex].pVertexInputState != NULL)
            {
                skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState->pNext", ParameterName::IndexVector{ createInfoIndex }), NULL, pCreateInfos[createInfoIndex].pVertexInputState->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_10a1c40d);

                skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState->flags", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pVertexInputState->flags, VALIDATION_ERROR_10a09005);

                skipCall |= validate_array(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState->vertexBindingDescriptionCount", ParameterName::IndexVector{ createInfoIndex }), ParameterName("pCreateInfos[%i].pVertexInputState->pVertexBindingDescriptions", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pVertexInputState->vertexBindingDescriptionCount, pCreateInfos[createInfoIndex].pVertexInputState->pVertexBindingDescriptions, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_10a26601);

                if (pCreateInfos[createInfoIndex].pVertexInputState->pVertexBindingDescriptions != NULL)
                {
                    for (uint32_t vertexBindingDescriptionIndex = 0; vertexBindingDescriptionIndex < pCreateInfos[createInfoIndex].pVertexInputState->vertexBindingDescriptionCount; ++vertexBindingDescriptionIndex)
                    {
                        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState->pVertexBindingDescriptions[%i].inputRate", ParameterName::IndexVector{ createInfoIndex, vertexBindingDescriptionIndex }), "VkVertexInputRate", VK_VERTEX_INPUT_RATE_BEGIN_RANGE, VK_VERTEX_INPUT_RATE_END_RANGE, pCreateInfos[createInfoIndex].pVertexInputState->pVertexBindingDescriptions[vertexBindingDescriptionIndex].inputRate, VALIDATION_ERROR_14c0ba01);
                    }
                }

                skipCall |= validate_array(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState->vertexAttributeDescriptionCount", ParameterName::IndexVector{ createInfoIndex }), ParameterName("pCreateInfos[%i].pVertexInputState->pVertexAttributeDescriptions", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pVertexInputState->vertexAttributeDescriptionCount, pCreateInfos[createInfoIndex].pVertexInputState->pVertexAttributeDescriptions, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_10a26401);

                if (pCreateInfos[createInfoIndex].pVertexInputState->pVertexAttributeDescriptions != NULL)
                {
                    for (uint32_t vertexAttributeDescriptionIndex = 0; vertexAttributeDescriptionIndex < pCreateInfos[createInfoIndex].pVertexInputState->vertexAttributeDescriptionCount; ++vertexAttributeDescriptionIndex)
                    {
                        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pVertexInputState->pVertexAttributeDescriptions[%i].format", ParameterName::IndexVector{ createInfoIndex, vertexAttributeDescriptionIndex }), "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfos[createInfoIndex].pVertexInputState->pVertexAttributeDescriptions[vertexAttributeDescriptionIndex].format, VALIDATION_ERROR_14a09201);
                    }
                }
            }

            skipCall |= validate_struct_type(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pInputAssemblyState", ParameterName::IndexVector{ createInfoIndex }), "VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO", pCreateInfos[createInfoIndex].pInputAssemblyState, VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO, true, VALIDATION_ERROR_0fc2b00b);

            if (pCreateInfos[createInfoIndex].pInputAssemblyState != NULL)
            {
                skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pInputAssemblyState->pNext", ParameterName::IndexVector{ createInfoIndex }), NULL, pCreateInfos[createInfoIndex].pInputAssemblyState->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0fc1c40d);

                skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pInputAssemblyState->flags", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pInputAssemblyState->flags, VALIDATION_ERROR_0fc09005);

                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pInputAssemblyState->topology", ParameterName::IndexVector{ createInfoIndex }), "VkPrimitiveTopology", VK_PRIMITIVE_TOPOLOGY_BEGIN_RANGE, VK_PRIMITIVE_TOPOLOGY_END_RANGE, pCreateInfos[createInfoIndex].pInputAssemblyState->topology, VALIDATION_ERROR_0fc30001);

                skipCall |= validate_bool32(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pInputAssemblyState->primitiveRestartEnable", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pInputAssemblyState->primitiveRestartEnable);
            }

            skipCall |= validate_struct_type(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState", ParameterName::IndexVector{ createInfoIndex }), "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO", pCreateInfos[createInfoIndex].pRasterizationState, VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO, true, VALIDATION_ERROR_1022b00b);

            if (pCreateInfos[createInfoIndex].pRasterizationState != NULL)
            {
                const VkStructureType allowed_structs_VkPipelineRasterizationStateCreateInfo[] = { VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD };

                skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->pNext", ParameterName::IndexVector{ createInfoIndex }), "VkPipelineRasterizationStateRasterizationOrderAMD", pCreateInfos[createInfoIndex].pRasterizationState->pNext, ARRAY_SIZE(allowed_structs_VkPipelineRasterizationStateCreateInfo), allowed_structs_VkPipelineRasterizationStateCreateInfo, GeneratedHeaderVersion, VALIDATION_ERROR_1021c40d);

                skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->flags", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pRasterizationState->flags, VALIDATION_ERROR_10209005);

                skipCall |= validate_bool32(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->depthClampEnable", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pRasterizationState->depthClampEnable);

                skipCall |= validate_bool32(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->rasterizerDiscardEnable", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pRasterizationState->rasterizerDiscardEnable);

                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->polygonMode", ParameterName::IndexVector{ createInfoIndex }), "VkPolygonMode", VK_POLYGON_MODE_BEGIN_RANGE, VK_POLYGON_MODE_END_RANGE, pCreateInfos[createInfoIndex].pRasterizationState->polygonMode, VALIDATION_ERROR_10228601);

                skipCall |= validate_flags(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->cullMode", ParameterName::IndexVector{ createInfoIndex }), "VkCullModeFlagBits", AllVkCullModeFlagBits, pCreateInfos[createInfoIndex].pRasterizationState->cullMode, false, false, VALIDATION_ERROR_10203a01);

                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->frontFace", ParameterName::IndexVector{ createInfoIndex }), "VkFrontFace", VK_FRONT_FACE_BEGIN_RANGE, VK_FRONT_FACE_END_RANGE, pCreateInfos[createInfoIndex].pRasterizationState->frontFace, VALIDATION_ERROR_10209801);

                skipCall |= validate_bool32(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pRasterizationState->depthBiasEnable", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pRasterizationState->depthBiasEnable);
            }

            skipCall |= validate_struct_type(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pDynamicState", ParameterName::IndexVector{ createInfoIndex }), "VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO", pCreateInfos[createInfoIndex].pDynamicState, VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO, false, VALIDATION_ERROR_0fa2b00b);

            if (pCreateInfos[createInfoIndex].pDynamicState != NULL)
            {
                skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pDynamicState->pNext", ParameterName::IndexVector{ createInfoIndex }), NULL, pCreateInfos[createInfoIndex].pDynamicState->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0fa1c40d);

                skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pDynamicState->flags", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].pDynamicState->flags, VALIDATION_ERROR_0fa09005);

                skipCall |= validate_ranged_enum_array(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].pDynamicState->dynamicStateCount", ParameterName::IndexVector{ createInfoIndex }), ParameterName("pCreateInfos[%i].pDynamicState->pDynamicStates", ParameterName::IndexVector{ createInfoIndex }), "VkDynamicState", VK_DYNAMIC_STATE_BEGIN_RANGE, VK_DYNAMIC_STATE_END_RANGE, pCreateInfos[createInfoIndex].pDynamicState->dynamicStateCount, pCreateInfos[createInfoIndex].pDynamicState->pDynamicStates, true, true);
            }

            skipCall |= validate_required_handle(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].layout", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].layout);

            skipCall |= validate_required_handle(layer_data->report_data, "vkCreateGraphicsPipelines", ParameterName("pCreateInfos[%i].renderPass", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].renderPass);
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateGraphicsPipelines", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateGraphicsPipelines", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateGraphicsPipelines", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_array(layer_data->report_data, "vkCreateGraphicsPipelines", "createInfoCount", "pPipelines", createInfoCount, pPipelines, true, true, VALIDATION_ERROR_2080381b, VALIDATION_ERROR_2081e201);

    return skipCall;
}

static bool parameter_validation_vkCreateComputePipelines(
    layer_data*                                 layer_data,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkComputePipelineCreateInfo*          pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines)
{
    UNUSED_PARAMETER(pipelineCache);

    bool skipCall = false;

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkCreateComputePipelines", "createInfoCount", "pCreateInfos", "VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO", createInfoCount, pCreateInfos, VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO, true, true, VALIDATION_ERROR_1f212001);

    if (pCreateInfos != NULL)
    {
        for (uint32_t createInfoIndex = 0; createInfoIndex < createInfoCount; ++createInfoIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].pNext", ParameterName::IndexVector{ createInfoIndex }), NULL, pCreateInfos[createInfoIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0301c40d);

            skipCall |= validate_flags(layer_data->report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].flags", ParameterName::IndexVector{ createInfoIndex }), "VkPipelineCreateFlagBits", AllVkPipelineCreateFlagBits, pCreateInfos[createInfoIndex].flags, false, false, VALIDATION_ERROR_03009001);

            skipCall |= validate_struct_type(layer_data->report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage", ParameterName::IndexVector{ createInfoIndex }), "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO", &(pCreateInfos[createInfoIndex].stage), VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO, false, VALIDATION_ERROR_1062b00b);

            skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage.pNext", ParameterName::IndexVector{ createInfoIndex }), NULL, pCreateInfos[createInfoIndex].stage.pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_1061c40d);

            skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage.flags", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].stage.flags, VALIDATION_ERROR_10609005);

            skipCall |= validate_flags(layer_data->report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage.stage", ParameterName::IndexVector{ createInfoIndex }), "VkShaderStageFlagBits", AllVkShaderStageFlagBits, pCreateInfos[createInfoIndex].stage.stage, true, true, VALIDATION_ERROR_1062d801);

            skipCall |= validate_required_handle(layer_data->report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage.module", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].stage.module);

            skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage.pName", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].stage.pName, VALIDATION_ERROR_1061c001);

            if (pCreateInfos[createInfoIndex].stage.pSpecializationInfo != NULL)
            {
                skipCall |= validate_array(layer_data->report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].stage.pSpecializationInfo->dataSize", ParameterName::IndexVector{ createInfoIndex }), ParameterName("pCreateInfos[%i].stage.pSpecializationInfo->pData", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].stage.pSpecializationInfo->dataSize, pCreateInfos[createInfoIndex].stage.pSpecializationInfo->pData, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_13612201);
            }

            skipCall |= validate_required_handle(layer_data->report_data, "vkCreateComputePipelines", ParameterName("pCreateInfos[%i].layout", ParameterName::IndexVector{ createInfoIndex }), pCreateInfos[createInfoIndex].layout);
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateComputePipelines", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateComputePipelines", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateComputePipelines", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_array(layer_data->report_data, "vkCreateComputePipelines", "createInfoCount", "pPipelines", createInfoCount, pPipelines, true, true, VALIDATION_ERROR_1f20381b, VALIDATION_ERROR_1f21e201);

    return skipCall;
}

static bool parameter_validation_vkDestroyPipeline(
    layer_data*                                 layer_data,
    VkPipeline                                  pipeline,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(pipeline);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyPipeline", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyPipeline", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyPipeline", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkCreatePipelineLayout(
    layer_data*                                 layer_data,
    const VkPipelineLayoutCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineLayout*                           pPipelineLayout)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreatePipelineLayout", "pCreateInfo", "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO, true, VALIDATION_ERROR_0fe2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreatePipelineLayout", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0fe1c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreatePipelineLayout", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_0fe09005);

        skipCall |= validate_array(layer_data->report_data, "vkCreatePipelineLayout", "pCreateInfo->setLayoutCount", "pCreateInfo->pSetLayouts", pCreateInfo->setLayoutCount, pCreateInfo->pSetLayouts, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_0fe22c01);

        skipCall |= validate_array(layer_data->report_data, "vkCreatePipelineLayout", "pCreateInfo->pushConstantRangeCount", "pCreateInfo->pPushConstantRanges", pCreateInfo->pushConstantRangeCount, pCreateInfo->pPushConstantRanges, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_0fe1f801);

        if (pCreateInfo->pPushConstantRanges != NULL)
        {
            for (uint32_t pushConstantRangeIndex = 0; pushConstantRangeIndex < pCreateInfo->pushConstantRangeCount; ++pushConstantRangeIndex)
            {
                skipCall |= validate_flags(layer_data->report_data, "vkCreatePipelineLayout", ParameterName("pCreateInfo->pPushConstantRanges[%i].stageFlags", ParameterName::IndexVector{ pushConstantRangeIndex }), "VkShaderStageFlagBits", AllVkShaderStageFlagBits, pCreateInfo->pPushConstantRanges[pushConstantRangeIndex].stageFlags, true, false, VALIDATION_ERROR_11a2dc03);
            }
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreatePipelineLayout", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreatePipelineLayout", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreatePipelineLayout", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreatePipelineLayout", "pPipelineLayout", pPipelineLayout, VALIDATION_ERROR_21c1e001);

    return skipCall;
}

static bool parameter_validation_vkDestroyPipelineLayout(
    layer_data*                                 layer_data,
    VkPipelineLayout                            pipelineLayout,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(pipelineLayout);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyPipelineLayout", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyPipelineLayout", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyPipelineLayout", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkCreateSampler(
    layer_data*                                 layer_data,
    const VkSamplerCreateInfo*                  pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSampler*                                  pSampler)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateSampler", "pCreateInfo", "VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO, true, VALIDATION_ERROR_1262b00b);

    if (pCreateInfo != NULL)
    {
        const VkStructureType allowed_structs_VkSamplerCreateInfo[] = { VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT };

        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateSampler", "pCreateInfo->pNext", "VkSamplerReductionModeCreateInfoEXT", pCreateInfo->pNext, ARRAY_SIZE(allowed_structs_VkSamplerCreateInfo), allowed_structs_VkSamplerCreateInfo, GeneratedHeaderVersion, VALIDATION_ERROR_1261c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateSampler", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_12609005);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSampler", "pCreateInfo->magFilter", "VkFilter", VK_FILTER_BEGIN_RANGE, VK_FILTER_END_RANGE, pCreateInfo->magFilter, VALIDATION_ERROR_1260c401);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSampler", "pCreateInfo->minFilter", "VkFilter", VK_FILTER_BEGIN_RANGE, VK_FILTER_END_RANGE, pCreateInfo->minFilter, VALIDATION_ERROR_1260ca01);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSampler", "pCreateInfo->mipmapMode", "VkSamplerMipmapMode", VK_SAMPLER_MIPMAP_MODE_BEGIN_RANGE, VK_SAMPLER_MIPMAP_MODE_END_RANGE, pCreateInfo->mipmapMode, VALIDATION_ERROR_1260cc01);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSampler", "pCreateInfo->addressModeU", "VkSamplerAddressMode", VK_SAMPLER_ADDRESS_MODE_BEGIN_RANGE, VK_SAMPLER_ADDRESS_MODE_END_RANGE, pCreateInfo->addressModeU, VALIDATION_ERROR_12600201);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSampler", "pCreateInfo->addressModeV", "VkSamplerAddressMode", VK_SAMPLER_ADDRESS_MODE_BEGIN_RANGE, VK_SAMPLER_ADDRESS_MODE_END_RANGE, pCreateInfo->addressModeV, VALIDATION_ERROR_12600401);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSampler", "pCreateInfo->addressModeW", "VkSamplerAddressMode", VK_SAMPLER_ADDRESS_MODE_BEGIN_RANGE, VK_SAMPLER_ADDRESS_MODE_END_RANGE, pCreateInfo->addressModeW, VALIDATION_ERROR_12600601);

        skipCall |= validate_bool32(layer_data->report_data, "vkCreateSampler", "pCreateInfo->anisotropyEnable", pCreateInfo->anisotropyEnable);

        skipCall |= validate_bool32(layer_data->report_data, "vkCreateSampler", "pCreateInfo->compareEnable", pCreateInfo->compareEnable);

        skipCall |= validate_bool32(layer_data->report_data, "vkCreateSampler", "pCreateInfo->unnormalizedCoordinates", pCreateInfo->unnormalizedCoordinates);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSampler", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSampler", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSampler", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSampler", "pSampler", pSampler, VALIDATION_ERROR_22222401);

    return skipCall;
}

static bool parameter_validation_vkDestroySampler(
    layer_data*                                 layer_data,
    VkSampler                                   sampler,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(sampler);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroySampler", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroySampler", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroySampler", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkCreateDescriptorSetLayout(
    layer_data*                                 layer_data,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorSetLayout*                      pSetLayout)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateDescriptorSetLayout", "pCreateInfo", "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO, true, VALIDATION_ERROR_0502b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateDescriptorSetLayout", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0501c40d);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateDescriptorSetLayout", "pCreateInfo->flags", "VkDescriptorSetLayoutCreateFlagBits", AllVkDescriptorSetLayoutCreateFlagBits, pCreateInfo->flags, false, false, VALIDATION_ERROR_05009001);

        skipCall |= validate_array(layer_data->report_data, "vkCreateDescriptorSetLayout", "pCreateInfo->bindingCount", "pCreateInfo->pBindings", pCreateInfo->bindingCount, pCreateInfo->pBindings, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_0500fc01);

        if (pCreateInfo->pBindings != NULL)
        {
            for (uint32_t bindingIndex = 0; bindingIndex < pCreateInfo->bindingCount; ++bindingIndex)
            {
                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateDescriptorSetLayout", ParameterName("pCreateInfo->pBindings[%i].descriptorType", ParameterName::IndexVector{ bindingIndex }), "VkDescriptorType", VK_DESCRIPTOR_TYPE_BEGIN_RANGE, VK_DESCRIPTOR_TYPE_END_RANGE, pCreateInfo->pBindings[bindingIndex].descriptorType, VALIDATION_ERROR_04e04e01);
            }
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDescriptorSetLayout", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDescriptorSetLayout", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDescriptorSetLayout", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDescriptorSetLayout", "pSetLayout", pSetLayout, VALIDATION_ERROR_1f822a01);

    return skipCall;
}

static bool parameter_validation_vkDestroyDescriptorSetLayout(
    layer_data*                                 layer_data,
    VkDescriptorSetLayout                       descriptorSetLayout,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(descriptorSetLayout);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDescriptorSetLayout", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDescriptorSetLayout", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDescriptorSetLayout", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkCreateDescriptorPool(
    layer_data*                                 layer_data,
    const VkDescriptorPoolCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorPool*                           pDescriptorPool)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateDescriptorPool", "pCreateInfo", "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO, true, VALIDATION_ERROR_0482b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateDescriptorPool", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0481c40d);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateDescriptorPool", "pCreateInfo->flags", "VkDescriptorPoolCreateFlagBits", AllVkDescriptorPoolCreateFlagBits, pCreateInfo->flags, false, false, VALIDATION_ERROR_04809001);

        skipCall |= validate_array(layer_data->report_data, "vkCreateDescriptorPool", "pCreateInfo->poolSizeCount", "pCreateInfo->pPoolSizes", pCreateInfo->poolSizeCount, pCreateInfo->pPoolSizes, true, true, VALIDATION_ERROR_0482881b, VALIDATION_ERROR_0481e401);

        if (pCreateInfo->pPoolSizes != NULL)
        {
            for (uint32_t poolSizeIndex = 0; poolSizeIndex < pCreateInfo->poolSizeCount; ++poolSizeIndex)
            {
                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateDescriptorPool", ParameterName("pCreateInfo->pPoolSizes[%i].type", ParameterName::IndexVector{ poolSizeIndex }), "VkDescriptorType", VK_DESCRIPTOR_TYPE_BEGIN_RANGE, VK_DESCRIPTOR_TYPE_END_RANGE, pCreateInfo->pPoolSizes[poolSizeIndex].type, VALIDATION_ERROR_04a30401);
            }
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDescriptorPool", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDescriptorPool", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDescriptorPool", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDescriptorPool", "pDescriptorPool", pDescriptorPool, VALIDATION_ERROR_1f612e01);

    return skipCall;
}

static bool parameter_validation_vkDestroyDescriptorPool(
    layer_data*                                 layer_data,
    VkDescriptorPool                            descriptorPool,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(descriptorPool);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDescriptorPool", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDescriptorPool", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDescriptorPool", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkResetDescriptorPool(
    layer_data*                                 layer_data,
    VkDescriptorPool                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkResetDescriptorPool", "descriptorPool", descriptorPool);

    skipCall |= validate_reserved_flags(layer_data->report_data, "vkResetDescriptorPool", "flags", flags, VALIDATION_ERROR_32a09005);

    return skipCall;
}

static bool parameter_validation_vkAllocateDescriptorSets(
    layer_data*                                 layer_data,
    const VkDescriptorSetAllocateInfo*          pAllocateInfo,
    VkDescriptorSet*                            pDescriptorSets)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkAllocateDescriptorSets", "pAllocateInfo", "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO", pAllocateInfo, VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO, true, VALIDATION_ERROR_04c2b00b);

    if (pAllocateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkAllocateDescriptorSets", "pAllocateInfo->pNext", NULL, pAllocateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_04c1c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkAllocateDescriptorSets", "pAllocateInfo->descriptorPool", pAllocateInfo->descriptorPool);

        skipCall |= validate_handle_array(layer_data->report_data, "vkAllocateDescriptorSets", "pAllocateInfo->descriptorSetCount", "pAllocateInfo->pSetLayouts", pAllocateInfo->descriptorSetCount, pAllocateInfo->pSetLayouts, true, true);
    }

    if (pAllocateInfo != NULL) {
        skipCall |= validate_array(layer_data->report_data, "vkAllocateDescriptorSets", "pAllocateInfo->descriptorSetCount", "pDescriptorSets", pAllocateInfo->descriptorSetCount, pDescriptorSets, true, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_16a13001);
    }

    return skipCall;
}

static bool parameter_validation_vkFreeDescriptorSets(
    layer_data*                                 layer_data,
    VkDescriptorPool                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets)
{
    UNUSED_PARAMETER(pDescriptorSets);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkFreeDescriptorSets", "descriptorPool", descriptorPool);

    return skipCall;
}

static bool parameter_validation_vkUpdateDescriptorSets(
    layer_data*                                 layer_data,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const VkCopyDescriptorSet*                  pDescriptorCopies)
{
    bool skipCall = false;

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkUpdateDescriptorSets", "descriptorWriteCount", "pDescriptorWrites", "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET", descriptorWriteCount, pDescriptorWrites, VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, false, true, VALIDATION_ERROR_33c13601);

    if (pDescriptorWrites != NULL)
    {
        for (uint32_t descriptorWriteIndex = 0; descriptorWriteIndex < descriptorWriteCount; ++descriptorWriteIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkUpdateDescriptorSets", ParameterName("pDescriptorWrites[%i].pNext", ParameterName::IndexVector{ descriptorWriteIndex }), NULL, pDescriptorWrites[descriptorWriteIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_15c1c40d);

            skipCall |= validate_ranged_enum(layer_data->report_data, "vkUpdateDescriptorSets", ParameterName("pDescriptorWrites[%i].descriptorType", ParameterName::IndexVector{ descriptorWriteIndex }), "VkDescriptorType", VK_DESCRIPTOR_TYPE_BEGIN_RANGE, VK_DESCRIPTOR_TYPE_END_RANGE, pDescriptorWrites[descriptorWriteIndex].descriptorType, VALIDATION_ERROR_15c04e01);
        }
    }

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkUpdateDescriptorSets", "descriptorCopyCount", "pDescriptorCopies", "VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET", descriptorCopyCount, pDescriptorCopies, VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET, false, true, VALIDATION_ERROR_33c12c01);

    if (pDescriptorCopies != NULL)
    {
        for (uint32_t descriptorCopyIndex = 0; descriptorCopyIndex < descriptorCopyCount; ++descriptorCopyIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkUpdateDescriptorSets", ParameterName("pDescriptorCopies[%i].pNext", ParameterName::IndexVector{ descriptorCopyIndex }), NULL, pDescriptorCopies[descriptorCopyIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0321c40d);

            skipCall |= validate_required_handle(layer_data->report_data, "vkUpdateDescriptorSets", ParameterName("pDescriptorCopies[%i].srcSet", ParameterName::IndexVector{ descriptorCopyIndex }), pDescriptorCopies[descriptorCopyIndex].srcSet);

            skipCall |= validate_required_handle(layer_data->report_data, "vkUpdateDescriptorSets", ParameterName("pDescriptorCopies[%i].dstSet", ParameterName::IndexVector{ descriptorCopyIndex }), pDescriptorCopies[descriptorCopyIndex].dstSet);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCreateFramebuffer(
    layer_data*                                 layer_data,
    const VkFramebufferCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFramebuffer*                              pFramebuffer)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateFramebuffer", "pCreateInfo", "VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO, true, VALIDATION_ERROR_0942b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateFramebuffer", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0941c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateFramebuffer", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_09409005);

        skipCall |= validate_required_handle(layer_data->report_data, "vkCreateFramebuffer", "pCreateInfo->renderPass", pCreateInfo->renderPass);

        skipCall |= validate_array(layer_data->report_data, "vkCreateFramebuffer", "pCreateInfo->attachmentCount", "pCreateInfo->pAttachments", pCreateInfo->attachmentCount, pCreateInfo->pAttachments, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_0940f201);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateFramebuffer", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateFramebuffer", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateFramebuffer", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateFramebuffer", "pFramebuffer", pFramebuffer, VALIDATION_ERROR_20617801);

    return skipCall;
}

static bool parameter_validation_vkDestroyFramebuffer(
    layer_data*                                 layer_data,
    VkFramebuffer                               framebuffer,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(framebuffer);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyFramebuffer", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyFramebuffer", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyFramebuffer", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkCreateRenderPass(
    layer_data*                                 layer_data,
    const VkRenderPassCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkRenderPass*                               pRenderPass)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateRenderPass", "pCreateInfo", "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO, true, VALIDATION_ERROR_1222b00b);

    if (pCreateInfo != NULL)
    {
        const VkStructureType allowed_structs_VkRenderPassCreateInfo[] = { VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHX };

        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateRenderPass", "pCreateInfo->pNext", "VkRenderPassMultiviewCreateInfoKHX", pCreateInfo->pNext, ARRAY_SIZE(allowed_structs_VkRenderPassCreateInfo), allowed_structs_VkRenderPassCreateInfo, GeneratedHeaderVersion, VALIDATION_ERROR_1221c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateRenderPass", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_12209005);

        skipCall |= validate_array(layer_data->report_data, "vkCreateRenderPass", "pCreateInfo->attachmentCount", "pCreateInfo->pAttachments", pCreateInfo->attachmentCount, pCreateInfo->pAttachments, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_1220f201);

        if (pCreateInfo->pAttachments != NULL)
        {
            for (uint32_t attachmentIndex = 0; attachmentIndex < pCreateInfo->attachmentCount; ++attachmentIndex)
            {
                skipCall |= validate_flags(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].flags", ParameterName::IndexVector{ attachmentIndex }), "VkAttachmentDescriptionFlagBits", AllVkAttachmentDescriptionFlagBits, pCreateInfo->pAttachments[attachmentIndex].flags, false, false, VALIDATION_ERROR_00809001);

                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].format", ParameterName::IndexVector{ attachmentIndex }), "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].format, VALIDATION_ERROR_00809201);

                skipCall |= validate_flags(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].samples", ParameterName::IndexVector{ attachmentIndex }), "VkSampleCountFlagBits", AllVkSampleCountFlagBits, pCreateInfo->pAttachments[attachmentIndex].samples, true, true, VALIDATION_ERROR_0082b401);

                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].loadOp", ParameterName::IndexVector{ attachmentIndex }), "VkAttachmentLoadOp", VK_ATTACHMENT_LOAD_OP_BEGIN_RANGE, VK_ATTACHMENT_LOAD_OP_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].loadOp, VALIDATION_ERROR_0080c201);

                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].storeOp", ParameterName::IndexVector{ attachmentIndex }), "VkAttachmentStoreOp", VK_ATTACHMENT_STORE_OP_BEGIN_RANGE, VK_ATTACHMENT_STORE_OP_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].storeOp, VALIDATION_ERROR_0082e401);

                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].stencilLoadOp", ParameterName::IndexVector{ attachmentIndex }), "VkAttachmentLoadOp", VK_ATTACHMENT_LOAD_OP_BEGIN_RANGE, VK_ATTACHMENT_LOAD_OP_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].stencilLoadOp, VALIDATION_ERROR_0082e001);

                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].stencilStoreOp", ParameterName::IndexVector{ attachmentIndex }), "VkAttachmentStoreOp", VK_ATTACHMENT_STORE_OP_BEGIN_RANGE, VK_ATTACHMENT_STORE_OP_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].stencilStoreOp, VALIDATION_ERROR_0082e201);

                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].initialLayout", ParameterName::IndexVector{ attachmentIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].initialLayout, VALIDATION_ERROR_0080b801);

                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pAttachments[%i].finalLayout", ParameterName::IndexVector{ attachmentIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->pAttachments[attachmentIndex].finalLayout, VALIDATION_ERROR_00808e01);
            }
        }

        skipCall |= validate_array(layer_data->report_data, "vkCreateRenderPass", "pCreateInfo->subpassCount", "pCreateInfo->pSubpasses", pCreateInfo->subpassCount, pCreateInfo->pSubpasses, true, true, VALIDATION_ERROR_1222e61b, VALIDATION_ERROR_12224201);

        if (pCreateInfo->pSubpasses != NULL)
        {
            for (uint32_t subpassIndex = 0; subpassIndex < pCreateInfo->subpassCount; ++subpassIndex)
            {
                skipCall |= validate_flags(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].flags", ParameterName::IndexVector{ subpassIndex }), "VkSubpassDescriptionFlagBits", AllVkSubpassDescriptionFlagBits, pCreateInfo->pSubpasses[subpassIndex].flags, false, false, VALIDATION_ERROR_14009001);

                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].pipelineBindPoint", ParameterName::IndexVector{ subpassIndex }), "VkPipelineBindPoint", VK_PIPELINE_BIND_POINT_BEGIN_RANGE, VK_PIPELINE_BIND_POINT_END_RANGE, pCreateInfo->pSubpasses[subpassIndex].pipelineBindPoint, VALIDATION_ERROR_14027e01);

                skipCall |= validate_array(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].inputAttachmentCount", ParameterName::IndexVector{ subpassIndex }), ParameterName("pCreateInfo->pSubpasses[%i].pInputAttachments", ParameterName::IndexVector{ subpassIndex }), pCreateInfo->pSubpasses[subpassIndex].inputAttachmentCount, pCreateInfo->pSubpasses[subpassIndex].pInputAttachments, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_14019a01);

                if (pCreateInfo->pSubpasses[subpassIndex].pInputAttachments != NULL)
                {
                    for (uint32_t inputAttachmentIndex = 0; inputAttachmentIndex < pCreateInfo->pSubpasses[subpassIndex].inputAttachmentCount; ++inputAttachmentIndex)
                    {
                        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].pInputAttachments[%i].layout", ParameterName::IndexVector{ subpassIndex, inputAttachmentIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->pSubpasses[subpassIndex].pInputAttachments[inputAttachmentIndex].layout, VALIDATION_ERROR_00a0be01);
                    }
                }

                skipCall |= validate_array(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].colorAttachmentCount", ParameterName::IndexVector{ subpassIndex }), ParameterName("pCreateInfo->pSubpasses[%i].pColorAttachments", ParameterName::IndexVector{ subpassIndex }), pCreateInfo->pSubpasses[subpassIndex].colorAttachmentCount, pCreateInfo->pSubpasses[subpassIndex].pColorAttachments, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_14011001);

                if (pCreateInfo->pSubpasses[subpassIndex].pColorAttachments != NULL)
                {
                    for (uint32_t colorAttachmentIndex = 0; colorAttachmentIndex < pCreateInfo->pSubpasses[subpassIndex].colorAttachmentCount; ++colorAttachmentIndex)
                    {
                        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].pColorAttachments[%i].layout", ParameterName::IndexVector{ subpassIndex, colorAttachmentIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->pSubpasses[subpassIndex].pColorAttachments[colorAttachmentIndex].layout, VALIDATION_ERROR_00a0be01);
                    }
                }

                if (pCreateInfo->pSubpasses[subpassIndex].pResolveAttachments != NULL)
                {
                    for (uint32_t colorAttachmentIndex = 0; colorAttachmentIndex < pCreateInfo->pSubpasses[subpassIndex].colorAttachmentCount; ++colorAttachmentIndex)
                    {
                        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].pResolveAttachments[%i].layout", ParameterName::IndexVector{ subpassIndex, colorAttachmentIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->pSubpasses[subpassIndex].pResolveAttachments[colorAttachmentIndex].layout, VALIDATION_ERROR_00a0be01);
                    }
                }

                if (pCreateInfo->pSubpasses[subpassIndex].pDepthStencilAttachment != NULL)
                {
                    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].pDepthStencilAttachment->layout", ParameterName::IndexVector{ subpassIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pCreateInfo->pSubpasses[subpassIndex].pDepthStencilAttachment->layout, VALIDATION_ERROR_00a0be01);
                }

                skipCall |= validate_array(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pSubpasses[%i].preserveAttachmentCount", ParameterName::IndexVector{ subpassIndex }), ParameterName("pCreateInfo->pSubpasses[%i].pPreserveAttachments", ParameterName::IndexVector{ subpassIndex }), pCreateInfo->pSubpasses[subpassIndex].preserveAttachmentCount, pCreateInfo->pSubpasses[subpassIndex].pPreserveAttachments, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_1401f001);
            }
        }

        skipCall |= validate_array(layer_data->report_data, "vkCreateRenderPass", "pCreateInfo->dependencyCount", "pCreateInfo->pDependencies", pCreateInfo->dependencyCount, pCreateInfo->pDependencies, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_12212601);

        if (pCreateInfo->pDependencies != NULL)
        {
            for (uint32_t dependencyIndex = 0; dependencyIndex < pCreateInfo->dependencyCount; ++dependencyIndex)
            {
                skipCall |= validate_flags(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pDependencies[%i].srcStageMask", ParameterName::IndexVector{ dependencyIndex }), "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, pCreateInfo->pDependencies[dependencyIndex].srcStageMask, true, false, VALIDATION_ERROR_13e2d403);

                skipCall |= validate_flags(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pDependencies[%i].dstStageMask", ParameterName::IndexVector{ dependencyIndex }), "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, pCreateInfo->pDependencies[dependencyIndex].dstStageMask, true, false, VALIDATION_ERROR_13e07803);

                skipCall |= validate_flags(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pDependencies[%i].srcAccessMask", ParameterName::IndexVector{ dependencyIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pCreateInfo->pDependencies[dependencyIndex].srcAccessMask, false, false, VALIDATION_ERROR_13e2c401);

                skipCall |= validate_flags(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pDependencies[%i].dstAccessMask", ParameterName::IndexVector{ dependencyIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pCreateInfo->pDependencies[dependencyIndex].dstAccessMask, false, false, VALIDATION_ERROR_13e06801);

                skipCall |= validate_flags(layer_data->report_data, "vkCreateRenderPass", ParameterName("pCreateInfo->pDependencies[%i].dependencyFlags", ParameterName::IndexVector{ dependencyIndex }), "VkDependencyFlagBits", AllVkDependencyFlagBits, pCreateInfo->pDependencies[dependencyIndex].dependencyFlags, false, false, VALIDATION_ERROR_13e03e01);
            }
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateRenderPass", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateRenderPass", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateRenderPass", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateRenderPass", "pRenderPass", pRenderPass, VALIDATION_ERROR_22021601);

    return skipCall;
}

static bool parameter_validation_vkDestroyRenderPass(
    layer_data*                                 layer_data,
    VkRenderPass                                renderPass,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(renderPass);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyRenderPass", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyRenderPass", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyRenderPass", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkGetRenderAreaGranularity(
    layer_data*                                 layer_data,
    VkRenderPass                                renderPass,
    VkExtent2D*                                 pGranularity)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetRenderAreaGranularity", "renderPass", renderPass);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetRenderAreaGranularity", "pGranularity", pGranularity, VALIDATION_ERROR_30017a01);

    return skipCall;
}

static bool parameter_validation_vkCreateCommandPool(
    layer_data*                                 layer_data,
    const VkCommandPoolCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkCommandPool*                              pCommandPool)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateCommandPool", "pCreateInfo", "VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO", pCreateInfo, VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO, true, VALIDATION_ERROR_02c2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateCommandPool", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_02c1c40d);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateCommandPool", "pCreateInfo->flags", "VkCommandPoolCreateFlagBits", AllVkCommandPoolCreateFlagBits, pCreateInfo->flags, false, false, VALIDATION_ERROR_02c09001);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateCommandPool", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateCommandPool", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateCommandPool", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateCommandPool", "pCommandPool", pCommandPool, VALIDATION_ERROR_1f011601);

    return skipCall;
}

static bool parameter_validation_vkDestroyCommandPool(
    layer_data*                                 layer_data,
    VkCommandPool                               commandPool,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(commandPool);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyCommandPool", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyCommandPool", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyCommandPool", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkResetCommandPool(
    layer_data*                                 layer_data,
    VkCommandPool                               commandPool,
    VkCommandPoolResetFlags                     flags)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkResetCommandPool", "commandPool", commandPool);

    skipCall |= validate_flags(layer_data->report_data, "vkResetCommandPool", "flags", "VkCommandPoolResetFlagBits", AllVkCommandPoolResetFlagBits, flags, false, false, VALIDATION_ERROR_32809001);

    return skipCall;
}

static bool parameter_validation_vkAllocateCommandBuffers(
    layer_data*                                 layer_data,
    const VkCommandBufferAllocateInfo*          pAllocateInfo,
    VkCommandBuffer*                            pCommandBuffers)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkAllocateCommandBuffers", "pAllocateInfo", "VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO", pAllocateInfo, VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO, true, VALIDATION_ERROR_0262b00b);

    if (pAllocateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkAllocateCommandBuffers", "pAllocateInfo->pNext", NULL, pAllocateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0261c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkAllocateCommandBuffers", "pAllocateInfo->commandPool", pAllocateInfo->commandPool);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkAllocateCommandBuffers", "pAllocateInfo->level", "VkCommandBufferLevel", VK_COMMAND_BUFFER_LEVEL_BEGIN_RANGE, VK_COMMAND_BUFFER_LEVEL_END_RANGE, pAllocateInfo->level, VALIDATION_ERROR_0260c001);
    }

    if (pAllocateInfo != NULL) {
        skipCall |= validate_array(layer_data->report_data, "vkAllocateCommandBuffers", "pAllocateInfo->commandBufferCount", "pCommandBuffers", pAllocateInfo->commandBufferCount, pCommandBuffers, true, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_16811401);
    }

    return skipCall;
}

static bool parameter_validation_vkFreeCommandBuffers(
    layer_data*                                 layer_data,
    VkCommandPool                               commandPool,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers)
{
    UNUSED_PARAMETER(pCommandBuffers);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkFreeCommandBuffers", "commandPool", commandPool);

    return skipCall;
}

static bool parameter_validation_vkBeginCommandBuffer(
    layer_data*                                 layer_data,
    const VkCommandBufferBeginInfo*             pBeginInfo)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkBeginCommandBuffer", "pBeginInfo", "VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO", pBeginInfo, VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, true, VALIDATION_ERROR_0282b00b);

    if (pBeginInfo != NULL)
    {
        const VkStructureType allowed_structs_VkCommandBufferBeginInfo[] = { VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHX };

        skipCall |= validate_struct_pnext(layer_data->report_data, "vkBeginCommandBuffer", "pBeginInfo->pNext", "VkDeviceGroupCommandBufferBeginInfoKHX", pBeginInfo->pNext, ARRAY_SIZE(allowed_structs_VkCommandBufferBeginInfo), allowed_structs_VkCommandBufferBeginInfo, GeneratedHeaderVersion, VALIDATION_ERROR_0281c40d);

        skipCall |= validate_flags(layer_data->report_data, "vkBeginCommandBuffer", "pBeginInfo->flags", "VkCommandBufferUsageFlagBits", AllVkCommandBufferUsageFlagBits, pBeginInfo->flags, false, false, VALIDATION_ERROR_02809001);
    }

    return skipCall;
}

static bool parameter_validation_vkResetCommandBuffer(
    layer_data*                                 layer_data,
    VkCommandBufferResetFlags                   flags)
{
    bool skipCall = false;

    skipCall |= validate_flags(layer_data->report_data, "vkResetCommandBuffer", "flags", "VkCommandBufferResetFlagBits", AllVkCommandBufferResetFlagBits, flags, false, false, VALIDATION_ERROR_32609001);

    return skipCall;
}

static bool parameter_validation_vkCmdBindPipeline(
    layer_data*                                 layer_data,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipeline                                  pipeline)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdBindPipeline", "pipelineBindPoint", "VkPipelineBindPoint", VK_PIPELINE_BIND_POINT_BEGIN_RANGE, VK_PIPELINE_BIND_POINT_END_RANGE, pipelineBindPoint, VALIDATION_ERROR_18027e01);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdBindPipeline", "pipeline", pipeline);

    return skipCall;
}

static bool parameter_validation_vkCmdSetScissor(
    layer_data*                                 layer_data,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    const VkRect2D*                             pScissors)
{
    UNUSED_PARAMETER(firstScissor);

    bool skipCall = false;

    skipCall |= validate_array(layer_data->report_data, "vkCmdSetScissor", "scissorCount", "pScissors", scissorCount, pScissors, true, true, VALIDATION_ERROR_1d82b61b, VALIDATION_ERROR_1d822601);

    return skipCall;
}

static bool parameter_validation_vkCmdSetBlendConstants(
    layer_data*                                 layer_data,
    const float                                 blendConstants[4])
{
    bool skipCall = false;

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCmdSetBlendConstants", "blendConstants", blendConstants, VALIDATION_ERROR_UNDEFINED);

    return skipCall;
}

static bool parameter_validation_vkCmdSetStencilCompareMask(
    layer_data*                                 layer_data,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask)
{
    UNUSED_PARAMETER(compareMask);

    bool skipCall = false;

    skipCall |= validate_flags(layer_data->report_data, "vkCmdSetStencilCompareMask", "faceMask", "VkStencilFaceFlagBits", AllVkStencilFaceFlagBits, faceMask, true, false, VALIDATION_ERROR_1da08403);

    return skipCall;
}

static bool parameter_validation_vkCmdSetStencilWriteMask(
    layer_data*                                 layer_data,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask)
{
    UNUSED_PARAMETER(writeMask);

    bool skipCall = false;

    skipCall |= validate_flags(layer_data->report_data, "vkCmdSetStencilWriteMask", "faceMask", "VkStencilFaceFlagBits", AllVkStencilFaceFlagBits, faceMask, true, false, VALIDATION_ERROR_1de08403);

    return skipCall;
}

static bool parameter_validation_vkCmdSetStencilReference(
    layer_data*                                 layer_data,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference)
{
    UNUSED_PARAMETER(reference);

    bool skipCall = false;

    skipCall |= validate_flags(layer_data->report_data, "vkCmdSetStencilReference", "faceMask", "VkStencilFaceFlagBits", AllVkStencilFaceFlagBits, faceMask, true, false, VALIDATION_ERROR_1dc08403);

    return skipCall;
}

static bool parameter_validation_vkCmdBindDescriptorSets(
    layer_data*                                 layer_data,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    firstSet,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets,
    uint32_t                                    dynamicOffsetCount,
    const uint32_t*                             pDynamicOffsets)
{
    UNUSED_PARAMETER(firstSet);

    bool skipCall = false;

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdBindDescriptorSets", "pipelineBindPoint", "VkPipelineBindPoint", VK_PIPELINE_BIND_POINT_BEGIN_RANGE, VK_PIPELINE_BIND_POINT_END_RANGE, pipelineBindPoint, VALIDATION_ERROR_17c27e01);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdBindDescriptorSets", "layout", layout);

    skipCall |= validate_handle_array(layer_data->report_data, "vkCmdBindDescriptorSets", "descriptorSetCount", "pDescriptorSets", descriptorSetCount, pDescriptorSets, true, true);

    skipCall |= validate_array(layer_data->report_data, "vkCmdBindDescriptorSets", "dynamicOffsetCount", "pDynamicOffsets", dynamicOffsetCount, pDynamicOffsets, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_17c15401);

    return skipCall;
}

static bool parameter_validation_vkCmdBindIndexBuffer(
    layer_data*                                 layer_data,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType)
{
    UNUSED_PARAMETER(offset);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdBindIndexBuffer", "buffer", buffer);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdBindIndexBuffer", "indexType", "VkIndexType", VK_INDEX_TYPE_BEGIN_RANGE, VK_INDEX_TYPE_END_RANGE, indexType, VALIDATION_ERROR_17e0b201);

    return skipCall;
}

static bool parameter_validation_vkCmdBindVertexBuffers(
    layer_data*                                 layer_data,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const VkBuffer*                             pBuffers,
    const VkDeviceSize*                         pOffsets)
{
    UNUSED_PARAMETER(firstBinding);

    bool skipCall = false;

    skipCall |= validate_handle_array(layer_data->report_data, "vkCmdBindVertexBuffers", "bindingCount", "pBuffers", bindingCount, pBuffers, true, true);

    skipCall |= validate_array(layer_data->report_data, "vkCmdBindVertexBuffers", "bindingCount", "pOffsets", bindingCount, pOffsets, true, true, VALIDATION_ERROR_1820181b, VALIDATION_ERROR_1821d201);

    return skipCall;
}

static bool parameter_validation_vkCmdDrawIndirect(
    layer_data*                                 layer_data,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    UNUSED_PARAMETER(offset);
    UNUSED_PARAMETER(drawCount);
    UNUSED_PARAMETER(stride);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdDrawIndirect", "buffer", buffer);

    return skipCall;
}

static bool parameter_validation_vkCmdDrawIndexedIndirect(
    layer_data*                                 layer_data,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    UNUSED_PARAMETER(offset);
    UNUSED_PARAMETER(drawCount);
    UNUSED_PARAMETER(stride);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdDrawIndexedIndirect", "buffer", buffer);

    return skipCall;
}

static bool parameter_validation_vkCmdDispatchIndirect(
    layer_data*                                 layer_data,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset)
{
    UNUSED_PARAMETER(offset);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdDispatchIndirect", "buffer", buffer);

    return skipCall;
}

static bool parameter_validation_vkCmdCopyBuffer(
    layer_data*                                 layer_data,
    VkBuffer                                    srcBuffer,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferCopy*                         pRegions)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdCopyBuffer", "srcBuffer", srcBuffer);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdCopyBuffer", "dstBuffer", dstBuffer);

    skipCall |= validate_array(layer_data->report_data, "vkCmdCopyBuffer", "regionCount", "pRegions", regionCount, pRegions, true, true, VALIDATION_ERROR_18c2ac1b, VALIDATION_ERROR_18c21001);

    return skipCall;
}

static bool parameter_validation_vkCmdCopyImage(
    layer_data*                                 layer_data,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageCopy*                          pRegions)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdCopyImage", "srcImage", srcImage);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdCopyImage", "srcImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, srcImageLayout, VALIDATION_ERROR_1902d001);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdCopyImage", "dstImage", dstImage);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdCopyImage", "dstImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, dstImageLayout, VALIDATION_ERROR_19007401);

    skipCall |= validate_array(layer_data->report_data, "vkCmdCopyImage", "regionCount", "pRegions", regionCount, pRegions, true, true, VALIDATION_ERROR_1902ac1b, VALIDATION_ERROR_19021001);

    if (pRegions != NULL)
    {
        for (uint32_t regionIndex = 0; regionIndex < regionCount; ++regionIndex)
        {
            skipCall |= validate_flags(layer_data->report_data, "vkCmdCopyImage", ParameterName("pRegions[%i].srcSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].srcSubresource.aspectMask, true, false, VALIDATION_ERROR_0a600c03);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdCopyImage", ParameterName("pRegions[%i].dstSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].dstSubresource.aspectMask, true, false, VALIDATION_ERROR_0a600c03);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdBlitImage(
    layer_data*                                 layer_data,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageBlit*                          pRegions,
    VkFilter                                    filter)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdBlitImage", "srcImage", srcImage);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdBlitImage", "srcImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, srcImageLayout, VALIDATION_ERROR_1842d001);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdBlitImage", "dstImage", dstImage);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdBlitImage", "dstImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, dstImageLayout, VALIDATION_ERROR_18407401);

    skipCall |= validate_array(layer_data->report_data, "vkCmdBlitImage", "regionCount", "pRegions", regionCount, pRegions, true, true, VALIDATION_ERROR_1842ac1b, VALIDATION_ERROR_18421001);

    if (pRegions != NULL)
    {
        for (uint32_t regionIndex = 0; regionIndex < regionCount; ++regionIndex)
        {
            skipCall |= validate_flags(layer_data->report_data, "vkCmdBlitImage", ParameterName("pRegions[%i].srcSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].srcSubresource.aspectMask, true, false, VALIDATION_ERROR_0a600c03);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdBlitImage", ParameterName("pRegions[%i].dstSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].dstSubresource.aspectMask, true, false, VALIDATION_ERROR_0a600c03);
        }
    }

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdBlitImage", "filter", "VkFilter", VK_FILTER_BEGIN_RANGE, VK_FILTER_END_RANGE, filter, VALIDATION_ERROR_18408c01);

    return skipCall;
}

static bool parameter_validation_vkCmdCopyBufferToImage(
    layer_data*                                 layer_data,
    VkBuffer                                    srcBuffer,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdCopyBufferToImage", "srcBuffer", srcBuffer);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdCopyBufferToImage", "dstImage", dstImage);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdCopyBufferToImage", "dstImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, dstImageLayout, VALIDATION_ERROR_18e07401);

    skipCall |= validate_array(layer_data->report_data, "vkCmdCopyBufferToImage", "regionCount", "pRegions", regionCount, pRegions, true, true, VALIDATION_ERROR_18e2ac1b, VALIDATION_ERROR_18e21001);

    if (pRegions != NULL)
    {
        for (uint32_t regionIndex = 0; regionIndex < regionCount; ++regionIndex)
        {
            skipCall |= validate_flags(layer_data->report_data, "vkCmdCopyBufferToImage", ParameterName("pRegions[%i].imageSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].imageSubresource.aspectMask, true, false, VALIDATION_ERROR_0a600c03);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdCopyImageToBuffer(
    layer_data*                                 layer_data,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdCopyImageToBuffer", "srcImage", srcImage);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdCopyImageToBuffer", "srcImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, srcImageLayout, VALIDATION_ERROR_1922d001);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdCopyImageToBuffer", "dstBuffer", dstBuffer);

    skipCall |= validate_array(layer_data->report_data, "vkCmdCopyImageToBuffer", "regionCount", "pRegions", regionCount, pRegions, true, true, VALIDATION_ERROR_1922ac1b, VALIDATION_ERROR_19221001);

    if (pRegions != NULL)
    {
        for (uint32_t regionIndex = 0; regionIndex < regionCount; ++regionIndex)
        {
            skipCall |= validate_flags(layer_data->report_data, "vkCmdCopyImageToBuffer", ParameterName("pRegions[%i].imageSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].imageSubresource.aspectMask, true, false, VALIDATION_ERROR_0a600c03);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdUpdateBuffer(
    layer_data*                                 layer_data,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const void*                                 pData)
{
    UNUSED_PARAMETER(dstOffset);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdUpdateBuffer", "dstBuffer", dstBuffer);

    skipCall |= validate_array(layer_data->report_data, "vkCmdUpdateBuffer", "dataSize", "pData", dataSize, pData, true, true, VALIDATION_ERROR_1e403c1b, VALIDATION_ERROR_1e412201);

    return skipCall;
}

static bool parameter_validation_vkCmdFillBuffer(
    layer_data*                                 layer_data,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data)
{
    UNUSED_PARAMETER(dstOffset);
    UNUSED_PARAMETER(size);
    UNUSED_PARAMETER(data);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdFillBuffer", "dstBuffer", dstBuffer);

    return skipCall;
}

static bool parameter_validation_vkCmdClearColorImage(
    layer_data*                                 layer_data,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearColorValue*                    pColor,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdClearColorImage", "image", image);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdClearColorImage", "imageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, imageLayout, VALIDATION_ERROR_1880a601);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCmdClearColorImage", "pColor", pColor, VALIDATION_ERROR_18810e01);

    skipCall |= validate_array(layer_data->report_data, "vkCmdClearColorImage", "rangeCount", "pRanges", rangeCount, pRanges, true, true, VALIDATION_ERROR_1882a41b, VALIDATION_ERROR_18820601);

    if (pRanges != NULL)
    {
        for (uint32_t rangeIndex = 0; rangeIndex < rangeCount; ++rangeIndex)
        {
            skipCall |= validate_flags(layer_data->report_data, "vkCmdClearColorImage", ParameterName("pRanges[%i].aspectMask", ParameterName::IndexVector{ rangeIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRanges[rangeIndex].aspectMask, true, false, VALIDATION_ERROR_0a800c03);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdClearDepthStencilImage(
    layer_data*                                 layer_data,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearDepthStencilValue*             pDepthStencil,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdClearDepthStencilImage", "image", image);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdClearDepthStencilImage", "imageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, imageLayout, VALIDATION_ERROR_18a0a601);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCmdClearDepthStencilImage", "pDepthStencil", pDepthStencil, VALIDATION_ERROR_18a12801);

    skipCall |= validate_array(layer_data->report_data, "vkCmdClearDepthStencilImage", "rangeCount", "pRanges", rangeCount, pRanges, true, true, VALIDATION_ERROR_18a2a41b, VALIDATION_ERROR_18a20601);

    if (pRanges != NULL)
    {
        for (uint32_t rangeIndex = 0; rangeIndex < rangeCount; ++rangeIndex)
        {
            skipCall |= validate_flags(layer_data->report_data, "vkCmdClearDepthStencilImage", ParameterName("pRanges[%i].aspectMask", ParameterName::IndexVector{ rangeIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRanges[rangeIndex].aspectMask, true, false, VALIDATION_ERROR_0a800c03);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdClearAttachments(
    layer_data*                                 layer_data,
    uint32_t                                    attachmentCount,
    const VkClearAttachment*                    pAttachments,
    uint32_t                                    rectCount,
    const VkClearRect*                          pRects)
{
    bool skipCall = false;

    skipCall |= validate_array(layer_data->report_data, "vkCmdClearAttachments", "attachmentCount", "pAttachments", attachmentCount, pAttachments, true, true, VALIDATION_ERROR_18600e1b, VALIDATION_ERROR_1860f201);

    if (pAttachments != NULL)
    {
        for (uint32_t attachmentIndex = 0; attachmentIndex < attachmentCount; ++attachmentIndex)
        {
            skipCall |= validate_flags(layer_data->report_data, "vkCmdClearAttachments", ParameterName("pAttachments[%i].aspectMask", ParameterName::IndexVector{ attachmentIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pAttachments[attachmentIndex].aspectMask, true, false, VALIDATION_ERROR_01c00c03);
        }
    }

    skipCall |= validate_array(layer_data->report_data, "vkCmdClearAttachments", "rectCount", "pRects", rectCount, pRects, true, true, VALIDATION_ERROR_1862aa1b, VALIDATION_ERROR_18620e01);

    return skipCall;
}

static bool parameter_validation_vkCmdResolveImage(
    layer_data*                                 layer_data,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageResolve*                       pRegions)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdResolveImage", "srcImage", srcImage);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdResolveImage", "srcImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, srcImageLayout, VALIDATION_ERROR_1c82d001);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdResolveImage", "dstImage", dstImage);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdResolveImage", "dstImageLayout", "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, dstImageLayout, VALIDATION_ERROR_1c807401);

    skipCall |= validate_array(layer_data->report_data, "vkCmdResolveImage", "regionCount", "pRegions", regionCount, pRegions, true, true, VALIDATION_ERROR_1c82ac1b, VALIDATION_ERROR_1c821001);

    if (pRegions != NULL)
    {
        for (uint32_t regionIndex = 0; regionIndex < regionCount; ++regionIndex)
        {
            skipCall |= validate_flags(layer_data->report_data, "vkCmdResolveImage", ParameterName("pRegions[%i].srcSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].srcSubresource.aspectMask, true, false, VALIDATION_ERROR_0a600c03);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdResolveImage", ParameterName("pRegions[%i].dstSubresource.aspectMask", ParameterName::IndexVector{ regionIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pRegions[regionIndex].dstSubresource.aspectMask, true, false, VALIDATION_ERROR_0a600c03);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdSetEvent(
    layer_data*                                 layer_data,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdSetEvent", "event", event);

    skipCall |= validate_flags(layer_data->report_data, "vkCmdSetEvent", "stageMask", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, stageMask, true, false, VALIDATION_ERROR_1d42de03);

    return skipCall;
}

static bool parameter_validation_vkCmdResetEvent(
    layer_data*                                 layer_data,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdResetEvent", "event", event);

    skipCall |= validate_flags(layer_data->report_data, "vkCmdResetEvent", "stageMask", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, stageMask, true, false, VALIDATION_ERROR_1c42de03);

    return skipCall;
}

static bool parameter_validation_vkCmdWaitEvents(
    layer_data*                                 layer_data,
    uint32_t                                    eventCount,
    const VkEvent*                              pEvents,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    uint32_t                                    memoryBarrierCount,
    const VkMemoryBarrier*                      pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const VkImageMemoryBarrier*                 pImageMemoryBarriers)
{
    bool skipCall = false;

    skipCall |= validate_handle_array(layer_data->report_data, "vkCmdWaitEvents", "eventCount", "pEvents", eventCount, pEvents, true, true);

    skipCall |= validate_flags(layer_data->report_data, "vkCmdWaitEvents", "srcStageMask", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, srcStageMask, true, false, VALIDATION_ERROR_1e62d403);

    skipCall |= validate_flags(layer_data->report_data, "vkCmdWaitEvents", "dstStageMask", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, dstStageMask, true, false, VALIDATION_ERROR_1e607803);

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkCmdWaitEvents", "memoryBarrierCount", "pMemoryBarriers", "VK_STRUCTURE_TYPE_MEMORY_BARRIER", memoryBarrierCount, pMemoryBarriers, VK_STRUCTURE_TYPE_MEMORY_BARRIER, false, true, VALIDATION_ERROR_1e61ac01);

    if (pMemoryBarriers != NULL)
    {
        for (uint32_t memoryBarrierIndex = 0; memoryBarrierIndex < memoryBarrierCount; ++memoryBarrierIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pMemoryBarriers[%i].pNext", ParameterName::IndexVector{ memoryBarrierIndex }), NULL, pMemoryBarriers[memoryBarrierIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0c81c40d);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pMemoryBarriers[%i].srcAccessMask", ParameterName::IndexVector{ memoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pMemoryBarriers[memoryBarrierIndex].srcAccessMask, false, false, VALIDATION_ERROR_0c82c401);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pMemoryBarriers[%i].dstAccessMask", ParameterName::IndexVector{ memoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pMemoryBarriers[memoryBarrierIndex].dstAccessMask, false, false, VALIDATION_ERROR_0c806801);
        }
    }

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkCmdWaitEvents", "bufferMemoryBarrierCount", "pBufferMemoryBarriers", "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER", bufferMemoryBarrierCount, pBufferMemoryBarriers, VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER, false, true, VALIDATION_ERROR_1e610401);

    if (pBufferMemoryBarriers != NULL)
    {
        for (uint32_t bufferMemoryBarrierIndex = 0; bufferMemoryBarrierIndex < bufferMemoryBarrierCount; ++bufferMemoryBarrierIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pBufferMemoryBarriers[%i].pNext", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), NULL, pBufferMemoryBarriers[bufferMemoryBarrierIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0181c40d);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pBufferMemoryBarriers[%i].srcAccessMask", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pBufferMemoryBarriers[bufferMemoryBarrierIndex].srcAccessMask, false, false, VALIDATION_ERROR_0182c401);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pBufferMemoryBarriers[%i].dstAccessMask", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pBufferMemoryBarriers[bufferMemoryBarrierIndex].dstAccessMask, false, false, VALIDATION_ERROR_01806801);

            skipCall |= validate_required_handle(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pBufferMemoryBarriers[%i].buffer", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), pBufferMemoryBarriers[bufferMemoryBarrierIndex].buffer);
        }
    }

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkCmdWaitEvents", "imageMemoryBarrierCount", "pImageMemoryBarriers", "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER", imageMemoryBarrierCount, pImageMemoryBarriers, VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER, false, true, VALIDATION_ERROR_1e618a01);

    if (pImageMemoryBarriers != NULL)
    {
        for (uint32_t imageMemoryBarrierIndex = 0; imageMemoryBarrierIndex < imageMemoryBarrierCount; ++imageMemoryBarrierIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].pNext", ParameterName::IndexVector{ imageMemoryBarrierIndex }), NULL, pImageMemoryBarriers[imageMemoryBarrierIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0a01c40d);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].srcAccessMask", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pImageMemoryBarriers[imageMemoryBarrierIndex].srcAccessMask, false, false, VALIDATION_ERROR_0a02c401);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].dstAccessMask", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pImageMemoryBarriers[imageMemoryBarrierIndex].dstAccessMask, false, false, VALIDATION_ERROR_0a006801);

            skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].oldLayout", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pImageMemoryBarriers[imageMemoryBarrierIndex].oldLayout, VALIDATION_ERROR_0a00dc01);

            skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].newLayout", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pImageMemoryBarriers[imageMemoryBarrierIndex].newLayout, VALIDATION_ERROR_0a00d401);

            skipCall |= validate_required_handle(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].image", ParameterName::IndexVector{ imageMemoryBarrierIndex }), pImageMemoryBarriers[imageMemoryBarrierIndex].image);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdWaitEvents", ParameterName("pImageMemoryBarriers[%i].subresourceRange.aspectMask", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pImageMemoryBarriers[imageMemoryBarrierIndex].subresourceRange.aspectMask, true, false, VALIDATION_ERROR_0a800c03);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdPipelineBarrier(
    layer_data*                                 layer_data,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    VkDependencyFlags                           dependencyFlags,
    uint32_t                                    memoryBarrierCount,
    const VkMemoryBarrier*                      pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const VkImageMemoryBarrier*                 pImageMemoryBarriers)
{
    bool skipCall = false;

    skipCall |= validate_flags(layer_data->report_data, "vkCmdPipelineBarrier", "srcStageMask", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, srcStageMask, true, false, VALIDATION_ERROR_1b82d403);

    skipCall |= validate_flags(layer_data->report_data, "vkCmdPipelineBarrier", "dstStageMask", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, dstStageMask, true, false, VALIDATION_ERROR_1b807803);

    skipCall |= validate_flags(layer_data->report_data, "vkCmdPipelineBarrier", "dependencyFlags", "VkDependencyFlagBits", AllVkDependencyFlagBits, dependencyFlags, false, false, VALIDATION_ERROR_1b803e01);

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkCmdPipelineBarrier", "memoryBarrierCount", "pMemoryBarriers", "VK_STRUCTURE_TYPE_MEMORY_BARRIER", memoryBarrierCount, pMemoryBarriers, VK_STRUCTURE_TYPE_MEMORY_BARRIER, false, true, VALIDATION_ERROR_1b81ac01);

    if (pMemoryBarriers != NULL)
    {
        for (uint32_t memoryBarrierIndex = 0; memoryBarrierIndex < memoryBarrierCount; ++memoryBarrierIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pMemoryBarriers[%i].pNext", ParameterName::IndexVector{ memoryBarrierIndex }), NULL, pMemoryBarriers[memoryBarrierIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0c81c40d);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pMemoryBarriers[%i].srcAccessMask", ParameterName::IndexVector{ memoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pMemoryBarriers[memoryBarrierIndex].srcAccessMask, false, false, VALIDATION_ERROR_0c82c401);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pMemoryBarriers[%i].dstAccessMask", ParameterName::IndexVector{ memoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pMemoryBarriers[memoryBarrierIndex].dstAccessMask, false, false, VALIDATION_ERROR_0c806801);
        }
    }

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkCmdPipelineBarrier", "bufferMemoryBarrierCount", "pBufferMemoryBarriers", "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER", bufferMemoryBarrierCount, pBufferMemoryBarriers, VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER, false, true, VALIDATION_ERROR_1b810401);

    if (pBufferMemoryBarriers != NULL)
    {
        for (uint32_t bufferMemoryBarrierIndex = 0; bufferMemoryBarrierIndex < bufferMemoryBarrierCount; ++bufferMemoryBarrierIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pBufferMemoryBarriers[%i].pNext", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), NULL, pBufferMemoryBarriers[bufferMemoryBarrierIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0181c40d);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pBufferMemoryBarriers[%i].srcAccessMask", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pBufferMemoryBarriers[bufferMemoryBarrierIndex].srcAccessMask, false, false, VALIDATION_ERROR_0182c401);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pBufferMemoryBarriers[%i].dstAccessMask", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pBufferMemoryBarriers[bufferMemoryBarrierIndex].dstAccessMask, false, false, VALIDATION_ERROR_01806801);

            skipCall |= validate_required_handle(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pBufferMemoryBarriers[%i].buffer", ParameterName::IndexVector{ bufferMemoryBarrierIndex }), pBufferMemoryBarriers[bufferMemoryBarrierIndex].buffer);
        }
    }

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkCmdPipelineBarrier", "imageMemoryBarrierCount", "pImageMemoryBarriers", "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER", imageMemoryBarrierCount, pImageMemoryBarriers, VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER, false, true, VALIDATION_ERROR_1b818a01);

    if (pImageMemoryBarriers != NULL)
    {
        for (uint32_t imageMemoryBarrierIndex = 0; imageMemoryBarrierIndex < imageMemoryBarrierCount; ++imageMemoryBarrierIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].pNext", ParameterName::IndexVector{ imageMemoryBarrierIndex }), NULL, pImageMemoryBarriers[imageMemoryBarrierIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0a01c40d);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].srcAccessMask", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pImageMemoryBarriers[imageMemoryBarrierIndex].srcAccessMask, false, false, VALIDATION_ERROR_0a02c401);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].dstAccessMask", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkAccessFlagBits", AllVkAccessFlagBits, pImageMemoryBarriers[imageMemoryBarrierIndex].dstAccessMask, false, false, VALIDATION_ERROR_0a006801);

            skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].oldLayout", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pImageMemoryBarriers[imageMemoryBarrierIndex].oldLayout, VALIDATION_ERROR_0a00dc01);

            skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].newLayout", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkImageLayout", VK_IMAGE_LAYOUT_BEGIN_RANGE, VK_IMAGE_LAYOUT_END_RANGE, pImageMemoryBarriers[imageMemoryBarrierIndex].newLayout, VALIDATION_ERROR_0a00d401);

            skipCall |= validate_required_handle(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].image", ParameterName::IndexVector{ imageMemoryBarrierIndex }), pImageMemoryBarriers[imageMemoryBarrierIndex].image);

            skipCall |= validate_flags(layer_data->report_data, "vkCmdPipelineBarrier", ParameterName("pImageMemoryBarriers[%i].subresourceRange.aspectMask", ParameterName::IndexVector{ imageMemoryBarrierIndex }), "VkImageAspectFlagBits", AllVkImageAspectFlagBits, pImageMemoryBarriers[imageMemoryBarrierIndex].subresourceRange.aspectMask, true, false, VALIDATION_ERROR_0a800c03);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdBeginQuery(
    layer_data*                                 layer_data,
    VkQueryPool                                 queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags)
{
    UNUSED_PARAMETER(query);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdBeginQuery", "queryPool", queryPool);

    skipCall |= validate_flags(layer_data->report_data, "vkCmdBeginQuery", "flags", "VkQueryControlFlagBits", AllVkQueryControlFlagBits, flags, false, false, VALIDATION_ERROR_17809001);

    return skipCall;
}

static bool parameter_validation_vkCmdEndQuery(
    layer_data*                                 layer_data,
    VkQueryPool                                 queryPool,
    uint32_t                                    query)
{
    UNUSED_PARAMETER(query);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdEndQuery", "queryPool", queryPool);

    return skipCall;
}

static bool parameter_validation_vkCmdResetQueryPool(
    layer_data*                                 layer_data,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    UNUSED_PARAMETER(firstQuery);
    UNUSED_PARAMETER(queryCount);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdResetQueryPool", "queryPool", queryPool);

    return skipCall;
}

static bool parameter_validation_vkCmdWriteTimestamp(
    layer_data*                                 layer_data,
    VkPipelineStageFlagBits                     pipelineStage,
    VkQueryPool                                 queryPool,
    uint32_t                                    query)
{
    UNUSED_PARAMETER(query);

    bool skipCall = false;

    skipCall |= validate_flags(layer_data->report_data, "vkCmdWriteTimestamp", "pipelineStage", "VkPipelineStageFlagBits", AllVkPipelineStageFlagBits, pipelineStage, true, true, VALIDATION_ERROR_1e828401);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdWriteTimestamp", "queryPool", queryPool);

    return skipCall;
}

static bool parameter_validation_vkCmdCopyQueryPoolResults(
    layer_data*                                 layer_data,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    UNUSED_PARAMETER(firstQuery);
    UNUSED_PARAMETER(queryCount);
    UNUSED_PARAMETER(dstOffset);
    UNUSED_PARAMETER(stride);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdCopyQueryPoolResults", "queryPool", queryPool);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdCopyQueryPoolResults", "dstBuffer", dstBuffer);

    skipCall |= validate_flags(layer_data->report_data, "vkCmdCopyQueryPoolResults", "flags", "VkQueryResultFlagBits", AllVkQueryResultFlagBits, flags, false, false, VALIDATION_ERROR_19409001);

    return skipCall;
}

static bool parameter_validation_vkCmdPushConstants(
    layer_data*                                 layer_data,
    VkPipelineLayout                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    const void*                                 pValues)
{
    UNUSED_PARAMETER(offset);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdPushConstants", "layout", layout);

    skipCall |= validate_flags(layer_data->report_data, "vkCmdPushConstants", "stageFlags", "VkShaderStageFlagBits", AllVkShaderStageFlagBits, stageFlags, true, false, VALIDATION_ERROR_1bc2dc03);

    skipCall |= validate_array(layer_data->report_data, "vkCmdPushConstants", "size", "pValues", size, pValues, true, true, VALIDATION_ERROR_1bc2c21b, VALIDATION_ERROR_1bc26201);

    return skipCall;
}

static bool parameter_validation_vkCmdBeginRenderPass(
    layer_data*                                 layer_data,
    const VkRenderPassBeginInfo*                pRenderPassBegin,
    VkSubpassContents                           contents)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCmdBeginRenderPass", "pRenderPassBegin", "VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO", pRenderPassBegin, VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO, true, VALIDATION_ERROR_1202b00b);

    if (pRenderPassBegin != NULL)
    {
        const VkStructureType allowed_structs_VkRenderPassBeginInfo[] = { VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHX };

        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCmdBeginRenderPass", "pRenderPassBegin->pNext", "VkDeviceGroupRenderPassBeginInfoKHX", pRenderPassBegin->pNext, ARRAY_SIZE(allowed_structs_VkRenderPassBeginInfo), allowed_structs_VkRenderPassBeginInfo, GeneratedHeaderVersion, VALIDATION_ERROR_1201c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkCmdBeginRenderPass", "pRenderPassBegin->renderPass", pRenderPassBegin->renderPass);

        skipCall |= validate_required_handle(layer_data->report_data, "vkCmdBeginRenderPass", "pRenderPassBegin->framebuffer", pRenderPassBegin->framebuffer);
    }

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdBeginRenderPass", "contents", "VkSubpassContents", VK_SUBPASS_CONTENTS_BEGIN_RANGE, VK_SUBPASS_CONTENTS_END_RANGE, contents, VALIDATION_ERROR_17a03201);

    return skipCall;
}

static bool parameter_validation_vkCmdNextSubpass(
    layer_data*                                 layer_data,
    VkSubpassContents                           contents)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdNextSubpass", "contents", "VkSubpassContents", VK_SUBPASS_CONTENTS_BEGIN_RANGE, VK_SUBPASS_CONTENTS_END_RANGE, contents, VALIDATION_ERROR_1b603201);

    return skipCall;
}

static bool parameter_validation_vkCmdExecuteCommands(
    layer_data*                                 layer_data,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers)
{
    bool skipCall = false;

    skipCall |= validate_handle_array(layer_data->report_data, "vkCmdExecuteCommands", "commandBufferCount", "pCommandBuffers", commandBufferCount, pCommandBuffers, true, true);

    return skipCall;
}



static bool parameter_validation_vkDestroySurfaceKHR(
    instance_layer_data*                        layer_data,
    VkSurfaceKHR                                surface,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(surface);

    bool skipCall = false;

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroySurfaceKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroySurfaceKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroySurfaceKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceSurfaceSupportKHR(
    instance_layer_data*                        layer_data,
    uint32_t                                    queueFamilyIndex,
    VkSurfaceKHR                                surface,
    VkBool32*                                   pSupported)
{
    UNUSED_PARAMETER(queueFamilyIndex);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetPhysicalDeviceSurfaceSupportKHR", "surface", surface);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetPhysicalDeviceSurfaceSupportKHR", "pSupported", pSupported, VALIDATION_ERROR_2ee24601);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
    instance_layer_data*                        layer_data,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilitiesKHR*                   pSurfaceCapabilities)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR", "surface", surface);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR", "pSurfaceCapabilities", pSurfaceCapabilities, VALIDATION_ERROR_2e624a01);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceSurfaceFormatsKHR(
    instance_layer_data*                        layer_data,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pSurfaceFormatCount,
    VkSurfaceFormatKHR*                         pSurfaceFormats)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetPhysicalDeviceSurfaceFormatsKHR", "surface", surface);

    skipCall |= validate_array(layer_data->report_data, "vkGetPhysicalDeviceSurfaceFormatsKHR", "pSurfaceFormatCount", "pSurfaceFormats", pSurfaceFormatCount, pSurfaceFormats, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2ea24e01);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceSurfacePresentModesKHR(
    instance_layer_data*                        layer_data,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pPresentModeCount,
    VkPresentModeKHR*                           pPresentModes)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetPhysicalDeviceSurfacePresentModesKHR", "surface", surface);

    skipCall |= validate_array(layer_data->report_data, "vkGetPhysicalDeviceSurfacePresentModesKHR", "pPresentModeCount", "pPresentModes", pPresentModeCount, pPresentModes, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2ec1ea01);

    return skipCall;
}



static bool parameter_validation_vkCreateSwapchainKHR(
    layer_data*                                 layer_data,
    const VkSwapchainCreateInfoKHR*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchain)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_surface) skipCall |= OutputExtensionError(layer_data, "vkCreateSwapchainKHR", VK_KHR_SURFACE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkCreateSwapchainKHR", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateSwapchainKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR, true, VALIDATION_ERROR_1462b00b);

    if (pCreateInfo != NULL)
    {
        const VkStructureType allowed_structs_VkSwapchainCreateInfoKHR[] = { VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHX, VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT };

        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateSwapchainKHR", "pCreateInfo->pNext", "VkDeviceGroupSwapchainCreateInfoKHX, VkSwapchainCounterCreateInfoEXT", pCreateInfo->pNext, ARRAY_SIZE(allowed_structs_VkSwapchainCreateInfoKHR), allowed_structs_VkSwapchainCreateInfoKHR, GeneratedHeaderVersion, VALIDATION_ERROR_1461c40d);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateSwapchainKHR", "pCreateInfo->flags", "VkSwapchainCreateFlagBitsKHR", AllVkSwapchainCreateFlagBitsKHR, pCreateInfo->flags, false, false, VALIDATION_ERROR_14609001);

        skipCall |= validate_required_handle(layer_data->report_data, "vkCreateSwapchainKHR", "pCreateInfo->surface", pCreateInfo->surface);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSwapchainKHR", "pCreateInfo->imageFormat", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfo->imageFormat, VALIDATION_ERROR_1460a401);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSwapchainKHR", "pCreateInfo->imageColorSpace", "VkColorSpaceKHR", VK_COLOR_SPACE_BEGIN_RANGE_KHR, VK_COLOR_SPACE_END_RANGE_KHR, pCreateInfo->imageColorSpace, VALIDATION_ERROR_1460a201);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateSwapchainKHR", "pCreateInfo->imageUsage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, pCreateInfo->imageUsage, true, false, VALIDATION_ERROR_1460ae03);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSwapchainKHR", "pCreateInfo->imageSharingMode", "VkSharingMode", VK_SHARING_MODE_BEGIN_RANGE, VK_SHARING_MODE_END_RANGE, pCreateInfo->imageSharingMode, VALIDATION_ERROR_1460a801);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateSwapchainKHR", "pCreateInfo->preTransform", "VkSurfaceTransformFlagBitsKHR", AllVkSurfaceTransformFlagBitsKHR, pCreateInfo->preTransform, true, true, VALIDATION_ERROR_14629401);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateSwapchainKHR", "pCreateInfo->compositeAlpha", "VkCompositeAlphaFlagBitsKHR", AllVkCompositeAlphaFlagBitsKHR, pCreateInfo->compositeAlpha, true, true, VALIDATION_ERROR_14602e01);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSwapchainKHR", "pCreateInfo->presentMode", "VkPresentModeKHR", VK_PRESENT_MODE_BEGIN_RANGE_KHR, VK_PRESENT_MODE_END_RANGE_KHR, pCreateInfo->presentMode, VALIDATION_ERROR_14629601);

        skipCall |= validate_bool32(layer_data->report_data, "vkCreateSwapchainKHR", "pCreateInfo->clipped", pCreateInfo->clipped);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSwapchainKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSwapchainKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSwapchainKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSwapchainKHR", "pSwapchain", pSwapchain, VALIDATION_ERROR_22a25201);

    return skipCall;
}

static bool parameter_validation_vkDestroySwapchainKHR(
    layer_data*                                 layer_data,
    VkSwapchainKHR                              swapchain,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(swapchain);

    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_surface) skipCall |= OutputExtensionError(layer_data, "vkDestroySwapchainKHR", VK_KHR_SURFACE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkDestroySwapchainKHR", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroySwapchainKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroySwapchainKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroySwapchainKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkGetSwapchainImagesKHR(
    layer_data*                                 layer_data,
    VkSwapchainKHR                              swapchain,
    uint32_t*                                   pSwapchainImageCount,
    VkImage*                                    pSwapchainImages)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_surface) skipCall |= OutputExtensionError(layer_data, "vkGetSwapchainImagesKHR", VK_KHR_SURFACE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkGetSwapchainImagesKHR", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetSwapchainImagesKHR", "swapchain", swapchain);

    skipCall |= validate_array(layer_data->report_data, "vkGetSwapchainImagesKHR", "pSwapchainImageCount", "pSwapchainImages", pSwapchainImageCount, pSwapchainImages, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_30825601);

    return skipCall;
}

static bool parameter_validation_vkAcquireNextImageKHR(
    layer_data*                                 layer_data,
    VkSwapchainKHR                              swapchain,
    uint64_t                                    timeout,
    VkSemaphore                                 semaphore,
    VkFence                                     fence,
    uint32_t*                                   pImageIndex)
{
    UNUSED_PARAMETER(timeout);
    UNUSED_PARAMETER(semaphore);
    UNUSED_PARAMETER(fence);

    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_surface) skipCall |= OutputExtensionError(layer_data, "vkAcquireNextImageKHR", VK_KHR_SURFACE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkAcquireNextImageKHR", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkAcquireNextImageKHR", "swapchain", swapchain);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkAcquireNextImageKHR", "pImageIndex", pImageIndex, VALIDATION_ERROR_16418601);

    return skipCall;
}

static bool parameter_validation_vkQueuePresentKHR(
    layer_data*                                 layer_data,
    const VkPresentInfoKHR*                     pPresentInfo)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_surface) skipCall |= OutputExtensionError(layer_data, "vkQueuePresentKHR", VK_KHR_SURFACE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkQueuePresentKHR", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkQueuePresentKHR", "pPresentInfo", "VK_STRUCTURE_TYPE_PRESENT_INFO_KHR", pPresentInfo, VK_STRUCTURE_TYPE_PRESENT_INFO_KHR, true, VALIDATION_ERROR_1122b00b);

    if (pPresentInfo != NULL)
    {
        const VkStructureType allowed_structs_VkPresentInfoKHR[] = { VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR, VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR, VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHX, VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE };

        skipCall |= validate_struct_pnext(layer_data->report_data, "vkQueuePresentKHR", "pPresentInfo->pNext", "VkDisplayPresentInfoKHR, VkPresentRegionsKHR, VkDeviceGroupPresentInfoKHX, VkPresentTimesInfoGOOGLE", pPresentInfo->pNext, ARRAY_SIZE(allowed_structs_VkPresentInfoKHR), allowed_structs_VkPresentInfoKHR, GeneratedHeaderVersion, VALIDATION_ERROR_1121c40d);

        skipCall |= validate_handle_array(layer_data->report_data, "vkQueuePresentKHR", "pPresentInfo->swapchainCount", "pPresentInfo->pSwapchains", pPresentInfo->swapchainCount, pPresentInfo->pSwapchains, true, true);

        skipCall |= validate_array(layer_data->report_data, "vkQueuePresentKHR", "pPresentInfo->swapchainCount", "pPresentInfo->pImageIndices", pPresentInfo->swapchainCount, pPresentInfo->pImageIndices, true, true, VALIDATION_ERROR_1122f21b, VALIDATION_ERROR_11218801);

        skipCall |= validate_array(layer_data->report_data, "vkQueuePresentKHR", "pPresentInfo->swapchainCount", "pPresentInfo->pResults", pPresentInfo->swapchainCount, pPresentInfo->pResults, true, false, VALIDATION_ERROR_1122f21b, VALIDATION_ERROR_11221e01);
    }

    return skipCall;
}



static bool parameter_validation_vkGetPhysicalDeviceDisplayPropertiesKHR(
    instance_layer_data*                        layer_data,
    uint32_t*                                   pPropertyCount,
    VkDisplayPropertiesKHR*                     pProperties)
{
    bool skipCall = false;

    skipCall |= validate_array(layer_data->report_data, "vkGetPhysicalDeviceDisplayPropertiesKHR", "pPropertyCount", "pProperties", pPropertyCount, pProperties, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2b81f401);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
    instance_layer_data*                        layer_data,
    uint32_t*                                   pPropertyCount,
    VkDisplayPlanePropertiesKHR*                pProperties)
{
    bool skipCall = false;

    skipCall |= validate_array(layer_data->report_data, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR", "pPropertyCount", "pProperties", pPropertyCount, pProperties, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2b61f401);

    return skipCall;
}

static bool parameter_validation_vkGetDisplayPlaneSupportedDisplaysKHR(
    instance_layer_data*                        layer_data,
    uint32_t                                    planeIndex,
    uint32_t*                                   pDisplayCount,
    VkDisplayKHR*                               pDisplays)
{
    UNUSED_PARAMETER(planeIndex);

    bool skipCall = false;

    skipCall |= validate_array(layer_data->report_data, "vkGetDisplayPlaneSupportedDisplaysKHR", "pDisplayCount", "pDisplays", pDisplayCount, pDisplays, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_29c15201);

    return skipCall;
}

static bool parameter_validation_vkGetDisplayModePropertiesKHR(
    instance_layer_data*                        layer_data,
    VkDisplayKHR                                display,
    uint32_t*                                   pPropertyCount,
    VkDisplayModePropertiesKHR*                 pProperties)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetDisplayModePropertiesKHR", "display", display);

    skipCall |= validate_array(layer_data->report_data, "vkGetDisplayModePropertiesKHR", "pPropertyCount", "pProperties", pPropertyCount, pProperties, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2981f401);

    return skipCall;
}

static bool parameter_validation_vkCreateDisplayModeKHR(
    instance_layer_data*                        layer_data,
    VkDisplayKHR                                display,
    const VkDisplayModeCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDisplayModeKHR*                           pMode)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkCreateDisplayModeKHR", "display", display);

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateDisplayModeKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR, true, VALIDATION_ERROR_0722b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateDisplayModeKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0721c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateDisplayModeKHR", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_07209005);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDisplayModeKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDisplayModeKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDisplayModeKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDisplayModeKHR", "pMode", pMode, VALIDATION_ERROR_1fe1bc01);

    return skipCall;
}

static bool parameter_validation_vkGetDisplayPlaneCapabilitiesKHR(
    instance_layer_data*                        layer_data,
    VkDisplayModeKHR                            mode,
    uint32_t                                    planeIndex,
    VkDisplayPlaneCapabilitiesKHR*              pCapabilities)
{
    UNUSED_PARAMETER(planeIndex);

    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetDisplayPlaneCapabilitiesKHR", "mode", mode);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetDisplayPlaneCapabilitiesKHR", "pCapabilities", pCapabilities, VALIDATION_ERROR_29a10a01);

    return skipCall;
}

static bool parameter_validation_vkCreateDisplayPlaneSurfaceKHR(
    instance_layer_data*                        layer_data,
    const VkDisplaySurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateDisplayPlaneSurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR, true, VALIDATION_ERROR_0782b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateDisplayPlaneSurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0781c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateDisplayPlaneSurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_07809005);

        skipCall |= validate_required_handle(layer_data->report_data, "vkCreateDisplayPlaneSurfaceKHR", "pCreateInfo->displayMode", pCreateInfo->displayMode);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateDisplayPlaneSurfaceKHR", "pCreateInfo->transform", "VkSurfaceTransformFlagBitsKHR", AllVkSurfaceTransformFlagBitsKHR, pCreateInfo->transform, true, true, VALIDATION_ERROR_07830201);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateDisplayPlaneSurfaceKHR", "pCreateInfo->alphaMode", "VkDisplayPlaneAlphaFlagBitsKHR", AllVkDisplayPlaneAlphaFlagBitsKHR, pCreateInfo->alphaMode, true, true, VALIDATION_ERROR_07800a01);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDisplayPlaneSurfaceKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDisplayPlaneSurfaceKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDisplayPlaneSurfaceKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDisplayPlaneSurfaceKHR", "pSurface", pSurface, VALIDATION_ERROR_20024801);

    return skipCall;
}



static bool parameter_validation_vkCreateSharedSwapchainsKHR(
    layer_data*                                 layer_data,
    uint32_t                                    swapchainCount,
    const VkSwapchainCreateInfoKHR*             pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchains)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_display) skipCall |= OutputExtensionError(layer_data, "vkCreateSharedSwapchainsKHR", VK_KHR_DISPLAY_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkCreateSharedSwapchainsKHR", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_display_swapchain) skipCall |= OutputExtensionError(layer_data, "vkCreateSharedSwapchainsKHR", VK_KHR_DISPLAY_SWAPCHAIN_EXTENSION_NAME);

    skipCall |= validate_array(layer_data->report_data, "vkCreateSharedSwapchainsKHR", "swapchainCount", "pCreateInfos", swapchainCount, pCreateInfos, true, true, VALIDATION_ERROR_2282f21b, VALIDATION_ERROR_22812001);

    if (pCreateInfos != NULL)
    {
        for (uint32_t swapchainIndex = 0; swapchainIndex < swapchainCount; ++swapchainIndex)
        {
            const VkStructureType allowed_structs_VkSwapchainCreateInfoKHR[] = { VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHX, VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT };

            skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateSharedSwapchainsKHR", ParameterName("pCreateInfos[%i].pNext", ParameterName::IndexVector{ swapchainIndex }), "VkDeviceGroupSwapchainCreateInfoKHX, VkSwapchainCounterCreateInfoEXT", pCreateInfos[swapchainIndex].pNext, ARRAY_SIZE(allowed_structs_VkSwapchainCreateInfoKHR), allowed_structs_VkSwapchainCreateInfoKHR, GeneratedHeaderVersion, VALIDATION_ERROR_1461c40d);

            skipCall |= validate_flags(layer_data->report_data, "vkCreateSharedSwapchainsKHR", ParameterName("pCreateInfos[%i].flags", ParameterName::IndexVector{ swapchainIndex }), "VkSwapchainCreateFlagBitsKHR", AllVkSwapchainCreateFlagBitsKHR, pCreateInfos[swapchainIndex].flags, false, false, VALIDATION_ERROR_14609001);

            skipCall |= validate_required_handle(layer_data->report_data, "vkCreateSharedSwapchainsKHR", ParameterName("pCreateInfos[%i].surface", ParameterName::IndexVector{ swapchainIndex }), pCreateInfos[swapchainIndex].surface);

            skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSharedSwapchainsKHR", ParameterName("pCreateInfos[%i].imageFormat", ParameterName::IndexVector{ swapchainIndex }), "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pCreateInfos[swapchainIndex].imageFormat, VALIDATION_ERROR_1460a401);

            skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSharedSwapchainsKHR", ParameterName("pCreateInfos[%i].imageColorSpace", ParameterName::IndexVector{ swapchainIndex }), "VkColorSpaceKHR", VK_COLOR_SPACE_BEGIN_RANGE_KHR, VK_COLOR_SPACE_END_RANGE_KHR, pCreateInfos[swapchainIndex].imageColorSpace, VALIDATION_ERROR_1460a201);

            skipCall |= validate_flags(layer_data->report_data, "vkCreateSharedSwapchainsKHR", ParameterName("pCreateInfos[%i].imageUsage", ParameterName::IndexVector{ swapchainIndex }), "VkImageUsageFlagBits", AllVkImageUsageFlagBits, pCreateInfos[swapchainIndex].imageUsage, true, false, VALIDATION_ERROR_1460ae03);

            skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSharedSwapchainsKHR", ParameterName("pCreateInfos[%i].imageSharingMode", ParameterName::IndexVector{ swapchainIndex }), "VkSharingMode", VK_SHARING_MODE_BEGIN_RANGE, VK_SHARING_MODE_END_RANGE, pCreateInfos[swapchainIndex].imageSharingMode, VALIDATION_ERROR_1460a801);

            skipCall |= validate_flags(layer_data->report_data, "vkCreateSharedSwapchainsKHR", ParameterName("pCreateInfos[%i].preTransform", ParameterName::IndexVector{ swapchainIndex }), "VkSurfaceTransformFlagBitsKHR", AllVkSurfaceTransformFlagBitsKHR, pCreateInfos[swapchainIndex].preTransform, true, true, VALIDATION_ERROR_14629401);

            skipCall |= validate_flags(layer_data->report_data, "vkCreateSharedSwapchainsKHR", ParameterName("pCreateInfos[%i].compositeAlpha", ParameterName::IndexVector{ swapchainIndex }), "VkCompositeAlphaFlagBitsKHR", AllVkCompositeAlphaFlagBitsKHR, pCreateInfos[swapchainIndex].compositeAlpha, true, true, VALIDATION_ERROR_14602e01);

            skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateSharedSwapchainsKHR", ParameterName("pCreateInfos[%i].presentMode", ParameterName::IndexVector{ swapchainIndex }), "VkPresentModeKHR", VK_PRESENT_MODE_BEGIN_RANGE_KHR, VK_PRESENT_MODE_END_RANGE_KHR, pCreateInfos[swapchainIndex].presentMode, VALIDATION_ERROR_14629601);

            skipCall |= validate_bool32(layer_data->report_data, "vkCreateSharedSwapchainsKHR", ParameterName("pCreateInfos[%i].clipped", ParameterName::IndexVector{ swapchainIndex }), pCreateInfos[swapchainIndex].clipped);
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSharedSwapchainsKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSharedSwapchainsKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateSharedSwapchainsKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_array(layer_data->report_data, "vkCreateSharedSwapchainsKHR", "swapchainCount", "pSwapchains", swapchainCount, pSwapchains, true, true, VALIDATION_ERROR_2282f21b, VALIDATION_ERROR_22825801);

    return skipCall;
}



#ifdef VK_USE_PLATFORM_XLIB_KHR

static bool parameter_validation_vkCreateXlibSurfaceKHR(
    instance_layer_data*                        layer_data,
    const VkXlibSurfaceCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateXlibSurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR, true, VALIDATION_ERROR_1602b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateXlibSurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_1601c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateXlibSurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_16009005);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateXlibSurfaceKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateXlibSurfaceKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateXlibSurfaceKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateXlibSurfaceKHR", "pSurface", pSurface, VALIDATION_ERROR_23424801);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceXlibPresentationSupportKHR(
    instance_layer_data*                        layer_data,
    uint32_t                                    queueFamilyIndex,
    Display*                                    dpy,
    VisualID                                    visualID)
{
    UNUSED_PARAMETER(queueFamilyIndex);
    UNUSED_PARAMETER(visualID);

    bool skipCall = false;

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetPhysicalDeviceXlibPresentationSupportKHR", "dpy", dpy, VALIDATION_ERROR_2f606601);

    return skipCall;
}

#endif // VK_USE_PLATFORM_XLIB_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR

static bool parameter_validation_vkCreateXcbSurfaceKHR(
    instance_layer_data*                        layer_data,
    const VkXcbSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateXcbSurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR, true, VALIDATION_ERROR_15e2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateXcbSurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_15e1c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateXcbSurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_15e09005);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateXcbSurfaceKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateXcbSurfaceKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateXcbSurfaceKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateXcbSurfaceKHR", "pSurface", pSurface, VALIDATION_ERROR_23224801);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceXcbPresentationSupportKHR(
    instance_layer_data*                        layer_data,
    uint32_t                                    queueFamilyIndex,
    xcb_connection_t*                           connection,
    xcb_visualid_t                              visual_id)
{
    UNUSED_PARAMETER(queueFamilyIndex);
    UNUSED_PARAMETER(visual_id);

    bool skipCall = false;

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetPhysicalDeviceXcbPresentationSupportKHR", "connection", connection, VALIDATION_ERROR_2f403001);

    return skipCall;
}

#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_WAYLAND_KHR

static bool parameter_validation_vkCreateWaylandSurfaceKHR(
    instance_layer_data*                        layer_data,
    const VkWaylandSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateWaylandSurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR, true, VALIDATION_ERROR_1542b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateWaylandSurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_1541c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateWaylandSurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_15409005);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateWaylandSurfaceKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateWaylandSurfaceKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateWaylandSurfaceKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateWaylandSurfaceKHR", "pSurface", pSurface, VALIDATION_ERROR_22e24801);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceWaylandPresentationSupportKHR(
    instance_layer_data*                        layer_data,
    uint32_t                                    queueFamilyIndex,
    struct wl_display*                          display)
{
    UNUSED_PARAMETER(queueFamilyIndex);

    bool skipCall = false;

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetPhysicalDeviceWaylandPresentationSupportKHR", "display", display, VALIDATION_ERROR_2f006001);

    return skipCall;
}

#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_MIR_KHR

static bool parameter_validation_vkCreateMirSurfaceKHR(
    instance_layer_data*                        layer_data,
    const VkMirSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateMirSurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_MIR_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_MIR_SURFACE_CREATE_INFO_KHR, true, VALIDATION_ERROR_0ca2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateMirSurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0ca1c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateMirSurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_0ca09005);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateMirSurfaceKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateMirSurfaceKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateMirSurfaceKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateMirSurfaceKHR", "pSurface", pSurface, VALIDATION_ERROR_21624801);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceMirPresentationSupportKHR(
    instance_layer_data*                        layer_data,
    uint32_t                                    queueFamilyIndex,
    MirConnection*                              connection)
{
    UNUSED_PARAMETER(queueFamilyIndex);

    bool skipCall = false;

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetPhysicalDeviceMirPresentationSupportKHR", "connection", connection, VALIDATION_ERROR_2d203001);

    return skipCall;
}

#endif // VK_USE_PLATFORM_MIR_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR

static bool parameter_validation_vkCreateAndroidSurfaceKHR(
    instance_layer_data*                        layer_data,
    const VkAndroidSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateAndroidSurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR, true, VALIDATION_ERROR_0042b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateAndroidSurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0041c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateAndroidSurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_00409005);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateAndroidSurfaceKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateAndroidSurfaceKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateAndroidSurfaceKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateAndroidSurfaceKHR", "pSurface", pSurface, VALIDATION_ERROR_1ea24801);

    return skipCall;
}

#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkCreateWin32SurfaceKHR(
    instance_layer_data*                        layer_data,
    const VkWin32SurfaceCreateInfoKHR*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateWin32SurfaceKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR, true, VALIDATION_ERROR_15a2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateWin32SurfaceKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_15a1c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateWin32SurfaceKHR", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_15a09005);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateWin32SurfaceKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateWin32SurfaceKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateWin32SurfaceKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateWin32SurfaceKHR", "pSurface", pSurface, VALIDATION_ERROR_23024801);

    return skipCall;
}

#endif // VK_USE_PLATFORM_WIN32_KHR



static bool parameter_validation_vkGetPhysicalDeviceFeatures2KHR(
    instance_layer_data*                        layer_data,
    VkPhysicalDeviceFeatures2KHR*               pFeatures)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceFeatures2KHR", "pFeatures", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR", pFeatures, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR, true, VALIDATION_ERROR_0e42b00b);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceProperties2KHR(
    instance_layer_data*                        layer_data,
    VkPhysicalDeviceProperties2KHR*             pProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceProperties2KHR", "pProperties", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR", pProperties, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR, true, VALIDATION_ERROR_3402b00b);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceFormatProperties2KHR(
    instance_layer_data*                        layer_data,
    VkFormat                                    format,
    VkFormatProperties2KHR*                     pFormatProperties)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceFormatProperties2KHR", "format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, format, VALIDATION_ERROR_2c609201);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceFormatProperties2KHR", "pFormatProperties", "VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR", pFormatProperties, VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR, true, VALIDATION_ERROR_3422b00b);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceImageFormatProperties2KHR(
    instance_layer_data*                        layer_data,
    const VkPhysicalDeviceImageFormatInfo2KHR*  pImageFormatInfo,
    VkImageFormatProperties2KHR*                pImageFormatProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR", pImageFormatInfo, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR, true, VALIDATION_ERROR_0e62b00b);

    if (pImageFormatInfo != NULL)
    {
        const VkStructureType allowed_structs_VkPhysicalDeviceImageFormatInfo2KHR[] = { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHR };

        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo->pNext", "VkPhysicalDeviceExternalImageFormatInfoKHR", pImageFormatInfo->pNext, ARRAY_SIZE(allowed_structs_VkPhysicalDeviceImageFormatInfo2KHR), allowed_structs_VkPhysicalDeviceImageFormatInfo2KHR, GeneratedHeaderVersion, VALIDATION_ERROR_0e61c40d);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo->format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pImageFormatInfo->format, VALIDATION_ERROR_0e609201);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo->type", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, pImageFormatInfo->type, VALIDATION_ERROR_0e630401);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo->tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, pImageFormatInfo->tiling, VALIDATION_ERROR_0e62fa01);

        skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo->usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, pImageFormatInfo->usage, true, false, VALIDATION_ERROR_0e630603);

        skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatInfo->flags", "VkImageCreateFlagBits", AllVkImageCreateFlagBits, pImageFormatInfo->flags, false, false, VALIDATION_ERROR_0e609001);
    }

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceImageFormatProperties2KHR", "pImageFormatProperties", "VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR", pImageFormatProperties, VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR, true, VALIDATION_ERROR_3442b00b);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    instance_layer_data*                        layer_data,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2KHR*                pQueueFamilyProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkGetPhysicalDeviceQueueFamilyProperties2KHR", "pQueueFamilyPropertyCount", "pQueueFamilyProperties", "VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR", pQueueFamilyPropertyCount, pQueueFamilyProperties, VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR, true, false, false, VALIDATION_ERROR_2dc20001);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceMemoryProperties2KHR(
    instance_layer_data*                        layer_data,
    VkPhysicalDeviceMemoryProperties2KHR*       pMemoryProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceMemoryProperties2KHR", "pMemoryProperties", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR", pMemoryProperties, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR, true, VALIDATION_ERROR_3462b00b);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
    instance_layer_data*                        layer_data,
    const VkPhysicalDeviceSparseImageFormatInfo2KHR* pFormatInfo,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties2KHR*          pProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR", pFormatInfo, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR, true, VALIDATION_ERROR_0ec2b00b);

    if (pFormatInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo->pNext", NULL, pFormatInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0ec1c40d);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo->format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, pFormatInfo->format, VALIDATION_ERROR_0ec09201);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo->type", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, pFormatInfo->type, VALIDATION_ERROR_0ec30401);

        skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo->samples", "VkSampleCountFlagBits", AllVkSampleCountFlagBits, pFormatInfo->samples, true, true, VALIDATION_ERROR_0ec2b401);

        skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo->usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, pFormatInfo->usage, true, false, VALIDATION_ERROR_0ec30603);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pFormatInfo->tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, pFormatInfo->tiling, VALIDATION_ERROR_0ec2fa01);
    }

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", "pPropertyCount", "pProperties", "VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR", pPropertyCount, pProperties, VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR, true, false, false, VALIDATION_ERROR_2e01f401);

    return skipCall;
}





static bool parameter_validation_vkTrimCommandPoolKHR(
    layer_data*                                 layer_data,
    VkCommandPool                               commandPool,
    VkCommandPoolTrimFlagsKHR                   flags)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_maintenance1) skipCall |= OutputExtensionError(layer_data, "vkTrimCommandPoolKHR", VK_KHR_MAINTENANCE1_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkTrimCommandPoolKHR", "commandPool", commandPool);

    skipCall |= validate_reserved_flags(layer_data->report_data, "vkTrimCommandPoolKHR", "flags", flags, VALIDATION_ERROR_33409005);

    return skipCall;
}



static bool parameter_validation_vkGetPhysicalDeviceExternalBufferPropertiesKHR(
    instance_layer_data*                        layer_data,
    const VkPhysicalDeviceExternalBufferInfoKHR* pExternalBufferInfo,
    VkExternalBufferPropertiesKHR*              pExternalBufferProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceExternalBufferPropertiesKHR", "pExternalBufferInfo", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHR", pExternalBufferInfo, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHR, true, VALIDATION_ERROR_0dc2b00b);

    if (pExternalBufferInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetPhysicalDeviceExternalBufferPropertiesKHR", "pExternalBufferInfo->pNext", NULL, pExternalBufferInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0dc1c40d);

        skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceExternalBufferPropertiesKHR", "pExternalBufferInfo->flags", "VkBufferCreateFlagBits", AllVkBufferCreateFlagBits, pExternalBufferInfo->flags, false, false, VALIDATION_ERROR_0dc09001);

        skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceExternalBufferPropertiesKHR", "pExternalBufferInfo->usage", "VkBufferUsageFlagBits", AllVkBufferUsageFlagBits, pExternalBufferInfo->usage, true, false, VALIDATION_ERROR_0dc30603);

        skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceExternalBufferPropertiesKHR", "pExternalBufferInfo->handleType", "VkExternalMemoryHandleTypeFlagBitsKHR", AllVkExternalMemoryHandleTypeFlagBitsKHR, pExternalBufferInfo->handleType, true, true, VALIDATION_ERROR_0dc09c01);
    }

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceExternalBufferPropertiesKHR", "pExternalBufferProperties", "VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHR", pExternalBufferProperties, VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHR, true, VALIDATION_ERROR_34c2b00b);

    return skipCall;
}





#ifdef VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkGetMemoryWin32HandleKHR(
    layer_data*                                 layer_data,
    const VkMemoryGetWin32HandleInfoKHR*        pGetWin32HandleInfo,
    HANDLE*                                     pHandle)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_external_memory) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryWin32HandleKHR", VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_memory_capabilities) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryWin32HandleKHR", VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_memory_win32) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryWin32HandleKHR", VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetMemoryWin32HandleKHR", "pGetWin32HandleInfo", "VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR", pGetWin32HandleInfo, VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR, true, VALIDATION_ERROR_3b42b00b);

    if (pGetWin32HandleInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetMemoryWin32HandleKHR", "pGetWin32HandleInfo->pNext", NULL, pGetWin32HandleInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_3b41c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkGetMemoryWin32HandleKHR", "pGetWin32HandleInfo->memory", pGetWin32HandleInfo->memory);

        skipCall |= validate_flags(layer_data->report_data, "vkGetMemoryWin32HandleKHR", "pGetWin32HandleInfo->handleType", "VkExternalMemoryHandleTypeFlagBitsKHR", AllVkExternalMemoryHandleTypeFlagBitsKHR, pGetWin32HandleInfo->handleType, true, true, VALIDATION_ERROR_3b409c01);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetMemoryWin32HandleKHR", "pHandle", pHandle, VALIDATION_ERROR_2ae17c01);

    return skipCall;
}

static bool parameter_validation_vkGetMemoryWin32HandlePropertiesKHR(
    layer_data*                                 layer_data,
    VkExternalMemoryHandleTypeFlagBitsKHR       handleType,
    HANDLE                                      handle,
    VkMemoryWin32HandlePropertiesKHR*           pMemoryWin32HandleProperties)
{
    UNUSED_PARAMETER(handle);

    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_external_memory) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryWin32HandlePropertiesKHR", VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_memory_capabilities) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryWin32HandlePropertiesKHR", VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_memory_win32) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryWin32HandlePropertiesKHR", VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME);

    skipCall |= validate_flags(layer_data->report_data, "vkGetMemoryWin32HandlePropertiesKHR", "handleType", "VkExternalMemoryHandleTypeFlagBitsKHR", AllVkExternalMemoryHandleTypeFlagBitsKHR, handleType, true, true, VALIDATION_ERROR_2b209c01);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetMemoryWin32HandlePropertiesKHR", "pMemoryWin32HandleProperties", "VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR", pMemoryWin32HandleProperties, VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR, true, VALIDATION_ERROR_UNDEFINED);

    return skipCall;
}

#endif // VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkGetMemoryFdKHR(
    layer_data*                                 layer_data,
    const VkMemoryGetFdInfoKHR*                 pGetFdInfo,
    int*                                        pFd)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_external_memory) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryFdKHR", VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_memory_capabilities) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryFdKHR", VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_memory_fd) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryFdKHR", VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetMemoryFdKHR", "pGetFdInfo", "VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR", pGetFdInfo, VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR, true, VALIDATION_ERROR_3b22b00b);

    if (pGetFdInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetMemoryFdKHR", "pGetFdInfo->pNext", NULL, pGetFdInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_3b21c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkGetMemoryFdKHR", "pGetFdInfo->memory", pGetFdInfo->memory);

        skipCall |= validate_flags(layer_data->report_data, "vkGetMemoryFdKHR", "pGetFdInfo->handleType", "VkExternalMemoryHandleTypeFlagBitsKHR", AllVkExternalMemoryHandleTypeFlagBitsKHR, pGetFdInfo->handleType, true, true, VALIDATION_ERROR_3b209c01);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetMemoryFdKHR", "pFd", pFd, VALIDATION_ERROR_2aa16c01);

    return skipCall;
}

static bool parameter_validation_vkGetMemoryFdPropertiesKHR(
    layer_data*                                 layer_data,
    VkExternalMemoryHandleTypeFlagBitsKHR       handleType,
    int                                         fd,
    VkMemoryFdPropertiesKHR*                    pMemoryFdProperties)
{
    UNUSED_PARAMETER(fd);

    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_external_memory) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryFdPropertiesKHR", VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_memory_capabilities) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryFdPropertiesKHR", VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_memory_fd) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryFdPropertiesKHR", VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME);

    skipCall |= validate_flags(layer_data->report_data, "vkGetMemoryFdPropertiesKHR", "handleType", "VkExternalMemoryHandleTypeFlagBitsKHR", AllVkExternalMemoryHandleTypeFlagBitsKHR, handleType, true, true, VALIDATION_ERROR_2ac09c01);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetMemoryFdPropertiesKHR", "pMemoryFdProperties", "VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR", pMemoryFdProperties, VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR, true, VALIDATION_ERROR_UNDEFINED);

    return skipCall;
}



#ifdef VK_USE_PLATFORM_WIN32_KHR

#endif // VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
    instance_layer_data*                        layer_data,
    const VkPhysicalDeviceExternalSemaphoreInfoKHR* pExternalSemaphoreInfo,
    VkExternalSemaphorePropertiesKHR*           pExternalSemaphoreProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR", "pExternalSemaphoreInfo", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR", pExternalSemaphoreInfo, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR, true, VALIDATION_ERROR_0e02b00b);

    if (pExternalSemaphoreInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR", "pExternalSemaphoreInfo->pNext", NULL, pExternalSemaphoreInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0e01c40d);

        skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR", "pExternalSemaphoreInfo->handleType", "VkExternalSemaphoreHandleTypeFlagBitsKHR", AllVkExternalSemaphoreHandleTypeFlagBitsKHR, pExternalSemaphoreInfo->handleType, true, true, VALIDATION_ERROR_0e009c01);
    }

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR", "pExternalSemaphoreProperties", "VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR", pExternalSemaphoreProperties, VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR, true, VALIDATION_ERROR_3522b00b);

    return skipCall;
}





#ifdef VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkImportSemaphoreWin32HandleKHR(
    layer_data*                                 layer_data,
    const VkImportSemaphoreWin32HandleInfoKHR*  pImportSemaphoreWin32HandleInfo)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_external_semaphore) skipCall |= OutputExtensionError(layer_data, "vkImportSemaphoreWin32HandleKHR", VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_semaphore_capabilities) skipCall |= OutputExtensionError(layer_data, "vkImportSemaphoreWin32HandleKHR", VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_semaphore_win32) skipCall |= OutputExtensionError(layer_data, "vkImportSemaphoreWin32HandleKHR", VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkImportSemaphoreWin32HandleKHR", "pImportSemaphoreWin32HandleInfo", "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR", pImportSemaphoreWin32HandleInfo, VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR, true, VALIDATION_ERROR_0b62b00b);

    if (pImportSemaphoreWin32HandleInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkImportSemaphoreWin32HandleKHR", "pImportSemaphoreWin32HandleInfo->pNext", NULL, pImportSemaphoreWin32HandleInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0b61c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkImportSemaphoreWin32HandleKHR", "pImportSemaphoreWin32HandleInfo->semaphore", pImportSemaphoreWin32HandleInfo->semaphore);

        skipCall |= validate_flags(layer_data->report_data, "vkImportSemaphoreWin32HandleKHR", "pImportSemaphoreWin32HandleInfo->flags", "VkSemaphoreImportFlagBitsKHR", AllVkSemaphoreImportFlagBitsKHR, pImportSemaphoreWin32HandleInfo->flags, false, false, VALIDATION_ERROR_0b609001);

        skipCall |= validate_flags(layer_data->report_data, "vkImportSemaphoreWin32HandleKHR", "pImportSemaphoreWin32HandleInfo->handleType", "VkExternalSemaphoreHandleTypeFlagBitsKHR", AllVkExternalSemaphoreHandleTypeFlagBitsKHR, pImportSemaphoreWin32HandleInfo->handleType, false, true, VALIDATION_ERROR_0b609c01);
    }

    return skipCall;
}

static bool parameter_validation_vkGetSemaphoreWin32HandleKHR(
    layer_data*                                 layer_data,
    const VkSemaphoreGetWin32HandleInfoKHR*     pGetWin32HandleInfo,
    HANDLE*                                     pHandle)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_external_semaphore) skipCall |= OutputExtensionError(layer_data, "vkGetSemaphoreWin32HandleKHR", VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_semaphore_capabilities) skipCall |= OutputExtensionError(layer_data, "vkGetSemaphoreWin32HandleKHR", VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_semaphore_win32) skipCall |= OutputExtensionError(layer_data, "vkGetSemaphoreWin32HandleKHR", VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetSemaphoreWin32HandleKHR", "pGetWin32HandleInfo", "VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR", pGetWin32HandleInfo, VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR, true, VALIDATION_ERROR_3b02b00b);

    if (pGetWin32HandleInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetSemaphoreWin32HandleKHR", "pGetWin32HandleInfo->pNext", NULL, pGetWin32HandleInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_3b01c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkGetSemaphoreWin32HandleKHR", "pGetWin32HandleInfo->semaphore", pGetWin32HandleInfo->semaphore);

        skipCall |= validate_flags(layer_data->report_data, "vkGetSemaphoreWin32HandleKHR", "pGetWin32HandleInfo->handleType", "VkExternalSemaphoreHandleTypeFlagBitsKHR", AllVkExternalSemaphoreHandleTypeFlagBitsKHR, pGetWin32HandleInfo->handleType, true, true, VALIDATION_ERROR_3b009c01);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetSemaphoreWin32HandleKHR", "pHandle", pHandle, VALIDATION_ERROR_30417c01);

    return skipCall;
}

#endif // VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkImportSemaphoreFdKHR(
    layer_data*                                 layer_data,
    const VkImportSemaphoreFdInfoKHR*           pImportSemaphoreFdInfo)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_external_semaphore) skipCall |= OutputExtensionError(layer_data, "vkImportSemaphoreFdKHR", VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_semaphore_capabilities) skipCall |= OutputExtensionError(layer_data, "vkImportSemaphoreFdKHR", VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_semaphore_fd) skipCall |= OutputExtensionError(layer_data, "vkImportSemaphoreFdKHR", VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkImportSemaphoreFdKHR", "pImportSemaphoreFdInfo", "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR", pImportSemaphoreFdInfo, VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR, true, VALIDATION_ERROR_0b42b00b);

    if (pImportSemaphoreFdInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkImportSemaphoreFdKHR", "pImportSemaphoreFdInfo->pNext", NULL, pImportSemaphoreFdInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0b41c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkImportSemaphoreFdKHR", "pImportSemaphoreFdInfo->semaphore", pImportSemaphoreFdInfo->semaphore);

        skipCall |= validate_flags(layer_data->report_data, "vkImportSemaphoreFdKHR", "pImportSemaphoreFdInfo->flags", "VkSemaphoreImportFlagBitsKHR", AllVkSemaphoreImportFlagBitsKHR, pImportSemaphoreFdInfo->flags, false, false, VALIDATION_ERROR_0b409001);

        skipCall |= validate_flags(layer_data->report_data, "vkImportSemaphoreFdKHR", "pImportSemaphoreFdInfo->handleType", "VkExternalSemaphoreHandleTypeFlagBitsKHR", AllVkExternalSemaphoreHandleTypeFlagBitsKHR, pImportSemaphoreFdInfo->handleType, true, true, VALIDATION_ERROR_0b409c01);
    }

    return skipCall;
}

static bool parameter_validation_vkGetSemaphoreFdKHR(
    layer_data*                                 layer_data,
    const VkSemaphoreGetFdInfoKHR*              pGetFdInfo,
    int*                                        pFd)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_external_semaphore) skipCall |= OutputExtensionError(layer_data, "vkGetSemaphoreFdKHR", VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_semaphore_capabilities) skipCall |= OutputExtensionError(layer_data, "vkGetSemaphoreFdKHR", VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_semaphore_fd) skipCall |= OutputExtensionError(layer_data, "vkGetSemaphoreFdKHR", VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetSemaphoreFdKHR", "pGetFdInfo", "VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR", pGetFdInfo, VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR, true, VALIDATION_ERROR_3ae2b00b);

    if (pGetFdInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetSemaphoreFdKHR", "pGetFdInfo->pNext", NULL, pGetFdInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_3ae1c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkGetSemaphoreFdKHR", "pGetFdInfo->semaphore", pGetFdInfo->semaphore);

        skipCall |= validate_flags(layer_data->report_data, "vkGetSemaphoreFdKHR", "pGetFdInfo->handleType", "VkExternalSemaphoreHandleTypeFlagBitsKHR", AllVkExternalSemaphoreHandleTypeFlagBitsKHR, pGetFdInfo->handleType, true, true, VALIDATION_ERROR_3ae09c01);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetSemaphoreFdKHR", "pFd", pFd, VALIDATION_ERROR_30216c01);

    return skipCall;
}



static bool parameter_validation_vkCmdPushDescriptorSetKHR(
    layer_data*                                 layer_data,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites)
{
    UNUSED_PARAMETER(set);

    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_get_physical_device_properties_2) skipCall |= OutputExtensionError(layer_data, "vkCmdPushDescriptorSetKHR", VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_push_descriptor) skipCall |= OutputExtensionError(layer_data, "vkCmdPushDescriptorSetKHR", VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdPushDescriptorSetKHR", "pipelineBindPoint", "VkPipelineBindPoint", VK_PIPELINE_BIND_POINT_BEGIN_RANGE, VK_PIPELINE_BIND_POINT_END_RANGE, pipelineBindPoint, VALIDATION_ERROR_1be27e01);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdPushDescriptorSetKHR", "layout", layout);

    skipCall |= validate_array(layer_data->report_data, "vkCmdPushDescriptorSetKHR", "descriptorWriteCount", "pDescriptorWrites", descriptorWriteCount, pDescriptorWrites, true, true, VALIDATION_ERROR_1be0541b, VALIDATION_ERROR_1be13601);

    if (pDescriptorWrites != NULL)
    {
        for (uint32_t descriptorWriteIndex = 0; descriptorWriteIndex < descriptorWriteCount; ++descriptorWriteIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkCmdPushDescriptorSetKHR", ParameterName("pDescriptorWrites[%i].pNext", ParameterName::IndexVector{ descriptorWriteIndex }), NULL, pDescriptorWrites[descriptorWriteIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_15c1c40d);

            skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdPushDescriptorSetKHR", ParameterName("pDescriptorWrites[%i].descriptorType", ParameterName::IndexVector{ descriptorWriteIndex }), "VkDescriptorType", VK_DESCRIPTOR_TYPE_BEGIN_RANGE, VK_DESCRIPTOR_TYPE_END_RANGE, pDescriptorWrites[descriptorWriteIndex].descriptorType, VALIDATION_ERROR_15c04e01);
        }
    }

    return skipCall;
}







static bool parameter_validation_vkCreateDescriptorUpdateTemplateKHR(
    layer_data*                                 layer_data,
    const VkDescriptorUpdateTemplateCreateInfoKHR* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorUpdateTemplateKHR*              pDescriptorUpdateTemplate)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_descriptor_update_template) skipCall |= OutputExtensionError(layer_data, "vkCreateDescriptorUpdateTemplateKHR", VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateDescriptorUpdateTemplateKHR", "pCreateInfo", "VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR", pCreateInfo, VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR, true, VALIDATION_ERROR_0522b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateDescriptorUpdateTemplateKHR", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0521c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateDescriptorUpdateTemplateKHR", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_05209005);

        skipCall |= validate_array(layer_data->report_data, "vkCreateDescriptorUpdateTemplateKHR", "pCreateInfo->descriptorUpdateEntryCount", "pCreateInfo->pDescriptorUpdateEntries", pCreateInfo->descriptorUpdateEntryCount, pCreateInfo->pDescriptorUpdateEntries, true, true, VALIDATION_ERROR_0520501b, VALIDATION_ERROR_05213201);

        if (pCreateInfo->pDescriptorUpdateEntries != NULL)
        {
            for (uint32_t descriptorUpdateEntryIndex = 0; descriptorUpdateEntryIndex < pCreateInfo->descriptorUpdateEntryCount; ++descriptorUpdateEntryIndex)
            {
                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateDescriptorUpdateTemplateKHR", ParameterName("pCreateInfo->pDescriptorUpdateEntries[%i].descriptorType", ParameterName::IndexVector{ descriptorUpdateEntryIndex }), "VkDescriptorType", VK_DESCRIPTOR_TYPE_BEGIN_RANGE, VK_DESCRIPTOR_TYPE_END_RANGE, pCreateInfo->pDescriptorUpdateEntries[descriptorUpdateEntryIndex].descriptorType, VALIDATION_ERROR_05404e01);
            }
        }

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateDescriptorUpdateTemplateKHR", "pCreateInfo->templateType", "VkDescriptorUpdateTemplateTypeKHR", VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_BEGIN_RANGE_KHR, VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_END_RANGE_KHR, pCreateInfo->templateType, VALIDATION_ERROR_0522f801);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateDescriptorUpdateTemplateKHR", "pCreateInfo->pipelineBindPoint", "VkPipelineBindPoint", VK_PIPELINE_BIND_POINT_BEGIN_RANGE, VK_PIPELINE_BIND_POINT_END_RANGE, pCreateInfo->pipelineBindPoint, VALIDATION_ERROR_05227e01);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDescriptorUpdateTemplateKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDescriptorUpdateTemplateKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDescriptorUpdateTemplateKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateDescriptorUpdateTemplateKHR", "pDescriptorUpdateTemplate", pDescriptorUpdateTemplate, VALIDATION_ERROR_1fa13401);

    return skipCall;
}

static bool parameter_validation_vkDestroyDescriptorUpdateTemplateKHR(
    layer_data*                                 layer_data,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    const VkAllocationCallbacks*                pAllocator)
{
    UNUSED_PARAMETER(descriptorUpdateTemplate);

    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_descriptor_update_template) skipCall |= OutputExtensionError(layer_data, "vkDestroyDescriptorUpdateTemplateKHR", VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME);

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDescriptorUpdateTemplateKHR", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDescriptorUpdateTemplateKHR", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDescriptorUpdateTemplateKHR", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkUpdateDescriptorSetWithTemplateKHR(
    layer_data*                                 layer_data,
    VkDescriptorSet                             descriptorSet,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    const void*                                 pData)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_descriptor_update_template) skipCall |= OutputExtensionError(layer_data, "vkUpdateDescriptorSetWithTemplateKHR", VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkUpdateDescriptorSetWithTemplateKHR", "descriptorSet", descriptorSet);

    skipCall |= validate_required_handle(layer_data->report_data, "vkUpdateDescriptorSetWithTemplateKHR", "descriptorUpdateTemplate", descriptorUpdateTemplate);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkUpdateDescriptorSetWithTemplateKHR", "pData", pData, VALIDATION_ERROR_33a12201);

    return skipCall;
}

static bool parameter_validation_vkCmdPushDescriptorSetWithTemplateKHR(
    layer_data*                                 layer_data,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    const void*                                 pData)
{
    UNUSED_PARAMETER(set);

    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_descriptor_update_template) skipCall |= OutputExtensionError(layer_data, "vkCmdPushDescriptorSetWithTemplateKHR", VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdPushDescriptorSetWithTemplateKHR", "descriptorUpdateTemplate", descriptorUpdateTemplate);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdPushDescriptorSetWithTemplateKHR", "layout", layout);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCmdPushDescriptorSetWithTemplateKHR", "pData", pData, VALIDATION_ERROR_1c012201);

    return skipCall;
}



static bool parameter_validation_vkGetSwapchainStatusKHR(
    layer_data*                                 layer_data,
    VkSwapchainKHR                              swapchain)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_get_surface_capabilities_2) skipCall |= OutputExtensionError(layer_data, "vkGetSwapchainStatusKHR", VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_get_physical_device_properties_2) skipCall |= OutputExtensionError(layer_data, "vkGetSwapchainStatusKHR", VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkGetSwapchainStatusKHR", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_surface) skipCall |= OutputExtensionError(layer_data, "vkGetSwapchainStatusKHR", VK_KHR_SURFACE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_shared_presentable_image) skipCall |= OutputExtensionError(layer_data, "vkGetSwapchainStatusKHR", VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetSwapchainStatusKHR", "swapchain", swapchain);

    return skipCall;
}



static bool parameter_validation_vkGetPhysicalDeviceExternalFencePropertiesKHR(
    instance_layer_data*                        layer_data,
    const VkPhysicalDeviceExternalFenceInfoKHR* pExternalFenceInfo,
    VkExternalFencePropertiesKHR*               pExternalFenceProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceExternalFencePropertiesKHR", "pExternalFenceInfo", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO_KHR", pExternalFenceInfo, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO_KHR, true, VALIDATION_ERROR_3962b00b);

    if (pExternalFenceInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetPhysicalDeviceExternalFencePropertiesKHR", "pExternalFenceInfo->pNext", NULL, pExternalFenceInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_3961c40d);

        skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceExternalFencePropertiesKHR", "pExternalFenceInfo->handleType", "VkExternalFenceHandleTypeFlagBitsKHR", AllVkExternalFenceHandleTypeFlagBitsKHR, pExternalFenceInfo->handleType, true, true, VALIDATION_ERROR_39609c01);
    }

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceExternalFencePropertiesKHR", "pExternalFenceProperties", "VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES_KHR", pExternalFenceProperties, VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES_KHR, true, VALIDATION_ERROR_3982b00b);

    return skipCall;
}





#ifdef VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkImportFenceWin32HandleKHR(
    layer_data*                                 layer_data,
    const VkImportFenceWin32HandleInfoKHR*      pImportFenceWin32HandleInfo)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_external_fence) skipCall |= OutputExtensionError(layer_data, "vkImportFenceWin32HandleKHR", VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_fence_win32) skipCall |= OutputExtensionError(layer_data, "vkImportFenceWin32HandleKHR", VK_KHR_EXTERNAL_FENCE_WIN32_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkImportFenceWin32HandleKHR", "pImportFenceWin32HandleInfo", "VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR", pImportFenceWin32HandleInfo, VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR, true, VALIDATION_ERROR_3a42b00b);

    if (pImportFenceWin32HandleInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkImportFenceWin32HandleKHR", "pImportFenceWin32HandleInfo->pNext", NULL, pImportFenceWin32HandleInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_3a41c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkImportFenceWin32HandleKHR", "pImportFenceWin32HandleInfo->fence", pImportFenceWin32HandleInfo->fence);

        skipCall |= validate_flags(layer_data->report_data, "vkImportFenceWin32HandleKHR", "pImportFenceWin32HandleInfo->flags", "VkFenceImportFlagBitsKHR", AllVkFenceImportFlagBitsKHR, pImportFenceWin32HandleInfo->flags, false, false, VALIDATION_ERROR_3a409001);

        skipCall |= validate_flags(layer_data->report_data, "vkImportFenceWin32HandleKHR", "pImportFenceWin32HandleInfo->handleType", "VkExternalFenceHandleTypeFlagBitsKHR", AllVkExternalFenceHandleTypeFlagBitsKHR, pImportFenceWin32HandleInfo->handleType, false, true, VALIDATION_ERROR_3a409c01);
    }

    return skipCall;
}

static bool parameter_validation_vkGetFenceWin32HandleKHR(
    layer_data*                                 layer_data,
    const VkFenceGetWin32HandleInfoKHR*         pGetWin32HandleInfo,
    HANDLE*                                     pHandle)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_external_fence) skipCall |= OutputExtensionError(layer_data, "vkGetFenceWin32HandleKHR", VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_fence_win32) skipCall |= OutputExtensionError(layer_data, "vkGetFenceWin32HandleKHR", VK_KHR_EXTERNAL_FENCE_WIN32_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetFenceWin32HandleKHR", "pGetWin32HandleInfo", "VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR", pGetWin32HandleInfo, VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR, true, VALIDATION_ERROR_3a82b00b);

    if (pGetWin32HandleInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetFenceWin32HandleKHR", "pGetWin32HandleInfo->pNext", NULL, pGetWin32HandleInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_3a81c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkGetFenceWin32HandleKHR", "pGetWin32HandleInfo->fence", pGetWin32HandleInfo->fence);

        skipCall |= validate_flags(layer_data->report_data, "vkGetFenceWin32HandleKHR", "pGetWin32HandleInfo->handleType", "VkExternalFenceHandleTypeFlagBitsKHR", AllVkExternalFenceHandleTypeFlagBitsKHR, pGetWin32HandleInfo->handleType, true, true, VALIDATION_ERROR_3a809c01);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetFenceWin32HandleKHR", "pHandle", pHandle, VALIDATION_ERROR_3ac17c01);

    return skipCall;
}

#endif // VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkImportFenceFdKHR(
    layer_data*                                 layer_data,
    const VkImportFenceFdInfoKHR*               pImportFenceFdInfo)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_external_fence) skipCall |= OutputExtensionError(layer_data, "vkImportFenceFdKHR", VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_fence_fd) skipCall |= OutputExtensionError(layer_data, "vkImportFenceFdKHR", VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkImportFenceFdKHR", "pImportFenceFdInfo", "VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR", pImportFenceFdInfo, VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR, true, VALIDATION_ERROR_39c2b00b);

    if (pImportFenceFdInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkImportFenceFdKHR", "pImportFenceFdInfo->pNext", NULL, pImportFenceFdInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_39c1c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkImportFenceFdKHR", "pImportFenceFdInfo->fence", pImportFenceFdInfo->fence);

        skipCall |= validate_flags(layer_data->report_data, "vkImportFenceFdKHR", "pImportFenceFdInfo->flags", "VkFenceImportFlagBitsKHR", AllVkFenceImportFlagBitsKHR, pImportFenceFdInfo->flags, false, false, VALIDATION_ERROR_39c09001);

        skipCall |= validate_flags(layer_data->report_data, "vkImportFenceFdKHR", "pImportFenceFdInfo->handleType", "VkExternalFenceHandleTypeFlagBitsKHR", AllVkExternalFenceHandleTypeFlagBitsKHR, pImportFenceFdInfo->handleType, true, true, VALIDATION_ERROR_39c09c01);
    }

    return skipCall;
}

static bool parameter_validation_vkGetFenceFdKHR(
    layer_data*                                 layer_data,
    const VkFenceGetFdInfoKHR*                  pGetFdInfo,
    int*                                        pFd)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_external_fence) skipCall |= OutputExtensionError(layer_data, "vkGetFenceFdKHR", VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_external_fence_fd) skipCall |= OutputExtensionError(layer_data, "vkGetFenceFdKHR", VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetFenceFdKHR", "pGetFdInfo", "VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR", pGetFdInfo, VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR, true, VALIDATION_ERROR_39e2b00b);

    if (pGetFdInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetFenceFdKHR", "pGetFdInfo->pNext", NULL, pGetFdInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_39e1c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkGetFenceFdKHR", "pGetFdInfo->fence", pGetFdInfo->fence);

        skipCall |= validate_flags(layer_data->report_data, "vkGetFenceFdKHR", "pGetFdInfo->handleType", "VkExternalFenceHandleTypeFlagBitsKHR", AllVkExternalFenceHandleTypeFlagBitsKHR, pGetFdInfo->handleType, true, true, VALIDATION_ERROR_39e09c01);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetFenceFdKHR", "pFd", pFd, VALIDATION_ERROR_3a216c01);

    return skipCall;
}



static bool parameter_validation_vkGetPhysicalDeviceSurfaceCapabilities2KHR(
    instance_layer_data*                        layer_data,
    const VkPhysicalDeviceSurfaceInfo2KHR*      pSurfaceInfo,
    VkSurfaceCapabilities2KHR*                  pSurfaceCapabilities)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceSurfaceCapabilities2KHR", "pSurfaceInfo", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR", pSurfaceInfo, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR, true, VALIDATION_ERROR_0ee2b00b);

    if (pSurfaceInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetPhysicalDeviceSurfaceCapabilities2KHR", "pSurfaceInfo->pNext", NULL, pSurfaceInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0ee1c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkGetPhysicalDeviceSurfaceCapabilities2KHR", "pSurfaceInfo->surface", pSurfaceInfo->surface);
    }

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceSurfaceCapabilities2KHR", "pSurfaceCapabilities", "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR", pSurfaceCapabilities, VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR, true, VALIDATION_ERROR_3482b00b);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceSurfaceFormats2KHR(
    instance_layer_data*                        layer_data,
    const VkPhysicalDeviceSurfaceInfo2KHR*      pSurfaceInfo,
    uint32_t*                                   pSurfaceFormatCount,
    VkSurfaceFormat2KHR*                        pSurfaceFormats)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceSurfaceFormats2KHR", "pSurfaceInfo", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR", pSurfaceInfo, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR, true, VALIDATION_ERROR_0ee2b00b);

    if (pSurfaceInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetPhysicalDeviceSurfaceFormats2KHR", "pSurfaceInfo->pNext", NULL, pSurfaceInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0ee1c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkGetPhysicalDeviceSurfaceFormats2KHR", "pSurfaceInfo->surface", pSurfaceInfo->surface);
    }

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkGetPhysicalDeviceSurfaceFormats2KHR", "pSurfaceFormatCount", "pSurfaceFormats", "VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR", pSurfaceFormatCount, pSurfaceFormats, VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR, true, false, false, VALIDATION_ERROR_2e824e01);

    return skipCall;
}









static bool parameter_validation_vkGetImageMemoryRequirements2KHR(
    layer_data*                                 layer_data,
    const VkImageMemoryRequirementsInfo2KHR*    pInfo,
    VkMemoryRequirements2KHR*                   pMemoryRequirements)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_get_memory_requirements_2) skipCall |= OutputExtensionError(layer_data, "vkGetImageMemoryRequirements2KHR", VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetImageMemoryRequirements2KHR", "pInfo", "VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2_KHR", pInfo, VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2_KHR, true, VALIDATION_ERROR_3bc2b00b);

    if (pInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetImageMemoryRequirements2KHR", "pInfo->pNext", NULL, pInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_3bc1c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkGetImageMemoryRequirements2KHR", "pInfo->image", pInfo->image);
    }

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetImageMemoryRequirements2KHR", "pMemoryRequirements", "VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR", pMemoryRequirements, VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR, true, VALIDATION_ERROR_3c02b00b);

    return skipCall;
}

static bool parameter_validation_vkGetBufferMemoryRequirements2KHR(
    layer_data*                                 layer_data,
    const VkBufferMemoryRequirementsInfo2KHR*   pInfo,
    VkMemoryRequirements2KHR*                   pMemoryRequirements)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_get_memory_requirements_2) skipCall |= OutputExtensionError(layer_data, "vkGetBufferMemoryRequirements2KHR", VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetBufferMemoryRequirements2KHR", "pInfo", "VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2_KHR", pInfo, VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2_KHR, true, VALIDATION_ERROR_3ba2b00b);

    if (pInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetBufferMemoryRequirements2KHR", "pInfo->pNext", NULL, pInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_3ba1c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkGetBufferMemoryRequirements2KHR", "pInfo->buffer", pInfo->buffer);
    }

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetBufferMemoryRequirements2KHR", "pMemoryRequirements", "VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR", pMemoryRequirements, VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR, true, VALIDATION_ERROR_3c02b00b);

    return skipCall;
}

static bool parameter_validation_vkGetImageSparseMemoryRequirements2KHR(
    layer_data*                                 layer_data,
    const VkImageSparseMemoryRequirementsInfo2KHR* pInfo,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2KHR*        pSparseMemoryRequirements)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_get_memory_requirements_2) skipCall |= OutputExtensionError(layer_data, "vkGetImageSparseMemoryRequirements2KHR", VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetImageSparseMemoryRequirements2KHR", "pInfo", "VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2_KHR", pInfo, VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2_KHR, true, VALIDATION_ERROR_UNDEFINED);

    if (pInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkGetImageSparseMemoryRequirements2KHR", "pInfo->pNext", NULL, pInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_UNDEFINED);

        skipCall |= validate_required_handle(layer_data->report_data, "vkGetImageSparseMemoryRequirements2KHR", "pInfo->image", pInfo->image);
    }

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkGetImageSparseMemoryRequirements2KHR", "pSparseMemoryRequirementCount", "pSparseMemoryRequirements", "VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2_KHR", pSparseMemoryRequirementCount, pSparseMemoryRequirements, VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2_KHR, true, false, false, VALIDATION_ERROR_UNDEFINED);

    return skipCall;
}



static bool parameter_validation_vkDestroyDebugReportCallbackEXT(
    instance_layer_data*                        layer_data,
    VkDebugReportCallbackEXT                    callback,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkDestroyDebugReportCallbackEXT", "callback", callback);

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDebugReportCallbackEXT", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDebugReportCallbackEXT", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyDebugReportCallbackEXT", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}













static bool parameter_validation_vkDebugMarkerSetObjectTagEXT(
    layer_data*                                 layer_data,
    VkDebugMarkerObjectTagInfoEXT*              pTagInfo)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_ext_debug_report) skipCall |= OutputExtensionError(layer_data, "vkDebugMarkerSetObjectTagEXT", VK_EXT_DEBUG_REPORT_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_debug_marker) skipCall |= OutputExtensionError(layer_data, "vkDebugMarkerSetObjectTagEXT", VK_EXT_DEBUG_MARKER_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkDebugMarkerSetObjectTagEXT", "pTagInfo", "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT", pTagInfo, VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT, true, VALIDATION_ERROR_03a2b00b);

    return skipCall;
}

static bool parameter_validation_vkDebugMarkerSetObjectNameEXT(
    layer_data*                                 layer_data,
    VkDebugMarkerObjectNameInfoEXT*             pNameInfo)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_ext_debug_report) skipCall |= OutputExtensionError(layer_data, "vkDebugMarkerSetObjectNameEXT", VK_EXT_DEBUG_REPORT_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_debug_marker) skipCall |= OutputExtensionError(layer_data, "vkDebugMarkerSetObjectNameEXT", VK_EXT_DEBUG_MARKER_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkDebugMarkerSetObjectNameEXT", "pNameInfo", "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT", pNameInfo, VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT, true, VALIDATION_ERROR_0382b00b);

    return skipCall;
}

static bool parameter_validation_vkCmdDebugMarkerBeginEXT(
    layer_data*                                 layer_data,
    VkDebugMarkerMarkerInfoEXT*                 pMarkerInfo)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_ext_debug_report) skipCall |= OutputExtensionError(layer_data, "vkCmdDebugMarkerBeginEXT", VK_EXT_DEBUG_REPORT_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_debug_marker) skipCall |= OutputExtensionError(layer_data, "vkCmdDebugMarkerBeginEXT", VK_EXT_DEBUG_MARKER_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkCmdDebugMarkerBeginEXT", "pMarkerInfo", "VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT", pMarkerInfo, VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT, true, VALIDATION_ERROR_0362b00b);

    return skipCall;
}

static bool parameter_validation_vkCmdDebugMarkerEndEXT(
    layer_data*                                 layer_data)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_ext_debug_report) skipCall |= OutputExtensionError(layer_data, "vkCmdDebugMarkerEndEXT", VK_EXT_DEBUG_REPORT_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_debug_marker) skipCall |= OutputExtensionError(layer_data, "vkCmdDebugMarkerEndEXT", VK_EXT_DEBUG_MARKER_EXTENSION_NAME);

    return skipCall;
}

static bool parameter_validation_vkCmdDebugMarkerInsertEXT(
    layer_data*                                 layer_data,
    VkDebugMarkerMarkerInfoEXT*                 pMarkerInfo)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_ext_debug_report) skipCall |= OutputExtensionError(layer_data, "vkCmdDebugMarkerInsertEXT", VK_EXT_DEBUG_REPORT_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_debug_marker) skipCall |= OutputExtensionError(layer_data, "vkCmdDebugMarkerInsertEXT", VK_EXT_DEBUG_MARKER_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkCmdDebugMarkerInsertEXT", "pMarkerInfo", "VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT", pMarkerInfo, VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT, true, VALIDATION_ERROR_0362b00b);

    return skipCall;
}







static bool parameter_validation_vkCmdDrawIndirectCountAMD(
    layer_data*                                 layer_data,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    UNUSED_PARAMETER(offset);
    UNUSED_PARAMETER(countBufferOffset);
    UNUSED_PARAMETER(maxDrawCount);
    UNUSED_PARAMETER(stride);

    bool skipCall = false;

    if (!layer_data->extensions.vk_amd_draw_indirect_count) skipCall |= OutputExtensionError(layer_data, "vkCmdDrawIndirectCountAMD", VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdDrawIndirectCountAMD", "buffer", buffer);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdDrawIndirectCountAMD", "countBuffer", countBuffer);

    return skipCall;
}

static bool parameter_validation_vkCmdDrawIndexedIndirectCountAMD(
    layer_data*                                 layer_data,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    UNUSED_PARAMETER(offset);
    UNUSED_PARAMETER(countBufferOffset);
    UNUSED_PARAMETER(maxDrawCount);
    UNUSED_PARAMETER(stride);

    bool skipCall = false;

    if (!layer_data->extensions.vk_amd_draw_indirect_count) skipCall |= OutputExtensionError(layer_data, "vkCmdDrawIndexedIndirectCountAMD", VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdDrawIndexedIndirectCountAMD", "buffer", buffer);

    skipCall |= validate_required_handle(layer_data->report_data, "vkCmdDrawIndexedIndirectCountAMD", "countBuffer", countBuffer);

    return skipCall;
}















static bool parameter_validation_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
    instance_layer_data*                        layer_data,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkExternalMemoryHandleTypeFlagsNV           externalHandleType,
    VkExternalImageFormatPropertiesNV*          pExternalImageFormatProperties)
{
    bool skipCall = false;

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "format", "VkFormat", VK_FORMAT_BEGIN_RANGE, VK_FORMAT_END_RANGE, format, VALIDATION_ERROR_2bc09201);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "type", "VkImageType", VK_IMAGE_TYPE_BEGIN_RANGE, VK_IMAGE_TYPE_END_RANGE, type, VALIDATION_ERROR_2bc30401);

    skipCall |= validate_ranged_enum(layer_data->report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "tiling", "VkImageTiling", VK_IMAGE_TILING_BEGIN_RANGE, VK_IMAGE_TILING_END_RANGE, tiling, VALIDATION_ERROR_2bc2fa01);

    skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "usage", "VkImageUsageFlagBits", AllVkImageUsageFlagBits, usage, true, false, VALIDATION_ERROR_2bc30603);

    skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "flags", "VkImageCreateFlagBits", AllVkImageCreateFlagBits, flags, false, false, VALIDATION_ERROR_2bc09001);

    skipCall |= validate_flags(layer_data->report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "externalHandleType", "VkExternalMemoryHandleTypeFlagBitsNV", AllVkExternalMemoryHandleTypeFlagBitsNV, externalHandleType, false, false, VALIDATION_ERROR_2bc08201);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", "pExternalImageFormatProperties", pExternalImageFormatProperties, VALIDATION_ERROR_2bc16601);

    return skipCall;
}





#ifdef VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkGetMemoryWin32HandleNV(
    layer_data*                                 layer_data,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    HANDLE*                                     pHandle)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_nv_external_memory) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryWin32HandleNV", VK_NV_EXTERNAL_MEMORY_EXTENSION_NAME);

    if (!layer_data->extensions.vk_nv_external_memory_capabilities) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryWin32HandleNV", VK_NV_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME);

    if (!layer_data->extensions.vk_nv_external_memory_win32) skipCall |= OutputExtensionError(layer_data, "vkGetMemoryWin32HandleNV", VK_NV_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetMemoryWin32HandleNV", "memory", memory);

    skipCall |= validate_flags(layer_data->report_data, "vkGetMemoryWin32HandleNV", "handleType", "VkExternalMemoryHandleTypeFlagBitsNV", AllVkExternalMemoryHandleTypeFlagBitsNV, handleType, true, false, VALIDATION_ERROR_2b009c03);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetMemoryWin32HandleNV", "pHandle", pHandle, VALIDATION_ERROR_2b017c01);

    return skipCall;
}

#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

#endif // VK_USE_PLATFORM_WIN32_KHR

static bool parameter_validation_vkGetDeviceGroupPeerMemoryFeaturesKHX(
    layer_data*                                 layer_data,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    VkPeerMemoryFeatureFlagsKHX*                pPeerMemoryFeatures)
{
    UNUSED_PARAMETER(heapIndex);
    UNUSED_PARAMETER(localDeviceIndex);
    UNUSED_PARAMETER(remoteDeviceIndex);

    bool skipCall = false;

    if (!layer_data->extensions.vk_khx_device_group_creation) skipCall |= OutputExtensionError(layer_data, "vkGetDeviceGroupPeerMemoryFeaturesKHX", VK_KHX_DEVICE_GROUP_CREATION_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkGetDeviceGroupPeerMemoryFeaturesKHX", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khx_device_group) skipCall |= OutputExtensionError(layer_data, "vkGetDeviceGroupPeerMemoryFeaturesKHX", VK_KHX_DEVICE_GROUP_EXTENSION_NAME);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetDeviceGroupPeerMemoryFeaturesKHX", "pPeerMemoryFeatures", pPeerMemoryFeatures, VALIDATION_ERROR_28c1d401);

    return skipCall;
}

static bool parameter_validation_vkBindBufferMemory2KHX(
    layer_data*                                 layer_data,
    uint32_t                                    bindInfoCount,
    const VkBindBufferMemoryInfoKHX*            pBindInfos)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khx_device_group_creation) skipCall |= OutputExtensionError(layer_data, "vkBindBufferMemory2KHX", VK_KHX_DEVICE_GROUP_CREATION_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkBindBufferMemory2KHX", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khx_device_group) skipCall |= OutputExtensionError(layer_data, "vkBindBufferMemory2KHX", VK_KHX_DEVICE_GROUP_EXTENSION_NAME);

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkBindBufferMemory2KHX", "bindInfoCount", "pBindInfos", "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHX", bindInfoCount, pBindInfos, VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHX, true, true, VALIDATION_ERROR_1720fa01);

    if (pBindInfos != NULL)
    {
        for (uint32_t bindInfoIndex = 0; bindInfoIndex < bindInfoCount; ++bindInfoIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkBindBufferMemory2KHX", ParameterName("pBindInfos[%i].pNext", ParameterName::IndexVector{ bindInfoIndex }), NULL, pBindInfos[bindInfoIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_00c1c40d);

            skipCall |= validate_required_handle(layer_data->report_data, "vkBindBufferMemory2KHX", ParameterName("pBindInfos[%i].buffer", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].buffer);

            skipCall |= validate_required_handle(layer_data->report_data, "vkBindBufferMemory2KHX", ParameterName("pBindInfos[%i].memory", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].memory);

            skipCall |= validate_array(layer_data->report_data, "vkBindBufferMemory2KHX", ParameterName("pBindInfos[%i].deviceIndexCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfos[%i].pDeviceIndices", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].deviceIndexCount, pBindInfos[bindInfoIndex].pDeviceIndices, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_00c13e01);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkBindImageMemory2KHX(
    layer_data*                                 layer_data,
    uint32_t                                    bindInfoCount,
    const VkBindImageMemoryInfoKHX*             pBindInfos)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khx_device_group_creation) skipCall |= OutputExtensionError(layer_data, "vkBindImageMemory2KHX", VK_KHX_DEVICE_GROUP_CREATION_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkBindImageMemory2KHX", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khx_device_group) skipCall |= OutputExtensionError(layer_data, "vkBindImageMemory2KHX", VK_KHX_DEVICE_GROUP_EXTENSION_NAME);

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkBindImageMemory2KHX", "bindInfoCount", "pBindInfos", "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHX", bindInfoCount, pBindInfos, VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHX, true, true, VALIDATION_ERROR_1760fa01);

    if (pBindInfos != NULL)
    {
        for (uint32_t bindInfoIndex = 0; bindInfoIndex < bindInfoCount; ++bindInfoIndex)
        {
            const VkStructureType allowed_structs_VkBindImageMemoryInfoKHX[] = { VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHX };

            skipCall |= validate_struct_pnext(layer_data->report_data, "vkBindImageMemory2KHX", ParameterName("pBindInfos[%i].pNext", ParameterName::IndexVector{ bindInfoIndex }), "VkBindImageMemorySwapchainInfoKHX", pBindInfos[bindInfoIndex].pNext, ARRAY_SIZE(allowed_structs_VkBindImageMemoryInfoKHX), allowed_structs_VkBindImageMemoryInfoKHX, GeneratedHeaderVersion, VALIDATION_ERROR_00e1c40d);

            skipCall |= validate_required_handle(layer_data->report_data, "vkBindImageMemory2KHX", ParameterName("pBindInfos[%i].image", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].image);

            skipCall |= validate_required_handle(layer_data->report_data, "vkBindImageMemory2KHX", ParameterName("pBindInfos[%i].memory", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].memory);

            skipCall |= validate_array(layer_data->report_data, "vkBindImageMemory2KHX", ParameterName("pBindInfos[%i].deviceIndexCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfos[%i].pDeviceIndices", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].deviceIndexCount, pBindInfos[bindInfoIndex].pDeviceIndices, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_00e13e01);

            skipCall |= validate_array(layer_data->report_data, "vkBindImageMemory2KHX", ParameterName("pBindInfos[%i].SFRRectCount", ParameterName::IndexVector{ bindInfoIndex }), ParameterName("pBindInfos[%i].pSFRRects", ParameterName::IndexVector{ bindInfoIndex }), pBindInfos[bindInfoIndex].SFRRectCount, pBindInfos[bindInfoIndex].pSFRRects, false, true, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_00e22001);
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdSetDeviceMaskKHX(
    layer_data*                                 layer_data,
    uint32_t                                    deviceMask)
{
    UNUSED_PARAMETER(deviceMask);

    bool skipCall = false;

    if (!layer_data->extensions.vk_khx_device_group_creation) skipCall |= OutputExtensionError(layer_data, "vkCmdSetDeviceMaskKHX", VK_KHX_DEVICE_GROUP_CREATION_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkCmdSetDeviceMaskKHX", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khx_device_group) skipCall |= OutputExtensionError(layer_data, "vkCmdSetDeviceMaskKHX", VK_KHX_DEVICE_GROUP_EXTENSION_NAME);

    return skipCall;
}

static bool parameter_validation_vkGetDeviceGroupPresentCapabilitiesKHX(
    layer_data*                                 layer_data,
    VkDeviceGroupPresentCapabilitiesKHX*        pDeviceGroupPresentCapabilities)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khx_device_group_creation) skipCall |= OutputExtensionError(layer_data, "vkGetDeviceGroupPresentCapabilitiesKHX", VK_KHX_DEVICE_GROUP_CREATION_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkGetDeviceGroupPresentCapabilitiesKHX", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khx_device_group) skipCall |= OutputExtensionError(layer_data, "vkGetDeviceGroupPresentCapabilitiesKHX", VK_KHX_DEVICE_GROUP_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetDeviceGroupPresentCapabilitiesKHX", "pDeviceGroupPresentCapabilities", "VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHX", pDeviceGroupPresentCapabilities, VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHX, true, VALIDATION_ERROR_34a2b00b);

    return skipCall;
}

static bool parameter_validation_vkGetDeviceGroupSurfacePresentModesKHX(
    layer_data*                                 layer_data,
    VkSurfaceKHR                                surface,
    VkDeviceGroupPresentModeFlagsKHX*           pModes)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khx_device_group_creation) skipCall |= OutputExtensionError(layer_data, "vkGetDeviceGroupSurfacePresentModesKHX", VK_KHX_DEVICE_GROUP_CREATION_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkGetDeviceGroupSurfacePresentModesKHX", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khx_device_group) skipCall |= OutputExtensionError(layer_data, "vkGetDeviceGroupSurfacePresentModesKHX", VK_KHX_DEVICE_GROUP_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetDeviceGroupSurfacePresentModesKHX", "surface", surface);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetDeviceGroupSurfacePresentModesKHX", "pModes", pModes, VALIDATION_ERROR_2901be01);

    return skipCall;
}

static bool parameter_validation_vkAcquireNextImage2KHX(
    layer_data*                                 layer_data,
    const VkAcquireNextImageInfoKHX*            pAcquireInfo,
    uint32_t*                                   pImageIndex)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khx_device_group_creation) skipCall |= OutputExtensionError(layer_data, "vkAcquireNextImage2KHX", VK_KHX_DEVICE_GROUP_CREATION_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkAcquireNextImage2KHX", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khx_device_group) skipCall |= OutputExtensionError(layer_data, "vkAcquireNextImage2KHX", VK_KHX_DEVICE_GROUP_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkAcquireNextImage2KHX", "pAcquireInfo", "VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHX", pAcquireInfo, VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHX, true, VALIDATION_ERROR_0002b00b);

    if (pAcquireInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkAcquireNextImage2KHX", "pAcquireInfo->pNext", NULL, pAcquireInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0001c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkAcquireNextImage2KHX", "pAcquireInfo->swapchain", pAcquireInfo->swapchain);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkAcquireNextImage2KHX", "pImageIndex", pImageIndex, VALIDATION_ERROR_16218601);

    return skipCall;
}

static bool parameter_validation_vkCmdDispatchBaseKHX(
    layer_data*                                 layer_data,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    UNUSED_PARAMETER(baseGroupX);
    UNUSED_PARAMETER(baseGroupY);
    UNUSED_PARAMETER(baseGroupZ);
    UNUSED_PARAMETER(groupCountX);
    UNUSED_PARAMETER(groupCountY);
    UNUSED_PARAMETER(groupCountZ);

    bool skipCall = false;

    if (!layer_data->extensions.vk_khx_device_group_creation) skipCall |= OutputExtensionError(layer_data, "vkCmdDispatchBaseKHX", VK_KHX_DEVICE_GROUP_CREATION_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkCmdDispatchBaseKHX", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khx_device_group) skipCall |= OutputExtensionError(layer_data, "vkCmdDispatchBaseKHX", VK_KHX_DEVICE_GROUP_EXTENSION_NAME);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDevicePresentRectanglesKHX(
    instance_layer_data*                        layer_data,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pRectCount,
    VkRect2D*                                   pRects)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetPhysicalDevicePresentRectanglesKHX", "surface", surface);

    skipCall |= validate_array(layer_data->report_data, "vkGetPhysicalDevicePresentRectanglesKHX", "pRectCount", "pRects", pRectCount, pRects, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2d420e01);

    return skipCall;
}





#ifdef VK_USE_PLATFORM_VI_NN

static bool parameter_validation_vkCreateViSurfaceNN(
    instance_layer_data*                        layer_data,
    const VkViSurfaceCreateInfoNN*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateViSurfaceNN", "pCreateInfo", "VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN", pCreateInfo, VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN, true, VALIDATION_ERROR_14e2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateViSurfaceNN", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_14e1c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateViSurfaceNN", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_14e09005);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateViSurfaceNN", "pCreateInfo->window", pCreateInfo->window, VALIDATION_ERROR_14e30e01);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateViSurfaceNN", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateViSurfaceNN", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateViSurfaceNN", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateViSurfaceNN", "pSurface", pSurface, VALIDATION_ERROR_22c24801);

    return skipCall;
}

#endif // VK_USE_PLATFORM_VI_NN





static bool parameter_validation_vkEnumeratePhysicalDeviceGroupsKHX(
    instance_layer_data*                        layer_data,
    uint32_t*                                   pPhysicalDeviceGroupCount,
    VkPhysicalDeviceGroupPropertiesKHX*         pPhysicalDeviceGroupProperties)
{
    bool skipCall = false;

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkEnumeratePhysicalDeviceGroupsKHX", "pPhysicalDeviceGroupCount", "pPhysicalDeviceGroupProperties", "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHX", pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHX, true, false, false, VALIDATION_ERROR_27e1da01);

    return skipCall;
}



static bool parameter_validation_vkCmdProcessCommandsNVX(
    layer_data*                                 layer_data,
    const VkCmdProcessCommandsInfoNVX*          pProcessCommandsInfo)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_nvx_device_generated_commands) skipCall |= OutputExtensionError(layer_data, "vkCmdProcessCommandsNVX", VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkCmdProcessCommandsNVX", "pProcessCommandsInfo", "VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX", pProcessCommandsInfo, VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX, true, VALIDATION_ERROR_0222b00b);

    if (pProcessCommandsInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCmdProcessCommandsNVX", "pProcessCommandsInfo->pNext", NULL, pProcessCommandsInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0221c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkCmdProcessCommandsNVX", "pProcessCommandsInfo->objectTable", pProcessCommandsInfo->objectTable);

        skipCall |= validate_required_handle(layer_data->report_data, "vkCmdProcessCommandsNVX", "pProcessCommandsInfo->indirectCommandsLayout", pProcessCommandsInfo->indirectCommandsLayout);

        skipCall |= validate_array(layer_data->report_data, "vkCmdProcessCommandsNVX", "pProcessCommandsInfo->indirectCommandsTokenCount", "pProcessCommandsInfo->pIndirectCommandsTokens", pProcessCommandsInfo->indirectCommandsTokenCount, pProcessCommandsInfo->pIndirectCommandsTokens, true, true, VALIDATION_ERROR_0220b61b, VALIDATION_ERROR_02219401);

        if (pProcessCommandsInfo->pIndirectCommandsTokens != NULL)
        {
            for (uint32_t indirectCommandsTokenIndex = 0; indirectCommandsTokenIndex < pProcessCommandsInfo->indirectCommandsTokenCount; ++indirectCommandsTokenIndex)
            {
                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCmdProcessCommandsNVX", ParameterName("pProcessCommandsInfo->pIndirectCommandsTokens[%i].tokenType", ParameterName::IndexVector{ indirectCommandsTokenIndex }), "VkIndirectCommandsTokenTypeNVX", VK_INDIRECT_COMMANDS_TOKEN_TYPE_BEGIN_RANGE_NVX, VK_INDIRECT_COMMANDS_TOKEN_TYPE_END_RANGE_NVX, pProcessCommandsInfo->pIndirectCommandsTokens[indirectCommandsTokenIndex].tokenType, VALIDATION_ERROR_0bc2fe01);

                skipCall |= validate_required_handle(layer_data->report_data, "vkCmdProcessCommandsNVX", ParameterName("pProcessCommandsInfo->pIndirectCommandsTokens[%i].buffer", ParameterName::IndexVector{ indirectCommandsTokenIndex }), pProcessCommandsInfo->pIndirectCommandsTokens[indirectCommandsTokenIndex].buffer);
            }
        }
    }

    return skipCall;
}

static bool parameter_validation_vkCmdReserveSpaceForCommandsNVX(
    layer_data*                                 layer_data,
    const VkCmdReserveSpaceForCommandsInfoNVX*  pReserveSpaceInfo)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_nvx_device_generated_commands) skipCall |= OutputExtensionError(layer_data, "vkCmdReserveSpaceForCommandsNVX", VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkCmdReserveSpaceForCommandsNVX", "pReserveSpaceInfo", "VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX", pReserveSpaceInfo, VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX, true, VALIDATION_ERROR_0242b00b);

    if (pReserveSpaceInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCmdReserveSpaceForCommandsNVX", "pReserveSpaceInfo->pNext", NULL, pReserveSpaceInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0241c40d);

        skipCall |= validate_required_handle(layer_data->report_data, "vkCmdReserveSpaceForCommandsNVX", "pReserveSpaceInfo->objectTable", pReserveSpaceInfo->objectTable);

        skipCall |= validate_required_handle(layer_data->report_data, "vkCmdReserveSpaceForCommandsNVX", "pReserveSpaceInfo->indirectCommandsLayout", pReserveSpaceInfo->indirectCommandsLayout);
    }

    return skipCall;
}

static bool parameter_validation_vkCreateIndirectCommandsLayoutNVX(
    layer_data*                                 layer_data,
    const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkIndirectCommandsLayoutNVX*                pIndirectCommandsLayout)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_nvx_device_generated_commands) skipCall |= OutputExtensionError(layer_data, "vkCreateIndirectCommandsLayoutNVX", VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateIndirectCommandsLayoutNVX", "pCreateInfo", "VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX", pCreateInfo, VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX, true, VALIDATION_ERROR_0b82b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateIndirectCommandsLayoutNVX", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0b81c40d);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateIndirectCommandsLayoutNVX", "pCreateInfo->pipelineBindPoint", "VkPipelineBindPoint", VK_PIPELINE_BIND_POINT_BEGIN_RANGE, VK_PIPELINE_BIND_POINT_END_RANGE, pCreateInfo->pipelineBindPoint, VALIDATION_ERROR_0b827e01);

        skipCall |= validate_flags(layer_data->report_data, "vkCreateIndirectCommandsLayoutNVX", "pCreateInfo->flags", "VkIndirectCommandsLayoutUsageFlagBitsNVX", AllVkIndirectCommandsLayoutUsageFlagBitsNVX, pCreateInfo->flags, true, false, VALIDATION_ERROR_0b809003);

        skipCall |= validate_array(layer_data->report_data, "vkCreateIndirectCommandsLayoutNVX", "pCreateInfo->tokenCount", "pCreateInfo->pTokens", pCreateInfo->tokenCount, pCreateInfo->pTokens, true, true, VALIDATION_ERROR_0b82fc1b, VALIDATION_ERROR_0b826001);

        if (pCreateInfo->pTokens != NULL)
        {
            for (uint32_t tokenIndex = 0; tokenIndex < pCreateInfo->tokenCount; ++tokenIndex)
            {
                skipCall |= validate_ranged_enum(layer_data->report_data, "vkCreateIndirectCommandsLayoutNVX", ParameterName("pCreateInfo->pTokens[%i].tokenType", ParameterName::IndexVector{ tokenIndex }), "VkIndirectCommandsTokenTypeNVX", VK_INDIRECT_COMMANDS_TOKEN_TYPE_BEGIN_RANGE_NVX, VK_INDIRECT_COMMANDS_TOKEN_TYPE_END_RANGE_NVX, pCreateInfo->pTokens[tokenIndex].tokenType, VALIDATION_ERROR_0ba2fe01);
            }
        }
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateIndirectCommandsLayoutNVX", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateIndirectCommandsLayoutNVX", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateIndirectCommandsLayoutNVX", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateIndirectCommandsLayoutNVX", "pIndirectCommandsLayout", pIndirectCommandsLayout, VALIDATION_ERROR_21019201);

    return skipCall;
}

static bool parameter_validation_vkDestroyIndirectCommandsLayoutNVX(
    layer_data*                                 layer_data,
    VkIndirectCommandsLayoutNVX                 indirectCommandsLayout,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_nvx_device_generated_commands) skipCall |= OutputExtensionError(layer_data, "vkDestroyIndirectCommandsLayoutNVX", VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkDestroyIndirectCommandsLayoutNVX", "indirectCommandsLayout", indirectCommandsLayout);

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyIndirectCommandsLayoutNVX", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyIndirectCommandsLayoutNVX", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyIndirectCommandsLayoutNVX", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkCreateObjectTableNVX(
    layer_data*                                 layer_data,
    const VkObjectTableCreateInfoNVX*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkObjectTableNVX*                           pObjectTable)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_nvx_device_generated_commands) skipCall |= OutputExtensionError(layer_data, "vkCreateObjectTableNVX", VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateObjectTableNVX", "pCreateInfo", "VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX", pCreateInfo, VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX, true, VALIDATION_ERROR_0cc2b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateObjectTableNVX", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0cc1c40d);

        skipCall |= validate_ranged_enum_array(layer_data->report_data, "vkCreateObjectTableNVX", "pCreateInfo->objectCount", "pCreateInfo->pObjectEntryTypes", "VkObjectEntryTypeNVX", VK_OBJECT_ENTRY_TYPE_BEGIN_RANGE_NVX, VK_OBJECT_ENTRY_TYPE_END_RANGE_NVX, pCreateInfo->objectCount, pCreateInfo->pObjectEntryTypes, true, true);

        skipCall |= validate_array(layer_data->report_data, "vkCreateObjectTableNVX", "pCreateInfo->objectCount", "pCreateInfo->pObjectEntryCounts", pCreateInfo->objectCount, pCreateInfo->pObjectEntryCounts, true, true, VALIDATION_ERROR_0cc0d61b, VALIDATION_ERROR_0cc1c601);

        skipCall |= validate_flags_array(layer_data->report_data, "vkCreateObjectTableNVX", "pCreateInfo->objectCount", "pCreateInfo->pObjectEntryUsageFlags", "VkObjectEntryUsageFlagBitsNVX", AllVkObjectEntryUsageFlagBitsNVX, pCreateInfo->objectCount, pCreateInfo->pObjectEntryUsageFlags, true, true);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateObjectTableNVX", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateObjectTableNVX", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateObjectTableNVX", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateObjectTableNVX", "pObjectTable", pObjectTable, VALIDATION_ERROR_2181d001);

    return skipCall;
}

static bool parameter_validation_vkDestroyObjectTableNVX(
    layer_data*                                 layer_data,
    VkObjectTableNVX                            objectTable,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_nvx_device_generated_commands) skipCall |= OutputExtensionError(layer_data, "vkDestroyObjectTableNVX", VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkDestroyObjectTableNVX", "objectTable", objectTable);

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyObjectTableNVX", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyObjectTableNVX", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkDestroyObjectTableNVX", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    return skipCall;
}

static bool parameter_validation_vkRegisterObjectsNVX(
    layer_data*                                 layer_data,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectTableEntryNVX* const*         ppObjectTableEntries,
    const uint32_t*                             pObjectIndices)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_nvx_device_generated_commands) skipCall |= OutputExtensionError(layer_data, "vkRegisterObjectsNVX", VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkRegisterObjectsNVX", "objectTable", objectTable);

    skipCall |= validate_array(layer_data->report_data, "vkRegisterObjectsNVX", "objectCount", "ppObjectTableEntries", objectCount, ppObjectTableEntries, true, true, VALIDATION_ERROR_3220d61b, VALIDATION_ERROR_32229201);

    if (ppObjectTableEntries != NULL)
    {
        for (uint32_t objectIndex = 0; objectIndex < objectCount; ++objectIndex)
        {
            skipCall |= validate_ranged_enum(layer_data->report_data, "vkRegisterObjectsNVX", ParameterName("ppObjectTableEntries[%i]->type", ParameterName::IndexVector{ objectIndex }), "VkObjectEntryTypeNVX", VK_OBJECT_ENTRY_TYPE_BEGIN_RANGE_NVX, VK_OBJECT_ENTRY_TYPE_END_RANGE_NVX, ppObjectTableEntries[objectIndex]->type, VALIDATION_ERROR_0d030401);

            skipCall |= validate_flags(layer_data->report_data, "vkRegisterObjectsNVX", ParameterName("ppObjectTableEntries[%i]->flags", ParameterName::IndexVector{ objectIndex }), "VkObjectEntryUsageFlagBitsNVX", AllVkObjectEntryUsageFlagBitsNVX, ppObjectTableEntries[objectIndex]->flags, true, false, VALIDATION_ERROR_0d009003);
        }
    }

    skipCall |= validate_array(layer_data->report_data, "vkRegisterObjectsNVX", "objectCount", "pObjectIndices", objectCount, pObjectIndices, true, true, VALIDATION_ERROR_3220d61b, VALIDATION_ERROR_3221cc01);

    return skipCall;
}

static bool parameter_validation_vkUnregisterObjectsNVX(
    layer_data*                                 layer_data,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectEntryTypeNVX*                 pObjectEntryTypes,
    const uint32_t*                             pObjectIndices)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_nvx_device_generated_commands) skipCall |= OutputExtensionError(layer_data, "vkUnregisterObjectsNVX", VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkUnregisterObjectsNVX", "objectTable", objectTable);

    skipCall |= validate_ranged_enum_array(layer_data->report_data, "vkUnregisterObjectsNVX", "objectCount", "pObjectEntryTypes", "VkObjectEntryTypeNVX", VK_OBJECT_ENTRY_TYPE_BEGIN_RANGE_NVX, VK_OBJECT_ENTRY_TYPE_END_RANGE_NVX, objectCount, pObjectEntryTypes, true, true);

    skipCall |= validate_array(layer_data->report_data, "vkUnregisterObjectsNVX", "objectCount", "pObjectIndices", objectCount, pObjectIndices, true, true, VALIDATION_ERROR_3380d61b, VALIDATION_ERROR_3381cc01);

    return skipCall;
}

static bool parameter_validation_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    instance_layer_data*                        layer_data,
    VkDeviceGeneratedCommandsFeaturesNVX*       pFeatures,
    VkDeviceGeneratedCommandsLimitsNVX*         pLimits)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX", "pFeatures", "VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX", pFeatures, VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX, true, VALIDATION_ERROR_05a2b00b);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX", "pLimits", "VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX", pLimits, VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX, true, VALIDATION_ERROR_05c2b00b);

    return skipCall;
}



static bool parameter_validation_vkCmdSetViewportWScalingNV(
    layer_data*                                 layer_data,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const VkViewportWScalingNV*                 pViewportWScalings)
{
    UNUSED_PARAMETER(firstViewport);
    UNUSED_PARAMETER(pViewportWScalings);

    bool skipCall = false;

    if (!layer_data->extensions.vk_nv_clip_space_w_scaling) skipCall |= OutputExtensionError(layer_data, "vkCmdSetViewportWScalingNV", VK_NV_CLIP_SPACE_W_SCALING_EXTENSION_NAME);

    return skipCall;
}



static bool parameter_validation_vkReleaseDisplayEXT(
    instance_layer_data*                        layer_data,
    VkDisplayKHR                                display)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkReleaseDisplayEXT", "display", display);

    return skipCall;
}



#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT

static bool parameter_validation_vkAcquireXlibDisplayEXT(
    instance_layer_data*                        layer_data,
    Display*                                    dpy,
    VkDisplayKHR                                display)
{
    bool skipCall = false;

    skipCall |= validate_required_pointer(layer_data->report_data, "vkAcquireXlibDisplayEXT", "dpy", dpy, VALIDATION_ERROR_16606601);

    skipCall |= validate_required_handle(layer_data->report_data, "vkAcquireXlibDisplayEXT", "display", display);

    return skipCall;
}

static bool parameter_validation_vkGetRandROutputDisplayEXT(
    instance_layer_data*                        layer_data,
    Display*                                    dpy,
    RROutput                                    rrOutput,
    VkDisplayKHR*                               pDisplay)
{
    UNUSED_PARAMETER(rrOutput);

    bool skipCall = false;

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetRandROutputDisplayEXT", "dpy", dpy, VALIDATION_ERROR_2fc06601);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetRandROutputDisplayEXT", "pDisplay", pDisplay, VALIDATION_ERROR_2fc14801);

    return skipCall;
}

#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT

static bool parameter_validation_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
    instance_layer_data*                        layer_data,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilities2EXT*                  pSurfaceCapabilities)
{
    bool skipCall = false;

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetPhysicalDeviceSurfaceCapabilities2EXT", "surface", surface);

    skipCall |= validate_struct_type(layer_data->report_data, "vkGetPhysicalDeviceSurfaceCapabilities2EXT", "pSurfaceCapabilities", "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT", pSurfaceCapabilities, VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT, true, VALIDATION_ERROR_1422b00b);

    return skipCall;
}



static bool parameter_validation_vkDisplayPowerControlEXT(
    layer_data*                                 layer_data,
    VkDisplayKHR                                display,
    const VkDisplayPowerInfoEXT*                pDisplayPowerInfo)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkDisplayPowerControlEXT", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_display_surface_counter) skipCall |= OutputExtensionError(layer_data, "vkDisplayPowerControlEXT", VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_display) skipCall |= OutputExtensionError(layer_data, "vkDisplayPowerControlEXT", VK_KHR_DISPLAY_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_display_control) skipCall |= OutputExtensionError(layer_data, "vkDisplayPowerControlEXT", VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkDisplayPowerControlEXT", "display", display);

    skipCall |= validate_struct_type(layer_data->report_data, "vkDisplayPowerControlEXT", "pDisplayPowerInfo", "VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT", pDisplayPowerInfo, VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT, true, VALIDATION_ERROR_0742b00b);

    if (pDisplayPowerInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkDisplayPowerControlEXT", "pDisplayPowerInfo->pNext", NULL, pDisplayPowerInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0741c40d);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkDisplayPowerControlEXT", "pDisplayPowerInfo->powerState", "VkDisplayPowerStateEXT", VK_DISPLAY_POWER_STATE_BEGIN_RANGE_EXT, VK_DISPLAY_POWER_STATE_END_RANGE_EXT, pDisplayPowerInfo->powerState, VALIDATION_ERROR_07428a01);
    }

    return skipCall;
}

static bool parameter_validation_vkRegisterDeviceEventEXT(
    layer_data*                                 layer_data,
    const VkDeviceEventInfoEXT*                 pDeviceEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkRegisterDeviceEventEXT", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_display_surface_counter) skipCall |= OutputExtensionError(layer_data, "vkRegisterDeviceEventEXT", VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_display) skipCall |= OutputExtensionError(layer_data, "vkRegisterDeviceEventEXT", VK_KHR_DISPLAY_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_display_control) skipCall |= OutputExtensionError(layer_data, "vkRegisterDeviceEventEXT", VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME);

    skipCall |= validate_struct_type(layer_data->report_data, "vkRegisterDeviceEventEXT", "pDeviceEventInfo", "VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT", pDeviceEventInfo, VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT, true, VALIDATION_ERROR_0582b00b);

    if (pDeviceEventInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkRegisterDeviceEventEXT", "pDeviceEventInfo->pNext", NULL, pDeviceEventInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0581c40d);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkRegisterDeviceEventEXT", "pDeviceEventInfo->deviceEvent", "VkDeviceEventTypeEXT", VK_DEVICE_EVENT_TYPE_BEGIN_RANGE_EXT, VK_DEVICE_EVENT_TYPE_END_RANGE_EXT, pDeviceEventInfo->deviceEvent, VALIDATION_ERROR_05805801);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkRegisterDeviceEventEXT", "pAllocator", pAllocator, VALIDATION_ERROR_31e0ec01);

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkRegisterDeviceEventEXT", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkRegisterDeviceEventEXT", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkRegisterDeviceEventEXT", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkRegisterDeviceEventEXT", "pFence", pFence, VALIDATION_ERROR_31e17001);

    return skipCall;
}

static bool parameter_validation_vkRegisterDisplayEventEXT(
    layer_data*                                 layer_data,
    VkDisplayKHR                                display,
    const VkDisplayEventInfoEXT*                pDisplayEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkRegisterDisplayEventEXT", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_display_surface_counter) skipCall |= OutputExtensionError(layer_data, "vkRegisterDisplayEventEXT", VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_display) skipCall |= OutputExtensionError(layer_data, "vkRegisterDisplayEventEXT", VK_KHR_DISPLAY_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_display_control) skipCall |= OutputExtensionError(layer_data, "vkRegisterDisplayEventEXT", VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkRegisterDisplayEventEXT", "display", display);

    skipCall |= validate_struct_type(layer_data->report_data, "vkRegisterDisplayEventEXT", "pDisplayEventInfo", "VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT", pDisplayEventInfo, VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT, true, VALIDATION_ERROR_0702b00b);

    if (pDisplayEventInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkRegisterDisplayEventEXT", "pDisplayEventInfo->pNext", NULL, pDisplayEventInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0701c40d);

        skipCall |= validate_ranged_enum(layer_data->report_data, "vkRegisterDisplayEventEXT", "pDisplayEventInfo->displayEvent", "VkDisplayEventTypeEXT", VK_DISPLAY_EVENT_TYPE_BEGIN_RANGE_EXT, VK_DISPLAY_EVENT_TYPE_END_RANGE_EXT, pDisplayEventInfo->displayEvent, VALIDATION_ERROR_07006201);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkRegisterDisplayEventEXT", "pAllocator", pAllocator, VALIDATION_ERROR_3200ec01);

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkRegisterDisplayEventEXT", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkRegisterDisplayEventEXT", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkRegisterDisplayEventEXT", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkRegisterDisplayEventEXT", "pFence", pFence, VALIDATION_ERROR_32017001);

    return skipCall;
}

static bool parameter_validation_vkGetSwapchainCounterEXT(
    layer_data*                                 layer_data,
    VkSwapchainKHR                              swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    uint64_t*                                   pCounterValue)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkGetSwapchainCounterEXT", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_display_surface_counter) skipCall |= OutputExtensionError(layer_data, "vkGetSwapchainCounterEXT", VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME);

    if (!layer_data->extensions.vk_khr_display) skipCall |= OutputExtensionError(layer_data, "vkGetSwapchainCounterEXT", VK_KHR_DISPLAY_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_display_control) skipCall |= OutputExtensionError(layer_data, "vkGetSwapchainCounterEXT", VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetSwapchainCounterEXT", "swapchain", swapchain);

    skipCall |= validate_flags(layer_data->report_data, "vkGetSwapchainCounterEXT", "counter", "VkSurfaceCounterFlagBitsEXT", AllVkSurfaceCounterFlagBitsEXT, counter, true, true, VALIDATION_ERROR_30603601);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetSwapchainCounterEXT", "pCounterValue", pCounterValue, VALIDATION_ERROR_30611c01);

    return skipCall;
}



static bool parameter_validation_vkGetRefreshCycleDurationGOOGLE(
    layer_data*                                 layer_data,
    VkSwapchainKHR                              swapchain,
    VkRefreshCycleDurationGOOGLE*               pDisplayTimingProperties)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkGetRefreshCycleDurationGOOGLE", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_google_display_timing) skipCall |= OutputExtensionError(layer_data, "vkGetRefreshCycleDurationGOOGLE", VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetRefreshCycleDurationGOOGLE", "swapchain", swapchain);

    skipCall |= validate_required_pointer(layer_data->report_data, "vkGetRefreshCycleDurationGOOGLE", "pDisplayTimingProperties", pDisplayTimingProperties, VALIDATION_ERROR_2fe15001);

    return skipCall;
}

static bool parameter_validation_vkGetPastPresentationTimingGOOGLE(
    layer_data*                                 layer_data,
    VkSwapchainKHR                              swapchain,
    uint32_t*                                   pPresentationTimingCount,
    VkPastPresentationTimingGOOGLE*             pPresentationTimings)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_swapchain) skipCall |= OutputExtensionError(layer_data, "vkGetPastPresentationTimingGOOGLE", VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    if (!layer_data->extensions.vk_google_display_timing) skipCall |= OutputExtensionError(layer_data, "vkGetPastPresentationTimingGOOGLE", VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME);

    skipCall |= validate_required_handle(layer_data->report_data, "vkGetPastPresentationTimingGOOGLE", "swapchain", swapchain);

    skipCall |= validate_array(layer_data->report_data, "vkGetPastPresentationTimingGOOGLE", "pPresentationTimingCount", "pPresentationTimings", pPresentationTimingCount, pPresentationTimings, true, false, false, VALIDATION_ERROR_UNDEFINED, VALIDATION_ERROR_2b41ee01);

    return skipCall;
}













static bool parameter_validation_vkCmdSetDiscardRectangleEXT(
    layer_data*                                 layer_data,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    const VkRect2D*                             pDiscardRectangles)
{
    UNUSED_PARAMETER(firstDiscardRectangle);

    bool skipCall = false;

    if (!layer_data->extensions.vk_khr_get_physical_device_properties_2) skipCall |= OutputExtensionError(layer_data, "vkCmdSetDiscardRectangleEXT", VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME);

    if (!layer_data->extensions.vk_ext_discard_rectangles) skipCall |= OutputExtensionError(layer_data, "vkCmdSetDiscardRectangleEXT", VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME);

    skipCall |= validate_array(layer_data->report_data, "vkCmdSetDiscardRectangleEXT", "discardRectangleCount", "pDiscardRectangles", discardRectangleCount, pDiscardRectangles, true, true, VALIDATION_ERROR_1d205c1b, VALIDATION_ERROR_1d214601);

    return skipCall;
}





static bool parameter_validation_vkSetHdrMetadataEXT(
    layer_data*                                 layer_data,
    uint32_t                                    swapchainCount,
    const VkSwapchainKHR*                       pSwapchains,
    const VkHdrMetadataEXT*                     pMetadata)
{
    bool skipCall = false;

    if (!layer_data->extensions.vk_ext_hdr_metadata) skipCall |= OutputExtensionError(layer_data, "vkSetHdrMetadataEXT", VK_EXT_HDR_METADATA_EXTENSION_NAME);

    skipCall |= validate_handle_array(layer_data->report_data, "vkSetHdrMetadataEXT", "swapchainCount", "pSwapchains", swapchainCount, pSwapchains, true, true);

    skipCall |= validate_struct_type_array(layer_data->report_data, "vkSetHdrMetadataEXT", "swapchainCount", "pMetadata", "VK_STRUCTURE_TYPE_HDR_METADATA_EXT", swapchainCount, pMetadata, VK_STRUCTURE_TYPE_HDR_METADATA_EXT, true, true, VALIDATION_ERROR_3321ba01);

    if (pMetadata != NULL)
    {
        for (uint32_t swapchainIndex = 0; swapchainIndex < swapchainCount; ++swapchainIndex)
        {
            skipCall |= validate_struct_pnext(layer_data->report_data, "vkSetHdrMetadataEXT", ParameterName("pMetadata[%i].pNext", ParameterName::IndexVector{ swapchainIndex }), NULL, pMetadata[swapchainIndex].pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_UNDEFINED);
        }
    }

    return skipCall;
}



#ifdef VK_USE_PLATFORM_IOS_MVK

static bool parameter_validation_vkCreateIOSSurfaceMVK(
    instance_layer_data*                        layer_data,
    const VkIOSSurfaceCreateInfoMVK*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateIOSSurfaceMVK", "pCreateInfo", "VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK", pCreateInfo, VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK, true, VALIDATION_ERROR_0982b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateIOSSurfaceMVK", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0981c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateIOSSurfaceMVK", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_09809005);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateIOSSurfaceMVK", "pCreateInfo->pView", pCreateInfo->pView, VALIDATION_ERROR_09826a01);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateIOSSurfaceMVK", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateIOSSurfaceMVK", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateIOSSurfaceMVK", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateIOSSurfaceMVK", "pSurface", pSurface, VALIDATION_ERROR_20a24801);

    return skipCall;
}

#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_MACOS_MVK

static bool parameter_validation_vkCreateMacOSSurfaceMVK(
    instance_layer_data*                        layer_data,
    const VkMacOSSurfaceCreateInfoMVK*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skipCall = false;

    skipCall |= validate_struct_type(layer_data->report_data, "vkCreateMacOSSurfaceMVK", "pCreateInfo", "VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK", pCreateInfo, VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK, true, VALIDATION_ERROR_0c02b00b);

    if (pCreateInfo != NULL)
    {
        skipCall |= validate_struct_pnext(layer_data->report_data, "vkCreateMacOSSurfaceMVK", "pCreateInfo->pNext", NULL, pCreateInfo->pNext, 0, NULL, GeneratedHeaderVersion, VALIDATION_ERROR_0c01c40d);

        skipCall |= validate_reserved_flags(layer_data->report_data, "vkCreateMacOSSurfaceMVK", "pCreateInfo->flags", pCreateInfo->flags, VALIDATION_ERROR_0c009005);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateMacOSSurfaceMVK", "pCreateInfo->pView", pCreateInfo->pView, VALIDATION_ERROR_0c026a01);
    }

    if (pAllocator != NULL)
    {
        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateMacOSSurfaceMVK", "pAllocator->pfnAllocation", reinterpret_cast<const void*>(pAllocator->pfnAllocation), VALIDATION_ERROR_002004f0);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateMacOSSurfaceMVK", "pAllocator->pfnReallocation", reinterpret_cast<const void*>(pAllocator->pfnReallocation), VALIDATION_ERROR_002004f2);

        skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateMacOSSurfaceMVK", "pAllocator->pfnFree", reinterpret_cast<const void*>(pAllocator->pfnFree), VALIDATION_ERROR_002004f4);
    }

    skipCall |= validate_required_pointer(layer_data->report_data, "vkCreateMacOSSurfaceMVK", "pSurface", pSurface, VALIDATION_ERROR_21424801);

    return skipCall;
}

#endif // VK_USE_PLATFORM_MACOS_MVK














// Declarations
VKAPI_ATTR VkResult VKAPI_CALL CreateInstance(
    const VkInstanceCreateInfo*                 pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkInstance*                                 pInstance);
VKAPI_ATTR void VKAPI_CALL DestroyInstance(
    VkInstance                                  instance,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL EnumeratePhysicalDevices(
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceCount,
    VkPhysicalDevice*                           pPhysicalDevices);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFeatures(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures*                   pFeatures);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFormatProperties(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties*                         pFormatProperties);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceImageFormatProperties(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkImageFormatProperties*                    pImageFormatProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceProperties(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties*                 pProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceQueueFamilyProperties(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties*                    pQueueFamilyProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceMemoryProperties(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties*           pMemoryProperties);
VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL GetInstanceProcAddr(
    VkInstance                                  instance,
    const char*                                 pName);
VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL GetDeviceProcAddr(
    VkDevice                                    device,
    const char*                                 pName);
VKAPI_ATTR VkResult VKAPI_CALL CreateDevice(
    VkPhysicalDevice                            physicalDevice,
    const VkDeviceCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDevice*                                   pDevice);
VKAPI_ATTR void VKAPI_CALL DestroyDevice(
    VkDevice                                    device,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL EnumerateDeviceExtensionProperties(
    VkPhysicalDevice                            physicalDevice,
    const char*                                 pLayerName,
    uint32_t*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties);
VKAPI_ATTR void VKAPI_CALL GetDeviceQueue(
    VkDevice                                    device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    VkQueue*                                    pQueue);
VKAPI_ATTR VkResult VKAPI_CALL QueueSubmit(
    VkQueue                                     queue,
    uint32_t                                    submitCount,
    const VkSubmitInfo*                         pSubmits,
    VkFence                                     fence);
VKAPI_ATTR VkResult VKAPI_CALL QueueWaitIdle(
    VkQueue                                     queue);
VKAPI_ATTR VkResult VKAPI_CALL DeviceWaitIdle(
    VkDevice                                    device);
VKAPI_ATTR VkResult VKAPI_CALL AllocateMemory(
    VkDevice                                    device,
    const VkMemoryAllocateInfo*                 pAllocateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDeviceMemory*                             pMemory);
VKAPI_ATTR void VKAPI_CALL FreeMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL MapMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    void**                                      ppData);
VKAPI_ATTR void VKAPI_CALL UnmapMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory);
VKAPI_ATTR VkResult VKAPI_CALL FlushMappedMemoryRanges(
    VkDevice                                    device,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges);
VKAPI_ATTR VkResult VKAPI_CALL InvalidateMappedMemoryRanges(
    VkDevice                                    device,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges);
VKAPI_ATTR void VKAPI_CALL GetDeviceMemoryCommitment(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkDeviceSize*                               pCommittedMemoryInBytes);
VKAPI_ATTR VkResult VKAPI_CALL BindBufferMemory(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset);
VKAPI_ATTR VkResult VKAPI_CALL BindImageMemory(
    VkDevice                                    device,
    VkImage                                     image,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset);
VKAPI_ATTR void VKAPI_CALL GetBufferMemoryRequirements(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    VkMemoryRequirements*                       pMemoryRequirements);
VKAPI_ATTR void VKAPI_CALL GetImageMemoryRequirements(
    VkDevice                                    device,
    VkImage                                     image,
    VkMemoryRequirements*                       pMemoryRequirements);
VKAPI_ATTR void VKAPI_CALL GetImageSparseMemoryRequirements(
    VkDevice                                    device,
    VkImage                                     image,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements*            pSparseMemoryRequirements);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceSparseImageFormatProperties(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkSampleCountFlagBits                       samples,
    VkImageUsageFlags                           usage,
    VkImageTiling                               tiling,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties*              pProperties);
VKAPI_ATTR VkResult VKAPI_CALL QueueBindSparse(
    VkQueue                                     queue,
    uint32_t                                    bindInfoCount,
    const VkBindSparseInfo*                     pBindInfo,
    VkFence                                     fence);
VKAPI_ATTR VkResult VKAPI_CALL CreateFence(
    VkDevice                                    device,
    const VkFenceCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence);
VKAPI_ATTR void VKAPI_CALL DestroyFence(
    VkDevice                                    device,
    VkFence                                     fence,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL ResetFences(
    VkDevice                                    device,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences);
VKAPI_ATTR VkResult VKAPI_CALL GetFenceStatus(
    VkDevice                                    device,
    VkFence                                     fence);
VKAPI_ATTR VkResult VKAPI_CALL WaitForFences(
    VkDevice                                    device,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout);
VKAPI_ATTR VkResult VKAPI_CALL CreateSemaphore(
    VkDevice                                    device,
    const VkSemaphoreCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSemaphore*                                pSemaphore);
VKAPI_ATTR void VKAPI_CALL DestroySemaphore(
    VkDevice                                    device,
    VkSemaphore                                 semaphore,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateEvent(
    VkDevice                                    device,
    const VkEventCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkEvent*                                    pEvent);
VKAPI_ATTR void VKAPI_CALL DestroyEvent(
    VkDevice                                    device,
    VkEvent                                     event,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL GetEventStatus(
    VkDevice                                    device,
    VkEvent                                     event);
VKAPI_ATTR VkResult VKAPI_CALL SetEvent(
    VkDevice                                    device,
    VkEvent                                     event);
VKAPI_ATTR VkResult VKAPI_CALL ResetEvent(
    VkDevice                                    device,
    VkEvent                                     event);
VKAPI_ATTR VkResult VKAPI_CALL CreateQueryPool(
    VkDevice                                    device,
    const VkQueryPoolCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkQueryPool*                                pQueryPool);
VKAPI_ATTR void VKAPI_CALL DestroyQueryPool(
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL GetQueryPoolResults(
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    size_t                                      dataSize,
    void*                                       pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags);
VKAPI_ATTR VkResult VKAPI_CALL CreateBuffer(
    VkDevice                                    device,
    const VkBufferCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBuffer*                                   pBuffer);
VKAPI_ATTR void VKAPI_CALL DestroyBuffer(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateBufferView(
    VkDevice                                    device,
    const VkBufferViewCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBufferView*                               pView);
VKAPI_ATTR void VKAPI_CALL DestroyBufferView(
    VkDevice                                    device,
    VkBufferView                                bufferView,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateImage(
    VkDevice                                    device,
    const VkImageCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImage*                                    pImage);
VKAPI_ATTR void VKAPI_CALL DestroyImage(
    VkDevice                                    device,
    VkImage                                     image,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR void VKAPI_CALL GetImageSubresourceLayout(
    VkDevice                                    device,
    VkImage                                     image,
    const VkImageSubresource*                   pSubresource,
    VkSubresourceLayout*                        pLayout);
VKAPI_ATTR VkResult VKAPI_CALL CreateImageView(
    VkDevice                                    device,
    const VkImageViewCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImageView*                                pView);
VKAPI_ATTR void VKAPI_CALL DestroyImageView(
    VkDevice                                    device,
    VkImageView                                 imageView,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateShaderModule(
    VkDevice                                    device,
    const VkShaderModuleCreateInfo*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkShaderModule*                             pShaderModule);
VKAPI_ATTR void VKAPI_CALL DestroyShaderModule(
    VkDevice                                    device,
    VkShaderModule                              shaderModule,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreatePipelineCache(
    VkDevice                                    device,
    const VkPipelineCacheCreateInfo*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineCache*                            pPipelineCache);
VKAPI_ATTR void VKAPI_CALL DestroyPipelineCache(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL GetPipelineCacheData(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    size_t*                                     pDataSize,
    void*                                       pData);
VKAPI_ATTR VkResult VKAPI_CALL MergePipelineCaches(
    VkDevice                                    device,
    VkPipelineCache                             dstCache,
    uint32_t                                    srcCacheCount,
    const VkPipelineCache*                      pSrcCaches);
VKAPI_ATTR VkResult VKAPI_CALL CreateGraphicsPipelines(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkGraphicsPipelineCreateInfo*         pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);
VKAPI_ATTR VkResult VKAPI_CALL CreateComputePipelines(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkComputePipelineCreateInfo*          pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);
VKAPI_ATTR void VKAPI_CALL DestroyPipeline(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreatePipelineLayout(
    VkDevice                                    device,
    const VkPipelineLayoutCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineLayout*                           pPipelineLayout);
VKAPI_ATTR void VKAPI_CALL DestroyPipelineLayout(
    VkDevice                                    device,
    VkPipelineLayout                            pipelineLayout,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateSampler(
    VkDevice                                    device,
    const VkSamplerCreateInfo*                  pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSampler*                                  pSampler);
VKAPI_ATTR void VKAPI_CALL DestroySampler(
    VkDevice                                    device,
    VkSampler                                   sampler,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorSetLayout(
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorSetLayout*                      pSetLayout);
VKAPI_ATTR void VKAPI_CALL DestroyDescriptorSetLayout(
    VkDevice                                    device,
    VkDescriptorSetLayout                       descriptorSetLayout,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorPool(
    VkDevice                                    device,
    const VkDescriptorPoolCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorPool*                           pDescriptorPool);
VKAPI_ATTR void VKAPI_CALL DestroyDescriptorPool(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL ResetDescriptorPool(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags);
VKAPI_ATTR VkResult VKAPI_CALL AllocateDescriptorSets(
    VkDevice                                    device,
    const VkDescriptorSetAllocateInfo*          pAllocateInfo,
    VkDescriptorSet*                            pDescriptorSets);
VKAPI_ATTR VkResult VKAPI_CALL FreeDescriptorSets(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets);
VKAPI_ATTR void VKAPI_CALL UpdateDescriptorSets(
    VkDevice                                    device,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const VkCopyDescriptorSet*                  pDescriptorCopies);
VKAPI_ATTR VkResult VKAPI_CALL CreateFramebuffer(
    VkDevice                                    device,
    const VkFramebufferCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFramebuffer*                              pFramebuffer);
VKAPI_ATTR void VKAPI_CALL DestroyFramebuffer(
    VkDevice                                    device,
    VkFramebuffer                               framebuffer,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateRenderPass(
    VkDevice                                    device,
    const VkRenderPassCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkRenderPass*                               pRenderPass);
VKAPI_ATTR void VKAPI_CALL DestroyRenderPass(
    VkDevice                                    device,
    VkRenderPass                                renderPass,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR void VKAPI_CALL GetRenderAreaGranularity(
    VkDevice                                    device,
    VkRenderPass                                renderPass,
    VkExtent2D*                                 pGranularity);
VKAPI_ATTR VkResult VKAPI_CALL CreateCommandPool(
    VkDevice                                    device,
    const VkCommandPoolCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkCommandPool*                              pCommandPool);
VKAPI_ATTR void VKAPI_CALL DestroyCommandPool(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL ResetCommandPool(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolResetFlags                     flags);
VKAPI_ATTR VkResult VKAPI_CALL AllocateCommandBuffers(
    VkDevice                                    device,
    const VkCommandBufferAllocateInfo*          pAllocateInfo,
    VkCommandBuffer*                            pCommandBuffers);
VKAPI_ATTR void VKAPI_CALL FreeCommandBuffers(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers);
VKAPI_ATTR VkResult VKAPI_CALL BeginCommandBuffer(
    VkCommandBuffer                             commandBuffer,
    const VkCommandBufferBeginInfo*             pBeginInfo);
VKAPI_ATTR VkResult VKAPI_CALL EndCommandBuffer(
    VkCommandBuffer                             commandBuffer);
VKAPI_ATTR VkResult VKAPI_CALL ResetCommandBuffer(
    VkCommandBuffer                             commandBuffer,
    VkCommandBufferResetFlags                   flags);
VKAPI_ATTR void VKAPI_CALL CmdBindPipeline(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipeline                                  pipeline);
VKAPI_ATTR void VKAPI_CALL CmdSetViewport(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const VkViewport*                           pViewports);
VKAPI_ATTR void VKAPI_CALL CmdSetScissor(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    const VkRect2D*                             pScissors);
VKAPI_ATTR void VKAPI_CALL CmdSetLineWidth(
    VkCommandBuffer                             commandBuffer,
    float                                       lineWidth);
VKAPI_ATTR void VKAPI_CALL CmdSetDepthBias(
    VkCommandBuffer                             commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor);
VKAPI_ATTR void VKAPI_CALL CmdSetBlendConstants(
    VkCommandBuffer                             commandBuffer,
    const float                                 blendConstants[4]);
VKAPI_ATTR void VKAPI_CALL CmdSetDepthBounds(
    VkCommandBuffer                             commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds);
VKAPI_ATTR void VKAPI_CALL CmdSetStencilCompareMask(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask);
VKAPI_ATTR void VKAPI_CALL CmdSetStencilWriteMask(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask);
VKAPI_ATTR void VKAPI_CALL CmdSetStencilReference(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference);
VKAPI_ATTR void VKAPI_CALL CmdBindDescriptorSets(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    firstSet,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets,
    uint32_t                                    dynamicOffsetCount,
    const uint32_t*                             pDynamicOffsets);
VKAPI_ATTR void VKAPI_CALL CmdBindIndexBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType);
VKAPI_ATTR void VKAPI_CALL CmdBindVertexBuffers(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const VkBuffer*                             pBuffers,
    const VkDeviceSize*                         pOffsets);
VKAPI_ATTR void VKAPI_CALL CmdDraw(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    vertexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstVertex,
    uint32_t                                    firstInstance);
VKAPI_ATTR void VKAPI_CALL CmdDrawIndexed(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    indexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstIndex,
    int32_t                                     vertexOffset,
    uint32_t                                    firstInstance);
VKAPI_ATTR void VKAPI_CALL CmdDrawIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride);
VKAPI_ATTR void VKAPI_CALL CmdDrawIndexedIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride);
VKAPI_ATTR void VKAPI_CALL CmdDispatch(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ);
VKAPI_ATTR void VKAPI_CALL CmdDispatchIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset);
VKAPI_ATTR void VKAPI_CALL CmdCopyBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    srcBuffer,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferCopy*                         pRegions);
VKAPI_ATTR void VKAPI_CALL CmdCopyImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageCopy*                          pRegions);
VKAPI_ATTR void VKAPI_CALL CmdBlitImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageBlit*                          pRegions,
    VkFilter                                    filter);
VKAPI_ATTR void VKAPI_CALL CmdCopyBufferToImage(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    srcBuffer,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions);
VKAPI_ATTR void VKAPI_CALL CmdCopyImageToBuffer(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions);
VKAPI_ATTR void VKAPI_CALL CmdUpdateBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const void*                                 pData);
VKAPI_ATTR void VKAPI_CALL CmdFillBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data);
VKAPI_ATTR void VKAPI_CALL CmdClearColorImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearColorValue*                    pColor,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges);
VKAPI_ATTR void VKAPI_CALL CmdClearDepthStencilImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearDepthStencilValue*             pDepthStencil,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges);
VKAPI_ATTR void VKAPI_CALL CmdClearAttachments(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    attachmentCount,
    const VkClearAttachment*                    pAttachments,
    uint32_t                                    rectCount,
    const VkClearRect*                          pRects);
VKAPI_ATTR void VKAPI_CALL CmdResolveImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageResolve*                       pRegions);
VKAPI_ATTR void VKAPI_CALL CmdSetEvent(
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask);
VKAPI_ATTR void VKAPI_CALL CmdResetEvent(
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask);
VKAPI_ATTR void VKAPI_CALL CmdWaitEvents(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    eventCount,
    const VkEvent*                              pEvents,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    uint32_t                                    memoryBarrierCount,
    const VkMemoryBarrier*                      pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const VkImageMemoryBarrier*                 pImageMemoryBarriers);
VKAPI_ATTR void VKAPI_CALL CmdPipelineBarrier(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    VkDependencyFlags                           dependencyFlags,
    uint32_t                                    memoryBarrierCount,
    const VkMemoryBarrier*                      pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const VkImageMemoryBarrier*                 pImageMemoryBarriers);
VKAPI_ATTR void VKAPI_CALL CmdBeginQuery(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags);
VKAPI_ATTR void VKAPI_CALL CmdEndQuery(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query);
VKAPI_ATTR void VKAPI_CALL CmdResetQueryPool(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount);
VKAPI_ATTR void VKAPI_CALL CmdWriteTimestamp(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    VkQueryPool                                 queryPool,
    uint32_t                                    query);
VKAPI_ATTR void VKAPI_CALL CmdCopyQueryPoolResults(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags);
VKAPI_ATTR void VKAPI_CALL CmdPushConstants(
    VkCommandBuffer                             commandBuffer,
    VkPipelineLayout                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    const void*                                 pValues);
VKAPI_ATTR void VKAPI_CALL CmdBeginRenderPass(
    VkCommandBuffer                             commandBuffer,
    const VkRenderPassBeginInfo*                pRenderPassBegin,
    VkSubpassContents                           contents);
VKAPI_ATTR void VKAPI_CALL CmdNextSubpass(
    VkCommandBuffer                             commandBuffer,
    VkSubpassContents                           contents);
VKAPI_ATTR void VKAPI_CALL CmdEndRenderPass(
    VkCommandBuffer                             commandBuffer);
VKAPI_ATTR void VKAPI_CALL CmdExecuteCommands(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers);
VKAPI_ATTR void VKAPI_CALL DestroySurfaceKHR(
    VkInstance                                  instance,
    VkSurfaceKHR                                surface,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    VkSurfaceKHR                                surface,
    VkBool32*                                   pSupported);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilitiesKHR*                   pSurfaceCapabilities);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceFormatsKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pSurfaceFormatCount,
    VkSurfaceFormatKHR*                         pSurfaceFormats);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfacePresentModesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pPresentModeCount,
    VkPresentModeKHR*                           pPresentModes);
VKAPI_ATTR VkResult VKAPI_CALL CreateSwapchainKHR(
    VkDevice                                    device,
    const VkSwapchainCreateInfoKHR*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchain);
VKAPI_ATTR void VKAPI_CALL DestroySwapchainKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL GetSwapchainImagesKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    uint32_t*                                   pSwapchainImageCount,
    VkImage*                                    pSwapchainImages);
VKAPI_ATTR VkResult VKAPI_CALL AcquireNextImageKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    uint64_t                                    timeout,
    VkSemaphore                                 semaphore,
    VkFence                                     fence,
    uint32_t*                                   pImageIndex);
VKAPI_ATTR VkResult VKAPI_CALL QueuePresentKHR(
    VkQueue                                     queue,
    const VkPresentInfoKHR*                     pPresentInfo);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceDisplayPropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkDisplayPropertiesKHR*                     pProperties);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceDisplayPlanePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkDisplayPlanePropertiesKHR*                pProperties);
VKAPI_ATTR VkResult VKAPI_CALL GetDisplayPlaneSupportedDisplaysKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    planeIndex,
    uint32_t*                                   pDisplayCount,
    VkDisplayKHR*                               pDisplays);
VKAPI_ATTR VkResult VKAPI_CALL GetDisplayModePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    uint32_t*                                   pPropertyCount,
    VkDisplayModePropertiesKHR*                 pProperties);
VKAPI_ATTR VkResult VKAPI_CALL CreateDisplayModeKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    const VkDisplayModeCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDisplayModeKHR*                           pMode);
VKAPI_ATTR VkResult VKAPI_CALL GetDisplayPlaneCapabilitiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayModeKHR                            mode,
    uint32_t                                    planeIndex,
    VkDisplayPlaneCapabilitiesKHR*              pCapabilities);
VKAPI_ATTR VkResult VKAPI_CALL CreateDisplayPlaneSurfaceKHR(
    VkInstance                                  instance,
    const VkDisplaySurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
VKAPI_ATTR VkResult VKAPI_CALL CreateSharedSwapchainsKHR(
    VkDevice                                    device,
    uint32_t                                    swapchainCount,
    const VkSwapchainCreateInfoKHR*             pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchains);
#ifdef VK_USE_PLATFORM_XLIB_KHR
VKAPI_ATTR VkResult VKAPI_CALL CreateXlibSurfaceKHR(
    VkInstance                                  instance,
    const VkXlibSurfaceCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceXlibPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    Display*                                    dpy,
    VisualID                                    visualID);
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
VKAPI_ATTR VkResult VKAPI_CALL CreateXcbSurfaceKHR(
    VkInstance                                  instance,
    const VkXcbSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceXcbPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    xcb_connection_t*                           connection,
    xcb_visualid_t                              visual_id);
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
VKAPI_ATTR VkResult VKAPI_CALL CreateWaylandSurfaceKHR(
    VkInstance                                  instance,
    const VkWaylandSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceWaylandPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    struct wl_display*                          display);
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
VKAPI_ATTR VkResult VKAPI_CALL CreateMirSurfaceKHR(
    VkInstance                                  instance,
    const VkMirSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceMirPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    MirConnection*                              connection);
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
VKAPI_ATTR VkResult VKAPI_CALL CreateAndroidSurfaceKHR(
    VkInstance                                  instance,
    const VkAndroidSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL CreateWin32SurfaceKHR(
    VkInstance                                  instance,
    const VkWin32SurfaceCreateInfoKHR*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceWin32PresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex);
#endif
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFeatures2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures2KHR*               pFeatures);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties2KHR*             pProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFormatProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties2KHR*                     pFormatProperties);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceImageFormatProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceImageFormatInfo2KHR*  pImageFormatInfo,
    VkImageFormatProperties2KHR*                pImageFormatProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceQueueFamilyProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2KHR*                pQueueFamilyProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceMemoryProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties2KHR*       pMemoryProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceSparseImageFormatProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSparseImageFormatInfo2KHR* pFormatInfo,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties2KHR*          pProperties);
VKAPI_ATTR void VKAPI_CALL TrimCommandPoolKHR(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolTrimFlagsKHR                   flags);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceExternalBufferPropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalBufferInfoKHR* pExternalBufferInfo,
    VkExternalBufferPropertiesKHR*              pExternalBufferProperties);
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL GetMemoryWin32HandleKHR(
    VkDevice                                    device,
    const VkMemoryGetWin32HandleInfoKHR*        pGetWin32HandleInfo,
    HANDLE*                                     pHandle);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL GetMemoryWin32HandlePropertiesKHR(
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBitsKHR       handleType,
    HANDLE                                      handle,
    VkMemoryWin32HandlePropertiesKHR*           pMemoryWin32HandleProperties);
#endif
VKAPI_ATTR VkResult VKAPI_CALL GetMemoryFdKHR(
    VkDevice                                    device,
    const VkMemoryGetFdInfoKHR*                 pGetFdInfo,
    int*                                        pFd);
VKAPI_ATTR VkResult VKAPI_CALL GetMemoryFdPropertiesKHR(
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBitsKHR       handleType,
    int                                         fd,
    VkMemoryFdPropertiesKHR*                    pMemoryFdProperties);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceExternalSemaphorePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalSemaphoreInfoKHR* pExternalSemaphoreInfo,
    VkExternalSemaphorePropertiesKHR*           pExternalSemaphoreProperties);
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL ImportSemaphoreWin32HandleKHR(
    VkDevice                                    device,
    const VkImportSemaphoreWin32HandleInfoKHR*  pImportSemaphoreWin32HandleInfo);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL GetSemaphoreWin32HandleKHR(
    VkDevice                                    device,
    const VkSemaphoreGetWin32HandleInfoKHR*     pGetWin32HandleInfo,
    HANDLE*                                     pHandle);
#endif
VKAPI_ATTR VkResult VKAPI_CALL ImportSemaphoreFdKHR(
    VkDevice                                    device,
    const VkImportSemaphoreFdInfoKHR*           pImportSemaphoreFdInfo);
VKAPI_ATTR VkResult VKAPI_CALL GetSemaphoreFdKHR(
    VkDevice                                    device,
    const VkSemaphoreGetFdInfoKHR*              pGetFdInfo,
    int*                                        pFd);
VKAPI_ATTR void VKAPI_CALL CmdPushDescriptorSetKHR(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites);
VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorUpdateTemplateKHR(
    VkDevice                                    device,
    const VkDescriptorUpdateTemplateCreateInfoKHR* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorUpdateTemplateKHR*              pDescriptorUpdateTemplate);
VKAPI_ATTR void VKAPI_CALL DestroyDescriptorUpdateTemplateKHR(
    VkDevice                                    device,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR void VKAPI_CALL UpdateDescriptorSetWithTemplateKHR(
    VkDevice                                    device,
    VkDescriptorSet                             descriptorSet,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    const void*                                 pData);
VKAPI_ATTR void VKAPI_CALL CmdPushDescriptorSetWithTemplateKHR(
    VkCommandBuffer                             commandBuffer,
    VkDescriptorUpdateTemplateKHR               descriptorUpdateTemplate,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    const void*                                 pData);
VKAPI_ATTR VkResult VKAPI_CALL GetSwapchainStatusKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceExternalFencePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalFenceInfoKHR* pExternalFenceInfo,
    VkExternalFencePropertiesKHR*               pExternalFenceProperties);
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL ImportFenceWin32HandleKHR(
    VkDevice                                    device,
    const VkImportFenceWin32HandleInfoKHR*      pImportFenceWin32HandleInfo);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL GetFenceWin32HandleKHR(
    VkDevice                                    device,
    const VkFenceGetWin32HandleInfoKHR*         pGetWin32HandleInfo,
    HANDLE*                                     pHandle);
#endif
VKAPI_ATTR VkResult VKAPI_CALL ImportFenceFdKHR(
    VkDevice                                    device,
    const VkImportFenceFdInfoKHR*               pImportFenceFdInfo);
VKAPI_ATTR VkResult VKAPI_CALL GetFenceFdKHR(
    VkDevice                                    device,
    const VkFenceGetFdInfoKHR*                  pGetFdInfo,
    int*                                        pFd);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceCapabilities2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSurfaceInfo2KHR*      pSurfaceInfo,
    VkSurfaceCapabilities2KHR*                  pSurfaceCapabilities);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceFormats2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSurfaceInfo2KHR*      pSurfaceInfo,
    uint32_t*                                   pSurfaceFormatCount,
    VkSurfaceFormat2KHR*                        pSurfaceFormats);
VKAPI_ATTR void VKAPI_CALL GetImageMemoryRequirements2KHR(
    VkDevice                                    device,
    const VkImageMemoryRequirementsInfo2KHR*    pInfo,
    VkMemoryRequirements2KHR*                   pMemoryRequirements);
VKAPI_ATTR void VKAPI_CALL GetBufferMemoryRequirements2KHR(
    VkDevice                                    device,
    const VkBufferMemoryRequirementsInfo2KHR*   pInfo,
    VkMemoryRequirements2KHR*                   pMemoryRequirements);
VKAPI_ATTR void VKAPI_CALL GetImageSparseMemoryRequirements2KHR(
    VkDevice                                    device,
    const VkImageSparseMemoryRequirementsInfo2KHR* pInfo,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2KHR*        pSparseMemoryRequirements);
VKAPI_ATTR VkResult VKAPI_CALL CreateDebugReportCallbackEXT(
    VkInstance                                  instance,
    const VkDebugReportCallbackCreateInfoEXT*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDebugReportCallbackEXT*                   pCallback);
VKAPI_ATTR void VKAPI_CALL DestroyDebugReportCallbackEXT(
    VkInstance                                  instance,
    VkDebugReportCallbackEXT                    callback,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR void VKAPI_CALL DebugReportMessageEXT(
    VkInstance                                  instance,
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    uint64_t                                    object,
    size_t                                      location,
    int32_t                                     messageCode,
    const char*                                 pLayerPrefix,
    const char*                                 pMessage);
VKAPI_ATTR VkResult VKAPI_CALL DebugMarkerSetObjectTagEXT(
    VkDevice                                    device,
    VkDebugMarkerObjectTagInfoEXT*              pTagInfo);
VKAPI_ATTR VkResult VKAPI_CALL DebugMarkerSetObjectNameEXT(
    VkDevice                                    device,
    VkDebugMarkerObjectNameInfoEXT*             pNameInfo);
VKAPI_ATTR void VKAPI_CALL CmdDebugMarkerBeginEXT(
    VkCommandBuffer                             commandBuffer,
    VkDebugMarkerMarkerInfoEXT*                 pMarkerInfo);
VKAPI_ATTR void VKAPI_CALL CmdDebugMarkerInsertEXT(
    VkCommandBuffer                             commandBuffer,
    VkDebugMarkerMarkerInfoEXT*                 pMarkerInfo);
VKAPI_ATTR void VKAPI_CALL CmdDrawIndirectCountAMD(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride);
VKAPI_ATTR void VKAPI_CALL CmdDrawIndexedIndirectCountAMD(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceExternalImageFormatPropertiesNV(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkExternalMemoryHandleTypeFlagsNV           externalHandleType,
    VkExternalImageFormatPropertiesNV*          pExternalImageFormatProperties);
#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL GetMemoryWin32HandleNV(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    HANDLE*                                     pHandle);
#endif
VKAPI_ATTR void VKAPI_CALL GetDeviceGroupPeerMemoryFeaturesKHX(
    VkDevice                                    device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    VkPeerMemoryFeatureFlagsKHX*                pPeerMemoryFeatures);
VKAPI_ATTR VkResult VKAPI_CALL BindBufferMemory2KHX(
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindBufferMemoryInfoKHX*            pBindInfos);
VKAPI_ATTR VkResult VKAPI_CALL BindImageMemory2KHX(
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindImageMemoryInfoKHX*             pBindInfos);
VKAPI_ATTR void VKAPI_CALL CmdSetDeviceMaskKHX(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    deviceMask);
VKAPI_ATTR VkResult VKAPI_CALL GetDeviceGroupPresentCapabilitiesKHX(
    VkDevice                                    device,
    VkDeviceGroupPresentCapabilitiesKHX*        pDeviceGroupPresentCapabilities);
VKAPI_ATTR VkResult VKAPI_CALL GetDeviceGroupSurfacePresentModesKHX(
    VkDevice                                    device,
    VkSurfaceKHR                                surface,
    VkDeviceGroupPresentModeFlagsKHX*           pModes);
VKAPI_ATTR VkResult VKAPI_CALL AcquireNextImage2KHX(
    VkDevice                                    device,
    const VkAcquireNextImageInfoKHX*            pAcquireInfo,
    uint32_t*                                   pImageIndex);
VKAPI_ATTR void VKAPI_CALL CmdDispatchBaseKHX(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ);
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDevicePresentRectanglesKHX(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pRectCount,
    VkRect2D*                                   pRects);
#ifdef VK_USE_PLATFORM_VI_NN
VKAPI_ATTR VkResult VKAPI_CALL CreateViSurfaceNN(
    VkInstance                                  instance,
    const VkViSurfaceCreateInfoNN*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
VKAPI_ATTR VkResult VKAPI_CALL EnumeratePhysicalDeviceGroupsKHX(
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceGroupCount,
    VkPhysicalDeviceGroupPropertiesKHX*         pPhysicalDeviceGroupProperties);
VKAPI_ATTR void VKAPI_CALL CmdProcessCommandsNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCmdProcessCommandsInfoNVX*          pProcessCommandsInfo);
VKAPI_ATTR void VKAPI_CALL CmdReserveSpaceForCommandsNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCmdReserveSpaceForCommandsInfoNVX*  pReserveSpaceInfo);
VKAPI_ATTR VkResult VKAPI_CALL CreateIndirectCommandsLayoutNVX(
    VkDevice                                    device,
    const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkIndirectCommandsLayoutNVX*                pIndirectCommandsLayout);
VKAPI_ATTR void VKAPI_CALL DestroyIndirectCommandsLayoutNVX(
    VkDevice                                    device,
    VkIndirectCommandsLayoutNVX                 indirectCommandsLayout,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL CreateObjectTableNVX(
    VkDevice                                    device,
    const VkObjectTableCreateInfoNVX*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkObjectTableNVX*                           pObjectTable);
VKAPI_ATTR void VKAPI_CALL DestroyObjectTableNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    const VkAllocationCallbacks*                pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL RegisterObjectsNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectTableEntryNVX* const*         ppObjectTableEntries,
    const uint32_t*                             pObjectIndices);
VKAPI_ATTR VkResult VKAPI_CALL UnregisterObjectsNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectEntryTypeNVX*                 pObjectEntryTypes,
    const uint32_t*                             pObjectIndices);
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    VkPhysicalDevice                            physicalDevice,
    VkDeviceGeneratedCommandsFeaturesNVX*       pFeatures,
    VkDeviceGeneratedCommandsLimitsNVX*         pLimits);
VKAPI_ATTR void VKAPI_CALL CmdSetViewportWScalingNV(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const VkViewportWScalingNV*                 pViewportWScalings);
VKAPI_ATTR VkResult VKAPI_CALL ReleaseDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display);
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
VKAPI_ATTR VkResult VKAPI_CALL AcquireXlibDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    Display*                                    dpy,
    VkDisplayKHR                                display);
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
VKAPI_ATTR VkResult VKAPI_CALL GetRandROutputDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    Display*                                    dpy,
    RROutput                                    rrOutput,
    VkDisplayKHR*                               pDisplay);
#endif
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceCapabilities2EXT(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilities2EXT*                  pSurfaceCapabilities);
VKAPI_ATTR VkResult VKAPI_CALL DisplayPowerControlEXT(
    VkDevice                                    device,
    VkDisplayKHR                                display,
    const VkDisplayPowerInfoEXT*                pDisplayPowerInfo);
VKAPI_ATTR VkResult VKAPI_CALL RegisterDeviceEventEXT(
    VkDevice                                    device,
    const VkDeviceEventInfoEXT*                 pDeviceEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence);
VKAPI_ATTR VkResult VKAPI_CALL RegisterDisplayEventEXT(
    VkDevice                                    device,
    VkDisplayKHR                                display,
    const VkDisplayEventInfoEXT*                pDisplayEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence);
VKAPI_ATTR VkResult VKAPI_CALL GetSwapchainCounterEXT(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    uint64_t*                                   pCounterValue);
VKAPI_ATTR VkResult VKAPI_CALL GetRefreshCycleDurationGOOGLE(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    VkRefreshCycleDurationGOOGLE*               pDisplayTimingProperties);
VKAPI_ATTR VkResult VKAPI_CALL GetPastPresentationTimingGOOGLE(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    uint32_t*                                   pPresentationTimingCount,
    VkPastPresentationTimingGOOGLE*             pPresentationTimings);
VKAPI_ATTR void VKAPI_CALL CmdSetDiscardRectangleEXT(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    const VkRect2D*                             pDiscardRectangles);
VKAPI_ATTR void VKAPI_CALL SetHdrMetadataEXT(
    VkDevice                                    device,
    uint32_t                                    swapchainCount,
    const VkSwapchainKHR*                       pSwapchains,
    const VkHdrMetadataEXT*                     pMetadata);
#ifdef VK_USE_PLATFORM_IOS_MVK
VKAPI_ATTR VkResult VKAPI_CALL CreateIOSSurfaceMVK(
    VkInstance                                  instance,
    const VkIOSSurfaceCreateInfoMVK*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
VKAPI_ATTR VkResult VKAPI_CALL CreateMacOSSurfaceMVK(
    VkInstance                                  instance,
    const VkMacOSSurfaceCreateInfoMVK*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif
// Map of all APIs to be intercepted by this layer
static const std::unordered_map<std::string, void*> name_to_funcptr_map = {
    {"vkCreateInstance", (void*)CreateInstance},
    {"vkDestroyInstance", (void*)DestroyInstance},
    {"vkEnumeratePhysicalDevices", (void*)EnumeratePhysicalDevices},
    {"vkGetPhysicalDeviceFeatures", (void*)GetPhysicalDeviceFeatures},
    {"vkGetPhysicalDeviceFormatProperties", (void*)GetPhysicalDeviceFormatProperties},
    {"vkGetPhysicalDeviceImageFormatProperties", (void*)GetPhysicalDeviceImageFormatProperties},
    {"vkGetPhysicalDeviceProperties", (void*)GetPhysicalDeviceProperties},
    {"vkGetPhysicalDeviceQueueFamilyProperties", (void*)GetPhysicalDeviceQueueFamilyProperties},
    {"vkGetPhysicalDeviceMemoryProperties", (void*)GetPhysicalDeviceMemoryProperties},
    {"vkGetInstanceProcAddr", (void*)GetInstanceProcAddr},
    {"vkGetDeviceProcAddr", (void*)GetDeviceProcAddr},
    {"vkCreateDevice", (void*)CreateDevice},
    {"vkDestroyDevice", (void*)DestroyDevice},
    {"vkEnumerateDeviceExtensionProperties", (void*)EnumerateDeviceExtensionProperties},
    {"vkGetDeviceQueue", (void*)GetDeviceQueue},
    {"vkQueueSubmit", (void*)QueueSubmit},
    {"vkQueueWaitIdle", (void*)QueueWaitIdle},
    {"vkDeviceWaitIdle", (void*)DeviceWaitIdle},
    {"vkAllocateMemory", (void*)AllocateMemory},
    {"vkFreeMemory", (void*)FreeMemory},
    {"vkMapMemory", (void*)MapMemory},
    {"vkUnmapMemory", (void*)UnmapMemory},
    {"vkFlushMappedMemoryRanges", (void*)FlushMappedMemoryRanges},
    {"vkInvalidateMappedMemoryRanges", (void*)InvalidateMappedMemoryRanges},
    {"vkGetDeviceMemoryCommitment", (void*)GetDeviceMemoryCommitment},
    {"vkBindBufferMemory", (void*)BindBufferMemory},
    {"vkBindImageMemory", (void*)BindImageMemory},
    {"vkGetBufferMemoryRequirements", (void*)GetBufferMemoryRequirements},
    {"vkGetImageMemoryRequirements", (void*)GetImageMemoryRequirements},
    {"vkGetImageSparseMemoryRequirements", (void*)GetImageSparseMemoryRequirements},
    {"vkGetPhysicalDeviceSparseImageFormatProperties", (void*)GetPhysicalDeviceSparseImageFormatProperties},
    {"vkQueueBindSparse", (void*)QueueBindSparse},
    {"vkCreateFence", (void*)CreateFence},
    {"vkDestroyFence", (void*)DestroyFence},
    {"vkResetFences", (void*)ResetFences},
    {"vkGetFenceStatus", (void*)GetFenceStatus},
    {"vkWaitForFences", (void*)WaitForFences},
    {"vkCreateSemaphore", (void*)CreateSemaphore},
    {"vkDestroySemaphore", (void*)DestroySemaphore},
    {"vkCreateEvent", (void*)CreateEvent},
    {"vkDestroyEvent", (void*)DestroyEvent},
    {"vkGetEventStatus", (void*)GetEventStatus},
    {"vkSetEvent", (void*)SetEvent},
    {"vkResetEvent", (void*)ResetEvent},
    {"vkCreateQueryPool", (void*)CreateQueryPool},
    {"vkDestroyQueryPool", (void*)DestroyQueryPool},
    {"vkGetQueryPoolResults", (void*)GetQueryPoolResults},
    {"vkCreateBuffer", (void*)CreateBuffer},
    {"vkDestroyBuffer", (void*)DestroyBuffer},
    {"vkCreateBufferView", (void*)CreateBufferView},
    {"vkDestroyBufferView", (void*)DestroyBufferView},
    {"vkCreateImage", (void*)CreateImage},
    {"vkDestroyImage", (void*)DestroyImage},
    {"vkGetImageSubresourceLayout", (void*)GetImageSubresourceLayout},
    {"vkCreateImageView", (void*)CreateImageView},
    {"vkDestroyImageView", (void*)DestroyImageView},
    {"vkCreateShaderModule", (void*)CreateShaderModule},
    {"vkDestroyShaderModule", (void*)DestroyShaderModule},
    {"vkCreatePipelineCache", (void*)CreatePipelineCache},
    {"vkDestroyPipelineCache", (void*)DestroyPipelineCache},
    {"vkGetPipelineCacheData", (void*)GetPipelineCacheData},
    {"vkMergePipelineCaches", (void*)MergePipelineCaches},
    {"vkCreateGraphicsPipelines", (void*)CreateGraphicsPipelines},
    {"vkCreateComputePipelines", (void*)CreateComputePipelines},
    {"vkDestroyPipeline", (void*)DestroyPipeline},
    {"vkCreatePipelineLayout", (void*)CreatePipelineLayout},
    {"vkDestroyPipelineLayout", (void*)DestroyPipelineLayout},
    {"vkCreateSampler", (void*)CreateSampler},
    {"vkDestroySampler", (void*)DestroySampler},
    {"vkCreateDescriptorSetLayout", (void*)CreateDescriptorSetLayout},
    {"vkDestroyDescriptorSetLayout", (void*)DestroyDescriptorSetLayout},
    {"vkCreateDescriptorPool", (void*)CreateDescriptorPool},
    {"vkDestroyDescriptorPool", (void*)DestroyDescriptorPool},
    {"vkResetDescriptorPool", (void*)ResetDescriptorPool},
    {"vkAllocateDescriptorSets", (void*)AllocateDescriptorSets},
    {"vkFreeDescriptorSets", (void*)FreeDescriptorSets},
    {"vkUpdateDescriptorSets", (void*)UpdateDescriptorSets},
    {"vkCreateFramebuffer", (void*)CreateFramebuffer},
    {"vkDestroyFramebuffer", (void*)DestroyFramebuffer},
    {"vkCreateRenderPass", (void*)CreateRenderPass},
    {"vkDestroyRenderPass", (void*)DestroyRenderPass},
    {"vkGetRenderAreaGranularity", (void*)GetRenderAreaGranularity},
    {"vkCreateCommandPool", (void*)CreateCommandPool},
    {"vkDestroyCommandPool", (void*)DestroyCommandPool},
    {"vkResetCommandPool", (void*)ResetCommandPool},
    {"vkAllocateCommandBuffers", (void*)AllocateCommandBuffers},
    {"vkFreeCommandBuffers", (void*)FreeCommandBuffers},
    {"vkBeginCommandBuffer", (void*)BeginCommandBuffer},
    {"vkEndCommandBuffer", (void*)EndCommandBuffer},
    {"vkResetCommandBuffer", (void*)ResetCommandBuffer},
    {"vkCmdBindPipeline", (void*)CmdBindPipeline},
    {"vkCmdSetViewport", (void*)CmdSetViewport},
    {"vkCmdSetScissor", (void*)CmdSetScissor},
    {"vkCmdSetLineWidth", (void*)CmdSetLineWidth},
    {"vkCmdSetDepthBias", (void*)CmdSetDepthBias},
    {"vkCmdSetBlendConstants", (void*)CmdSetBlendConstants},
    {"vkCmdSetDepthBounds", (void*)CmdSetDepthBounds},
    {"vkCmdSetStencilCompareMask", (void*)CmdSetStencilCompareMask},
    {"vkCmdSetStencilWriteMask", (void*)CmdSetStencilWriteMask},
    {"vkCmdSetStencilReference", (void*)CmdSetStencilReference},
    {"vkCmdBindDescriptorSets", (void*)CmdBindDescriptorSets},
    {"vkCmdBindIndexBuffer", (void*)CmdBindIndexBuffer},
    {"vkCmdBindVertexBuffers", (void*)CmdBindVertexBuffers},
    {"vkCmdDraw", (void*)CmdDraw},
    {"vkCmdDrawIndexed", (void*)CmdDrawIndexed},
    {"vkCmdDrawIndirect", (void*)CmdDrawIndirect},
    {"vkCmdDrawIndexedIndirect", (void*)CmdDrawIndexedIndirect},
    {"vkCmdDispatch", (void*)CmdDispatch},
    {"vkCmdDispatchIndirect", (void*)CmdDispatchIndirect},
    {"vkCmdCopyBuffer", (void*)CmdCopyBuffer},
    {"vkCmdCopyImage", (void*)CmdCopyImage},
    {"vkCmdBlitImage", (void*)CmdBlitImage},
    {"vkCmdCopyBufferToImage", (void*)CmdCopyBufferToImage},
    {"vkCmdCopyImageToBuffer", (void*)CmdCopyImageToBuffer},
    {"vkCmdUpdateBuffer", (void*)CmdUpdateBuffer},
    {"vkCmdFillBuffer", (void*)CmdFillBuffer},
    {"vkCmdClearColorImage", (void*)CmdClearColorImage},
    {"vkCmdClearDepthStencilImage", (void*)CmdClearDepthStencilImage},
    {"vkCmdClearAttachments", (void*)CmdClearAttachments},
    {"vkCmdResolveImage", (void*)CmdResolveImage},
    {"vkCmdSetEvent", (void*)CmdSetEvent},
    {"vkCmdResetEvent", (void*)CmdResetEvent},
    {"vkCmdWaitEvents", (void*)CmdWaitEvents},
    {"vkCmdPipelineBarrier", (void*)CmdPipelineBarrier},
    {"vkCmdBeginQuery", (void*)CmdBeginQuery},
    {"vkCmdEndQuery", (void*)CmdEndQuery},
    {"vkCmdResetQueryPool", (void*)CmdResetQueryPool},
    {"vkCmdWriteTimestamp", (void*)CmdWriteTimestamp},
    {"vkCmdCopyQueryPoolResults", (void*)CmdCopyQueryPoolResults},
    {"vkCmdPushConstants", (void*)CmdPushConstants},
    {"vkCmdBeginRenderPass", (void*)CmdBeginRenderPass},
    {"vkCmdNextSubpass", (void*)CmdNextSubpass},
    {"vkCmdEndRenderPass", (void*)CmdEndRenderPass},
    {"vkCmdExecuteCommands", (void*)CmdExecuteCommands},
    {"vkDestroySurfaceKHR", (void*)DestroySurfaceKHR},
    {"vkGetPhysicalDeviceSurfaceSupportKHR", (void*)GetPhysicalDeviceSurfaceSupportKHR},
    {"vkGetPhysicalDeviceSurfaceCapabilitiesKHR", (void*)GetPhysicalDeviceSurfaceCapabilitiesKHR},
    {"vkGetPhysicalDeviceSurfaceFormatsKHR", (void*)GetPhysicalDeviceSurfaceFormatsKHR},
    {"vkGetPhysicalDeviceSurfacePresentModesKHR", (void*)GetPhysicalDeviceSurfacePresentModesKHR},
    {"vkCreateSwapchainKHR", (void*)CreateSwapchainKHR},
    {"vkDestroySwapchainKHR", (void*)DestroySwapchainKHR},
    {"vkGetSwapchainImagesKHR", (void*)GetSwapchainImagesKHR},
    {"vkAcquireNextImageKHR", (void*)AcquireNextImageKHR},
    {"vkQueuePresentKHR", (void*)QueuePresentKHR},
    {"vkGetPhysicalDeviceDisplayPropertiesKHR", (void*)GetPhysicalDeviceDisplayPropertiesKHR},
    {"vkGetPhysicalDeviceDisplayPlanePropertiesKHR", (void*)GetPhysicalDeviceDisplayPlanePropertiesKHR},
    {"vkGetDisplayPlaneSupportedDisplaysKHR", (void*)GetDisplayPlaneSupportedDisplaysKHR},
    {"vkGetDisplayModePropertiesKHR", (void*)GetDisplayModePropertiesKHR},
    {"vkCreateDisplayModeKHR", (void*)CreateDisplayModeKHR},
    {"vkGetDisplayPlaneCapabilitiesKHR", (void*)GetDisplayPlaneCapabilitiesKHR},
    {"vkCreateDisplayPlaneSurfaceKHR", (void*)CreateDisplayPlaneSurfaceKHR},
    {"vkCreateSharedSwapchainsKHR", (void*)CreateSharedSwapchainsKHR},
#ifdef VK_USE_PLATFORM_XLIB_KHR
    {"vkCreateXlibSurfaceKHR", (void*)CreateXlibSurfaceKHR},
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
    {"vkGetPhysicalDeviceXlibPresentationSupportKHR", (void*)GetPhysicalDeviceXlibPresentationSupportKHR},
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    {"vkCreateXcbSurfaceKHR", (void*)CreateXcbSurfaceKHR},
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    {"vkGetPhysicalDeviceXcbPresentationSupportKHR", (void*)GetPhysicalDeviceXcbPresentationSupportKHR},
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    {"vkCreateWaylandSurfaceKHR", (void*)CreateWaylandSurfaceKHR},
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    {"vkGetPhysicalDeviceWaylandPresentationSupportKHR", (void*)GetPhysicalDeviceWaylandPresentationSupportKHR},
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
    {"vkCreateMirSurfaceKHR", (void*)CreateMirSurfaceKHR},
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
    {"vkGetPhysicalDeviceMirPresentationSupportKHR", (void*)GetPhysicalDeviceMirPresentationSupportKHR},
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    {"vkCreateAndroidSurfaceKHR", (void*)CreateAndroidSurfaceKHR},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkCreateWin32SurfaceKHR", (void*)CreateWin32SurfaceKHR},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetPhysicalDeviceWin32PresentationSupportKHR", (void*)GetPhysicalDeviceWin32PresentationSupportKHR},
#endif
    {"vkGetPhysicalDeviceFeatures2KHR", (void*)GetPhysicalDeviceFeatures2KHR},
    {"vkGetPhysicalDeviceProperties2KHR", (void*)GetPhysicalDeviceProperties2KHR},
    {"vkGetPhysicalDeviceFormatProperties2KHR", (void*)GetPhysicalDeviceFormatProperties2KHR},
    {"vkGetPhysicalDeviceImageFormatProperties2KHR", (void*)GetPhysicalDeviceImageFormatProperties2KHR},
    {"vkGetPhysicalDeviceQueueFamilyProperties2KHR", (void*)GetPhysicalDeviceQueueFamilyProperties2KHR},
    {"vkGetPhysicalDeviceMemoryProperties2KHR", (void*)GetPhysicalDeviceMemoryProperties2KHR},
    {"vkGetPhysicalDeviceSparseImageFormatProperties2KHR", (void*)GetPhysicalDeviceSparseImageFormatProperties2KHR},
    {"vkTrimCommandPoolKHR", (void*)TrimCommandPoolKHR},
    {"vkGetPhysicalDeviceExternalBufferPropertiesKHR", (void*)GetPhysicalDeviceExternalBufferPropertiesKHR},
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetMemoryWin32HandleKHR", (void*)GetMemoryWin32HandleKHR},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetMemoryWin32HandlePropertiesKHR", (void*)GetMemoryWin32HandlePropertiesKHR},
#endif
    {"vkGetMemoryFdKHR", (void*)GetMemoryFdKHR},
    {"vkGetMemoryFdPropertiesKHR", (void*)GetMemoryFdPropertiesKHR},
    {"vkGetPhysicalDeviceExternalSemaphorePropertiesKHR", (void*)GetPhysicalDeviceExternalSemaphorePropertiesKHR},
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkImportSemaphoreWin32HandleKHR", (void*)ImportSemaphoreWin32HandleKHR},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetSemaphoreWin32HandleKHR", (void*)GetSemaphoreWin32HandleKHR},
#endif
    {"vkImportSemaphoreFdKHR", (void*)ImportSemaphoreFdKHR},
    {"vkGetSemaphoreFdKHR", (void*)GetSemaphoreFdKHR},
    {"vkCmdPushDescriptorSetKHR", (void*)CmdPushDescriptorSetKHR},
    {"vkCreateDescriptorUpdateTemplateKHR", (void*)CreateDescriptorUpdateTemplateKHR},
    {"vkDestroyDescriptorUpdateTemplateKHR", (void*)DestroyDescriptorUpdateTemplateKHR},
    {"vkUpdateDescriptorSetWithTemplateKHR", (void*)UpdateDescriptorSetWithTemplateKHR},
    {"vkCmdPushDescriptorSetWithTemplateKHR", (void*)CmdPushDescriptorSetWithTemplateKHR},
    {"vkGetSwapchainStatusKHR", (void*)GetSwapchainStatusKHR},
    {"vkGetPhysicalDeviceExternalFencePropertiesKHR", (void*)GetPhysicalDeviceExternalFencePropertiesKHR},
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkImportFenceWin32HandleKHR", (void*)ImportFenceWin32HandleKHR},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetFenceWin32HandleKHR", (void*)GetFenceWin32HandleKHR},
#endif
    {"vkImportFenceFdKHR", (void*)ImportFenceFdKHR},
    {"vkGetFenceFdKHR", (void*)GetFenceFdKHR},
    {"vkGetPhysicalDeviceSurfaceCapabilities2KHR", (void*)GetPhysicalDeviceSurfaceCapabilities2KHR},
    {"vkGetPhysicalDeviceSurfaceFormats2KHR", (void*)GetPhysicalDeviceSurfaceFormats2KHR},
    {"vkGetImageMemoryRequirements2KHR", (void*)GetImageMemoryRequirements2KHR},
    {"vkGetBufferMemoryRequirements2KHR", (void*)GetBufferMemoryRequirements2KHR},
    {"vkGetImageSparseMemoryRequirements2KHR", (void*)GetImageSparseMemoryRequirements2KHR},
    {"vkCreateDebugReportCallbackEXT", (void*)CreateDebugReportCallbackEXT},
    {"vkDestroyDebugReportCallbackEXT", (void*)DestroyDebugReportCallbackEXT},
    {"vkDebugReportMessageEXT", (void*)DebugReportMessageEXT},
    {"vkDebugMarkerSetObjectTagEXT", (void*)DebugMarkerSetObjectTagEXT},
    {"vkDebugMarkerSetObjectNameEXT", (void*)DebugMarkerSetObjectNameEXT},
    {"vkCmdDebugMarkerBeginEXT", (void*)CmdDebugMarkerBeginEXT},
    {"vkCmdDebugMarkerInsertEXT", (void*)CmdDebugMarkerInsertEXT},
    {"vkCmdDrawIndirectCountAMD", (void*)CmdDrawIndirectCountAMD},
    {"vkCmdDrawIndexedIndirectCountAMD", (void*)CmdDrawIndexedIndirectCountAMD},
    {"vkGetPhysicalDeviceExternalImageFormatPropertiesNV", (void*)GetPhysicalDeviceExternalImageFormatPropertiesNV},
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetMemoryWin32HandleNV", (void*)GetMemoryWin32HandleNV},
#endif
    {"vkGetDeviceGroupPeerMemoryFeaturesKHX", (void*)GetDeviceGroupPeerMemoryFeaturesKHX},
    {"vkBindBufferMemory2KHX", (void*)BindBufferMemory2KHX},
    {"vkBindImageMemory2KHX", (void*)BindImageMemory2KHX},
    {"vkCmdSetDeviceMaskKHX", (void*)CmdSetDeviceMaskKHX},
    {"vkGetDeviceGroupPresentCapabilitiesKHX", (void*)GetDeviceGroupPresentCapabilitiesKHX},
    {"vkGetDeviceGroupSurfacePresentModesKHX", (void*)GetDeviceGroupSurfacePresentModesKHX},
    {"vkAcquireNextImage2KHX", (void*)AcquireNextImage2KHX},
    {"vkCmdDispatchBaseKHX", (void*)CmdDispatchBaseKHX},
    {"vkGetPhysicalDevicePresentRectanglesKHX", (void*)GetPhysicalDevicePresentRectanglesKHX},
#ifdef VK_USE_PLATFORM_VI_NN
    {"vkCreateViSurfaceNN", (void*)CreateViSurfaceNN},
#endif
    {"vkEnumeratePhysicalDeviceGroupsKHX", (void*)EnumeratePhysicalDeviceGroupsKHX},
    {"vkCmdProcessCommandsNVX", (void*)CmdProcessCommandsNVX},
    {"vkCmdReserveSpaceForCommandsNVX", (void*)CmdReserveSpaceForCommandsNVX},
    {"vkCreateIndirectCommandsLayoutNVX", (void*)CreateIndirectCommandsLayoutNVX},
    {"vkDestroyIndirectCommandsLayoutNVX", (void*)DestroyIndirectCommandsLayoutNVX},
    {"vkCreateObjectTableNVX", (void*)CreateObjectTableNVX},
    {"vkDestroyObjectTableNVX", (void*)DestroyObjectTableNVX},
    {"vkRegisterObjectsNVX", (void*)RegisterObjectsNVX},
    {"vkUnregisterObjectsNVX", (void*)UnregisterObjectsNVX},
    {"vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX", (void*)GetPhysicalDeviceGeneratedCommandsPropertiesNVX},
    {"vkCmdSetViewportWScalingNV", (void*)CmdSetViewportWScalingNV},
    {"vkReleaseDisplayEXT", (void*)ReleaseDisplayEXT},
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    {"vkAcquireXlibDisplayEXT", (void*)AcquireXlibDisplayEXT},
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    {"vkGetRandROutputDisplayEXT", (void*)GetRandROutputDisplayEXT},
#endif
    {"vkGetPhysicalDeviceSurfaceCapabilities2EXT", (void*)GetPhysicalDeviceSurfaceCapabilities2EXT},
    {"vkDisplayPowerControlEXT", (void*)DisplayPowerControlEXT},
    {"vkRegisterDeviceEventEXT", (void*)RegisterDeviceEventEXT},
    {"vkRegisterDisplayEventEXT", (void*)RegisterDisplayEventEXT},
    {"vkGetSwapchainCounterEXT", (void*)GetSwapchainCounterEXT},
    {"vkGetRefreshCycleDurationGOOGLE", (void*)GetRefreshCycleDurationGOOGLE},
    {"vkGetPastPresentationTimingGOOGLE", (void*)GetPastPresentationTimingGOOGLE},
    {"vkCmdSetDiscardRectangleEXT", (void*)CmdSetDiscardRectangleEXT},
    {"vkSetHdrMetadataEXT", (void*)SetHdrMetadataEXT},
#ifdef VK_USE_PLATFORM_IOS_MVK
    {"vkCreateIOSSurfaceMVK", (void*)CreateIOSSurfaceMVK},
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
    {"vkCreateMacOSSurfaceMVK", (void*)CreateMacOSSurfaceMVK},
#endif
};


} // namespace parameter_validation

#endif
