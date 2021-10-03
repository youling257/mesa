/* Copyright (C) 2021 Google, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#include "freedreno_dev_info.h"

/* Map python to C: */
#define True true
#define False false

static const struct fd_dev_info __info0 = {.gmem_align_w=32,.gmem_align_h=32,.tile_align_w=32,.tile_align_h=32,.tile_max_w=512,.tile_max_h=-1,.num_vsc_pipes=8,};
static const struct fd_dev_info __info1 = {.gmem_align_w=32,.gmem_align_h=32,.tile_align_w=32,.tile_align_h=32,.tile_max_w=992,.tile_max_h=480,.num_vsc_pipes=8,};
static const struct fd_dev_info __info2 = {.gmem_align_w=32,.gmem_align_h=32,.tile_align_w=32,.tile_align_h=32,.tile_max_w=1024,.tile_max_h=480,.num_vsc_pipes=8,};
static const struct fd_dev_info __info3 = {.gmem_align_w=64,.gmem_align_h=32,.tile_align_w=64,.tile_align_h=32,.tile_max_w=1024,.tile_max_h=4064,.num_vsc_pipes=16,};
static const struct fd_dev_info __info4 = {.gmem_align_w=16,.gmem_align_h=4,.tile_align_w=32,.tile_align_h=32,.tile_max_w=1024,.tile_max_h=1008,.num_vsc_pipes=32,.num_sp_cores=1,.a6xx={.magic={.RB_UNKNOWN_8E04_blit=1048576,.PC_POWER_CNTL=0,},.has_cp_reg_write=True,.has_8bpp_ubwc=True,.fibers_per_sp=2048,.reg_size_vec4=96,.ccu_cntl_gmem_unk2=True,.indirect_draw_wfm_quirk=True,.depth_bounds_require_depth_test_quirk=True,},};
static const struct fd_dev_info __info5 = {.gmem_align_w=16,.gmem_align_h=4,.tile_align_w=32,.tile_align_h=32,.tile_max_w=1024,.tile_max_h=1008,.num_vsc_pipes=32,.num_sp_cores=2,.a6xx={.magic={.RB_UNKNOWN_8E04_blit=16777216,.PC_POWER_CNTL=1,},.has_cp_reg_write=True,.has_8bpp_ubwc=True,.fibers_per_sp=2048,.reg_size_vec4=96,.ccu_cntl_gmem_unk2=True,.indirect_draw_wfm_quirk=True,.depth_bounds_require_depth_test_quirk=True,},};
static const struct fd_dev_info __info6 = {.gmem_align_w=16,.gmem_align_h=4,.tile_align_w=32,.tile_align_h=32,.tile_max_w=1024,.tile_max_h=1008,.num_vsc_pipes=32,.num_sp_cores=2,.a6xx={.magic={.RB_UNKNOWN_8E04_blit=1048576,.PC_POWER_CNTL=1,},.has_cp_reg_write=True,.has_8bpp_ubwc=True,.fibers_per_sp=8192,.reg_size_vec4=96,.supports_multiview_mask=True,.has_z24uint_s8uint=True,.indirect_draw_wfm_quirk=True,.depth_bounds_require_depth_test_quirk=True,},};
static const struct fd_dev_info __info7 = {.gmem_align_w=16,.gmem_align_h=4,.tile_align_w=32,.tile_align_h=32,.tile_max_w=1024,.tile_max_h=1008,.num_vsc_pipes=32,.num_sp_cores=4,.a6xx={.magic={.RB_UNKNOWN_8E04_blit=68157440,.PC_POWER_CNTL=3,},.has_cp_reg_write=True,.has_8bpp_ubwc=True,.fibers_per_sp=8192,.reg_size_vec4=96,.supports_multiview_mask=True,.has_z24uint_s8uint=True,.indirect_draw_wfm_quirk=True,.depth_bounds_require_depth_test_quirk=True,},};
static const struct fd_dev_info __info8 = {.gmem_align_w=16,.gmem_align_h=4,.tile_align_w=96,.tile_align_h=32,.tile_max_w=1024,.tile_max_h=1008,.num_vsc_pipes=32,.num_sp_cores=3,.a6xx={.magic={.RB_UNKNOWN_8E04_blit=68157440,.PC_POWER_CNTL=2,},.has_cp_reg_write=True,.has_8bpp_ubwc=False,.fibers_per_sp=4096,.reg_size_vec4=64,.supports_multiview_mask=True,.has_z24uint_s8uint=True,.tess_use_shared=True,.storage_16bit=True,.has_tex_filter_cubic=True,.has_sample_locations=True,.has_ccu_flush_bug=True,},};
static const struct fd_dev_info __info9 = {.gmem_align_w=16,.gmem_align_h=4,.tile_align_w=32,.tile_align_h=32,.tile_max_w=1024,.tile_max_h=1008,.num_vsc_pipes=32,.num_sp_cores=2,.a6xx={.magic={.RB_UNKNOWN_8E04_blit=1048576,.PC_POWER_CNTL=1,},.has_cp_reg_write=False,.has_8bpp_ubwc=False,.fibers_per_sp=4096,.reg_size_vec4=64,.supports_multiview_mask=True,.has_z24uint_s8uint=True,.tess_use_shared=True,.storage_16bit=True,.has_tex_filter_cubic=True,.has_sample_locations=True,.has_lpac=True,},};
static const struct fd_dev_info __info10 = {.gmem_align_w=16,.gmem_align_h=4,.tile_align_w=96,.tile_align_h=32,.tile_max_w=1024,.tile_max_h=1008,.num_vsc_pipes=32,.num_sp_cores=3,.a6xx={.magic={.RB_UNKNOWN_8E04_blit=68157440,.PC_POWER_CNTL=2,},.has_cp_reg_write=False,.has_8bpp_ubwc=False,.fibers_per_sp=4096,.reg_size_vec4=64,.supports_multiview_mask=True,.has_z24uint_s8uint=True,.tess_use_shared=True,.storage_16bit=True,.has_tex_filter_cubic=True,.has_sample_locations=True,.has_lpac=True,},};

static const struct fd_dev_rec fd_dev_recs[] = {
   { {200, 0x20000ff}, "FD200", &__info0 },
   { {201, 0x20001ff}, "FD201", &__info0 },
   { {205, 0x20005ff}, "FD205", &__info0 },
   { {220, 0x20200ff}, "FD220", &__info0 },
   { {305, 0x30005ff}, "FD305", &__info1 },
   { {307, 0x30007ff}, "FD307", &__info1 },
   { {320, 0x30200ff}, "FD320", &__info1 },
   { {330, 0x30300ff}, "FD330", &__info1 },
   { {405, 0x40005ff}, "FD405", &__info2 },
   { {420, 0x40200ff}, "FD420", &__info2 },
   { {430, 0x40300ff}, "FD430", &__info2 },
   { {510, 0x50100ff}, "FD510", &__info3 },
   { {530, 0x50300ff}, "FD530", &__info3 },
   { {540, 0x50400ff}, "FD540", &__info3 },
   { {615, 0x60105ff}, "FD615", &__info4 },
   { {618, 0x60108ff}, "FD618", &__info4 },
   { {630, 0x60300ff}, "FD630", &__info5 },
   { {640, 0x60400ff}, "FD640", &__info6 },
   { {680, 0x60800ff}, "FD680", &__info7 },
   { {650, 0x60500ff}, "FD650", &__info8 },
   { {0, 0x6030500}, "Adreno 7c Gen 3", &__info9 },
   { {660, 0x60600ff}, "FD660", &__info10 },
};

