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

typedef struct {
  int     samp_rate;
  int     nsfb1024;
  short*  SFbands1024;
  int     nsfb128;
  short*  SFbands128;
  int     nsfb960;
  short*  SFbands960;
  int     nsfb120;
  short*  SFbands120;
  int    shortFssWidth;
  int    longFssGroups;
  int     nsfb480;
  short*  SFbands480;
  int     nsfb512;
  short*  SFbands512;
} SR_Info;

extern int AModelScf[8][64];
extern int AModelCBand[8][32];
extern int AModelSpectrum[1016];

extern int small_step_offset_tbl[16][4][8];

extern int *model_offset_tbl[32];

extern int AModelStereoInfo[4];
extern int AModelMsUsed[2];
extern int AModelNoiseFlag[2];
extern int AModelNoiseMode[4];
extern int AModelNoiseNrg[512];

extern int max_cband_si_len_tbl[32];
extern int cband_si_cbook_tbl[32];
extern int min_freq[16];
extern SR_Info samp_rate_info[16];
#endif /* AVCODEC_BSACTAB_H */


