/*
 * BSAC data declarations
 *
 * This file is part of Libav.
 *
 * Libav is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * Libav is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Libav; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/**
 * @file
 * BSAC data
 * @author Young Han Lee  ( leeyhkr gmail com )
 * @author Alex Converse (  )
 */

#ifndef AVCODEC_BSACTAB_H
#define AVCODEC_BSACTAB_H

#include "libavutil/mem.h"
#include "aac.h"
#include "aac_tablegen_decl.h"

#include <stdint.h>

extern const uint16_t AModelScf[8][64];
extern const uint16_t AModelCBand[8][32];
extern const uint16_t AModelSpectrum[1016];

extern const int small_step_offset_tbl[16][4][8];

extern const int *model_offset_tbl[32];

extern const uint16_t AModelStereoInfo[4];
extern const uint16_t AModelMsUsed[2];
extern const uint16_t AModelNoiseFlag[2];
extern const uint16_t AModelNoiseMode[4];

extern const int max_cband_si_len_tbl[32];
extern const int cband_si_cbook_tbl[32];
extern const int min_freq[16];
#endif /* AVCODEC_BSACTAB_H */


