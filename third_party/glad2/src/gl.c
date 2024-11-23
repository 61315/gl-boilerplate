/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glad/gl.h>

#ifndef GLAD_IMPL_UTIL_C_
#define GLAD_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLAD_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLAD_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLAD_IMPL_UTIL_C_ */

#ifdef __cplusplus
extern "C" {
#endif



int GLAD_GL_VERSION_1_0 = 0;
int GLAD_GL_VERSION_1_1 = 0;
int GLAD_GL_VERSION_1_2 = 0;
int GLAD_GL_VERSION_1_3 = 0;
int GLAD_GL_VERSION_1_4 = 0;
int GLAD_GL_VERSION_1_5 = 0;
int GLAD_GL_VERSION_2_0 = 0;
int GLAD_GL_VERSION_2_1 = 0;
int GLAD_GL_VERSION_3_0 = 0;
int GLAD_GL_VERSION_3_1 = 0;
int GLAD_GL_VERSION_3_2 = 0;
int GLAD_GL_VERSION_3_3 = 0;
int GLAD_GL_ARB_ES2_compatibility = 0;
int GLAD_GL_ARB_ES3_1_compatibility = 0;
int GLAD_GL_ARB_ES3_2_compatibility = 0;
int GLAD_GL_ARB_ES3_compatibility = 0;
int GLAD_GL_ARB_arrays_of_arrays = 0;
int GLAD_GL_ARB_base_instance = 0;
int GLAD_GL_ARB_bindless_texture = 0;
int GLAD_GL_ARB_blend_func_extended = 0;
int GLAD_GL_ARB_buffer_storage = 0;
int GLAD_GL_ARB_cl_event = 0;
int GLAD_GL_ARB_clear_buffer_object = 0;
int GLAD_GL_ARB_clear_texture = 0;
int GLAD_GL_ARB_clip_control = 0;
int GLAD_GL_ARB_color_buffer_float = 0;
int GLAD_GL_ARB_compatibility = 0;
int GLAD_GL_ARB_compressed_texture_pixel_storage = 0;
int GLAD_GL_ARB_compute_shader = 0;
int GLAD_GL_ARB_compute_variable_group_size = 0;
int GLAD_GL_ARB_conditional_render_inverted = 0;
int GLAD_GL_ARB_conservative_depth = 0;
int GLAD_GL_ARB_copy_buffer = 0;
int GLAD_GL_ARB_copy_image = 0;
int GLAD_GL_ARB_cull_distance = 0;
int GLAD_GL_ARB_debug_output = 0;
int GLAD_GL_ARB_depth_buffer_float = 0;
int GLAD_GL_ARB_depth_clamp = 0;
int GLAD_GL_ARB_depth_texture = 0;
int GLAD_GL_ARB_derivative_control = 0;
int GLAD_GL_ARB_direct_state_access = 0;
int GLAD_GL_ARB_draw_buffers = 0;
int GLAD_GL_ARB_draw_buffers_blend = 0;
int GLAD_GL_ARB_draw_elements_base_vertex = 0;
int GLAD_GL_ARB_draw_indirect = 0;
int GLAD_GL_ARB_draw_instanced = 0;
int GLAD_GL_ARB_enhanced_layouts = 0;
int GLAD_GL_ARB_explicit_attrib_location = 0;
int GLAD_GL_ARB_explicit_uniform_location = 0;
int GLAD_GL_ARB_fragment_coord_conventions = 0;
int GLAD_GL_ARB_fragment_layer_viewport = 0;
int GLAD_GL_ARB_fragment_program = 0;
int GLAD_GL_ARB_fragment_program_shadow = 0;
int GLAD_GL_ARB_fragment_shader = 0;
int GLAD_GL_ARB_fragment_shader_interlock = 0;
int GLAD_GL_ARB_framebuffer_no_attachments = 0;
int GLAD_GL_ARB_framebuffer_object = 0;
int GLAD_GL_ARB_framebuffer_sRGB = 0;
int GLAD_GL_ARB_geometry_shader4 = 0;
int GLAD_GL_ARB_get_program_binary = 0;
int GLAD_GL_ARB_get_texture_sub_image = 0;
int GLAD_GL_ARB_gl_spirv = 0;
int GLAD_GL_ARB_gpu_shader5 = 0;
int GLAD_GL_ARB_gpu_shader_fp64 = 0;
int GLAD_GL_ARB_gpu_shader_int64 = 0;
int GLAD_GL_ARB_half_float_pixel = 0;
int GLAD_GL_ARB_half_float_vertex = 0;
int GLAD_GL_ARB_imaging = 0;
int GLAD_GL_ARB_indirect_parameters = 0;
int GLAD_GL_ARB_instanced_arrays = 0;
int GLAD_GL_ARB_internalformat_query = 0;
int GLAD_GL_ARB_internalformat_query2 = 0;
int GLAD_GL_ARB_invalidate_subdata = 0;
int GLAD_GL_ARB_map_buffer_alignment = 0;
int GLAD_GL_ARB_map_buffer_range = 0;
int GLAD_GL_ARB_matrix_palette = 0;
int GLAD_GL_ARB_multi_bind = 0;
int GLAD_GL_ARB_multi_draw_indirect = 0;
int GLAD_GL_ARB_multisample = 0;
int GLAD_GL_ARB_multitexture = 0;
int GLAD_GL_ARB_occlusion_query = 0;
int GLAD_GL_ARB_occlusion_query2 = 0;
int GLAD_GL_ARB_parallel_shader_compile = 0;
int GLAD_GL_ARB_pipeline_statistics_query = 0;
int GLAD_GL_ARB_pixel_buffer_object = 0;
int GLAD_GL_ARB_point_parameters = 0;
int GLAD_GL_ARB_point_sprite = 0;
int GLAD_GL_ARB_polygon_offset_clamp = 0;
int GLAD_GL_ARB_post_depth_coverage = 0;
int GLAD_GL_ARB_program_interface_query = 0;
int GLAD_GL_ARB_provoking_vertex = 0;
int GLAD_GL_ARB_query_buffer_object = 0;
int GLAD_GL_ARB_robust_buffer_access_behavior = 0;
int GLAD_GL_ARB_robustness = 0;
int GLAD_GL_ARB_robustness_isolation = 0;
int GLAD_GL_ARB_sample_locations = 0;
int GLAD_GL_ARB_sample_shading = 0;
int GLAD_GL_ARB_sampler_objects = 0;
int GLAD_GL_ARB_seamless_cube_map = 0;
int GLAD_GL_ARB_seamless_cubemap_per_texture = 0;
int GLAD_GL_ARB_separate_shader_objects = 0;
int GLAD_GL_ARB_shader_atomic_counter_ops = 0;
int GLAD_GL_ARB_shader_atomic_counters = 0;
int GLAD_GL_ARB_shader_ballot = 0;
int GLAD_GL_ARB_shader_bit_encoding = 0;
int GLAD_GL_ARB_shader_clock = 0;
int GLAD_GL_ARB_shader_draw_parameters = 0;
int GLAD_GL_ARB_shader_group_vote = 0;
int GLAD_GL_ARB_shader_image_load_store = 0;
int GLAD_GL_ARB_shader_image_size = 0;
int GLAD_GL_ARB_shader_objects = 0;
int GLAD_GL_ARB_shader_precision = 0;
int GLAD_GL_ARB_shader_stencil_export = 0;
int GLAD_GL_ARB_shader_storage_buffer_object = 0;
int GLAD_GL_ARB_shader_subroutine = 0;
int GLAD_GL_ARB_shader_texture_image_samples = 0;
int GLAD_GL_ARB_shader_texture_lod = 0;
int GLAD_GL_ARB_shader_viewport_layer_array = 0;
int GLAD_GL_ARB_shading_language_100 = 0;
int GLAD_GL_ARB_shading_language_420pack = 0;
int GLAD_GL_ARB_shading_language_include = 0;
int GLAD_GL_ARB_shading_language_packing = 0;
int GLAD_GL_ARB_shadow = 0;
int GLAD_GL_ARB_shadow_ambient = 0;
int GLAD_GL_ARB_sparse_buffer = 0;
int GLAD_GL_ARB_sparse_texture = 0;
int GLAD_GL_ARB_sparse_texture2 = 0;
int GLAD_GL_ARB_sparse_texture_clamp = 0;
int GLAD_GL_ARB_spirv_extensions = 0;
int GLAD_GL_ARB_stencil_texturing = 0;
int GLAD_GL_ARB_sync = 0;
int GLAD_GL_ARB_tessellation_shader = 0;
int GLAD_GL_ARB_texture_barrier = 0;
int GLAD_GL_ARB_texture_border_clamp = 0;
int GLAD_GL_ARB_texture_buffer_object = 0;
int GLAD_GL_ARB_texture_buffer_object_rgb32 = 0;
int GLAD_GL_ARB_texture_buffer_range = 0;
int GLAD_GL_ARB_texture_compression = 0;
int GLAD_GL_ARB_texture_compression_bptc = 0;
int GLAD_GL_ARB_texture_compression_rgtc = 0;
int GLAD_GL_ARB_texture_cube_map = 0;
int GLAD_GL_ARB_texture_cube_map_array = 0;
int GLAD_GL_ARB_texture_env_add = 0;
int GLAD_GL_ARB_texture_env_combine = 0;
int GLAD_GL_ARB_texture_env_crossbar = 0;
int GLAD_GL_ARB_texture_env_dot3 = 0;
int GLAD_GL_ARB_texture_filter_anisotropic = 0;
int GLAD_GL_ARB_texture_filter_minmax = 0;
int GLAD_GL_ARB_texture_float = 0;
int GLAD_GL_ARB_texture_gather = 0;
int GLAD_GL_ARB_texture_mirror_clamp_to_edge = 0;
int GLAD_GL_ARB_texture_mirrored_repeat = 0;
int GLAD_GL_ARB_texture_multisample = 0;
int GLAD_GL_ARB_texture_non_power_of_two = 0;
int GLAD_GL_ARB_texture_query_levels = 0;
int GLAD_GL_ARB_texture_query_lod = 0;
int GLAD_GL_ARB_texture_rectangle = 0;
int GLAD_GL_ARB_texture_rg = 0;
int GLAD_GL_ARB_texture_rgb10_a2ui = 0;
int GLAD_GL_ARB_texture_stencil8 = 0;
int GLAD_GL_ARB_texture_storage = 0;
int GLAD_GL_ARB_texture_storage_multisample = 0;
int GLAD_GL_ARB_texture_swizzle = 0;
int GLAD_GL_ARB_texture_view = 0;
int GLAD_GL_ARB_timer_query = 0;
int GLAD_GL_ARB_transform_feedback2 = 0;
int GLAD_GL_ARB_transform_feedback3 = 0;
int GLAD_GL_ARB_transform_feedback_instanced = 0;
int GLAD_GL_ARB_transform_feedback_overflow_query = 0;
int GLAD_GL_ARB_transpose_matrix = 0;
int GLAD_GL_ARB_uniform_buffer_object = 0;
int GLAD_GL_ARB_vertex_array_bgra = 0;
int GLAD_GL_ARB_vertex_array_object = 0;
int GLAD_GL_ARB_vertex_attrib_64bit = 0;
int GLAD_GL_ARB_vertex_attrib_binding = 0;
int GLAD_GL_ARB_vertex_blend = 0;
int GLAD_GL_ARB_vertex_buffer_object = 0;
int GLAD_GL_ARB_vertex_program = 0;
int GLAD_GL_ARB_vertex_shader = 0;
int GLAD_GL_ARB_vertex_type_10f_11f_11f_rev = 0;
int GLAD_GL_ARB_vertex_type_2_10_10_10_rev = 0;
int GLAD_GL_ARB_viewport_array = 0;
int GLAD_GL_ARB_window_pos = 0;
int GLAD_GL_EXT_422_pixels = 0;
int GLAD_GL_EXT_EGL_image_storage = 0;
int GLAD_GL_EXT_EGL_sync = 0;
int GLAD_GL_EXT_abgr = 0;
int GLAD_GL_EXT_bgra = 0;
int GLAD_GL_EXT_bindable_uniform = 0;
int GLAD_GL_EXT_blend_color = 0;
int GLAD_GL_EXT_blend_equation_separate = 0;
int GLAD_GL_EXT_blend_func_separate = 0;
int GLAD_GL_EXT_blend_logic_op = 0;
int GLAD_GL_EXT_blend_minmax = 0;
int GLAD_GL_EXT_blend_subtract = 0;
int GLAD_GL_EXT_clip_volume_hint = 0;
int GLAD_GL_EXT_cmyka = 0;
int GLAD_GL_EXT_color_subtable = 0;
int GLAD_GL_EXT_compiled_vertex_array = 0;
int GLAD_GL_EXT_convolution = 0;
int GLAD_GL_EXT_coordinate_frame = 0;
int GLAD_GL_EXT_copy_texture = 0;
int GLAD_GL_EXT_cull_vertex = 0;
int GLAD_GL_EXT_debug_label = 0;
int GLAD_GL_EXT_debug_marker = 0;
int GLAD_GL_EXT_depth_bounds_test = 0;
int GLAD_GL_EXT_direct_state_access = 0;
int GLAD_GL_EXT_draw_buffers2 = 0;
int GLAD_GL_EXT_draw_instanced = 0;
int GLAD_GL_EXT_draw_range_elements = 0;
int GLAD_GL_EXT_external_buffer = 0;
int GLAD_GL_EXT_fog_coord = 0;
int GLAD_GL_EXT_framebuffer_blit = 0;
int GLAD_GL_EXT_framebuffer_blit_layers = 0;
int GLAD_GL_EXT_framebuffer_multisample = 0;
int GLAD_GL_EXT_framebuffer_multisample_blit_scaled = 0;
int GLAD_GL_EXT_framebuffer_object = 0;
int GLAD_GL_EXT_framebuffer_sRGB = 0;
int GLAD_GL_EXT_geometry_shader4 = 0;
int GLAD_GL_EXT_gpu_program_parameters = 0;
int GLAD_GL_EXT_gpu_shader4 = 0;
int GLAD_GL_EXT_histogram = 0;
int GLAD_GL_EXT_index_array_formats = 0;
int GLAD_GL_EXT_index_func = 0;
int GLAD_GL_EXT_index_material = 0;
int GLAD_GL_EXT_index_texture = 0;
int GLAD_GL_EXT_light_texture = 0;
int GLAD_GL_EXT_memory_object = 0;
int GLAD_GL_EXT_memory_object_fd = 0;
int GLAD_GL_EXT_memory_object_win32 = 0;
int GLAD_GL_EXT_misc_attribute = 0;
int GLAD_GL_EXT_multi_draw_arrays = 0;
int GLAD_GL_EXT_multisample = 0;
int GLAD_GL_EXT_multiview_tessellation_geometry_shader = 0;
int GLAD_GL_EXT_multiview_texture_multisample = 0;
int GLAD_GL_EXT_multiview_timer_query = 0;
int GLAD_GL_EXT_packed_depth_stencil = 0;
int GLAD_GL_EXT_packed_float = 0;
int GLAD_GL_EXT_packed_pixels = 0;
int GLAD_GL_EXT_paletted_texture = 0;
int GLAD_GL_EXT_pixel_buffer_object = 0;
int GLAD_GL_EXT_pixel_transform = 0;
int GLAD_GL_EXT_pixel_transform_color_table = 0;
int GLAD_GL_EXT_point_parameters = 0;
int GLAD_GL_EXT_polygon_offset = 0;
int GLAD_GL_EXT_polygon_offset_clamp = 0;
int GLAD_GL_EXT_post_depth_coverage = 0;
int GLAD_GL_EXT_provoking_vertex = 0;
int GLAD_GL_EXT_raster_multisample = 0;
int GLAD_GL_EXT_rescale_normal = 0;
int GLAD_GL_EXT_secondary_color = 0;
int GLAD_GL_EXT_semaphore = 0;
int GLAD_GL_EXT_semaphore_fd = 0;
int GLAD_GL_EXT_semaphore_win32 = 0;
int GLAD_GL_EXT_separate_shader_objects = 0;
int GLAD_GL_EXT_separate_specular_color = 0;
int GLAD_GL_EXT_shader_framebuffer_fetch = 0;
int GLAD_GL_EXT_shader_framebuffer_fetch_non_coherent = 0;
int GLAD_GL_EXT_shader_image_load_formatted = 0;
int GLAD_GL_EXT_shader_image_load_store = 0;
int GLAD_GL_EXT_shader_integer_mix = 0;
int GLAD_GL_EXT_shader_samples_identical = 0;
int GLAD_GL_EXT_shadow_funcs = 0;
int GLAD_GL_EXT_shared_texture_palette = 0;
int GLAD_GL_EXT_sparse_texture2 = 0;
int GLAD_GL_EXT_stencil_clear_tag = 0;
int GLAD_GL_EXT_stencil_two_side = 0;
int GLAD_GL_EXT_stencil_wrap = 0;
int GLAD_GL_EXT_subtexture = 0;
int GLAD_GL_EXT_texture = 0;
int GLAD_GL_EXT_texture3D = 0;
int GLAD_GL_EXT_texture_array = 0;
int GLAD_GL_EXT_texture_buffer_object = 0;
int GLAD_GL_EXT_texture_compression_latc = 0;
int GLAD_GL_EXT_texture_compression_rgtc = 0;
int GLAD_GL_EXT_texture_compression_s3tc = 0;
int GLAD_GL_EXT_texture_cube_map = 0;
int GLAD_GL_EXT_texture_env_add = 0;
int GLAD_GL_EXT_texture_env_combine = 0;
int GLAD_GL_EXT_texture_env_dot3 = 0;
int GLAD_GL_EXT_texture_filter_anisotropic = 0;
int GLAD_GL_EXT_texture_filter_minmax = 0;
int GLAD_GL_EXT_texture_integer = 0;
int GLAD_GL_EXT_texture_lod_bias = 0;
int GLAD_GL_EXT_texture_mirror_clamp = 0;
int GLAD_GL_EXT_texture_object = 0;
int GLAD_GL_EXT_texture_perturb_normal = 0;
int GLAD_GL_EXT_texture_sRGB = 0;
int GLAD_GL_EXT_texture_sRGB_R8 = 0;
int GLAD_GL_EXT_texture_sRGB_RG8 = 0;
int GLAD_GL_EXT_texture_sRGB_decode = 0;
int GLAD_GL_EXT_texture_shadow_lod = 0;
int GLAD_GL_EXT_texture_shared_exponent = 0;
int GLAD_GL_EXT_texture_snorm = 0;
int GLAD_GL_EXT_texture_storage = 0;
int GLAD_GL_EXT_texture_swizzle = 0;
int GLAD_GL_EXT_timer_query = 0;
int GLAD_GL_EXT_transform_feedback = 0;
int GLAD_GL_EXT_vertex_array = 0;
int GLAD_GL_EXT_vertex_array_bgra = 0;
int GLAD_GL_EXT_vertex_attrib_64bit = 0;
int GLAD_GL_EXT_vertex_shader = 0;
int GLAD_GL_EXT_vertex_weighting = 0;
int GLAD_GL_EXT_win32_keyed_mutex = 0;
int GLAD_GL_EXT_window_rectangles = 0;
int GLAD_GL_EXT_x11_sync_object = 0;
int GLAD_GL_KHR_blend_equation_advanced = 0;
int GLAD_GL_KHR_blend_equation_advanced_coherent = 0;
int GLAD_GL_KHR_context_flush_control = 0;
int GLAD_GL_KHR_debug = 0;
int GLAD_GL_KHR_no_error = 0;
int GLAD_GL_KHR_parallel_shader_compile = 0;
int GLAD_GL_KHR_robust_buffer_access_behavior = 0;
int GLAD_GL_KHR_robustness = 0;
int GLAD_GL_KHR_shader_subgroup = 0;
int GLAD_GL_KHR_texture_compression_astc_hdr = 0;
int GLAD_GL_KHR_texture_compression_astc_ldr = 0;
int GLAD_GL_KHR_texture_compression_astc_sliced_3d = 0;
int GLAD_GL_OES_byte_coordinates = 0;
int GLAD_GL_OES_compressed_paletted_texture = 0;
int GLAD_GL_OES_fixed_point = 0;
int GLAD_GL_OES_query_matrix = 0;
int GLAD_GL_OES_read_format = 0;
int GLAD_GL_OES_single_precision = 0;



PFNGLACCUMXOESPROC glad_glAccumxOES = NULL;
PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC glad_glAcquireKeyedMutexWin32EXT = NULL;
PFNGLACTIVEPROGRAMEXTPROC glad_glActiveProgramEXT = NULL;
PFNGLACTIVESHADERPROGRAMPROC glad_glActiveShaderProgram = NULL;
PFNGLACTIVESTENCILFACEEXTPROC glad_glActiveStencilFaceEXT = NULL;
PFNGLACTIVETEXTUREPROC glad_glActiveTexture = NULL;
PFNGLACTIVETEXTUREARBPROC glad_glActiveTextureARB = NULL;
PFNGLALPHAFUNCXOESPROC glad_glAlphaFuncxOES = NULL;
PFNGLAPPLYTEXTUREEXTPROC glad_glApplyTextureEXT = NULL;
PFNGLARETEXTURESRESIDENTEXTPROC glad_glAreTexturesResidentEXT = NULL;
PFNGLARRAYELEMENTEXTPROC glad_glArrayElementEXT = NULL;
PFNGLATTACHOBJECTARBPROC glad_glAttachObjectARB = NULL;
PFNGLATTACHSHADERPROC glad_glAttachShader = NULL;
PFNGLBEGINCONDITIONALRENDERPROC glad_glBeginConditionalRender = NULL;
PFNGLBEGINQUERYPROC glad_glBeginQuery = NULL;
PFNGLBEGINQUERYARBPROC glad_glBeginQueryARB = NULL;
PFNGLBEGINQUERYINDEXEDPROC glad_glBeginQueryIndexed = NULL;
PFNGLBEGINTRANSFORMFEEDBACKPROC glad_glBeginTransformFeedback = NULL;
PFNGLBEGINTRANSFORMFEEDBACKEXTPROC glad_glBeginTransformFeedbackEXT = NULL;
PFNGLBEGINVERTEXSHADEREXTPROC glad_glBeginVertexShaderEXT = NULL;
PFNGLBINDATTRIBLOCATIONPROC glad_glBindAttribLocation = NULL;
PFNGLBINDATTRIBLOCATIONARBPROC glad_glBindAttribLocationARB = NULL;
PFNGLBINDBUFFERPROC glad_glBindBuffer = NULL;
PFNGLBINDBUFFERARBPROC glad_glBindBufferARB = NULL;
PFNGLBINDBUFFERBASEPROC glad_glBindBufferBase = NULL;
PFNGLBINDBUFFERBASEEXTPROC glad_glBindBufferBaseEXT = NULL;
PFNGLBINDBUFFEROFFSETEXTPROC glad_glBindBufferOffsetEXT = NULL;
PFNGLBINDBUFFERRANGEPROC glad_glBindBufferRange = NULL;
PFNGLBINDBUFFERRANGEEXTPROC glad_glBindBufferRangeEXT = NULL;
PFNGLBINDBUFFERSBASEPROC glad_glBindBuffersBase = NULL;
PFNGLBINDBUFFERSRANGEPROC glad_glBindBuffersRange = NULL;
PFNGLBINDFRAGDATALOCATIONPROC glad_glBindFragDataLocation = NULL;
PFNGLBINDFRAGDATALOCATIONEXTPROC glad_glBindFragDataLocationEXT = NULL;
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glad_glBindFragDataLocationIndexed = NULL;
PFNGLBINDFRAMEBUFFERPROC glad_glBindFramebuffer = NULL;
PFNGLBINDFRAMEBUFFEREXTPROC glad_glBindFramebufferEXT = NULL;
PFNGLBINDIMAGETEXTUREPROC glad_glBindImageTexture = NULL;
PFNGLBINDIMAGETEXTUREEXTPROC glad_glBindImageTextureEXT = NULL;
PFNGLBINDIMAGETEXTURESPROC glad_glBindImageTextures = NULL;
PFNGLBINDLIGHTPARAMETEREXTPROC glad_glBindLightParameterEXT = NULL;
PFNGLBINDMATERIALPARAMETEREXTPROC glad_glBindMaterialParameterEXT = NULL;
PFNGLBINDMULTITEXTUREEXTPROC glad_glBindMultiTextureEXT = NULL;
PFNGLBINDPARAMETEREXTPROC glad_glBindParameterEXT = NULL;
PFNGLBINDPROGRAMARBPROC glad_glBindProgramARB = NULL;
PFNGLBINDPROGRAMPIPELINEPROC glad_glBindProgramPipeline = NULL;
PFNGLBINDRENDERBUFFERPROC glad_glBindRenderbuffer = NULL;
PFNGLBINDRENDERBUFFEREXTPROC glad_glBindRenderbufferEXT = NULL;
PFNGLBINDSAMPLERPROC glad_glBindSampler = NULL;
PFNGLBINDSAMPLERSPROC glad_glBindSamplers = NULL;
PFNGLBINDTEXGENPARAMETEREXTPROC glad_glBindTexGenParameterEXT = NULL;
PFNGLBINDTEXTUREPROC glad_glBindTexture = NULL;
PFNGLBINDTEXTUREEXTPROC glad_glBindTextureEXT = NULL;
PFNGLBINDTEXTUREUNITPROC glad_glBindTextureUnit = NULL;
PFNGLBINDTEXTUREUNITPARAMETEREXTPROC glad_glBindTextureUnitParameterEXT = NULL;
PFNGLBINDTEXTURESPROC glad_glBindTextures = NULL;
PFNGLBINDTRANSFORMFEEDBACKPROC glad_glBindTransformFeedback = NULL;
PFNGLBINDVERTEXARRAYPROC glad_glBindVertexArray = NULL;
PFNGLBINDVERTEXBUFFERPROC glad_glBindVertexBuffer = NULL;
PFNGLBINDVERTEXBUFFERSPROC glad_glBindVertexBuffers = NULL;
PFNGLBINDVERTEXSHADEREXTPROC glad_glBindVertexShaderEXT = NULL;
PFNGLBINORMAL3BEXTPROC glad_glBinormal3bEXT = NULL;
PFNGLBINORMAL3BVEXTPROC glad_glBinormal3bvEXT = NULL;
PFNGLBINORMAL3DEXTPROC glad_glBinormal3dEXT = NULL;
PFNGLBINORMAL3DVEXTPROC glad_glBinormal3dvEXT = NULL;
PFNGLBINORMAL3FEXTPROC glad_glBinormal3fEXT = NULL;
PFNGLBINORMAL3FVEXTPROC glad_glBinormal3fvEXT = NULL;
PFNGLBINORMAL3IEXTPROC glad_glBinormal3iEXT = NULL;
PFNGLBINORMAL3IVEXTPROC glad_glBinormal3ivEXT = NULL;
PFNGLBINORMAL3SEXTPROC glad_glBinormal3sEXT = NULL;
PFNGLBINORMAL3SVEXTPROC glad_glBinormal3svEXT = NULL;
PFNGLBINORMALPOINTEREXTPROC glad_glBinormalPointerEXT = NULL;
PFNGLBITMAPXOESPROC glad_glBitmapxOES = NULL;
PFNGLBLENDBARRIERKHRPROC glad_glBlendBarrierKHR = NULL;
PFNGLBLENDCOLORPROC glad_glBlendColor = NULL;
PFNGLBLENDCOLOREXTPROC glad_glBlendColorEXT = NULL;
PFNGLBLENDCOLORXOESPROC glad_glBlendColorxOES = NULL;
PFNGLBLENDEQUATIONPROC glad_glBlendEquation = NULL;
PFNGLBLENDEQUATIONEXTPROC glad_glBlendEquationEXT = NULL;
PFNGLBLENDEQUATIONSEPARATEPROC glad_glBlendEquationSeparate = NULL;
PFNGLBLENDEQUATIONSEPARATEEXTPROC glad_glBlendEquationSeparateEXT = NULL;
PFNGLBLENDEQUATIONSEPARATEIARBPROC glad_glBlendEquationSeparateiARB = NULL;
PFNGLBLENDEQUATIONIARBPROC glad_glBlendEquationiARB = NULL;
PFNGLBLENDFUNCPROC glad_glBlendFunc = NULL;
PFNGLBLENDFUNCSEPARATEPROC glad_glBlendFuncSeparate = NULL;
PFNGLBLENDFUNCSEPARATEEXTPROC glad_glBlendFuncSeparateEXT = NULL;
PFNGLBLENDFUNCSEPARATEIARBPROC glad_glBlendFuncSeparateiARB = NULL;
PFNGLBLENDFUNCIARBPROC glad_glBlendFunciARB = NULL;
PFNGLBLITFRAMEBUFFERPROC glad_glBlitFramebuffer = NULL;
PFNGLBLITFRAMEBUFFEREXTPROC glad_glBlitFramebufferEXT = NULL;
PFNGLBLITFRAMEBUFFERLAYEREXTPROC glad_glBlitFramebufferLayerEXT = NULL;
PFNGLBLITFRAMEBUFFERLAYERSEXTPROC glad_glBlitFramebufferLayersEXT = NULL;
PFNGLBLITNAMEDFRAMEBUFFERPROC glad_glBlitNamedFramebuffer = NULL;
PFNGLBUFFERDATAPROC glad_glBufferData = NULL;
PFNGLBUFFERDATAARBPROC glad_glBufferDataARB = NULL;
PFNGLBUFFERPAGECOMMITMENTARBPROC glad_glBufferPageCommitmentARB = NULL;
PFNGLBUFFERSTORAGEPROC glad_glBufferStorage = NULL;
PFNGLBUFFERSTORAGEEXTERNALEXTPROC glad_glBufferStorageExternalEXT = NULL;
PFNGLBUFFERSTORAGEMEMEXTPROC glad_glBufferStorageMemEXT = NULL;
PFNGLBUFFERSUBDATAPROC glad_glBufferSubData = NULL;
PFNGLBUFFERSUBDATAARBPROC glad_glBufferSubDataARB = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glad_glCheckFramebufferStatus = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC glad_glCheckFramebufferStatusEXT = NULL;
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC glad_glCheckNamedFramebufferStatus = NULL;
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC glad_glCheckNamedFramebufferStatusEXT = NULL;
PFNGLCLAMPCOLORPROC glad_glClampColor = NULL;
PFNGLCLAMPCOLORARBPROC glad_glClampColorARB = NULL;
PFNGLCLEARPROC glad_glClear = NULL;
PFNGLCLEARACCUMXOESPROC glad_glClearAccumxOES = NULL;
PFNGLCLEARBUFFERDATAPROC glad_glClearBufferData = NULL;
PFNGLCLEARBUFFERSUBDATAPROC glad_glClearBufferSubData = NULL;
PFNGLCLEARBUFFERFIPROC glad_glClearBufferfi = NULL;
PFNGLCLEARBUFFERFVPROC glad_glClearBufferfv = NULL;
PFNGLCLEARBUFFERIVPROC glad_glClearBufferiv = NULL;
PFNGLCLEARBUFFERUIVPROC glad_glClearBufferuiv = NULL;
PFNGLCLEARCOLORPROC glad_glClearColor = NULL;
PFNGLCLEARCOLORIIEXTPROC glad_glClearColorIiEXT = NULL;
PFNGLCLEARCOLORIUIEXTPROC glad_glClearColorIuiEXT = NULL;
PFNGLCLEARCOLORXOESPROC glad_glClearColorxOES = NULL;
PFNGLCLEARDEPTHPROC glad_glClearDepth = NULL;
PFNGLCLEARDEPTHFPROC glad_glClearDepthf = NULL;
PFNGLCLEARDEPTHFOESPROC glad_glClearDepthfOES = NULL;
PFNGLCLEARDEPTHXOESPROC glad_glClearDepthxOES = NULL;
PFNGLCLEARNAMEDBUFFERDATAPROC glad_glClearNamedBufferData = NULL;
PFNGLCLEARNAMEDBUFFERDATAEXTPROC glad_glClearNamedBufferDataEXT = NULL;
PFNGLCLEARNAMEDBUFFERSUBDATAPROC glad_glClearNamedBufferSubData = NULL;
PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC glad_glClearNamedBufferSubDataEXT = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERFIPROC glad_glClearNamedFramebufferfi = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERFVPROC glad_glClearNamedFramebufferfv = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERIVPROC glad_glClearNamedFramebufferiv = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC glad_glClearNamedFramebufferuiv = NULL;
PFNGLCLEARSTENCILPROC glad_glClearStencil = NULL;
PFNGLCLEARTEXIMAGEPROC glad_glClearTexImage = NULL;
PFNGLCLEARTEXSUBIMAGEPROC glad_glClearTexSubImage = NULL;
PFNGLCLIENTACTIVETEXTUREARBPROC glad_glClientActiveTextureARB = NULL;
PFNGLCLIENTATTRIBDEFAULTEXTPROC glad_glClientAttribDefaultEXT = NULL;
PFNGLCLIENTWAITSYNCPROC glad_glClientWaitSync = NULL;
PFNGLCLIPCONTROLPROC glad_glClipControl = NULL;
PFNGLCLIPPLANEFOESPROC glad_glClipPlanefOES = NULL;
PFNGLCLIPPLANEXOESPROC glad_glClipPlanexOES = NULL;
PFNGLCOLOR3XOESPROC glad_glColor3xOES = NULL;
PFNGLCOLOR3XVOESPROC glad_glColor3xvOES = NULL;
PFNGLCOLOR4XOESPROC glad_glColor4xOES = NULL;
PFNGLCOLOR4XVOESPROC glad_glColor4xvOES = NULL;
PFNGLCOLORMASKPROC glad_glColorMask = NULL;
PFNGLCOLORMASKINDEXEDEXTPROC glad_glColorMaskIndexedEXT = NULL;
PFNGLCOLORMASKIPROC glad_glColorMaski = NULL;
PFNGLCOLORPOINTEREXTPROC glad_glColorPointerEXT = NULL;
PFNGLCOLORSUBTABLEEXTPROC glad_glColorSubTableEXT = NULL;
PFNGLCOLORTABLEEXTPROC glad_glColorTableEXT = NULL;
PFNGLCOMPILESHADERPROC glad_glCompileShader = NULL;
PFNGLCOMPILESHADERARBPROC glad_glCompileShaderARB = NULL;
PFNGLCOMPILESHADERINCLUDEARBPROC glad_glCompileShaderIncludeARB = NULL;
PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC glad_glCompressedMultiTexImage1DEXT = NULL;
PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC glad_glCompressedMultiTexImage2DEXT = NULL;
PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC glad_glCompressedMultiTexImage3DEXT = NULL;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC glad_glCompressedMultiTexSubImage1DEXT = NULL;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC glad_glCompressedMultiTexSubImage2DEXT = NULL;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC glad_glCompressedMultiTexSubImage3DEXT = NULL;
PFNGLCOMPRESSEDTEXIMAGE1DPROC glad_glCompressedTexImage1D = NULL;
PFNGLCOMPRESSEDTEXIMAGE1DARBPROC glad_glCompressedTexImage1DARB = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glad_glCompressedTexImage2D = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DARBPROC glad_glCompressedTexImage2DARB = NULL;
PFNGLCOMPRESSEDTEXIMAGE3DPROC glad_glCompressedTexImage3D = NULL;
PFNGLCOMPRESSEDTEXIMAGE3DARBPROC glad_glCompressedTexImage3DARB = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glad_glCompressedTexSubImage1D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC glad_glCompressedTexSubImage1DARB = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glad_glCompressedTexSubImage2D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC glad_glCompressedTexSubImage2DARB = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glad_glCompressedTexSubImage3D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC glad_glCompressedTexSubImage3DARB = NULL;
PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC glad_glCompressedTextureImage1DEXT = NULL;
PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC glad_glCompressedTextureImage2DEXT = NULL;
PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC glad_glCompressedTextureImage3DEXT = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC glad_glCompressedTextureSubImage1D = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC glad_glCompressedTextureSubImage1DEXT = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC glad_glCompressedTextureSubImage2D = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC glad_glCompressedTextureSubImage2DEXT = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC glad_glCompressedTextureSubImage3D = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC glad_glCompressedTextureSubImage3DEXT = NULL;
PFNGLCONVOLUTIONFILTER1DEXTPROC glad_glConvolutionFilter1DEXT = NULL;
PFNGLCONVOLUTIONFILTER2DEXTPROC glad_glConvolutionFilter2DEXT = NULL;
PFNGLCONVOLUTIONPARAMETERFEXTPROC glad_glConvolutionParameterfEXT = NULL;
PFNGLCONVOLUTIONPARAMETERFVEXTPROC glad_glConvolutionParameterfvEXT = NULL;
PFNGLCONVOLUTIONPARAMETERIEXTPROC glad_glConvolutionParameteriEXT = NULL;
PFNGLCONVOLUTIONPARAMETERIVEXTPROC glad_glConvolutionParameterivEXT = NULL;
PFNGLCONVOLUTIONPARAMETERXOESPROC glad_glConvolutionParameterxOES = NULL;
PFNGLCONVOLUTIONPARAMETERXVOESPROC glad_glConvolutionParameterxvOES = NULL;
PFNGLCOPYBUFFERSUBDATAPROC glad_glCopyBufferSubData = NULL;
PFNGLCOPYCOLORSUBTABLEEXTPROC glad_glCopyColorSubTableEXT = NULL;
PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC glad_glCopyConvolutionFilter1DEXT = NULL;
PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC glad_glCopyConvolutionFilter2DEXT = NULL;
PFNGLCOPYIMAGESUBDATAPROC glad_glCopyImageSubData = NULL;
PFNGLCOPYMULTITEXIMAGE1DEXTPROC glad_glCopyMultiTexImage1DEXT = NULL;
PFNGLCOPYMULTITEXIMAGE2DEXTPROC glad_glCopyMultiTexImage2DEXT = NULL;
PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC glad_glCopyMultiTexSubImage1DEXT = NULL;
PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC glad_glCopyMultiTexSubImage2DEXT = NULL;
PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC glad_glCopyMultiTexSubImage3DEXT = NULL;
PFNGLCOPYNAMEDBUFFERSUBDATAPROC glad_glCopyNamedBufferSubData = NULL;
PFNGLCOPYTEXIMAGE1DPROC glad_glCopyTexImage1D = NULL;
PFNGLCOPYTEXIMAGE1DEXTPROC glad_glCopyTexImage1DEXT = NULL;
PFNGLCOPYTEXIMAGE2DPROC glad_glCopyTexImage2D = NULL;
PFNGLCOPYTEXIMAGE2DEXTPROC glad_glCopyTexImage2DEXT = NULL;
PFNGLCOPYTEXSUBIMAGE1DPROC glad_glCopyTexSubImage1D = NULL;
PFNGLCOPYTEXSUBIMAGE1DEXTPROC glad_glCopyTexSubImage1DEXT = NULL;
PFNGLCOPYTEXSUBIMAGE2DPROC glad_glCopyTexSubImage2D = NULL;
PFNGLCOPYTEXSUBIMAGE2DEXTPROC glad_glCopyTexSubImage2DEXT = NULL;
PFNGLCOPYTEXSUBIMAGE3DPROC glad_glCopyTexSubImage3D = NULL;
PFNGLCOPYTEXSUBIMAGE3DEXTPROC glad_glCopyTexSubImage3DEXT = NULL;
PFNGLCOPYTEXTUREIMAGE1DEXTPROC glad_glCopyTextureImage1DEXT = NULL;
PFNGLCOPYTEXTUREIMAGE2DEXTPROC glad_glCopyTextureImage2DEXT = NULL;
PFNGLCOPYTEXTURESUBIMAGE1DPROC glad_glCopyTextureSubImage1D = NULL;
PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC glad_glCopyTextureSubImage1DEXT = NULL;
PFNGLCOPYTEXTURESUBIMAGE2DPROC glad_glCopyTextureSubImage2D = NULL;
PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC glad_glCopyTextureSubImage2DEXT = NULL;
PFNGLCOPYTEXTURESUBIMAGE3DPROC glad_glCopyTextureSubImage3D = NULL;
PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC glad_glCopyTextureSubImage3DEXT = NULL;
PFNGLCREATEBUFFERSPROC glad_glCreateBuffers = NULL;
PFNGLCREATEFRAMEBUFFERSPROC glad_glCreateFramebuffers = NULL;
PFNGLCREATEMEMORYOBJECTSEXTPROC glad_glCreateMemoryObjectsEXT = NULL;
PFNGLCREATEPROGRAMPROC glad_glCreateProgram = NULL;
PFNGLCREATEPROGRAMOBJECTARBPROC glad_glCreateProgramObjectARB = NULL;
PFNGLCREATEPROGRAMPIPELINESPROC glad_glCreateProgramPipelines = NULL;
PFNGLCREATEQUERIESPROC glad_glCreateQueries = NULL;
PFNGLCREATERENDERBUFFERSPROC glad_glCreateRenderbuffers = NULL;
PFNGLCREATESAMPLERSPROC glad_glCreateSamplers = NULL;
PFNGLCREATESHADERPROC glad_glCreateShader = NULL;
PFNGLCREATESHADEROBJECTARBPROC glad_glCreateShaderObjectARB = NULL;
PFNGLCREATESHADERPROGRAMEXTPROC glad_glCreateShaderProgramEXT = NULL;
PFNGLCREATESHADERPROGRAMVPROC glad_glCreateShaderProgramv = NULL;
PFNGLCREATESYNCFROMCLEVENTARBPROC glad_glCreateSyncFromCLeventARB = NULL;
PFNGLCREATETEXTURESPROC glad_glCreateTextures = NULL;
PFNGLCREATETRANSFORMFEEDBACKSPROC glad_glCreateTransformFeedbacks = NULL;
PFNGLCREATEVERTEXARRAYSPROC glad_glCreateVertexArrays = NULL;
PFNGLCULLFACEPROC glad_glCullFace = NULL;
PFNGLCULLPARAMETERDVEXTPROC glad_glCullParameterdvEXT = NULL;
PFNGLCULLPARAMETERFVEXTPROC glad_glCullParameterfvEXT = NULL;
PFNGLCURRENTPALETTEMATRIXARBPROC glad_glCurrentPaletteMatrixARB = NULL;
PFNGLDEBUGMESSAGECALLBACKPROC glad_glDebugMessageCallback = NULL;
PFNGLDEBUGMESSAGECALLBACKARBPROC glad_glDebugMessageCallbackARB = NULL;
PFNGLDEBUGMESSAGECONTROLPROC glad_glDebugMessageControl = NULL;
PFNGLDEBUGMESSAGECONTROLARBPROC glad_glDebugMessageControlARB = NULL;
PFNGLDEBUGMESSAGEINSERTPROC glad_glDebugMessageInsert = NULL;
PFNGLDEBUGMESSAGEINSERTARBPROC glad_glDebugMessageInsertARB = NULL;
PFNGLDELETEBUFFERSPROC glad_glDeleteBuffers = NULL;
PFNGLDELETEBUFFERSARBPROC glad_glDeleteBuffersARB = NULL;
PFNGLDELETEFRAMEBUFFERSPROC glad_glDeleteFramebuffers = NULL;
PFNGLDELETEFRAMEBUFFERSEXTPROC glad_glDeleteFramebuffersEXT = NULL;
PFNGLDELETEMEMORYOBJECTSEXTPROC glad_glDeleteMemoryObjectsEXT = NULL;
PFNGLDELETENAMEDSTRINGARBPROC glad_glDeleteNamedStringARB = NULL;
PFNGLDELETEOBJECTARBPROC glad_glDeleteObjectARB = NULL;
PFNGLDELETEPROGRAMPROC glad_glDeleteProgram = NULL;
PFNGLDELETEPROGRAMPIPELINESPROC glad_glDeleteProgramPipelines = NULL;
PFNGLDELETEPROGRAMSARBPROC glad_glDeleteProgramsARB = NULL;
PFNGLDELETEQUERIESPROC glad_glDeleteQueries = NULL;
PFNGLDELETEQUERIESARBPROC glad_glDeleteQueriesARB = NULL;
PFNGLDELETERENDERBUFFERSPROC glad_glDeleteRenderbuffers = NULL;
PFNGLDELETERENDERBUFFERSEXTPROC glad_glDeleteRenderbuffersEXT = NULL;
PFNGLDELETESAMPLERSPROC glad_glDeleteSamplers = NULL;
PFNGLDELETESEMAPHORESEXTPROC glad_glDeleteSemaphoresEXT = NULL;
PFNGLDELETESHADERPROC glad_glDeleteShader = NULL;
PFNGLDELETESYNCPROC glad_glDeleteSync = NULL;
PFNGLDELETETEXTURESPROC glad_glDeleteTextures = NULL;
PFNGLDELETETEXTURESEXTPROC glad_glDeleteTexturesEXT = NULL;
PFNGLDELETETRANSFORMFEEDBACKSPROC glad_glDeleteTransformFeedbacks = NULL;
PFNGLDELETEVERTEXARRAYSPROC glad_glDeleteVertexArrays = NULL;
PFNGLDELETEVERTEXSHADEREXTPROC glad_glDeleteVertexShaderEXT = NULL;
PFNGLDEPTHBOUNDSEXTPROC glad_glDepthBoundsEXT = NULL;
PFNGLDEPTHFUNCPROC glad_glDepthFunc = NULL;
PFNGLDEPTHMASKPROC glad_glDepthMask = NULL;
PFNGLDEPTHRANGEPROC glad_glDepthRange = NULL;
PFNGLDEPTHRANGEARRAYDVNVPROC glad_glDepthRangeArraydvNV = NULL;
PFNGLDEPTHRANGEARRAYVPROC glad_glDepthRangeArrayv = NULL;
PFNGLDEPTHRANGEINDEXEDPROC glad_glDepthRangeIndexed = NULL;
PFNGLDEPTHRANGEINDEXEDDNVPROC glad_glDepthRangeIndexeddNV = NULL;
PFNGLDEPTHRANGEFPROC glad_glDepthRangef = NULL;
PFNGLDEPTHRANGEFOESPROC glad_glDepthRangefOES = NULL;
PFNGLDEPTHRANGEXOESPROC glad_glDepthRangexOES = NULL;
PFNGLDETACHOBJECTARBPROC glad_glDetachObjectARB = NULL;
PFNGLDETACHSHADERPROC glad_glDetachShader = NULL;
PFNGLDISABLEPROC glad_glDisable = NULL;
PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC glad_glDisableClientStateIndexedEXT = NULL;
PFNGLDISABLECLIENTSTATEIEXTPROC glad_glDisableClientStateiEXT = NULL;
PFNGLDISABLEINDEXEDEXTPROC glad_glDisableIndexedEXT = NULL;
PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC glad_glDisableVariantClientStateEXT = NULL;
PFNGLDISABLEVERTEXARRAYATTRIBPROC glad_glDisableVertexArrayAttrib = NULL;
PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC glad_glDisableVertexArrayAttribEXT = NULL;
PFNGLDISABLEVERTEXARRAYEXTPROC glad_glDisableVertexArrayEXT = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glad_glDisableVertexAttribArray = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYARBPROC glad_glDisableVertexAttribArrayARB = NULL;
PFNGLDISABLEIPROC glad_glDisablei = NULL;
PFNGLDISPATCHCOMPUTEPROC glad_glDispatchCompute = NULL;
PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC glad_glDispatchComputeGroupSizeARB = NULL;
PFNGLDISPATCHCOMPUTEINDIRECTPROC glad_glDispatchComputeIndirect = NULL;
PFNGLDRAWARRAYSPROC glad_glDrawArrays = NULL;
PFNGLDRAWARRAYSEXTPROC glad_glDrawArraysEXT = NULL;
PFNGLDRAWARRAYSINDIRECTPROC glad_glDrawArraysIndirect = NULL;
PFNGLDRAWARRAYSINSTANCEDPROC glad_glDrawArraysInstanced = NULL;
PFNGLDRAWARRAYSINSTANCEDARBPROC glad_glDrawArraysInstancedARB = NULL;
PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glad_glDrawArraysInstancedBaseInstance = NULL;
PFNGLDRAWARRAYSINSTANCEDEXTPROC glad_glDrawArraysInstancedEXT = NULL;
PFNGLDRAWBUFFERPROC glad_glDrawBuffer = NULL;
PFNGLDRAWBUFFERSPROC glad_glDrawBuffers = NULL;
PFNGLDRAWBUFFERSARBPROC glad_glDrawBuffersARB = NULL;
PFNGLDRAWELEMENTSPROC glad_glDrawElements = NULL;
PFNGLDRAWELEMENTSBASEVERTEXPROC glad_glDrawElementsBaseVertex = NULL;
PFNGLDRAWELEMENTSINDIRECTPROC glad_glDrawElementsIndirect = NULL;
PFNGLDRAWELEMENTSINSTANCEDPROC glad_glDrawElementsInstanced = NULL;
PFNGLDRAWELEMENTSINSTANCEDARBPROC glad_glDrawElementsInstancedARB = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glad_glDrawElementsInstancedBaseInstance = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glad_glDrawElementsInstancedBaseVertex = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glad_glDrawElementsInstancedBaseVertexBaseInstance = NULL;
PFNGLDRAWELEMENTSINSTANCEDEXTPROC glad_glDrawElementsInstancedEXT = NULL;
PFNGLDRAWRANGEELEMENTSPROC glad_glDrawRangeElements = NULL;
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glad_glDrawRangeElementsBaseVertex = NULL;
PFNGLDRAWRANGEELEMENTSEXTPROC glad_glDrawRangeElementsEXT = NULL;
PFNGLDRAWTRANSFORMFEEDBACKPROC glad_glDrawTransformFeedback = NULL;
PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glad_glDrawTransformFeedbackInstanced = NULL;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glad_glDrawTransformFeedbackStream = NULL;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC glad_glDrawTransformFeedbackStreamInstanced = NULL;
PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC glad_glEGLImageTargetTexStorageEXT = NULL;
PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC glad_glEGLImageTargetTextureStorageEXT = NULL;
PFNGLEDGEFLAGPOINTEREXTPROC glad_glEdgeFlagPointerEXT = NULL;
PFNGLENABLEPROC glad_glEnable = NULL;
PFNGLENABLECLIENTSTATEINDEXEDEXTPROC glad_glEnableClientStateIndexedEXT = NULL;
PFNGLENABLECLIENTSTATEIEXTPROC glad_glEnableClientStateiEXT = NULL;
PFNGLENABLEINDEXEDEXTPROC glad_glEnableIndexedEXT = NULL;
PFNGLENABLEVARIANTCLIENTSTATEEXTPROC glad_glEnableVariantClientStateEXT = NULL;
PFNGLENABLEVERTEXARRAYATTRIBPROC glad_glEnableVertexArrayAttrib = NULL;
PFNGLENABLEVERTEXARRAYATTRIBEXTPROC glad_glEnableVertexArrayAttribEXT = NULL;
PFNGLENABLEVERTEXARRAYEXTPROC glad_glEnableVertexArrayEXT = NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC glad_glEnableVertexAttribArray = NULL;
PFNGLENABLEVERTEXATTRIBARRAYARBPROC glad_glEnableVertexAttribArrayARB = NULL;
PFNGLENABLEIPROC glad_glEnablei = NULL;
PFNGLENDCONDITIONALRENDERPROC glad_glEndConditionalRender = NULL;
PFNGLENDQUERYPROC glad_glEndQuery = NULL;
PFNGLENDQUERYARBPROC glad_glEndQueryARB = NULL;
PFNGLENDQUERYINDEXEDPROC glad_glEndQueryIndexed = NULL;
PFNGLENDTRANSFORMFEEDBACKPROC glad_glEndTransformFeedback = NULL;
PFNGLENDTRANSFORMFEEDBACKEXTPROC glad_glEndTransformFeedbackEXT = NULL;
PFNGLENDVERTEXSHADEREXTPROC glad_glEndVertexShaderEXT = NULL;
PFNGLEVALCOORD1XOESPROC glad_glEvalCoord1xOES = NULL;
PFNGLEVALCOORD1XVOESPROC glad_glEvalCoord1xvOES = NULL;
PFNGLEVALCOORD2XOESPROC glad_glEvalCoord2xOES = NULL;
PFNGLEVALCOORD2XVOESPROC glad_glEvalCoord2xvOES = NULL;
PFNGLEVALUATEDEPTHVALUESARBPROC glad_glEvaluateDepthValuesARB = NULL;
PFNGLEXTRACTCOMPONENTEXTPROC glad_glExtractComponentEXT = NULL;
PFNGLFEEDBACKBUFFERXOESPROC glad_glFeedbackBufferxOES = NULL;
PFNGLFENCESYNCPROC glad_glFenceSync = NULL;
PFNGLFINISHPROC glad_glFinish = NULL;
PFNGLFLUSHPROC glad_glFlush = NULL;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC glad_glFlushMappedBufferRange = NULL;
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC glad_glFlushMappedNamedBufferRange = NULL;
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC glad_glFlushMappedNamedBufferRangeEXT = NULL;
PFNGLFOGCOORDPOINTEREXTPROC glad_glFogCoordPointerEXT = NULL;
PFNGLFOGCOORDDEXTPROC glad_glFogCoorddEXT = NULL;
PFNGLFOGCOORDDVEXTPROC glad_glFogCoorddvEXT = NULL;
PFNGLFOGCOORDFEXTPROC glad_glFogCoordfEXT = NULL;
PFNGLFOGCOORDFVEXTPROC glad_glFogCoordfvEXT = NULL;
PFNGLFOGXOESPROC glad_glFogxOES = NULL;
PFNGLFOGXVOESPROC glad_glFogxvOES = NULL;
PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC glad_glFramebufferDrawBufferEXT = NULL;
PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC glad_glFramebufferDrawBuffersEXT = NULL;
PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC glad_glFramebufferFetchBarrierEXT = NULL;
PFNGLFRAMEBUFFERPARAMETERIPROC glad_glFramebufferParameteri = NULL;
PFNGLFRAMEBUFFERREADBUFFEREXTPROC glad_glFramebufferReadBufferEXT = NULL;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glad_glFramebufferRenderbuffer = NULL;
PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC glad_glFramebufferRenderbufferEXT = NULL;
PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC glad_glFramebufferSampleLocationsfvARB = NULL;
PFNGLFRAMEBUFFERTEXTUREPROC glad_glFramebufferTexture = NULL;
PFNGLFRAMEBUFFERTEXTURE1DPROC glad_glFramebufferTexture1D = NULL;
PFNGLFRAMEBUFFERTEXTURE1DEXTPROC glad_glFramebufferTexture1DEXT = NULL;
PFNGLFRAMEBUFFERTEXTURE2DPROC glad_glFramebufferTexture2D = NULL;
PFNGLFRAMEBUFFERTEXTURE2DEXTPROC glad_glFramebufferTexture2DEXT = NULL;
PFNGLFRAMEBUFFERTEXTURE3DPROC glad_glFramebufferTexture3D = NULL;
PFNGLFRAMEBUFFERTEXTURE3DEXTPROC glad_glFramebufferTexture3DEXT = NULL;
PFNGLFRAMEBUFFERTEXTUREARBPROC glad_glFramebufferTextureARB = NULL;
PFNGLFRAMEBUFFERTEXTUREFACEARBPROC glad_glFramebufferTextureFaceARB = NULL;
PFNGLFRAMEBUFFERTEXTURELAYERPROC glad_glFramebufferTextureLayer = NULL;
PFNGLFRAMEBUFFERTEXTURELAYERARBPROC glad_glFramebufferTextureLayerARB = NULL;
PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC glad_glFramebufferTextureLayerEXT = NULL;
PFNGLFRONTFACEPROC glad_glFrontFace = NULL;
PFNGLFRUSTUMFOESPROC glad_glFrustumfOES = NULL;
PFNGLFRUSTUMXOESPROC glad_glFrustumxOES = NULL;
PFNGLGENBUFFERSPROC glad_glGenBuffers = NULL;
PFNGLGENBUFFERSARBPROC glad_glGenBuffersARB = NULL;
PFNGLGENFRAMEBUFFERSPROC glad_glGenFramebuffers = NULL;
PFNGLGENFRAMEBUFFERSEXTPROC glad_glGenFramebuffersEXT = NULL;
PFNGLGENPROGRAMPIPELINESPROC glad_glGenProgramPipelines = NULL;
PFNGLGENPROGRAMSARBPROC glad_glGenProgramsARB = NULL;
PFNGLGENQUERIESPROC glad_glGenQueries = NULL;
PFNGLGENQUERIESARBPROC glad_glGenQueriesARB = NULL;
PFNGLGENRENDERBUFFERSPROC glad_glGenRenderbuffers = NULL;
PFNGLGENRENDERBUFFERSEXTPROC glad_glGenRenderbuffersEXT = NULL;
PFNGLGENSAMPLERSPROC glad_glGenSamplers = NULL;
PFNGLGENSEMAPHORESEXTPROC glad_glGenSemaphoresEXT = NULL;
PFNGLGENSYMBOLSEXTPROC glad_glGenSymbolsEXT = NULL;
PFNGLGENTEXTURESPROC glad_glGenTextures = NULL;
PFNGLGENTEXTURESEXTPROC glad_glGenTexturesEXT = NULL;
PFNGLGENTRANSFORMFEEDBACKSPROC glad_glGenTransformFeedbacks = NULL;
PFNGLGENVERTEXARRAYSPROC glad_glGenVertexArrays = NULL;
PFNGLGENVERTEXSHADERSEXTPROC glad_glGenVertexShadersEXT = NULL;
PFNGLGENERATEMIPMAPPROC glad_glGenerateMipmap = NULL;
PFNGLGENERATEMIPMAPEXTPROC glad_glGenerateMipmapEXT = NULL;
PFNGLGENERATEMULTITEXMIPMAPEXTPROC glad_glGenerateMultiTexMipmapEXT = NULL;
PFNGLGENERATETEXTUREMIPMAPPROC glad_glGenerateTextureMipmap = NULL;
PFNGLGENERATETEXTUREMIPMAPEXTPROC glad_glGenerateTextureMipmapEXT = NULL;
PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glad_glGetActiveAtomicCounterBufferiv = NULL;
PFNGLGETACTIVEATTRIBPROC glad_glGetActiveAttrib = NULL;
PFNGLGETACTIVEATTRIBARBPROC glad_glGetActiveAttribARB = NULL;
PFNGLGETACTIVESUBROUTINENAMEPROC glad_glGetActiveSubroutineName = NULL;
PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glad_glGetActiveSubroutineUniformName = NULL;
PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glad_glGetActiveSubroutineUniformiv = NULL;
PFNGLGETACTIVEUNIFORMPROC glad_glGetActiveUniform = NULL;
PFNGLGETACTIVEUNIFORMARBPROC glad_glGetActiveUniformARB = NULL;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glad_glGetActiveUniformBlockName = NULL;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glad_glGetActiveUniformBlockiv = NULL;
PFNGLGETACTIVEUNIFORMNAMEPROC glad_glGetActiveUniformName = NULL;
PFNGLGETACTIVEUNIFORMSIVPROC glad_glGetActiveUniformsiv = NULL;
PFNGLGETATTACHEDOBJECTSARBPROC glad_glGetAttachedObjectsARB = NULL;
PFNGLGETATTACHEDSHADERSPROC glad_glGetAttachedShaders = NULL;
PFNGLGETATTRIBLOCATIONPROC glad_glGetAttribLocation = NULL;
PFNGLGETATTRIBLOCATIONARBPROC glad_glGetAttribLocationARB = NULL;
PFNGLGETBOOLEANINDEXEDVEXTPROC glad_glGetBooleanIndexedvEXT = NULL;
PFNGLGETBOOLEANI_VPROC glad_glGetBooleani_v = NULL;
PFNGLGETBOOLEANVPROC glad_glGetBooleanv = NULL;
PFNGLGETBUFFERPARAMETERI64VPROC glad_glGetBufferParameteri64v = NULL;
PFNGLGETBUFFERPARAMETERIVPROC glad_glGetBufferParameteriv = NULL;
PFNGLGETBUFFERPARAMETERIVARBPROC glad_glGetBufferParameterivARB = NULL;
PFNGLGETBUFFERPOINTERVPROC glad_glGetBufferPointerv = NULL;
PFNGLGETBUFFERPOINTERVARBPROC glad_glGetBufferPointervARB = NULL;
PFNGLGETBUFFERSUBDATAPROC glad_glGetBufferSubData = NULL;
PFNGLGETBUFFERSUBDATAARBPROC glad_glGetBufferSubDataARB = NULL;
PFNGLGETCLIPPLANEFOESPROC glad_glGetClipPlanefOES = NULL;
PFNGLGETCLIPPLANEXOESPROC glad_glGetClipPlanexOES = NULL;
PFNGLGETCOLORTABLEEXTPROC glad_glGetColorTableEXT = NULL;
PFNGLGETCOLORTABLEPARAMETERFVEXTPROC glad_glGetColorTableParameterfvEXT = NULL;
PFNGLGETCOLORTABLEPARAMETERIVEXTPROC glad_glGetColorTableParameterivEXT = NULL;
PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC glad_glGetCompressedMultiTexImageEXT = NULL;
PFNGLGETCOMPRESSEDTEXIMAGEPROC glad_glGetCompressedTexImage = NULL;
PFNGLGETCOMPRESSEDTEXIMAGEARBPROC glad_glGetCompressedTexImageARB = NULL;
PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC glad_glGetCompressedTextureImage = NULL;
PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC glad_glGetCompressedTextureImageEXT = NULL;
PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC glad_glGetCompressedTextureSubImage = NULL;
PFNGLGETCONVOLUTIONFILTEREXTPROC glad_glGetConvolutionFilterEXT = NULL;
PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC glad_glGetConvolutionParameterfvEXT = NULL;
PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC glad_glGetConvolutionParameterivEXT = NULL;
PFNGLGETCONVOLUTIONPARAMETERXVOESPROC glad_glGetConvolutionParameterxvOES = NULL;
PFNGLGETDEBUGMESSAGELOGPROC glad_glGetDebugMessageLog = NULL;
PFNGLGETDEBUGMESSAGELOGARBPROC glad_glGetDebugMessageLogARB = NULL;
PFNGLGETDOUBLEINDEXEDVEXTPROC glad_glGetDoubleIndexedvEXT = NULL;
PFNGLGETDOUBLEI_VPROC glad_glGetDoublei_v = NULL;
PFNGLGETDOUBLEI_VEXTPROC glad_glGetDoublei_vEXT = NULL;
PFNGLGETDOUBLEVPROC glad_glGetDoublev = NULL;
PFNGLGETERRORPROC glad_glGetError = NULL;
PFNGLGETFIXEDVOESPROC glad_glGetFixedvOES = NULL;
PFNGLGETFLOATINDEXEDVEXTPROC glad_glGetFloatIndexedvEXT = NULL;
PFNGLGETFLOATI_VPROC glad_glGetFloati_v = NULL;
PFNGLGETFLOATI_VEXTPROC glad_glGetFloati_vEXT = NULL;
PFNGLGETFLOATVPROC glad_glGetFloatv = NULL;
PFNGLGETFRAGDATAINDEXPROC glad_glGetFragDataIndex = NULL;
PFNGLGETFRAGDATALOCATIONPROC glad_glGetFragDataLocation = NULL;
PFNGLGETFRAGDATALOCATIONEXTPROC glad_glGetFragDataLocationEXT = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glad_glGetFramebufferAttachmentParameteriv = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glad_glGetFramebufferAttachmentParameterivEXT = NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVPROC glad_glGetFramebufferParameteriv = NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC glad_glGetFramebufferParameterivEXT = NULL;
PFNGLGETGRAPHICSRESETSTATUSPROC glad_glGetGraphicsResetStatus = NULL;
PFNGLGETGRAPHICSRESETSTATUSARBPROC glad_glGetGraphicsResetStatusARB = NULL;
PFNGLGETHANDLEARBPROC glad_glGetHandleARB = NULL;
PFNGLGETHISTOGRAMEXTPROC glad_glGetHistogramEXT = NULL;
PFNGLGETHISTOGRAMPARAMETERFVEXTPROC glad_glGetHistogramParameterfvEXT = NULL;
PFNGLGETHISTOGRAMPARAMETERIVEXTPROC glad_glGetHistogramParameterivEXT = NULL;
PFNGLGETHISTOGRAMPARAMETERXVOESPROC glad_glGetHistogramParameterxvOES = NULL;
PFNGLGETIMAGEHANDLEARBPROC glad_glGetImageHandleARB = NULL;
PFNGLGETINFOLOGARBPROC glad_glGetInfoLogARB = NULL;
PFNGLGETINTEGER64I_VPROC glad_glGetInteger64i_v = NULL;
PFNGLGETINTEGER64VPROC glad_glGetInteger64v = NULL;
PFNGLGETINTEGERINDEXEDVEXTPROC glad_glGetIntegerIndexedvEXT = NULL;
PFNGLGETINTEGERI_VPROC glad_glGetIntegeri_v = NULL;
PFNGLGETINTEGERVPROC glad_glGetIntegerv = NULL;
PFNGLGETINTERNALFORMATI64VPROC glad_glGetInternalformati64v = NULL;
PFNGLGETINTERNALFORMATIVPROC glad_glGetInternalformativ = NULL;
PFNGLGETINVARIANTBOOLEANVEXTPROC glad_glGetInvariantBooleanvEXT = NULL;
PFNGLGETINVARIANTFLOATVEXTPROC glad_glGetInvariantFloatvEXT = NULL;
PFNGLGETINVARIANTINTEGERVEXTPROC glad_glGetInvariantIntegervEXT = NULL;
PFNGLGETLIGHTXOESPROC glad_glGetLightxOES = NULL;
PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC glad_glGetLocalConstantBooleanvEXT = NULL;
PFNGLGETLOCALCONSTANTFLOATVEXTPROC glad_glGetLocalConstantFloatvEXT = NULL;
PFNGLGETLOCALCONSTANTINTEGERVEXTPROC glad_glGetLocalConstantIntegervEXT = NULL;
PFNGLGETMAPXVOESPROC glad_glGetMapxvOES = NULL;
PFNGLGETMATERIALXOESPROC glad_glGetMaterialxOES = NULL;
PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC glad_glGetMemoryObjectParameterivEXT = NULL;
PFNGLGETMINMAXEXTPROC glad_glGetMinmaxEXT = NULL;
PFNGLGETMINMAXPARAMETERFVEXTPROC glad_glGetMinmaxParameterfvEXT = NULL;
PFNGLGETMINMAXPARAMETERIVEXTPROC glad_glGetMinmaxParameterivEXT = NULL;
PFNGLGETMULTITEXENVFVEXTPROC glad_glGetMultiTexEnvfvEXT = NULL;
PFNGLGETMULTITEXENVIVEXTPROC glad_glGetMultiTexEnvivEXT = NULL;
PFNGLGETMULTITEXGENDVEXTPROC glad_glGetMultiTexGendvEXT = NULL;
PFNGLGETMULTITEXGENFVEXTPROC glad_glGetMultiTexGenfvEXT = NULL;
PFNGLGETMULTITEXGENIVEXTPROC glad_glGetMultiTexGenivEXT = NULL;
PFNGLGETMULTITEXIMAGEEXTPROC glad_glGetMultiTexImageEXT = NULL;
PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC glad_glGetMultiTexLevelParameterfvEXT = NULL;
PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC glad_glGetMultiTexLevelParameterivEXT = NULL;
PFNGLGETMULTITEXPARAMETERIIVEXTPROC glad_glGetMultiTexParameterIivEXT = NULL;
PFNGLGETMULTITEXPARAMETERIUIVEXTPROC glad_glGetMultiTexParameterIuivEXT = NULL;
PFNGLGETMULTITEXPARAMETERFVEXTPROC glad_glGetMultiTexParameterfvEXT = NULL;
PFNGLGETMULTITEXPARAMETERIVEXTPROC glad_glGetMultiTexParameterivEXT = NULL;
PFNGLGETMULTISAMPLEFVPROC glad_glGetMultisamplefv = NULL;
PFNGLGETNAMEDBUFFERPARAMETERI64VPROC glad_glGetNamedBufferParameteri64v = NULL;
PFNGLGETNAMEDBUFFERPARAMETERIVPROC glad_glGetNamedBufferParameteriv = NULL;
PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC glad_glGetNamedBufferParameterivEXT = NULL;
PFNGLGETNAMEDBUFFERPOINTERVPROC glad_glGetNamedBufferPointerv = NULL;
PFNGLGETNAMEDBUFFERPOINTERVEXTPROC glad_glGetNamedBufferPointervEXT = NULL;
PFNGLGETNAMEDBUFFERSUBDATAPROC glad_glGetNamedBufferSubData = NULL;
PFNGLGETNAMEDBUFFERSUBDATAEXTPROC glad_glGetNamedBufferSubDataEXT = NULL;
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC glad_glGetNamedFramebufferAttachmentParameteriv = NULL;
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glad_glGetNamedFramebufferAttachmentParameterivEXT = NULL;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC glad_glGetNamedFramebufferParameteriv = NULL;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC glad_glGetNamedFramebufferParameterivEXT = NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC glad_glGetNamedProgramLocalParameterIivEXT = NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC glad_glGetNamedProgramLocalParameterIuivEXT = NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC glad_glGetNamedProgramLocalParameterdvEXT = NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC glad_glGetNamedProgramLocalParameterfvEXT = NULL;
PFNGLGETNAMEDPROGRAMSTRINGEXTPROC glad_glGetNamedProgramStringEXT = NULL;
PFNGLGETNAMEDPROGRAMIVEXTPROC glad_glGetNamedProgramivEXT = NULL;
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC glad_glGetNamedRenderbufferParameteriv = NULL;
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC glad_glGetNamedRenderbufferParameterivEXT = NULL;
PFNGLGETNAMEDSTRINGARBPROC glad_glGetNamedStringARB = NULL;
PFNGLGETNAMEDSTRINGIVARBPROC glad_glGetNamedStringivARB = NULL;
PFNGLGETOBJECTLABELPROC glad_glGetObjectLabel = NULL;
PFNGLGETOBJECTLABELEXTPROC glad_glGetObjectLabelEXT = NULL;
PFNGLGETOBJECTPARAMETERFVARBPROC glad_glGetObjectParameterfvARB = NULL;
PFNGLGETOBJECTPARAMETERIVARBPROC glad_glGetObjectParameterivARB = NULL;
PFNGLGETOBJECTPTRLABELPROC glad_glGetObjectPtrLabel = NULL;
PFNGLGETPIXELMAPXVPROC glad_glGetPixelMapxv = NULL;
PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC glad_glGetPixelTransformParameterfvEXT = NULL;
PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC glad_glGetPixelTransformParameterivEXT = NULL;
PFNGLGETPOINTERINDEXEDVEXTPROC glad_glGetPointerIndexedvEXT = NULL;
PFNGLGETPOINTERI_VEXTPROC glad_glGetPointeri_vEXT = NULL;
PFNGLGETPOINTERVPROC glad_glGetPointerv = NULL;
PFNGLGETPOINTERVEXTPROC glad_glGetPointervEXT = NULL;
PFNGLGETPROGRAMBINARYPROC glad_glGetProgramBinary = NULL;
PFNGLGETPROGRAMENVPARAMETERDVARBPROC glad_glGetProgramEnvParameterdvARB = NULL;
PFNGLGETPROGRAMENVPARAMETERFVARBPROC glad_glGetProgramEnvParameterfvARB = NULL;
PFNGLGETPROGRAMINFOLOGPROC glad_glGetProgramInfoLog = NULL;
PFNGLGETPROGRAMINTERFACEIVPROC glad_glGetProgramInterfaceiv = NULL;
PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC glad_glGetProgramLocalParameterdvARB = NULL;
PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC glad_glGetProgramLocalParameterfvARB = NULL;
PFNGLGETPROGRAMPIPELINEINFOLOGPROC glad_glGetProgramPipelineInfoLog = NULL;
PFNGLGETPROGRAMPIPELINEIVPROC glad_glGetProgramPipelineiv = NULL;
PFNGLGETPROGRAMRESOURCEINDEXPROC glad_glGetProgramResourceIndex = NULL;
PFNGLGETPROGRAMRESOURCELOCATIONPROC glad_glGetProgramResourceLocation = NULL;
PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC glad_glGetProgramResourceLocationIndex = NULL;
PFNGLGETPROGRAMRESOURCENAMEPROC glad_glGetProgramResourceName = NULL;
PFNGLGETPROGRAMRESOURCEIVPROC glad_glGetProgramResourceiv = NULL;
PFNGLGETPROGRAMSTAGEIVPROC glad_glGetProgramStageiv = NULL;
PFNGLGETPROGRAMSTRINGARBPROC glad_glGetProgramStringARB = NULL;
PFNGLGETPROGRAMIVPROC glad_glGetProgramiv = NULL;
PFNGLGETPROGRAMIVARBPROC glad_glGetProgramivARB = NULL;
PFNGLGETQUERYBUFFEROBJECTI64VPROC glad_glGetQueryBufferObjecti64v = NULL;
PFNGLGETQUERYBUFFEROBJECTIVPROC glad_glGetQueryBufferObjectiv = NULL;
PFNGLGETQUERYBUFFEROBJECTUI64VPROC glad_glGetQueryBufferObjectui64v = NULL;
PFNGLGETQUERYBUFFEROBJECTUIVPROC glad_glGetQueryBufferObjectuiv = NULL;
PFNGLGETQUERYINDEXEDIVPROC glad_glGetQueryIndexediv = NULL;
PFNGLGETQUERYOBJECTI64VPROC glad_glGetQueryObjecti64v = NULL;
PFNGLGETQUERYOBJECTI64VEXTPROC glad_glGetQueryObjecti64vEXT = NULL;
PFNGLGETQUERYOBJECTIVPROC glad_glGetQueryObjectiv = NULL;
PFNGLGETQUERYOBJECTIVARBPROC glad_glGetQueryObjectivARB = NULL;
PFNGLGETQUERYOBJECTUI64VPROC glad_glGetQueryObjectui64v = NULL;
PFNGLGETQUERYOBJECTUI64VEXTPROC glad_glGetQueryObjectui64vEXT = NULL;
PFNGLGETQUERYOBJECTUIVPROC glad_glGetQueryObjectuiv = NULL;
PFNGLGETQUERYOBJECTUIVARBPROC glad_glGetQueryObjectuivARB = NULL;
PFNGLGETQUERYIVPROC glad_glGetQueryiv = NULL;
PFNGLGETQUERYIVARBPROC glad_glGetQueryivARB = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glad_glGetRenderbufferParameteriv = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC glad_glGetRenderbufferParameterivEXT = NULL;
PFNGLGETSAMPLERPARAMETERIIVPROC glad_glGetSamplerParameterIiv = NULL;
PFNGLGETSAMPLERPARAMETERIUIVPROC glad_glGetSamplerParameterIuiv = NULL;
PFNGLGETSAMPLERPARAMETERFVPROC glad_glGetSamplerParameterfv = NULL;
PFNGLGETSAMPLERPARAMETERIVPROC glad_glGetSamplerParameteriv = NULL;
PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC glad_glGetSemaphoreParameterui64vEXT = NULL;
PFNGLGETSEPARABLEFILTEREXTPROC glad_glGetSeparableFilterEXT = NULL;
PFNGLGETSHADERINFOLOGPROC glad_glGetShaderInfoLog = NULL;
PFNGLGETSHADERPRECISIONFORMATPROC glad_glGetShaderPrecisionFormat = NULL;
PFNGLGETSHADERSOURCEPROC glad_glGetShaderSource = NULL;
PFNGLGETSHADERSOURCEARBPROC glad_glGetShaderSourceARB = NULL;
PFNGLGETSHADERIVPROC glad_glGetShaderiv = NULL;
PFNGLGETSTRINGPROC glad_glGetString = NULL;
PFNGLGETSTRINGIPROC glad_glGetStringi = NULL;
PFNGLGETSUBROUTINEINDEXPROC glad_glGetSubroutineIndex = NULL;
PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glad_glGetSubroutineUniformLocation = NULL;
PFNGLGETSYNCIVPROC glad_glGetSynciv = NULL;
PFNGLGETTEXENVXVOESPROC glad_glGetTexEnvxvOES = NULL;
PFNGLGETTEXGENXVOESPROC glad_glGetTexGenxvOES = NULL;
PFNGLGETTEXIMAGEPROC glad_glGetTexImage = NULL;
PFNGLGETTEXLEVELPARAMETERFVPROC glad_glGetTexLevelParameterfv = NULL;
PFNGLGETTEXLEVELPARAMETERIVPROC glad_glGetTexLevelParameteriv = NULL;
PFNGLGETTEXLEVELPARAMETERXVOESPROC glad_glGetTexLevelParameterxvOES = NULL;
PFNGLGETTEXPARAMETERIIVPROC glad_glGetTexParameterIiv = NULL;
PFNGLGETTEXPARAMETERIIVEXTPROC glad_glGetTexParameterIivEXT = NULL;
PFNGLGETTEXPARAMETERIUIVPROC glad_glGetTexParameterIuiv = NULL;
PFNGLGETTEXPARAMETERIUIVEXTPROC glad_glGetTexParameterIuivEXT = NULL;
PFNGLGETTEXPARAMETERFVPROC glad_glGetTexParameterfv = NULL;
PFNGLGETTEXPARAMETERIVPROC glad_glGetTexParameteriv = NULL;
PFNGLGETTEXPARAMETERXVOESPROC glad_glGetTexParameterxvOES = NULL;
PFNGLGETTEXTUREHANDLEARBPROC glad_glGetTextureHandleARB = NULL;
PFNGLGETTEXTUREIMAGEPROC glad_glGetTextureImage = NULL;
PFNGLGETTEXTUREIMAGEEXTPROC glad_glGetTextureImageEXT = NULL;
PFNGLGETTEXTURELEVELPARAMETERFVPROC glad_glGetTextureLevelParameterfv = NULL;
PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC glad_glGetTextureLevelParameterfvEXT = NULL;
PFNGLGETTEXTURELEVELPARAMETERIVPROC glad_glGetTextureLevelParameteriv = NULL;
PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC glad_glGetTextureLevelParameterivEXT = NULL;
PFNGLGETTEXTUREPARAMETERIIVPROC glad_glGetTextureParameterIiv = NULL;
PFNGLGETTEXTUREPARAMETERIIVEXTPROC glad_glGetTextureParameterIivEXT = NULL;
PFNGLGETTEXTUREPARAMETERIUIVPROC glad_glGetTextureParameterIuiv = NULL;
PFNGLGETTEXTUREPARAMETERIUIVEXTPROC glad_glGetTextureParameterIuivEXT = NULL;
PFNGLGETTEXTUREPARAMETERFVPROC glad_glGetTextureParameterfv = NULL;
PFNGLGETTEXTUREPARAMETERFVEXTPROC glad_glGetTextureParameterfvEXT = NULL;
PFNGLGETTEXTUREPARAMETERIVPROC glad_glGetTextureParameteriv = NULL;
PFNGLGETTEXTUREPARAMETERIVEXTPROC glad_glGetTextureParameterivEXT = NULL;
PFNGLGETTEXTURESAMPLERHANDLEARBPROC glad_glGetTextureSamplerHandleARB = NULL;
PFNGLGETTEXTURESUBIMAGEPROC glad_glGetTextureSubImage = NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glad_glGetTransformFeedbackVarying = NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC glad_glGetTransformFeedbackVaryingEXT = NULL;
PFNGLGETTRANSFORMFEEDBACKI64_VPROC glad_glGetTransformFeedbacki64_v = NULL;
PFNGLGETTRANSFORMFEEDBACKI_VPROC glad_glGetTransformFeedbacki_v = NULL;
PFNGLGETTRANSFORMFEEDBACKIVPROC glad_glGetTransformFeedbackiv = NULL;
PFNGLGETUNIFORMBLOCKINDEXPROC glad_glGetUniformBlockIndex = NULL;
PFNGLGETUNIFORMBUFFERSIZEEXTPROC glad_glGetUniformBufferSizeEXT = NULL;
PFNGLGETUNIFORMINDICESPROC glad_glGetUniformIndices = NULL;
PFNGLGETUNIFORMLOCATIONPROC glad_glGetUniformLocation = NULL;
PFNGLGETUNIFORMLOCATIONARBPROC glad_glGetUniformLocationARB = NULL;
PFNGLGETUNIFORMOFFSETEXTPROC glad_glGetUniformOffsetEXT = NULL;
PFNGLGETUNIFORMSUBROUTINEUIVPROC glad_glGetUniformSubroutineuiv = NULL;
PFNGLGETUNIFORMDVPROC glad_glGetUniformdv = NULL;
PFNGLGETUNIFORMFVPROC glad_glGetUniformfv = NULL;
PFNGLGETUNIFORMFVARBPROC glad_glGetUniformfvARB = NULL;
PFNGLGETUNIFORMI64VARBPROC glad_glGetUniformi64vARB = NULL;
PFNGLGETUNIFORMIVPROC glad_glGetUniformiv = NULL;
PFNGLGETUNIFORMIVARBPROC glad_glGetUniformivARB = NULL;
PFNGLGETUNIFORMUI64VARBPROC glad_glGetUniformui64vARB = NULL;
PFNGLGETUNIFORMUIVPROC glad_glGetUniformuiv = NULL;
PFNGLGETUNIFORMUIVEXTPROC glad_glGetUniformuivEXT = NULL;
PFNGLGETUNSIGNEDBYTEI_VEXTPROC glad_glGetUnsignedBytei_vEXT = NULL;
PFNGLGETUNSIGNEDBYTEVEXTPROC glad_glGetUnsignedBytevEXT = NULL;
PFNGLGETVARIANTBOOLEANVEXTPROC glad_glGetVariantBooleanvEXT = NULL;
PFNGLGETVARIANTFLOATVEXTPROC glad_glGetVariantFloatvEXT = NULL;
PFNGLGETVARIANTINTEGERVEXTPROC glad_glGetVariantIntegervEXT = NULL;
PFNGLGETVARIANTPOINTERVEXTPROC glad_glGetVariantPointervEXT = NULL;
PFNGLGETVERTEXARRAYINDEXED64IVPROC glad_glGetVertexArrayIndexed64iv = NULL;
PFNGLGETVERTEXARRAYINDEXEDIVPROC glad_glGetVertexArrayIndexediv = NULL;
PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC glad_glGetVertexArrayIntegeri_vEXT = NULL;
PFNGLGETVERTEXARRAYINTEGERVEXTPROC glad_glGetVertexArrayIntegervEXT = NULL;
PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC glad_glGetVertexArrayPointeri_vEXT = NULL;
PFNGLGETVERTEXARRAYPOINTERVEXTPROC glad_glGetVertexArrayPointervEXT = NULL;
PFNGLGETVERTEXARRAYIVPROC glad_glGetVertexArrayiv = NULL;
PFNGLGETVERTEXATTRIBIIVPROC glad_glGetVertexAttribIiv = NULL;
PFNGLGETVERTEXATTRIBIIVEXTPROC glad_glGetVertexAttribIivEXT = NULL;
PFNGLGETVERTEXATTRIBIUIVPROC glad_glGetVertexAttribIuiv = NULL;
PFNGLGETVERTEXATTRIBIUIVEXTPROC glad_glGetVertexAttribIuivEXT = NULL;
PFNGLGETVERTEXATTRIBLDVPROC glad_glGetVertexAttribLdv = NULL;
PFNGLGETVERTEXATTRIBLDVEXTPROC glad_glGetVertexAttribLdvEXT = NULL;
PFNGLGETVERTEXATTRIBLUI64VARBPROC glad_glGetVertexAttribLui64vARB = NULL;
PFNGLGETVERTEXATTRIBPOINTERVPROC glad_glGetVertexAttribPointerv = NULL;
PFNGLGETVERTEXATTRIBPOINTERVARBPROC glad_glGetVertexAttribPointervARB = NULL;
PFNGLGETVERTEXATTRIBDVPROC glad_glGetVertexAttribdv = NULL;
PFNGLGETVERTEXATTRIBDVARBPROC glad_glGetVertexAttribdvARB = NULL;
PFNGLGETVERTEXATTRIBFVPROC glad_glGetVertexAttribfv = NULL;
PFNGLGETVERTEXATTRIBFVARBPROC glad_glGetVertexAttribfvARB = NULL;
PFNGLGETVERTEXATTRIBIVPROC glad_glGetVertexAttribiv = NULL;
PFNGLGETVERTEXATTRIBIVARBPROC glad_glGetVertexAttribivARB = NULL;
PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC glad_glGetnCompressedTexImageARB = NULL;
PFNGLGETNTEXIMAGEARBPROC glad_glGetnTexImageARB = NULL;
PFNGLGETNUNIFORMDVARBPROC glad_glGetnUniformdvARB = NULL;
PFNGLGETNUNIFORMFVPROC glad_glGetnUniformfv = NULL;
PFNGLGETNUNIFORMFVARBPROC glad_glGetnUniformfvARB = NULL;
PFNGLGETNUNIFORMI64VARBPROC glad_glGetnUniformi64vARB = NULL;
PFNGLGETNUNIFORMIVPROC glad_glGetnUniformiv = NULL;
PFNGLGETNUNIFORMIVARBPROC glad_glGetnUniformivARB = NULL;
PFNGLGETNUNIFORMUI64VARBPROC glad_glGetnUniformui64vARB = NULL;
PFNGLGETNUNIFORMUIVPROC glad_glGetnUniformuiv = NULL;
PFNGLGETNUNIFORMUIVARBPROC glad_glGetnUniformuivARB = NULL;
PFNGLHINTPROC glad_glHint = NULL;
PFNGLHISTOGRAMEXTPROC glad_glHistogramEXT = NULL;
PFNGLIMPORTMEMORYFDEXTPROC glad_glImportMemoryFdEXT = NULL;
PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC glad_glImportMemoryWin32HandleEXT = NULL;
PFNGLIMPORTMEMORYWIN32NAMEEXTPROC glad_glImportMemoryWin32NameEXT = NULL;
PFNGLIMPORTSEMAPHOREFDEXTPROC glad_glImportSemaphoreFdEXT = NULL;
PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC glad_glImportSemaphoreWin32HandleEXT = NULL;
PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC glad_glImportSemaphoreWin32NameEXT = NULL;
PFNGLIMPORTSYNCEXTPROC glad_glImportSyncEXT = NULL;
PFNGLINDEXFUNCEXTPROC glad_glIndexFuncEXT = NULL;
PFNGLINDEXMATERIALEXTPROC glad_glIndexMaterialEXT = NULL;
PFNGLINDEXPOINTEREXTPROC glad_glIndexPointerEXT = NULL;
PFNGLINDEXXOESPROC glad_glIndexxOES = NULL;
PFNGLINDEXXVOESPROC glad_glIndexxvOES = NULL;
PFNGLINSERTCOMPONENTEXTPROC glad_glInsertComponentEXT = NULL;
PFNGLINSERTEVENTMARKEREXTPROC glad_glInsertEventMarkerEXT = NULL;
PFNGLINVALIDATEBUFFERDATAPROC glad_glInvalidateBufferData = NULL;
PFNGLINVALIDATEBUFFERSUBDATAPROC glad_glInvalidateBufferSubData = NULL;
PFNGLINVALIDATEFRAMEBUFFERPROC glad_glInvalidateFramebuffer = NULL;
PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC glad_glInvalidateNamedFramebufferData = NULL;
PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC glad_glInvalidateNamedFramebufferSubData = NULL;
PFNGLINVALIDATESUBFRAMEBUFFERPROC glad_glInvalidateSubFramebuffer = NULL;
PFNGLINVALIDATETEXIMAGEPROC glad_glInvalidateTexImage = NULL;
PFNGLINVALIDATETEXSUBIMAGEPROC glad_glInvalidateTexSubImage = NULL;
PFNGLISBUFFERPROC glad_glIsBuffer = NULL;
PFNGLISBUFFERARBPROC glad_glIsBufferARB = NULL;
PFNGLISENABLEDPROC glad_glIsEnabled = NULL;
PFNGLISENABLEDINDEXEDEXTPROC glad_glIsEnabledIndexedEXT = NULL;
PFNGLISENABLEDIPROC glad_glIsEnabledi = NULL;
PFNGLISFRAMEBUFFERPROC glad_glIsFramebuffer = NULL;
PFNGLISFRAMEBUFFEREXTPROC glad_glIsFramebufferEXT = NULL;
PFNGLISIMAGEHANDLERESIDENTARBPROC glad_glIsImageHandleResidentARB = NULL;
PFNGLISMEMORYOBJECTEXTPROC glad_glIsMemoryObjectEXT = NULL;
PFNGLISNAMEDSTRINGARBPROC glad_glIsNamedStringARB = NULL;
PFNGLISPROGRAMPROC glad_glIsProgram = NULL;
PFNGLISPROGRAMARBPROC glad_glIsProgramARB = NULL;
PFNGLISPROGRAMPIPELINEPROC glad_glIsProgramPipeline = NULL;
PFNGLISQUERYPROC glad_glIsQuery = NULL;
PFNGLISQUERYARBPROC glad_glIsQueryARB = NULL;
PFNGLISRENDERBUFFERPROC glad_glIsRenderbuffer = NULL;
PFNGLISRENDERBUFFEREXTPROC glad_glIsRenderbufferEXT = NULL;
PFNGLISSAMPLERPROC glad_glIsSampler = NULL;
PFNGLISSEMAPHOREEXTPROC glad_glIsSemaphoreEXT = NULL;
PFNGLISSHADERPROC glad_glIsShader = NULL;
PFNGLISSYNCPROC glad_glIsSync = NULL;
PFNGLISTEXTUREPROC glad_glIsTexture = NULL;
PFNGLISTEXTUREEXTPROC glad_glIsTextureEXT = NULL;
PFNGLISTEXTUREHANDLERESIDENTARBPROC glad_glIsTextureHandleResidentARB = NULL;
PFNGLISTRANSFORMFEEDBACKPROC glad_glIsTransformFeedback = NULL;
PFNGLISVARIANTENABLEDEXTPROC glad_glIsVariantEnabledEXT = NULL;
PFNGLISVERTEXARRAYPROC glad_glIsVertexArray = NULL;
PFNGLLABELOBJECTEXTPROC glad_glLabelObjectEXT = NULL;
PFNGLLIGHTMODELXOESPROC glad_glLightModelxOES = NULL;
PFNGLLIGHTMODELXVOESPROC glad_glLightModelxvOES = NULL;
PFNGLLIGHTXOESPROC glad_glLightxOES = NULL;
PFNGLLIGHTXVOESPROC glad_glLightxvOES = NULL;
PFNGLLINEWIDTHPROC glad_glLineWidth = NULL;
PFNGLLINEWIDTHXOESPROC glad_glLineWidthxOES = NULL;
PFNGLLINKPROGRAMPROC glad_glLinkProgram = NULL;
PFNGLLINKPROGRAMARBPROC glad_glLinkProgramARB = NULL;
PFNGLLOADMATRIXXOESPROC glad_glLoadMatrixxOES = NULL;
PFNGLLOADTRANSPOSEMATRIXDARBPROC glad_glLoadTransposeMatrixdARB = NULL;
PFNGLLOADTRANSPOSEMATRIXFARBPROC glad_glLoadTransposeMatrixfARB = NULL;
PFNGLLOADTRANSPOSEMATRIXXOESPROC glad_glLoadTransposeMatrixxOES = NULL;
PFNGLLOCKARRAYSEXTPROC glad_glLockArraysEXT = NULL;
PFNGLLOGICOPPROC glad_glLogicOp = NULL;
PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC glad_glMakeImageHandleNonResidentARB = NULL;
PFNGLMAKEIMAGEHANDLERESIDENTARBPROC glad_glMakeImageHandleResidentARB = NULL;
PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC glad_glMakeTextureHandleNonResidentARB = NULL;
PFNGLMAKETEXTUREHANDLERESIDENTARBPROC glad_glMakeTextureHandleResidentARB = NULL;
PFNGLMAP1XOESPROC glad_glMap1xOES = NULL;
PFNGLMAP2XOESPROC glad_glMap2xOES = NULL;
PFNGLMAPBUFFERPROC glad_glMapBuffer = NULL;
PFNGLMAPBUFFERARBPROC glad_glMapBufferARB = NULL;
PFNGLMAPBUFFERRANGEPROC glad_glMapBufferRange = NULL;
PFNGLMAPGRID1XOESPROC glad_glMapGrid1xOES = NULL;
PFNGLMAPGRID2XOESPROC glad_glMapGrid2xOES = NULL;
PFNGLMAPNAMEDBUFFERPROC glad_glMapNamedBuffer = NULL;
PFNGLMAPNAMEDBUFFEREXTPROC glad_glMapNamedBufferEXT = NULL;
PFNGLMAPNAMEDBUFFERRANGEPROC glad_glMapNamedBufferRange = NULL;
PFNGLMAPNAMEDBUFFERRANGEEXTPROC glad_glMapNamedBufferRangeEXT = NULL;
PFNGLMATERIALXOESPROC glad_glMaterialxOES = NULL;
PFNGLMATERIALXVOESPROC glad_glMaterialxvOES = NULL;
PFNGLMATRIXFRUSTUMEXTPROC glad_glMatrixFrustumEXT = NULL;
PFNGLMATRIXINDEXPOINTERARBPROC glad_glMatrixIndexPointerARB = NULL;
PFNGLMATRIXINDEXUBVARBPROC glad_glMatrixIndexubvARB = NULL;
PFNGLMATRIXINDEXUIVARBPROC glad_glMatrixIndexuivARB = NULL;
PFNGLMATRIXINDEXUSVARBPROC glad_glMatrixIndexusvARB = NULL;
PFNGLMATRIXLOADIDENTITYEXTPROC glad_glMatrixLoadIdentityEXT = NULL;
PFNGLMATRIXLOADTRANSPOSEDEXTPROC glad_glMatrixLoadTransposedEXT = NULL;
PFNGLMATRIXLOADTRANSPOSEFEXTPROC glad_glMatrixLoadTransposefEXT = NULL;
PFNGLMATRIXLOADDEXTPROC glad_glMatrixLoaddEXT = NULL;
PFNGLMATRIXLOADFEXTPROC glad_glMatrixLoadfEXT = NULL;
PFNGLMATRIXMULTTRANSPOSEDEXTPROC glad_glMatrixMultTransposedEXT = NULL;
PFNGLMATRIXMULTTRANSPOSEFEXTPROC glad_glMatrixMultTransposefEXT = NULL;
PFNGLMATRIXMULTDEXTPROC glad_glMatrixMultdEXT = NULL;
PFNGLMATRIXMULTFEXTPROC glad_glMatrixMultfEXT = NULL;
PFNGLMATRIXORTHOEXTPROC glad_glMatrixOrthoEXT = NULL;
PFNGLMATRIXPOPEXTPROC glad_glMatrixPopEXT = NULL;
PFNGLMATRIXPUSHEXTPROC glad_glMatrixPushEXT = NULL;
PFNGLMATRIXROTATEDEXTPROC glad_glMatrixRotatedEXT = NULL;
PFNGLMATRIXROTATEFEXTPROC glad_glMatrixRotatefEXT = NULL;
PFNGLMATRIXSCALEDEXTPROC glad_glMatrixScaledEXT = NULL;
PFNGLMATRIXSCALEFEXTPROC glad_glMatrixScalefEXT = NULL;
PFNGLMATRIXTRANSLATEDEXTPROC glad_glMatrixTranslatedEXT = NULL;
PFNGLMATRIXTRANSLATEFEXTPROC glad_glMatrixTranslatefEXT = NULL;
PFNGLMAXSHADERCOMPILERTHREADSARBPROC glad_glMaxShaderCompilerThreadsARB = NULL;
PFNGLMAXSHADERCOMPILERTHREADSKHRPROC glad_glMaxShaderCompilerThreadsKHR = NULL;
PFNGLMEMORYBARRIERPROC glad_glMemoryBarrier = NULL;
PFNGLMEMORYBARRIERBYREGIONPROC glad_glMemoryBarrierByRegion = NULL;
PFNGLMEMORYBARRIEREXTPROC glad_glMemoryBarrierEXT = NULL;
PFNGLMEMORYOBJECTPARAMETERIVEXTPROC glad_glMemoryObjectParameterivEXT = NULL;
PFNGLMINSAMPLESHADINGARBPROC glad_glMinSampleShadingARB = NULL;
PFNGLMINMAXEXTPROC glad_glMinmaxEXT = NULL;
PFNGLMULTMATRIXXOESPROC glad_glMultMatrixxOES = NULL;
PFNGLMULTTRANSPOSEMATRIXDARBPROC glad_glMultTransposeMatrixdARB = NULL;
PFNGLMULTTRANSPOSEMATRIXFARBPROC glad_glMultTransposeMatrixfARB = NULL;
PFNGLMULTTRANSPOSEMATRIXXOESPROC glad_glMultTransposeMatrixxOES = NULL;
PFNGLMULTIDRAWARRAYSPROC glad_glMultiDrawArrays = NULL;
PFNGLMULTIDRAWARRAYSEXTPROC glad_glMultiDrawArraysEXT = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTPROC glad_glMultiDrawArraysIndirect = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC glad_glMultiDrawArraysIndirectCountARB = NULL;
PFNGLMULTIDRAWELEMENTSPROC glad_glMultiDrawElements = NULL;
PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glad_glMultiDrawElementsBaseVertex = NULL;
PFNGLMULTIDRAWELEMENTSEXTPROC glad_glMultiDrawElementsEXT = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTPROC glad_glMultiDrawElementsIndirect = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC glad_glMultiDrawElementsIndirectCountARB = NULL;
PFNGLMULTITEXBUFFEREXTPROC glad_glMultiTexBufferEXT = NULL;
PFNGLMULTITEXCOORD1BOESPROC glad_glMultiTexCoord1bOES = NULL;
PFNGLMULTITEXCOORD1BVOESPROC glad_glMultiTexCoord1bvOES = NULL;
PFNGLMULTITEXCOORD1DARBPROC glad_glMultiTexCoord1dARB = NULL;
PFNGLMULTITEXCOORD1DVARBPROC glad_glMultiTexCoord1dvARB = NULL;
PFNGLMULTITEXCOORD1FARBPROC glad_glMultiTexCoord1fARB = NULL;
PFNGLMULTITEXCOORD1FVARBPROC glad_glMultiTexCoord1fvARB = NULL;
PFNGLMULTITEXCOORD1IARBPROC glad_glMultiTexCoord1iARB = NULL;
PFNGLMULTITEXCOORD1IVARBPROC glad_glMultiTexCoord1ivARB = NULL;
PFNGLMULTITEXCOORD1SARBPROC glad_glMultiTexCoord1sARB = NULL;
PFNGLMULTITEXCOORD1SVARBPROC glad_glMultiTexCoord1svARB = NULL;
PFNGLMULTITEXCOORD1XOESPROC glad_glMultiTexCoord1xOES = NULL;
PFNGLMULTITEXCOORD1XVOESPROC glad_glMultiTexCoord1xvOES = NULL;
PFNGLMULTITEXCOORD2BOESPROC glad_glMultiTexCoord2bOES = NULL;
PFNGLMULTITEXCOORD2BVOESPROC glad_glMultiTexCoord2bvOES = NULL;
PFNGLMULTITEXCOORD2DARBPROC glad_glMultiTexCoord2dARB = NULL;
PFNGLMULTITEXCOORD2DVARBPROC glad_glMultiTexCoord2dvARB = NULL;
PFNGLMULTITEXCOORD2FARBPROC glad_glMultiTexCoord2fARB = NULL;
PFNGLMULTITEXCOORD2FVARBPROC glad_glMultiTexCoord2fvARB = NULL;
PFNGLMULTITEXCOORD2IARBPROC glad_glMultiTexCoord2iARB = NULL;
PFNGLMULTITEXCOORD2IVARBPROC glad_glMultiTexCoord2ivARB = NULL;
PFNGLMULTITEXCOORD2SARBPROC glad_glMultiTexCoord2sARB = NULL;
PFNGLMULTITEXCOORD2SVARBPROC glad_glMultiTexCoord2svARB = NULL;
PFNGLMULTITEXCOORD2XOESPROC glad_glMultiTexCoord2xOES = NULL;
PFNGLMULTITEXCOORD2XVOESPROC glad_glMultiTexCoord2xvOES = NULL;
PFNGLMULTITEXCOORD3BOESPROC glad_glMultiTexCoord3bOES = NULL;
PFNGLMULTITEXCOORD3BVOESPROC glad_glMultiTexCoord3bvOES = NULL;
PFNGLMULTITEXCOORD3DARBPROC glad_glMultiTexCoord3dARB = NULL;
PFNGLMULTITEXCOORD3DVARBPROC glad_glMultiTexCoord3dvARB = NULL;
PFNGLMULTITEXCOORD3FARBPROC glad_glMultiTexCoord3fARB = NULL;
PFNGLMULTITEXCOORD3FVARBPROC glad_glMultiTexCoord3fvARB = NULL;
PFNGLMULTITEXCOORD3IARBPROC glad_glMultiTexCoord3iARB = NULL;
PFNGLMULTITEXCOORD3IVARBPROC glad_glMultiTexCoord3ivARB = NULL;
PFNGLMULTITEXCOORD3SARBPROC glad_glMultiTexCoord3sARB = NULL;
PFNGLMULTITEXCOORD3SVARBPROC glad_glMultiTexCoord3svARB = NULL;
PFNGLMULTITEXCOORD3XOESPROC glad_glMultiTexCoord3xOES = NULL;
PFNGLMULTITEXCOORD3XVOESPROC glad_glMultiTexCoord3xvOES = NULL;
PFNGLMULTITEXCOORD4BOESPROC glad_glMultiTexCoord4bOES = NULL;
PFNGLMULTITEXCOORD4BVOESPROC glad_glMultiTexCoord4bvOES = NULL;
PFNGLMULTITEXCOORD4DARBPROC glad_glMultiTexCoord4dARB = NULL;
PFNGLMULTITEXCOORD4DVARBPROC glad_glMultiTexCoord4dvARB = NULL;
PFNGLMULTITEXCOORD4FARBPROC glad_glMultiTexCoord4fARB = NULL;
PFNGLMULTITEXCOORD4FVARBPROC glad_glMultiTexCoord4fvARB = NULL;
PFNGLMULTITEXCOORD4IARBPROC glad_glMultiTexCoord4iARB = NULL;
PFNGLMULTITEXCOORD4IVARBPROC glad_glMultiTexCoord4ivARB = NULL;
PFNGLMULTITEXCOORD4SARBPROC glad_glMultiTexCoord4sARB = NULL;
PFNGLMULTITEXCOORD4SVARBPROC glad_glMultiTexCoord4svARB = NULL;
PFNGLMULTITEXCOORD4XOESPROC glad_glMultiTexCoord4xOES = NULL;
PFNGLMULTITEXCOORD4XVOESPROC glad_glMultiTexCoord4xvOES = NULL;
PFNGLMULTITEXCOORDPOINTEREXTPROC glad_glMultiTexCoordPointerEXT = NULL;
PFNGLMULTITEXENVFEXTPROC glad_glMultiTexEnvfEXT = NULL;
PFNGLMULTITEXENVFVEXTPROC glad_glMultiTexEnvfvEXT = NULL;
PFNGLMULTITEXENVIEXTPROC glad_glMultiTexEnviEXT = NULL;
PFNGLMULTITEXENVIVEXTPROC glad_glMultiTexEnvivEXT = NULL;
PFNGLMULTITEXGENDEXTPROC glad_glMultiTexGendEXT = NULL;
PFNGLMULTITEXGENDVEXTPROC glad_glMultiTexGendvEXT = NULL;
PFNGLMULTITEXGENFEXTPROC glad_glMultiTexGenfEXT = NULL;
PFNGLMULTITEXGENFVEXTPROC glad_glMultiTexGenfvEXT = NULL;
PFNGLMULTITEXGENIEXTPROC glad_glMultiTexGeniEXT = NULL;
PFNGLMULTITEXGENIVEXTPROC glad_glMultiTexGenivEXT = NULL;
PFNGLMULTITEXIMAGE1DEXTPROC glad_glMultiTexImage1DEXT = NULL;
PFNGLMULTITEXIMAGE2DEXTPROC glad_glMultiTexImage2DEXT = NULL;
PFNGLMULTITEXIMAGE3DEXTPROC glad_glMultiTexImage3DEXT = NULL;
PFNGLMULTITEXPARAMETERIIVEXTPROC glad_glMultiTexParameterIivEXT = NULL;
PFNGLMULTITEXPARAMETERIUIVEXTPROC glad_glMultiTexParameterIuivEXT = NULL;
PFNGLMULTITEXPARAMETERFEXTPROC glad_glMultiTexParameterfEXT = NULL;
PFNGLMULTITEXPARAMETERFVEXTPROC glad_glMultiTexParameterfvEXT = NULL;
PFNGLMULTITEXPARAMETERIEXTPROC glad_glMultiTexParameteriEXT = NULL;
PFNGLMULTITEXPARAMETERIVEXTPROC glad_glMultiTexParameterivEXT = NULL;
PFNGLMULTITEXRENDERBUFFEREXTPROC glad_glMultiTexRenderbufferEXT = NULL;
PFNGLMULTITEXSUBIMAGE1DEXTPROC glad_glMultiTexSubImage1DEXT = NULL;
PFNGLMULTITEXSUBIMAGE2DEXTPROC glad_glMultiTexSubImage2DEXT = NULL;
PFNGLMULTITEXSUBIMAGE3DEXTPROC glad_glMultiTexSubImage3DEXT = NULL;
PFNGLNAMEDBUFFERDATAPROC glad_glNamedBufferData = NULL;
PFNGLNAMEDBUFFERDATAEXTPROC glad_glNamedBufferDataEXT = NULL;
PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC glad_glNamedBufferPageCommitmentARB = NULL;
PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC glad_glNamedBufferPageCommitmentEXT = NULL;
PFNGLNAMEDBUFFERSTORAGEPROC glad_glNamedBufferStorage = NULL;
PFNGLNAMEDBUFFERSTORAGEEXTPROC glad_glNamedBufferStorageEXT = NULL;
PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC glad_glNamedBufferStorageExternalEXT = NULL;
PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC glad_glNamedBufferStorageMemEXT = NULL;
PFNGLNAMEDBUFFERSUBDATAPROC glad_glNamedBufferSubData = NULL;
PFNGLNAMEDBUFFERSUBDATAEXTPROC glad_glNamedBufferSubDataEXT = NULL;
PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC glad_glNamedCopyBufferSubDataEXT = NULL;
PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC glad_glNamedFramebufferDrawBuffer = NULL;
PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC glad_glNamedFramebufferDrawBuffers = NULL;
PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC glad_glNamedFramebufferParameteri = NULL;
PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC glad_glNamedFramebufferParameteriEXT = NULL;
PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC glad_glNamedFramebufferReadBuffer = NULL;
PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC glad_glNamedFramebufferRenderbuffer = NULL;
PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC glad_glNamedFramebufferRenderbufferEXT = NULL;
PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC glad_glNamedFramebufferSampleLocationsfvARB = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREPROC glad_glNamedFramebufferTexture = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC glad_glNamedFramebufferTexture1DEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC glad_glNamedFramebufferTexture2DEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC glad_glNamedFramebufferTexture3DEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC glad_glNamedFramebufferTextureEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC glad_glNamedFramebufferTextureFaceEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC glad_glNamedFramebufferTextureLayer = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC glad_glNamedFramebufferTextureLayerEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC glad_glNamedProgramLocalParameter4dEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC glad_glNamedProgramLocalParameter4dvEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC glad_glNamedProgramLocalParameter4fEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC glad_glNamedProgramLocalParameter4fvEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC glad_glNamedProgramLocalParameterI4iEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC glad_glNamedProgramLocalParameterI4ivEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC glad_glNamedProgramLocalParameterI4uiEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC glad_glNamedProgramLocalParameterI4uivEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC glad_glNamedProgramLocalParameters4fvEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC glad_glNamedProgramLocalParametersI4ivEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC glad_glNamedProgramLocalParametersI4uivEXT = NULL;
PFNGLNAMEDPROGRAMSTRINGEXTPROC glad_glNamedProgramStringEXT = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEPROC glad_glNamedRenderbufferStorage = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC glad_glNamedRenderbufferStorageEXT = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC glad_glNamedRenderbufferStorageMultisample = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC glad_glNamedRenderbufferStorageMultisampleCoverageEXT = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glad_glNamedRenderbufferStorageMultisampleEXT = NULL;
PFNGLNAMEDSTRINGARBPROC glad_glNamedStringARB = NULL;
PFNGLNORMAL3XOESPROC glad_glNormal3xOES = NULL;
PFNGLNORMAL3XVOESPROC glad_glNormal3xvOES = NULL;
PFNGLNORMALPOINTEREXTPROC glad_glNormalPointerEXT = NULL;
PFNGLOBJECTLABELPROC glad_glObjectLabel = NULL;
PFNGLOBJECTPTRLABELPROC glad_glObjectPtrLabel = NULL;
PFNGLORTHOFOESPROC glad_glOrthofOES = NULL;
PFNGLORTHOXOESPROC glad_glOrthoxOES = NULL;
PFNGLPASSTHROUGHXOESPROC glad_glPassThroughxOES = NULL;
PFNGLPATCHPARAMETERFVPROC glad_glPatchParameterfv = NULL;
PFNGLPATCHPARAMETERIPROC glad_glPatchParameteri = NULL;
PFNGLPAUSETRANSFORMFEEDBACKPROC glad_glPauseTransformFeedback = NULL;
PFNGLPIXELMAPXPROC glad_glPixelMapx = NULL;
PFNGLPIXELSTOREFPROC glad_glPixelStoref = NULL;
PFNGLPIXELSTOREIPROC glad_glPixelStorei = NULL;
PFNGLPIXELSTOREXPROC glad_glPixelStorex = NULL;
PFNGLPIXELTRANSFERXOESPROC glad_glPixelTransferxOES = NULL;
PFNGLPIXELTRANSFORMPARAMETERFEXTPROC glad_glPixelTransformParameterfEXT = NULL;
PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC glad_glPixelTransformParameterfvEXT = NULL;
PFNGLPIXELTRANSFORMPARAMETERIEXTPROC glad_glPixelTransformParameteriEXT = NULL;
PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC glad_glPixelTransformParameterivEXT = NULL;
PFNGLPIXELZOOMXOESPROC glad_glPixelZoomxOES = NULL;
PFNGLPOINTPARAMETERFPROC glad_glPointParameterf = NULL;
PFNGLPOINTPARAMETERFARBPROC glad_glPointParameterfARB = NULL;
PFNGLPOINTPARAMETERFEXTPROC glad_glPointParameterfEXT = NULL;
PFNGLPOINTPARAMETERFVPROC glad_glPointParameterfv = NULL;
PFNGLPOINTPARAMETERFVARBPROC glad_glPointParameterfvARB = NULL;
PFNGLPOINTPARAMETERFVEXTPROC glad_glPointParameterfvEXT = NULL;
PFNGLPOINTPARAMETERIPROC glad_glPointParameteri = NULL;
PFNGLPOINTPARAMETERIVPROC glad_glPointParameteriv = NULL;
PFNGLPOINTPARAMETERXVOESPROC glad_glPointParameterxvOES = NULL;
PFNGLPOINTSIZEPROC glad_glPointSize = NULL;
PFNGLPOINTSIZEXOESPROC glad_glPointSizexOES = NULL;
PFNGLPOLYGONMODEPROC glad_glPolygonMode = NULL;
PFNGLPOLYGONOFFSETPROC glad_glPolygonOffset = NULL;
PFNGLPOLYGONOFFSETCLAMPPROC glad_glPolygonOffsetClamp = NULL;
PFNGLPOLYGONOFFSETCLAMPEXTPROC glad_glPolygonOffsetClampEXT = NULL;
PFNGLPOLYGONOFFSETEXTPROC glad_glPolygonOffsetEXT = NULL;
PFNGLPOLYGONOFFSETXOESPROC glad_glPolygonOffsetxOES = NULL;
PFNGLPOPDEBUGGROUPPROC glad_glPopDebugGroup = NULL;
PFNGLPOPGROUPMARKEREXTPROC glad_glPopGroupMarkerEXT = NULL;
PFNGLPRIMITIVEBOUNDINGBOXARBPROC glad_glPrimitiveBoundingBoxARB = NULL;
PFNGLPRIMITIVERESTARTINDEXPROC glad_glPrimitiveRestartIndex = NULL;
PFNGLPRIORITIZETEXTURESEXTPROC glad_glPrioritizeTexturesEXT = NULL;
PFNGLPRIORITIZETEXTURESXOESPROC glad_glPrioritizeTexturesxOES = NULL;
PFNGLPROGRAMBINARYPROC glad_glProgramBinary = NULL;
PFNGLPROGRAMENVPARAMETER4DARBPROC glad_glProgramEnvParameter4dARB = NULL;
PFNGLPROGRAMENVPARAMETER4DVARBPROC glad_glProgramEnvParameter4dvARB = NULL;
PFNGLPROGRAMENVPARAMETER4FARBPROC glad_glProgramEnvParameter4fARB = NULL;
PFNGLPROGRAMENVPARAMETER4FVARBPROC glad_glProgramEnvParameter4fvARB = NULL;
PFNGLPROGRAMENVPARAMETERS4FVEXTPROC glad_glProgramEnvParameters4fvEXT = NULL;
PFNGLPROGRAMLOCALPARAMETER4DARBPROC glad_glProgramLocalParameter4dARB = NULL;
PFNGLPROGRAMLOCALPARAMETER4DVARBPROC glad_glProgramLocalParameter4dvARB = NULL;
PFNGLPROGRAMLOCALPARAMETER4FARBPROC glad_glProgramLocalParameter4fARB = NULL;
PFNGLPROGRAMLOCALPARAMETER4FVARBPROC glad_glProgramLocalParameter4fvARB = NULL;
PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC glad_glProgramLocalParameters4fvEXT = NULL;
PFNGLPROGRAMPARAMETERIPROC glad_glProgramParameteri = NULL;
PFNGLPROGRAMPARAMETERIARBPROC glad_glProgramParameteriARB = NULL;
PFNGLPROGRAMPARAMETERIEXTPROC glad_glProgramParameteriEXT = NULL;
PFNGLPROGRAMSTRINGARBPROC glad_glProgramStringARB = NULL;
PFNGLPROGRAMUNIFORM1DPROC glad_glProgramUniform1d = NULL;
PFNGLPROGRAMUNIFORM1DEXTPROC glad_glProgramUniform1dEXT = NULL;
PFNGLPROGRAMUNIFORM1DVPROC glad_glProgramUniform1dv = NULL;
PFNGLPROGRAMUNIFORM1DVEXTPROC glad_glProgramUniform1dvEXT = NULL;
PFNGLPROGRAMUNIFORM1FPROC glad_glProgramUniform1f = NULL;
PFNGLPROGRAMUNIFORM1FEXTPROC glad_glProgramUniform1fEXT = NULL;
PFNGLPROGRAMUNIFORM1FVPROC glad_glProgramUniform1fv = NULL;
PFNGLPROGRAMUNIFORM1FVEXTPROC glad_glProgramUniform1fvEXT = NULL;
PFNGLPROGRAMUNIFORM1IPROC glad_glProgramUniform1i = NULL;
PFNGLPROGRAMUNIFORM1I64ARBPROC glad_glProgramUniform1i64ARB = NULL;
PFNGLPROGRAMUNIFORM1I64VARBPROC glad_glProgramUniform1i64vARB = NULL;
PFNGLPROGRAMUNIFORM1IEXTPROC glad_glProgramUniform1iEXT = NULL;
PFNGLPROGRAMUNIFORM1IVPROC glad_glProgramUniform1iv = NULL;
PFNGLPROGRAMUNIFORM1IVEXTPROC glad_glProgramUniform1ivEXT = NULL;
PFNGLPROGRAMUNIFORM1UIPROC glad_glProgramUniform1ui = NULL;
PFNGLPROGRAMUNIFORM1UI64ARBPROC glad_glProgramUniform1ui64ARB = NULL;
PFNGLPROGRAMUNIFORM1UI64VARBPROC glad_glProgramUniform1ui64vARB = NULL;
PFNGLPROGRAMUNIFORM1UIEXTPROC glad_glProgramUniform1uiEXT = NULL;
PFNGLPROGRAMUNIFORM1UIVPROC glad_glProgramUniform1uiv = NULL;
PFNGLPROGRAMUNIFORM1UIVEXTPROC glad_glProgramUniform1uivEXT = NULL;
PFNGLPROGRAMUNIFORM2DPROC glad_glProgramUniform2d = NULL;
PFNGLPROGRAMUNIFORM2DEXTPROC glad_glProgramUniform2dEXT = NULL;
PFNGLPROGRAMUNIFORM2DVPROC glad_glProgramUniform2dv = NULL;
PFNGLPROGRAMUNIFORM2DVEXTPROC glad_glProgramUniform2dvEXT = NULL;
PFNGLPROGRAMUNIFORM2FPROC glad_glProgramUniform2f = NULL;
PFNGLPROGRAMUNIFORM2FEXTPROC glad_glProgramUniform2fEXT = NULL;
PFNGLPROGRAMUNIFORM2FVPROC glad_glProgramUniform2fv = NULL;
PFNGLPROGRAMUNIFORM2FVEXTPROC glad_glProgramUniform2fvEXT = NULL;
PFNGLPROGRAMUNIFORM2IPROC glad_glProgramUniform2i = NULL;
PFNGLPROGRAMUNIFORM2I64ARBPROC glad_glProgramUniform2i64ARB = NULL;
PFNGLPROGRAMUNIFORM2I64VARBPROC glad_glProgramUniform2i64vARB = NULL;
PFNGLPROGRAMUNIFORM2IEXTPROC glad_glProgramUniform2iEXT = NULL;
PFNGLPROGRAMUNIFORM2IVPROC glad_glProgramUniform2iv = NULL;
PFNGLPROGRAMUNIFORM2IVEXTPROC glad_glProgramUniform2ivEXT = NULL;
PFNGLPROGRAMUNIFORM2UIPROC glad_glProgramUniform2ui = NULL;
PFNGLPROGRAMUNIFORM2UI64ARBPROC glad_glProgramUniform2ui64ARB = NULL;
PFNGLPROGRAMUNIFORM2UI64VARBPROC glad_glProgramUniform2ui64vARB = NULL;
PFNGLPROGRAMUNIFORM2UIEXTPROC glad_glProgramUniform2uiEXT = NULL;
PFNGLPROGRAMUNIFORM2UIVPROC glad_glProgramUniform2uiv = NULL;
PFNGLPROGRAMUNIFORM2UIVEXTPROC glad_glProgramUniform2uivEXT = NULL;
PFNGLPROGRAMUNIFORM3DPROC glad_glProgramUniform3d = NULL;
PFNGLPROGRAMUNIFORM3DEXTPROC glad_glProgramUniform3dEXT = NULL;
PFNGLPROGRAMUNIFORM3DVPROC glad_glProgramUniform3dv = NULL;
PFNGLPROGRAMUNIFORM3DVEXTPROC glad_glProgramUniform3dvEXT = NULL;
PFNGLPROGRAMUNIFORM3FPROC glad_glProgramUniform3f = NULL;
PFNGLPROGRAMUNIFORM3FEXTPROC glad_glProgramUniform3fEXT = NULL;
PFNGLPROGRAMUNIFORM3FVPROC glad_glProgramUniform3fv = NULL;
PFNGLPROGRAMUNIFORM3FVEXTPROC glad_glProgramUniform3fvEXT = NULL;
PFNGLPROGRAMUNIFORM3IPROC glad_glProgramUniform3i = NULL;
PFNGLPROGRAMUNIFORM3I64ARBPROC glad_glProgramUniform3i64ARB = NULL;
PFNGLPROGRAMUNIFORM3I64VARBPROC glad_glProgramUniform3i64vARB = NULL;
PFNGLPROGRAMUNIFORM3IEXTPROC glad_glProgramUniform3iEXT = NULL;
PFNGLPROGRAMUNIFORM3IVPROC glad_glProgramUniform3iv = NULL;
PFNGLPROGRAMUNIFORM3IVEXTPROC glad_glProgramUniform3ivEXT = NULL;
PFNGLPROGRAMUNIFORM3UIPROC glad_glProgramUniform3ui = NULL;
PFNGLPROGRAMUNIFORM3UI64ARBPROC glad_glProgramUniform3ui64ARB = NULL;
PFNGLPROGRAMUNIFORM3UI64VARBPROC glad_glProgramUniform3ui64vARB = NULL;
PFNGLPROGRAMUNIFORM3UIEXTPROC glad_glProgramUniform3uiEXT = NULL;
PFNGLPROGRAMUNIFORM3UIVPROC glad_glProgramUniform3uiv = NULL;
PFNGLPROGRAMUNIFORM3UIVEXTPROC glad_glProgramUniform3uivEXT = NULL;
PFNGLPROGRAMUNIFORM4DPROC glad_glProgramUniform4d = NULL;
PFNGLPROGRAMUNIFORM4DEXTPROC glad_glProgramUniform4dEXT = NULL;
PFNGLPROGRAMUNIFORM4DVPROC glad_glProgramUniform4dv = NULL;
PFNGLPROGRAMUNIFORM4DVEXTPROC glad_glProgramUniform4dvEXT = NULL;
PFNGLPROGRAMUNIFORM4FPROC glad_glProgramUniform4f = NULL;
PFNGLPROGRAMUNIFORM4FEXTPROC glad_glProgramUniform4fEXT = NULL;
PFNGLPROGRAMUNIFORM4FVPROC glad_glProgramUniform4fv = NULL;
PFNGLPROGRAMUNIFORM4FVEXTPROC glad_glProgramUniform4fvEXT = NULL;
PFNGLPROGRAMUNIFORM4IPROC glad_glProgramUniform4i = NULL;
PFNGLPROGRAMUNIFORM4I64ARBPROC glad_glProgramUniform4i64ARB = NULL;
PFNGLPROGRAMUNIFORM4I64VARBPROC glad_glProgramUniform4i64vARB = NULL;
PFNGLPROGRAMUNIFORM4IEXTPROC glad_glProgramUniform4iEXT = NULL;
PFNGLPROGRAMUNIFORM4IVPROC glad_glProgramUniform4iv = NULL;
PFNGLPROGRAMUNIFORM4IVEXTPROC glad_glProgramUniform4ivEXT = NULL;
PFNGLPROGRAMUNIFORM4UIPROC glad_glProgramUniform4ui = NULL;
PFNGLPROGRAMUNIFORM4UI64ARBPROC glad_glProgramUniform4ui64ARB = NULL;
PFNGLPROGRAMUNIFORM4UI64VARBPROC glad_glProgramUniform4ui64vARB = NULL;
PFNGLPROGRAMUNIFORM4UIEXTPROC glad_glProgramUniform4uiEXT = NULL;
PFNGLPROGRAMUNIFORM4UIVPROC glad_glProgramUniform4uiv = NULL;
PFNGLPROGRAMUNIFORM4UIVEXTPROC glad_glProgramUniform4uivEXT = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC glad_glProgramUniformHandleui64ARB = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC glad_glProgramUniformHandleui64vARB = NULL;
PFNGLPROGRAMUNIFORMMATRIX2DVPROC glad_glProgramUniformMatrix2dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC glad_glProgramUniformMatrix2dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2FVPROC glad_glProgramUniformMatrix2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC glad_glProgramUniformMatrix2fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glad_glProgramUniformMatrix2x3dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC glad_glProgramUniformMatrix2x3dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glad_glProgramUniformMatrix2x3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glad_glProgramUniformMatrix2x3fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glad_glProgramUniformMatrix2x4dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC glad_glProgramUniformMatrix2x4dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glad_glProgramUniformMatrix2x4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glad_glProgramUniformMatrix2x4fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3DVPROC glad_glProgramUniformMatrix3dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC glad_glProgramUniformMatrix3dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3FVPROC glad_glProgramUniformMatrix3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC glad_glProgramUniformMatrix3fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glad_glProgramUniformMatrix3x2dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC glad_glProgramUniformMatrix3x2dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glad_glProgramUniformMatrix3x2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glad_glProgramUniformMatrix3x2fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glad_glProgramUniformMatrix3x4dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC glad_glProgramUniformMatrix3x4dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glad_glProgramUniformMatrix3x4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glad_glProgramUniformMatrix3x4fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4DVPROC glad_glProgramUniformMatrix4dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC glad_glProgramUniformMatrix4dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4FVPROC glad_glProgramUniformMatrix4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glad_glProgramUniformMatrix4fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glad_glProgramUniformMatrix4x2dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC glad_glProgramUniformMatrix4x2dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glad_glProgramUniformMatrix4x2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glad_glProgramUniformMatrix4x2fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glad_glProgramUniformMatrix4x3dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC glad_glProgramUniformMatrix4x3dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glad_glProgramUniformMatrix4x3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glad_glProgramUniformMatrix4x3fvEXT = NULL;
PFNGLPROVOKINGVERTEXPROC glad_glProvokingVertex = NULL;
PFNGLPROVOKINGVERTEXEXTPROC glad_glProvokingVertexEXT = NULL;
PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC glad_glPushClientAttribDefaultEXT = NULL;
PFNGLPUSHDEBUGGROUPPROC glad_glPushDebugGroup = NULL;
PFNGLPUSHGROUPMARKEREXTPROC glad_glPushGroupMarkerEXT = NULL;
PFNGLQUERYCOUNTERPROC glad_glQueryCounter = NULL;
PFNGLQUERYMATRIXXOESPROC glad_glQueryMatrixxOES = NULL;
PFNGLRASTERPOS2XOESPROC glad_glRasterPos2xOES = NULL;
PFNGLRASTERPOS2XVOESPROC glad_glRasterPos2xvOES = NULL;
PFNGLRASTERPOS3XOESPROC glad_glRasterPos3xOES = NULL;
PFNGLRASTERPOS3XVOESPROC glad_glRasterPos3xvOES = NULL;
PFNGLRASTERPOS4XOESPROC glad_glRasterPos4xOES = NULL;
PFNGLRASTERPOS4XVOESPROC glad_glRasterPos4xvOES = NULL;
PFNGLRASTERSAMPLESEXTPROC glad_glRasterSamplesEXT = NULL;
PFNGLREADBUFFERPROC glad_glReadBuffer = NULL;
PFNGLREADPIXELSPROC glad_glReadPixels = NULL;
PFNGLREADNPIXELSPROC glad_glReadnPixels = NULL;
PFNGLREADNPIXELSARBPROC glad_glReadnPixelsARB = NULL;
PFNGLRECTXOESPROC glad_glRectxOES = NULL;
PFNGLRECTXVOESPROC glad_glRectxvOES = NULL;
PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC glad_glReleaseKeyedMutexWin32EXT = NULL;
PFNGLRELEASESHADERCOMPILERPROC glad_glReleaseShaderCompiler = NULL;
PFNGLRENDERBUFFERSTORAGEPROC glad_glRenderbufferStorage = NULL;
PFNGLRENDERBUFFERSTORAGEEXTPROC glad_glRenderbufferStorageEXT = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glad_glRenderbufferStorageMultisample = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glad_glRenderbufferStorageMultisampleEXT = NULL;
PFNGLRESETHISTOGRAMEXTPROC glad_glResetHistogramEXT = NULL;
PFNGLRESETMINMAXEXTPROC glad_glResetMinmaxEXT = NULL;
PFNGLRESUMETRANSFORMFEEDBACKPROC glad_glResumeTransformFeedback = NULL;
PFNGLROTATEXOESPROC glad_glRotatexOES = NULL;
PFNGLSAMPLECOVERAGEPROC glad_glSampleCoverage = NULL;
PFNGLSAMPLECOVERAGEARBPROC glad_glSampleCoverageARB = NULL;
PFNGLSAMPLEMASKEXTPROC glad_glSampleMaskEXT = NULL;
PFNGLSAMPLEMASKIPROC glad_glSampleMaski = NULL;
PFNGLSAMPLEPATTERNEXTPROC glad_glSamplePatternEXT = NULL;
PFNGLSAMPLERPARAMETERIIVPROC glad_glSamplerParameterIiv = NULL;
PFNGLSAMPLERPARAMETERIUIVPROC glad_glSamplerParameterIuiv = NULL;
PFNGLSAMPLERPARAMETERFPROC glad_glSamplerParameterf = NULL;
PFNGLSAMPLERPARAMETERFVPROC glad_glSamplerParameterfv = NULL;
PFNGLSAMPLERPARAMETERIPROC glad_glSamplerParameteri = NULL;
PFNGLSAMPLERPARAMETERIVPROC glad_glSamplerParameteriv = NULL;
PFNGLSCALEXOESPROC glad_glScalexOES = NULL;
PFNGLSCISSORPROC glad_glScissor = NULL;
PFNGLSCISSORARRAYVPROC glad_glScissorArrayv = NULL;
PFNGLSCISSORINDEXEDPROC glad_glScissorIndexed = NULL;
PFNGLSCISSORINDEXEDVPROC glad_glScissorIndexedv = NULL;
PFNGLSECONDARYCOLOR3BEXTPROC glad_glSecondaryColor3bEXT = NULL;
PFNGLSECONDARYCOLOR3BVEXTPROC glad_glSecondaryColor3bvEXT = NULL;
PFNGLSECONDARYCOLOR3DEXTPROC glad_glSecondaryColor3dEXT = NULL;
PFNGLSECONDARYCOLOR3DVEXTPROC glad_glSecondaryColor3dvEXT = NULL;
PFNGLSECONDARYCOLOR3FEXTPROC glad_glSecondaryColor3fEXT = NULL;
PFNGLSECONDARYCOLOR3FVEXTPROC glad_glSecondaryColor3fvEXT = NULL;
PFNGLSECONDARYCOLOR3IEXTPROC glad_glSecondaryColor3iEXT = NULL;
PFNGLSECONDARYCOLOR3IVEXTPROC glad_glSecondaryColor3ivEXT = NULL;
PFNGLSECONDARYCOLOR3SEXTPROC glad_glSecondaryColor3sEXT = NULL;
PFNGLSECONDARYCOLOR3SVEXTPROC glad_glSecondaryColor3svEXT = NULL;
PFNGLSECONDARYCOLOR3UBEXTPROC glad_glSecondaryColor3ubEXT = NULL;
PFNGLSECONDARYCOLOR3UBVEXTPROC glad_glSecondaryColor3ubvEXT = NULL;
PFNGLSECONDARYCOLOR3UIEXTPROC glad_glSecondaryColor3uiEXT = NULL;
PFNGLSECONDARYCOLOR3UIVEXTPROC glad_glSecondaryColor3uivEXT = NULL;
PFNGLSECONDARYCOLOR3USEXTPROC glad_glSecondaryColor3usEXT = NULL;
PFNGLSECONDARYCOLOR3USVEXTPROC glad_glSecondaryColor3usvEXT = NULL;
PFNGLSECONDARYCOLORPOINTEREXTPROC glad_glSecondaryColorPointerEXT = NULL;
PFNGLSEMAPHOREPARAMETERUI64VEXTPROC glad_glSemaphoreParameterui64vEXT = NULL;
PFNGLSEPARABLEFILTER2DEXTPROC glad_glSeparableFilter2DEXT = NULL;
PFNGLSETINVARIANTEXTPROC glad_glSetInvariantEXT = NULL;
PFNGLSETLOCALCONSTANTEXTPROC glad_glSetLocalConstantEXT = NULL;
PFNGLSHADERBINARYPROC glad_glShaderBinary = NULL;
PFNGLSHADEROP1EXTPROC glad_glShaderOp1EXT = NULL;
PFNGLSHADEROP2EXTPROC glad_glShaderOp2EXT = NULL;
PFNGLSHADEROP3EXTPROC glad_glShaderOp3EXT = NULL;
PFNGLSHADERSOURCEPROC glad_glShaderSource = NULL;
PFNGLSHADERSOURCEARBPROC glad_glShaderSourceARB = NULL;
PFNGLSHADERSTORAGEBLOCKBINDINGPROC glad_glShaderStorageBlockBinding = NULL;
PFNGLSIGNALSEMAPHOREEXTPROC glad_glSignalSemaphoreEXT = NULL;
PFNGLSPECIALIZESHADERARBPROC glad_glSpecializeShaderARB = NULL;
PFNGLSTENCILCLEARTAGEXTPROC glad_glStencilClearTagEXT = NULL;
PFNGLSTENCILFUNCPROC glad_glStencilFunc = NULL;
PFNGLSTENCILFUNCSEPARATEPROC glad_glStencilFuncSeparate = NULL;
PFNGLSTENCILMASKPROC glad_glStencilMask = NULL;
PFNGLSTENCILMASKSEPARATEPROC glad_glStencilMaskSeparate = NULL;
PFNGLSTENCILOPPROC glad_glStencilOp = NULL;
PFNGLSTENCILOPSEPARATEPROC glad_glStencilOpSeparate = NULL;
PFNGLSWIZZLEEXTPROC glad_glSwizzleEXT = NULL;
PFNGLTANGENT3BEXTPROC glad_glTangent3bEXT = NULL;
PFNGLTANGENT3BVEXTPROC glad_glTangent3bvEXT = NULL;
PFNGLTANGENT3DEXTPROC glad_glTangent3dEXT = NULL;
PFNGLTANGENT3DVEXTPROC glad_glTangent3dvEXT = NULL;
PFNGLTANGENT3FEXTPROC glad_glTangent3fEXT = NULL;
PFNGLTANGENT3FVEXTPROC glad_glTangent3fvEXT = NULL;
PFNGLTANGENT3IEXTPROC glad_glTangent3iEXT = NULL;
PFNGLTANGENT3IVEXTPROC glad_glTangent3ivEXT = NULL;
PFNGLTANGENT3SEXTPROC glad_glTangent3sEXT = NULL;
PFNGLTANGENT3SVEXTPROC glad_glTangent3svEXT = NULL;
PFNGLTANGENTPOINTEREXTPROC glad_glTangentPointerEXT = NULL;
PFNGLTEXBUFFERPROC glad_glTexBuffer = NULL;
PFNGLTEXBUFFERARBPROC glad_glTexBufferARB = NULL;
PFNGLTEXBUFFEREXTPROC glad_glTexBufferEXT = NULL;
PFNGLTEXBUFFERRANGEPROC glad_glTexBufferRange = NULL;
PFNGLTEXCOORD1BOESPROC glad_glTexCoord1bOES = NULL;
PFNGLTEXCOORD1BVOESPROC glad_glTexCoord1bvOES = NULL;
PFNGLTEXCOORD1XOESPROC glad_glTexCoord1xOES = NULL;
PFNGLTEXCOORD1XVOESPROC glad_glTexCoord1xvOES = NULL;
PFNGLTEXCOORD2BOESPROC glad_glTexCoord2bOES = NULL;
PFNGLTEXCOORD2BVOESPROC glad_glTexCoord2bvOES = NULL;
PFNGLTEXCOORD2XOESPROC glad_glTexCoord2xOES = NULL;
PFNGLTEXCOORD2XVOESPROC glad_glTexCoord2xvOES = NULL;
PFNGLTEXCOORD3BOESPROC glad_glTexCoord3bOES = NULL;
PFNGLTEXCOORD3BVOESPROC glad_glTexCoord3bvOES = NULL;
PFNGLTEXCOORD3XOESPROC glad_glTexCoord3xOES = NULL;
PFNGLTEXCOORD3XVOESPROC glad_glTexCoord3xvOES = NULL;
PFNGLTEXCOORD4BOESPROC glad_glTexCoord4bOES = NULL;
PFNGLTEXCOORD4BVOESPROC glad_glTexCoord4bvOES = NULL;
PFNGLTEXCOORD4XOESPROC glad_glTexCoord4xOES = NULL;
PFNGLTEXCOORD4XVOESPROC glad_glTexCoord4xvOES = NULL;
PFNGLTEXCOORDPOINTEREXTPROC glad_glTexCoordPointerEXT = NULL;
PFNGLTEXENVXOESPROC glad_glTexEnvxOES = NULL;
PFNGLTEXENVXVOESPROC glad_glTexEnvxvOES = NULL;
PFNGLTEXGENXOESPROC glad_glTexGenxOES = NULL;
PFNGLTEXGENXVOESPROC glad_glTexGenxvOES = NULL;
PFNGLTEXIMAGE1DPROC glad_glTexImage1D = NULL;
PFNGLTEXIMAGE2DPROC glad_glTexImage2D = NULL;
PFNGLTEXIMAGE2DMULTISAMPLEPROC glad_glTexImage2DMultisample = NULL;
PFNGLTEXIMAGE3DPROC glad_glTexImage3D = NULL;
PFNGLTEXIMAGE3DEXTPROC glad_glTexImage3DEXT = NULL;
PFNGLTEXIMAGE3DMULTISAMPLEPROC glad_glTexImage3DMultisample = NULL;
PFNGLTEXPAGECOMMITMENTARBPROC glad_glTexPageCommitmentARB = NULL;
PFNGLTEXPARAMETERIIVPROC glad_glTexParameterIiv = NULL;
PFNGLTEXPARAMETERIIVEXTPROC glad_glTexParameterIivEXT = NULL;
PFNGLTEXPARAMETERIUIVPROC glad_glTexParameterIuiv = NULL;
PFNGLTEXPARAMETERIUIVEXTPROC glad_glTexParameterIuivEXT = NULL;
PFNGLTEXPARAMETERFPROC glad_glTexParameterf = NULL;
PFNGLTEXPARAMETERFVPROC glad_glTexParameterfv = NULL;
PFNGLTEXPARAMETERIPROC glad_glTexParameteri = NULL;
PFNGLTEXPARAMETERIVPROC glad_glTexParameteriv = NULL;
PFNGLTEXPARAMETERXOESPROC glad_glTexParameterxOES = NULL;
PFNGLTEXPARAMETERXVOESPROC glad_glTexParameterxvOES = NULL;
PFNGLTEXSTORAGE1DPROC glad_glTexStorage1D = NULL;
PFNGLTEXSTORAGE1DEXTPROC glad_glTexStorage1DEXT = NULL;
PFNGLTEXSTORAGE2DPROC glad_glTexStorage2D = NULL;
PFNGLTEXSTORAGE2DEXTPROC glad_glTexStorage2DEXT = NULL;
PFNGLTEXSTORAGE2DMULTISAMPLEPROC glad_glTexStorage2DMultisample = NULL;
PFNGLTEXSTORAGE3DPROC glad_glTexStorage3D = NULL;
PFNGLTEXSTORAGE3DEXTPROC glad_glTexStorage3DEXT = NULL;
PFNGLTEXSTORAGE3DMULTISAMPLEPROC glad_glTexStorage3DMultisample = NULL;
PFNGLTEXSTORAGEMEM1DEXTPROC glad_glTexStorageMem1DEXT = NULL;
PFNGLTEXSTORAGEMEM2DEXTPROC glad_glTexStorageMem2DEXT = NULL;
PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC glad_glTexStorageMem2DMultisampleEXT = NULL;
PFNGLTEXSTORAGEMEM3DEXTPROC glad_glTexStorageMem3DEXT = NULL;
PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC glad_glTexStorageMem3DMultisampleEXT = NULL;
PFNGLTEXSUBIMAGE1DPROC glad_glTexSubImage1D = NULL;
PFNGLTEXSUBIMAGE1DEXTPROC glad_glTexSubImage1DEXT = NULL;
PFNGLTEXSUBIMAGE2DPROC glad_glTexSubImage2D = NULL;
PFNGLTEXSUBIMAGE2DEXTPROC glad_glTexSubImage2DEXT = NULL;
PFNGLTEXSUBIMAGE3DPROC glad_glTexSubImage3D = NULL;
PFNGLTEXSUBIMAGE3DEXTPROC glad_glTexSubImage3DEXT = NULL;
PFNGLTEXTUREBARRIERPROC glad_glTextureBarrier = NULL;
PFNGLTEXTUREBUFFERPROC glad_glTextureBuffer = NULL;
PFNGLTEXTUREBUFFEREXTPROC glad_glTextureBufferEXT = NULL;
PFNGLTEXTUREBUFFERRANGEPROC glad_glTextureBufferRange = NULL;
PFNGLTEXTUREBUFFERRANGEEXTPROC glad_glTextureBufferRangeEXT = NULL;
PFNGLTEXTUREIMAGE1DEXTPROC glad_glTextureImage1DEXT = NULL;
PFNGLTEXTUREIMAGE2DEXTPROC glad_glTextureImage2DEXT = NULL;
PFNGLTEXTUREIMAGE3DEXTPROC glad_glTextureImage3DEXT = NULL;
PFNGLTEXTURELIGHTEXTPROC glad_glTextureLightEXT = NULL;
PFNGLTEXTUREMATERIALEXTPROC glad_glTextureMaterialEXT = NULL;
PFNGLTEXTURENORMALEXTPROC glad_glTextureNormalEXT = NULL;
PFNGLTEXTUREPAGECOMMITMENTEXTPROC glad_glTexturePageCommitmentEXT = NULL;
PFNGLTEXTUREPARAMETERIIVPROC glad_glTextureParameterIiv = NULL;
PFNGLTEXTUREPARAMETERIIVEXTPROC glad_glTextureParameterIivEXT = NULL;
PFNGLTEXTUREPARAMETERIUIVPROC glad_glTextureParameterIuiv = NULL;
PFNGLTEXTUREPARAMETERIUIVEXTPROC glad_glTextureParameterIuivEXT = NULL;
PFNGLTEXTUREPARAMETERFPROC glad_glTextureParameterf = NULL;
PFNGLTEXTUREPARAMETERFEXTPROC glad_glTextureParameterfEXT = NULL;
PFNGLTEXTUREPARAMETERFVPROC glad_glTextureParameterfv = NULL;
PFNGLTEXTUREPARAMETERFVEXTPROC glad_glTextureParameterfvEXT = NULL;
PFNGLTEXTUREPARAMETERIPROC glad_glTextureParameteri = NULL;
PFNGLTEXTUREPARAMETERIEXTPROC glad_glTextureParameteriEXT = NULL;
PFNGLTEXTUREPARAMETERIVPROC glad_glTextureParameteriv = NULL;
PFNGLTEXTUREPARAMETERIVEXTPROC glad_glTextureParameterivEXT = NULL;
PFNGLTEXTURERENDERBUFFEREXTPROC glad_glTextureRenderbufferEXT = NULL;
PFNGLTEXTURESTORAGE1DPROC glad_glTextureStorage1D = NULL;
PFNGLTEXTURESTORAGE1DEXTPROC glad_glTextureStorage1DEXT = NULL;
PFNGLTEXTURESTORAGE2DPROC glad_glTextureStorage2D = NULL;
PFNGLTEXTURESTORAGE2DEXTPROC glad_glTextureStorage2DEXT = NULL;
PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC glad_glTextureStorage2DMultisample = NULL;
PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC glad_glTextureStorage2DMultisampleEXT = NULL;
PFNGLTEXTURESTORAGE3DPROC glad_glTextureStorage3D = NULL;
PFNGLTEXTURESTORAGE3DEXTPROC glad_glTextureStorage3DEXT = NULL;
PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC glad_glTextureStorage3DMultisample = NULL;
PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC glad_glTextureStorage3DMultisampleEXT = NULL;
PFNGLTEXTURESTORAGEMEM1DEXTPROC glad_glTextureStorageMem1DEXT = NULL;
PFNGLTEXTURESTORAGEMEM2DEXTPROC glad_glTextureStorageMem2DEXT = NULL;
PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC glad_glTextureStorageMem2DMultisampleEXT = NULL;
PFNGLTEXTURESTORAGEMEM3DEXTPROC glad_glTextureStorageMem3DEXT = NULL;
PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC glad_glTextureStorageMem3DMultisampleEXT = NULL;
PFNGLTEXTURESUBIMAGE1DPROC glad_glTextureSubImage1D = NULL;
PFNGLTEXTURESUBIMAGE1DEXTPROC glad_glTextureSubImage1DEXT = NULL;
PFNGLTEXTURESUBIMAGE2DPROC glad_glTextureSubImage2D = NULL;
PFNGLTEXTURESUBIMAGE2DEXTPROC glad_glTextureSubImage2DEXT = NULL;
PFNGLTEXTURESUBIMAGE3DPROC glad_glTextureSubImage3D = NULL;
PFNGLTEXTURESUBIMAGE3DEXTPROC glad_glTextureSubImage3DEXT = NULL;
PFNGLTEXTUREVIEWPROC glad_glTextureView = NULL;
PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC glad_glTransformFeedbackBufferBase = NULL;
PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC glad_glTransformFeedbackBufferRange = NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC glad_glTransformFeedbackVaryings = NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC glad_glTransformFeedbackVaryingsEXT = NULL;
PFNGLTRANSLATEXOESPROC glad_glTranslatexOES = NULL;
PFNGLUNIFORM1DPROC glad_glUniform1d = NULL;
PFNGLUNIFORM1DVPROC glad_glUniform1dv = NULL;
PFNGLUNIFORM1FPROC glad_glUniform1f = NULL;
PFNGLUNIFORM1FARBPROC glad_glUniform1fARB = NULL;
PFNGLUNIFORM1FVPROC glad_glUniform1fv = NULL;
PFNGLUNIFORM1FVARBPROC glad_glUniform1fvARB = NULL;
PFNGLUNIFORM1IPROC glad_glUniform1i = NULL;
PFNGLUNIFORM1I64ARBPROC glad_glUniform1i64ARB = NULL;
PFNGLUNIFORM1I64VARBPROC glad_glUniform1i64vARB = NULL;
PFNGLUNIFORM1IARBPROC glad_glUniform1iARB = NULL;
PFNGLUNIFORM1IVPROC glad_glUniform1iv = NULL;
PFNGLUNIFORM1IVARBPROC glad_glUniform1ivARB = NULL;
PFNGLUNIFORM1UIPROC glad_glUniform1ui = NULL;
PFNGLUNIFORM1UI64ARBPROC glad_glUniform1ui64ARB = NULL;
PFNGLUNIFORM1UI64VARBPROC glad_glUniform1ui64vARB = NULL;
PFNGLUNIFORM1UIEXTPROC glad_glUniform1uiEXT = NULL;
PFNGLUNIFORM1UIVPROC glad_glUniform1uiv = NULL;
PFNGLUNIFORM1UIVEXTPROC glad_glUniform1uivEXT = NULL;
PFNGLUNIFORM2DPROC glad_glUniform2d = NULL;
PFNGLUNIFORM2DVPROC glad_glUniform2dv = NULL;
PFNGLUNIFORM2FPROC glad_glUniform2f = NULL;
PFNGLUNIFORM2FARBPROC glad_glUniform2fARB = NULL;
PFNGLUNIFORM2FVPROC glad_glUniform2fv = NULL;
PFNGLUNIFORM2FVARBPROC glad_glUniform2fvARB = NULL;
PFNGLUNIFORM2IPROC glad_glUniform2i = NULL;
PFNGLUNIFORM2I64ARBPROC glad_glUniform2i64ARB = NULL;
PFNGLUNIFORM2I64VARBPROC glad_glUniform2i64vARB = NULL;
PFNGLUNIFORM2IARBPROC glad_glUniform2iARB = NULL;
PFNGLUNIFORM2IVPROC glad_glUniform2iv = NULL;
PFNGLUNIFORM2IVARBPROC glad_glUniform2ivARB = NULL;
PFNGLUNIFORM2UIPROC glad_glUniform2ui = NULL;
PFNGLUNIFORM2UI64ARBPROC glad_glUniform2ui64ARB = NULL;
PFNGLUNIFORM2UI64VARBPROC glad_glUniform2ui64vARB = NULL;
PFNGLUNIFORM2UIEXTPROC glad_glUniform2uiEXT = NULL;
PFNGLUNIFORM2UIVPROC glad_glUniform2uiv = NULL;
PFNGLUNIFORM2UIVEXTPROC glad_glUniform2uivEXT = NULL;
PFNGLUNIFORM3DPROC glad_glUniform3d = NULL;
PFNGLUNIFORM3DVPROC glad_glUniform3dv = NULL;
PFNGLUNIFORM3FPROC glad_glUniform3f = NULL;
PFNGLUNIFORM3FARBPROC glad_glUniform3fARB = NULL;
PFNGLUNIFORM3FVPROC glad_glUniform3fv = NULL;
PFNGLUNIFORM3FVARBPROC glad_glUniform3fvARB = NULL;
PFNGLUNIFORM3IPROC glad_glUniform3i = NULL;
PFNGLUNIFORM3I64ARBPROC glad_glUniform3i64ARB = NULL;
PFNGLUNIFORM3I64VARBPROC glad_glUniform3i64vARB = NULL;
PFNGLUNIFORM3IARBPROC glad_glUniform3iARB = NULL;
PFNGLUNIFORM3IVPROC glad_glUniform3iv = NULL;
PFNGLUNIFORM3IVARBPROC glad_glUniform3ivARB = NULL;
PFNGLUNIFORM3UIPROC glad_glUniform3ui = NULL;
PFNGLUNIFORM3UI64ARBPROC glad_glUniform3ui64ARB = NULL;
PFNGLUNIFORM3UI64VARBPROC glad_glUniform3ui64vARB = NULL;
PFNGLUNIFORM3UIEXTPROC glad_glUniform3uiEXT = NULL;
PFNGLUNIFORM3UIVPROC glad_glUniform3uiv = NULL;
PFNGLUNIFORM3UIVEXTPROC glad_glUniform3uivEXT = NULL;
PFNGLUNIFORM4DPROC glad_glUniform4d = NULL;
PFNGLUNIFORM4DVPROC glad_glUniform4dv = NULL;
PFNGLUNIFORM4FPROC glad_glUniform4f = NULL;
PFNGLUNIFORM4FARBPROC glad_glUniform4fARB = NULL;
PFNGLUNIFORM4FVPROC glad_glUniform4fv = NULL;
PFNGLUNIFORM4FVARBPROC glad_glUniform4fvARB = NULL;
PFNGLUNIFORM4IPROC glad_glUniform4i = NULL;
PFNGLUNIFORM4I64ARBPROC glad_glUniform4i64ARB = NULL;
PFNGLUNIFORM4I64VARBPROC glad_glUniform4i64vARB = NULL;
PFNGLUNIFORM4IARBPROC glad_glUniform4iARB = NULL;
PFNGLUNIFORM4IVPROC glad_glUniform4iv = NULL;
PFNGLUNIFORM4IVARBPROC glad_glUniform4ivARB = NULL;
PFNGLUNIFORM4UIPROC glad_glUniform4ui = NULL;
PFNGLUNIFORM4UI64ARBPROC glad_glUniform4ui64ARB = NULL;
PFNGLUNIFORM4UI64VARBPROC glad_glUniform4ui64vARB = NULL;
PFNGLUNIFORM4UIEXTPROC glad_glUniform4uiEXT = NULL;
PFNGLUNIFORM4UIVPROC glad_glUniform4uiv = NULL;
PFNGLUNIFORM4UIVEXTPROC glad_glUniform4uivEXT = NULL;
PFNGLUNIFORMBLOCKBINDINGPROC glad_glUniformBlockBinding = NULL;
PFNGLUNIFORMBUFFEREXTPROC glad_glUniformBufferEXT = NULL;
PFNGLUNIFORMHANDLEUI64ARBPROC glad_glUniformHandleui64ARB = NULL;
PFNGLUNIFORMHANDLEUI64VARBPROC glad_glUniformHandleui64vARB = NULL;
PFNGLUNIFORMMATRIX2DVPROC glad_glUniformMatrix2dv = NULL;
PFNGLUNIFORMMATRIX2FVPROC glad_glUniformMatrix2fv = NULL;
PFNGLUNIFORMMATRIX2FVARBPROC glad_glUniformMatrix2fvARB = NULL;
PFNGLUNIFORMMATRIX2X3DVPROC glad_glUniformMatrix2x3dv = NULL;
PFNGLUNIFORMMATRIX2X3FVPROC glad_glUniformMatrix2x3fv = NULL;
PFNGLUNIFORMMATRIX2X4DVPROC glad_glUniformMatrix2x4dv = NULL;
PFNGLUNIFORMMATRIX2X4FVPROC glad_glUniformMatrix2x4fv = NULL;
PFNGLUNIFORMMATRIX3DVPROC glad_glUniformMatrix3dv = NULL;
PFNGLUNIFORMMATRIX3FVPROC glad_glUniformMatrix3fv = NULL;
PFNGLUNIFORMMATRIX3FVARBPROC glad_glUniformMatrix3fvARB = NULL;
PFNGLUNIFORMMATRIX3X2DVPROC glad_glUniformMatrix3x2dv = NULL;
PFNGLUNIFORMMATRIX3X2FVPROC glad_glUniformMatrix3x2fv = NULL;
PFNGLUNIFORMMATRIX3X4DVPROC glad_glUniformMatrix3x4dv = NULL;
PFNGLUNIFORMMATRIX3X4FVPROC glad_glUniformMatrix3x4fv = NULL;
PFNGLUNIFORMMATRIX4DVPROC glad_glUniformMatrix4dv = NULL;
PFNGLUNIFORMMATRIX4FVPROC glad_glUniformMatrix4fv = NULL;
PFNGLUNIFORMMATRIX4FVARBPROC glad_glUniformMatrix4fvARB = NULL;
PFNGLUNIFORMMATRIX4X2DVPROC glad_glUniformMatrix4x2dv = NULL;
PFNGLUNIFORMMATRIX4X2FVPROC glad_glUniformMatrix4x2fv = NULL;
PFNGLUNIFORMMATRIX4X3DVPROC glad_glUniformMatrix4x3dv = NULL;
PFNGLUNIFORMMATRIX4X3FVPROC glad_glUniformMatrix4x3fv = NULL;
PFNGLUNIFORMSUBROUTINESUIVPROC glad_glUniformSubroutinesuiv = NULL;
PFNGLUNLOCKARRAYSEXTPROC glad_glUnlockArraysEXT = NULL;
PFNGLUNMAPBUFFERPROC glad_glUnmapBuffer = NULL;
PFNGLUNMAPBUFFERARBPROC glad_glUnmapBufferARB = NULL;
PFNGLUNMAPNAMEDBUFFERPROC glad_glUnmapNamedBuffer = NULL;
PFNGLUNMAPNAMEDBUFFEREXTPROC glad_glUnmapNamedBufferEXT = NULL;
PFNGLUSEPROGRAMPROC glad_glUseProgram = NULL;
PFNGLUSEPROGRAMOBJECTARBPROC glad_glUseProgramObjectARB = NULL;
PFNGLUSEPROGRAMSTAGESPROC glad_glUseProgramStages = NULL;
PFNGLUSESHADERPROGRAMEXTPROC glad_glUseShaderProgramEXT = NULL;
PFNGLVALIDATEPROGRAMPROC glad_glValidateProgram = NULL;
PFNGLVALIDATEPROGRAMARBPROC glad_glValidateProgramARB = NULL;
PFNGLVALIDATEPROGRAMPIPELINEPROC glad_glValidateProgramPipeline = NULL;
PFNGLVARIANTPOINTEREXTPROC glad_glVariantPointerEXT = NULL;
PFNGLVARIANTBVEXTPROC glad_glVariantbvEXT = NULL;
PFNGLVARIANTDVEXTPROC glad_glVariantdvEXT = NULL;
PFNGLVARIANTFVEXTPROC glad_glVariantfvEXT = NULL;
PFNGLVARIANTIVEXTPROC glad_glVariantivEXT = NULL;
PFNGLVARIANTSVEXTPROC glad_glVariantsvEXT = NULL;
PFNGLVARIANTUBVEXTPROC glad_glVariantubvEXT = NULL;
PFNGLVARIANTUIVEXTPROC glad_glVariantuivEXT = NULL;
PFNGLVARIANTUSVEXTPROC glad_glVariantusvEXT = NULL;
PFNGLVERTEX2BOESPROC glad_glVertex2bOES = NULL;
PFNGLVERTEX2BVOESPROC glad_glVertex2bvOES = NULL;
PFNGLVERTEX2XOESPROC glad_glVertex2xOES = NULL;
PFNGLVERTEX2XVOESPROC glad_glVertex2xvOES = NULL;
PFNGLVERTEX3BOESPROC glad_glVertex3bOES = NULL;
PFNGLVERTEX3BVOESPROC glad_glVertex3bvOES = NULL;
PFNGLVERTEX3XOESPROC glad_glVertex3xOES = NULL;
PFNGLVERTEX3XVOESPROC glad_glVertex3xvOES = NULL;
PFNGLVERTEX4BOESPROC glad_glVertex4bOES = NULL;
PFNGLVERTEX4BVOESPROC glad_glVertex4bvOES = NULL;
PFNGLVERTEX4XOESPROC glad_glVertex4xOES = NULL;
PFNGLVERTEX4XVOESPROC glad_glVertex4xvOES = NULL;
PFNGLVERTEXARRAYATTRIBBINDINGPROC glad_glVertexArrayAttribBinding = NULL;
PFNGLVERTEXARRAYATTRIBFORMATPROC glad_glVertexArrayAttribFormat = NULL;
PFNGLVERTEXARRAYATTRIBIFORMATPROC glad_glVertexArrayAttribIFormat = NULL;
PFNGLVERTEXARRAYATTRIBLFORMATPROC glad_glVertexArrayAttribLFormat = NULL;
PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC glad_glVertexArrayBindVertexBufferEXT = NULL;
PFNGLVERTEXARRAYBINDINGDIVISORPROC glad_glVertexArrayBindingDivisor = NULL;
PFNGLVERTEXARRAYCOLOROFFSETEXTPROC glad_glVertexArrayColorOffsetEXT = NULL;
PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC glad_glVertexArrayEdgeFlagOffsetEXT = NULL;
PFNGLVERTEXARRAYELEMENTBUFFERPROC glad_glVertexArrayElementBuffer = NULL;
PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC glad_glVertexArrayFogCoordOffsetEXT = NULL;
PFNGLVERTEXARRAYINDEXOFFSETEXTPROC glad_glVertexArrayIndexOffsetEXT = NULL;
PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC glad_glVertexArrayMultiTexCoordOffsetEXT = NULL;
PFNGLVERTEXARRAYNORMALOFFSETEXTPROC glad_glVertexArrayNormalOffsetEXT = NULL;
PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC glad_glVertexArraySecondaryColorOffsetEXT = NULL;
PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC glad_glVertexArrayTexCoordOffsetEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC glad_glVertexArrayVertexAttribBindingEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC glad_glVertexArrayVertexAttribDivisorEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC glad_glVertexArrayVertexAttribFormatEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC glad_glVertexArrayVertexAttribIFormatEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC glad_glVertexArrayVertexAttribIOffsetEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC glad_glVertexArrayVertexAttribLFormatEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC glad_glVertexArrayVertexAttribLOffsetEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC glad_glVertexArrayVertexAttribOffsetEXT = NULL;
PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC glad_glVertexArrayVertexBindingDivisorEXT = NULL;
PFNGLVERTEXARRAYVERTEXBUFFERPROC glad_glVertexArrayVertexBuffer = NULL;
PFNGLVERTEXARRAYVERTEXBUFFERSPROC glad_glVertexArrayVertexBuffers = NULL;
PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC glad_glVertexArrayVertexOffsetEXT = NULL;
PFNGLVERTEXATTRIB1DPROC glad_glVertexAttrib1d = NULL;
PFNGLVERTEXATTRIB1DARBPROC glad_glVertexAttrib1dARB = NULL;
PFNGLVERTEXATTRIB1DVPROC glad_glVertexAttrib1dv = NULL;
PFNGLVERTEXATTRIB1DVARBPROC glad_glVertexAttrib1dvARB = NULL;
PFNGLVERTEXATTRIB1FPROC glad_glVertexAttrib1f = NULL;
PFNGLVERTEXATTRIB1FARBPROC glad_glVertexAttrib1fARB = NULL;
PFNGLVERTEXATTRIB1FVPROC glad_glVertexAttrib1fv = NULL;
PFNGLVERTEXATTRIB1FVARBPROC glad_glVertexAttrib1fvARB = NULL;
PFNGLVERTEXATTRIB1SPROC glad_glVertexAttrib1s = NULL;
PFNGLVERTEXATTRIB1SARBPROC glad_glVertexAttrib1sARB = NULL;
PFNGLVERTEXATTRIB1SVPROC glad_glVertexAttrib1sv = NULL;
PFNGLVERTEXATTRIB1SVARBPROC glad_glVertexAttrib1svARB = NULL;
PFNGLVERTEXATTRIB2DPROC glad_glVertexAttrib2d = NULL;
PFNGLVERTEXATTRIB2DARBPROC glad_glVertexAttrib2dARB = NULL;
PFNGLVERTEXATTRIB2DVPROC glad_glVertexAttrib2dv = NULL;
PFNGLVERTEXATTRIB2DVARBPROC glad_glVertexAttrib2dvARB = NULL;
PFNGLVERTEXATTRIB2FPROC glad_glVertexAttrib2f = NULL;
PFNGLVERTEXATTRIB2FARBPROC glad_glVertexAttrib2fARB = NULL;
PFNGLVERTEXATTRIB2FVPROC glad_glVertexAttrib2fv = NULL;
PFNGLVERTEXATTRIB2FVARBPROC glad_glVertexAttrib2fvARB = NULL;
PFNGLVERTEXATTRIB2SPROC glad_glVertexAttrib2s = NULL;
PFNGLVERTEXATTRIB2SARBPROC glad_glVertexAttrib2sARB = NULL;
PFNGLVERTEXATTRIB2SVPROC glad_glVertexAttrib2sv = NULL;
PFNGLVERTEXATTRIB2SVARBPROC glad_glVertexAttrib2svARB = NULL;
PFNGLVERTEXATTRIB3DPROC glad_glVertexAttrib3d = NULL;
PFNGLVERTEXATTRIB3DARBPROC glad_glVertexAttrib3dARB = NULL;
PFNGLVERTEXATTRIB3DVPROC glad_glVertexAttrib3dv = NULL;
PFNGLVERTEXATTRIB3DVARBPROC glad_glVertexAttrib3dvARB = NULL;
PFNGLVERTEXATTRIB3FPROC glad_glVertexAttrib3f = NULL;
PFNGLVERTEXATTRIB3FARBPROC glad_glVertexAttrib3fARB = NULL;
PFNGLVERTEXATTRIB3FVPROC glad_glVertexAttrib3fv = NULL;
PFNGLVERTEXATTRIB3FVARBPROC glad_glVertexAttrib3fvARB = NULL;
PFNGLVERTEXATTRIB3SPROC glad_glVertexAttrib3s = NULL;
PFNGLVERTEXATTRIB3SARBPROC glad_glVertexAttrib3sARB = NULL;
PFNGLVERTEXATTRIB3SVPROC glad_glVertexAttrib3sv = NULL;
PFNGLVERTEXATTRIB3SVARBPROC glad_glVertexAttrib3svARB = NULL;
PFNGLVERTEXATTRIB4NBVPROC glad_glVertexAttrib4Nbv = NULL;
PFNGLVERTEXATTRIB4NBVARBPROC glad_glVertexAttrib4NbvARB = NULL;
PFNGLVERTEXATTRIB4NIVPROC glad_glVertexAttrib4Niv = NULL;
PFNGLVERTEXATTRIB4NIVARBPROC glad_glVertexAttrib4NivARB = NULL;
PFNGLVERTEXATTRIB4NSVPROC glad_glVertexAttrib4Nsv = NULL;
PFNGLVERTEXATTRIB4NSVARBPROC glad_glVertexAttrib4NsvARB = NULL;
PFNGLVERTEXATTRIB4NUBPROC glad_glVertexAttrib4Nub = NULL;
PFNGLVERTEXATTRIB4NUBARBPROC glad_glVertexAttrib4NubARB = NULL;
PFNGLVERTEXATTRIB4NUBVPROC glad_glVertexAttrib4Nubv = NULL;
PFNGLVERTEXATTRIB4NUBVARBPROC glad_glVertexAttrib4NubvARB = NULL;
PFNGLVERTEXATTRIB4NUIVPROC glad_glVertexAttrib4Nuiv = NULL;
PFNGLVERTEXATTRIB4NUIVARBPROC glad_glVertexAttrib4NuivARB = NULL;
PFNGLVERTEXATTRIB4NUSVPROC glad_glVertexAttrib4Nusv = NULL;
PFNGLVERTEXATTRIB4NUSVARBPROC glad_glVertexAttrib4NusvARB = NULL;
PFNGLVERTEXATTRIB4BVPROC glad_glVertexAttrib4bv = NULL;
PFNGLVERTEXATTRIB4BVARBPROC glad_glVertexAttrib4bvARB = NULL;
PFNGLVERTEXATTRIB4DPROC glad_glVertexAttrib4d = NULL;
PFNGLVERTEXATTRIB4DARBPROC glad_glVertexAttrib4dARB = NULL;
PFNGLVERTEXATTRIB4DVPROC glad_glVertexAttrib4dv = NULL;
PFNGLVERTEXATTRIB4DVARBPROC glad_glVertexAttrib4dvARB = NULL;
PFNGLVERTEXATTRIB4FPROC glad_glVertexAttrib4f = NULL;
PFNGLVERTEXATTRIB4FARBPROC glad_glVertexAttrib4fARB = NULL;
PFNGLVERTEXATTRIB4FVPROC glad_glVertexAttrib4fv = NULL;
PFNGLVERTEXATTRIB4FVARBPROC glad_glVertexAttrib4fvARB = NULL;
PFNGLVERTEXATTRIB4IVPROC glad_glVertexAttrib4iv = NULL;
PFNGLVERTEXATTRIB4IVARBPROC glad_glVertexAttrib4ivARB = NULL;
PFNGLVERTEXATTRIB4SPROC glad_glVertexAttrib4s = NULL;
PFNGLVERTEXATTRIB4SARBPROC glad_glVertexAttrib4sARB = NULL;
PFNGLVERTEXATTRIB4SVPROC glad_glVertexAttrib4sv = NULL;
PFNGLVERTEXATTRIB4SVARBPROC glad_glVertexAttrib4svARB = NULL;
PFNGLVERTEXATTRIB4UBVPROC glad_glVertexAttrib4ubv = NULL;
PFNGLVERTEXATTRIB4UBVARBPROC glad_glVertexAttrib4ubvARB = NULL;
PFNGLVERTEXATTRIB4UIVPROC glad_glVertexAttrib4uiv = NULL;
PFNGLVERTEXATTRIB4UIVARBPROC glad_glVertexAttrib4uivARB = NULL;
PFNGLVERTEXATTRIB4USVPROC glad_glVertexAttrib4usv = NULL;
PFNGLVERTEXATTRIB4USVARBPROC glad_glVertexAttrib4usvARB = NULL;
PFNGLVERTEXATTRIBBINDINGPROC glad_glVertexAttribBinding = NULL;
PFNGLVERTEXATTRIBDIVISORPROC glad_glVertexAttribDivisor = NULL;
PFNGLVERTEXATTRIBDIVISORARBPROC glad_glVertexAttribDivisorARB = NULL;
PFNGLVERTEXATTRIBFORMATPROC glad_glVertexAttribFormat = NULL;
PFNGLVERTEXATTRIBI1IPROC glad_glVertexAttribI1i = NULL;
PFNGLVERTEXATTRIBI1IEXTPROC glad_glVertexAttribI1iEXT = NULL;
PFNGLVERTEXATTRIBI1IVPROC glad_glVertexAttribI1iv = NULL;
PFNGLVERTEXATTRIBI1IVEXTPROC glad_glVertexAttribI1ivEXT = NULL;
PFNGLVERTEXATTRIBI1UIPROC glad_glVertexAttribI1ui = NULL;
PFNGLVERTEXATTRIBI1UIEXTPROC glad_glVertexAttribI1uiEXT = NULL;
PFNGLVERTEXATTRIBI1UIVPROC glad_glVertexAttribI1uiv = NULL;
PFNGLVERTEXATTRIBI1UIVEXTPROC glad_glVertexAttribI1uivEXT = NULL;
PFNGLVERTEXATTRIBI2IPROC glad_glVertexAttribI2i = NULL;
PFNGLVERTEXATTRIBI2IEXTPROC glad_glVertexAttribI2iEXT = NULL;
PFNGLVERTEXATTRIBI2IVPROC glad_glVertexAttribI2iv = NULL;
PFNGLVERTEXATTRIBI2IVEXTPROC glad_glVertexAttribI2ivEXT = NULL;
PFNGLVERTEXATTRIBI2UIPROC glad_glVertexAttribI2ui = NULL;
PFNGLVERTEXATTRIBI2UIEXTPROC glad_glVertexAttribI2uiEXT = NULL;
PFNGLVERTEXATTRIBI2UIVPROC glad_glVertexAttribI2uiv = NULL;
PFNGLVERTEXATTRIBI2UIVEXTPROC glad_glVertexAttribI2uivEXT = NULL;
PFNGLVERTEXATTRIBI3IPROC glad_glVertexAttribI3i = NULL;
PFNGLVERTEXATTRIBI3IEXTPROC glad_glVertexAttribI3iEXT = NULL;
PFNGLVERTEXATTRIBI3IVPROC glad_glVertexAttribI3iv = NULL;
PFNGLVERTEXATTRIBI3IVEXTPROC glad_glVertexAttribI3ivEXT = NULL;
PFNGLVERTEXATTRIBI3UIPROC glad_glVertexAttribI3ui = NULL;
PFNGLVERTEXATTRIBI3UIEXTPROC glad_glVertexAttribI3uiEXT = NULL;
PFNGLVERTEXATTRIBI3UIVPROC glad_glVertexAttribI3uiv = NULL;
PFNGLVERTEXATTRIBI3UIVEXTPROC glad_glVertexAttribI3uivEXT = NULL;
PFNGLVERTEXATTRIBI4BVPROC glad_glVertexAttribI4bv = NULL;
PFNGLVERTEXATTRIBI4BVEXTPROC glad_glVertexAttribI4bvEXT = NULL;
PFNGLVERTEXATTRIBI4IPROC glad_glVertexAttribI4i = NULL;
PFNGLVERTEXATTRIBI4IEXTPROC glad_glVertexAttribI4iEXT = NULL;
PFNGLVERTEXATTRIBI4IVPROC glad_glVertexAttribI4iv = NULL;
PFNGLVERTEXATTRIBI4IVEXTPROC glad_glVertexAttribI4ivEXT = NULL;
PFNGLVERTEXATTRIBI4SVPROC glad_glVertexAttribI4sv = NULL;
PFNGLVERTEXATTRIBI4SVEXTPROC glad_glVertexAttribI4svEXT = NULL;
PFNGLVERTEXATTRIBI4UBVPROC glad_glVertexAttribI4ubv = NULL;
PFNGLVERTEXATTRIBI4UBVEXTPROC glad_glVertexAttribI4ubvEXT = NULL;
PFNGLVERTEXATTRIBI4UIPROC glad_glVertexAttribI4ui = NULL;
PFNGLVERTEXATTRIBI4UIEXTPROC glad_glVertexAttribI4uiEXT = NULL;
PFNGLVERTEXATTRIBI4UIVPROC glad_glVertexAttribI4uiv = NULL;
PFNGLVERTEXATTRIBI4UIVEXTPROC glad_glVertexAttribI4uivEXT = NULL;
PFNGLVERTEXATTRIBI4USVPROC glad_glVertexAttribI4usv = NULL;
PFNGLVERTEXATTRIBI4USVEXTPROC glad_glVertexAttribI4usvEXT = NULL;
PFNGLVERTEXATTRIBIFORMATPROC glad_glVertexAttribIFormat = NULL;
PFNGLVERTEXATTRIBIPOINTERPROC glad_glVertexAttribIPointer = NULL;
PFNGLVERTEXATTRIBIPOINTEREXTPROC glad_glVertexAttribIPointerEXT = NULL;
PFNGLVERTEXATTRIBL1DPROC glad_glVertexAttribL1d = NULL;
PFNGLVERTEXATTRIBL1DEXTPROC glad_glVertexAttribL1dEXT = NULL;
PFNGLVERTEXATTRIBL1DVPROC glad_glVertexAttribL1dv = NULL;
PFNGLVERTEXATTRIBL1DVEXTPROC glad_glVertexAttribL1dvEXT = NULL;
PFNGLVERTEXATTRIBL1UI64ARBPROC glad_glVertexAttribL1ui64ARB = NULL;
PFNGLVERTEXATTRIBL1UI64VARBPROC glad_glVertexAttribL1ui64vARB = NULL;
PFNGLVERTEXATTRIBL2DPROC glad_glVertexAttribL2d = NULL;
PFNGLVERTEXATTRIBL2DEXTPROC glad_glVertexAttribL2dEXT = NULL;
PFNGLVERTEXATTRIBL2DVPROC glad_glVertexAttribL2dv = NULL;
PFNGLVERTEXATTRIBL2DVEXTPROC glad_glVertexAttribL2dvEXT = NULL;
PFNGLVERTEXATTRIBL3DPROC glad_glVertexAttribL3d = NULL;
PFNGLVERTEXATTRIBL3DEXTPROC glad_glVertexAttribL3dEXT = NULL;
PFNGLVERTEXATTRIBL3DVPROC glad_glVertexAttribL3dv = NULL;
PFNGLVERTEXATTRIBL3DVEXTPROC glad_glVertexAttribL3dvEXT = NULL;
PFNGLVERTEXATTRIBL4DPROC glad_glVertexAttribL4d = NULL;
PFNGLVERTEXATTRIBL4DEXTPROC glad_glVertexAttribL4dEXT = NULL;
PFNGLVERTEXATTRIBL4DVPROC glad_glVertexAttribL4dv = NULL;
PFNGLVERTEXATTRIBL4DVEXTPROC glad_glVertexAttribL4dvEXT = NULL;
PFNGLVERTEXATTRIBLFORMATPROC glad_glVertexAttribLFormat = NULL;
PFNGLVERTEXATTRIBLPOINTERPROC glad_glVertexAttribLPointer = NULL;
PFNGLVERTEXATTRIBLPOINTEREXTPROC glad_glVertexAttribLPointerEXT = NULL;
PFNGLVERTEXATTRIBP1UIPROC glad_glVertexAttribP1ui = NULL;
PFNGLVERTEXATTRIBP1UIVPROC glad_glVertexAttribP1uiv = NULL;
PFNGLVERTEXATTRIBP2UIPROC glad_glVertexAttribP2ui = NULL;
PFNGLVERTEXATTRIBP2UIVPROC glad_glVertexAttribP2uiv = NULL;
PFNGLVERTEXATTRIBP3UIPROC glad_glVertexAttribP3ui = NULL;
PFNGLVERTEXATTRIBP3UIVPROC glad_glVertexAttribP3uiv = NULL;
PFNGLVERTEXATTRIBP4UIPROC glad_glVertexAttribP4ui = NULL;
PFNGLVERTEXATTRIBP4UIVPROC glad_glVertexAttribP4uiv = NULL;
PFNGLVERTEXATTRIBPOINTERPROC glad_glVertexAttribPointer = NULL;
PFNGLVERTEXATTRIBPOINTERARBPROC glad_glVertexAttribPointerARB = NULL;
PFNGLVERTEXBINDINGDIVISORPROC glad_glVertexBindingDivisor = NULL;
PFNGLVERTEXBLENDARBPROC glad_glVertexBlendARB = NULL;
PFNGLVERTEXPOINTEREXTPROC glad_glVertexPointerEXT = NULL;
PFNGLVERTEXWEIGHTPOINTEREXTPROC glad_glVertexWeightPointerEXT = NULL;
PFNGLVERTEXWEIGHTFEXTPROC glad_glVertexWeightfEXT = NULL;
PFNGLVERTEXWEIGHTFVEXTPROC glad_glVertexWeightfvEXT = NULL;
PFNGLVIEWPORTPROC glad_glViewport = NULL;
PFNGLVIEWPORTARRAYVPROC glad_glViewportArrayv = NULL;
PFNGLVIEWPORTINDEXEDFPROC glad_glViewportIndexedf = NULL;
PFNGLVIEWPORTINDEXEDFVPROC glad_glViewportIndexedfv = NULL;
PFNGLWAITSEMAPHOREEXTPROC glad_glWaitSemaphoreEXT = NULL;
PFNGLWAITSYNCPROC glad_glWaitSync = NULL;
PFNGLWEIGHTPOINTERARBPROC glad_glWeightPointerARB = NULL;
PFNGLWEIGHTBVARBPROC glad_glWeightbvARB = NULL;
PFNGLWEIGHTDVARBPROC glad_glWeightdvARB = NULL;
PFNGLWEIGHTFVARBPROC glad_glWeightfvARB = NULL;
PFNGLWEIGHTIVARBPROC glad_glWeightivARB = NULL;
PFNGLWEIGHTSVARBPROC glad_glWeightsvARB = NULL;
PFNGLWEIGHTUBVARBPROC glad_glWeightubvARB = NULL;
PFNGLWEIGHTUIVARBPROC glad_glWeightuivARB = NULL;
PFNGLWEIGHTUSVARBPROC glad_glWeightusvARB = NULL;
PFNGLWINDOWPOS2DARBPROC glad_glWindowPos2dARB = NULL;
PFNGLWINDOWPOS2DVARBPROC glad_glWindowPos2dvARB = NULL;
PFNGLWINDOWPOS2FARBPROC glad_glWindowPos2fARB = NULL;
PFNGLWINDOWPOS2FVARBPROC glad_glWindowPos2fvARB = NULL;
PFNGLWINDOWPOS2IARBPROC glad_glWindowPos2iARB = NULL;
PFNGLWINDOWPOS2IVARBPROC glad_glWindowPos2ivARB = NULL;
PFNGLWINDOWPOS2SARBPROC glad_glWindowPos2sARB = NULL;
PFNGLWINDOWPOS2SVARBPROC glad_glWindowPos2svARB = NULL;
PFNGLWINDOWPOS3DARBPROC glad_glWindowPos3dARB = NULL;
PFNGLWINDOWPOS3DVARBPROC glad_glWindowPos3dvARB = NULL;
PFNGLWINDOWPOS3FARBPROC glad_glWindowPos3fARB = NULL;
PFNGLWINDOWPOS3FVARBPROC glad_glWindowPos3fvARB = NULL;
PFNGLWINDOWPOS3IARBPROC glad_glWindowPos3iARB = NULL;
PFNGLWINDOWPOS3IVARBPROC glad_glWindowPos3ivARB = NULL;
PFNGLWINDOWPOS3SARBPROC glad_glWindowPos3sARB = NULL;
PFNGLWINDOWPOS3SVARBPROC glad_glWindowPos3svARB = NULL;
PFNGLWINDOWRECTANGLESEXTPROC glad_glWindowRectanglesEXT = NULL;
PFNGLWRITEMASKEXTPROC glad_glWriteMaskEXT = NULL;


static void glad_gl_load_GL_VERSION_1_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_VERSION_1_0) return;
    glad_glBlendFunc = (PFNGLBLENDFUNCPROC) load(userptr, "glBlendFunc");
    glad_glClear = (PFNGLCLEARPROC) load(userptr, "glClear");
    glad_glClearColor = (PFNGLCLEARCOLORPROC) load(userptr, "glClearColor");
    glad_glClearDepth = (PFNGLCLEARDEPTHPROC) load(userptr, "glClearDepth");
    glad_glClearStencil = (PFNGLCLEARSTENCILPROC) load(userptr, "glClearStencil");
    glad_glColorMask = (PFNGLCOLORMASKPROC) load(userptr, "glColorMask");
    glad_glCullFace = (PFNGLCULLFACEPROC) load(userptr, "glCullFace");
    glad_glDepthFunc = (PFNGLDEPTHFUNCPROC) load(userptr, "glDepthFunc");
    glad_glDepthMask = (PFNGLDEPTHMASKPROC) load(userptr, "glDepthMask");
    glad_glDepthRange = (PFNGLDEPTHRANGEPROC) load(userptr, "glDepthRange");
    glad_glDisable = (PFNGLDISABLEPROC) load(userptr, "glDisable");
    glad_glDrawBuffer = (PFNGLDRAWBUFFERPROC) load(userptr, "glDrawBuffer");
    glad_glEnable = (PFNGLENABLEPROC) load(userptr, "glEnable");
    glad_glFinish = (PFNGLFINISHPROC) load(userptr, "glFinish");
    glad_glFlush = (PFNGLFLUSHPROC) load(userptr, "glFlush");
    glad_glFrontFace = (PFNGLFRONTFACEPROC) load(userptr, "glFrontFace");
    glad_glGetBooleanv = (PFNGLGETBOOLEANVPROC) load(userptr, "glGetBooleanv");
    glad_glGetDoublev = (PFNGLGETDOUBLEVPROC) load(userptr, "glGetDoublev");
    glad_glGetError = (PFNGLGETERRORPROC) load(userptr, "glGetError");
    glad_glGetFloatv = (PFNGLGETFLOATVPROC) load(userptr, "glGetFloatv");
    glad_glGetIntegerv = (PFNGLGETINTEGERVPROC) load(userptr, "glGetIntegerv");
    glad_glGetString = (PFNGLGETSTRINGPROC) load(userptr, "glGetString");
    glad_glGetTexImage = (PFNGLGETTEXIMAGEPROC) load(userptr, "glGetTexImage");
    glad_glGetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC) load(userptr, "glGetTexLevelParameterfv");
    glad_glGetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC) load(userptr, "glGetTexLevelParameteriv");
    glad_glGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC) load(userptr, "glGetTexParameterfv");
    glad_glGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC) load(userptr, "glGetTexParameteriv");
    glad_glHint = (PFNGLHINTPROC) load(userptr, "glHint");
    glad_glIsEnabled = (PFNGLISENABLEDPROC) load(userptr, "glIsEnabled");
    glad_glLineWidth = (PFNGLLINEWIDTHPROC) load(userptr, "glLineWidth");
    glad_glLogicOp = (PFNGLLOGICOPPROC) load(userptr, "glLogicOp");
    glad_glPixelStoref = (PFNGLPIXELSTOREFPROC) load(userptr, "glPixelStoref");
    glad_glPixelStorei = (PFNGLPIXELSTOREIPROC) load(userptr, "glPixelStorei");
    glad_glPointSize = (PFNGLPOINTSIZEPROC) load(userptr, "glPointSize");
    glad_glPolygonMode = (PFNGLPOLYGONMODEPROC) load(userptr, "glPolygonMode");
    glad_glReadBuffer = (PFNGLREADBUFFERPROC) load(userptr, "glReadBuffer");
    glad_glReadPixels = (PFNGLREADPIXELSPROC) load(userptr, "glReadPixels");
    glad_glScissor = (PFNGLSCISSORPROC) load(userptr, "glScissor");
    glad_glStencilFunc = (PFNGLSTENCILFUNCPROC) load(userptr, "glStencilFunc");
    glad_glStencilMask = (PFNGLSTENCILMASKPROC) load(userptr, "glStencilMask");
    glad_glStencilOp = (PFNGLSTENCILOPPROC) load(userptr, "glStencilOp");
    glad_glTexImage1D = (PFNGLTEXIMAGE1DPROC) load(userptr, "glTexImage1D");
    glad_glTexImage2D = (PFNGLTEXIMAGE2DPROC) load(userptr, "glTexImage2D");
    glad_glTexParameterf = (PFNGLTEXPARAMETERFPROC) load(userptr, "glTexParameterf");
    glad_glTexParameterfv = (PFNGLTEXPARAMETERFVPROC) load(userptr, "glTexParameterfv");
    glad_glTexParameteri = (PFNGLTEXPARAMETERIPROC) load(userptr, "glTexParameteri");
    glad_glTexParameteriv = (PFNGLTEXPARAMETERIVPROC) load(userptr, "glTexParameteriv");
    glad_glViewport = (PFNGLVIEWPORTPROC) load(userptr, "glViewport");
}
static void glad_gl_load_GL_VERSION_1_1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_VERSION_1_1) return;
    glad_glBindTexture = (PFNGLBINDTEXTUREPROC) load(userptr, "glBindTexture");
    glad_glCopyTexImage1D = (PFNGLCOPYTEXIMAGE1DPROC) load(userptr, "glCopyTexImage1D");
    glad_glCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC) load(userptr, "glCopyTexImage2D");
    glad_glCopyTexSubImage1D = (PFNGLCOPYTEXSUBIMAGE1DPROC) load(userptr, "glCopyTexSubImage1D");
    glad_glCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC) load(userptr, "glCopyTexSubImage2D");
    glad_glDeleteTextures = (PFNGLDELETETEXTURESPROC) load(userptr, "glDeleteTextures");
    glad_glDrawArrays = (PFNGLDRAWARRAYSPROC) load(userptr, "glDrawArrays");
    glad_glDrawElements = (PFNGLDRAWELEMENTSPROC) load(userptr, "glDrawElements");
    glad_glGenTextures = (PFNGLGENTEXTURESPROC) load(userptr, "glGenTextures");
    glad_glGetPointerv = (PFNGLGETPOINTERVPROC) load(userptr, "glGetPointerv");
    glad_glIsTexture = (PFNGLISTEXTUREPROC) load(userptr, "glIsTexture");
    glad_glPolygonOffset = (PFNGLPOLYGONOFFSETPROC) load(userptr, "glPolygonOffset");
    glad_glTexSubImage1D = (PFNGLTEXSUBIMAGE1DPROC) load(userptr, "glTexSubImage1D");
    glad_glTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC) load(userptr, "glTexSubImage2D");
}
static void glad_gl_load_GL_VERSION_1_2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_VERSION_1_2) return;
    glad_glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC) load(userptr, "glCopyTexSubImage3D");
    glad_glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC) load(userptr, "glDrawRangeElements");
    glad_glTexImage3D = (PFNGLTEXIMAGE3DPROC) load(userptr, "glTexImage3D");
    glad_glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC) load(userptr, "glTexSubImage3D");
}
static void glad_gl_load_GL_VERSION_1_3( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_VERSION_1_3) return;
    glad_glActiveTexture = (PFNGLACTIVETEXTUREPROC) load(userptr, "glActiveTexture");
    glad_glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC) load(userptr, "glCompressedTexImage1D");
    glad_glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) load(userptr, "glCompressedTexImage2D");
    glad_glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) load(userptr, "glCompressedTexImage3D");
    glad_glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) load(userptr, "glCompressedTexSubImage1D");
    glad_glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) load(userptr, "glCompressedTexSubImage2D");
    glad_glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) load(userptr, "glCompressedTexSubImage3D");
    glad_glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC) load(userptr, "glGetCompressedTexImage");
    glad_glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC) load(userptr, "glSampleCoverage");
}
static void glad_gl_load_GL_VERSION_1_4( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_VERSION_1_4) return;
    glad_glBlendColor = (PFNGLBLENDCOLORPROC) load(userptr, "glBlendColor");
    glad_glBlendEquation = (PFNGLBLENDEQUATIONPROC) load(userptr, "glBlendEquation");
    glad_glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC) load(userptr, "glBlendFuncSeparate");
    glad_glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC) load(userptr, "glMultiDrawArrays");
    glad_glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC) load(userptr, "glMultiDrawElements");
    glad_glPointParameterf = (PFNGLPOINTPARAMETERFPROC) load(userptr, "glPointParameterf");
    glad_glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC) load(userptr, "glPointParameterfv");
    glad_glPointParameteri = (PFNGLPOINTPARAMETERIPROC) load(userptr, "glPointParameteri");
    glad_glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC) load(userptr, "glPointParameteriv");
}
static void glad_gl_load_GL_VERSION_1_5( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_VERSION_1_5) return;
    glad_glBeginQuery = (PFNGLBEGINQUERYPROC) load(userptr, "glBeginQuery");
    glad_glBindBuffer = (PFNGLBINDBUFFERPROC) load(userptr, "glBindBuffer");
    glad_glBufferData = (PFNGLBUFFERDATAPROC) load(userptr, "glBufferData");
    glad_glBufferSubData = (PFNGLBUFFERSUBDATAPROC) load(userptr, "glBufferSubData");
    glad_glDeleteBuffers = (PFNGLDELETEBUFFERSPROC) load(userptr, "glDeleteBuffers");
    glad_glDeleteQueries = (PFNGLDELETEQUERIESPROC) load(userptr, "glDeleteQueries");
    glad_glEndQuery = (PFNGLENDQUERYPROC) load(userptr, "glEndQuery");
    glad_glGenBuffers = (PFNGLGENBUFFERSPROC) load(userptr, "glGenBuffers");
    glad_glGenQueries = (PFNGLGENQUERIESPROC) load(userptr, "glGenQueries");
    glad_glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC) load(userptr, "glGetBufferParameteriv");
    glad_glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC) load(userptr, "glGetBufferPointerv");
    glad_glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC) load(userptr, "glGetBufferSubData");
    glad_glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC) load(userptr, "glGetQueryObjectiv");
    glad_glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC) load(userptr, "glGetQueryObjectuiv");
    glad_glGetQueryiv = (PFNGLGETQUERYIVPROC) load(userptr, "glGetQueryiv");
    glad_glIsBuffer = (PFNGLISBUFFERPROC) load(userptr, "glIsBuffer");
    glad_glIsQuery = (PFNGLISQUERYPROC) load(userptr, "glIsQuery");
    glad_glMapBuffer = (PFNGLMAPBUFFERPROC) load(userptr, "glMapBuffer");
    glad_glUnmapBuffer = (PFNGLUNMAPBUFFERPROC) load(userptr, "glUnmapBuffer");
}
static void glad_gl_load_GL_VERSION_2_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_VERSION_2_0) return;
    glad_glAttachShader = (PFNGLATTACHSHADERPROC) load(userptr, "glAttachShader");
    glad_glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC) load(userptr, "glBindAttribLocation");
    glad_glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC) load(userptr, "glBlendEquationSeparate");
    glad_glCompileShader = (PFNGLCOMPILESHADERPROC) load(userptr, "glCompileShader");
    glad_glCreateProgram = (PFNGLCREATEPROGRAMPROC) load(userptr, "glCreateProgram");
    glad_glCreateShader = (PFNGLCREATESHADERPROC) load(userptr, "glCreateShader");
    glad_glDeleteProgram = (PFNGLDELETEPROGRAMPROC) load(userptr, "glDeleteProgram");
    glad_glDeleteShader = (PFNGLDELETESHADERPROC) load(userptr, "glDeleteShader");
    glad_glDetachShader = (PFNGLDETACHSHADERPROC) load(userptr, "glDetachShader");
    glad_glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) load(userptr, "glDisableVertexAttribArray");
    glad_glDrawBuffers = (PFNGLDRAWBUFFERSPROC) load(userptr, "glDrawBuffers");
    glad_glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC) load(userptr, "glEnableVertexAttribArray");
    glad_glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC) load(userptr, "glGetActiveAttrib");
    glad_glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC) load(userptr, "glGetActiveUniform");
    glad_glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC) load(userptr, "glGetAttachedShaders");
    glad_glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC) load(userptr, "glGetAttribLocation");
    glad_glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC) load(userptr, "glGetProgramInfoLog");
    glad_glGetProgramiv = (PFNGLGETPROGRAMIVPROC) load(userptr, "glGetProgramiv");
    glad_glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC) load(userptr, "glGetShaderInfoLog");
    glad_glGetShaderSource = (PFNGLGETSHADERSOURCEPROC) load(userptr, "glGetShaderSource");
    glad_glGetShaderiv = (PFNGLGETSHADERIVPROC) load(userptr, "glGetShaderiv");
    glad_glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC) load(userptr, "glGetUniformLocation");
    glad_glGetUniformfv = (PFNGLGETUNIFORMFVPROC) load(userptr, "glGetUniformfv");
    glad_glGetUniformiv = (PFNGLGETUNIFORMIVPROC) load(userptr, "glGetUniformiv");
    glad_glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC) load(userptr, "glGetVertexAttribPointerv");
    glad_glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC) load(userptr, "glGetVertexAttribdv");
    glad_glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC) load(userptr, "glGetVertexAttribfv");
    glad_glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC) load(userptr, "glGetVertexAttribiv");
    glad_glIsProgram = (PFNGLISPROGRAMPROC) load(userptr, "glIsProgram");
    glad_glIsShader = (PFNGLISSHADERPROC) load(userptr, "glIsShader");
    glad_glLinkProgram = (PFNGLLINKPROGRAMPROC) load(userptr, "glLinkProgram");
    glad_glShaderSource = (PFNGLSHADERSOURCEPROC) load(userptr, "glShaderSource");
    glad_glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC) load(userptr, "glStencilFuncSeparate");
    glad_glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC) load(userptr, "glStencilMaskSeparate");
    glad_glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC) load(userptr, "glStencilOpSeparate");
    glad_glUniform1f = (PFNGLUNIFORM1FPROC) load(userptr, "glUniform1f");
    glad_glUniform1fv = (PFNGLUNIFORM1FVPROC) load(userptr, "glUniform1fv");
    glad_glUniform1i = (PFNGLUNIFORM1IPROC) load(userptr, "glUniform1i");
    glad_glUniform1iv = (PFNGLUNIFORM1IVPROC) load(userptr, "glUniform1iv");
    glad_glUniform2f = (PFNGLUNIFORM2FPROC) load(userptr, "glUniform2f");
    glad_glUniform2fv = (PFNGLUNIFORM2FVPROC) load(userptr, "glUniform2fv");
    glad_glUniform2i = (PFNGLUNIFORM2IPROC) load(userptr, "glUniform2i");
    glad_glUniform2iv = (PFNGLUNIFORM2IVPROC) load(userptr, "glUniform2iv");
    glad_glUniform3f = (PFNGLUNIFORM3FPROC) load(userptr, "glUniform3f");
    glad_glUniform3fv = (PFNGLUNIFORM3FVPROC) load(userptr, "glUniform3fv");
    glad_glUniform3i = (PFNGLUNIFORM3IPROC) load(userptr, "glUniform3i");
    glad_glUniform3iv = (PFNGLUNIFORM3IVPROC) load(userptr, "glUniform3iv");
    glad_glUniform4f = (PFNGLUNIFORM4FPROC) load(userptr, "glUniform4f");
    glad_glUniform4fv = (PFNGLUNIFORM4FVPROC) load(userptr, "glUniform4fv");
    glad_glUniform4i = (PFNGLUNIFORM4IPROC) load(userptr, "glUniform4i");
    glad_glUniform4iv = (PFNGLUNIFORM4IVPROC) load(userptr, "glUniform4iv");
    glad_glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC) load(userptr, "glUniformMatrix2fv");
    glad_glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC) load(userptr, "glUniformMatrix3fv");
    glad_glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC) load(userptr, "glUniformMatrix4fv");
    glad_glUseProgram = (PFNGLUSEPROGRAMPROC) load(userptr, "glUseProgram");
    glad_glValidateProgram = (PFNGLVALIDATEPROGRAMPROC) load(userptr, "glValidateProgram");
    glad_glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC) load(userptr, "glVertexAttrib1d");
    glad_glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC) load(userptr, "glVertexAttrib1dv");
    glad_glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC) load(userptr, "glVertexAttrib1f");
    glad_glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC) load(userptr, "glVertexAttrib1fv");
    glad_glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC) load(userptr, "glVertexAttrib1s");
    glad_glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC) load(userptr, "glVertexAttrib1sv");
    glad_glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC) load(userptr, "glVertexAttrib2d");
    glad_glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC) load(userptr, "glVertexAttrib2dv");
    glad_glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC) load(userptr, "glVertexAttrib2f");
    glad_glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC) load(userptr, "glVertexAttrib2fv");
    glad_glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC) load(userptr, "glVertexAttrib2s");
    glad_glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC) load(userptr, "glVertexAttrib2sv");
    glad_glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC) load(userptr, "glVertexAttrib3d");
    glad_glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC) load(userptr, "glVertexAttrib3dv");
    glad_glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC) load(userptr, "glVertexAttrib3f");
    glad_glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC) load(userptr, "glVertexAttrib3fv");
    glad_glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC) load(userptr, "glVertexAttrib3s");
    glad_glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC) load(userptr, "glVertexAttrib3sv");
    glad_glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC) load(userptr, "glVertexAttrib4Nbv");
    glad_glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC) load(userptr, "glVertexAttrib4Niv");
    glad_glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC) load(userptr, "glVertexAttrib4Nsv");
    glad_glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC) load(userptr, "glVertexAttrib4Nub");
    glad_glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC) load(userptr, "glVertexAttrib4Nubv");
    glad_glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC) load(userptr, "glVertexAttrib4Nuiv");
    glad_glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC) load(userptr, "glVertexAttrib4Nusv");
    glad_glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC) load(userptr, "glVertexAttrib4bv");
    glad_glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC) load(userptr, "glVertexAttrib4d");
    glad_glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC) load(userptr, "glVertexAttrib4dv");
    glad_glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC) load(userptr, "glVertexAttrib4f");
    glad_glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC) load(userptr, "glVertexAttrib4fv");
    glad_glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC) load(userptr, "glVertexAttrib4iv");
    glad_glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC) load(userptr, "glVertexAttrib4s");
    glad_glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC) load(userptr, "glVertexAttrib4sv");
    glad_glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC) load(userptr, "glVertexAttrib4ubv");
    glad_glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC) load(userptr, "glVertexAttrib4uiv");
    glad_glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC) load(userptr, "glVertexAttrib4usv");
    glad_glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC) load(userptr, "glVertexAttribPointer");
}
static void glad_gl_load_GL_VERSION_2_1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_VERSION_2_1) return;
    glad_glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC) load(userptr, "glUniformMatrix2x3fv");
    glad_glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC) load(userptr, "glUniformMatrix2x4fv");
    glad_glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC) load(userptr, "glUniformMatrix3x2fv");
    glad_glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC) load(userptr, "glUniformMatrix3x4fv");
    glad_glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC) load(userptr, "glUniformMatrix4x2fv");
    glad_glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC) load(userptr, "glUniformMatrix4x3fv");
}
static void glad_gl_load_GL_VERSION_3_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_VERSION_3_0) return;
    glad_glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC) load(userptr, "glBeginConditionalRender");
    glad_glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC) load(userptr, "glBeginTransformFeedback");
    glad_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) load(userptr, "glBindBufferBase");
    glad_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) load(userptr, "glBindBufferRange");
    glad_glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC) load(userptr, "glBindFragDataLocation");
    glad_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) load(userptr, "glBindFramebuffer");
    glad_glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) load(userptr, "glBindRenderbuffer");
    glad_glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC) load(userptr, "glBindVertexArray");
    glad_glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) load(userptr, "glBlitFramebuffer");
    glad_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) load(userptr, "glCheckFramebufferStatus");
    glad_glClampColor = (PFNGLCLAMPCOLORPROC) load(userptr, "glClampColor");
    glad_glClearBufferfi = (PFNGLCLEARBUFFERFIPROC) load(userptr, "glClearBufferfi");
    glad_glClearBufferfv = (PFNGLCLEARBUFFERFVPROC) load(userptr, "glClearBufferfv");
    glad_glClearBufferiv = (PFNGLCLEARBUFFERIVPROC) load(userptr, "glClearBufferiv");
    glad_glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC) load(userptr, "glClearBufferuiv");
    glad_glColorMaski = (PFNGLCOLORMASKIPROC) load(userptr, "glColorMaski");
    glad_glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) load(userptr, "glDeleteFramebuffers");
    glad_glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) load(userptr, "glDeleteRenderbuffers");
    glad_glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) load(userptr, "glDeleteVertexArrays");
    glad_glDisablei = (PFNGLDISABLEIPROC) load(userptr, "glDisablei");
    glad_glEnablei = (PFNGLENABLEIPROC) load(userptr, "glEnablei");
    glad_glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC) load(userptr, "glEndConditionalRender");
    glad_glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC) load(userptr, "glEndTransformFeedback");
    glad_glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) load(userptr, "glFlushMappedBufferRange");
    glad_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) load(userptr, "glFramebufferRenderbuffer");
    glad_glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC) load(userptr, "glFramebufferTexture1D");
    glad_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) load(userptr, "glFramebufferTexture2D");
    glad_glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC) load(userptr, "glFramebufferTexture3D");
    glad_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) load(userptr, "glFramebufferTextureLayer");
    glad_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) load(userptr, "glGenFramebuffers");
    glad_glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) load(userptr, "glGenRenderbuffers");
    glad_glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) load(userptr, "glGenVertexArrays");
    glad_glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC) load(userptr, "glGenerateMipmap");
    glad_glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC) load(userptr, "glGetBooleani_v");
    glad_glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC) load(userptr, "glGetFragDataLocation");
    glad_glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) load(userptr, "glGetFramebufferAttachmentParameteriv");
    glad_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) load(userptr, "glGetIntegeri_v");
    glad_glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) load(userptr, "glGetRenderbufferParameteriv");
    glad_glGetStringi = (PFNGLGETSTRINGIPROC) load(userptr, "glGetStringi");
    glad_glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC) load(userptr, "glGetTexParameterIiv");
    glad_glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC) load(userptr, "glGetTexParameterIuiv");
    glad_glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) load(userptr, "glGetTransformFeedbackVarying");
    glad_glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC) load(userptr, "glGetUniformuiv");
    glad_glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC) load(userptr, "glGetVertexAttribIiv");
    glad_glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC) load(userptr, "glGetVertexAttribIuiv");
    glad_glIsEnabledi = (PFNGLISENABLEDIPROC) load(userptr, "glIsEnabledi");
    glad_glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC) load(userptr, "glIsFramebuffer");
    glad_glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC) load(userptr, "glIsRenderbuffer");
    glad_glIsVertexArray = (PFNGLISVERTEXARRAYPROC) load(userptr, "glIsVertexArray");
    glad_glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC) load(userptr, "glMapBufferRange");
    glad_glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) load(userptr, "glRenderbufferStorage");
    glad_glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) load(userptr, "glRenderbufferStorageMultisample");
    glad_glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC) load(userptr, "glTexParameterIiv");
    glad_glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC) load(userptr, "glTexParameterIuiv");
    glad_glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) load(userptr, "glTransformFeedbackVaryings");
    glad_glUniform1ui = (PFNGLUNIFORM1UIPROC) load(userptr, "glUniform1ui");
    glad_glUniform1uiv = (PFNGLUNIFORM1UIVPROC) load(userptr, "glUniform1uiv");
    glad_glUniform2ui = (PFNGLUNIFORM2UIPROC) load(userptr, "glUniform2ui");
    glad_glUniform2uiv = (PFNGLUNIFORM2UIVPROC) load(userptr, "glUniform2uiv");
    glad_glUniform3ui = (PFNGLUNIFORM3UIPROC) load(userptr, "glUniform3ui");
    glad_glUniform3uiv = (PFNGLUNIFORM3UIVPROC) load(userptr, "glUniform3uiv");
    glad_glUniform4ui = (PFNGLUNIFORM4UIPROC) load(userptr, "glUniform4ui");
    glad_glUniform4uiv = (PFNGLUNIFORM4UIVPROC) load(userptr, "glUniform4uiv");
    glad_glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC) load(userptr, "glVertexAttribI1i");
    glad_glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC) load(userptr, "glVertexAttribI1iv");
    glad_glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC) load(userptr, "glVertexAttribI1ui");
    glad_glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC) load(userptr, "glVertexAttribI1uiv");
    glad_glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC) load(userptr, "glVertexAttribI2i");
    glad_glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC) load(userptr, "glVertexAttribI2iv");
    glad_glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC) load(userptr, "glVertexAttribI2ui");
    glad_glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC) load(userptr, "glVertexAttribI2uiv");
    glad_glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC) load(userptr, "glVertexAttribI3i");
    glad_glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC) load(userptr, "glVertexAttribI3iv");
    glad_glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC) load(userptr, "glVertexAttribI3ui");
    glad_glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC) load(userptr, "glVertexAttribI3uiv");
    glad_glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC) load(userptr, "glVertexAttribI4bv");
    glad_glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC) load(userptr, "glVertexAttribI4i");
    glad_glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC) load(userptr, "glVertexAttribI4iv");
    glad_glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC) load(userptr, "glVertexAttribI4sv");
    glad_glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC) load(userptr, "glVertexAttribI4ubv");
    glad_glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC) load(userptr, "glVertexAttribI4ui");
    glad_glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC) load(userptr, "glVertexAttribI4uiv");
    glad_glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC) load(userptr, "glVertexAttribI4usv");
    glad_glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC) load(userptr, "glVertexAttribIPointer");
}
static void glad_gl_load_GL_VERSION_3_1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_VERSION_3_1) return;
    glad_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) load(userptr, "glBindBufferBase");
    glad_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) load(userptr, "glBindBufferRange");
    glad_glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC) load(userptr, "glCopyBufferSubData");
    glad_glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC) load(userptr, "glDrawArraysInstanced");
    glad_glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC) load(userptr, "glDrawElementsInstanced");
    glad_glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) load(userptr, "glGetActiveUniformBlockName");
    glad_glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) load(userptr, "glGetActiveUniformBlockiv");
    glad_glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC) load(userptr, "glGetActiveUniformName");
    glad_glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC) load(userptr, "glGetActiveUniformsiv");
    glad_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) load(userptr, "glGetIntegeri_v");
    glad_glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC) load(userptr, "glGetUniformBlockIndex");
    glad_glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC) load(userptr, "glGetUniformIndices");
    glad_glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC) load(userptr, "glPrimitiveRestartIndex");
    glad_glTexBuffer = (PFNGLTEXBUFFERPROC) load(userptr, "glTexBuffer");
    glad_glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC) load(userptr, "glUniformBlockBinding");
}
static void glad_gl_load_GL_VERSION_3_2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_VERSION_3_2) return;
    glad_glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC) load(userptr, "glClientWaitSync");
    glad_glDeleteSync = (PFNGLDELETESYNCPROC) load(userptr, "glDeleteSync");
    glad_glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC) load(userptr, "glDrawElementsBaseVertex");
    glad_glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) load(userptr, "glDrawElementsInstancedBaseVertex");
    glad_glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) load(userptr, "glDrawRangeElementsBaseVertex");
    glad_glFenceSync = (PFNGLFENCESYNCPROC) load(userptr, "glFenceSync");
    glad_glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC) load(userptr, "glFramebufferTexture");
    glad_glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC) load(userptr, "glGetBufferParameteri64v");
    glad_glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC) load(userptr, "glGetInteger64i_v");
    glad_glGetInteger64v = (PFNGLGETINTEGER64VPROC) load(userptr, "glGetInteger64v");
    glad_glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC) load(userptr, "glGetMultisamplefv");
    glad_glGetSynciv = (PFNGLGETSYNCIVPROC) load(userptr, "glGetSynciv");
    glad_glIsSync = (PFNGLISSYNCPROC) load(userptr, "glIsSync");
    glad_glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) load(userptr, "glMultiDrawElementsBaseVertex");
    glad_glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC) load(userptr, "glProvokingVertex");
    glad_glSampleMaski = (PFNGLSAMPLEMASKIPROC) load(userptr, "glSampleMaski");
    glad_glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) load(userptr, "glTexImage2DMultisample");
    glad_glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) load(userptr, "glTexImage3DMultisample");
    glad_glWaitSync = (PFNGLWAITSYNCPROC) load(userptr, "glWaitSync");
}
static void glad_gl_load_GL_VERSION_3_3( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_VERSION_3_3) return;
    glad_glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) load(userptr, "glBindFragDataLocationIndexed");
    glad_glBindSampler = (PFNGLBINDSAMPLERPROC) load(userptr, "glBindSampler");
    glad_glDeleteSamplers = (PFNGLDELETESAMPLERSPROC) load(userptr, "glDeleteSamplers");
    glad_glGenSamplers = (PFNGLGENSAMPLERSPROC) load(userptr, "glGenSamplers");
    glad_glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC) load(userptr, "glGetFragDataIndex");
    glad_glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC) load(userptr, "glGetQueryObjecti64v");
    glad_glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC) load(userptr, "glGetQueryObjectui64v");
    glad_glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC) load(userptr, "glGetSamplerParameterIiv");
    glad_glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC) load(userptr, "glGetSamplerParameterIuiv");
    glad_glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC) load(userptr, "glGetSamplerParameterfv");
    glad_glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC) load(userptr, "glGetSamplerParameteriv");
    glad_glIsSampler = (PFNGLISSAMPLERPROC) load(userptr, "glIsSampler");
    glad_glQueryCounter = (PFNGLQUERYCOUNTERPROC) load(userptr, "glQueryCounter");
    glad_glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC) load(userptr, "glSamplerParameterIiv");
    glad_glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC) load(userptr, "glSamplerParameterIuiv");
    glad_glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC) load(userptr, "glSamplerParameterf");
    glad_glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC) load(userptr, "glSamplerParameterfv");
    glad_glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC) load(userptr, "glSamplerParameteri");
    glad_glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC) load(userptr, "glSamplerParameteriv");
    glad_glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC) load(userptr, "glVertexAttribDivisor");
    glad_glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC) load(userptr, "glVertexAttribP1ui");
    glad_glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC) load(userptr, "glVertexAttribP1uiv");
    glad_glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC) load(userptr, "glVertexAttribP2ui");
    glad_glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC) load(userptr, "glVertexAttribP2uiv");
    glad_glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC) load(userptr, "glVertexAttribP3ui");
    glad_glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC) load(userptr, "glVertexAttribP3uiv");
    glad_glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC) load(userptr, "glVertexAttribP4ui");
    glad_glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC) load(userptr, "glVertexAttribP4uiv");
}
static void glad_gl_load_GL_ARB_ES2_compatibility( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_ES2_compatibility) return;
    glad_glClearDepthf = (PFNGLCLEARDEPTHFPROC) load(userptr, "glClearDepthf");
    glad_glDepthRangef = (PFNGLDEPTHRANGEFPROC) load(userptr, "glDepthRangef");
    glad_glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC) load(userptr, "glGetShaderPrecisionFormat");
    glad_glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC) load(userptr, "glReleaseShaderCompiler");
    glad_glShaderBinary = (PFNGLSHADERBINARYPROC) load(userptr, "glShaderBinary");
}
static void glad_gl_load_GL_ARB_ES3_1_compatibility( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_ES3_1_compatibility) return;
    glad_glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC) load(userptr, "glMemoryBarrierByRegion");
}
static void glad_gl_load_GL_ARB_ES3_2_compatibility( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_ES3_2_compatibility) return;
    glad_glPrimitiveBoundingBoxARB = (PFNGLPRIMITIVEBOUNDINGBOXARBPROC) load(userptr, "glPrimitiveBoundingBoxARB");
}
static void glad_gl_load_GL_ARB_base_instance( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_base_instance) return;
    glad_glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) load(userptr, "glDrawArraysInstancedBaseInstance");
    glad_glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) load(userptr, "glDrawElementsInstancedBaseInstance");
    glad_glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) load(userptr, "glDrawElementsInstancedBaseVertexBaseInstance");
}
static void glad_gl_load_GL_ARB_bindless_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_bindless_texture) return;
    glad_glGetImageHandleARB = (PFNGLGETIMAGEHANDLEARBPROC) load(userptr, "glGetImageHandleARB");
    glad_glGetTextureHandleARB = (PFNGLGETTEXTUREHANDLEARBPROC) load(userptr, "glGetTextureHandleARB");
    glad_glGetTextureSamplerHandleARB = (PFNGLGETTEXTURESAMPLERHANDLEARBPROC) load(userptr, "glGetTextureSamplerHandleARB");
    glad_glGetVertexAttribLui64vARB = (PFNGLGETVERTEXATTRIBLUI64VARBPROC) load(userptr, "glGetVertexAttribLui64vARB");
    glad_glIsImageHandleResidentARB = (PFNGLISIMAGEHANDLERESIDENTARBPROC) load(userptr, "glIsImageHandleResidentARB");
    glad_glIsTextureHandleResidentARB = (PFNGLISTEXTUREHANDLERESIDENTARBPROC) load(userptr, "glIsTextureHandleResidentARB");
    glad_glMakeImageHandleNonResidentARB = (PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) load(userptr, "glMakeImageHandleNonResidentARB");
    glad_glMakeImageHandleResidentARB = (PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) load(userptr, "glMakeImageHandleResidentARB");
    glad_glMakeTextureHandleNonResidentARB = (PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) load(userptr, "glMakeTextureHandleNonResidentARB");
    glad_glMakeTextureHandleResidentARB = (PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) load(userptr, "glMakeTextureHandleResidentARB");
    glad_glProgramUniformHandleui64ARB = (PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) load(userptr, "glProgramUniformHandleui64ARB");
    glad_glProgramUniformHandleui64vARB = (PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) load(userptr, "glProgramUniformHandleui64vARB");
    glad_glUniformHandleui64ARB = (PFNGLUNIFORMHANDLEUI64ARBPROC) load(userptr, "glUniformHandleui64ARB");
    glad_glUniformHandleui64vARB = (PFNGLUNIFORMHANDLEUI64VARBPROC) load(userptr, "glUniformHandleui64vARB");
    glad_glVertexAttribL1ui64ARB = (PFNGLVERTEXATTRIBL1UI64ARBPROC) load(userptr, "glVertexAttribL1ui64ARB");
    glad_glVertexAttribL1ui64vARB = (PFNGLVERTEXATTRIBL1UI64VARBPROC) load(userptr, "glVertexAttribL1ui64vARB");
}
static void glad_gl_load_GL_ARB_blend_func_extended( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_blend_func_extended) return;
    glad_glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) load(userptr, "glBindFragDataLocationIndexed");
    glad_glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC) load(userptr, "glGetFragDataIndex");
}
static void glad_gl_load_GL_ARB_buffer_storage( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_buffer_storage) return;
    glad_glBufferStorage = (PFNGLBUFFERSTORAGEPROC) load(userptr, "glBufferStorage");
}
static void glad_gl_load_GL_ARB_cl_event( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_cl_event) return;
    glad_glCreateSyncFromCLeventARB = (PFNGLCREATESYNCFROMCLEVENTARBPROC) load(userptr, "glCreateSyncFromCLeventARB");
}
static void glad_gl_load_GL_ARB_clear_buffer_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_clear_buffer_object) return;
    glad_glClearBufferData = (PFNGLCLEARBUFFERDATAPROC) load(userptr, "glClearBufferData");
    glad_glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC) load(userptr, "glClearBufferSubData");
}
static void glad_gl_load_GL_ARB_clear_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_clear_texture) return;
    glad_glClearTexImage = (PFNGLCLEARTEXIMAGEPROC) load(userptr, "glClearTexImage");
    glad_glClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC) load(userptr, "glClearTexSubImage");
}
static void glad_gl_load_GL_ARB_clip_control( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_clip_control) return;
    glad_glClipControl = (PFNGLCLIPCONTROLPROC) load(userptr, "glClipControl");
}
static void glad_gl_load_GL_ARB_color_buffer_float( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_color_buffer_float) return;
    glad_glClampColorARB = (PFNGLCLAMPCOLORARBPROC) load(userptr, "glClampColorARB");
}
static void glad_gl_load_GL_ARB_compute_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_compute_shader) return;
    glad_glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC) load(userptr, "glDispatchCompute");
    glad_glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) load(userptr, "glDispatchComputeIndirect");
}
static void glad_gl_load_GL_ARB_compute_variable_group_size( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_compute_variable_group_size) return;
    glad_glDispatchComputeGroupSizeARB = (PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) load(userptr, "glDispatchComputeGroupSizeARB");
}
static void glad_gl_load_GL_ARB_copy_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_copy_buffer) return;
    glad_glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC) load(userptr, "glCopyBufferSubData");
}
static void glad_gl_load_GL_ARB_copy_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_copy_image) return;
    glad_glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC) load(userptr, "glCopyImageSubData");
}
static void glad_gl_load_GL_ARB_debug_output( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_debug_output) return;
    glad_glDebugMessageCallbackARB = (PFNGLDEBUGMESSAGECALLBACKARBPROC) load(userptr, "glDebugMessageCallbackARB");
    glad_glDebugMessageControlARB = (PFNGLDEBUGMESSAGECONTROLARBPROC) load(userptr, "glDebugMessageControlARB");
    glad_glDebugMessageInsertARB = (PFNGLDEBUGMESSAGEINSERTARBPROC) load(userptr, "glDebugMessageInsertARB");
    glad_glGetDebugMessageLogARB = (PFNGLGETDEBUGMESSAGELOGARBPROC) load(userptr, "glGetDebugMessageLogARB");
}
static void glad_gl_load_GL_ARB_direct_state_access( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_direct_state_access) return;
    glad_glBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC) load(userptr, "glBindTextureUnit");
    glad_glBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC) load(userptr, "glBlitNamedFramebuffer");
    glad_glCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) load(userptr, "glCheckNamedFramebufferStatus");
    glad_glClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC) load(userptr, "glClearNamedBufferData");
    glad_glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC) load(userptr, "glClearNamedBufferSubData");
    glad_glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) load(userptr, "glClearNamedFramebufferfi");
    glad_glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) load(userptr, "glClearNamedFramebufferfv");
    glad_glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) load(userptr, "glClearNamedFramebufferiv");
    glad_glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) load(userptr, "glClearNamedFramebufferuiv");
    glad_glCompressedTextureSubImage1D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) load(userptr, "glCompressedTextureSubImage1D");
    glad_glCompressedTextureSubImage2D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) load(userptr, "glCompressedTextureSubImage2D");
    glad_glCompressedTextureSubImage3D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) load(userptr, "glCompressedTextureSubImage3D");
    glad_glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC) load(userptr, "glCopyNamedBufferSubData");
    glad_glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC) load(userptr, "glCopyTextureSubImage1D");
    glad_glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC) load(userptr, "glCopyTextureSubImage2D");
    glad_glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC) load(userptr, "glCopyTextureSubImage3D");
    glad_glCreateBuffers = (PFNGLCREATEBUFFERSPROC) load(userptr, "glCreateBuffers");
    glad_glCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC) load(userptr, "glCreateFramebuffers");
    glad_glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC) load(userptr, "glCreateProgramPipelines");
    glad_glCreateQueries = (PFNGLCREATEQUERIESPROC) load(userptr, "glCreateQueries");
    glad_glCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC) load(userptr, "glCreateRenderbuffers");
    glad_glCreateSamplers = (PFNGLCREATESAMPLERSPROC) load(userptr, "glCreateSamplers");
    glad_glCreateTextures = (PFNGLCREATETEXTURESPROC) load(userptr, "glCreateTextures");
    glad_glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC) load(userptr, "glCreateTransformFeedbacks");
    glad_glCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC) load(userptr, "glCreateVertexArrays");
    glad_glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC) load(userptr, "glDisableVertexArrayAttrib");
    glad_glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC) load(userptr, "glEnableVertexArrayAttrib");
    glad_glFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) load(userptr, "glFlushMappedNamedBufferRange");
    glad_glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC) load(userptr, "glGenerateTextureMipmap");
    glad_glGetCompressedTextureImage = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) load(userptr, "glGetCompressedTextureImage");
    glad_glGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) load(userptr, "glGetNamedBufferParameteri64v");
    glad_glGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC) load(userptr, "glGetNamedBufferParameteriv");
    glad_glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC) load(userptr, "glGetNamedBufferPointerv");
    glad_glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC) load(userptr, "glGetNamedBufferSubData");
    glad_glGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) load(userptr, "glGetNamedFramebufferAttachmentParameteriv");
    glad_glGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) load(userptr, "glGetNamedFramebufferParameteriv");
    glad_glGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) load(userptr, "glGetNamedRenderbufferParameteriv");
    glad_glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC) load(userptr, "glGetQueryBufferObjecti64v");
    glad_glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC) load(userptr, "glGetQueryBufferObjectiv");
    glad_glGetQueryBufferObjectui64v = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC) load(userptr, "glGetQueryBufferObjectui64v");
    glad_glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC) load(userptr, "glGetQueryBufferObjectuiv");
    glad_glGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC) load(userptr, "glGetTextureImage");
    glad_glGetTextureLevelParameterfv = (PFNGLGETTEXTURELEVELPARAMETERFVPROC) load(userptr, "glGetTextureLevelParameterfv");
    glad_glGetTextureLevelParameteriv = (PFNGLGETTEXTURELEVELPARAMETERIVPROC) load(userptr, "glGetTextureLevelParameteriv");
    glad_glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC) load(userptr, "glGetTextureParameterIiv");
    glad_glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC) load(userptr, "glGetTextureParameterIuiv");
    glad_glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC) load(userptr, "glGetTextureParameterfv");
    glad_glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC) load(userptr, "glGetTextureParameteriv");
    glad_glGetTransformFeedbacki64_v = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC) load(userptr, "glGetTransformFeedbacki64_v");
    glad_glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC) load(userptr, "glGetTransformFeedbacki_v");
    glad_glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC) load(userptr, "glGetTransformFeedbackiv");
    glad_glGetVertexArrayIndexed64iv = (PFNGLGETVERTEXARRAYINDEXED64IVPROC) load(userptr, "glGetVertexArrayIndexed64iv");
    glad_glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC) load(userptr, "glGetVertexArrayIndexediv");
    glad_glGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC) load(userptr, "glGetVertexArrayiv");
    glad_glInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) load(userptr, "glInvalidateNamedFramebufferData");
    glad_glInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) load(userptr, "glInvalidateNamedFramebufferSubData");
    glad_glMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC) load(userptr, "glMapNamedBuffer");
    glad_glMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC) load(userptr, "glMapNamedBufferRange");
    glad_glNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC) load(userptr, "glNamedBufferData");
    glad_glNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC) load(userptr, "glNamedBufferStorage");
    glad_glNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC) load(userptr, "glNamedBufferSubData");
    glad_glNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) load(userptr, "glNamedFramebufferDrawBuffer");
    glad_glNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) load(userptr, "glNamedFramebufferDrawBuffers");
    glad_glNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) load(userptr, "glNamedFramebufferParameteri");
    glad_glNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) load(userptr, "glNamedFramebufferReadBuffer");
    glad_glNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) load(userptr, "glNamedFramebufferRenderbuffer");
    glad_glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) load(userptr, "glNamedFramebufferTexture");
    glad_glNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) load(userptr, "glNamedFramebufferTextureLayer");
    glad_glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC) load(userptr, "glNamedRenderbufferStorage");
    glad_glNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) load(userptr, "glNamedRenderbufferStorageMultisample");
    glad_glTextureBuffer = (PFNGLTEXTUREBUFFERPROC) load(userptr, "glTextureBuffer");
    glad_glTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC) load(userptr, "glTextureBufferRange");
    glad_glTextureParameterIiv = (PFNGLTEXTUREPARAMETERIIVPROC) load(userptr, "glTextureParameterIiv");
    glad_glTextureParameterIuiv = (PFNGLTEXTUREPARAMETERIUIVPROC) load(userptr, "glTextureParameterIuiv");
    glad_glTextureParameterf = (PFNGLTEXTUREPARAMETERFPROC) load(userptr, "glTextureParameterf");
    glad_glTextureParameterfv = (PFNGLTEXTUREPARAMETERFVPROC) load(userptr, "glTextureParameterfv");
    glad_glTextureParameteri = (PFNGLTEXTUREPARAMETERIPROC) load(userptr, "glTextureParameteri");
    glad_glTextureParameteriv = (PFNGLTEXTUREPARAMETERIVPROC) load(userptr, "glTextureParameteriv");
    glad_glTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC) load(userptr, "glTextureStorage1D");
    glad_glTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC) load(userptr, "glTextureStorage2D");
    glad_glTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) load(userptr, "glTextureStorage2DMultisample");
    glad_glTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC) load(userptr, "glTextureStorage3D");
    glad_glTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) load(userptr, "glTextureStorage3DMultisample");
    glad_glTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC) load(userptr, "glTextureSubImage1D");
    glad_glTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC) load(userptr, "glTextureSubImage2D");
    glad_glTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC) load(userptr, "glTextureSubImage3D");
    glad_glTransformFeedbackBufferBase = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) load(userptr, "glTransformFeedbackBufferBase");
    glad_glTransformFeedbackBufferRange = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) load(userptr, "glTransformFeedbackBufferRange");
    glad_glUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC) load(userptr, "glUnmapNamedBuffer");
    glad_glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC) load(userptr, "glVertexArrayAttribBinding");
    glad_glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC) load(userptr, "glVertexArrayAttribFormat");
    glad_glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC) load(userptr, "glVertexArrayAttribIFormat");
    glad_glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC) load(userptr, "glVertexArrayAttribLFormat");
    glad_glVertexArrayBindingDivisor = (PFNGLVERTEXARRAYBINDINGDIVISORPROC) load(userptr, "glVertexArrayBindingDivisor");
    glad_glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC) load(userptr, "glVertexArrayElementBuffer");
    glad_glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC) load(userptr, "glVertexArrayVertexBuffer");
    glad_glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC) load(userptr, "glVertexArrayVertexBuffers");
}
static void glad_gl_load_GL_ARB_draw_buffers( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_draw_buffers) return;
    glad_glDrawBuffersARB = (PFNGLDRAWBUFFERSARBPROC) load(userptr, "glDrawBuffersARB");
}
static void glad_gl_load_GL_ARB_draw_buffers_blend( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_draw_buffers_blend) return;
    glad_glBlendEquationSeparateiARB = (PFNGLBLENDEQUATIONSEPARATEIARBPROC) load(userptr, "glBlendEquationSeparateiARB");
    glad_glBlendEquationiARB = (PFNGLBLENDEQUATIONIARBPROC) load(userptr, "glBlendEquationiARB");
    glad_glBlendFuncSeparateiARB = (PFNGLBLENDFUNCSEPARATEIARBPROC) load(userptr, "glBlendFuncSeparateiARB");
    glad_glBlendFunciARB = (PFNGLBLENDFUNCIARBPROC) load(userptr, "glBlendFunciARB");
}
static void glad_gl_load_GL_ARB_draw_elements_base_vertex( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_draw_elements_base_vertex) return;
    glad_glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC) load(userptr, "glDrawElementsBaseVertex");
    glad_glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) load(userptr, "glDrawElementsInstancedBaseVertex");
    glad_glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) load(userptr, "glDrawRangeElementsBaseVertex");
    glad_glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) load(userptr, "glMultiDrawElementsBaseVertex");
}
static void glad_gl_load_GL_ARB_draw_indirect( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_draw_indirect) return;
    glad_glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC) load(userptr, "glDrawArraysIndirect");
    glad_glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC) load(userptr, "glDrawElementsIndirect");
}
static void glad_gl_load_GL_ARB_draw_instanced( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_draw_instanced) return;
    glad_glDrawArraysInstancedARB = (PFNGLDRAWARRAYSINSTANCEDARBPROC) load(userptr, "glDrawArraysInstancedARB");
    glad_glDrawElementsInstancedARB = (PFNGLDRAWELEMENTSINSTANCEDARBPROC) load(userptr, "glDrawElementsInstancedARB");
}
static void glad_gl_load_GL_ARB_fragment_program( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_fragment_program) return;
    glad_glBindProgramARB = (PFNGLBINDPROGRAMARBPROC) load(userptr, "glBindProgramARB");
    glad_glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC) load(userptr, "glDeleteProgramsARB");
    glad_glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC) load(userptr, "glGenProgramsARB");
    glad_glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC) load(userptr, "glGetProgramEnvParameterdvARB");
    glad_glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC) load(userptr, "glGetProgramEnvParameterfvARB");
    glad_glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC) load(userptr, "glGetProgramLocalParameterdvARB");
    glad_glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC) load(userptr, "glGetProgramLocalParameterfvARB");
    glad_glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC) load(userptr, "glGetProgramStringARB");
    glad_glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC) load(userptr, "glGetProgramivARB");
    glad_glIsProgramARB = (PFNGLISPROGRAMARBPROC) load(userptr, "glIsProgramARB");
    glad_glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC) load(userptr, "glProgramEnvParameter4dARB");
    glad_glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC) load(userptr, "glProgramEnvParameter4dvARB");
    glad_glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC) load(userptr, "glProgramEnvParameter4fARB");
    glad_glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC) load(userptr, "glProgramEnvParameter4fvARB");
    glad_glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC) load(userptr, "glProgramLocalParameter4dARB");
    glad_glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC) load(userptr, "glProgramLocalParameter4dvARB");
    glad_glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC) load(userptr, "glProgramLocalParameter4fARB");
    glad_glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC) load(userptr, "glProgramLocalParameter4fvARB");
    glad_glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC) load(userptr, "glProgramStringARB");
}
static void glad_gl_load_GL_ARB_framebuffer_no_attachments( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_framebuffer_no_attachments) return;
    glad_glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC) load(userptr, "glFramebufferParameteri");
    glad_glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) load(userptr, "glGetFramebufferParameteriv");
}
static void glad_gl_load_GL_ARB_framebuffer_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_framebuffer_object) return;
    glad_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) load(userptr, "glBindFramebuffer");
    glad_glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) load(userptr, "glBindRenderbuffer");
    glad_glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) load(userptr, "glBlitFramebuffer");
    glad_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) load(userptr, "glCheckFramebufferStatus");
    glad_glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) load(userptr, "glDeleteFramebuffers");
    glad_glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) load(userptr, "glDeleteRenderbuffers");
    glad_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) load(userptr, "glFramebufferRenderbuffer");
    glad_glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC) load(userptr, "glFramebufferTexture1D");
    glad_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) load(userptr, "glFramebufferTexture2D");
    glad_glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC) load(userptr, "glFramebufferTexture3D");
    glad_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) load(userptr, "glFramebufferTextureLayer");
    glad_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) load(userptr, "glGenFramebuffers");
    glad_glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) load(userptr, "glGenRenderbuffers");
    glad_glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC) load(userptr, "glGenerateMipmap");
    glad_glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) load(userptr, "glGetFramebufferAttachmentParameteriv");
    glad_glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) load(userptr, "glGetRenderbufferParameteriv");
    glad_glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC) load(userptr, "glIsFramebuffer");
    glad_glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC) load(userptr, "glIsRenderbuffer");
    glad_glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) load(userptr, "glRenderbufferStorage");
    glad_glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) load(userptr, "glRenderbufferStorageMultisample");
}
static void glad_gl_load_GL_ARB_geometry_shader4( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_geometry_shader4) return;
    glad_glFramebufferTextureARB = (PFNGLFRAMEBUFFERTEXTUREARBPROC) load(userptr, "glFramebufferTextureARB");
    glad_glFramebufferTextureFaceARB = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC) load(userptr, "glFramebufferTextureFaceARB");
    glad_glFramebufferTextureLayerARB = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC) load(userptr, "glFramebufferTextureLayerARB");
    glad_glProgramParameteriARB = (PFNGLPROGRAMPARAMETERIARBPROC) load(userptr, "glProgramParameteriARB");
}
static void glad_gl_load_GL_ARB_get_program_binary( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_get_program_binary) return;
    glad_glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC) load(userptr, "glGetProgramBinary");
    glad_glProgramBinary = (PFNGLPROGRAMBINARYPROC) load(userptr, "glProgramBinary");
    glad_glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) load(userptr, "glProgramParameteri");
}
static void glad_gl_load_GL_ARB_get_texture_sub_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_get_texture_sub_image) return;
    glad_glGetCompressedTextureSubImage = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) load(userptr, "glGetCompressedTextureSubImage");
    glad_glGetTextureSubImage = (PFNGLGETTEXTURESUBIMAGEPROC) load(userptr, "glGetTextureSubImage");
}
static void glad_gl_load_GL_ARB_gl_spirv( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_gl_spirv) return;
    glad_glSpecializeShaderARB = (PFNGLSPECIALIZESHADERARBPROC) load(userptr, "glSpecializeShaderARB");
}
static void glad_gl_load_GL_ARB_gpu_shader_fp64( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_gpu_shader_fp64) return;
    glad_glGetUniformdv = (PFNGLGETUNIFORMDVPROC) load(userptr, "glGetUniformdv");
    glad_glUniform1d = (PFNGLUNIFORM1DPROC) load(userptr, "glUniform1d");
    glad_glUniform1dv = (PFNGLUNIFORM1DVPROC) load(userptr, "glUniform1dv");
    glad_glUniform2d = (PFNGLUNIFORM2DPROC) load(userptr, "glUniform2d");
    glad_glUniform2dv = (PFNGLUNIFORM2DVPROC) load(userptr, "glUniform2dv");
    glad_glUniform3d = (PFNGLUNIFORM3DPROC) load(userptr, "glUniform3d");
    glad_glUniform3dv = (PFNGLUNIFORM3DVPROC) load(userptr, "glUniform3dv");
    glad_glUniform4d = (PFNGLUNIFORM4DPROC) load(userptr, "glUniform4d");
    glad_glUniform4dv = (PFNGLUNIFORM4DVPROC) load(userptr, "glUniform4dv");
    glad_glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC) load(userptr, "glUniformMatrix2dv");
    glad_glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC) load(userptr, "glUniformMatrix2x3dv");
    glad_glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC) load(userptr, "glUniformMatrix2x4dv");
    glad_glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC) load(userptr, "glUniformMatrix3dv");
    glad_glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC) load(userptr, "glUniformMatrix3x2dv");
    glad_glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC) load(userptr, "glUniformMatrix3x4dv");
    glad_glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC) load(userptr, "glUniformMatrix4dv");
    glad_glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC) load(userptr, "glUniformMatrix4x2dv");
    glad_glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC) load(userptr, "glUniformMatrix4x3dv");
}
static void glad_gl_load_GL_ARB_gpu_shader_int64( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_gpu_shader_int64) return;
    glad_glGetUniformi64vARB = (PFNGLGETUNIFORMI64VARBPROC) load(userptr, "glGetUniformi64vARB");
    glad_glGetUniformui64vARB = (PFNGLGETUNIFORMUI64VARBPROC) load(userptr, "glGetUniformui64vARB");
    glad_glGetnUniformi64vARB = (PFNGLGETNUNIFORMI64VARBPROC) load(userptr, "glGetnUniformi64vARB");
    glad_glGetnUniformui64vARB = (PFNGLGETNUNIFORMUI64VARBPROC) load(userptr, "glGetnUniformui64vARB");
    glad_glProgramUniform1i64ARB = (PFNGLPROGRAMUNIFORM1I64ARBPROC) load(userptr, "glProgramUniform1i64ARB");
    glad_glProgramUniform1i64vARB = (PFNGLPROGRAMUNIFORM1I64VARBPROC) load(userptr, "glProgramUniform1i64vARB");
    glad_glProgramUniform1ui64ARB = (PFNGLPROGRAMUNIFORM1UI64ARBPROC) load(userptr, "glProgramUniform1ui64ARB");
    glad_glProgramUniform1ui64vARB = (PFNGLPROGRAMUNIFORM1UI64VARBPROC) load(userptr, "glProgramUniform1ui64vARB");
    glad_glProgramUniform2i64ARB = (PFNGLPROGRAMUNIFORM2I64ARBPROC) load(userptr, "glProgramUniform2i64ARB");
    glad_glProgramUniform2i64vARB = (PFNGLPROGRAMUNIFORM2I64VARBPROC) load(userptr, "glProgramUniform2i64vARB");
    glad_glProgramUniform2ui64ARB = (PFNGLPROGRAMUNIFORM2UI64ARBPROC) load(userptr, "glProgramUniform2ui64ARB");
    glad_glProgramUniform2ui64vARB = (PFNGLPROGRAMUNIFORM2UI64VARBPROC) load(userptr, "glProgramUniform2ui64vARB");
    glad_glProgramUniform3i64ARB = (PFNGLPROGRAMUNIFORM3I64ARBPROC) load(userptr, "glProgramUniform3i64ARB");
    glad_glProgramUniform3i64vARB = (PFNGLPROGRAMUNIFORM3I64VARBPROC) load(userptr, "glProgramUniform3i64vARB");
    glad_glProgramUniform3ui64ARB = (PFNGLPROGRAMUNIFORM3UI64ARBPROC) load(userptr, "glProgramUniform3ui64ARB");
    glad_glProgramUniform3ui64vARB = (PFNGLPROGRAMUNIFORM3UI64VARBPROC) load(userptr, "glProgramUniform3ui64vARB");
    glad_glProgramUniform4i64ARB = (PFNGLPROGRAMUNIFORM4I64ARBPROC) load(userptr, "glProgramUniform4i64ARB");
    glad_glProgramUniform4i64vARB = (PFNGLPROGRAMUNIFORM4I64VARBPROC) load(userptr, "glProgramUniform4i64vARB");
    glad_glProgramUniform4ui64ARB = (PFNGLPROGRAMUNIFORM4UI64ARBPROC) load(userptr, "glProgramUniform4ui64ARB");
    glad_glProgramUniform4ui64vARB = (PFNGLPROGRAMUNIFORM4UI64VARBPROC) load(userptr, "glProgramUniform4ui64vARB");
    glad_glUniform1i64ARB = (PFNGLUNIFORM1I64ARBPROC) load(userptr, "glUniform1i64ARB");
    glad_glUniform1i64vARB = (PFNGLUNIFORM1I64VARBPROC) load(userptr, "glUniform1i64vARB");
    glad_glUniform1ui64ARB = (PFNGLUNIFORM1UI64ARBPROC) load(userptr, "glUniform1ui64ARB");
    glad_glUniform1ui64vARB = (PFNGLUNIFORM1UI64VARBPROC) load(userptr, "glUniform1ui64vARB");
    glad_glUniform2i64ARB = (PFNGLUNIFORM2I64ARBPROC) load(userptr, "glUniform2i64ARB");
    glad_glUniform2i64vARB = (PFNGLUNIFORM2I64VARBPROC) load(userptr, "glUniform2i64vARB");
    glad_glUniform2ui64ARB = (PFNGLUNIFORM2UI64ARBPROC) load(userptr, "glUniform2ui64ARB");
    glad_glUniform2ui64vARB = (PFNGLUNIFORM2UI64VARBPROC) load(userptr, "glUniform2ui64vARB");
    glad_glUniform3i64ARB = (PFNGLUNIFORM3I64ARBPROC) load(userptr, "glUniform3i64ARB");
    glad_glUniform3i64vARB = (PFNGLUNIFORM3I64VARBPROC) load(userptr, "glUniform3i64vARB");
    glad_glUniform3ui64ARB = (PFNGLUNIFORM3UI64ARBPROC) load(userptr, "glUniform3ui64ARB");
    glad_glUniform3ui64vARB = (PFNGLUNIFORM3UI64VARBPROC) load(userptr, "glUniform3ui64vARB");
    glad_glUniform4i64ARB = (PFNGLUNIFORM4I64ARBPROC) load(userptr, "glUniform4i64ARB");
    glad_glUniform4i64vARB = (PFNGLUNIFORM4I64VARBPROC) load(userptr, "glUniform4i64vARB");
    glad_glUniform4ui64ARB = (PFNGLUNIFORM4UI64ARBPROC) load(userptr, "glUniform4ui64ARB");
    glad_glUniform4ui64vARB = (PFNGLUNIFORM4UI64VARBPROC) load(userptr, "glUniform4ui64vARB");
}
static void glad_gl_load_GL_ARB_imaging( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_imaging) return;
    glad_glBlendColor = (PFNGLBLENDCOLORPROC) load(userptr, "glBlendColor");
    glad_glBlendEquation = (PFNGLBLENDEQUATIONPROC) load(userptr, "glBlendEquation");
}
static void glad_gl_load_GL_ARB_indirect_parameters( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_indirect_parameters) return;
    glad_glMultiDrawArraysIndirectCountARB = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) load(userptr, "glMultiDrawArraysIndirectCountARB");
    glad_glMultiDrawElementsIndirectCountARB = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) load(userptr, "glMultiDrawElementsIndirectCountARB");
}
static void glad_gl_load_GL_ARB_instanced_arrays( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_instanced_arrays) return;
    glad_glVertexAttribDivisorARB = (PFNGLVERTEXATTRIBDIVISORARBPROC) load(userptr, "glVertexAttribDivisorARB");
}
static void glad_gl_load_GL_ARB_internalformat_query( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_internalformat_query) return;
    glad_glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC) load(userptr, "glGetInternalformativ");
}
static void glad_gl_load_GL_ARB_internalformat_query2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_internalformat_query2) return;
    glad_glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC) load(userptr, "glGetInternalformati64v");
}
static void glad_gl_load_GL_ARB_invalidate_subdata( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_invalidate_subdata) return;
    glad_glInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC) load(userptr, "glInvalidateBufferData");
    glad_glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC) load(userptr, "glInvalidateBufferSubData");
    glad_glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC) load(userptr, "glInvalidateFramebuffer");
    glad_glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) load(userptr, "glInvalidateSubFramebuffer");
    glad_glInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC) load(userptr, "glInvalidateTexImage");
    glad_glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC) load(userptr, "glInvalidateTexSubImage");
}
static void glad_gl_load_GL_ARB_map_buffer_range( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_map_buffer_range) return;
    glad_glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) load(userptr, "glFlushMappedBufferRange");
    glad_glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC) load(userptr, "glMapBufferRange");
}
static void glad_gl_load_GL_ARB_matrix_palette( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_matrix_palette) return;
    glad_glCurrentPaletteMatrixARB = (PFNGLCURRENTPALETTEMATRIXARBPROC) load(userptr, "glCurrentPaletteMatrixARB");
    glad_glMatrixIndexPointerARB = (PFNGLMATRIXINDEXPOINTERARBPROC) load(userptr, "glMatrixIndexPointerARB");
    glad_glMatrixIndexubvARB = (PFNGLMATRIXINDEXUBVARBPROC) load(userptr, "glMatrixIndexubvARB");
    glad_glMatrixIndexuivARB = (PFNGLMATRIXINDEXUIVARBPROC) load(userptr, "glMatrixIndexuivARB");
    glad_glMatrixIndexusvARB = (PFNGLMATRIXINDEXUSVARBPROC) load(userptr, "glMatrixIndexusvARB");
}
static void glad_gl_load_GL_ARB_multi_bind( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_multi_bind) return;
    glad_glBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC) load(userptr, "glBindBuffersBase");
    glad_glBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC) load(userptr, "glBindBuffersRange");
    glad_glBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC) load(userptr, "glBindImageTextures");
    glad_glBindSamplers = (PFNGLBINDSAMPLERSPROC) load(userptr, "glBindSamplers");
    glad_glBindTextures = (PFNGLBINDTEXTURESPROC) load(userptr, "glBindTextures");
    glad_glBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC) load(userptr, "glBindVertexBuffers");
}
static void glad_gl_load_GL_ARB_multi_draw_indirect( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_multi_draw_indirect) return;
    glad_glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC) load(userptr, "glMultiDrawArraysIndirect");
    glad_glMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC) load(userptr, "glMultiDrawElementsIndirect");
}
static void glad_gl_load_GL_ARB_multisample( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_multisample) return;
    glad_glSampleCoverageARB = (PFNGLSAMPLECOVERAGEARBPROC) load(userptr, "glSampleCoverageARB");
}
static void glad_gl_load_GL_ARB_multitexture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_multitexture) return;
    glad_glActiveTextureARB = (PFNGLACTIVETEXTUREARBPROC) load(userptr, "glActiveTextureARB");
    glad_glClientActiveTextureARB = (PFNGLCLIENTACTIVETEXTUREARBPROC) load(userptr, "glClientActiveTextureARB");
    glad_glMultiTexCoord1dARB = (PFNGLMULTITEXCOORD1DARBPROC) load(userptr, "glMultiTexCoord1dARB");
    glad_glMultiTexCoord1dvARB = (PFNGLMULTITEXCOORD1DVARBPROC) load(userptr, "glMultiTexCoord1dvARB");
    glad_glMultiTexCoord1fARB = (PFNGLMULTITEXCOORD1FARBPROC) load(userptr, "glMultiTexCoord1fARB");
    glad_glMultiTexCoord1fvARB = (PFNGLMULTITEXCOORD1FVARBPROC) load(userptr, "glMultiTexCoord1fvARB");
    glad_glMultiTexCoord1iARB = (PFNGLMULTITEXCOORD1IARBPROC) load(userptr, "glMultiTexCoord1iARB");
    glad_glMultiTexCoord1ivARB = (PFNGLMULTITEXCOORD1IVARBPROC) load(userptr, "glMultiTexCoord1ivARB");
    glad_glMultiTexCoord1sARB = (PFNGLMULTITEXCOORD1SARBPROC) load(userptr, "glMultiTexCoord1sARB");
    glad_glMultiTexCoord1svARB = (PFNGLMULTITEXCOORD1SVARBPROC) load(userptr, "glMultiTexCoord1svARB");
    glad_glMultiTexCoord2dARB = (PFNGLMULTITEXCOORD2DARBPROC) load(userptr, "glMultiTexCoord2dARB");
    glad_glMultiTexCoord2dvARB = (PFNGLMULTITEXCOORD2DVARBPROC) load(userptr, "glMultiTexCoord2dvARB");
    glad_glMultiTexCoord2fARB = (PFNGLMULTITEXCOORD2FARBPROC) load(userptr, "glMultiTexCoord2fARB");
    glad_glMultiTexCoord2fvARB = (PFNGLMULTITEXCOORD2FVARBPROC) load(userptr, "glMultiTexCoord2fvARB");
    glad_glMultiTexCoord2iARB = (PFNGLMULTITEXCOORD2IARBPROC) load(userptr, "glMultiTexCoord2iARB");
    glad_glMultiTexCoord2ivARB = (PFNGLMULTITEXCOORD2IVARBPROC) load(userptr, "glMultiTexCoord2ivARB");
    glad_glMultiTexCoord2sARB = (PFNGLMULTITEXCOORD2SARBPROC) load(userptr, "glMultiTexCoord2sARB");
    glad_glMultiTexCoord2svARB = (PFNGLMULTITEXCOORD2SVARBPROC) load(userptr, "glMultiTexCoord2svARB");
    glad_glMultiTexCoord3dARB = (PFNGLMULTITEXCOORD3DARBPROC) load(userptr, "glMultiTexCoord3dARB");
    glad_glMultiTexCoord3dvARB = (PFNGLMULTITEXCOORD3DVARBPROC) load(userptr, "glMultiTexCoord3dvARB");
    glad_glMultiTexCoord3fARB = (PFNGLMULTITEXCOORD3FARBPROC) load(userptr, "glMultiTexCoord3fARB");
    glad_glMultiTexCoord3fvARB = (PFNGLMULTITEXCOORD3FVARBPROC) load(userptr, "glMultiTexCoord3fvARB");
    glad_glMultiTexCoord3iARB = (PFNGLMULTITEXCOORD3IARBPROC) load(userptr, "glMultiTexCoord3iARB");
    glad_glMultiTexCoord3ivARB = (PFNGLMULTITEXCOORD3IVARBPROC) load(userptr, "glMultiTexCoord3ivARB");
    glad_glMultiTexCoord3sARB = (PFNGLMULTITEXCOORD3SARBPROC) load(userptr, "glMultiTexCoord3sARB");
    glad_glMultiTexCoord3svARB = (PFNGLMULTITEXCOORD3SVARBPROC) load(userptr, "glMultiTexCoord3svARB");
    glad_glMultiTexCoord4dARB = (PFNGLMULTITEXCOORD4DARBPROC) load(userptr, "glMultiTexCoord4dARB");
    glad_glMultiTexCoord4dvARB = (PFNGLMULTITEXCOORD4DVARBPROC) load(userptr, "glMultiTexCoord4dvARB");
    glad_glMultiTexCoord4fARB = (PFNGLMULTITEXCOORD4FARBPROC) load(userptr, "glMultiTexCoord4fARB");
    glad_glMultiTexCoord4fvARB = (PFNGLMULTITEXCOORD4FVARBPROC) load(userptr, "glMultiTexCoord4fvARB");
    glad_glMultiTexCoord4iARB = (PFNGLMULTITEXCOORD4IARBPROC) load(userptr, "glMultiTexCoord4iARB");
    glad_glMultiTexCoord4ivARB = (PFNGLMULTITEXCOORD4IVARBPROC) load(userptr, "glMultiTexCoord4ivARB");
    glad_glMultiTexCoord4sARB = (PFNGLMULTITEXCOORD4SARBPROC) load(userptr, "glMultiTexCoord4sARB");
    glad_glMultiTexCoord4svARB = (PFNGLMULTITEXCOORD4SVARBPROC) load(userptr, "glMultiTexCoord4svARB");
}
static void glad_gl_load_GL_ARB_occlusion_query( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_occlusion_query) return;
    glad_glBeginQueryARB = (PFNGLBEGINQUERYARBPROC) load(userptr, "glBeginQueryARB");
    glad_glDeleteQueriesARB = (PFNGLDELETEQUERIESARBPROC) load(userptr, "glDeleteQueriesARB");
    glad_glEndQueryARB = (PFNGLENDQUERYARBPROC) load(userptr, "glEndQueryARB");
    glad_glGenQueriesARB = (PFNGLGENQUERIESARBPROC) load(userptr, "glGenQueriesARB");
    glad_glGetQueryObjectivARB = (PFNGLGETQUERYOBJECTIVARBPROC) load(userptr, "glGetQueryObjectivARB");
    glad_glGetQueryObjectuivARB = (PFNGLGETQUERYOBJECTUIVARBPROC) load(userptr, "glGetQueryObjectuivARB");
    glad_glGetQueryivARB = (PFNGLGETQUERYIVARBPROC) load(userptr, "glGetQueryivARB");
    glad_glIsQueryARB = (PFNGLISQUERYARBPROC) load(userptr, "glIsQueryARB");
}
static void glad_gl_load_GL_ARB_parallel_shader_compile( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_parallel_shader_compile) return;
    glad_glMaxShaderCompilerThreadsARB = (PFNGLMAXSHADERCOMPILERTHREADSARBPROC) load(userptr, "glMaxShaderCompilerThreadsARB");
}
static void glad_gl_load_GL_ARB_point_parameters( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_point_parameters) return;
    glad_glPointParameterfARB = (PFNGLPOINTPARAMETERFARBPROC) load(userptr, "glPointParameterfARB");
    glad_glPointParameterfvARB = (PFNGLPOINTPARAMETERFVARBPROC) load(userptr, "glPointParameterfvARB");
}
static void glad_gl_load_GL_ARB_polygon_offset_clamp( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_polygon_offset_clamp) return;
    glad_glPolygonOffsetClamp = (PFNGLPOLYGONOFFSETCLAMPPROC) load(userptr, "glPolygonOffsetClamp");
}
static void glad_gl_load_GL_ARB_program_interface_query( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_program_interface_query) return;
    glad_glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC) load(userptr, "glGetProgramInterfaceiv");
    glad_glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC) load(userptr, "glGetProgramResourceIndex");
    glad_glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) load(userptr, "glGetProgramResourceLocation");
    glad_glGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) load(userptr, "glGetProgramResourceLocationIndex");
    glad_glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC) load(userptr, "glGetProgramResourceName");
    glad_glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC) load(userptr, "glGetProgramResourceiv");
}
static void glad_gl_load_GL_ARB_provoking_vertex( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_provoking_vertex) return;
    glad_glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC) load(userptr, "glProvokingVertex");
}
static void glad_gl_load_GL_ARB_robustness( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_robustness) return;
    glad_glGetGraphicsResetStatusARB = (PFNGLGETGRAPHICSRESETSTATUSARBPROC) load(userptr, "glGetGraphicsResetStatusARB");
    glad_glGetnCompressedTexImageARB = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) load(userptr, "glGetnCompressedTexImageARB");
    glad_glGetnTexImageARB = (PFNGLGETNTEXIMAGEARBPROC) load(userptr, "glGetnTexImageARB");
    glad_glGetnUniformdvARB = (PFNGLGETNUNIFORMDVARBPROC) load(userptr, "glGetnUniformdvARB");
    glad_glGetnUniformfvARB = (PFNGLGETNUNIFORMFVARBPROC) load(userptr, "glGetnUniformfvARB");
    glad_glGetnUniformivARB = (PFNGLGETNUNIFORMIVARBPROC) load(userptr, "glGetnUniformivARB");
    glad_glGetnUniformuivARB = (PFNGLGETNUNIFORMUIVARBPROC) load(userptr, "glGetnUniformuivARB");
    glad_glReadnPixelsARB = (PFNGLREADNPIXELSARBPROC) load(userptr, "glReadnPixelsARB");
}
static void glad_gl_load_GL_ARB_sample_locations( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_sample_locations) return;
    glad_glEvaluateDepthValuesARB = (PFNGLEVALUATEDEPTHVALUESARBPROC) load(userptr, "glEvaluateDepthValuesARB");
    glad_glFramebufferSampleLocationsfvARB = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) load(userptr, "glFramebufferSampleLocationsfvARB");
    glad_glNamedFramebufferSampleLocationsfvARB = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) load(userptr, "glNamedFramebufferSampleLocationsfvARB");
}
static void glad_gl_load_GL_ARB_sample_shading( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_sample_shading) return;
    glad_glMinSampleShadingARB = (PFNGLMINSAMPLESHADINGARBPROC) load(userptr, "glMinSampleShadingARB");
}
static void glad_gl_load_GL_ARB_sampler_objects( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_sampler_objects) return;
    glad_glBindSampler = (PFNGLBINDSAMPLERPROC) load(userptr, "glBindSampler");
    glad_glDeleteSamplers = (PFNGLDELETESAMPLERSPROC) load(userptr, "glDeleteSamplers");
    glad_glGenSamplers = (PFNGLGENSAMPLERSPROC) load(userptr, "glGenSamplers");
    glad_glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC) load(userptr, "glGetSamplerParameterIiv");
    glad_glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC) load(userptr, "glGetSamplerParameterIuiv");
    glad_glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC) load(userptr, "glGetSamplerParameterfv");
    glad_glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC) load(userptr, "glGetSamplerParameteriv");
    glad_glIsSampler = (PFNGLISSAMPLERPROC) load(userptr, "glIsSampler");
    glad_glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC) load(userptr, "glSamplerParameterIiv");
    glad_glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC) load(userptr, "glSamplerParameterIuiv");
    glad_glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC) load(userptr, "glSamplerParameterf");
    glad_glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC) load(userptr, "glSamplerParameterfv");
    glad_glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC) load(userptr, "glSamplerParameteri");
    glad_glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC) load(userptr, "glSamplerParameteriv");
}
static void glad_gl_load_GL_ARB_separate_shader_objects( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_separate_shader_objects) return;
    glad_glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC) load(userptr, "glActiveShaderProgram");
    glad_glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC) load(userptr, "glBindProgramPipeline");
    glad_glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC) load(userptr, "glCreateShaderProgramv");
    glad_glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC) load(userptr, "glDeleteProgramPipelines");
    glad_glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC) load(userptr, "glGenProgramPipelines");
    glad_glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) load(userptr, "glGetProgramPipelineInfoLog");
    glad_glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC) load(userptr, "glGetProgramPipelineiv");
    glad_glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC) load(userptr, "glIsProgramPipeline");
    glad_glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) load(userptr, "glProgramParameteri");
    glad_glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC) load(userptr, "glProgramUniform1d");
    glad_glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC) load(userptr, "glProgramUniform1dv");
    glad_glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC) load(userptr, "glProgramUniform1f");
    glad_glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC) load(userptr, "glProgramUniform1fv");
    glad_glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC) load(userptr, "glProgramUniform1i");
    glad_glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC) load(userptr, "glProgramUniform1iv");
    glad_glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC) load(userptr, "glProgramUniform1ui");
    glad_glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC) load(userptr, "glProgramUniform1uiv");
    glad_glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC) load(userptr, "glProgramUniform2d");
    glad_glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC) load(userptr, "glProgramUniform2dv");
    glad_glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC) load(userptr, "glProgramUniform2f");
    glad_glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC) load(userptr, "glProgramUniform2fv");
    glad_glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC) load(userptr, "glProgramUniform2i");
    glad_glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC) load(userptr, "glProgramUniform2iv");
    glad_glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC) load(userptr, "glProgramUniform2ui");
    glad_glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC) load(userptr, "glProgramUniform2uiv");
    glad_glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC) load(userptr, "glProgramUniform3d");
    glad_glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC) load(userptr, "glProgramUniform3dv");
    glad_glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC) load(userptr, "glProgramUniform3f");
    glad_glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC) load(userptr, "glProgramUniform3fv");
    glad_glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC) load(userptr, "glProgramUniform3i");
    glad_glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC) load(userptr, "glProgramUniform3iv");
    glad_glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC) load(userptr, "glProgramUniform3ui");
    glad_glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC) load(userptr, "glProgramUniform3uiv");
    glad_glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC) load(userptr, "glProgramUniform4d");
    glad_glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC) load(userptr, "glProgramUniform4dv");
    glad_glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC) load(userptr, "glProgramUniform4f");
    glad_glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC) load(userptr, "glProgramUniform4fv");
    glad_glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC) load(userptr, "glProgramUniform4i");
    glad_glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC) load(userptr, "glProgramUniform4iv");
    glad_glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC) load(userptr, "glProgramUniform4ui");
    glad_glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC) load(userptr, "glProgramUniform4uiv");
    glad_glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC) load(userptr, "glProgramUniformMatrix2dv");
    glad_glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) load(userptr, "glProgramUniformMatrix2fv");
    glad_glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) load(userptr, "glProgramUniformMatrix2x3dv");
    glad_glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) load(userptr, "glProgramUniformMatrix2x3fv");
    glad_glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) load(userptr, "glProgramUniformMatrix2x4dv");
    glad_glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) load(userptr, "glProgramUniformMatrix2x4fv");
    glad_glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC) load(userptr, "glProgramUniformMatrix3dv");
    glad_glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) load(userptr, "glProgramUniformMatrix3fv");
    glad_glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) load(userptr, "glProgramUniformMatrix3x2dv");
    glad_glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) load(userptr, "glProgramUniformMatrix3x2fv");
    glad_glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) load(userptr, "glProgramUniformMatrix3x4dv");
    glad_glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) load(userptr, "glProgramUniformMatrix3x4fv");
    glad_glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC) load(userptr, "glProgramUniformMatrix4dv");
    glad_glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) load(userptr, "glProgramUniformMatrix4fv");
    glad_glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) load(userptr, "glProgramUniformMatrix4x2dv");
    glad_glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) load(userptr, "glProgramUniformMatrix4x2fv");
    glad_glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) load(userptr, "glProgramUniformMatrix4x3dv");
    glad_glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) load(userptr, "glProgramUniformMatrix4x3fv");
    glad_glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC) load(userptr, "glUseProgramStages");
    glad_glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC) load(userptr, "glValidateProgramPipeline");
}
static void glad_gl_load_GL_ARB_shader_atomic_counters( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_shader_atomic_counters) return;
    glad_glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) load(userptr, "glGetActiveAtomicCounterBufferiv");
}
static void glad_gl_load_GL_ARB_shader_image_load_store( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_shader_image_load_store) return;
    glad_glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC) load(userptr, "glBindImageTexture");
    glad_glMemoryBarrier = (PFNGLMEMORYBARRIERPROC) load(userptr, "glMemoryBarrier");
}
static void glad_gl_load_GL_ARB_shader_objects( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_shader_objects) return;
    glad_glAttachObjectARB = (PFNGLATTACHOBJECTARBPROC) load(userptr, "glAttachObjectARB");
    glad_glCompileShaderARB = (PFNGLCOMPILESHADERARBPROC) load(userptr, "glCompileShaderARB");
    glad_glCreateProgramObjectARB = (PFNGLCREATEPROGRAMOBJECTARBPROC) load(userptr, "glCreateProgramObjectARB");
    glad_glCreateShaderObjectARB = (PFNGLCREATESHADEROBJECTARBPROC) load(userptr, "glCreateShaderObjectARB");
    glad_glDeleteObjectARB = (PFNGLDELETEOBJECTARBPROC) load(userptr, "glDeleteObjectARB");
    glad_glDetachObjectARB = (PFNGLDETACHOBJECTARBPROC) load(userptr, "glDetachObjectARB");
    glad_glGetActiveUniformARB = (PFNGLGETACTIVEUNIFORMARBPROC) load(userptr, "glGetActiveUniformARB");
    glad_glGetAttachedObjectsARB = (PFNGLGETATTACHEDOBJECTSARBPROC) load(userptr, "glGetAttachedObjectsARB");
    glad_glGetHandleARB = (PFNGLGETHANDLEARBPROC) load(userptr, "glGetHandleARB");
    glad_glGetInfoLogARB = (PFNGLGETINFOLOGARBPROC) load(userptr, "glGetInfoLogARB");
    glad_glGetObjectParameterfvARB = (PFNGLGETOBJECTPARAMETERFVARBPROC) load(userptr, "glGetObjectParameterfvARB");
    glad_glGetObjectParameterivARB = (PFNGLGETOBJECTPARAMETERIVARBPROC) load(userptr, "glGetObjectParameterivARB");
    glad_glGetShaderSourceARB = (PFNGLGETSHADERSOURCEARBPROC) load(userptr, "glGetShaderSourceARB");
    glad_glGetUniformLocationARB = (PFNGLGETUNIFORMLOCATIONARBPROC) load(userptr, "glGetUniformLocationARB");
    glad_glGetUniformfvARB = (PFNGLGETUNIFORMFVARBPROC) load(userptr, "glGetUniformfvARB");
    glad_glGetUniformivARB = (PFNGLGETUNIFORMIVARBPROC) load(userptr, "glGetUniformivARB");
    glad_glLinkProgramARB = (PFNGLLINKPROGRAMARBPROC) load(userptr, "glLinkProgramARB");
    glad_glShaderSourceARB = (PFNGLSHADERSOURCEARBPROC) load(userptr, "glShaderSourceARB");
    glad_glUniform1fARB = (PFNGLUNIFORM1FARBPROC) load(userptr, "glUniform1fARB");
    glad_glUniform1fvARB = (PFNGLUNIFORM1FVARBPROC) load(userptr, "glUniform1fvARB");
    glad_glUniform1iARB = (PFNGLUNIFORM1IARBPROC) load(userptr, "glUniform1iARB");
    glad_glUniform1ivARB = (PFNGLUNIFORM1IVARBPROC) load(userptr, "glUniform1ivARB");
    glad_glUniform2fARB = (PFNGLUNIFORM2FARBPROC) load(userptr, "glUniform2fARB");
    glad_glUniform2fvARB = (PFNGLUNIFORM2FVARBPROC) load(userptr, "glUniform2fvARB");
    glad_glUniform2iARB = (PFNGLUNIFORM2IARBPROC) load(userptr, "glUniform2iARB");
    glad_glUniform2ivARB = (PFNGLUNIFORM2IVARBPROC) load(userptr, "glUniform2ivARB");
    glad_glUniform3fARB = (PFNGLUNIFORM3FARBPROC) load(userptr, "glUniform3fARB");
    glad_glUniform3fvARB = (PFNGLUNIFORM3FVARBPROC) load(userptr, "glUniform3fvARB");
    glad_glUniform3iARB = (PFNGLUNIFORM3IARBPROC) load(userptr, "glUniform3iARB");
    glad_glUniform3ivARB = (PFNGLUNIFORM3IVARBPROC) load(userptr, "glUniform3ivARB");
    glad_glUniform4fARB = (PFNGLUNIFORM4FARBPROC) load(userptr, "glUniform4fARB");
    glad_glUniform4fvARB = (PFNGLUNIFORM4FVARBPROC) load(userptr, "glUniform4fvARB");
    glad_glUniform4iARB = (PFNGLUNIFORM4IARBPROC) load(userptr, "glUniform4iARB");
    glad_glUniform4ivARB = (PFNGLUNIFORM4IVARBPROC) load(userptr, "glUniform4ivARB");
    glad_glUniformMatrix2fvARB = (PFNGLUNIFORMMATRIX2FVARBPROC) load(userptr, "glUniformMatrix2fvARB");
    glad_glUniformMatrix3fvARB = (PFNGLUNIFORMMATRIX3FVARBPROC) load(userptr, "glUniformMatrix3fvARB");
    glad_glUniformMatrix4fvARB = (PFNGLUNIFORMMATRIX4FVARBPROC) load(userptr, "glUniformMatrix4fvARB");
    glad_glUseProgramObjectARB = (PFNGLUSEPROGRAMOBJECTARBPROC) load(userptr, "glUseProgramObjectARB");
    glad_glValidateProgramARB = (PFNGLVALIDATEPROGRAMARBPROC) load(userptr, "glValidateProgramARB");
}
static void glad_gl_load_GL_ARB_shader_storage_buffer_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_shader_storage_buffer_object) return;
    glad_glShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC) load(userptr, "glShaderStorageBlockBinding");
}
static void glad_gl_load_GL_ARB_shader_subroutine( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_shader_subroutine) return;
    glad_glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC) load(userptr, "glGetActiveSubroutineName");
    glad_glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) load(userptr, "glGetActiveSubroutineUniformName");
    glad_glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) load(userptr, "glGetActiveSubroutineUniformiv");
    glad_glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC) load(userptr, "glGetProgramStageiv");
    glad_glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC) load(userptr, "glGetSubroutineIndex");
    glad_glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) load(userptr, "glGetSubroutineUniformLocation");
    glad_glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC) load(userptr, "glGetUniformSubroutineuiv");
    glad_glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC) load(userptr, "glUniformSubroutinesuiv");
}
static void glad_gl_load_GL_ARB_shading_language_include( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_shading_language_include) return;
    glad_glCompileShaderIncludeARB = (PFNGLCOMPILESHADERINCLUDEARBPROC) load(userptr, "glCompileShaderIncludeARB");
    glad_glDeleteNamedStringARB = (PFNGLDELETENAMEDSTRINGARBPROC) load(userptr, "glDeleteNamedStringARB");
    glad_glGetNamedStringARB = (PFNGLGETNAMEDSTRINGARBPROC) load(userptr, "glGetNamedStringARB");
    glad_glGetNamedStringivARB = (PFNGLGETNAMEDSTRINGIVARBPROC) load(userptr, "glGetNamedStringivARB");
    glad_glIsNamedStringARB = (PFNGLISNAMEDSTRINGARBPROC) load(userptr, "glIsNamedStringARB");
    glad_glNamedStringARB = (PFNGLNAMEDSTRINGARBPROC) load(userptr, "glNamedStringARB");
}
static void glad_gl_load_GL_ARB_sparse_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_sparse_buffer) return;
    glad_glBufferPageCommitmentARB = (PFNGLBUFFERPAGECOMMITMENTARBPROC) load(userptr, "glBufferPageCommitmentARB");
    glad_glNamedBufferPageCommitmentARB = (PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) load(userptr, "glNamedBufferPageCommitmentARB");
    glad_glNamedBufferPageCommitmentEXT = (PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) load(userptr, "glNamedBufferPageCommitmentEXT");
}
static void glad_gl_load_GL_ARB_sparse_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_sparse_texture) return;
    glad_glTexPageCommitmentARB = (PFNGLTEXPAGECOMMITMENTARBPROC) load(userptr, "glTexPageCommitmentARB");
}
static void glad_gl_load_GL_ARB_sync( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_sync) return;
    glad_glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC) load(userptr, "glClientWaitSync");
    glad_glDeleteSync = (PFNGLDELETESYNCPROC) load(userptr, "glDeleteSync");
    glad_glFenceSync = (PFNGLFENCESYNCPROC) load(userptr, "glFenceSync");
    glad_glGetInteger64v = (PFNGLGETINTEGER64VPROC) load(userptr, "glGetInteger64v");
    glad_glGetSynciv = (PFNGLGETSYNCIVPROC) load(userptr, "glGetSynciv");
    glad_glIsSync = (PFNGLISSYNCPROC) load(userptr, "glIsSync");
    glad_glWaitSync = (PFNGLWAITSYNCPROC) load(userptr, "glWaitSync");
}
static void glad_gl_load_GL_ARB_tessellation_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_tessellation_shader) return;
    glad_glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC) load(userptr, "glPatchParameterfv");
    glad_glPatchParameteri = (PFNGLPATCHPARAMETERIPROC) load(userptr, "glPatchParameteri");
}
static void glad_gl_load_GL_ARB_texture_barrier( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_texture_barrier) return;
    glad_glTextureBarrier = (PFNGLTEXTUREBARRIERPROC) load(userptr, "glTextureBarrier");
}
static void glad_gl_load_GL_ARB_texture_buffer_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_texture_buffer_object) return;
    glad_glTexBufferARB = (PFNGLTEXBUFFERARBPROC) load(userptr, "glTexBufferARB");
}
static void glad_gl_load_GL_ARB_texture_buffer_range( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_texture_buffer_range) return;
    glad_glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC) load(userptr, "glTexBufferRange");
}
static void glad_gl_load_GL_ARB_texture_compression( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_texture_compression) return;
    glad_glCompressedTexImage1DARB = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC) load(userptr, "glCompressedTexImage1DARB");
    glad_glCompressedTexImage2DARB = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC) load(userptr, "glCompressedTexImage2DARB");
    glad_glCompressedTexImage3DARB = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC) load(userptr, "glCompressedTexImage3DARB");
    glad_glCompressedTexSubImage1DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC) load(userptr, "glCompressedTexSubImage1DARB");
    glad_glCompressedTexSubImage2DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC) load(userptr, "glCompressedTexSubImage2DARB");
    glad_glCompressedTexSubImage3DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC) load(userptr, "glCompressedTexSubImage3DARB");
    glad_glGetCompressedTexImageARB = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC) load(userptr, "glGetCompressedTexImageARB");
}
static void glad_gl_load_GL_ARB_texture_multisample( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_texture_multisample) return;
    glad_glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC) load(userptr, "glGetMultisamplefv");
    glad_glSampleMaski = (PFNGLSAMPLEMASKIPROC) load(userptr, "glSampleMaski");
    glad_glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) load(userptr, "glTexImage2DMultisample");
    glad_glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) load(userptr, "glTexImage3DMultisample");
}
static void glad_gl_load_GL_ARB_texture_storage( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_texture_storage) return;
    glad_glTexStorage1D = (PFNGLTEXSTORAGE1DPROC) load(userptr, "glTexStorage1D");
    glad_glTexStorage2D = (PFNGLTEXSTORAGE2DPROC) load(userptr, "glTexStorage2D");
    glad_glTexStorage3D = (PFNGLTEXSTORAGE3DPROC) load(userptr, "glTexStorage3D");
}
static void glad_gl_load_GL_ARB_texture_storage_multisample( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_texture_storage_multisample) return;
    glad_glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) load(userptr, "glTexStorage2DMultisample");
    glad_glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) load(userptr, "glTexStorage3DMultisample");
}
static void glad_gl_load_GL_ARB_texture_view( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_texture_view) return;
    glad_glTextureView = (PFNGLTEXTUREVIEWPROC) load(userptr, "glTextureView");
}
static void glad_gl_load_GL_ARB_timer_query( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_timer_query) return;
    glad_glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC) load(userptr, "glGetQueryObjecti64v");
    glad_glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC) load(userptr, "glGetQueryObjectui64v");
    glad_glQueryCounter = (PFNGLQUERYCOUNTERPROC) load(userptr, "glQueryCounter");
}
static void glad_gl_load_GL_ARB_transform_feedback2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_transform_feedback2) return;
    glad_glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC) load(userptr, "glBindTransformFeedback");
    glad_glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC) load(userptr, "glDeleteTransformFeedbacks");
    glad_glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC) load(userptr, "glDrawTransformFeedback");
    glad_glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC) load(userptr, "glGenTransformFeedbacks");
    glad_glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC) load(userptr, "glIsTransformFeedback");
    glad_glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC) load(userptr, "glPauseTransformFeedback");
    glad_glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC) load(userptr, "glResumeTransformFeedback");
}
static void glad_gl_load_GL_ARB_transform_feedback3( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_transform_feedback3) return;
    glad_glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC) load(userptr, "glBeginQueryIndexed");
    glad_glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) load(userptr, "glDrawTransformFeedbackStream");
    glad_glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC) load(userptr, "glEndQueryIndexed");
    glad_glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC) load(userptr, "glGetQueryIndexediv");
}
static void glad_gl_load_GL_ARB_transform_feedback_instanced( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_transform_feedback_instanced) return;
    glad_glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) load(userptr, "glDrawTransformFeedbackInstanced");
    glad_glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) load(userptr, "glDrawTransformFeedbackStreamInstanced");
}
static void glad_gl_load_GL_ARB_transpose_matrix( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_transpose_matrix) return;
    glad_glLoadTransposeMatrixdARB = (PFNGLLOADTRANSPOSEMATRIXDARBPROC) load(userptr, "glLoadTransposeMatrixdARB");
    glad_glLoadTransposeMatrixfARB = (PFNGLLOADTRANSPOSEMATRIXFARBPROC) load(userptr, "glLoadTransposeMatrixfARB");
    glad_glMultTransposeMatrixdARB = (PFNGLMULTTRANSPOSEMATRIXDARBPROC) load(userptr, "glMultTransposeMatrixdARB");
    glad_glMultTransposeMatrixfARB = (PFNGLMULTTRANSPOSEMATRIXFARBPROC) load(userptr, "glMultTransposeMatrixfARB");
}
static void glad_gl_load_GL_ARB_uniform_buffer_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_uniform_buffer_object) return;
    glad_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) load(userptr, "glBindBufferBase");
    glad_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) load(userptr, "glBindBufferRange");
    glad_glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) load(userptr, "glGetActiveUniformBlockName");
    glad_glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) load(userptr, "glGetActiveUniformBlockiv");
    glad_glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC) load(userptr, "glGetActiveUniformName");
    glad_glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC) load(userptr, "glGetActiveUniformsiv");
    glad_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) load(userptr, "glGetIntegeri_v");
    glad_glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC) load(userptr, "glGetUniformBlockIndex");
    glad_glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC) load(userptr, "glGetUniformIndices");
    glad_glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC) load(userptr, "glUniformBlockBinding");
}
static void glad_gl_load_GL_ARB_vertex_array_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_vertex_array_object) return;
    glad_glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC) load(userptr, "glBindVertexArray");
    glad_glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) load(userptr, "glDeleteVertexArrays");
    glad_glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) load(userptr, "glGenVertexArrays");
    glad_glIsVertexArray = (PFNGLISVERTEXARRAYPROC) load(userptr, "glIsVertexArray");
}
static void glad_gl_load_GL_ARB_vertex_attrib_64bit( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_vertex_attrib_64bit) return;
    glad_glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC) load(userptr, "glGetVertexAttribLdv");
    glad_glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC) load(userptr, "glVertexAttribL1d");
    glad_glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC) load(userptr, "glVertexAttribL1dv");
    glad_glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC) load(userptr, "glVertexAttribL2d");
    glad_glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC) load(userptr, "glVertexAttribL2dv");
    glad_glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC) load(userptr, "glVertexAttribL3d");
    glad_glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC) load(userptr, "glVertexAttribL3dv");
    glad_glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC) load(userptr, "glVertexAttribL4d");
    glad_glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC) load(userptr, "glVertexAttribL4dv");
    glad_glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC) load(userptr, "glVertexAttribLPointer");
}
static void glad_gl_load_GL_ARB_vertex_attrib_binding( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_vertex_attrib_binding) return;
    glad_glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC) load(userptr, "glBindVertexBuffer");
    glad_glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC) load(userptr, "glVertexAttribBinding");
    glad_glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC) load(userptr, "glVertexAttribFormat");
    glad_glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC) load(userptr, "glVertexAttribIFormat");
    glad_glVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC) load(userptr, "glVertexAttribLFormat");
    glad_glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC) load(userptr, "glVertexBindingDivisor");
}
static void glad_gl_load_GL_ARB_vertex_blend( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_vertex_blend) return;
    glad_glVertexBlendARB = (PFNGLVERTEXBLENDARBPROC) load(userptr, "glVertexBlendARB");
    glad_glWeightPointerARB = (PFNGLWEIGHTPOINTERARBPROC) load(userptr, "glWeightPointerARB");
    glad_glWeightbvARB = (PFNGLWEIGHTBVARBPROC) load(userptr, "glWeightbvARB");
    glad_glWeightdvARB = (PFNGLWEIGHTDVARBPROC) load(userptr, "glWeightdvARB");
    glad_glWeightfvARB = (PFNGLWEIGHTFVARBPROC) load(userptr, "glWeightfvARB");
    glad_glWeightivARB = (PFNGLWEIGHTIVARBPROC) load(userptr, "glWeightivARB");
    glad_glWeightsvARB = (PFNGLWEIGHTSVARBPROC) load(userptr, "glWeightsvARB");
    glad_glWeightubvARB = (PFNGLWEIGHTUBVARBPROC) load(userptr, "glWeightubvARB");
    glad_glWeightuivARB = (PFNGLWEIGHTUIVARBPROC) load(userptr, "glWeightuivARB");
    glad_glWeightusvARB = (PFNGLWEIGHTUSVARBPROC) load(userptr, "glWeightusvARB");
}
static void glad_gl_load_GL_ARB_vertex_buffer_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_vertex_buffer_object) return;
    glad_glBindBufferARB = (PFNGLBINDBUFFERARBPROC) load(userptr, "glBindBufferARB");
    glad_glBufferDataARB = (PFNGLBUFFERDATAARBPROC) load(userptr, "glBufferDataARB");
    glad_glBufferSubDataARB = (PFNGLBUFFERSUBDATAARBPROC) load(userptr, "glBufferSubDataARB");
    glad_glDeleteBuffersARB = (PFNGLDELETEBUFFERSARBPROC) load(userptr, "glDeleteBuffersARB");
    glad_glGenBuffersARB = (PFNGLGENBUFFERSARBPROC) load(userptr, "glGenBuffersARB");
    glad_glGetBufferParameterivARB = (PFNGLGETBUFFERPARAMETERIVARBPROC) load(userptr, "glGetBufferParameterivARB");
    glad_glGetBufferPointervARB = (PFNGLGETBUFFERPOINTERVARBPROC) load(userptr, "glGetBufferPointervARB");
    glad_glGetBufferSubDataARB = (PFNGLGETBUFFERSUBDATAARBPROC) load(userptr, "glGetBufferSubDataARB");
    glad_glIsBufferARB = (PFNGLISBUFFERARBPROC) load(userptr, "glIsBufferARB");
    glad_glMapBufferARB = (PFNGLMAPBUFFERARBPROC) load(userptr, "glMapBufferARB");
    glad_glUnmapBufferARB = (PFNGLUNMAPBUFFERARBPROC) load(userptr, "glUnmapBufferARB");
}
static void glad_gl_load_GL_ARB_vertex_program( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_vertex_program) return;
    glad_glBindProgramARB = (PFNGLBINDPROGRAMARBPROC) load(userptr, "glBindProgramARB");
    glad_glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC) load(userptr, "glDeleteProgramsARB");
    glad_glDisableVertexAttribArrayARB = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC) load(userptr, "glDisableVertexAttribArrayARB");
    glad_glEnableVertexAttribArrayARB = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC) load(userptr, "glEnableVertexAttribArrayARB");
    glad_glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC) load(userptr, "glGenProgramsARB");
    glad_glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC) load(userptr, "glGetProgramEnvParameterdvARB");
    glad_glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC) load(userptr, "glGetProgramEnvParameterfvARB");
    glad_glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC) load(userptr, "glGetProgramLocalParameterdvARB");
    glad_glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC) load(userptr, "glGetProgramLocalParameterfvARB");
    glad_glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC) load(userptr, "glGetProgramStringARB");
    glad_glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC) load(userptr, "glGetProgramivARB");
    glad_glGetVertexAttribPointervARB = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC) load(userptr, "glGetVertexAttribPointervARB");
    glad_glGetVertexAttribdvARB = (PFNGLGETVERTEXATTRIBDVARBPROC) load(userptr, "glGetVertexAttribdvARB");
    glad_glGetVertexAttribfvARB = (PFNGLGETVERTEXATTRIBFVARBPROC) load(userptr, "glGetVertexAttribfvARB");
    glad_glGetVertexAttribivARB = (PFNGLGETVERTEXATTRIBIVARBPROC) load(userptr, "glGetVertexAttribivARB");
    glad_glIsProgramARB = (PFNGLISPROGRAMARBPROC) load(userptr, "glIsProgramARB");
    glad_glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC) load(userptr, "glProgramEnvParameter4dARB");
    glad_glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC) load(userptr, "glProgramEnvParameter4dvARB");
    glad_glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC) load(userptr, "glProgramEnvParameter4fARB");
    glad_glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC) load(userptr, "glProgramEnvParameter4fvARB");
    glad_glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC) load(userptr, "glProgramLocalParameter4dARB");
    glad_glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC) load(userptr, "glProgramLocalParameter4dvARB");
    glad_glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC) load(userptr, "glProgramLocalParameter4fARB");
    glad_glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC) load(userptr, "glProgramLocalParameter4fvARB");
    glad_glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC) load(userptr, "glProgramStringARB");
    glad_glVertexAttrib1dARB = (PFNGLVERTEXATTRIB1DARBPROC) load(userptr, "glVertexAttrib1dARB");
    glad_glVertexAttrib1dvARB = (PFNGLVERTEXATTRIB1DVARBPROC) load(userptr, "glVertexAttrib1dvARB");
    glad_glVertexAttrib1fARB = (PFNGLVERTEXATTRIB1FARBPROC) load(userptr, "glVertexAttrib1fARB");
    glad_glVertexAttrib1fvARB = (PFNGLVERTEXATTRIB1FVARBPROC) load(userptr, "glVertexAttrib1fvARB");
    glad_glVertexAttrib1sARB = (PFNGLVERTEXATTRIB1SARBPROC) load(userptr, "glVertexAttrib1sARB");
    glad_glVertexAttrib1svARB = (PFNGLVERTEXATTRIB1SVARBPROC) load(userptr, "glVertexAttrib1svARB");
    glad_glVertexAttrib2dARB = (PFNGLVERTEXATTRIB2DARBPROC) load(userptr, "glVertexAttrib2dARB");
    glad_glVertexAttrib2dvARB = (PFNGLVERTEXATTRIB2DVARBPROC) load(userptr, "glVertexAttrib2dvARB");
    glad_glVertexAttrib2fARB = (PFNGLVERTEXATTRIB2FARBPROC) load(userptr, "glVertexAttrib2fARB");
    glad_glVertexAttrib2fvARB = (PFNGLVERTEXATTRIB2FVARBPROC) load(userptr, "glVertexAttrib2fvARB");
    glad_glVertexAttrib2sARB = (PFNGLVERTEXATTRIB2SARBPROC) load(userptr, "glVertexAttrib2sARB");
    glad_glVertexAttrib2svARB = (PFNGLVERTEXATTRIB2SVARBPROC) load(userptr, "glVertexAttrib2svARB");
    glad_glVertexAttrib3dARB = (PFNGLVERTEXATTRIB3DARBPROC) load(userptr, "glVertexAttrib3dARB");
    glad_glVertexAttrib3dvARB = (PFNGLVERTEXATTRIB3DVARBPROC) load(userptr, "glVertexAttrib3dvARB");
    glad_glVertexAttrib3fARB = (PFNGLVERTEXATTRIB3FARBPROC) load(userptr, "glVertexAttrib3fARB");
    glad_glVertexAttrib3fvARB = (PFNGLVERTEXATTRIB3FVARBPROC) load(userptr, "glVertexAttrib3fvARB");
    glad_glVertexAttrib3sARB = (PFNGLVERTEXATTRIB3SARBPROC) load(userptr, "glVertexAttrib3sARB");
    glad_glVertexAttrib3svARB = (PFNGLVERTEXATTRIB3SVARBPROC) load(userptr, "glVertexAttrib3svARB");
    glad_glVertexAttrib4NbvARB = (PFNGLVERTEXATTRIB4NBVARBPROC) load(userptr, "glVertexAttrib4NbvARB");
    glad_glVertexAttrib4NivARB = (PFNGLVERTEXATTRIB4NIVARBPROC) load(userptr, "glVertexAttrib4NivARB");
    glad_glVertexAttrib4NsvARB = (PFNGLVERTEXATTRIB4NSVARBPROC) load(userptr, "glVertexAttrib4NsvARB");
    glad_glVertexAttrib4NubARB = (PFNGLVERTEXATTRIB4NUBARBPROC) load(userptr, "glVertexAttrib4NubARB");
    glad_glVertexAttrib4NubvARB = (PFNGLVERTEXATTRIB4NUBVARBPROC) load(userptr, "glVertexAttrib4NubvARB");
    glad_glVertexAttrib4NuivARB = (PFNGLVERTEXATTRIB4NUIVARBPROC) load(userptr, "glVertexAttrib4NuivARB");
    glad_glVertexAttrib4NusvARB = (PFNGLVERTEXATTRIB4NUSVARBPROC) load(userptr, "glVertexAttrib4NusvARB");
    glad_glVertexAttrib4bvARB = (PFNGLVERTEXATTRIB4BVARBPROC) load(userptr, "glVertexAttrib4bvARB");
    glad_glVertexAttrib4dARB = (PFNGLVERTEXATTRIB4DARBPROC) load(userptr, "glVertexAttrib4dARB");
    glad_glVertexAttrib4dvARB = (PFNGLVERTEXATTRIB4DVARBPROC) load(userptr, "glVertexAttrib4dvARB");
    glad_glVertexAttrib4fARB = (PFNGLVERTEXATTRIB4FARBPROC) load(userptr, "glVertexAttrib4fARB");
    glad_glVertexAttrib4fvARB = (PFNGLVERTEXATTRIB4FVARBPROC) load(userptr, "glVertexAttrib4fvARB");
    glad_glVertexAttrib4ivARB = (PFNGLVERTEXATTRIB4IVARBPROC) load(userptr, "glVertexAttrib4ivARB");
    glad_glVertexAttrib4sARB = (PFNGLVERTEXATTRIB4SARBPROC) load(userptr, "glVertexAttrib4sARB");
    glad_glVertexAttrib4svARB = (PFNGLVERTEXATTRIB4SVARBPROC) load(userptr, "glVertexAttrib4svARB");
    glad_glVertexAttrib4ubvARB = (PFNGLVERTEXATTRIB4UBVARBPROC) load(userptr, "glVertexAttrib4ubvARB");
    glad_glVertexAttrib4uivARB = (PFNGLVERTEXATTRIB4UIVARBPROC) load(userptr, "glVertexAttrib4uivARB");
    glad_glVertexAttrib4usvARB = (PFNGLVERTEXATTRIB4USVARBPROC) load(userptr, "glVertexAttrib4usvARB");
    glad_glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC) load(userptr, "glVertexAttribPointerARB");
}
static void glad_gl_load_GL_ARB_vertex_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_vertex_shader) return;
    glad_glBindAttribLocationARB = (PFNGLBINDATTRIBLOCATIONARBPROC) load(userptr, "glBindAttribLocationARB");
    glad_glDisableVertexAttribArrayARB = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC) load(userptr, "glDisableVertexAttribArrayARB");
    glad_glEnableVertexAttribArrayARB = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC) load(userptr, "glEnableVertexAttribArrayARB");
    glad_glGetActiveAttribARB = (PFNGLGETACTIVEATTRIBARBPROC) load(userptr, "glGetActiveAttribARB");
    glad_glGetAttribLocationARB = (PFNGLGETATTRIBLOCATIONARBPROC) load(userptr, "glGetAttribLocationARB");
    glad_glGetVertexAttribPointervARB = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC) load(userptr, "glGetVertexAttribPointervARB");
    glad_glGetVertexAttribdvARB = (PFNGLGETVERTEXATTRIBDVARBPROC) load(userptr, "glGetVertexAttribdvARB");
    glad_glGetVertexAttribfvARB = (PFNGLGETVERTEXATTRIBFVARBPROC) load(userptr, "glGetVertexAttribfvARB");
    glad_glGetVertexAttribivARB = (PFNGLGETVERTEXATTRIBIVARBPROC) load(userptr, "glGetVertexAttribivARB");
    glad_glVertexAttrib1dARB = (PFNGLVERTEXATTRIB1DARBPROC) load(userptr, "glVertexAttrib1dARB");
    glad_glVertexAttrib1dvARB = (PFNGLVERTEXATTRIB1DVARBPROC) load(userptr, "glVertexAttrib1dvARB");
    glad_glVertexAttrib1fARB = (PFNGLVERTEXATTRIB1FARBPROC) load(userptr, "glVertexAttrib1fARB");
    glad_glVertexAttrib1fvARB = (PFNGLVERTEXATTRIB1FVARBPROC) load(userptr, "glVertexAttrib1fvARB");
    glad_glVertexAttrib1sARB = (PFNGLVERTEXATTRIB1SARBPROC) load(userptr, "glVertexAttrib1sARB");
    glad_glVertexAttrib1svARB = (PFNGLVERTEXATTRIB1SVARBPROC) load(userptr, "glVertexAttrib1svARB");
    glad_glVertexAttrib2dARB = (PFNGLVERTEXATTRIB2DARBPROC) load(userptr, "glVertexAttrib2dARB");
    glad_glVertexAttrib2dvARB = (PFNGLVERTEXATTRIB2DVARBPROC) load(userptr, "glVertexAttrib2dvARB");
    glad_glVertexAttrib2fARB = (PFNGLVERTEXATTRIB2FARBPROC) load(userptr, "glVertexAttrib2fARB");
    glad_glVertexAttrib2fvARB = (PFNGLVERTEXATTRIB2FVARBPROC) load(userptr, "glVertexAttrib2fvARB");
    glad_glVertexAttrib2sARB = (PFNGLVERTEXATTRIB2SARBPROC) load(userptr, "glVertexAttrib2sARB");
    glad_glVertexAttrib2svARB = (PFNGLVERTEXATTRIB2SVARBPROC) load(userptr, "glVertexAttrib2svARB");
    glad_glVertexAttrib3dARB = (PFNGLVERTEXATTRIB3DARBPROC) load(userptr, "glVertexAttrib3dARB");
    glad_glVertexAttrib3dvARB = (PFNGLVERTEXATTRIB3DVARBPROC) load(userptr, "glVertexAttrib3dvARB");
    glad_glVertexAttrib3fARB = (PFNGLVERTEXATTRIB3FARBPROC) load(userptr, "glVertexAttrib3fARB");
    glad_glVertexAttrib3fvARB = (PFNGLVERTEXATTRIB3FVARBPROC) load(userptr, "glVertexAttrib3fvARB");
    glad_glVertexAttrib3sARB = (PFNGLVERTEXATTRIB3SARBPROC) load(userptr, "glVertexAttrib3sARB");
    glad_glVertexAttrib3svARB = (PFNGLVERTEXATTRIB3SVARBPROC) load(userptr, "glVertexAttrib3svARB");
    glad_glVertexAttrib4NbvARB = (PFNGLVERTEXATTRIB4NBVARBPROC) load(userptr, "glVertexAttrib4NbvARB");
    glad_glVertexAttrib4NivARB = (PFNGLVERTEXATTRIB4NIVARBPROC) load(userptr, "glVertexAttrib4NivARB");
    glad_glVertexAttrib4NsvARB = (PFNGLVERTEXATTRIB4NSVARBPROC) load(userptr, "glVertexAttrib4NsvARB");
    glad_glVertexAttrib4NubARB = (PFNGLVERTEXATTRIB4NUBARBPROC) load(userptr, "glVertexAttrib4NubARB");
    glad_glVertexAttrib4NubvARB = (PFNGLVERTEXATTRIB4NUBVARBPROC) load(userptr, "glVertexAttrib4NubvARB");
    glad_glVertexAttrib4NuivARB = (PFNGLVERTEXATTRIB4NUIVARBPROC) load(userptr, "glVertexAttrib4NuivARB");
    glad_glVertexAttrib4NusvARB = (PFNGLVERTEXATTRIB4NUSVARBPROC) load(userptr, "glVertexAttrib4NusvARB");
    glad_glVertexAttrib4bvARB = (PFNGLVERTEXATTRIB4BVARBPROC) load(userptr, "glVertexAttrib4bvARB");
    glad_glVertexAttrib4dARB = (PFNGLVERTEXATTRIB4DARBPROC) load(userptr, "glVertexAttrib4dARB");
    glad_glVertexAttrib4dvARB = (PFNGLVERTEXATTRIB4DVARBPROC) load(userptr, "glVertexAttrib4dvARB");
    glad_glVertexAttrib4fARB = (PFNGLVERTEXATTRIB4FARBPROC) load(userptr, "glVertexAttrib4fARB");
    glad_glVertexAttrib4fvARB = (PFNGLVERTEXATTRIB4FVARBPROC) load(userptr, "glVertexAttrib4fvARB");
    glad_glVertexAttrib4ivARB = (PFNGLVERTEXATTRIB4IVARBPROC) load(userptr, "glVertexAttrib4ivARB");
    glad_glVertexAttrib4sARB = (PFNGLVERTEXATTRIB4SARBPROC) load(userptr, "glVertexAttrib4sARB");
    glad_glVertexAttrib4svARB = (PFNGLVERTEXATTRIB4SVARBPROC) load(userptr, "glVertexAttrib4svARB");
    glad_glVertexAttrib4ubvARB = (PFNGLVERTEXATTRIB4UBVARBPROC) load(userptr, "glVertexAttrib4ubvARB");
    glad_glVertexAttrib4uivARB = (PFNGLVERTEXATTRIB4UIVARBPROC) load(userptr, "glVertexAttrib4uivARB");
    glad_glVertexAttrib4usvARB = (PFNGLVERTEXATTRIB4USVARBPROC) load(userptr, "glVertexAttrib4usvARB");
    glad_glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC) load(userptr, "glVertexAttribPointerARB");
}
static void glad_gl_load_GL_ARB_vertex_type_2_10_10_10_rev( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_vertex_type_2_10_10_10_rev) return;
    glad_glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC) load(userptr, "glVertexAttribP1ui");
    glad_glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC) load(userptr, "glVertexAttribP1uiv");
    glad_glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC) load(userptr, "glVertexAttribP2ui");
    glad_glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC) load(userptr, "glVertexAttribP2uiv");
    glad_glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC) load(userptr, "glVertexAttribP3ui");
    glad_glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC) load(userptr, "glVertexAttribP3uiv");
    glad_glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC) load(userptr, "glVertexAttribP4ui");
    glad_glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC) load(userptr, "glVertexAttribP4uiv");
}
static void glad_gl_load_GL_ARB_viewport_array( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_viewport_array) return;
    glad_glDepthRangeArraydvNV = (PFNGLDEPTHRANGEARRAYDVNVPROC) load(userptr, "glDepthRangeArraydvNV");
    glad_glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC) load(userptr, "glDepthRangeArrayv");
    glad_glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC) load(userptr, "glDepthRangeIndexed");
    glad_glDepthRangeIndexeddNV = (PFNGLDEPTHRANGEINDEXEDDNVPROC) load(userptr, "glDepthRangeIndexeddNV");
    glad_glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC) load(userptr, "glGetDoublei_v");
    glad_glGetFloati_v = (PFNGLGETFLOATI_VPROC) load(userptr, "glGetFloati_v");
    glad_glScissorArrayv = (PFNGLSCISSORARRAYVPROC) load(userptr, "glScissorArrayv");
    glad_glScissorIndexed = (PFNGLSCISSORINDEXEDPROC) load(userptr, "glScissorIndexed");
    glad_glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC) load(userptr, "glScissorIndexedv");
    glad_glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC) load(userptr, "glViewportArrayv");
    glad_glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC) load(userptr, "glViewportIndexedf");
    glad_glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC) load(userptr, "glViewportIndexedfv");
}
static void glad_gl_load_GL_ARB_window_pos( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ARB_window_pos) return;
    glad_glWindowPos2dARB = (PFNGLWINDOWPOS2DARBPROC) load(userptr, "glWindowPos2dARB");
    glad_glWindowPos2dvARB = (PFNGLWINDOWPOS2DVARBPROC) load(userptr, "glWindowPos2dvARB");
    glad_glWindowPos2fARB = (PFNGLWINDOWPOS2FARBPROC) load(userptr, "glWindowPos2fARB");
    glad_glWindowPos2fvARB = (PFNGLWINDOWPOS2FVARBPROC) load(userptr, "glWindowPos2fvARB");
    glad_glWindowPos2iARB = (PFNGLWINDOWPOS2IARBPROC) load(userptr, "glWindowPos2iARB");
    glad_glWindowPos2ivARB = (PFNGLWINDOWPOS2IVARBPROC) load(userptr, "glWindowPos2ivARB");
    glad_glWindowPos2sARB = (PFNGLWINDOWPOS2SARBPROC) load(userptr, "glWindowPos2sARB");
    glad_glWindowPos2svARB = (PFNGLWINDOWPOS2SVARBPROC) load(userptr, "glWindowPos2svARB");
    glad_glWindowPos3dARB = (PFNGLWINDOWPOS3DARBPROC) load(userptr, "glWindowPos3dARB");
    glad_glWindowPos3dvARB = (PFNGLWINDOWPOS3DVARBPROC) load(userptr, "glWindowPos3dvARB");
    glad_glWindowPos3fARB = (PFNGLWINDOWPOS3FARBPROC) load(userptr, "glWindowPos3fARB");
    glad_glWindowPos3fvARB = (PFNGLWINDOWPOS3FVARBPROC) load(userptr, "glWindowPos3fvARB");
    glad_glWindowPos3iARB = (PFNGLWINDOWPOS3IARBPROC) load(userptr, "glWindowPos3iARB");
    glad_glWindowPos3ivARB = (PFNGLWINDOWPOS3IVARBPROC) load(userptr, "glWindowPos3ivARB");
    glad_glWindowPos3sARB = (PFNGLWINDOWPOS3SARBPROC) load(userptr, "glWindowPos3sARB");
    glad_glWindowPos3svARB = (PFNGLWINDOWPOS3SVARBPROC) load(userptr, "glWindowPos3svARB");
}
static void glad_gl_load_GL_EXT_EGL_image_storage( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_EGL_image_storage) return;
    glad_glEGLImageTargetTexStorageEXT = (PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) load(userptr, "glEGLImageTargetTexStorageEXT");
    glad_glEGLImageTargetTextureStorageEXT = (PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) load(userptr, "glEGLImageTargetTextureStorageEXT");
}
static void glad_gl_load_GL_EXT_bindable_uniform( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_bindable_uniform) return;
    glad_glGetUniformBufferSizeEXT = (PFNGLGETUNIFORMBUFFERSIZEEXTPROC) load(userptr, "glGetUniformBufferSizeEXT");
    glad_glGetUniformOffsetEXT = (PFNGLGETUNIFORMOFFSETEXTPROC) load(userptr, "glGetUniformOffsetEXT");
    glad_glUniformBufferEXT = (PFNGLUNIFORMBUFFEREXTPROC) load(userptr, "glUniformBufferEXT");
}
static void glad_gl_load_GL_EXT_blend_color( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_blend_color) return;
    glad_glBlendColorEXT = (PFNGLBLENDCOLOREXTPROC) load(userptr, "glBlendColorEXT");
}
static void glad_gl_load_GL_EXT_blend_equation_separate( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_blend_equation_separate) return;
    glad_glBlendEquationSeparateEXT = (PFNGLBLENDEQUATIONSEPARATEEXTPROC) load(userptr, "glBlendEquationSeparateEXT");
}
static void glad_gl_load_GL_EXT_blend_func_separate( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_blend_func_separate) return;
    glad_glBlendFuncSeparateEXT = (PFNGLBLENDFUNCSEPARATEEXTPROC) load(userptr, "glBlendFuncSeparateEXT");
}
static void glad_gl_load_GL_EXT_blend_minmax( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_blend_minmax) return;
    glad_glBlendEquationEXT = (PFNGLBLENDEQUATIONEXTPROC) load(userptr, "glBlendEquationEXT");
}
static void glad_gl_load_GL_EXT_color_subtable( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_color_subtable) return;
    glad_glColorSubTableEXT = (PFNGLCOLORSUBTABLEEXTPROC) load(userptr, "glColorSubTableEXT");
    glad_glCopyColorSubTableEXT = (PFNGLCOPYCOLORSUBTABLEEXTPROC) load(userptr, "glCopyColorSubTableEXT");
}
static void glad_gl_load_GL_EXT_compiled_vertex_array( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_compiled_vertex_array) return;
    glad_glLockArraysEXT = (PFNGLLOCKARRAYSEXTPROC) load(userptr, "glLockArraysEXT");
    glad_glUnlockArraysEXT = (PFNGLUNLOCKARRAYSEXTPROC) load(userptr, "glUnlockArraysEXT");
}
static void glad_gl_load_GL_EXT_convolution( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_convolution) return;
    glad_glConvolutionFilter1DEXT = (PFNGLCONVOLUTIONFILTER1DEXTPROC) load(userptr, "glConvolutionFilter1DEXT");
    glad_glConvolutionFilter2DEXT = (PFNGLCONVOLUTIONFILTER2DEXTPROC) load(userptr, "glConvolutionFilter2DEXT");
    glad_glConvolutionParameterfEXT = (PFNGLCONVOLUTIONPARAMETERFEXTPROC) load(userptr, "glConvolutionParameterfEXT");
    glad_glConvolutionParameterfvEXT = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC) load(userptr, "glConvolutionParameterfvEXT");
    glad_glConvolutionParameteriEXT = (PFNGLCONVOLUTIONPARAMETERIEXTPROC) load(userptr, "glConvolutionParameteriEXT");
    glad_glConvolutionParameterivEXT = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC) load(userptr, "glConvolutionParameterivEXT");
    glad_glCopyConvolutionFilter1DEXT = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC) load(userptr, "glCopyConvolutionFilter1DEXT");
    glad_glCopyConvolutionFilter2DEXT = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC) load(userptr, "glCopyConvolutionFilter2DEXT");
    glad_glGetConvolutionFilterEXT = (PFNGLGETCONVOLUTIONFILTEREXTPROC) load(userptr, "glGetConvolutionFilterEXT");
    glad_glGetConvolutionParameterfvEXT = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC) load(userptr, "glGetConvolutionParameterfvEXT");
    glad_glGetConvolutionParameterivEXT = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC) load(userptr, "glGetConvolutionParameterivEXT");
    glad_glGetSeparableFilterEXT = (PFNGLGETSEPARABLEFILTEREXTPROC) load(userptr, "glGetSeparableFilterEXT");
    glad_glSeparableFilter2DEXT = (PFNGLSEPARABLEFILTER2DEXTPROC) load(userptr, "glSeparableFilter2DEXT");
}
static void glad_gl_load_GL_EXT_coordinate_frame( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_coordinate_frame) return;
    glad_glBinormal3bEXT = (PFNGLBINORMAL3BEXTPROC) load(userptr, "glBinormal3bEXT");
    glad_glBinormal3bvEXT = (PFNGLBINORMAL3BVEXTPROC) load(userptr, "glBinormal3bvEXT");
    glad_glBinormal3dEXT = (PFNGLBINORMAL3DEXTPROC) load(userptr, "glBinormal3dEXT");
    glad_glBinormal3dvEXT = (PFNGLBINORMAL3DVEXTPROC) load(userptr, "glBinormal3dvEXT");
    glad_glBinormal3fEXT = (PFNGLBINORMAL3FEXTPROC) load(userptr, "glBinormal3fEXT");
    glad_glBinormal3fvEXT = (PFNGLBINORMAL3FVEXTPROC) load(userptr, "glBinormal3fvEXT");
    glad_glBinormal3iEXT = (PFNGLBINORMAL3IEXTPROC) load(userptr, "glBinormal3iEXT");
    glad_glBinormal3ivEXT = (PFNGLBINORMAL3IVEXTPROC) load(userptr, "glBinormal3ivEXT");
    glad_glBinormal3sEXT = (PFNGLBINORMAL3SEXTPROC) load(userptr, "glBinormal3sEXT");
    glad_glBinormal3svEXT = (PFNGLBINORMAL3SVEXTPROC) load(userptr, "glBinormal3svEXT");
    glad_glBinormalPointerEXT = (PFNGLBINORMALPOINTEREXTPROC) load(userptr, "glBinormalPointerEXT");
    glad_glTangent3bEXT = (PFNGLTANGENT3BEXTPROC) load(userptr, "glTangent3bEXT");
    glad_glTangent3bvEXT = (PFNGLTANGENT3BVEXTPROC) load(userptr, "glTangent3bvEXT");
    glad_glTangent3dEXT = (PFNGLTANGENT3DEXTPROC) load(userptr, "glTangent3dEXT");
    glad_glTangent3dvEXT = (PFNGLTANGENT3DVEXTPROC) load(userptr, "glTangent3dvEXT");
    glad_glTangent3fEXT = (PFNGLTANGENT3FEXTPROC) load(userptr, "glTangent3fEXT");
    glad_glTangent3fvEXT = (PFNGLTANGENT3FVEXTPROC) load(userptr, "glTangent3fvEXT");
    glad_glTangent3iEXT = (PFNGLTANGENT3IEXTPROC) load(userptr, "glTangent3iEXT");
    glad_glTangent3ivEXT = (PFNGLTANGENT3IVEXTPROC) load(userptr, "glTangent3ivEXT");
    glad_glTangent3sEXT = (PFNGLTANGENT3SEXTPROC) load(userptr, "glTangent3sEXT");
    glad_glTangent3svEXT = (PFNGLTANGENT3SVEXTPROC) load(userptr, "glTangent3svEXT");
    glad_glTangentPointerEXT = (PFNGLTANGENTPOINTEREXTPROC) load(userptr, "glTangentPointerEXT");
}
static void glad_gl_load_GL_EXT_copy_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_copy_texture) return;
    glad_glCopyTexImage1DEXT = (PFNGLCOPYTEXIMAGE1DEXTPROC) load(userptr, "glCopyTexImage1DEXT");
    glad_glCopyTexImage2DEXT = (PFNGLCOPYTEXIMAGE2DEXTPROC) load(userptr, "glCopyTexImage2DEXT");
    glad_glCopyTexSubImage1DEXT = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC) load(userptr, "glCopyTexSubImage1DEXT");
    glad_glCopyTexSubImage2DEXT = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC) load(userptr, "glCopyTexSubImage2DEXT");
    glad_glCopyTexSubImage3DEXT = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC) load(userptr, "glCopyTexSubImage3DEXT");
}
static void glad_gl_load_GL_EXT_cull_vertex( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_cull_vertex) return;
    glad_glCullParameterdvEXT = (PFNGLCULLPARAMETERDVEXTPROC) load(userptr, "glCullParameterdvEXT");
    glad_glCullParameterfvEXT = (PFNGLCULLPARAMETERFVEXTPROC) load(userptr, "glCullParameterfvEXT");
}
static void glad_gl_load_GL_EXT_debug_label( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_debug_label) return;
    glad_glGetObjectLabelEXT = (PFNGLGETOBJECTLABELEXTPROC) load(userptr, "glGetObjectLabelEXT");
    glad_glLabelObjectEXT = (PFNGLLABELOBJECTEXTPROC) load(userptr, "glLabelObjectEXT");
}
static void glad_gl_load_GL_EXT_debug_marker( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_debug_marker) return;
    glad_glInsertEventMarkerEXT = (PFNGLINSERTEVENTMARKEREXTPROC) load(userptr, "glInsertEventMarkerEXT");
    glad_glPopGroupMarkerEXT = (PFNGLPOPGROUPMARKEREXTPROC) load(userptr, "glPopGroupMarkerEXT");
    glad_glPushGroupMarkerEXT = (PFNGLPUSHGROUPMARKEREXTPROC) load(userptr, "glPushGroupMarkerEXT");
}
static void glad_gl_load_GL_EXT_depth_bounds_test( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_depth_bounds_test) return;
    glad_glDepthBoundsEXT = (PFNGLDEPTHBOUNDSEXTPROC) load(userptr, "glDepthBoundsEXT");
}
static void glad_gl_load_GL_EXT_direct_state_access( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_direct_state_access) return;
    glad_glBindMultiTextureEXT = (PFNGLBINDMULTITEXTUREEXTPROC) load(userptr, "glBindMultiTextureEXT");
    glad_glCheckNamedFramebufferStatusEXT = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC) load(userptr, "glCheckNamedFramebufferStatusEXT");
    glad_glClearNamedBufferDataEXT = (PFNGLCLEARNAMEDBUFFERDATAEXTPROC) load(userptr, "glClearNamedBufferDataEXT");
    glad_glClearNamedBufferSubDataEXT = (PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC) load(userptr, "glClearNamedBufferSubDataEXT");
    glad_glClientAttribDefaultEXT = (PFNGLCLIENTATTRIBDEFAULTEXTPROC) load(userptr, "glClientAttribDefaultEXT");
    glad_glCompressedMultiTexImage1DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC) load(userptr, "glCompressedMultiTexImage1DEXT");
    glad_glCompressedMultiTexImage2DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC) load(userptr, "glCompressedMultiTexImage2DEXT");
    glad_glCompressedMultiTexImage3DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC) load(userptr, "glCompressedMultiTexImage3DEXT");
    glad_glCompressedMultiTexSubImage1DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC) load(userptr, "glCompressedMultiTexSubImage1DEXT");
    glad_glCompressedMultiTexSubImage2DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC) load(userptr, "glCompressedMultiTexSubImage2DEXT");
    glad_glCompressedMultiTexSubImage3DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC) load(userptr, "glCompressedMultiTexSubImage3DEXT");
    glad_glCompressedTextureImage1DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC) load(userptr, "glCompressedTextureImage1DEXT");
    glad_glCompressedTextureImage2DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC) load(userptr, "glCompressedTextureImage2DEXT");
    glad_glCompressedTextureImage3DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC) load(userptr, "glCompressedTextureImage3DEXT");
    glad_glCompressedTextureSubImage1DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC) load(userptr, "glCompressedTextureSubImage1DEXT");
    glad_glCompressedTextureSubImage2DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC) load(userptr, "glCompressedTextureSubImage2DEXT");
    glad_glCompressedTextureSubImage3DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC) load(userptr, "glCompressedTextureSubImage3DEXT");
    glad_glCopyMultiTexImage1DEXT = (PFNGLCOPYMULTITEXIMAGE1DEXTPROC) load(userptr, "glCopyMultiTexImage1DEXT");
    glad_glCopyMultiTexImage2DEXT = (PFNGLCOPYMULTITEXIMAGE2DEXTPROC) load(userptr, "glCopyMultiTexImage2DEXT");
    glad_glCopyMultiTexSubImage1DEXT = (PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC) load(userptr, "glCopyMultiTexSubImage1DEXT");
    glad_glCopyMultiTexSubImage2DEXT = (PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC) load(userptr, "glCopyMultiTexSubImage2DEXT");
    glad_glCopyMultiTexSubImage3DEXT = (PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC) load(userptr, "glCopyMultiTexSubImage3DEXT");
    glad_glCopyTextureImage1DEXT = (PFNGLCOPYTEXTUREIMAGE1DEXTPROC) load(userptr, "glCopyTextureImage1DEXT");
    glad_glCopyTextureImage2DEXT = (PFNGLCOPYTEXTUREIMAGE2DEXTPROC) load(userptr, "glCopyTextureImage2DEXT");
    glad_glCopyTextureSubImage1DEXT = (PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC) load(userptr, "glCopyTextureSubImage1DEXT");
    glad_glCopyTextureSubImage2DEXT = (PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC) load(userptr, "glCopyTextureSubImage2DEXT");
    glad_glCopyTextureSubImage3DEXT = (PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC) load(userptr, "glCopyTextureSubImage3DEXT");
    glad_glDisableClientStateIndexedEXT = (PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC) load(userptr, "glDisableClientStateIndexedEXT");
    glad_glDisableClientStateiEXT = (PFNGLDISABLECLIENTSTATEIEXTPROC) load(userptr, "glDisableClientStateiEXT");
    glad_glDisableIndexedEXT = (PFNGLDISABLEINDEXEDEXTPROC) load(userptr, "glDisableIndexedEXT");
    glad_glDisableVertexArrayAttribEXT = (PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC) load(userptr, "glDisableVertexArrayAttribEXT");
    glad_glDisableVertexArrayEXT = (PFNGLDISABLEVERTEXARRAYEXTPROC) load(userptr, "glDisableVertexArrayEXT");
    glad_glEnableClientStateIndexedEXT = (PFNGLENABLECLIENTSTATEINDEXEDEXTPROC) load(userptr, "glEnableClientStateIndexedEXT");
    glad_glEnableClientStateiEXT = (PFNGLENABLECLIENTSTATEIEXTPROC) load(userptr, "glEnableClientStateiEXT");
    glad_glEnableIndexedEXT = (PFNGLENABLEINDEXEDEXTPROC) load(userptr, "glEnableIndexedEXT");
    glad_glEnableVertexArrayAttribEXT = (PFNGLENABLEVERTEXARRAYATTRIBEXTPROC) load(userptr, "glEnableVertexArrayAttribEXT");
    glad_glEnableVertexArrayEXT = (PFNGLENABLEVERTEXARRAYEXTPROC) load(userptr, "glEnableVertexArrayEXT");
    glad_glFlushMappedNamedBufferRangeEXT = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC) load(userptr, "glFlushMappedNamedBufferRangeEXT");
    glad_glFramebufferDrawBufferEXT = (PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC) load(userptr, "glFramebufferDrawBufferEXT");
    glad_glFramebufferDrawBuffersEXT = (PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC) load(userptr, "glFramebufferDrawBuffersEXT");
    glad_glFramebufferReadBufferEXT = (PFNGLFRAMEBUFFERREADBUFFEREXTPROC) load(userptr, "glFramebufferReadBufferEXT");
    glad_glGenerateMultiTexMipmapEXT = (PFNGLGENERATEMULTITEXMIPMAPEXTPROC) load(userptr, "glGenerateMultiTexMipmapEXT");
    glad_glGenerateTextureMipmapEXT = (PFNGLGENERATETEXTUREMIPMAPEXTPROC) load(userptr, "glGenerateTextureMipmapEXT");
    glad_glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC) load(userptr, "glGetBooleanIndexedvEXT");
    glad_glGetCompressedMultiTexImageEXT = (PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC) load(userptr, "glGetCompressedMultiTexImageEXT");
    glad_glGetCompressedTextureImageEXT = (PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC) load(userptr, "glGetCompressedTextureImageEXT");
    glad_glGetDoubleIndexedvEXT = (PFNGLGETDOUBLEINDEXEDVEXTPROC) load(userptr, "glGetDoubleIndexedvEXT");
    glad_glGetDoublei_vEXT = (PFNGLGETDOUBLEI_VEXTPROC) load(userptr, "glGetDoublei_vEXT");
    glad_glGetFloatIndexedvEXT = (PFNGLGETFLOATINDEXEDVEXTPROC) load(userptr, "glGetFloatIndexedvEXT");
    glad_glGetFloati_vEXT = (PFNGLGETFLOATI_VEXTPROC) load(userptr, "glGetFloati_vEXT");
    glad_glGetFramebufferParameterivEXT = (PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC) load(userptr, "glGetFramebufferParameterivEXT");
    glad_glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC) load(userptr, "glGetIntegerIndexedvEXT");
    glad_glGetMultiTexEnvfvEXT = (PFNGLGETMULTITEXENVFVEXTPROC) load(userptr, "glGetMultiTexEnvfvEXT");
    glad_glGetMultiTexEnvivEXT = (PFNGLGETMULTITEXENVIVEXTPROC) load(userptr, "glGetMultiTexEnvivEXT");
    glad_glGetMultiTexGendvEXT = (PFNGLGETMULTITEXGENDVEXTPROC) load(userptr, "glGetMultiTexGendvEXT");
    glad_glGetMultiTexGenfvEXT = (PFNGLGETMULTITEXGENFVEXTPROC) load(userptr, "glGetMultiTexGenfvEXT");
    glad_glGetMultiTexGenivEXT = (PFNGLGETMULTITEXGENIVEXTPROC) load(userptr, "glGetMultiTexGenivEXT");
    glad_glGetMultiTexImageEXT = (PFNGLGETMULTITEXIMAGEEXTPROC) load(userptr, "glGetMultiTexImageEXT");
    glad_glGetMultiTexLevelParameterfvEXT = (PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC) load(userptr, "glGetMultiTexLevelParameterfvEXT");
    glad_glGetMultiTexLevelParameterivEXT = (PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC) load(userptr, "glGetMultiTexLevelParameterivEXT");
    glad_glGetMultiTexParameterIivEXT = (PFNGLGETMULTITEXPARAMETERIIVEXTPROC) load(userptr, "glGetMultiTexParameterIivEXT");
    glad_glGetMultiTexParameterIuivEXT = (PFNGLGETMULTITEXPARAMETERIUIVEXTPROC) load(userptr, "glGetMultiTexParameterIuivEXT");
    glad_glGetMultiTexParameterfvEXT = (PFNGLGETMULTITEXPARAMETERFVEXTPROC) load(userptr, "glGetMultiTexParameterfvEXT");
    glad_glGetMultiTexParameterivEXT = (PFNGLGETMULTITEXPARAMETERIVEXTPROC) load(userptr, "glGetMultiTexParameterivEXT");
    glad_glGetNamedBufferParameterivEXT = (PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC) load(userptr, "glGetNamedBufferParameterivEXT");
    glad_glGetNamedBufferPointervEXT = (PFNGLGETNAMEDBUFFERPOINTERVEXTPROC) load(userptr, "glGetNamedBufferPointervEXT");
    glad_glGetNamedBufferSubDataEXT = (PFNGLGETNAMEDBUFFERSUBDATAEXTPROC) load(userptr, "glGetNamedBufferSubDataEXT");
    glad_glGetNamedFramebufferAttachmentParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) load(userptr, "glGetNamedFramebufferAttachmentParameterivEXT");
    glad_glGetNamedFramebufferParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC) load(userptr, "glGetNamedFramebufferParameterivEXT");
    glad_glGetNamedProgramLocalParameterIivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC) load(userptr, "glGetNamedProgramLocalParameterIivEXT");
    glad_glGetNamedProgramLocalParameterIuivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC) load(userptr, "glGetNamedProgramLocalParameterIuivEXT");
    glad_glGetNamedProgramLocalParameterdvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC) load(userptr, "glGetNamedProgramLocalParameterdvEXT");
    glad_glGetNamedProgramLocalParameterfvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC) load(userptr, "glGetNamedProgramLocalParameterfvEXT");
    glad_glGetNamedProgramStringEXT = (PFNGLGETNAMEDPROGRAMSTRINGEXTPROC) load(userptr, "glGetNamedProgramStringEXT");
    glad_glGetNamedProgramivEXT = (PFNGLGETNAMEDPROGRAMIVEXTPROC) load(userptr, "glGetNamedProgramivEXT");
    glad_glGetNamedRenderbufferParameterivEXT = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC) load(userptr, "glGetNamedRenderbufferParameterivEXT");
    glad_glGetPointerIndexedvEXT = (PFNGLGETPOINTERINDEXEDVEXTPROC) load(userptr, "glGetPointerIndexedvEXT");
    glad_glGetPointeri_vEXT = (PFNGLGETPOINTERI_VEXTPROC) load(userptr, "glGetPointeri_vEXT");
    glad_glGetTextureImageEXT = (PFNGLGETTEXTUREIMAGEEXTPROC) load(userptr, "glGetTextureImageEXT");
    glad_glGetTextureLevelParameterfvEXT = (PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC) load(userptr, "glGetTextureLevelParameterfvEXT");
    glad_glGetTextureLevelParameterivEXT = (PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC) load(userptr, "glGetTextureLevelParameterivEXT");
    glad_glGetTextureParameterIivEXT = (PFNGLGETTEXTUREPARAMETERIIVEXTPROC) load(userptr, "glGetTextureParameterIivEXT");
    glad_glGetTextureParameterIuivEXT = (PFNGLGETTEXTUREPARAMETERIUIVEXTPROC) load(userptr, "glGetTextureParameterIuivEXT");
    glad_glGetTextureParameterfvEXT = (PFNGLGETTEXTUREPARAMETERFVEXTPROC) load(userptr, "glGetTextureParameterfvEXT");
    glad_glGetTextureParameterivEXT = (PFNGLGETTEXTUREPARAMETERIVEXTPROC) load(userptr, "glGetTextureParameterivEXT");
    glad_glGetVertexArrayIntegeri_vEXT = (PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC) load(userptr, "glGetVertexArrayIntegeri_vEXT");
    glad_glGetVertexArrayIntegervEXT = (PFNGLGETVERTEXARRAYINTEGERVEXTPROC) load(userptr, "glGetVertexArrayIntegervEXT");
    glad_glGetVertexArrayPointeri_vEXT = (PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC) load(userptr, "glGetVertexArrayPointeri_vEXT");
    glad_glGetVertexArrayPointervEXT = (PFNGLGETVERTEXARRAYPOINTERVEXTPROC) load(userptr, "glGetVertexArrayPointervEXT");
    glad_glIsEnabledIndexedEXT = (PFNGLISENABLEDINDEXEDEXTPROC) load(userptr, "glIsEnabledIndexedEXT");
    glad_glMapNamedBufferEXT = (PFNGLMAPNAMEDBUFFEREXTPROC) load(userptr, "glMapNamedBufferEXT");
    glad_glMapNamedBufferRangeEXT = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC) load(userptr, "glMapNamedBufferRangeEXT");
    glad_glMatrixFrustumEXT = (PFNGLMATRIXFRUSTUMEXTPROC) load(userptr, "glMatrixFrustumEXT");
    glad_glMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC) load(userptr, "glMatrixLoadIdentityEXT");
    glad_glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC) load(userptr, "glMatrixLoadTransposedEXT");
    glad_glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC) load(userptr, "glMatrixLoadTransposefEXT");
    glad_glMatrixLoaddEXT = (PFNGLMATRIXLOADDEXTPROC) load(userptr, "glMatrixLoaddEXT");
    glad_glMatrixLoadfEXT = (PFNGLMATRIXLOADFEXTPROC) load(userptr, "glMatrixLoadfEXT");
    glad_glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC) load(userptr, "glMatrixMultTransposedEXT");
    glad_glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC) load(userptr, "glMatrixMultTransposefEXT");
    glad_glMatrixMultdEXT = (PFNGLMATRIXMULTDEXTPROC) load(userptr, "glMatrixMultdEXT");
    glad_glMatrixMultfEXT = (PFNGLMATRIXMULTFEXTPROC) load(userptr, "glMatrixMultfEXT");
    glad_glMatrixOrthoEXT = (PFNGLMATRIXORTHOEXTPROC) load(userptr, "glMatrixOrthoEXT");
    glad_glMatrixPopEXT = (PFNGLMATRIXPOPEXTPROC) load(userptr, "glMatrixPopEXT");
    glad_glMatrixPushEXT = (PFNGLMATRIXPUSHEXTPROC) load(userptr, "glMatrixPushEXT");
    glad_glMatrixRotatedEXT = (PFNGLMATRIXROTATEDEXTPROC) load(userptr, "glMatrixRotatedEXT");
    glad_glMatrixRotatefEXT = (PFNGLMATRIXROTATEFEXTPROC) load(userptr, "glMatrixRotatefEXT");
    glad_glMatrixScaledEXT = (PFNGLMATRIXSCALEDEXTPROC) load(userptr, "glMatrixScaledEXT");
    glad_glMatrixScalefEXT = (PFNGLMATRIXSCALEFEXTPROC) load(userptr, "glMatrixScalefEXT");
    glad_glMatrixTranslatedEXT = (PFNGLMATRIXTRANSLATEDEXTPROC) load(userptr, "glMatrixTranslatedEXT");
    glad_glMatrixTranslatefEXT = (PFNGLMATRIXTRANSLATEFEXTPROC) load(userptr, "glMatrixTranslatefEXT");
    glad_glMultiTexBufferEXT = (PFNGLMULTITEXBUFFEREXTPROC) load(userptr, "glMultiTexBufferEXT");
    glad_glMultiTexCoordPointerEXT = (PFNGLMULTITEXCOORDPOINTEREXTPROC) load(userptr, "glMultiTexCoordPointerEXT");
    glad_glMultiTexEnvfEXT = (PFNGLMULTITEXENVFEXTPROC) load(userptr, "glMultiTexEnvfEXT");
    glad_glMultiTexEnvfvEXT = (PFNGLMULTITEXENVFVEXTPROC) load(userptr, "glMultiTexEnvfvEXT");
    glad_glMultiTexEnviEXT = (PFNGLMULTITEXENVIEXTPROC) load(userptr, "glMultiTexEnviEXT");
    glad_glMultiTexEnvivEXT = (PFNGLMULTITEXENVIVEXTPROC) load(userptr, "glMultiTexEnvivEXT");
    glad_glMultiTexGendEXT = (PFNGLMULTITEXGENDEXTPROC) load(userptr, "glMultiTexGendEXT");
    glad_glMultiTexGendvEXT = (PFNGLMULTITEXGENDVEXTPROC) load(userptr, "glMultiTexGendvEXT");
    glad_glMultiTexGenfEXT = (PFNGLMULTITEXGENFEXTPROC) load(userptr, "glMultiTexGenfEXT");
    glad_glMultiTexGenfvEXT = (PFNGLMULTITEXGENFVEXTPROC) load(userptr, "glMultiTexGenfvEXT");
    glad_glMultiTexGeniEXT = (PFNGLMULTITEXGENIEXTPROC) load(userptr, "glMultiTexGeniEXT");
    glad_glMultiTexGenivEXT = (PFNGLMULTITEXGENIVEXTPROC) load(userptr, "glMultiTexGenivEXT");
    glad_glMultiTexImage1DEXT = (PFNGLMULTITEXIMAGE1DEXTPROC) load(userptr, "glMultiTexImage1DEXT");
    glad_glMultiTexImage2DEXT = (PFNGLMULTITEXIMAGE2DEXTPROC) load(userptr, "glMultiTexImage2DEXT");
    glad_glMultiTexImage3DEXT = (PFNGLMULTITEXIMAGE3DEXTPROC) load(userptr, "glMultiTexImage3DEXT");
    glad_glMultiTexParameterIivEXT = (PFNGLMULTITEXPARAMETERIIVEXTPROC) load(userptr, "glMultiTexParameterIivEXT");
    glad_glMultiTexParameterIuivEXT = (PFNGLMULTITEXPARAMETERIUIVEXTPROC) load(userptr, "glMultiTexParameterIuivEXT");
    glad_glMultiTexParameterfEXT = (PFNGLMULTITEXPARAMETERFEXTPROC) load(userptr, "glMultiTexParameterfEXT");
    glad_glMultiTexParameterfvEXT = (PFNGLMULTITEXPARAMETERFVEXTPROC) load(userptr, "glMultiTexParameterfvEXT");
    glad_glMultiTexParameteriEXT = (PFNGLMULTITEXPARAMETERIEXTPROC) load(userptr, "glMultiTexParameteriEXT");
    glad_glMultiTexParameterivEXT = (PFNGLMULTITEXPARAMETERIVEXTPROC) load(userptr, "glMultiTexParameterivEXT");
    glad_glMultiTexRenderbufferEXT = (PFNGLMULTITEXRENDERBUFFEREXTPROC) load(userptr, "glMultiTexRenderbufferEXT");
    glad_glMultiTexSubImage1DEXT = (PFNGLMULTITEXSUBIMAGE1DEXTPROC) load(userptr, "glMultiTexSubImage1DEXT");
    glad_glMultiTexSubImage2DEXT = (PFNGLMULTITEXSUBIMAGE2DEXTPROC) load(userptr, "glMultiTexSubImage2DEXT");
    glad_glMultiTexSubImage3DEXT = (PFNGLMULTITEXSUBIMAGE3DEXTPROC) load(userptr, "glMultiTexSubImage3DEXT");
    glad_glNamedBufferDataEXT = (PFNGLNAMEDBUFFERDATAEXTPROC) load(userptr, "glNamedBufferDataEXT");
    glad_glNamedBufferStorageEXT = (PFNGLNAMEDBUFFERSTORAGEEXTPROC) load(userptr, "glNamedBufferStorageEXT");
    glad_glNamedBufferSubDataEXT = (PFNGLNAMEDBUFFERSUBDATAEXTPROC) load(userptr, "glNamedBufferSubDataEXT");
    glad_glNamedCopyBufferSubDataEXT = (PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC) load(userptr, "glNamedCopyBufferSubDataEXT");
    glad_glNamedFramebufferParameteriEXT = (PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC) load(userptr, "glNamedFramebufferParameteriEXT");
    glad_glNamedFramebufferRenderbufferEXT = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC) load(userptr, "glNamedFramebufferRenderbufferEXT");
    glad_glNamedFramebufferTexture1DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC) load(userptr, "glNamedFramebufferTexture1DEXT");
    glad_glNamedFramebufferTexture2DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC) load(userptr, "glNamedFramebufferTexture2DEXT");
    glad_glNamedFramebufferTexture3DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC) load(userptr, "glNamedFramebufferTexture3DEXT");
    glad_glNamedFramebufferTextureEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC) load(userptr, "glNamedFramebufferTextureEXT");
    glad_glNamedFramebufferTextureFaceEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC) load(userptr, "glNamedFramebufferTextureFaceEXT");
    glad_glNamedFramebufferTextureLayerEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC) load(userptr, "glNamedFramebufferTextureLayerEXT");
    glad_glNamedProgramLocalParameter4dEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC) load(userptr, "glNamedProgramLocalParameter4dEXT");
    glad_glNamedProgramLocalParameter4dvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC) load(userptr, "glNamedProgramLocalParameter4dvEXT");
    glad_glNamedProgramLocalParameter4fEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC) load(userptr, "glNamedProgramLocalParameter4fEXT");
    glad_glNamedProgramLocalParameter4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC) load(userptr, "glNamedProgramLocalParameter4fvEXT");
    glad_glNamedProgramLocalParameterI4iEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC) load(userptr, "glNamedProgramLocalParameterI4iEXT");
    glad_glNamedProgramLocalParameterI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC) load(userptr, "glNamedProgramLocalParameterI4ivEXT");
    glad_glNamedProgramLocalParameterI4uiEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC) load(userptr, "glNamedProgramLocalParameterI4uiEXT");
    glad_glNamedProgramLocalParameterI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC) load(userptr, "glNamedProgramLocalParameterI4uivEXT");
    glad_glNamedProgramLocalParameters4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC) load(userptr, "glNamedProgramLocalParameters4fvEXT");
    glad_glNamedProgramLocalParametersI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC) load(userptr, "glNamedProgramLocalParametersI4ivEXT");
    glad_glNamedProgramLocalParametersI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC) load(userptr, "glNamedProgramLocalParametersI4uivEXT");
    glad_glNamedProgramStringEXT = (PFNGLNAMEDPROGRAMSTRINGEXTPROC) load(userptr, "glNamedProgramStringEXT");
    glad_glNamedRenderbufferStorageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC) load(userptr, "glNamedRenderbufferStorageEXT");
    glad_glNamedRenderbufferStorageMultisampleCoverageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC) load(userptr, "glNamedRenderbufferStorageMultisampleCoverageEXT");
    glad_glNamedRenderbufferStorageMultisampleEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) load(userptr, "glNamedRenderbufferStorageMultisampleEXT");
    glad_glProgramUniform1dEXT = (PFNGLPROGRAMUNIFORM1DEXTPROC) load(userptr, "glProgramUniform1dEXT");
    glad_glProgramUniform1dvEXT = (PFNGLPROGRAMUNIFORM1DVEXTPROC) load(userptr, "glProgramUniform1dvEXT");
    glad_glProgramUniform1fEXT = (PFNGLPROGRAMUNIFORM1FEXTPROC) load(userptr, "glProgramUniform1fEXT");
    glad_glProgramUniform1fvEXT = (PFNGLPROGRAMUNIFORM1FVEXTPROC) load(userptr, "glProgramUniform1fvEXT");
    glad_glProgramUniform1iEXT = (PFNGLPROGRAMUNIFORM1IEXTPROC) load(userptr, "glProgramUniform1iEXT");
    glad_glProgramUniform1ivEXT = (PFNGLPROGRAMUNIFORM1IVEXTPROC) load(userptr, "glProgramUniform1ivEXT");
    glad_glProgramUniform1uiEXT = (PFNGLPROGRAMUNIFORM1UIEXTPROC) load(userptr, "glProgramUniform1uiEXT");
    glad_glProgramUniform1uivEXT = (PFNGLPROGRAMUNIFORM1UIVEXTPROC) load(userptr, "glProgramUniform1uivEXT");
    glad_glProgramUniform2dEXT = (PFNGLPROGRAMUNIFORM2DEXTPROC) load(userptr, "glProgramUniform2dEXT");
    glad_glProgramUniform2dvEXT = (PFNGLPROGRAMUNIFORM2DVEXTPROC) load(userptr, "glProgramUniform2dvEXT");
    glad_glProgramUniform2fEXT = (PFNGLPROGRAMUNIFORM2FEXTPROC) load(userptr, "glProgramUniform2fEXT");
    glad_glProgramUniform2fvEXT = (PFNGLPROGRAMUNIFORM2FVEXTPROC) load(userptr, "glProgramUniform2fvEXT");
    glad_glProgramUniform2iEXT = (PFNGLPROGRAMUNIFORM2IEXTPROC) load(userptr, "glProgramUniform2iEXT");
    glad_glProgramUniform2ivEXT = (PFNGLPROGRAMUNIFORM2IVEXTPROC) load(userptr, "glProgramUniform2ivEXT");
    glad_glProgramUniform2uiEXT = (PFNGLPROGRAMUNIFORM2UIEXTPROC) load(userptr, "glProgramUniform2uiEXT");
    glad_glProgramUniform2uivEXT = (PFNGLPROGRAMUNIFORM2UIVEXTPROC) load(userptr, "glProgramUniform2uivEXT");
    glad_glProgramUniform3dEXT = (PFNGLPROGRAMUNIFORM3DEXTPROC) load(userptr, "glProgramUniform3dEXT");
    glad_glProgramUniform3dvEXT = (PFNGLPROGRAMUNIFORM3DVEXTPROC) load(userptr, "glProgramUniform3dvEXT");
    glad_glProgramUniform3fEXT = (PFNGLPROGRAMUNIFORM3FEXTPROC) load(userptr, "glProgramUniform3fEXT");
    glad_glProgramUniform3fvEXT = (PFNGLPROGRAMUNIFORM3FVEXTPROC) load(userptr, "glProgramUniform3fvEXT");
    glad_glProgramUniform3iEXT = (PFNGLPROGRAMUNIFORM3IEXTPROC) load(userptr, "glProgramUniform3iEXT");
    glad_glProgramUniform3ivEXT = (PFNGLPROGRAMUNIFORM3IVEXTPROC) load(userptr, "glProgramUniform3ivEXT");
    glad_glProgramUniform3uiEXT = (PFNGLPROGRAMUNIFORM3UIEXTPROC) load(userptr, "glProgramUniform3uiEXT");
    glad_glProgramUniform3uivEXT = (PFNGLPROGRAMUNIFORM3UIVEXTPROC) load(userptr, "glProgramUniform3uivEXT");
    glad_glProgramUniform4dEXT = (PFNGLPROGRAMUNIFORM4DEXTPROC) load(userptr, "glProgramUniform4dEXT");
    glad_glProgramUniform4dvEXT = (PFNGLPROGRAMUNIFORM4DVEXTPROC) load(userptr, "glProgramUniform4dvEXT");
    glad_glProgramUniform4fEXT = (PFNGLPROGRAMUNIFORM4FEXTPROC) load(userptr, "glProgramUniform4fEXT");
    glad_glProgramUniform4fvEXT = (PFNGLPROGRAMUNIFORM4FVEXTPROC) load(userptr, "glProgramUniform4fvEXT");
    glad_glProgramUniform4iEXT = (PFNGLPROGRAMUNIFORM4IEXTPROC) load(userptr, "glProgramUniform4iEXT");
    glad_glProgramUniform4ivEXT = (PFNGLPROGRAMUNIFORM4IVEXTPROC) load(userptr, "glProgramUniform4ivEXT");
    glad_glProgramUniform4uiEXT = (PFNGLPROGRAMUNIFORM4UIEXTPROC) load(userptr, "glProgramUniform4uiEXT");
    glad_glProgramUniform4uivEXT = (PFNGLPROGRAMUNIFORM4UIVEXTPROC) load(userptr, "glProgramUniform4uivEXT");
    glad_glProgramUniformMatrix2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC) load(userptr, "glProgramUniformMatrix2dvEXT");
    glad_glProgramUniformMatrix2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) load(userptr, "glProgramUniformMatrix2fvEXT");
    glad_glProgramUniformMatrix2x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC) load(userptr, "glProgramUniformMatrix2x3dvEXT");
    glad_glProgramUniformMatrix2x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) load(userptr, "glProgramUniformMatrix2x3fvEXT");
    glad_glProgramUniformMatrix2x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC) load(userptr, "glProgramUniformMatrix2x4dvEXT");
    glad_glProgramUniformMatrix2x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) load(userptr, "glProgramUniformMatrix2x4fvEXT");
    glad_glProgramUniformMatrix3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC) load(userptr, "glProgramUniformMatrix3dvEXT");
    glad_glProgramUniformMatrix3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) load(userptr, "glProgramUniformMatrix3fvEXT");
    glad_glProgramUniformMatrix3x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC) load(userptr, "glProgramUniformMatrix3x2dvEXT");
    glad_glProgramUniformMatrix3x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) load(userptr, "glProgramUniformMatrix3x2fvEXT");
    glad_glProgramUniformMatrix3x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC) load(userptr, "glProgramUniformMatrix3x4dvEXT");
    glad_glProgramUniformMatrix3x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) load(userptr, "glProgramUniformMatrix3x4fvEXT");
    glad_glProgramUniformMatrix4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC) load(userptr, "glProgramUniformMatrix4dvEXT");
    glad_glProgramUniformMatrix4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) load(userptr, "glProgramUniformMatrix4fvEXT");
    glad_glProgramUniformMatrix4x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC) load(userptr, "glProgramUniformMatrix4x2dvEXT");
    glad_glProgramUniformMatrix4x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) load(userptr, "glProgramUniformMatrix4x2fvEXT");
    glad_glProgramUniformMatrix4x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC) load(userptr, "glProgramUniformMatrix4x3dvEXT");
    glad_glProgramUniformMatrix4x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) load(userptr, "glProgramUniformMatrix4x3fvEXT");
    glad_glPushClientAttribDefaultEXT = (PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC) load(userptr, "glPushClientAttribDefaultEXT");
    glad_glTextureBufferEXT = (PFNGLTEXTUREBUFFEREXTPROC) load(userptr, "glTextureBufferEXT");
    glad_glTextureBufferRangeEXT = (PFNGLTEXTUREBUFFERRANGEEXTPROC) load(userptr, "glTextureBufferRangeEXT");
    glad_glTextureImage1DEXT = (PFNGLTEXTUREIMAGE1DEXTPROC) load(userptr, "glTextureImage1DEXT");
    glad_glTextureImage2DEXT = (PFNGLTEXTUREIMAGE2DEXTPROC) load(userptr, "glTextureImage2DEXT");
    glad_glTextureImage3DEXT = (PFNGLTEXTUREIMAGE3DEXTPROC) load(userptr, "glTextureImage3DEXT");
    glad_glTexturePageCommitmentEXT = (PFNGLTEXTUREPAGECOMMITMENTEXTPROC) load(userptr, "glTexturePageCommitmentEXT");
    glad_glTextureParameterIivEXT = (PFNGLTEXTUREPARAMETERIIVEXTPROC) load(userptr, "glTextureParameterIivEXT");
    glad_glTextureParameterIuivEXT = (PFNGLTEXTUREPARAMETERIUIVEXTPROC) load(userptr, "glTextureParameterIuivEXT");
    glad_glTextureParameterfEXT = (PFNGLTEXTUREPARAMETERFEXTPROC) load(userptr, "glTextureParameterfEXT");
    glad_glTextureParameterfvEXT = (PFNGLTEXTUREPARAMETERFVEXTPROC) load(userptr, "glTextureParameterfvEXT");
    glad_glTextureParameteriEXT = (PFNGLTEXTUREPARAMETERIEXTPROC) load(userptr, "glTextureParameteriEXT");
    glad_glTextureParameterivEXT = (PFNGLTEXTUREPARAMETERIVEXTPROC) load(userptr, "glTextureParameterivEXT");
    glad_glTextureRenderbufferEXT = (PFNGLTEXTURERENDERBUFFEREXTPROC) load(userptr, "glTextureRenderbufferEXT");
    glad_glTextureStorage1DEXT = (PFNGLTEXTURESTORAGE1DEXTPROC) load(userptr, "glTextureStorage1DEXT");
    glad_glTextureStorage2DEXT = (PFNGLTEXTURESTORAGE2DEXTPROC) load(userptr, "glTextureStorage2DEXT");
    glad_glTextureStorage2DMultisampleEXT = (PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC) load(userptr, "glTextureStorage2DMultisampleEXT");
    glad_glTextureStorage3DEXT = (PFNGLTEXTURESTORAGE3DEXTPROC) load(userptr, "glTextureStorage3DEXT");
    glad_glTextureStorage3DMultisampleEXT = (PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC) load(userptr, "glTextureStorage3DMultisampleEXT");
    glad_glTextureSubImage1DEXT = (PFNGLTEXTURESUBIMAGE1DEXTPROC) load(userptr, "glTextureSubImage1DEXT");
    glad_glTextureSubImage2DEXT = (PFNGLTEXTURESUBIMAGE2DEXTPROC) load(userptr, "glTextureSubImage2DEXT");
    glad_glTextureSubImage3DEXT = (PFNGLTEXTURESUBIMAGE3DEXTPROC) load(userptr, "glTextureSubImage3DEXT");
    glad_glUnmapNamedBufferEXT = (PFNGLUNMAPNAMEDBUFFEREXTPROC) load(userptr, "glUnmapNamedBufferEXT");
    glad_glVertexArrayBindVertexBufferEXT = (PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC) load(userptr, "glVertexArrayBindVertexBufferEXT");
    glad_glVertexArrayColorOffsetEXT = (PFNGLVERTEXARRAYCOLOROFFSETEXTPROC) load(userptr, "glVertexArrayColorOffsetEXT");
    glad_glVertexArrayEdgeFlagOffsetEXT = (PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC) load(userptr, "glVertexArrayEdgeFlagOffsetEXT");
    glad_glVertexArrayFogCoordOffsetEXT = (PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC) load(userptr, "glVertexArrayFogCoordOffsetEXT");
    glad_glVertexArrayIndexOffsetEXT = (PFNGLVERTEXARRAYINDEXOFFSETEXTPROC) load(userptr, "glVertexArrayIndexOffsetEXT");
    glad_glVertexArrayMultiTexCoordOffsetEXT = (PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC) load(userptr, "glVertexArrayMultiTexCoordOffsetEXT");
    glad_glVertexArrayNormalOffsetEXT = (PFNGLVERTEXARRAYNORMALOFFSETEXTPROC) load(userptr, "glVertexArrayNormalOffsetEXT");
    glad_glVertexArraySecondaryColorOffsetEXT = (PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC) load(userptr, "glVertexArraySecondaryColorOffsetEXT");
    glad_glVertexArrayTexCoordOffsetEXT = (PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC) load(userptr, "glVertexArrayTexCoordOffsetEXT");
    glad_glVertexArrayVertexAttribBindingEXT = (PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC) load(userptr, "glVertexArrayVertexAttribBindingEXT");
    glad_glVertexArrayVertexAttribDivisorEXT = (PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC) load(userptr, "glVertexArrayVertexAttribDivisorEXT");
    glad_glVertexArrayVertexAttribFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC) load(userptr, "glVertexArrayVertexAttribFormatEXT");
    glad_glVertexArrayVertexAttribIFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC) load(userptr, "glVertexArrayVertexAttribIFormatEXT");
    glad_glVertexArrayVertexAttribIOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC) load(userptr, "glVertexArrayVertexAttribIOffsetEXT");
    glad_glVertexArrayVertexAttribLFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC) load(userptr, "glVertexArrayVertexAttribLFormatEXT");
    glad_glVertexArrayVertexAttribLOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC) load(userptr, "glVertexArrayVertexAttribLOffsetEXT");
    glad_glVertexArrayVertexAttribOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC) load(userptr, "glVertexArrayVertexAttribOffsetEXT");
    glad_glVertexArrayVertexBindingDivisorEXT = (PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC) load(userptr, "glVertexArrayVertexBindingDivisorEXT");
    glad_glVertexArrayVertexOffsetEXT = (PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC) load(userptr, "glVertexArrayVertexOffsetEXT");
}
static void glad_gl_load_GL_EXT_draw_buffers2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_draw_buffers2) return;
    glad_glColorMaskIndexedEXT = (PFNGLCOLORMASKINDEXEDEXTPROC) load(userptr, "glColorMaskIndexedEXT");
    glad_glDisableIndexedEXT = (PFNGLDISABLEINDEXEDEXTPROC) load(userptr, "glDisableIndexedEXT");
    glad_glEnableIndexedEXT = (PFNGLENABLEINDEXEDEXTPROC) load(userptr, "glEnableIndexedEXT");
    glad_glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC) load(userptr, "glGetBooleanIndexedvEXT");
    glad_glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC) load(userptr, "glGetIntegerIndexedvEXT");
    glad_glIsEnabledIndexedEXT = (PFNGLISENABLEDINDEXEDEXTPROC) load(userptr, "glIsEnabledIndexedEXT");
}
static void glad_gl_load_GL_EXT_draw_instanced( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_draw_instanced) return;
    glad_glDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC) load(userptr, "glDrawArraysInstancedEXT");
    glad_glDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC) load(userptr, "glDrawElementsInstancedEXT");
}
static void glad_gl_load_GL_EXT_draw_range_elements( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_draw_range_elements) return;
    glad_glDrawRangeElementsEXT = (PFNGLDRAWRANGEELEMENTSEXTPROC) load(userptr, "glDrawRangeElementsEXT");
}
static void glad_gl_load_GL_EXT_external_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_external_buffer) return;
    glad_glBufferStorageExternalEXT = (PFNGLBUFFERSTORAGEEXTERNALEXTPROC) load(userptr, "glBufferStorageExternalEXT");
    glad_glNamedBufferStorageExternalEXT = (PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC) load(userptr, "glNamedBufferStorageExternalEXT");
}
static void glad_gl_load_GL_EXT_fog_coord( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_fog_coord) return;
    glad_glFogCoordPointerEXT = (PFNGLFOGCOORDPOINTEREXTPROC) load(userptr, "glFogCoordPointerEXT");
    glad_glFogCoorddEXT = (PFNGLFOGCOORDDEXTPROC) load(userptr, "glFogCoorddEXT");
    glad_glFogCoorddvEXT = (PFNGLFOGCOORDDVEXTPROC) load(userptr, "glFogCoorddvEXT");
    glad_glFogCoordfEXT = (PFNGLFOGCOORDFEXTPROC) load(userptr, "glFogCoordfEXT");
    glad_glFogCoordfvEXT = (PFNGLFOGCOORDFVEXTPROC) load(userptr, "glFogCoordfvEXT");
}
static void glad_gl_load_GL_EXT_framebuffer_blit( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_framebuffer_blit) return;
    glad_glBlitFramebufferEXT = (PFNGLBLITFRAMEBUFFEREXTPROC) load(userptr, "glBlitFramebufferEXT");
}
static void glad_gl_load_GL_EXT_framebuffer_blit_layers( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_framebuffer_blit_layers) return;
    glad_glBlitFramebufferLayerEXT = (PFNGLBLITFRAMEBUFFERLAYEREXTPROC) load(userptr, "glBlitFramebufferLayerEXT");
    glad_glBlitFramebufferLayersEXT = (PFNGLBLITFRAMEBUFFERLAYERSEXTPROC) load(userptr, "glBlitFramebufferLayersEXT");
}
static void glad_gl_load_GL_EXT_framebuffer_multisample( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_framebuffer_multisample) return;
    glad_glRenderbufferStorageMultisampleEXT = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) load(userptr, "glRenderbufferStorageMultisampleEXT");
}
static void glad_gl_load_GL_EXT_framebuffer_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_framebuffer_object) return;
    glad_glBindFramebufferEXT = (PFNGLBINDFRAMEBUFFEREXTPROC) load(userptr, "glBindFramebufferEXT");
    glad_glBindRenderbufferEXT = (PFNGLBINDRENDERBUFFEREXTPROC) load(userptr, "glBindRenderbufferEXT");
    glad_glCheckFramebufferStatusEXT = (PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC) load(userptr, "glCheckFramebufferStatusEXT");
    glad_glDeleteFramebuffersEXT = (PFNGLDELETEFRAMEBUFFERSEXTPROC) load(userptr, "glDeleteFramebuffersEXT");
    glad_glDeleteRenderbuffersEXT = (PFNGLDELETERENDERBUFFERSEXTPROC) load(userptr, "glDeleteRenderbuffersEXT");
    glad_glFramebufferRenderbufferEXT = (PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC) load(userptr, "glFramebufferRenderbufferEXT");
    glad_glFramebufferTexture1DEXT = (PFNGLFRAMEBUFFERTEXTURE1DEXTPROC) load(userptr, "glFramebufferTexture1DEXT");
    glad_glFramebufferTexture2DEXT = (PFNGLFRAMEBUFFERTEXTURE2DEXTPROC) load(userptr, "glFramebufferTexture2DEXT");
    glad_glFramebufferTexture3DEXT = (PFNGLFRAMEBUFFERTEXTURE3DEXTPROC) load(userptr, "glFramebufferTexture3DEXT");
    glad_glGenFramebuffersEXT = (PFNGLGENFRAMEBUFFERSEXTPROC) load(userptr, "glGenFramebuffersEXT");
    glad_glGenRenderbuffersEXT = (PFNGLGENRENDERBUFFERSEXTPROC) load(userptr, "glGenRenderbuffersEXT");
    glad_glGenerateMipmapEXT = (PFNGLGENERATEMIPMAPEXTPROC) load(userptr, "glGenerateMipmapEXT");
    glad_glGetFramebufferAttachmentParameterivEXT = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) load(userptr, "glGetFramebufferAttachmentParameterivEXT");
    glad_glGetRenderbufferParameterivEXT = (PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC) load(userptr, "glGetRenderbufferParameterivEXT");
    glad_glIsFramebufferEXT = (PFNGLISFRAMEBUFFEREXTPROC) load(userptr, "glIsFramebufferEXT");
    glad_glIsRenderbufferEXT = (PFNGLISRENDERBUFFEREXTPROC) load(userptr, "glIsRenderbufferEXT");
    glad_glRenderbufferStorageEXT = (PFNGLRENDERBUFFERSTORAGEEXTPROC) load(userptr, "glRenderbufferStorageEXT");
}
static void glad_gl_load_GL_EXT_geometry_shader4( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_geometry_shader4) return;
    glad_glProgramParameteriEXT = (PFNGLPROGRAMPARAMETERIEXTPROC) load(userptr, "glProgramParameteriEXT");
}
static void glad_gl_load_GL_EXT_gpu_program_parameters( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_gpu_program_parameters) return;
    glad_glProgramEnvParameters4fvEXT = (PFNGLPROGRAMENVPARAMETERS4FVEXTPROC) load(userptr, "glProgramEnvParameters4fvEXT");
    glad_glProgramLocalParameters4fvEXT = (PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC) load(userptr, "glProgramLocalParameters4fvEXT");
}
static void glad_gl_load_GL_EXT_gpu_shader4( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_gpu_shader4) return;
    glad_glBindFragDataLocationEXT = (PFNGLBINDFRAGDATALOCATIONEXTPROC) load(userptr, "glBindFragDataLocationEXT");
    glad_glGetFragDataLocationEXT = (PFNGLGETFRAGDATALOCATIONEXTPROC) load(userptr, "glGetFragDataLocationEXT");
    glad_glGetUniformuivEXT = (PFNGLGETUNIFORMUIVEXTPROC) load(userptr, "glGetUniformuivEXT");
    glad_glGetVertexAttribIivEXT = (PFNGLGETVERTEXATTRIBIIVEXTPROC) load(userptr, "glGetVertexAttribIivEXT");
    glad_glGetVertexAttribIuivEXT = (PFNGLGETVERTEXATTRIBIUIVEXTPROC) load(userptr, "glGetVertexAttribIuivEXT");
    glad_glUniform1uiEXT = (PFNGLUNIFORM1UIEXTPROC) load(userptr, "glUniform1uiEXT");
    glad_glUniform1uivEXT = (PFNGLUNIFORM1UIVEXTPROC) load(userptr, "glUniform1uivEXT");
    glad_glUniform2uiEXT = (PFNGLUNIFORM2UIEXTPROC) load(userptr, "glUniform2uiEXT");
    glad_glUniform2uivEXT = (PFNGLUNIFORM2UIVEXTPROC) load(userptr, "glUniform2uivEXT");
    glad_glUniform3uiEXT = (PFNGLUNIFORM3UIEXTPROC) load(userptr, "glUniform3uiEXT");
    glad_glUniform3uivEXT = (PFNGLUNIFORM3UIVEXTPROC) load(userptr, "glUniform3uivEXT");
    glad_glUniform4uiEXT = (PFNGLUNIFORM4UIEXTPROC) load(userptr, "glUniform4uiEXT");
    glad_glUniform4uivEXT = (PFNGLUNIFORM4UIVEXTPROC) load(userptr, "glUniform4uivEXT");
    glad_glVertexAttribI1iEXT = (PFNGLVERTEXATTRIBI1IEXTPROC) load(userptr, "glVertexAttribI1iEXT");
    glad_glVertexAttribI1ivEXT = (PFNGLVERTEXATTRIBI1IVEXTPROC) load(userptr, "glVertexAttribI1ivEXT");
    glad_glVertexAttribI1uiEXT = (PFNGLVERTEXATTRIBI1UIEXTPROC) load(userptr, "glVertexAttribI1uiEXT");
    glad_glVertexAttribI1uivEXT = (PFNGLVERTEXATTRIBI1UIVEXTPROC) load(userptr, "glVertexAttribI1uivEXT");
    glad_glVertexAttribI2iEXT = (PFNGLVERTEXATTRIBI2IEXTPROC) load(userptr, "glVertexAttribI2iEXT");
    glad_glVertexAttribI2ivEXT = (PFNGLVERTEXATTRIBI2IVEXTPROC) load(userptr, "glVertexAttribI2ivEXT");
    glad_glVertexAttribI2uiEXT = (PFNGLVERTEXATTRIBI2UIEXTPROC) load(userptr, "glVertexAttribI2uiEXT");
    glad_glVertexAttribI2uivEXT = (PFNGLVERTEXATTRIBI2UIVEXTPROC) load(userptr, "glVertexAttribI2uivEXT");
    glad_glVertexAttribI3iEXT = (PFNGLVERTEXATTRIBI3IEXTPROC) load(userptr, "glVertexAttribI3iEXT");
    glad_glVertexAttribI3ivEXT = (PFNGLVERTEXATTRIBI3IVEXTPROC) load(userptr, "glVertexAttribI3ivEXT");
    glad_glVertexAttribI3uiEXT = (PFNGLVERTEXATTRIBI3UIEXTPROC) load(userptr, "glVertexAttribI3uiEXT");
    glad_glVertexAttribI3uivEXT = (PFNGLVERTEXATTRIBI3UIVEXTPROC) load(userptr, "glVertexAttribI3uivEXT");
    glad_glVertexAttribI4bvEXT = (PFNGLVERTEXATTRIBI4BVEXTPROC) load(userptr, "glVertexAttribI4bvEXT");
    glad_glVertexAttribI4iEXT = (PFNGLVERTEXATTRIBI4IEXTPROC) load(userptr, "glVertexAttribI4iEXT");
    glad_glVertexAttribI4ivEXT = (PFNGLVERTEXATTRIBI4IVEXTPROC) load(userptr, "glVertexAttribI4ivEXT");
    glad_glVertexAttribI4svEXT = (PFNGLVERTEXATTRIBI4SVEXTPROC) load(userptr, "glVertexAttribI4svEXT");
    glad_glVertexAttribI4ubvEXT = (PFNGLVERTEXATTRIBI4UBVEXTPROC) load(userptr, "glVertexAttribI4ubvEXT");
    glad_glVertexAttribI4uiEXT = (PFNGLVERTEXATTRIBI4UIEXTPROC) load(userptr, "glVertexAttribI4uiEXT");
    glad_glVertexAttribI4uivEXT = (PFNGLVERTEXATTRIBI4UIVEXTPROC) load(userptr, "glVertexAttribI4uivEXT");
    glad_glVertexAttribI4usvEXT = (PFNGLVERTEXATTRIBI4USVEXTPROC) load(userptr, "glVertexAttribI4usvEXT");
    glad_glVertexAttribIPointerEXT = (PFNGLVERTEXATTRIBIPOINTEREXTPROC) load(userptr, "glVertexAttribIPointerEXT");
}
static void glad_gl_load_GL_EXT_histogram( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_histogram) return;
    glad_glGetHistogramEXT = (PFNGLGETHISTOGRAMEXTPROC) load(userptr, "glGetHistogramEXT");
    glad_glGetHistogramParameterfvEXT = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC) load(userptr, "glGetHistogramParameterfvEXT");
    glad_glGetHistogramParameterivEXT = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC) load(userptr, "glGetHistogramParameterivEXT");
    glad_glGetMinmaxEXT = (PFNGLGETMINMAXEXTPROC) load(userptr, "glGetMinmaxEXT");
    glad_glGetMinmaxParameterfvEXT = (PFNGLGETMINMAXPARAMETERFVEXTPROC) load(userptr, "glGetMinmaxParameterfvEXT");
    glad_glGetMinmaxParameterivEXT = (PFNGLGETMINMAXPARAMETERIVEXTPROC) load(userptr, "glGetMinmaxParameterivEXT");
    glad_glHistogramEXT = (PFNGLHISTOGRAMEXTPROC) load(userptr, "glHistogramEXT");
    glad_glMinmaxEXT = (PFNGLMINMAXEXTPROC) load(userptr, "glMinmaxEXT");
    glad_glResetHistogramEXT = (PFNGLRESETHISTOGRAMEXTPROC) load(userptr, "glResetHistogramEXT");
    glad_glResetMinmaxEXT = (PFNGLRESETMINMAXEXTPROC) load(userptr, "glResetMinmaxEXT");
}
static void glad_gl_load_GL_EXT_index_func( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_index_func) return;
    glad_glIndexFuncEXT = (PFNGLINDEXFUNCEXTPROC) load(userptr, "glIndexFuncEXT");
}
static void glad_gl_load_GL_EXT_index_material( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_index_material) return;
    glad_glIndexMaterialEXT = (PFNGLINDEXMATERIALEXTPROC) load(userptr, "glIndexMaterialEXT");
}
static void glad_gl_load_GL_EXT_light_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_light_texture) return;
    glad_glApplyTextureEXT = (PFNGLAPPLYTEXTUREEXTPROC) load(userptr, "glApplyTextureEXT");
    glad_glTextureLightEXT = (PFNGLTEXTURELIGHTEXTPROC) load(userptr, "glTextureLightEXT");
    glad_glTextureMaterialEXT = (PFNGLTEXTUREMATERIALEXTPROC) load(userptr, "glTextureMaterialEXT");
}
static void glad_gl_load_GL_EXT_memory_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_memory_object) return;
    glad_glBufferStorageMemEXT = (PFNGLBUFFERSTORAGEMEMEXTPROC) load(userptr, "glBufferStorageMemEXT");
    glad_glCreateMemoryObjectsEXT = (PFNGLCREATEMEMORYOBJECTSEXTPROC) load(userptr, "glCreateMemoryObjectsEXT");
    glad_glDeleteMemoryObjectsEXT = (PFNGLDELETEMEMORYOBJECTSEXTPROC) load(userptr, "glDeleteMemoryObjectsEXT");
    glad_glGetMemoryObjectParameterivEXT = (PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC) load(userptr, "glGetMemoryObjectParameterivEXT");
    glad_glGetUnsignedBytei_vEXT = (PFNGLGETUNSIGNEDBYTEI_VEXTPROC) load(userptr, "glGetUnsignedBytei_vEXT");
    glad_glGetUnsignedBytevEXT = (PFNGLGETUNSIGNEDBYTEVEXTPROC) load(userptr, "glGetUnsignedBytevEXT");
    glad_glIsMemoryObjectEXT = (PFNGLISMEMORYOBJECTEXTPROC) load(userptr, "glIsMemoryObjectEXT");
    glad_glMemoryObjectParameterivEXT = (PFNGLMEMORYOBJECTPARAMETERIVEXTPROC) load(userptr, "glMemoryObjectParameterivEXT");
    glad_glNamedBufferStorageMemEXT = (PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC) load(userptr, "glNamedBufferStorageMemEXT");
    glad_glTexStorageMem1DEXT = (PFNGLTEXSTORAGEMEM1DEXTPROC) load(userptr, "glTexStorageMem1DEXT");
    glad_glTexStorageMem2DEXT = (PFNGLTEXSTORAGEMEM2DEXTPROC) load(userptr, "glTexStorageMem2DEXT");
    glad_glTexStorageMem2DMultisampleEXT = (PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC) load(userptr, "glTexStorageMem2DMultisampleEXT");
    glad_glTexStorageMem3DEXT = (PFNGLTEXSTORAGEMEM3DEXTPROC) load(userptr, "glTexStorageMem3DEXT");
    glad_glTexStorageMem3DMultisampleEXT = (PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC) load(userptr, "glTexStorageMem3DMultisampleEXT");
    glad_glTextureStorageMem1DEXT = (PFNGLTEXTURESTORAGEMEM1DEXTPROC) load(userptr, "glTextureStorageMem1DEXT");
    glad_glTextureStorageMem2DEXT = (PFNGLTEXTURESTORAGEMEM2DEXTPROC) load(userptr, "glTextureStorageMem2DEXT");
    glad_glTextureStorageMem2DMultisampleEXT = (PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC) load(userptr, "glTextureStorageMem2DMultisampleEXT");
    glad_glTextureStorageMem3DEXT = (PFNGLTEXTURESTORAGEMEM3DEXTPROC) load(userptr, "glTextureStorageMem3DEXT");
    glad_glTextureStorageMem3DMultisampleEXT = (PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC) load(userptr, "glTextureStorageMem3DMultisampleEXT");
}
static void glad_gl_load_GL_EXT_memory_object_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_memory_object_fd) return;
    glad_glImportMemoryFdEXT = (PFNGLIMPORTMEMORYFDEXTPROC) load(userptr, "glImportMemoryFdEXT");
}
static void glad_gl_load_GL_EXT_memory_object_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_memory_object_win32) return;
    glad_glImportMemoryWin32HandleEXT = (PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC) load(userptr, "glImportMemoryWin32HandleEXT");
    glad_glImportMemoryWin32NameEXT = (PFNGLIMPORTMEMORYWIN32NAMEEXTPROC) load(userptr, "glImportMemoryWin32NameEXT");
}
static void glad_gl_load_GL_EXT_multi_draw_arrays( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_multi_draw_arrays) return;
    glad_glMultiDrawArraysEXT = (PFNGLMULTIDRAWARRAYSEXTPROC) load(userptr, "glMultiDrawArraysEXT");
    glad_glMultiDrawElementsEXT = (PFNGLMULTIDRAWELEMENTSEXTPROC) load(userptr, "glMultiDrawElementsEXT");
}
static void glad_gl_load_GL_EXT_multisample( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_multisample) return;
    glad_glSampleMaskEXT = (PFNGLSAMPLEMASKEXTPROC) load(userptr, "glSampleMaskEXT");
    glad_glSamplePatternEXT = (PFNGLSAMPLEPATTERNEXTPROC) load(userptr, "glSamplePatternEXT");
}
static void glad_gl_load_GL_EXT_paletted_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_paletted_texture) return;
    glad_glColorTableEXT = (PFNGLCOLORTABLEEXTPROC) load(userptr, "glColorTableEXT");
    glad_glGetColorTableEXT = (PFNGLGETCOLORTABLEEXTPROC) load(userptr, "glGetColorTableEXT");
    glad_glGetColorTableParameterfvEXT = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC) load(userptr, "glGetColorTableParameterfvEXT");
    glad_glGetColorTableParameterivEXT = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC) load(userptr, "glGetColorTableParameterivEXT");
}
static void glad_gl_load_GL_EXT_pixel_transform( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_pixel_transform) return;
    glad_glGetPixelTransformParameterfvEXT = (PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC) load(userptr, "glGetPixelTransformParameterfvEXT");
    glad_glGetPixelTransformParameterivEXT = (PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC) load(userptr, "glGetPixelTransformParameterivEXT");
    glad_glPixelTransformParameterfEXT = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC) load(userptr, "glPixelTransformParameterfEXT");
    glad_glPixelTransformParameterfvEXT = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC) load(userptr, "glPixelTransformParameterfvEXT");
    glad_glPixelTransformParameteriEXT = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC) load(userptr, "glPixelTransformParameteriEXT");
    glad_glPixelTransformParameterivEXT = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC) load(userptr, "glPixelTransformParameterivEXT");
}
static void glad_gl_load_GL_EXT_point_parameters( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_point_parameters) return;
    glad_glPointParameterfEXT = (PFNGLPOINTPARAMETERFEXTPROC) load(userptr, "glPointParameterfEXT");
    glad_glPointParameterfvEXT = (PFNGLPOINTPARAMETERFVEXTPROC) load(userptr, "glPointParameterfvEXT");
}
static void glad_gl_load_GL_EXT_polygon_offset( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_polygon_offset) return;
    glad_glPolygonOffsetEXT = (PFNGLPOLYGONOFFSETEXTPROC) load(userptr, "glPolygonOffsetEXT");
}
static void glad_gl_load_GL_EXT_polygon_offset_clamp( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_polygon_offset_clamp) return;
    glad_glPolygonOffsetClampEXT = (PFNGLPOLYGONOFFSETCLAMPEXTPROC) load(userptr, "glPolygonOffsetClampEXT");
}
static void glad_gl_load_GL_EXT_provoking_vertex( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_provoking_vertex) return;
    glad_glProvokingVertexEXT = (PFNGLPROVOKINGVERTEXEXTPROC) load(userptr, "glProvokingVertexEXT");
}
static void glad_gl_load_GL_EXT_raster_multisample( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_raster_multisample) return;
    glad_glRasterSamplesEXT = (PFNGLRASTERSAMPLESEXTPROC) load(userptr, "glRasterSamplesEXT");
}
static void glad_gl_load_GL_EXT_secondary_color( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_secondary_color) return;
    glad_glSecondaryColor3bEXT = (PFNGLSECONDARYCOLOR3BEXTPROC) load(userptr, "glSecondaryColor3bEXT");
    glad_glSecondaryColor3bvEXT = (PFNGLSECONDARYCOLOR3BVEXTPROC) load(userptr, "glSecondaryColor3bvEXT");
    glad_glSecondaryColor3dEXT = (PFNGLSECONDARYCOLOR3DEXTPROC) load(userptr, "glSecondaryColor3dEXT");
    glad_glSecondaryColor3dvEXT = (PFNGLSECONDARYCOLOR3DVEXTPROC) load(userptr, "glSecondaryColor3dvEXT");
    glad_glSecondaryColor3fEXT = (PFNGLSECONDARYCOLOR3FEXTPROC) load(userptr, "glSecondaryColor3fEXT");
    glad_glSecondaryColor3fvEXT = (PFNGLSECONDARYCOLOR3FVEXTPROC) load(userptr, "glSecondaryColor3fvEXT");
    glad_glSecondaryColor3iEXT = (PFNGLSECONDARYCOLOR3IEXTPROC) load(userptr, "glSecondaryColor3iEXT");
    glad_glSecondaryColor3ivEXT = (PFNGLSECONDARYCOLOR3IVEXTPROC) load(userptr, "glSecondaryColor3ivEXT");
    glad_glSecondaryColor3sEXT = (PFNGLSECONDARYCOLOR3SEXTPROC) load(userptr, "glSecondaryColor3sEXT");
    glad_glSecondaryColor3svEXT = (PFNGLSECONDARYCOLOR3SVEXTPROC) load(userptr, "glSecondaryColor3svEXT");
    glad_glSecondaryColor3ubEXT = (PFNGLSECONDARYCOLOR3UBEXTPROC) load(userptr, "glSecondaryColor3ubEXT");
    glad_glSecondaryColor3ubvEXT = (PFNGLSECONDARYCOLOR3UBVEXTPROC) load(userptr, "glSecondaryColor3ubvEXT");
    glad_glSecondaryColor3uiEXT = (PFNGLSECONDARYCOLOR3UIEXTPROC) load(userptr, "glSecondaryColor3uiEXT");
    glad_glSecondaryColor3uivEXT = (PFNGLSECONDARYCOLOR3UIVEXTPROC) load(userptr, "glSecondaryColor3uivEXT");
    glad_glSecondaryColor3usEXT = (PFNGLSECONDARYCOLOR3USEXTPROC) load(userptr, "glSecondaryColor3usEXT");
    glad_glSecondaryColor3usvEXT = (PFNGLSECONDARYCOLOR3USVEXTPROC) load(userptr, "glSecondaryColor3usvEXT");
    glad_glSecondaryColorPointerEXT = (PFNGLSECONDARYCOLORPOINTEREXTPROC) load(userptr, "glSecondaryColorPointerEXT");
}
static void glad_gl_load_GL_EXT_semaphore( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_semaphore) return;
    glad_glDeleteSemaphoresEXT = (PFNGLDELETESEMAPHORESEXTPROC) load(userptr, "glDeleteSemaphoresEXT");
    glad_glGenSemaphoresEXT = (PFNGLGENSEMAPHORESEXTPROC) load(userptr, "glGenSemaphoresEXT");
    glad_glGetSemaphoreParameterui64vEXT = (PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC) load(userptr, "glGetSemaphoreParameterui64vEXT");
    glad_glGetUnsignedBytei_vEXT = (PFNGLGETUNSIGNEDBYTEI_VEXTPROC) load(userptr, "glGetUnsignedBytei_vEXT");
    glad_glGetUnsignedBytevEXT = (PFNGLGETUNSIGNEDBYTEVEXTPROC) load(userptr, "glGetUnsignedBytevEXT");
    glad_glIsSemaphoreEXT = (PFNGLISSEMAPHOREEXTPROC) load(userptr, "glIsSemaphoreEXT");
    glad_glSemaphoreParameterui64vEXT = (PFNGLSEMAPHOREPARAMETERUI64VEXTPROC) load(userptr, "glSemaphoreParameterui64vEXT");
    glad_glSignalSemaphoreEXT = (PFNGLSIGNALSEMAPHOREEXTPROC) load(userptr, "glSignalSemaphoreEXT");
    glad_glWaitSemaphoreEXT = (PFNGLWAITSEMAPHOREEXTPROC) load(userptr, "glWaitSemaphoreEXT");
}
static void glad_gl_load_GL_EXT_semaphore_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_semaphore_fd) return;
    glad_glImportSemaphoreFdEXT = (PFNGLIMPORTSEMAPHOREFDEXTPROC) load(userptr, "glImportSemaphoreFdEXT");
}
static void glad_gl_load_GL_EXT_semaphore_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_semaphore_win32) return;
    glad_glImportSemaphoreWin32HandleEXT = (PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC) load(userptr, "glImportSemaphoreWin32HandleEXT");
    glad_glImportSemaphoreWin32NameEXT = (PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC) load(userptr, "glImportSemaphoreWin32NameEXT");
}
static void glad_gl_load_GL_EXT_separate_shader_objects( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_separate_shader_objects) return;
    glad_glActiveProgramEXT = (PFNGLACTIVEPROGRAMEXTPROC) load(userptr, "glActiveProgramEXT");
    glad_glCreateShaderProgramEXT = (PFNGLCREATESHADERPROGRAMEXTPROC) load(userptr, "glCreateShaderProgramEXT");
    glad_glUseShaderProgramEXT = (PFNGLUSESHADERPROGRAMEXTPROC) load(userptr, "glUseShaderProgramEXT");
}
static void glad_gl_load_GL_EXT_shader_framebuffer_fetch_non_coherent( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_shader_framebuffer_fetch_non_coherent) return;
    glad_glFramebufferFetchBarrierEXT = (PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) load(userptr, "glFramebufferFetchBarrierEXT");
}
static void glad_gl_load_GL_EXT_shader_image_load_store( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_shader_image_load_store) return;
    glad_glBindImageTextureEXT = (PFNGLBINDIMAGETEXTUREEXTPROC) load(userptr, "glBindImageTextureEXT");
    glad_glMemoryBarrierEXT = (PFNGLMEMORYBARRIEREXTPROC) load(userptr, "glMemoryBarrierEXT");
}
static void glad_gl_load_GL_EXT_stencil_clear_tag( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_stencil_clear_tag) return;
    glad_glStencilClearTagEXT = (PFNGLSTENCILCLEARTAGEXTPROC) load(userptr, "glStencilClearTagEXT");
}
static void glad_gl_load_GL_EXT_stencil_two_side( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_stencil_two_side) return;
    glad_glActiveStencilFaceEXT = (PFNGLACTIVESTENCILFACEEXTPROC) load(userptr, "glActiveStencilFaceEXT");
}
static void glad_gl_load_GL_EXT_subtexture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_subtexture) return;
    glad_glTexSubImage1DEXT = (PFNGLTEXSUBIMAGE1DEXTPROC) load(userptr, "glTexSubImage1DEXT");
    glad_glTexSubImage2DEXT = (PFNGLTEXSUBIMAGE2DEXTPROC) load(userptr, "glTexSubImage2DEXT");
}
static void glad_gl_load_GL_EXT_texture3D( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_texture3D) return;
    glad_glTexImage3DEXT = (PFNGLTEXIMAGE3DEXTPROC) load(userptr, "glTexImage3DEXT");
    glad_glTexSubImage3DEXT = (PFNGLTEXSUBIMAGE3DEXTPROC) load(userptr, "glTexSubImage3DEXT");
}
static void glad_gl_load_GL_EXT_texture_array( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_texture_array) return;
    glad_glFramebufferTextureLayerEXT = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC) load(userptr, "glFramebufferTextureLayerEXT");
}
static void glad_gl_load_GL_EXT_texture_buffer_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_texture_buffer_object) return;
    glad_glTexBufferEXT = (PFNGLTEXBUFFEREXTPROC) load(userptr, "glTexBufferEXT");
}
static void glad_gl_load_GL_EXT_texture_integer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_texture_integer) return;
    glad_glClearColorIiEXT = (PFNGLCLEARCOLORIIEXTPROC) load(userptr, "glClearColorIiEXT");
    glad_glClearColorIuiEXT = (PFNGLCLEARCOLORIUIEXTPROC) load(userptr, "glClearColorIuiEXT");
    glad_glGetTexParameterIivEXT = (PFNGLGETTEXPARAMETERIIVEXTPROC) load(userptr, "glGetTexParameterIivEXT");
    glad_glGetTexParameterIuivEXT = (PFNGLGETTEXPARAMETERIUIVEXTPROC) load(userptr, "glGetTexParameterIuivEXT");
    glad_glTexParameterIivEXT = (PFNGLTEXPARAMETERIIVEXTPROC) load(userptr, "glTexParameterIivEXT");
    glad_glTexParameterIuivEXT = (PFNGLTEXPARAMETERIUIVEXTPROC) load(userptr, "glTexParameterIuivEXT");
}
static void glad_gl_load_GL_EXT_texture_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_texture_object) return;
    glad_glAreTexturesResidentEXT = (PFNGLARETEXTURESRESIDENTEXTPROC) load(userptr, "glAreTexturesResidentEXT");
    glad_glBindTextureEXT = (PFNGLBINDTEXTUREEXTPROC) load(userptr, "glBindTextureEXT");
    glad_glDeleteTexturesEXT = (PFNGLDELETETEXTURESEXTPROC) load(userptr, "glDeleteTexturesEXT");
    glad_glGenTexturesEXT = (PFNGLGENTEXTURESEXTPROC) load(userptr, "glGenTexturesEXT");
    glad_glIsTextureEXT = (PFNGLISTEXTUREEXTPROC) load(userptr, "glIsTextureEXT");
    glad_glPrioritizeTexturesEXT = (PFNGLPRIORITIZETEXTURESEXTPROC) load(userptr, "glPrioritizeTexturesEXT");
}
static void glad_gl_load_GL_EXT_texture_perturb_normal( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_texture_perturb_normal) return;
    glad_glTextureNormalEXT = (PFNGLTEXTURENORMALEXTPROC) load(userptr, "glTextureNormalEXT");
}
static void glad_gl_load_GL_EXT_texture_storage( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_texture_storage) return;
    glad_glTexStorage1DEXT = (PFNGLTEXSTORAGE1DEXTPROC) load(userptr, "glTexStorage1DEXT");
    glad_glTexStorage2DEXT = (PFNGLTEXSTORAGE2DEXTPROC) load(userptr, "glTexStorage2DEXT");
    glad_glTexStorage3DEXT = (PFNGLTEXSTORAGE3DEXTPROC) load(userptr, "glTexStorage3DEXT");
    glad_glTextureStorage1DEXT = (PFNGLTEXTURESTORAGE1DEXTPROC) load(userptr, "glTextureStorage1DEXT");
    glad_glTextureStorage2DEXT = (PFNGLTEXTURESTORAGE2DEXTPROC) load(userptr, "glTextureStorage2DEXT");
    glad_glTextureStorage3DEXT = (PFNGLTEXTURESTORAGE3DEXTPROC) load(userptr, "glTextureStorage3DEXT");
}
static void glad_gl_load_GL_EXT_timer_query( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_timer_query) return;
    glad_glGetQueryObjecti64vEXT = (PFNGLGETQUERYOBJECTI64VEXTPROC) load(userptr, "glGetQueryObjecti64vEXT");
    glad_glGetQueryObjectui64vEXT = (PFNGLGETQUERYOBJECTUI64VEXTPROC) load(userptr, "glGetQueryObjectui64vEXT");
}
static void glad_gl_load_GL_EXT_transform_feedback( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_transform_feedback) return;
    glad_glBeginTransformFeedbackEXT = (PFNGLBEGINTRANSFORMFEEDBACKEXTPROC) load(userptr, "glBeginTransformFeedbackEXT");
    glad_glBindBufferBaseEXT = (PFNGLBINDBUFFERBASEEXTPROC) load(userptr, "glBindBufferBaseEXT");
    glad_glBindBufferOffsetEXT = (PFNGLBINDBUFFEROFFSETEXTPROC) load(userptr, "glBindBufferOffsetEXT");
    glad_glBindBufferRangeEXT = (PFNGLBINDBUFFERRANGEEXTPROC) load(userptr, "glBindBufferRangeEXT");
    glad_glEndTransformFeedbackEXT = (PFNGLENDTRANSFORMFEEDBACKEXTPROC) load(userptr, "glEndTransformFeedbackEXT");
    glad_glGetTransformFeedbackVaryingEXT = (PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC) load(userptr, "glGetTransformFeedbackVaryingEXT");
    glad_glTransformFeedbackVaryingsEXT = (PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC) load(userptr, "glTransformFeedbackVaryingsEXT");
}
static void glad_gl_load_GL_EXT_vertex_array( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_vertex_array) return;
    glad_glArrayElementEXT = (PFNGLARRAYELEMENTEXTPROC) load(userptr, "glArrayElementEXT");
    glad_glColorPointerEXT = (PFNGLCOLORPOINTEREXTPROC) load(userptr, "glColorPointerEXT");
    glad_glDrawArraysEXT = (PFNGLDRAWARRAYSEXTPROC) load(userptr, "glDrawArraysEXT");
    glad_glEdgeFlagPointerEXT = (PFNGLEDGEFLAGPOINTEREXTPROC) load(userptr, "glEdgeFlagPointerEXT");
    glad_glGetPointervEXT = (PFNGLGETPOINTERVEXTPROC) load(userptr, "glGetPointervEXT");
    glad_glIndexPointerEXT = (PFNGLINDEXPOINTEREXTPROC) load(userptr, "glIndexPointerEXT");
    glad_glNormalPointerEXT = (PFNGLNORMALPOINTEREXTPROC) load(userptr, "glNormalPointerEXT");
    glad_glTexCoordPointerEXT = (PFNGLTEXCOORDPOINTEREXTPROC) load(userptr, "glTexCoordPointerEXT");
    glad_glVertexPointerEXT = (PFNGLVERTEXPOINTEREXTPROC) load(userptr, "glVertexPointerEXT");
}
static void glad_gl_load_GL_EXT_vertex_attrib_64bit( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_vertex_attrib_64bit) return;
    glad_glGetVertexAttribLdvEXT = (PFNGLGETVERTEXATTRIBLDVEXTPROC) load(userptr, "glGetVertexAttribLdvEXT");
    glad_glVertexAttribL1dEXT = (PFNGLVERTEXATTRIBL1DEXTPROC) load(userptr, "glVertexAttribL1dEXT");
    glad_glVertexAttribL1dvEXT = (PFNGLVERTEXATTRIBL1DVEXTPROC) load(userptr, "glVertexAttribL1dvEXT");
    glad_glVertexAttribL2dEXT = (PFNGLVERTEXATTRIBL2DEXTPROC) load(userptr, "glVertexAttribL2dEXT");
    glad_glVertexAttribL2dvEXT = (PFNGLVERTEXATTRIBL2DVEXTPROC) load(userptr, "glVertexAttribL2dvEXT");
    glad_glVertexAttribL3dEXT = (PFNGLVERTEXATTRIBL3DEXTPROC) load(userptr, "glVertexAttribL3dEXT");
    glad_glVertexAttribL3dvEXT = (PFNGLVERTEXATTRIBL3DVEXTPROC) load(userptr, "glVertexAttribL3dvEXT");
    glad_glVertexAttribL4dEXT = (PFNGLVERTEXATTRIBL4DEXTPROC) load(userptr, "glVertexAttribL4dEXT");
    glad_glVertexAttribL4dvEXT = (PFNGLVERTEXATTRIBL4DVEXTPROC) load(userptr, "glVertexAttribL4dvEXT");
    glad_glVertexAttribLPointerEXT = (PFNGLVERTEXATTRIBLPOINTEREXTPROC) load(userptr, "glVertexAttribLPointerEXT");
}
static void glad_gl_load_GL_EXT_vertex_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_vertex_shader) return;
    glad_glBeginVertexShaderEXT = (PFNGLBEGINVERTEXSHADEREXTPROC) load(userptr, "glBeginVertexShaderEXT");
    glad_glBindLightParameterEXT = (PFNGLBINDLIGHTPARAMETEREXTPROC) load(userptr, "glBindLightParameterEXT");
    glad_glBindMaterialParameterEXT = (PFNGLBINDMATERIALPARAMETEREXTPROC) load(userptr, "glBindMaterialParameterEXT");
    glad_glBindParameterEXT = (PFNGLBINDPARAMETEREXTPROC) load(userptr, "glBindParameterEXT");
    glad_glBindTexGenParameterEXT = (PFNGLBINDTEXGENPARAMETEREXTPROC) load(userptr, "glBindTexGenParameterEXT");
    glad_glBindTextureUnitParameterEXT = (PFNGLBINDTEXTUREUNITPARAMETEREXTPROC) load(userptr, "glBindTextureUnitParameterEXT");
    glad_glBindVertexShaderEXT = (PFNGLBINDVERTEXSHADEREXTPROC) load(userptr, "glBindVertexShaderEXT");
    glad_glDeleteVertexShaderEXT = (PFNGLDELETEVERTEXSHADEREXTPROC) load(userptr, "glDeleteVertexShaderEXT");
    glad_glDisableVariantClientStateEXT = (PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC) load(userptr, "glDisableVariantClientStateEXT");
    glad_glEnableVariantClientStateEXT = (PFNGLENABLEVARIANTCLIENTSTATEEXTPROC) load(userptr, "glEnableVariantClientStateEXT");
    glad_glEndVertexShaderEXT = (PFNGLENDVERTEXSHADEREXTPROC) load(userptr, "glEndVertexShaderEXT");
    glad_glExtractComponentEXT = (PFNGLEXTRACTCOMPONENTEXTPROC) load(userptr, "glExtractComponentEXT");
    glad_glGenSymbolsEXT = (PFNGLGENSYMBOLSEXTPROC) load(userptr, "glGenSymbolsEXT");
    glad_glGenVertexShadersEXT = (PFNGLGENVERTEXSHADERSEXTPROC) load(userptr, "glGenVertexShadersEXT");
    glad_glGetInvariantBooleanvEXT = (PFNGLGETINVARIANTBOOLEANVEXTPROC) load(userptr, "glGetInvariantBooleanvEXT");
    glad_glGetInvariantFloatvEXT = (PFNGLGETINVARIANTFLOATVEXTPROC) load(userptr, "glGetInvariantFloatvEXT");
    glad_glGetInvariantIntegervEXT = (PFNGLGETINVARIANTINTEGERVEXTPROC) load(userptr, "glGetInvariantIntegervEXT");
    glad_glGetLocalConstantBooleanvEXT = (PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC) load(userptr, "glGetLocalConstantBooleanvEXT");
    glad_glGetLocalConstantFloatvEXT = (PFNGLGETLOCALCONSTANTFLOATVEXTPROC) load(userptr, "glGetLocalConstantFloatvEXT");
    glad_glGetLocalConstantIntegervEXT = (PFNGLGETLOCALCONSTANTINTEGERVEXTPROC) load(userptr, "glGetLocalConstantIntegervEXT");
    glad_glGetVariantBooleanvEXT = (PFNGLGETVARIANTBOOLEANVEXTPROC) load(userptr, "glGetVariantBooleanvEXT");
    glad_glGetVariantFloatvEXT = (PFNGLGETVARIANTFLOATVEXTPROC) load(userptr, "glGetVariantFloatvEXT");
    glad_glGetVariantIntegervEXT = (PFNGLGETVARIANTINTEGERVEXTPROC) load(userptr, "glGetVariantIntegervEXT");
    glad_glGetVariantPointervEXT = (PFNGLGETVARIANTPOINTERVEXTPROC) load(userptr, "glGetVariantPointervEXT");
    glad_glInsertComponentEXT = (PFNGLINSERTCOMPONENTEXTPROC) load(userptr, "glInsertComponentEXT");
    glad_glIsVariantEnabledEXT = (PFNGLISVARIANTENABLEDEXTPROC) load(userptr, "glIsVariantEnabledEXT");
    glad_glSetInvariantEXT = (PFNGLSETINVARIANTEXTPROC) load(userptr, "glSetInvariantEXT");
    glad_glSetLocalConstantEXT = (PFNGLSETLOCALCONSTANTEXTPROC) load(userptr, "glSetLocalConstantEXT");
    glad_glShaderOp1EXT = (PFNGLSHADEROP1EXTPROC) load(userptr, "glShaderOp1EXT");
    glad_glShaderOp2EXT = (PFNGLSHADEROP2EXTPROC) load(userptr, "glShaderOp2EXT");
    glad_glShaderOp3EXT = (PFNGLSHADEROP3EXTPROC) load(userptr, "glShaderOp3EXT");
    glad_glSwizzleEXT = (PFNGLSWIZZLEEXTPROC) load(userptr, "glSwizzleEXT");
    glad_glVariantPointerEXT = (PFNGLVARIANTPOINTEREXTPROC) load(userptr, "glVariantPointerEXT");
    glad_glVariantbvEXT = (PFNGLVARIANTBVEXTPROC) load(userptr, "glVariantbvEXT");
    glad_glVariantdvEXT = (PFNGLVARIANTDVEXTPROC) load(userptr, "glVariantdvEXT");
    glad_glVariantfvEXT = (PFNGLVARIANTFVEXTPROC) load(userptr, "glVariantfvEXT");
    glad_glVariantivEXT = (PFNGLVARIANTIVEXTPROC) load(userptr, "glVariantivEXT");
    glad_glVariantsvEXT = (PFNGLVARIANTSVEXTPROC) load(userptr, "glVariantsvEXT");
    glad_glVariantubvEXT = (PFNGLVARIANTUBVEXTPROC) load(userptr, "glVariantubvEXT");
    glad_glVariantuivEXT = (PFNGLVARIANTUIVEXTPROC) load(userptr, "glVariantuivEXT");
    glad_glVariantusvEXT = (PFNGLVARIANTUSVEXTPROC) load(userptr, "glVariantusvEXT");
    glad_glWriteMaskEXT = (PFNGLWRITEMASKEXTPROC) load(userptr, "glWriteMaskEXT");
}
static void glad_gl_load_GL_EXT_vertex_weighting( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_vertex_weighting) return;
    glad_glVertexWeightPointerEXT = (PFNGLVERTEXWEIGHTPOINTEREXTPROC) load(userptr, "glVertexWeightPointerEXT");
    glad_glVertexWeightfEXT = (PFNGLVERTEXWEIGHTFEXTPROC) load(userptr, "glVertexWeightfEXT");
    glad_glVertexWeightfvEXT = (PFNGLVERTEXWEIGHTFVEXTPROC) load(userptr, "glVertexWeightfvEXT");
}
static void glad_gl_load_GL_EXT_win32_keyed_mutex( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_win32_keyed_mutex) return;
    glad_glAcquireKeyedMutexWin32EXT = (PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC) load(userptr, "glAcquireKeyedMutexWin32EXT");
    glad_glReleaseKeyedMutexWin32EXT = (PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC) load(userptr, "glReleaseKeyedMutexWin32EXT");
}
static void glad_gl_load_GL_EXT_window_rectangles( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_window_rectangles) return;
    glad_glWindowRectanglesEXT = (PFNGLWINDOWRECTANGLESEXTPROC) load(userptr, "glWindowRectanglesEXT");
}
static void glad_gl_load_GL_EXT_x11_sync_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_EXT_x11_sync_object) return;
    glad_glImportSyncEXT = (PFNGLIMPORTSYNCEXTPROC) load(userptr, "glImportSyncEXT");
}
static void glad_gl_load_GL_KHR_blend_equation_advanced( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_KHR_blend_equation_advanced) return;
    glad_glBlendBarrierKHR = (PFNGLBLENDBARRIERKHRPROC) load(userptr, "glBlendBarrierKHR");
}
static void glad_gl_load_GL_KHR_debug( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_KHR_debug) return;
    glad_glDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKPROC) load(userptr, "glDebugMessageCallback");
    glad_glDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLPROC) load(userptr, "glDebugMessageControl");
    glad_glDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTPROC) load(userptr, "glDebugMessageInsert");
    glad_glGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGPROC) load(userptr, "glGetDebugMessageLog");
    glad_glGetObjectLabel = (PFNGLGETOBJECTLABELPROC) load(userptr, "glGetObjectLabel");
    glad_glGetObjectPtrLabel = (PFNGLGETOBJECTPTRLABELPROC) load(userptr, "glGetObjectPtrLabel");
    glad_glGetPointerv = (PFNGLGETPOINTERVPROC) load(userptr, "glGetPointerv");
    glad_glObjectLabel = (PFNGLOBJECTLABELPROC) load(userptr, "glObjectLabel");
    glad_glObjectPtrLabel = (PFNGLOBJECTPTRLABELPROC) load(userptr, "glObjectPtrLabel");
    glad_glPopDebugGroup = (PFNGLPOPDEBUGGROUPPROC) load(userptr, "glPopDebugGroup");
    glad_glPushDebugGroup = (PFNGLPUSHDEBUGGROUPPROC) load(userptr, "glPushDebugGroup");
}
static void glad_gl_load_GL_KHR_parallel_shader_compile( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_KHR_parallel_shader_compile) return;
    glad_glMaxShaderCompilerThreadsKHR = (PFNGLMAXSHADERCOMPILERTHREADSKHRPROC) load(userptr, "glMaxShaderCompilerThreadsKHR");
}
static void glad_gl_load_GL_KHR_robustness( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_KHR_robustness) return;
    glad_glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC) load(userptr, "glGetGraphicsResetStatus");
    glad_glGetnUniformfv = (PFNGLGETNUNIFORMFVPROC) load(userptr, "glGetnUniformfv");
    glad_glGetnUniformiv = (PFNGLGETNUNIFORMIVPROC) load(userptr, "glGetnUniformiv");
    glad_glGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC) load(userptr, "glGetnUniformuiv");
    glad_glReadnPixels = (PFNGLREADNPIXELSPROC) load(userptr, "glReadnPixels");
}
static void glad_gl_load_GL_OES_byte_coordinates( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_OES_byte_coordinates) return;
    glad_glMultiTexCoord1bOES = (PFNGLMULTITEXCOORD1BOESPROC) load(userptr, "glMultiTexCoord1bOES");
    glad_glMultiTexCoord1bvOES = (PFNGLMULTITEXCOORD1BVOESPROC) load(userptr, "glMultiTexCoord1bvOES");
    glad_glMultiTexCoord2bOES = (PFNGLMULTITEXCOORD2BOESPROC) load(userptr, "glMultiTexCoord2bOES");
    glad_glMultiTexCoord2bvOES = (PFNGLMULTITEXCOORD2BVOESPROC) load(userptr, "glMultiTexCoord2bvOES");
    glad_glMultiTexCoord3bOES = (PFNGLMULTITEXCOORD3BOESPROC) load(userptr, "glMultiTexCoord3bOES");
    glad_glMultiTexCoord3bvOES = (PFNGLMULTITEXCOORD3BVOESPROC) load(userptr, "glMultiTexCoord3bvOES");
    glad_glMultiTexCoord4bOES = (PFNGLMULTITEXCOORD4BOESPROC) load(userptr, "glMultiTexCoord4bOES");
    glad_glMultiTexCoord4bvOES = (PFNGLMULTITEXCOORD4BVOESPROC) load(userptr, "glMultiTexCoord4bvOES");
    glad_glTexCoord1bOES = (PFNGLTEXCOORD1BOESPROC) load(userptr, "glTexCoord1bOES");
    glad_glTexCoord1bvOES = (PFNGLTEXCOORD1BVOESPROC) load(userptr, "glTexCoord1bvOES");
    glad_glTexCoord2bOES = (PFNGLTEXCOORD2BOESPROC) load(userptr, "glTexCoord2bOES");
    glad_glTexCoord2bvOES = (PFNGLTEXCOORD2BVOESPROC) load(userptr, "glTexCoord2bvOES");
    glad_glTexCoord3bOES = (PFNGLTEXCOORD3BOESPROC) load(userptr, "glTexCoord3bOES");
    glad_glTexCoord3bvOES = (PFNGLTEXCOORD3BVOESPROC) load(userptr, "glTexCoord3bvOES");
    glad_glTexCoord4bOES = (PFNGLTEXCOORD4BOESPROC) load(userptr, "glTexCoord4bOES");
    glad_glTexCoord4bvOES = (PFNGLTEXCOORD4BVOESPROC) load(userptr, "glTexCoord4bvOES");
    glad_glVertex2bOES = (PFNGLVERTEX2BOESPROC) load(userptr, "glVertex2bOES");
    glad_glVertex2bvOES = (PFNGLVERTEX2BVOESPROC) load(userptr, "glVertex2bvOES");
    glad_glVertex3bOES = (PFNGLVERTEX3BOESPROC) load(userptr, "glVertex3bOES");
    glad_glVertex3bvOES = (PFNGLVERTEX3BVOESPROC) load(userptr, "glVertex3bvOES");
    glad_glVertex4bOES = (PFNGLVERTEX4BOESPROC) load(userptr, "glVertex4bOES");
    glad_glVertex4bvOES = (PFNGLVERTEX4BVOESPROC) load(userptr, "glVertex4bvOES");
}
static void glad_gl_load_GL_OES_fixed_point( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_OES_fixed_point) return;
    glad_glAccumxOES = (PFNGLACCUMXOESPROC) load(userptr, "glAccumxOES");
    glad_glAlphaFuncxOES = (PFNGLALPHAFUNCXOESPROC) load(userptr, "glAlphaFuncxOES");
    glad_glBitmapxOES = (PFNGLBITMAPXOESPROC) load(userptr, "glBitmapxOES");
    glad_glBlendColorxOES = (PFNGLBLENDCOLORXOESPROC) load(userptr, "glBlendColorxOES");
    glad_glClearAccumxOES = (PFNGLCLEARACCUMXOESPROC) load(userptr, "glClearAccumxOES");
    glad_glClearColorxOES = (PFNGLCLEARCOLORXOESPROC) load(userptr, "glClearColorxOES");
    glad_glClearDepthxOES = (PFNGLCLEARDEPTHXOESPROC) load(userptr, "glClearDepthxOES");
    glad_glClipPlanexOES = (PFNGLCLIPPLANEXOESPROC) load(userptr, "glClipPlanexOES");
    glad_glColor3xOES = (PFNGLCOLOR3XOESPROC) load(userptr, "glColor3xOES");
    glad_glColor3xvOES = (PFNGLCOLOR3XVOESPROC) load(userptr, "glColor3xvOES");
    glad_glColor4xOES = (PFNGLCOLOR4XOESPROC) load(userptr, "glColor4xOES");
    glad_glColor4xvOES = (PFNGLCOLOR4XVOESPROC) load(userptr, "glColor4xvOES");
    glad_glConvolutionParameterxOES = (PFNGLCONVOLUTIONPARAMETERXOESPROC) load(userptr, "glConvolutionParameterxOES");
    glad_glConvolutionParameterxvOES = (PFNGLCONVOLUTIONPARAMETERXVOESPROC) load(userptr, "glConvolutionParameterxvOES");
    glad_glDepthRangexOES = (PFNGLDEPTHRANGEXOESPROC) load(userptr, "glDepthRangexOES");
    glad_glEvalCoord1xOES = (PFNGLEVALCOORD1XOESPROC) load(userptr, "glEvalCoord1xOES");
    glad_glEvalCoord1xvOES = (PFNGLEVALCOORD1XVOESPROC) load(userptr, "glEvalCoord1xvOES");
    glad_glEvalCoord2xOES = (PFNGLEVALCOORD2XOESPROC) load(userptr, "glEvalCoord2xOES");
    glad_glEvalCoord2xvOES = (PFNGLEVALCOORD2XVOESPROC) load(userptr, "glEvalCoord2xvOES");
    glad_glFeedbackBufferxOES = (PFNGLFEEDBACKBUFFERXOESPROC) load(userptr, "glFeedbackBufferxOES");
    glad_glFogxOES = (PFNGLFOGXOESPROC) load(userptr, "glFogxOES");
    glad_glFogxvOES = (PFNGLFOGXVOESPROC) load(userptr, "glFogxvOES");
    glad_glFrustumxOES = (PFNGLFRUSTUMXOESPROC) load(userptr, "glFrustumxOES");
    glad_glGetClipPlanexOES = (PFNGLGETCLIPPLANEXOESPROC) load(userptr, "glGetClipPlanexOES");
    glad_glGetConvolutionParameterxvOES = (PFNGLGETCONVOLUTIONPARAMETERXVOESPROC) load(userptr, "glGetConvolutionParameterxvOES");
    glad_glGetFixedvOES = (PFNGLGETFIXEDVOESPROC) load(userptr, "glGetFixedvOES");
    glad_glGetHistogramParameterxvOES = (PFNGLGETHISTOGRAMPARAMETERXVOESPROC) load(userptr, "glGetHistogramParameterxvOES");
    glad_glGetLightxOES = (PFNGLGETLIGHTXOESPROC) load(userptr, "glGetLightxOES");
    glad_glGetMapxvOES = (PFNGLGETMAPXVOESPROC) load(userptr, "glGetMapxvOES");
    glad_glGetMaterialxOES = (PFNGLGETMATERIALXOESPROC) load(userptr, "glGetMaterialxOES");
    glad_glGetPixelMapxv = (PFNGLGETPIXELMAPXVPROC) load(userptr, "glGetPixelMapxv");
    glad_glGetTexEnvxvOES = (PFNGLGETTEXENVXVOESPROC) load(userptr, "glGetTexEnvxvOES");
    glad_glGetTexGenxvOES = (PFNGLGETTEXGENXVOESPROC) load(userptr, "glGetTexGenxvOES");
    glad_glGetTexLevelParameterxvOES = (PFNGLGETTEXLEVELPARAMETERXVOESPROC) load(userptr, "glGetTexLevelParameterxvOES");
    glad_glGetTexParameterxvOES = (PFNGLGETTEXPARAMETERXVOESPROC) load(userptr, "glGetTexParameterxvOES");
    glad_glIndexxOES = (PFNGLINDEXXOESPROC) load(userptr, "glIndexxOES");
    glad_glIndexxvOES = (PFNGLINDEXXVOESPROC) load(userptr, "glIndexxvOES");
    glad_glLightModelxOES = (PFNGLLIGHTMODELXOESPROC) load(userptr, "glLightModelxOES");
    glad_glLightModelxvOES = (PFNGLLIGHTMODELXVOESPROC) load(userptr, "glLightModelxvOES");
    glad_glLightxOES = (PFNGLLIGHTXOESPROC) load(userptr, "glLightxOES");
    glad_glLightxvOES = (PFNGLLIGHTXVOESPROC) load(userptr, "glLightxvOES");
    glad_glLineWidthxOES = (PFNGLLINEWIDTHXOESPROC) load(userptr, "glLineWidthxOES");
    glad_glLoadMatrixxOES = (PFNGLLOADMATRIXXOESPROC) load(userptr, "glLoadMatrixxOES");
    glad_glLoadTransposeMatrixxOES = (PFNGLLOADTRANSPOSEMATRIXXOESPROC) load(userptr, "glLoadTransposeMatrixxOES");
    glad_glMap1xOES = (PFNGLMAP1XOESPROC) load(userptr, "glMap1xOES");
    glad_glMap2xOES = (PFNGLMAP2XOESPROC) load(userptr, "glMap2xOES");
    glad_glMapGrid1xOES = (PFNGLMAPGRID1XOESPROC) load(userptr, "glMapGrid1xOES");
    glad_glMapGrid2xOES = (PFNGLMAPGRID2XOESPROC) load(userptr, "glMapGrid2xOES");
    glad_glMaterialxOES = (PFNGLMATERIALXOESPROC) load(userptr, "glMaterialxOES");
    glad_glMaterialxvOES = (PFNGLMATERIALXVOESPROC) load(userptr, "glMaterialxvOES");
    glad_glMultMatrixxOES = (PFNGLMULTMATRIXXOESPROC) load(userptr, "glMultMatrixxOES");
    glad_glMultTransposeMatrixxOES = (PFNGLMULTTRANSPOSEMATRIXXOESPROC) load(userptr, "glMultTransposeMatrixxOES");
    glad_glMultiTexCoord1xOES = (PFNGLMULTITEXCOORD1XOESPROC) load(userptr, "glMultiTexCoord1xOES");
    glad_glMultiTexCoord1xvOES = (PFNGLMULTITEXCOORD1XVOESPROC) load(userptr, "glMultiTexCoord1xvOES");
    glad_glMultiTexCoord2xOES = (PFNGLMULTITEXCOORD2XOESPROC) load(userptr, "glMultiTexCoord2xOES");
    glad_glMultiTexCoord2xvOES = (PFNGLMULTITEXCOORD2XVOESPROC) load(userptr, "glMultiTexCoord2xvOES");
    glad_glMultiTexCoord3xOES = (PFNGLMULTITEXCOORD3XOESPROC) load(userptr, "glMultiTexCoord3xOES");
    glad_glMultiTexCoord3xvOES = (PFNGLMULTITEXCOORD3XVOESPROC) load(userptr, "glMultiTexCoord3xvOES");
    glad_glMultiTexCoord4xOES = (PFNGLMULTITEXCOORD4XOESPROC) load(userptr, "glMultiTexCoord4xOES");
    glad_glMultiTexCoord4xvOES = (PFNGLMULTITEXCOORD4XVOESPROC) load(userptr, "glMultiTexCoord4xvOES");
    glad_glNormal3xOES = (PFNGLNORMAL3XOESPROC) load(userptr, "glNormal3xOES");
    glad_glNormal3xvOES = (PFNGLNORMAL3XVOESPROC) load(userptr, "glNormal3xvOES");
    glad_glOrthoxOES = (PFNGLORTHOXOESPROC) load(userptr, "glOrthoxOES");
    glad_glPassThroughxOES = (PFNGLPASSTHROUGHXOESPROC) load(userptr, "glPassThroughxOES");
    glad_glPixelMapx = (PFNGLPIXELMAPXPROC) load(userptr, "glPixelMapx");
    glad_glPixelStorex = (PFNGLPIXELSTOREXPROC) load(userptr, "glPixelStorex");
    glad_glPixelTransferxOES = (PFNGLPIXELTRANSFERXOESPROC) load(userptr, "glPixelTransferxOES");
    glad_glPixelZoomxOES = (PFNGLPIXELZOOMXOESPROC) load(userptr, "glPixelZoomxOES");
    glad_glPointParameterxvOES = (PFNGLPOINTPARAMETERXVOESPROC) load(userptr, "glPointParameterxvOES");
    glad_glPointSizexOES = (PFNGLPOINTSIZEXOESPROC) load(userptr, "glPointSizexOES");
    glad_glPolygonOffsetxOES = (PFNGLPOLYGONOFFSETXOESPROC) load(userptr, "glPolygonOffsetxOES");
    glad_glPrioritizeTexturesxOES = (PFNGLPRIORITIZETEXTURESXOESPROC) load(userptr, "glPrioritizeTexturesxOES");
    glad_glRasterPos2xOES = (PFNGLRASTERPOS2XOESPROC) load(userptr, "glRasterPos2xOES");
    glad_glRasterPos2xvOES = (PFNGLRASTERPOS2XVOESPROC) load(userptr, "glRasterPos2xvOES");
    glad_glRasterPos3xOES = (PFNGLRASTERPOS3XOESPROC) load(userptr, "glRasterPos3xOES");
    glad_glRasterPos3xvOES = (PFNGLRASTERPOS3XVOESPROC) load(userptr, "glRasterPos3xvOES");
    glad_glRasterPos4xOES = (PFNGLRASTERPOS4XOESPROC) load(userptr, "glRasterPos4xOES");
    glad_glRasterPos4xvOES = (PFNGLRASTERPOS4XVOESPROC) load(userptr, "glRasterPos4xvOES");
    glad_glRectxOES = (PFNGLRECTXOESPROC) load(userptr, "glRectxOES");
    glad_glRectxvOES = (PFNGLRECTXVOESPROC) load(userptr, "glRectxvOES");
    glad_glRotatexOES = (PFNGLROTATEXOESPROC) load(userptr, "glRotatexOES");
    glad_glScalexOES = (PFNGLSCALEXOESPROC) load(userptr, "glScalexOES");
    glad_glTexCoord1xOES = (PFNGLTEXCOORD1XOESPROC) load(userptr, "glTexCoord1xOES");
    glad_glTexCoord1xvOES = (PFNGLTEXCOORD1XVOESPROC) load(userptr, "glTexCoord1xvOES");
    glad_glTexCoord2xOES = (PFNGLTEXCOORD2XOESPROC) load(userptr, "glTexCoord2xOES");
    glad_glTexCoord2xvOES = (PFNGLTEXCOORD2XVOESPROC) load(userptr, "glTexCoord2xvOES");
    glad_glTexCoord3xOES = (PFNGLTEXCOORD3XOESPROC) load(userptr, "glTexCoord3xOES");
    glad_glTexCoord3xvOES = (PFNGLTEXCOORD3XVOESPROC) load(userptr, "glTexCoord3xvOES");
    glad_glTexCoord4xOES = (PFNGLTEXCOORD4XOESPROC) load(userptr, "glTexCoord4xOES");
    glad_glTexCoord4xvOES = (PFNGLTEXCOORD4XVOESPROC) load(userptr, "glTexCoord4xvOES");
    glad_glTexEnvxOES = (PFNGLTEXENVXOESPROC) load(userptr, "glTexEnvxOES");
    glad_glTexEnvxvOES = (PFNGLTEXENVXVOESPROC) load(userptr, "glTexEnvxvOES");
    glad_glTexGenxOES = (PFNGLTEXGENXOESPROC) load(userptr, "glTexGenxOES");
    glad_glTexGenxvOES = (PFNGLTEXGENXVOESPROC) load(userptr, "glTexGenxvOES");
    glad_glTexParameterxOES = (PFNGLTEXPARAMETERXOESPROC) load(userptr, "glTexParameterxOES");
    glad_glTexParameterxvOES = (PFNGLTEXPARAMETERXVOESPROC) load(userptr, "glTexParameterxvOES");
    glad_glTranslatexOES = (PFNGLTRANSLATEXOESPROC) load(userptr, "glTranslatexOES");
    glad_glVertex2xOES = (PFNGLVERTEX2XOESPROC) load(userptr, "glVertex2xOES");
    glad_glVertex2xvOES = (PFNGLVERTEX2XVOESPROC) load(userptr, "glVertex2xvOES");
    glad_glVertex3xOES = (PFNGLVERTEX3XOESPROC) load(userptr, "glVertex3xOES");
    glad_glVertex3xvOES = (PFNGLVERTEX3XVOESPROC) load(userptr, "glVertex3xvOES");
    glad_glVertex4xOES = (PFNGLVERTEX4XOESPROC) load(userptr, "glVertex4xOES");
    glad_glVertex4xvOES = (PFNGLVERTEX4XVOESPROC) load(userptr, "glVertex4xvOES");
}
static void glad_gl_load_GL_OES_query_matrix( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_OES_query_matrix) return;
    glad_glQueryMatrixxOES = (PFNGLQUERYMATRIXXOESPROC) load(userptr, "glQueryMatrixxOES");
}
static void glad_gl_load_GL_OES_single_precision( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_OES_single_precision) return;
    glad_glClearDepthfOES = (PFNGLCLEARDEPTHFOESPROC) load(userptr, "glClearDepthfOES");
    glad_glClipPlanefOES = (PFNGLCLIPPLANEFOESPROC) load(userptr, "glClipPlanefOES");
    glad_glDepthRangefOES = (PFNGLDEPTHRANGEFOESPROC) load(userptr, "glDepthRangefOES");
    glad_glFrustumfOES = (PFNGLFRUSTUMFOESPROC) load(userptr, "glFrustumfOES");
    glad_glGetClipPlanefOES = (PFNGLGETCLIPPLANEFOESPROC) load(userptr, "glGetClipPlanefOES");
    glad_glOrthofOES = (PFNGLORTHOFOESPROC) load(userptr, "glOrthofOES");
}



static void glad_gl_free_extensions(char **exts_i) {
    if (exts_i != NULL) {
        unsigned int index;
        for(index = 0; exts_i[index]; index++) {
            free((void *) (exts_i[index]));
        }
        free((void *)exts_i);
        exts_i = NULL;
    }
}
static int glad_gl_get_extensions( const char **out_exts, char ***out_exts_i) {
#if defined(GL_ES_VERSION_3_0) || defined(GL_VERSION_3_0)
    if (glad_glGetStringi != NULL && glad_glGetIntegerv != NULL) {
        unsigned int index = 0;
        unsigned int num_exts_i = 0;
        char **exts_i = NULL;
        glad_glGetIntegerv(GL_NUM_EXTENSIONS, (int*) &num_exts_i);
        exts_i = (char **) malloc((num_exts_i + 1) * (sizeof *exts_i));
        if (exts_i == NULL) {
            return 0;
        }
        for(index = 0; index < num_exts_i; index++) {
            const char *gl_str_tmp = (const char*) glad_glGetStringi(GL_EXTENSIONS, index);
            size_t len = strlen(gl_str_tmp) + 1;

            char *local_str = (char*) malloc(len * sizeof(char));
            if(local_str == NULL) {
                exts_i[index] = NULL;
                glad_gl_free_extensions(exts_i);
                return 0;
            }

            memcpy(local_str, gl_str_tmp, len * sizeof(char));
            exts_i[index] = local_str;
        }
        exts_i[index] = NULL;

        *out_exts_i = exts_i;

        return 1;
    }
#else
    GLAD_UNUSED(out_exts_i);
#endif
    if (glad_glGetString == NULL) {
        return 0;
    }
    *out_exts = (const char *)glad_glGetString(GL_EXTENSIONS);
    return 1;
}
static int glad_gl_has_extension(const char *exts, char **exts_i, const char *ext) {
    if(exts_i) {
        unsigned int index;
        for(index = 0; exts_i[index]; index++) {
            const char *e = exts_i[index];
            if(strcmp(e, ext) == 0) {
                return 1;
            }
        }
    } else {
        const char *extensions;
        const char *loc;
        const char *terminator;
        extensions = exts;
        if(extensions == NULL || ext == NULL) {
            return 0;
        }
        while(1) {
            loc = strstr(extensions, ext);
            if(loc == NULL) {
                return 0;
            }
            terminator = loc + strlen(ext);
            if((loc == extensions || *(loc - 1) == ' ') &&
                (*terminator == ' ' || *terminator == '\0')) {
                return 1;
            }
            extensions = terminator;
        }
    }
    return 0;
}

static GLADapiproc glad_gl_get_proc_from_userptr(void *userptr, const char* name) {
    return (GLAD_GNUC_EXTENSION (GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glad_gl_find_extensions_gl(void) {
    const char *exts = NULL;
    char **exts_i = NULL;
    if (!glad_gl_get_extensions(&exts, &exts_i)) return 0;

    GLAD_GL_ARB_ES2_compatibility = glad_gl_has_extension(exts, exts_i, "GL_ARB_ES2_compatibility");
    GLAD_GL_ARB_ES3_1_compatibility = glad_gl_has_extension(exts, exts_i, "GL_ARB_ES3_1_compatibility");
    GLAD_GL_ARB_ES3_2_compatibility = glad_gl_has_extension(exts, exts_i, "GL_ARB_ES3_2_compatibility");
    GLAD_GL_ARB_ES3_compatibility = glad_gl_has_extension(exts, exts_i, "GL_ARB_ES3_compatibility");
    GLAD_GL_ARB_arrays_of_arrays = glad_gl_has_extension(exts, exts_i, "GL_ARB_arrays_of_arrays");
    GLAD_GL_ARB_base_instance = glad_gl_has_extension(exts, exts_i, "GL_ARB_base_instance");
    GLAD_GL_ARB_bindless_texture = glad_gl_has_extension(exts, exts_i, "GL_ARB_bindless_texture");
    GLAD_GL_ARB_blend_func_extended = glad_gl_has_extension(exts, exts_i, "GL_ARB_blend_func_extended");
    GLAD_GL_ARB_buffer_storage = glad_gl_has_extension(exts, exts_i, "GL_ARB_buffer_storage");
    GLAD_GL_ARB_cl_event = glad_gl_has_extension(exts, exts_i, "GL_ARB_cl_event");
    GLAD_GL_ARB_clear_buffer_object = glad_gl_has_extension(exts, exts_i, "GL_ARB_clear_buffer_object");
    GLAD_GL_ARB_clear_texture = glad_gl_has_extension(exts, exts_i, "GL_ARB_clear_texture");
    GLAD_GL_ARB_clip_control = glad_gl_has_extension(exts, exts_i, "GL_ARB_clip_control");
    GLAD_GL_ARB_color_buffer_float = glad_gl_has_extension(exts, exts_i, "GL_ARB_color_buffer_float");
    GLAD_GL_ARB_compatibility = glad_gl_has_extension(exts, exts_i, "GL_ARB_compatibility");
    GLAD_GL_ARB_compressed_texture_pixel_storage = glad_gl_has_extension(exts, exts_i, "GL_ARB_compressed_texture_pixel_storage");
    GLAD_GL_ARB_compute_shader = glad_gl_has_extension(exts, exts_i, "GL_ARB_compute_shader");
    GLAD_GL_ARB_compute_variable_group_size = glad_gl_has_extension(exts, exts_i, "GL_ARB_compute_variable_group_size");
    GLAD_GL_ARB_conditional_render_inverted = glad_gl_has_extension(exts, exts_i, "GL_ARB_conditional_render_inverted");
    GLAD_GL_ARB_conservative_depth = glad_gl_has_extension(exts, exts_i, "GL_ARB_conservative_depth");
    GLAD_GL_ARB_copy_buffer = glad_gl_has_extension(exts, exts_i, "GL_ARB_copy_buffer");
    GLAD_GL_ARB_copy_image = glad_gl_has_extension(exts, exts_i, "GL_ARB_copy_image");
    GLAD_GL_ARB_cull_distance = glad_gl_has_extension(exts, exts_i, "GL_ARB_cull_distance");
    GLAD_GL_ARB_debug_output = glad_gl_has_extension(exts, exts_i, "GL_ARB_debug_output");
    GLAD_GL_ARB_depth_buffer_float = glad_gl_has_extension(exts, exts_i, "GL_ARB_depth_buffer_float");
    GLAD_GL_ARB_depth_clamp = glad_gl_has_extension(exts, exts_i, "GL_ARB_depth_clamp");
    GLAD_GL_ARB_depth_texture = glad_gl_has_extension(exts, exts_i, "GL_ARB_depth_texture");
    GLAD_GL_ARB_derivative_control = glad_gl_has_extension(exts, exts_i, "GL_ARB_derivative_control");
    GLAD_GL_ARB_direct_state_access = glad_gl_has_extension(exts, exts_i, "GL_ARB_direct_state_access");
    GLAD_GL_ARB_draw_buffers = glad_gl_has_extension(exts, exts_i, "GL_ARB_draw_buffers");
    GLAD_GL_ARB_draw_buffers_blend = glad_gl_has_extension(exts, exts_i, "GL_ARB_draw_buffers_blend");
    GLAD_GL_ARB_draw_elements_base_vertex = glad_gl_has_extension(exts, exts_i, "GL_ARB_draw_elements_base_vertex");
    GLAD_GL_ARB_draw_indirect = glad_gl_has_extension(exts, exts_i, "GL_ARB_draw_indirect");
    GLAD_GL_ARB_draw_instanced = glad_gl_has_extension(exts, exts_i, "GL_ARB_draw_instanced");
    GLAD_GL_ARB_enhanced_layouts = glad_gl_has_extension(exts, exts_i, "GL_ARB_enhanced_layouts");
    GLAD_GL_ARB_explicit_attrib_location = glad_gl_has_extension(exts, exts_i, "GL_ARB_explicit_attrib_location");
    GLAD_GL_ARB_explicit_uniform_location = glad_gl_has_extension(exts, exts_i, "GL_ARB_explicit_uniform_location");
    GLAD_GL_ARB_fragment_coord_conventions = glad_gl_has_extension(exts, exts_i, "GL_ARB_fragment_coord_conventions");
    GLAD_GL_ARB_fragment_layer_viewport = glad_gl_has_extension(exts, exts_i, "GL_ARB_fragment_layer_viewport");
    GLAD_GL_ARB_fragment_program = glad_gl_has_extension(exts, exts_i, "GL_ARB_fragment_program");
    GLAD_GL_ARB_fragment_program_shadow = glad_gl_has_extension(exts, exts_i, "GL_ARB_fragment_program_shadow");
    GLAD_GL_ARB_fragment_shader = glad_gl_has_extension(exts, exts_i, "GL_ARB_fragment_shader");
    GLAD_GL_ARB_fragment_shader_interlock = glad_gl_has_extension(exts, exts_i, "GL_ARB_fragment_shader_interlock");
    GLAD_GL_ARB_framebuffer_no_attachments = glad_gl_has_extension(exts, exts_i, "GL_ARB_framebuffer_no_attachments");
    GLAD_GL_ARB_framebuffer_object = glad_gl_has_extension(exts, exts_i, "GL_ARB_framebuffer_object");
    GLAD_GL_ARB_framebuffer_sRGB = glad_gl_has_extension(exts, exts_i, "GL_ARB_framebuffer_sRGB");
    GLAD_GL_ARB_geometry_shader4 = glad_gl_has_extension(exts, exts_i, "GL_ARB_geometry_shader4");
    GLAD_GL_ARB_get_program_binary = glad_gl_has_extension(exts, exts_i, "GL_ARB_get_program_binary");
    GLAD_GL_ARB_get_texture_sub_image = glad_gl_has_extension(exts, exts_i, "GL_ARB_get_texture_sub_image");
    GLAD_GL_ARB_gl_spirv = glad_gl_has_extension(exts, exts_i, "GL_ARB_gl_spirv");
    GLAD_GL_ARB_gpu_shader5 = glad_gl_has_extension(exts, exts_i, "GL_ARB_gpu_shader5");
    GLAD_GL_ARB_gpu_shader_fp64 = glad_gl_has_extension(exts, exts_i, "GL_ARB_gpu_shader_fp64");
    GLAD_GL_ARB_gpu_shader_int64 = glad_gl_has_extension(exts, exts_i, "GL_ARB_gpu_shader_int64");
    GLAD_GL_ARB_half_float_pixel = glad_gl_has_extension(exts, exts_i, "GL_ARB_half_float_pixel");
    GLAD_GL_ARB_half_float_vertex = glad_gl_has_extension(exts, exts_i, "GL_ARB_half_float_vertex");
    GLAD_GL_ARB_imaging = glad_gl_has_extension(exts, exts_i, "GL_ARB_imaging");
    GLAD_GL_ARB_indirect_parameters = glad_gl_has_extension(exts, exts_i, "GL_ARB_indirect_parameters");
    GLAD_GL_ARB_instanced_arrays = glad_gl_has_extension(exts, exts_i, "GL_ARB_instanced_arrays");
    GLAD_GL_ARB_internalformat_query = glad_gl_has_extension(exts, exts_i, "GL_ARB_internalformat_query");
    GLAD_GL_ARB_internalformat_query2 = glad_gl_has_extension(exts, exts_i, "GL_ARB_internalformat_query2");
    GLAD_GL_ARB_invalidate_subdata = glad_gl_has_extension(exts, exts_i, "GL_ARB_invalidate_subdata");
    GLAD_GL_ARB_map_buffer_alignment = glad_gl_has_extension(exts, exts_i, "GL_ARB_map_buffer_alignment");
    GLAD_GL_ARB_map_buffer_range = glad_gl_has_extension(exts, exts_i, "GL_ARB_map_buffer_range");
    GLAD_GL_ARB_matrix_palette = glad_gl_has_extension(exts, exts_i, "GL_ARB_matrix_palette");
    GLAD_GL_ARB_multi_bind = glad_gl_has_extension(exts, exts_i, "GL_ARB_multi_bind");
    GLAD_GL_ARB_multi_draw_indirect = glad_gl_has_extension(exts, exts_i, "GL_ARB_multi_draw_indirect");
    GLAD_GL_ARB_multisample = glad_gl_has_extension(exts, exts_i, "GL_ARB_multisample");
    GLAD_GL_ARB_multitexture = glad_gl_has_extension(exts, exts_i, "GL_ARB_multitexture");
    GLAD_GL_ARB_occlusion_query = glad_gl_has_extension(exts, exts_i, "GL_ARB_occlusion_query");
    GLAD_GL_ARB_occlusion_query2 = glad_gl_has_extension(exts, exts_i, "GL_ARB_occlusion_query2");
    GLAD_GL_ARB_parallel_shader_compile = glad_gl_has_extension(exts, exts_i, "GL_ARB_parallel_shader_compile");
    GLAD_GL_ARB_pipeline_statistics_query = glad_gl_has_extension(exts, exts_i, "GL_ARB_pipeline_statistics_query");
    GLAD_GL_ARB_pixel_buffer_object = glad_gl_has_extension(exts, exts_i, "GL_ARB_pixel_buffer_object");
    GLAD_GL_ARB_point_parameters = glad_gl_has_extension(exts, exts_i, "GL_ARB_point_parameters");
    GLAD_GL_ARB_point_sprite = glad_gl_has_extension(exts, exts_i, "GL_ARB_point_sprite");
    GLAD_GL_ARB_polygon_offset_clamp = glad_gl_has_extension(exts, exts_i, "GL_ARB_polygon_offset_clamp");
    GLAD_GL_ARB_post_depth_coverage = glad_gl_has_extension(exts, exts_i, "GL_ARB_post_depth_coverage");
    GLAD_GL_ARB_program_interface_query = glad_gl_has_extension(exts, exts_i, "GL_ARB_program_interface_query");
    GLAD_GL_ARB_provoking_vertex = glad_gl_has_extension(exts, exts_i, "GL_ARB_provoking_vertex");
    GLAD_GL_ARB_query_buffer_object = glad_gl_has_extension(exts, exts_i, "GL_ARB_query_buffer_object");
    GLAD_GL_ARB_robust_buffer_access_behavior = glad_gl_has_extension(exts, exts_i, "GL_ARB_robust_buffer_access_behavior");
    GLAD_GL_ARB_robustness = glad_gl_has_extension(exts, exts_i, "GL_ARB_robustness");
    GLAD_GL_ARB_robustness_isolation = glad_gl_has_extension(exts, exts_i, "GL_ARB_robustness_isolation");
    GLAD_GL_ARB_sample_locations = glad_gl_has_extension(exts, exts_i, "GL_ARB_sample_locations");
    GLAD_GL_ARB_sample_shading = glad_gl_has_extension(exts, exts_i, "GL_ARB_sample_shading");
    GLAD_GL_ARB_sampler_objects = glad_gl_has_extension(exts, exts_i, "GL_ARB_sampler_objects");
    GLAD_GL_ARB_seamless_cube_map = glad_gl_has_extension(exts, exts_i, "GL_ARB_seamless_cube_map");
    GLAD_GL_ARB_seamless_cubemap_per_texture = glad_gl_has_extension(exts, exts_i, "GL_ARB_seamless_cubemap_per_texture");
    GLAD_GL_ARB_separate_shader_objects = glad_gl_has_extension(exts, exts_i, "GL_ARB_separate_shader_objects");
    GLAD_GL_ARB_shader_atomic_counter_ops = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_atomic_counter_ops");
    GLAD_GL_ARB_shader_atomic_counters = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_atomic_counters");
    GLAD_GL_ARB_shader_ballot = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_ballot");
    GLAD_GL_ARB_shader_bit_encoding = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_bit_encoding");
    GLAD_GL_ARB_shader_clock = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_clock");
    GLAD_GL_ARB_shader_draw_parameters = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_draw_parameters");
    GLAD_GL_ARB_shader_group_vote = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_group_vote");
    GLAD_GL_ARB_shader_image_load_store = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_image_load_store");
    GLAD_GL_ARB_shader_image_size = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_image_size");
    GLAD_GL_ARB_shader_objects = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_objects");
    GLAD_GL_ARB_shader_precision = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_precision");
    GLAD_GL_ARB_shader_stencil_export = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_stencil_export");
    GLAD_GL_ARB_shader_storage_buffer_object = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_storage_buffer_object");
    GLAD_GL_ARB_shader_subroutine = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_subroutine");
    GLAD_GL_ARB_shader_texture_image_samples = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_texture_image_samples");
    GLAD_GL_ARB_shader_texture_lod = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_texture_lod");
    GLAD_GL_ARB_shader_viewport_layer_array = glad_gl_has_extension(exts, exts_i, "GL_ARB_shader_viewport_layer_array");
    GLAD_GL_ARB_shading_language_100 = glad_gl_has_extension(exts, exts_i, "GL_ARB_shading_language_100");
    GLAD_GL_ARB_shading_language_420pack = glad_gl_has_extension(exts, exts_i, "GL_ARB_shading_language_420pack");
    GLAD_GL_ARB_shading_language_include = glad_gl_has_extension(exts, exts_i, "GL_ARB_shading_language_include");
    GLAD_GL_ARB_shading_language_packing = glad_gl_has_extension(exts, exts_i, "GL_ARB_shading_language_packing");
    GLAD_GL_ARB_shadow = glad_gl_has_extension(exts, exts_i, "GL_ARB_shadow");
    GLAD_GL_ARB_shadow_ambient = glad_gl_has_extension(exts, exts_i, "GL_ARB_shadow_ambient");
    GLAD_GL_ARB_sparse_buffer = glad_gl_has_extension(exts, exts_i, "GL_ARB_sparse_buffer");
    GLAD_GL_ARB_sparse_texture = glad_gl_has_extension(exts, exts_i, "GL_ARB_sparse_texture");
    GLAD_GL_ARB_sparse_texture2 = glad_gl_has_extension(exts, exts_i, "GL_ARB_sparse_texture2");
    GLAD_GL_ARB_sparse_texture_clamp = glad_gl_has_extension(exts, exts_i, "GL_ARB_sparse_texture_clamp");
    GLAD_GL_ARB_spirv_extensions = glad_gl_has_extension(exts, exts_i, "GL_ARB_spirv_extensions");
    GLAD_GL_ARB_stencil_texturing = glad_gl_has_extension(exts, exts_i, "GL_ARB_stencil_texturing");
    GLAD_GL_ARB_sync = glad_gl_has_extension(exts, exts_i, "GL_ARB_sync");
    GLAD_GL_ARB_tessellation_shader = glad_gl_has_extension(exts, exts_i, "GL_ARB_tessellation_shader");
    GLAD_GL_ARB_texture_barrier = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_barrier");
    GLAD_GL_ARB_texture_border_clamp = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_border_clamp");
    GLAD_GL_ARB_texture_buffer_object = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_buffer_object");
    GLAD_GL_ARB_texture_buffer_object_rgb32 = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_buffer_object_rgb32");
    GLAD_GL_ARB_texture_buffer_range = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_buffer_range");
    GLAD_GL_ARB_texture_compression = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_compression");
    GLAD_GL_ARB_texture_compression_bptc = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_compression_bptc");
    GLAD_GL_ARB_texture_compression_rgtc = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_compression_rgtc");
    GLAD_GL_ARB_texture_cube_map = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_cube_map");
    GLAD_GL_ARB_texture_cube_map_array = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_cube_map_array");
    GLAD_GL_ARB_texture_env_add = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_env_add");
    GLAD_GL_ARB_texture_env_combine = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_env_combine");
    GLAD_GL_ARB_texture_env_crossbar = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_env_crossbar");
    GLAD_GL_ARB_texture_env_dot3 = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_env_dot3");
    GLAD_GL_ARB_texture_filter_anisotropic = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_filter_anisotropic");
    GLAD_GL_ARB_texture_filter_minmax = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_filter_minmax");
    GLAD_GL_ARB_texture_float = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_float");
    GLAD_GL_ARB_texture_gather = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_gather");
    GLAD_GL_ARB_texture_mirror_clamp_to_edge = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_mirror_clamp_to_edge");
    GLAD_GL_ARB_texture_mirrored_repeat = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_mirrored_repeat");
    GLAD_GL_ARB_texture_multisample = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_multisample");
    GLAD_GL_ARB_texture_non_power_of_two = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_non_power_of_two");
    GLAD_GL_ARB_texture_query_levels = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_query_levels");
    GLAD_GL_ARB_texture_query_lod = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_query_lod");
    GLAD_GL_ARB_texture_rectangle = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_rectangle");
    GLAD_GL_ARB_texture_rg = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_rg");
    GLAD_GL_ARB_texture_rgb10_a2ui = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_rgb10_a2ui");
    GLAD_GL_ARB_texture_stencil8 = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_stencil8");
    GLAD_GL_ARB_texture_storage = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_storage");
    GLAD_GL_ARB_texture_storage_multisample = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_storage_multisample");
    GLAD_GL_ARB_texture_swizzle = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_swizzle");
    GLAD_GL_ARB_texture_view = glad_gl_has_extension(exts, exts_i, "GL_ARB_texture_view");
    GLAD_GL_ARB_timer_query = glad_gl_has_extension(exts, exts_i, "GL_ARB_timer_query");
    GLAD_GL_ARB_transform_feedback2 = glad_gl_has_extension(exts, exts_i, "GL_ARB_transform_feedback2");
    GLAD_GL_ARB_transform_feedback3 = glad_gl_has_extension(exts, exts_i, "GL_ARB_transform_feedback3");
    GLAD_GL_ARB_transform_feedback_instanced = glad_gl_has_extension(exts, exts_i, "GL_ARB_transform_feedback_instanced");
    GLAD_GL_ARB_transform_feedback_overflow_query = glad_gl_has_extension(exts, exts_i, "GL_ARB_transform_feedback_overflow_query");
    GLAD_GL_ARB_transpose_matrix = glad_gl_has_extension(exts, exts_i, "GL_ARB_transpose_matrix");
    GLAD_GL_ARB_uniform_buffer_object = glad_gl_has_extension(exts, exts_i, "GL_ARB_uniform_buffer_object");
    GLAD_GL_ARB_vertex_array_bgra = glad_gl_has_extension(exts, exts_i, "GL_ARB_vertex_array_bgra");
    GLAD_GL_ARB_vertex_array_object = glad_gl_has_extension(exts, exts_i, "GL_ARB_vertex_array_object");
    GLAD_GL_ARB_vertex_attrib_64bit = glad_gl_has_extension(exts, exts_i, "GL_ARB_vertex_attrib_64bit");
    GLAD_GL_ARB_vertex_attrib_binding = glad_gl_has_extension(exts, exts_i, "GL_ARB_vertex_attrib_binding");
    GLAD_GL_ARB_vertex_blend = glad_gl_has_extension(exts, exts_i, "GL_ARB_vertex_blend");
    GLAD_GL_ARB_vertex_buffer_object = glad_gl_has_extension(exts, exts_i, "GL_ARB_vertex_buffer_object");
    GLAD_GL_ARB_vertex_program = glad_gl_has_extension(exts, exts_i, "GL_ARB_vertex_program");
    GLAD_GL_ARB_vertex_shader = glad_gl_has_extension(exts, exts_i, "GL_ARB_vertex_shader");
    GLAD_GL_ARB_vertex_type_10f_11f_11f_rev = glad_gl_has_extension(exts, exts_i, "GL_ARB_vertex_type_10f_11f_11f_rev");
    GLAD_GL_ARB_vertex_type_2_10_10_10_rev = glad_gl_has_extension(exts, exts_i, "GL_ARB_vertex_type_2_10_10_10_rev");
    GLAD_GL_ARB_viewport_array = glad_gl_has_extension(exts, exts_i, "GL_ARB_viewport_array");
    GLAD_GL_ARB_window_pos = glad_gl_has_extension(exts, exts_i, "GL_ARB_window_pos");
    GLAD_GL_EXT_422_pixels = glad_gl_has_extension(exts, exts_i, "GL_EXT_422_pixels");
    GLAD_GL_EXT_EGL_image_storage = glad_gl_has_extension(exts, exts_i, "GL_EXT_EGL_image_storage");
    GLAD_GL_EXT_EGL_sync = glad_gl_has_extension(exts, exts_i, "GL_EXT_EGL_sync");
    GLAD_GL_EXT_abgr = glad_gl_has_extension(exts, exts_i, "GL_EXT_abgr");
    GLAD_GL_EXT_bgra = glad_gl_has_extension(exts, exts_i, "GL_EXT_bgra");
    GLAD_GL_EXT_bindable_uniform = glad_gl_has_extension(exts, exts_i, "GL_EXT_bindable_uniform");
    GLAD_GL_EXT_blend_color = glad_gl_has_extension(exts, exts_i, "GL_EXT_blend_color");
    GLAD_GL_EXT_blend_equation_separate = glad_gl_has_extension(exts, exts_i, "GL_EXT_blend_equation_separate");
    GLAD_GL_EXT_blend_func_separate = glad_gl_has_extension(exts, exts_i, "GL_EXT_blend_func_separate");
    GLAD_GL_EXT_blend_logic_op = glad_gl_has_extension(exts, exts_i, "GL_EXT_blend_logic_op");
    GLAD_GL_EXT_blend_minmax = glad_gl_has_extension(exts, exts_i, "GL_EXT_blend_minmax");
    GLAD_GL_EXT_blend_subtract = glad_gl_has_extension(exts, exts_i, "GL_EXT_blend_subtract");
    GLAD_GL_EXT_clip_volume_hint = glad_gl_has_extension(exts, exts_i, "GL_EXT_clip_volume_hint");
    GLAD_GL_EXT_cmyka = glad_gl_has_extension(exts, exts_i, "GL_EXT_cmyka");
    GLAD_GL_EXT_color_subtable = glad_gl_has_extension(exts, exts_i, "GL_EXT_color_subtable");
    GLAD_GL_EXT_compiled_vertex_array = glad_gl_has_extension(exts, exts_i, "GL_EXT_compiled_vertex_array");
    GLAD_GL_EXT_convolution = glad_gl_has_extension(exts, exts_i, "GL_EXT_convolution");
    GLAD_GL_EXT_coordinate_frame = glad_gl_has_extension(exts, exts_i, "GL_EXT_coordinate_frame");
    GLAD_GL_EXT_copy_texture = glad_gl_has_extension(exts, exts_i, "GL_EXT_copy_texture");
    GLAD_GL_EXT_cull_vertex = glad_gl_has_extension(exts, exts_i, "GL_EXT_cull_vertex");
    GLAD_GL_EXT_debug_label = glad_gl_has_extension(exts, exts_i, "GL_EXT_debug_label");
    GLAD_GL_EXT_debug_marker = glad_gl_has_extension(exts, exts_i, "GL_EXT_debug_marker");
    GLAD_GL_EXT_depth_bounds_test = glad_gl_has_extension(exts, exts_i, "GL_EXT_depth_bounds_test");
    GLAD_GL_EXT_direct_state_access = glad_gl_has_extension(exts, exts_i, "GL_EXT_direct_state_access");
    GLAD_GL_EXT_draw_buffers2 = glad_gl_has_extension(exts, exts_i, "GL_EXT_draw_buffers2");
    GLAD_GL_EXT_draw_instanced = glad_gl_has_extension(exts, exts_i, "GL_EXT_draw_instanced");
    GLAD_GL_EXT_draw_range_elements = glad_gl_has_extension(exts, exts_i, "GL_EXT_draw_range_elements");
    GLAD_GL_EXT_external_buffer = glad_gl_has_extension(exts, exts_i, "GL_EXT_external_buffer");
    GLAD_GL_EXT_fog_coord = glad_gl_has_extension(exts, exts_i, "GL_EXT_fog_coord");
    GLAD_GL_EXT_framebuffer_blit = glad_gl_has_extension(exts, exts_i, "GL_EXT_framebuffer_blit");
    GLAD_GL_EXT_framebuffer_blit_layers = glad_gl_has_extension(exts, exts_i, "GL_EXT_framebuffer_blit_layers");
    GLAD_GL_EXT_framebuffer_multisample = glad_gl_has_extension(exts, exts_i, "GL_EXT_framebuffer_multisample");
    GLAD_GL_EXT_framebuffer_multisample_blit_scaled = glad_gl_has_extension(exts, exts_i, "GL_EXT_framebuffer_multisample_blit_scaled");
    GLAD_GL_EXT_framebuffer_object = glad_gl_has_extension(exts, exts_i, "GL_EXT_framebuffer_object");
    GLAD_GL_EXT_framebuffer_sRGB = glad_gl_has_extension(exts, exts_i, "GL_EXT_framebuffer_sRGB");
    GLAD_GL_EXT_geometry_shader4 = glad_gl_has_extension(exts, exts_i, "GL_EXT_geometry_shader4");
    GLAD_GL_EXT_gpu_program_parameters = glad_gl_has_extension(exts, exts_i, "GL_EXT_gpu_program_parameters");
    GLAD_GL_EXT_gpu_shader4 = glad_gl_has_extension(exts, exts_i, "GL_EXT_gpu_shader4");
    GLAD_GL_EXT_histogram = glad_gl_has_extension(exts, exts_i, "GL_EXT_histogram");
    GLAD_GL_EXT_index_array_formats = glad_gl_has_extension(exts, exts_i, "GL_EXT_index_array_formats");
    GLAD_GL_EXT_index_func = glad_gl_has_extension(exts, exts_i, "GL_EXT_index_func");
    GLAD_GL_EXT_index_material = glad_gl_has_extension(exts, exts_i, "GL_EXT_index_material");
    GLAD_GL_EXT_index_texture = glad_gl_has_extension(exts, exts_i, "GL_EXT_index_texture");
    GLAD_GL_EXT_light_texture = glad_gl_has_extension(exts, exts_i, "GL_EXT_light_texture");
    GLAD_GL_EXT_memory_object = glad_gl_has_extension(exts, exts_i, "GL_EXT_memory_object");
    GLAD_GL_EXT_memory_object_fd = glad_gl_has_extension(exts, exts_i, "GL_EXT_memory_object_fd");
    GLAD_GL_EXT_memory_object_win32 = glad_gl_has_extension(exts, exts_i, "GL_EXT_memory_object_win32");
    GLAD_GL_EXT_misc_attribute = glad_gl_has_extension(exts, exts_i, "GL_EXT_misc_attribute");
    GLAD_GL_EXT_multi_draw_arrays = glad_gl_has_extension(exts, exts_i, "GL_EXT_multi_draw_arrays");
    GLAD_GL_EXT_multisample = glad_gl_has_extension(exts, exts_i, "GL_EXT_multisample");
    GLAD_GL_EXT_multiview_tessellation_geometry_shader = glad_gl_has_extension(exts, exts_i, "GL_EXT_multiview_tessellation_geometry_shader");
    GLAD_GL_EXT_multiview_texture_multisample = glad_gl_has_extension(exts, exts_i, "GL_EXT_multiview_texture_multisample");
    GLAD_GL_EXT_multiview_timer_query = glad_gl_has_extension(exts, exts_i, "GL_EXT_multiview_timer_query");
    GLAD_GL_EXT_packed_depth_stencil = glad_gl_has_extension(exts, exts_i, "GL_EXT_packed_depth_stencil");
    GLAD_GL_EXT_packed_float = glad_gl_has_extension(exts, exts_i, "GL_EXT_packed_float");
    GLAD_GL_EXT_packed_pixels = glad_gl_has_extension(exts, exts_i, "GL_EXT_packed_pixels");
    GLAD_GL_EXT_paletted_texture = glad_gl_has_extension(exts, exts_i, "GL_EXT_paletted_texture");
    GLAD_GL_EXT_pixel_buffer_object = glad_gl_has_extension(exts, exts_i, "GL_EXT_pixel_buffer_object");
    GLAD_GL_EXT_pixel_transform = glad_gl_has_extension(exts, exts_i, "GL_EXT_pixel_transform");
    GLAD_GL_EXT_pixel_transform_color_table = glad_gl_has_extension(exts, exts_i, "GL_EXT_pixel_transform_color_table");
    GLAD_GL_EXT_point_parameters = glad_gl_has_extension(exts, exts_i, "GL_EXT_point_parameters");
    GLAD_GL_EXT_polygon_offset = glad_gl_has_extension(exts, exts_i, "GL_EXT_polygon_offset");
    GLAD_GL_EXT_polygon_offset_clamp = glad_gl_has_extension(exts, exts_i, "GL_EXT_polygon_offset_clamp");
    GLAD_GL_EXT_post_depth_coverage = glad_gl_has_extension(exts, exts_i, "GL_EXT_post_depth_coverage");
    GLAD_GL_EXT_provoking_vertex = glad_gl_has_extension(exts, exts_i, "GL_EXT_provoking_vertex");
    GLAD_GL_EXT_raster_multisample = glad_gl_has_extension(exts, exts_i, "GL_EXT_raster_multisample");
    GLAD_GL_EXT_rescale_normal = glad_gl_has_extension(exts, exts_i, "GL_EXT_rescale_normal");
    GLAD_GL_EXT_secondary_color = glad_gl_has_extension(exts, exts_i, "GL_EXT_secondary_color");
    GLAD_GL_EXT_semaphore = glad_gl_has_extension(exts, exts_i, "GL_EXT_semaphore");
    GLAD_GL_EXT_semaphore_fd = glad_gl_has_extension(exts, exts_i, "GL_EXT_semaphore_fd");
    GLAD_GL_EXT_semaphore_win32 = glad_gl_has_extension(exts, exts_i, "GL_EXT_semaphore_win32");
    GLAD_GL_EXT_separate_shader_objects = glad_gl_has_extension(exts, exts_i, "GL_EXT_separate_shader_objects");
    GLAD_GL_EXT_separate_specular_color = glad_gl_has_extension(exts, exts_i, "GL_EXT_separate_specular_color");
    GLAD_GL_EXT_shader_framebuffer_fetch = glad_gl_has_extension(exts, exts_i, "GL_EXT_shader_framebuffer_fetch");
    GLAD_GL_EXT_shader_framebuffer_fetch_non_coherent = glad_gl_has_extension(exts, exts_i, "GL_EXT_shader_framebuffer_fetch_non_coherent");
    GLAD_GL_EXT_shader_image_load_formatted = glad_gl_has_extension(exts, exts_i, "GL_EXT_shader_image_load_formatted");
    GLAD_GL_EXT_shader_image_load_store = glad_gl_has_extension(exts, exts_i, "GL_EXT_shader_image_load_store");
    GLAD_GL_EXT_shader_integer_mix = glad_gl_has_extension(exts, exts_i, "GL_EXT_shader_integer_mix");
    GLAD_GL_EXT_shader_samples_identical = glad_gl_has_extension(exts, exts_i, "GL_EXT_shader_samples_identical");
    GLAD_GL_EXT_shadow_funcs = glad_gl_has_extension(exts, exts_i, "GL_EXT_shadow_funcs");
    GLAD_GL_EXT_shared_texture_palette = glad_gl_has_extension(exts, exts_i, "GL_EXT_shared_texture_palette");
    GLAD_GL_EXT_sparse_texture2 = glad_gl_has_extension(exts, exts_i, "GL_EXT_sparse_texture2");
    GLAD_GL_EXT_stencil_clear_tag = glad_gl_has_extension(exts, exts_i, "GL_EXT_stencil_clear_tag");
    GLAD_GL_EXT_stencil_two_side = glad_gl_has_extension(exts, exts_i, "GL_EXT_stencil_two_side");
    GLAD_GL_EXT_stencil_wrap = glad_gl_has_extension(exts, exts_i, "GL_EXT_stencil_wrap");
    GLAD_GL_EXT_subtexture = glad_gl_has_extension(exts, exts_i, "GL_EXT_subtexture");
    GLAD_GL_EXT_texture = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture");
    GLAD_GL_EXT_texture3D = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture3D");
    GLAD_GL_EXT_texture_array = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_array");
    GLAD_GL_EXT_texture_buffer_object = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_buffer_object");
    GLAD_GL_EXT_texture_compression_latc = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_compression_latc");
    GLAD_GL_EXT_texture_compression_rgtc = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_compression_rgtc");
    GLAD_GL_EXT_texture_compression_s3tc = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_compression_s3tc");
    GLAD_GL_EXT_texture_cube_map = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_cube_map");
    GLAD_GL_EXT_texture_env_add = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_env_add");
    GLAD_GL_EXT_texture_env_combine = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_env_combine");
    GLAD_GL_EXT_texture_env_dot3 = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_env_dot3");
    GLAD_GL_EXT_texture_filter_anisotropic = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_filter_anisotropic");
    GLAD_GL_EXT_texture_filter_minmax = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_filter_minmax");
    GLAD_GL_EXT_texture_integer = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_integer");
    GLAD_GL_EXT_texture_lod_bias = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_lod_bias");
    GLAD_GL_EXT_texture_mirror_clamp = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_mirror_clamp");
    GLAD_GL_EXT_texture_object = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_object");
    GLAD_GL_EXT_texture_perturb_normal = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_perturb_normal");
    GLAD_GL_EXT_texture_sRGB = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_sRGB");
    GLAD_GL_EXT_texture_sRGB_R8 = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_sRGB_R8");
    GLAD_GL_EXT_texture_sRGB_RG8 = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_sRGB_RG8");
    GLAD_GL_EXT_texture_sRGB_decode = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_sRGB_decode");
    GLAD_GL_EXT_texture_shadow_lod = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_shadow_lod");
    GLAD_GL_EXT_texture_shared_exponent = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_shared_exponent");
    GLAD_GL_EXT_texture_snorm = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_snorm");
    GLAD_GL_EXT_texture_storage = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_storage");
    GLAD_GL_EXT_texture_swizzle = glad_gl_has_extension(exts, exts_i, "GL_EXT_texture_swizzle");
    GLAD_GL_EXT_timer_query = glad_gl_has_extension(exts, exts_i, "GL_EXT_timer_query");
    GLAD_GL_EXT_transform_feedback = glad_gl_has_extension(exts, exts_i, "GL_EXT_transform_feedback");
    GLAD_GL_EXT_vertex_array = glad_gl_has_extension(exts, exts_i, "GL_EXT_vertex_array");
    GLAD_GL_EXT_vertex_array_bgra = glad_gl_has_extension(exts, exts_i, "GL_EXT_vertex_array_bgra");
    GLAD_GL_EXT_vertex_attrib_64bit = glad_gl_has_extension(exts, exts_i, "GL_EXT_vertex_attrib_64bit");
    GLAD_GL_EXT_vertex_shader = glad_gl_has_extension(exts, exts_i, "GL_EXT_vertex_shader");
    GLAD_GL_EXT_vertex_weighting = glad_gl_has_extension(exts, exts_i, "GL_EXT_vertex_weighting");
    GLAD_GL_EXT_win32_keyed_mutex = glad_gl_has_extension(exts, exts_i, "GL_EXT_win32_keyed_mutex");
    GLAD_GL_EXT_window_rectangles = glad_gl_has_extension(exts, exts_i, "GL_EXT_window_rectangles");
    GLAD_GL_EXT_x11_sync_object = glad_gl_has_extension(exts, exts_i, "GL_EXT_x11_sync_object");
    GLAD_GL_KHR_blend_equation_advanced = glad_gl_has_extension(exts, exts_i, "GL_KHR_blend_equation_advanced");
    GLAD_GL_KHR_blend_equation_advanced_coherent = glad_gl_has_extension(exts, exts_i, "GL_KHR_blend_equation_advanced_coherent");
    GLAD_GL_KHR_context_flush_control = glad_gl_has_extension(exts, exts_i, "GL_KHR_context_flush_control");
    GLAD_GL_KHR_debug = glad_gl_has_extension(exts, exts_i, "GL_KHR_debug");
    GLAD_GL_KHR_no_error = glad_gl_has_extension(exts, exts_i, "GL_KHR_no_error");
    GLAD_GL_KHR_parallel_shader_compile = glad_gl_has_extension(exts, exts_i, "GL_KHR_parallel_shader_compile");
    GLAD_GL_KHR_robust_buffer_access_behavior = glad_gl_has_extension(exts, exts_i, "GL_KHR_robust_buffer_access_behavior");
    GLAD_GL_KHR_robustness = glad_gl_has_extension(exts, exts_i, "GL_KHR_robustness");
    GLAD_GL_KHR_shader_subgroup = glad_gl_has_extension(exts, exts_i, "GL_KHR_shader_subgroup");
    GLAD_GL_KHR_texture_compression_astc_hdr = glad_gl_has_extension(exts, exts_i, "GL_KHR_texture_compression_astc_hdr");
    GLAD_GL_KHR_texture_compression_astc_ldr = glad_gl_has_extension(exts, exts_i, "GL_KHR_texture_compression_astc_ldr");
    GLAD_GL_KHR_texture_compression_astc_sliced_3d = glad_gl_has_extension(exts, exts_i, "GL_KHR_texture_compression_astc_sliced_3d");
    GLAD_GL_OES_byte_coordinates = glad_gl_has_extension(exts, exts_i, "GL_OES_byte_coordinates");
    GLAD_GL_OES_compressed_paletted_texture = glad_gl_has_extension(exts, exts_i, "GL_OES_compressed_paletted_texture");
    GLAD_GL_OES_fixed_point = glad_gl_has_extension(exts, exts_i, "GL_OES_fixed_point");
    GLAD_GL_OES_query_matrix = glad_gl_has_extension(exts, exts_i, "GL_OES_query_matrix");
    GLAD_GL_OES_read_format = glad_gl_has_extension(exts, exts_i, "GL_OES_read_format");
    GLAD_GL_OES_single_precision = glad_gl_has_extension(exts, exts_i, "GL_OES_single_precision");

    glad_gl_free_extensions(exts_i);

    return 1;
}

static int glad_gl_find_core_gl(void) {
    int i;
    const char* version;
    const char* prefixes[] = {
        "OpenGL ES-CM ",
        "OpenGL ES-CL ",
        "OpenGL ES ",
        "OpenGL SC ",
        NULL
    };
    int major = 0;
    int minor = 0;
    version = (const char*) glad_glGetString(GL_VERSION);
    if (!version) return 0;
    for (i = 0;  prefixes[i];  i++) {
        const size_t length = strlen(prefixes[i]);
        if (strncmp(version, prefixes[i], length) == 0) {
            version += length;
            break;
        }
    }

    GLAD_IMPL_UTIL_SSCANF(version, "%d.%d", &major, &minor);

    GLAD_GL_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    GLAD_GL_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
    GLAD_GL_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
    GLAD_GL_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
    GLAD_GL_VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;
    GLAD_GL_VERSION_1_5 = (major == 1 && minor >= 5) || major > 1;
    GLAD_GL_VERSION_2_0 = (major == 2 && minor >= 0) || major > 2;
    GLAD_GL_VERSION_2_1 = (major == 2 && minor >= 1) || major > 2;
    GLAD_GL_VERSION_3_0 = (major == 3 && minor >= 0) || major > 3;
    GLAD_GL_VERSION_3_1 = (major == 3 && minor >= 1) || major > 3;
    GLAD_GL_VERSION_3_2 = (major == 3 && minor >= 2) || major > 3;
    GLAD_GL_VERSION_3_3 = (major == 3 && minor >= 3) || major > 3;

    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadGLUserPtr( GLADuserptrloadfunc load, void *userptr) {
    int version;

    glad_glGetString = (PFNGLGETSTRINGPROC) load(userptr, "glGetString");
    if(glad_glGetString == NULL) return 0;
    version = glad_gl_find_core_gl();

    glad_gl_load_GL_VERSION_1_0(load, userptr);
    glad_gl_load_GL_VERSION_1_1(load, userptr);
    glad_gl_load_GL_VERSION_1_2(load, userptr);
    glad_gl_load_GL_VERSION_1_3(load, userptr);
    glad_gl_load_GL_VERSION_1_4(load, userptr);
    glad_gl_load_GL_VERSION_1_5(load, userptr);
    glad_gl_load_GL_VERSION_2_0(load, userptr);
    glad_gl_load_GL_VERSION_2_1(load, userptr);
    glad_gl_load_GL_VERSION_3_0(load, userptr);
    glad_gl_load_GL_VERSION_3_1(load, userptr);
    glad_gl_load_GL_VERSION_3_2(load, userptr);
    glad_gl_load_GL_VERSION_3_3(load, userptr);

    if (!glad_gl_find_extensions_gl()) return 0;
    glad_gl_load_GL_ARB_ES2_compatibility(load, userptr);
    glad_gl_load_GL_ARB_ES3_1_compatibility(load, userptr);
    glad_gl_load_GL_ARB_ES3_2_compatibility(load, userptr);
    glad_gl_load_GL_ARB_base_instance(load, userptr);
    glad_gl_load_GL_ARB_bindless_texture(load, userptr);
    glad_gl_load_GL_ARB_blend_func_extended(load, userptr);
    glad_gl_load_GL_ARB_buffer_storage(load, userptr);
    glad_gl_load_GL_ARB_cl_event(load, userptr);
    glad_gl_load_GL_ARB_clear_buffer_object(load, userptr);
    glad_gl_load_GL_ARB_clear_texture(load, userptr);
    glad_gl_load_GL_ARB_clip_control(load, userptr);
    glad_gl_load_GL_ARB_color_buffer_float(load, userptr);
    glad_gl_load_GL_ARB_compute_shader(load, userptr);
    glad_gl_load_GL_ARB_compute_variable_group_size(load, userptr);
    glad_gl_load_GL_ARB_copy_buffer(load, userptr);
    glad_gl_load_GL_ARB_copy_image(load, userptr);
    glad_gl_load_GL_ARB_debug_output(load, userptr);
    glad_gl_load_GL_ARB_direct_state_access(load, userptr);
    glad_gl_load_GL_ARB_draw_buffers(load, userptr);
    glad_gl_load_GL_ARB_draw_buffers_blend(load, userptr);
    glad_gl_load_GL_ARB_draw_elements_base_vertex(load, userptr);
    glad_gl_load_GL_ARB_draw_indirect(load, userptr);
    glad_gl_load_GL_ARB_draw_instanced(load, userptr);
    glad_gl_load_GL_ARB_fragment_program(load, userptr);
    glad_gl_load_GL_ARB_framebuffer_no_attachments(load, userptr);
    glad_gl_load_GL_ARB_framebuffer_object(load, userptr);
    glad_gl_load_GL_ARB_geometry_shader4(load, userptr);
    glad_gl_load_GL_ARB_get_program_binary(load, userptr);
    glad_gl_load_GL_ARB_get_texture_sub_image(load, userptr);
    glad_gl_load_GL_ARB_gl_spirv(load, userptr);
    glad_gl_load_GL_ARB_gpu_shader_fp64(load, userptr);
    glad_gl_load_GL_ARB_gpu_shader_int64(load, userptr);
    glad_gl_load_GL_ARB_imaging(load, userptr);
    glad_gl_load_GL_ARB_indirect_parameters(load, userptr);
    glad_gl_load_GL_ARB_instanced_arrays(load, userptr);
    glad_gl_load_GL_ARB_internalformat_query(load, userptr);
    glad_gl_load_GL_ARB_internalformat_query2(load, userptr);
    glad_gl_load_GL_ARB_invalidate_subdata(load, userptr);
    glad_gl_load_GL_ARB_map_buffer_range(load, userptr);
    glad_gl_load_GL_ARB_matrix_palette(load, userptr);
    glad_gl_load_GL_ARB_multi_bind(load, userptr);
    glad_gl_load_GL_ARB_multi_draw_indirect(load, userptr);
    glad_gl_load_GL_ARB_multisample(load, userptr);
    glad_gl_load_GL_ARB_multitexture(load, userptr);
    glad_gl_load_GL_ARB_occlusion_query(load, userptr);
    glad_gl_load_GL_ARB_parallel_shader_compile(load, userptr);
    glad_gl_load_GL_ARB_point_parameters(load, userptr);
    glad_gl_load_GL_ARB_polygon_offset_clamp(load, userptr);
    glad_gl_load_GL_ARB_program_interface_query(load, userptr);
    glad_gl_load_GL_ARB_provoking_vertex(load, userptr);
    glad_gl_load_GL_ARB_robustness(load, userptr);
    glad_gl_load_GL_ARB_sample_locations(load, userptr);
    glad_gl_load_GL_ARB_sample_shading(load, userptr);
    glad_gl_load_GL_ARB_sampler_objects(load, userptr);
    glad_gl_load_GL_ARB_separate_shader_objects(load, userptr);
    glad_gl_load_GL_ARB_shader_atomic_counters(load, userptr);
    glad_gl_load_GL_ARB_shader_image_load_store(load, userptr);
    glad_gl_load_GL_ARB_shader_objects(load, userptr);
    glad_gl_load_GL_ARB_shader_storage_buffer_object(load, userptr);
    glad_gl_load_GL_ARB_shader_subroutine(load, userptr);
    glad_gl_load_GL_ARB_shading_language_include(load, userptr);
    glad_gl_load_GL_ARB_sparse_buffer(load, userptr);
    glad_gl_load_GL_ARB_sparse_texture(load, userptr);
    glad_gl_load_GL_ARB_sync(load, userptr);
    glad_gl_load_GL_ARB_tessellation_shader(load, userptr);
    glad_gl_load_GL_ARB_texture_barrier(load, userptr);
    glad_gl_load_GL_ARB_texture_buffer_object(load, userptr);
    glad_gl_load_GL_ARB_texture_buffer_range(load, userptr);
    glad_gl_load_GL_ARB_texture_compression(load, userptr);
    glad_gl_load_GL_ARB_texture_multisample(load, userptr);
    glad_gl_load_GL_ARB_texture_storage(load, userptr);
    glad_gl_load_GL_ARB_texture_storage_multisample(load, userptr);
    glad_gl_load_GL_ARB_texture_view(load, userptr);
    glad_gl_load_GL_ARB_timer_query(load, userptr);
    glad_gl_load_GL_ARB_transform_feedback2(load, userptr);
    glad_gl_load_GL_ARB_transform_feedback3(load, userptr);
    glad_gl_load_GL_ARB_transform_feedback_instanced(load, userptr);
    glad_gl_load_GL_ARB_transpose_matrix(load, userptr);
    glad_gl_load_GL_ARB_uniform_buffer_object(load, userptr);
    glad_gl_load_GL_ARB_vertex_array_object(load, userptr);
    glad_gl_load_GL_ARB_vertex_attrib_64bit(load, userptr);
    glad_gl_load_GL_ARB_vertex_attrib_binding(load, userptr);
    glad_gl_load_GL_ARB_vertex_blend(load, userptr);
    glad_gl_load_GL_ARB_vertex_buffer_object(load, userptr);
    glad_gl_load_GL_ARB_vertex_program(load, userptr);
    glad_gl_load_GL_ARB_vertex_shader(load, userptr);
    glad_gl_load_GL_ARB_vertex_type_2_10_10_10_rev(load, userptr);
    glad_gl_load_GL_ARB_viewport_array(load, userptr);
    glad_gl_load_GL_ARB_window_pos(load, userptr);
    glad_gl_load_GL_EXT_EGL_image_storage(load, userptr);
    glad_gl_load_GL_EXT_bindable_uniform(load, userptr);
    glad_gl_load_GL_EXT_blend_color(load, userptr);
    glad_gl_load_GL_EXT_blend_equation_separate(load, userptr);
    glad_gl_load_GL_EXT_blend_func_separate(load, userptr);
    glad_gl_load_GL_EXT_blend_minmax(load, userptr);
    glad_gl_load_GL_EXT_color_subtable(load, userptr);
    glad_gl_load_GL_EXT_compiled_vertex_array(load, userptr);
    glad_gl_load_GL_EXT_convolution(load, userptr);
    glad_gl_load_GL_EXT_coordinate_frame(load, userptr);
    glad_gl_load_GL_EXT_copy_texture(load, userptr);
    glad_gl_load_GL_EXT_cull_vertex(load, userptr);
    glad_gl_load_GL_EXT_debug_label(load, userptr);
    glad_gl_load_GL_EXT_debug_marker(load, userptr);
    glad_gl_load_GL_EXT_depth_bounds_test(load, userptr);
    glad_gl_load_GL_EXT_direct_state_access(load, userptr);
    glad_gl_load_GL_EXT_draw_buffers2(load, userptr);
    glad_gl_load_GL_EXT_draw_instanced(load, userptr);
    glad_gl_load_GL_EXT_draw_range_elements(load, userptr);
    glad_gl_load_GL_EXT_external_buffer(load, userptr);
    glad_gl_load_GL_EXT_fog_coord(load, userptr);
    glad_gl_load_GL_EXT_framebuffer_blit(load, userptr);
    glad_gl_load_GL_EXT_framebuffer_blit_layers(load, userptr);
    glad_gl_load_GL_EXT_framebuffer_multisample(load, userptr);
    glad_gl_load_GL_EXT_framebuffer_object(load, userptr);
    glad_gl_load_GL_EXT_geometry_shader4(load, userptr);
    glad_gl_load_GL_EXT_gpu_program_parameters(load, userptr);
    glad_gl_load_GL_EXT_gpu_shader4(load, userptr);
    glad_gl_load_GL_EXT_histogram(load, userptr);
    glad_gl_load_GL_EXT_index_func(load, userptr);
    glad_gl_load_GL_EXT_index_material(load, userptr);
    glad_gl_load_GL_EXT_light_texture(load, userptr);
    glad_gl_load_GL_EXT_memory_object(load, userptr);
    glad_gl_load_GL_EXT_memory_object_fd(load, userptr);
    glad_gl_load_GL_EXT_memory_object_win32(load, userptr);
    glad_gl_load_GL_EXT_multi_draw_arrays(load, userptr);
    glad_gl_load_GL_EXT_multisample(load, userptr);
    glad_gl_load_GL_EXT_paletted_texture(load, userptr);
    glad_gl_load_GL_EXT_pixel_transform(load, userptr);
    glad_gl_load_GL_EXT_point_parameters(load, userptr);
    glad_gl_load_GL_EXT_polygon_offset(load, userptr);
    glad_gl_load_GL_EXT_polygon_offset_clamp(load, userptr);
    glad_gl_load_GL_EXT_provoking_vertex(load, userptr);
    glad_gl_load_GL_EXT_raster_multisample(load, userptr);
    glad_gl_load_GL_EXT_secondary_color(load, userptr);
    glad_gl_load_GL_EXT_semaphore(load, userptr);
    glad_gl_load_GL_EXT_semaphore_fd(load, userptr);
    glad_gl_load_GL_EXT_semaphore_win32(load, userptr);
    glad_gl_load_GL_EXT_separate_shader_objects(load, userptr);
    glad_gl_load_GL_EXT_shader_framebuffer_fetch_non_coherent(load, userptr);
    glad_gl_load_GL_EXT_shader_image_load_store(load, userptr);
    glad_gl_load_GL_EXT_stencil_clear_tag(load, userptr);
    glad_gl_load_GL_EXT_stencil_two_side(load, userptr);
    glad_gl_load_GL_EXT_subtexture(load, userptr);
    glad_gl_load_GL_EXT_texture3D(load, userptr);
    glad_gl_load_GL_EXT_texture_array(load, userptr);
    glad_gl_load_GL_EXT_texture_buffer_object(load, userptr);
    glad_gl_load_GL_EXT_texture_integer(load, userptr);
    glad_gl_load_GL_EXT_texture_object(load, userptr);
    glad_gl_load_GL_EXT_texture_perturb_normal(load, userptr);
    glad_gl_load_GL_EXT_texture_storage(load, userptr);
    glad_gl_load_GL_EXT_timer_query(load, userptr);
    glad_gl_load_GL_EXT_transform_feedback(load, userptr);
    glad_gl_load_GL_EXT_vertex_array(load, userptr);
    glad_gl_load_GL_EXT_vertex_attrib_64bit(load, userptr);
    glad_gl_load_GL_EXT_vertex_shader(load, userptr);
    glad_gl_load_GL_EXT_vertex_weighting(load, userptr);
    glad_gl_load_GL_EXT_win32_keyed_mutex(load, userptr);
    glad_gl_load_GL_EXT_window_rectangles(load, userptr);
    glad_gl_load_GL_EXT_x11_sync_object(load, userptr);
    glad_gl_load_GL_KHR_blend_equation_advanced(load, userptr);
    glad_gl_load_GL_KHR_debug(load, userptr);
    glad_gl_load_GL_KHR_parallel_shader_compile(load, userptr);
    glad_gl_load_GL_KHR_robustness(load, userptr);
    glad_gl_load_GL_OES_byte_coordinates(load, userptr);
    glad_gl_load_GL_OES_fixed_point(load, userptr);
    glad_gl_load_GL_OES_query_matrix(load, userptr);
    glad_gl_load_GL_OES_single_precision(load, userptr);



    return version;
}


int gladLoadGL( GLADloadfunc load) {
    return gladLoadGLUserPtr( glad_gl_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}



 

#ifdef GLAD_GL

#ifndef GLAD_LOADER_LIBRARY_C_
#define GLAD_LOADER_LIBRARY_C_

#include <stddef.h>
#include <stdlib.h>

#if GLAD_PLATFORM_WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif


static void* glad_get_dlopen_handle(const char *lib_names[], int length) {
    void *handle = NULL;
    int i;

    for (i = 0; i < length; ++i) {
#if GLAD_PLATFORM_WIN32
  #if GLAD_PLATFORM_UWP
        size_t buffer_size = (strlen(lib_names[i]) + 1) * sizeof(WCHAR);
        LPWSTR buffer = (LPWSTR) malloc(buffer_size);
        if (buffer != NULL) {
            int ret = MultiByteToWideChar(CP_ACP, 0, lib_names[i], -1, buffer, buffer_size);
            if (ret != 0) {
                handle = (void*) LoadPackagedLibrary(buffer, 0);
            }
            free((void*) buffer);
        }
  #else
        handle = (void*) LoadLibraryA(lib_names[i]);
  #endif
#else
        handle = dlopen(lib_names[i], RTLD_LAZY | RTLD_LOCAL);
#endif
        if (handle != NULL) {
            return handle;
        }
    }

    return NULL;
}

static void glad_close_dlopen_handle(void* handle) {
    if (handle != NULL) {
#if GLAD_PLATFORM_WIN32
        FreeLibrary((HMODULE) handle);
#else
        dlclose(handle);
#endif
    }
}

static GLADapiproc glad_dlsym_handle(void* handle, const char *name) {
    if (handle == NULL) {
        return NULL;
    }

#if GLAD_PLATFORM_WIN32
    return (GLADapiproc) GetProcAddress((HMODULE) handle, name);
#else
    return GLAD_GNUC_EXTENSION (GLADapiproc) dlsym(handle, name);
#endif
}

#endif /* GLAD_LOADER_LIBRARY_C_ */

typedef void* (GLAD_API_PTR *GLADglprocaddrfunc)(const char*);
struct _glad_gl_userptr {
    void *handle;
    GLADglprocaddrfunc gl_get_proc_address_ptr;
};

static GLADapiproc glad_gl_get_proc(void *vuserptr, const char *name) {
    struct _glad_gl_userptr userptr = *(struct _glad_gl_userptr*) vuserptr;
    GLADapiproc result = NULL;

    if(userptr.gl_get_proc_address_ptr != NULL) {
        result = GLAD_GNUC_EXTENSION (GLADapiproc) userptr.gl_get_proc_address_ptr(name);
    }
    if(result == NULL) {
        result = glad_dlsym_handle(userptr.handle, name);
    }

    return result;
}

static void* _glad_GL_loader_handle = NULL;

static void* glad_gl_dlopen_handle(void) {
#if GLAD_PLATFORM_APPLE
    static const char *NAMES[] = {
        "../Frameworks/OpenGL.framework/OpenGL",
        "/Library/Frameworks/OpenGL.framework/OpenGL",
        "/System/Library/Frameworks/OpenGL.framework/OpenGL",
        "/System/Library/Frameworks/OpenGL.framework/Versions/Current/OpenGL"
    };
#elif GLAD_PLATFORM_WIN32
    static const char *NAMES[] = {"opengl32.dll"};
#else
    static const char *NAMES[] = {
  #if defined(__CYGWIN__)
        "libGL-1.so",
  #endif
        "libGL.so.1",
        "libGL.so"
    };
#endif

    if (_glad_GL_loader_handle == NULL) {
        _glad_GL_loader_handle = glad_get_dlopen_handle(NAMES, sizeof(NAMES) / sizeof(NAMES[0]));
    }

    return _glad_GL_loader_handle;
}

static struct _glad_gl_userptr glad_gl_build_userptr(void *handle) {
    struct _glad_gl_userptr userptr;

    userptr.handle = handle;
#if GLAD_PLATFORM_APPLE || defined(__HAIKU__)
    userptr.gl_get_proc_address_ptr = NULL;
#elif GLAD_PLATFORM_WIN32
    userptr.gl_get_proc_address_ptr =
        (GLADglprocaddrfunc) glad_dlsym_handle(handle, "wglGetProcAddress");
#else
    userptr.gl_get_proc_address_ptr =
        (GLADglprocaddrfunc) glad_dlsym_handle(handle, "glXGetProcAddressARB");
#endif

    return userptr;
}

int gladLoaderLoadGL(void) {
    int version = 0;
    void *handle;
    int did_load = 0;
    struct _glad_gl_userptr userptr;

    did_load = _glad_GL_loader_handle == NULL;
    handle = glad_gl_dlopen_handle();
    if (handle) {
        userptr = glad_gl_build_userptr(handle);

        version = gladLoadGLUserPtr(glad_gl_get_proc, &userptr);

        if (did_load) {
            gladLoaderUnloadGL();
        }
    }

    return version;
}



void gladLoaderUnloadGL(void) {
    if (_glad_GL_loader_handle != NULL) {
        glad_close_dlopen_handle(_glad_GL_loader_handle);
        _glad_GL_loader_handle = NULL;
    }
}

#endif /* GLAD_GL */

#ifdef __cplusplus
}
#endif
