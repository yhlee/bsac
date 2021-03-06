/*
 * BSAC data
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
#include "bsactab.h"

uint64_t half[16] =
{
  0x20000000, 0x10000000, 0x08000000, 0x04000000,
  0x02000000, 0x01000000, 0x00800000, 0x00400000,
  0x00200000, 0x00100000, 0x00080000, 0x00040000,
  0x00020000, 0x00010000, 0x00008000, 0x00004000
};

int AModelScf[8][64] = {
{
     1,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
  1874,   973,   333,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
  4399,  3559,  2699,  1985,  1146,   570,   212,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
  8039,  7263,  6360,  5461,  4629,  3764,  2780,  1858,
  1032,   486,   223,    82,    50,    35,    12,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
  9487,  8888,  8275,  7659,  6917,  6253,  5599,  4825,
  3959,  3073,  2099,  1293,   581,   140,    51,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
  2216,  1870,  1593,  1416,  1164,   975,   814,   626,
   444,   318,   228,   151,   105,    67,    47,    41,
    32,    27,    24,    21,    18,    15,    13,    12,
    10,     9,     7,     6,     4,     3,     1,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
  3114,  2463,  2057,  1772,  1539,  1341,  1169,  1038,
   916,   778,   677,   601,   514,   444,   368,   307,
   258,   201,   151,   115,    79,    55,    34,    22,
    15,    11,     9,     7,     5,     3,     1,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
 15198, 14992, 14803, 14460, 14082, 13670, 13223, 12828,
 12176, 11506, 10750,  9978,  9188,  8415,  7693,  6852,
  6148,  5530,  4894,  4327,  3675,  3228,  2936,  2593,
  2301,  1975,  1717,  1580,  1373,  1270,  1236,  1099,
   910,   738,   669,   566,   549,   498,   463,   429,
   412,   377,   360,   343,   326,   309,   291,   274,
   257,   240,   223,   206,   188,   171,   154,   137,
   120,   103,    85,    68,    51,    34,    17,     0,
},
};


int AModelCBand[8][32] = {
{
 16118, 15193,  6930,  4771,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
 15697, 13230,  7423,  4023,  2020,   555,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
 14919, 10988,  7685,  4918,  3709,  2144,  1504,  1098,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
 14014, 10158,  8436,  5961,  5333,  3398,  2771,  2184,
  1305,   523,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
 14723, 11895, 11011,  7912,  7673,  4871,  4580,  2893,
  2380,  1175,  1093,    64,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
 12399,  9374,  8022,  6211,  5658,  4141,  3948,  3201,
  2802,  1960,  1818,  1108,  1043,    22,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
 12719,  8193,  5677,  4734,  3845,  3124,  2959,  2657,
  2389,  2085,  2013,  1705,  1672,  1371,  1355,   759,
   408,   119,    16,    12,     8,     4,    0,      0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
{
 16376, 16368, 16360, 16352, 16343, 16177, 15575, 15305,
 12404, 11215,  8987,  5083,  3409,  1539,  1100,   128,
    48,    40,    32,    24,    16,     8,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,
},
};

int AModelSpectrum[1016] = {
 14592, 14848, 12032, 15104, 12032, 14080, 11264, 15104,
 12288, 13824, 11520, 14592, 12032, 14080, 11264, 10240,
 10240,  9472, 10496,  9728,  9984,  8960, 10752,  9984,
 10240,  9216, 10240,  9472,  9728,  8704, 15616, 15616,
 13056, 15616, 13056, 15104, 13056, 15616, 12800, 15104,
 12544, 15872, 14080, 15360, 13056, 14080, 14848, 10240,
 15104,  9728, 11264,  9216, 14848,  9472, 11008,  9216,
 12544,  8960, 10496,  8960, 12288, 11264,  7424,  8704,
  6656,  7168,  5632,  9984,  8704,  6656,  7424,  6400,
  7168,  7680, 11264,  9216,  6400,  7680,  7936,  7168,
 11008,  9216, 10496,  9984,  9216,  4864,  6656,  8192,
  6144,  8960,  9472,  7936, 11264,  8960, 13824, 10240,
 12544,  9472,  5120,  4608,  6144,  5120,  8448,  8704,
  4096,  7680, 12288,  9728,  4608,  8704, 12544, 14592,
 14848, 11776, 14848, 12032, 13312, 10752, 14848, 12288,
 13568, 11264, 13824, 11008, 12544,  9472,  7680,  7424,
  7168,  7424,  7168,  7424,  6912,  7424,  7680,  7680,
  6656,  7680,  7168,  7424,  6912,  6656,  6656,  6144,
  6144,  6144,  5888,  5888,  6144,  6656,  5888,  5888,
  6400,  6144,  5632,  5888,  5632,  5376,  5888,  6144,
  5632,  7168,  5888,  6400,  5888,  5376,  7168,  5376,
  5632,  3840,  6144,  5120,  5888,  6656,  6656,  7680,
  6144,  7168,  6912,  5376,  4864,  5376,  5120,  5632,
  5376,  5888,  5632,  6912,  6144,  5120,  5120, 13824,
 15616, 15616, 12800, 15616, 13056, 15616, 13824, 15616,
 13568, 15360, 13568, 16128, 15104, 16128, 15616, 15360,
 15616, 11008, 15616, 10496, 13568, 11264, 15616, 11008,
 13312, 11008, 14336, 11008, 14080, 10752, 14592, 13312,
  9216, 10752,  7168,  7936,  5632, 13568,  9472,  6656,
 10752,  8704, 11008, 10752, 13568,  9728,  6656,  9728,
  9472,  9984, 13568, 11520, 14336, 12800, 11776,  6144,
  5632, 10496,  9472, 12544, 11264,  8960, 13824, 12288,
 15360, 13056, 15104, 13312,  5888,  6656,  7168,  6400,
 10496, 10752,  9216,  9984, 15360, 13824,  7424, 12544,
 13312, 14336,  9984, 14592,  9984, 12032,  8704, 14336,
  9472, 11520,  8192, 13056,  8192, 10496,  7680, 11008,
  8960,  6656,  6656,  6912,  6144,  5888,  7680,  7168,
  6912,  7168,  6912,  6656,  6144,  7424,  6912,  6144,
  6400,  6912,  6656,  7424,  7680,  7936,  6912,  7680,
  4608,  5120,  6656,  4864,  7168,  6912,  6400,  8192,
  7680, 12288, 10496, 11520,  9472,  4864,  5888,  5120,
  4864,  7680,  7936,  4352,  6400,  8448,  7680,  5376,
  6656, 12544, 10752, 11008, 10240, 14336, 14848, 11520,
 14848, 11520, 13824, 11520, 14848, 11520, 13824, 11008,
 14848, 10240, 13824,  9984, 11008, 12288,  9472, 12032,
  9728, 11520,  9216, 12288,  9472, 11008,  9216, 11520,
  9472, 10240,  9472, 10752, 10496,  8960,  8704,  7680,
  6912,  6400,  9728,  8960,  7936,  7424,  8704,  6912,
  6144,  8448,  8448,  7424,  7424,  7936,  7936, 10496,
  9728, 10752,  8448,  8960,  6144,  6656,  7424,  8192,
  7168,  6656,  7680, 10496, 10240, 12032,  8960, 12032,
  9728,  7424,  5888,  7424,  7168,  7680,  8448,  5888,
  8704,  8960,  8960,  5120,  6656,  6400,  6400,  6400,
  6912,  5888,  6912,  6656,  4096,  6400,  5632,  6144,
  7680,  6400,  6656,  5888,  6912,  5888,  5376,  5376,
  5376,  5888,  5120,  6400,  5888,  5632,  5632,  4608,
  4864,  4608,  5632,  5376,  5376,  4864,  5632,  5632,
  7168,  5120,  5888,  5632,  5120,  5120,  5120,  5376,
  5120,  4864,  4864,  5376,  6144,  5632,  7936,  6656,
  7680,  6144,  5888,  5632,  5632,  4864,  5120,  4864,
  4352,  5376,  5632,  5376,  4608,  4864, 12288, 11008,
 10240,  9984, 15616, 15616, 13568, 15872, 13568, 16128,
 15104, 15872, 12800, 16128, 14848, 16128, 15616, 16128,
 15104, 16128, 16128, 12800, 16128, 13568, 15872, 14080,
 16128, 11520, 15360, 12288, 16128, 14080, 15872, 13312,
 16128, 14592,  9728, 12032,  7680,  9216,  5376, 14080,
 12544,  6912,  9728,  8960, 14848, 14592, 15872, 11008,
  8704, 10240, 12032,  9472, 15872, 14080, 15872, 15616,
 14592,  6656, 13056,  9472, 10240, 15360, 14336, 11264,
 15616, 14336, 16128, 15104, 16128, 14848,  7680,  6912,
  6144,  6144, 15104, 14848,  4608, 12032, 16128, 15104,
  6912, 13568, 15360, 15872, 12288, 15872, 12544, 14848,
 12544, 15616, 11264, 14592, 11776, 15360, 11520, 15360,
 12544, 15616, 12544,  8448, 11264,  9728, 10240,  7424,
 11008, 10240, 10240,  9216,  8704,  8448,  8960, 11520,
  9472,  7936,  8448, 11008,  9984, 12800, 11520, 13312,
 10752, 13568,  6144,  6144,  7936,  7680, 11776, 10752,
  9216, 12288, 11008, 15872, 15616, 15616, 14848,  7680,
 11008,  9728,  6400, 13312, 13568,  7168,  9728, 13056,
 10752,  7168, 11008, 13568, 15104, 10496, 15104, 10752,
 12544,  9984, 15104,  9728, 12032,  9216, 13312,  8960,
 11520,  8192, 13056,  9984,  7168,  9216,  7168,  7168,
  6400,  9984, 10240,  6912,  7424,  8192,  6912,  6656,
  8960,  7424,  5888,  7680,  9216,  8448, 11008,  8448,
 10240,  8192,  8960,  6912,  5376,  6912,  5120,  6656,
  6656,  8192, 10752,  8704, 14080, 12032, 12800, 10752,
  5888,  5888,  5632,  6400,  9472,  8960,  5376,  6400,
  9472,  8704,  5120,  6912, 12032, 10240, 10496,  9216,
 11520,  9472,  8960,  9472,  9472,  9728,  9216, 15104,
 15360, 13312, 15360, 13312, 14848, 12288, 15360, 12800,
 14848, 12544, 15360, 12288, 14592, 12032, 13568, 14336,
 11264, 14592, 11264, 13312, 11008, 14336, 11776, 13312,
 11520, 13824, 10752, 13056, 10240, 12544, 12544,  9728,
 10496,  8192,  8960,  7936, 11520,  9728,  8192,  9728,
  8960,  9472,  8448, 11264,  9216,  7424,  9472,  9216,
  9216, 12288, 10240, 12288, 10496,  8704,  7680,  7168,
  9472,  7424,  8960,  8960,  9472, 13056, 11264, 14080,
 11008, 13312, 11264,  7680,  7168,  8448,  6912, 10496,
 10752,  7424,  9728, 12800, 10752,  8192,  9216, 10496,
 11776,  9728, 12032,  9728, 11520,  9728, 11776,  9472,
 11008,  9728, 12032,  8960, 10752,  8960, 10240, 10240,
  8448,  9216,  8192,  8192,  6912,  9216,  7936,  7168,
  8448,  8704,  7424,  7168,  7936,  7168,  6400,  7680,
  8448,  8448, 10496,  8704,  8960,  8448,  7168,  6656,
  6656,  8448,  8448,  7168,  7168,  7936,  9984,  9472,
 11520,  9984, 10752,  8960,  7168,  7424,  6656,  6656,
  6912,  7424,  6144,  8192,  8960,  7936,  6400,  7168,
  7168,  7680,  6912,  7680,  7168,  7680,  6400,  6656,
  7936,  7936,  6400,  8192,  6656,  7936,  5888,  6912,
  6656,  6400,  6144,  6400,  6144,  5632,  6400,  6656,
  6400,  5888,  6144,  5888,  6144,  5632,  5888,  5120,
  5632,  6144,  6656,  7168,  7168,  7168,  5888,  5888,
  5376,  5376,  5632,  5632,  5376,  5120,  5888,  6912,
  6656,  8960,  7168,  7424,  6656,  5632,  5632,  5376,
  5120,  6144,  5376,  4864,  5888,  6400,  5632,  5120,
  5120, 12800, 11008, 10496, 10240, 10240,  9472,  9472,
  9984,  9472,  9728,  9472, 15616, 15872, 13056, 15872,
 13568, 15872, 14080, 15872, 13312, 15872, 13568, 16128,
 15616, 16128, 15360, 11776, 10496, 10752,  9984, 11520,
  9472,  9216,  9472,  9216,  9472,  8960, 10240,  9472,
  8960,  8960,  8704,  8704,  8704,  8704,  8704,  8704,
  8704,  8448,  8192,  8704,  8448,  8192, 15104, 15360,
 13312, 15360, 12800, 14592, 11776, 15616, 13312, 14592,
 12032, 15360, 11520, 14080, 11520, 12544, 11008, 10752,
 10496,  9984,  9728,  9472,  9472,  9472,  8704,  8704,
  8704,  8960,  8960,  8960,  8704,  8960,  8704,  8960,
  8704,  8704,  8704,  8704,  8704,  8192,  8448,  8704,
};

int small_step_offset_tbl[16][4][8] = {
/* sign_coded_vector = 0 */
{ {    0,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {    1,    2,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {    3,    4,    5,    6,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {    7,    8,    9,   10,   11,   12,   13,   14, }, /* bit_position = 3 */
 },
/* sign_coded_vector = 1 */
{ {   15,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   16,   17,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   18,   19,   20,   21,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 3 */
 },
/* sign_coded_vector = 2 */
{ {   22,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   23,   24,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   25,   25,   26,   26,   27,   27,   28,   28, }, /* bit_position = 3 */
 },
/* sign_coded_vector = 3 */
{ {   29,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   30,   31,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 3 */
 },
/* sign_coded_vector = 4 */
{ {   32,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   33,   33,   34,   34,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   35,   36,   35,   36,   37,   38,   37,   38, }, /* bit_position = 3 */
 },
/* sign_coded_vector = 5 */
{ {   39,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   40,   40,   41,   41,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 3 */
 },
/* sign_coded_vector = 6 */
{ {   42,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   43,   43,   43,   43,   44,   44,   44,   44, }, /* bit_position = 3 */
 },
/* sign_coded_vector = 7 */
{ {   45,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 3 */
 },
/* sign_coded_vector = 8 */
{ {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   46,   46,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   47,   48,   47,   48,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   49,   50,   51,   52,   49,   50,   51,   52, }, /* bit_position = 3 */
 },
/* sign_coded_vector = 9 */
{ {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   53,   53,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   54,   55,   54,   55,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 3 */
 },
/* sign_coded_vector = a */
{ {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   56,   56,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   57,   57,   58,   58,   57,   57,   58,   58, }, /* bit_position = 3 */
 },
/* sign_coded_vector = b */
{ {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   59,   59,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 3 */
 },
/* sign_coded_vector = c */
{ {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   60,   60,   60,   60,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   61,   62,   61,   62,   61,   62,   61,   62, }, /* bit_position = 3 */
 },
/* sign_coded_vector = d */
{ {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   63,   63,   63,   63,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 3 */
 },
/* sign_coded_vector = e */
{ {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   64,   64,   64,   64,   64,   64,   64,   64, }, /* bit_position = 3 */
 },
/* sign_coded_vector = f */
{ {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 0 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 1 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 2 */
  {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* bit_position = 3 */
 },
};

int large_step_offset[10][8] = {
{   0,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* Model No = 0 */
{  15,   -1,   -1,   -1,   -1,   -1,   -1,   -1, }, /* Model No = 1 */
{  30,   45,   -1,   -1,  110,   -1,   -1,   -1, }, /* Model No = 2 */
{ 111,  126,   -1,   -1,  191,   -1,   -1,   -1, }, /* Model No = 3 */
{ 192,  207,  272,   -1,  337,  338,   -1,   -1, }, /* Model No = 4 */
{ 341,  356,  421,   -1,  486,  487,   -1,   -1, }, /* Model No = 5 */
{ 490,  505,  570,  635,  700,  701,  704,   -1, }, /* Model No = 6 */
{ 711,  726,  791,  856,  921,  922,  925,   -1, }, /* Model No = 7 */
{ 932,  505,  570,  635,  947,  948,  951,  958, }, /* Model No = 8 */
{ 974,  726,  791,  856,  989,  990,  993, 1000, }, /* Model No = 9 */
};

int *model_offset_tbl[32] = {
     NULL,
     large_step_offset[0],     large_step_offset[1],
     large_step_offset[2],     large_step_offset[3],
     large_step_offset[4],     large_step_offset[5],
     large_step_offset[6],     large_step_offset[7],
     large_step_offset[8],     large_step_offset[9],
     large_step_offset[8],     large_step_offset[9],
     large_step_offset[8],     large_step_offset[9],
     large_step_offset[8],     large_step_offset[8],
     large_step_offset[8],     large_step_offset[8],
     large_step_offset[8],     large_step_offset[8],
     large_step_offset[8],     large_step_offset[8],
     large_step_offset[8],     large_step_offset[8],
     large_step_offset[8],     large_step_offset[8],
     large_step_offset[8],     large_step_offset[8],
     large_step_offset[8],     large_step_offset[8],
     NULL,
};

int AModelStereoInfo[4]={
    13926, 4096, 1638, 0
};

int AModelMsUsed[2]={
    11469, 0
};

int AModelNoiseFlag[2]={
    8192, 0
};

int AModelNoiseMode[4]={
    12288, 8192, 4096, 0
};

int AModelNoiseNrg[512]={
    0
};


int max_cband_si_len_tbl[32] =
{
	6, 5,   6, 5, 6,   6, 5, 6, 5,   6, 5, 6, 8,   6, 5, 6, 8, 9,
    6, 5, 6, 8, 10,   8, 10,   9, 10,  10,  12,  12,  12,  12
};

int cband_si_cbook_tbl[32] =
{
	0, 1,   0, 1, 2,   0, 1, 2, 3,   0, 1, 2, 4,   0, 1, 2, 4, 5,
    0, 1, 2, 4, 6,   4, 6,   5, 6,  6,  6,  6,  6,  6
};

int min_freq[16] = {
	 16384,  8192,  4096,  2048,  1024,   512,   256,    128,
        64,    32,    16,     8,     4,     2,     1,      0
};




short sfb_96_1024[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56,
        64, 72, 80, 88, 96, 108, 120, 132, 144, 156, 172, 188, 212, 240, 276,
        320, 384, 448, 512, 576, 640, 704, 768, 832, 896, 960, 1024 }; /* 41 scfbands */

short sfb_96_128[] = { 4, 8, 12, 16, 20, 24, 32, 40, 48, 64, 92, 128 }; /* 12 scfbands */

short sfb_96_960[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56,
        64, 72, 80, 88, 96, 108, 120, 132, 144, 156, 172, 188, 212, 240, 276,
        320, 384, 448, 512, 576, 640, 704, 768, 832, 896, 960 }; /* 41 scfbands */

short sfb_96_120[] = { 4, 8, 12, 16, 20, 24, 32, 40, 48, 64, 92, 120 }; /* 12 scfbands */

short sfb_64_1024[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56,
        64, 72, 80, 88, 100, 112, 124, 140, 156, 172, 192, 216, 240, 268, 304,
        344, 384, 424, 464, 504, 544, 584, 624, 664, 704, 744, 784, 824, 864,
        904, 944, 984, 1024 }; /* 41 scfbands 47 */

short sfb_64_128[] = { 4, 8, 12, 16, 20, 24, 32, 40, 48, 64, 92, 128 }; /* 12 scfbands */
short sfb_64_960[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56,
        64, 72, 80, 88, 100, 112, 124, 140, 156, 172, 192, 216, 240, 268, 304,
        344, 384, 424, 464, 504, 544, 584, 624, 664, 704, 744, 784, 824, 864,
        904, 944, 960 }; /* 41 scfbands 47 */

short sfb_64_120[] = { 4, 8, 12, 16, 20, 24, 32, 40, 48, 64, 92, 120 }; /* 12 scfbands */

short sfb_48_1024[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 48, 56, 64, 72,
        80, 88, 96, 108, 120, 132, 144, 160, 176, 196, 216, 240, 264, 292, 320,
        352, 384, 416, 448, 480, 512, 544, 576, 608, 640, 672, 704, 736, 768,
        800, 832, 864, 896, 928, 1024 };

short sfb_48_960[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 48, 56, 64, 72,
        80, 88, 96, 108, 120, 132, 144, 160, 176, 196, 216, 240, 264, 292, 320,
        352, 384, 416, 448, 480, 512, 544, 576, 608, 640, 672, 704, 736, 768,
        800, 832, 864, 896, 928, 960, 0 };

short sfb_48_512[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56,
        60, 68, 76, 84, 92, 100, 112, 124, 136, 148, 164, 184, 208, 236, 268,
        300, 332, 364, 396, 428, 460, 512 }; /* 36 scfbands */

short sfb_48_480[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56,
        64, 72, 80, 88, 96, 108, 120, 132, 144, 156, 172, 188, 212, 240, 272,
        304, 336, 368, 400, 432, 480 }; /* 35 scfbands */

short sfb_48_128[] = { 4, 8, 12, 16, 20, 28, 36, 44, 56, 68, 80, 96, 112, 128 };

short sfb_48_120[] = { 4, 8, 12, 16, 20, 28, 36, 44, 56, 68, 80, 96, 112, 120 };

short sfb_32_1024[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 48, 56, 64, 72,
        80, 88, 96, 108, 120, 132, 144, 160, 176, 196, 216, 240, 264, 292, 320,
        352, 384, 416, 448, 480, 512, 544, 576, 608, 640, 672, 704, 736, 768,
        800, 832, 864, 896, 928, 960, 992, 1024 };

short sfb_32_512[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56,
        64, 72, 80, 88, 96, 108, 120, 132, 144, 160, 176, 192, 212, 236, 260,
        288, 320, 352, 384, 416, 448, 480, 512 }; /* 37 scfbands */

short sfb_32_480[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56,
        60, 64, 72, 80, 88, 96, 104, 112, 124, 136, 148, 164, 180, 200, 224,
        256, 288, 320, 352, 384, 416, 448, 480 }; /* 37 scfbands */

short sfb_24_1024[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 52, 60, 68,
        76, 84, 92, 100, 108, 116, 124, 136, 148, 160, 172, 188, 204, 220, 240,
        260, 284, 308, 336, 364, 396, 432, 468, 508, 552, 600, 652, 704, 768,
        832, 896, 960, 1024 }; /* 47 scfbands */

short sfb_24_960[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 52, 60, 68,
        76, 84, 92, 100, 108, 116, 124, 136, 148, 160, 172, 188, 204, 220, 240,
        260, 284, 308, 336, 364, 396, 432, 468, 508, 552, 600, 652, 704, 768,
        832, 896, 960, 0 }; /* 47 scfbands */

short sfb_24_128[] = { 4, 8, 12, 16, 20, 24, 28, 36, 44, 52, 64, 76, 92, 108,
        128 }; /* 15 scfbands */

short sfb_24_120[] = { 4, 8, 12, 16, 20, 24, 28, 36, 44, 52, 64, 76, 92, 108,
        120, 0 }; /* 15 scfbands */

short sfb_24_512[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 52, 60, 68,
        80, 92, 104, 120, 140, 164, 192, 224, 256, 288, 320, 352, 384, 416,
        448, 480, 512 }; /* 31 scfbands */

short sfb_24_480[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 52, 60, 68,
        80, 92, 104, 120, 140, 164, 192, 224, 256, 288, 320, 352, 384, 416,
        448, 480 }; /* 30 scfbands */

short sfb_16_1024[] = { 8, 16, 24, 32, 40, 48, 56, 64, 72, 80, 88, 100, 112,
        124, 136, 148, 160, 172, 184, 196, 212, 228, 244, 260, 280, 300, 320,
        344, 368, 396, 424, 456, 492, 532, 572, 616, 664, 716, 772, 832, 896,
        960, 1024 }; /* 43 scfbands */

short sfb_16_960[] = { 8, 16, 24, 32, 40, 48, 56, 64, 72, 80, 88, 100, 112,
        124, 136, 148, 160, 172, 184, 196, 212, 228, 244, 260, 280, 300, 320,
        344, 368, 396, 424, 456, 492, 532, 572, 616, 664, 716, 772, 832, 896,
        960 }; /* 42 scfbands */

short sfb_16_128[] = { 4, 8, 12, 16, 20, 24, 28, 32, 40, 48, 60, 72, 88, 108,
        128 }; /* 15 scfbands */

short sfb_16_120[] = { 4, 8, 12, 16, 20, 24, 28, 32, 40, 48, 60, 72, 88, 108,
        120 }; /* 15 scfbands */

short sfb_8_1024[] = { 12, 24, 36, 48, 60, 72, 84, 96, 108, 120, 132, 144, 156,
        172, 188, 204, 220, 236, 252, 268, 288, 308, 328, 348, 372, 396, 420,
        448, 476, 508, 544, 580, 620, 664, 712, 764, 820, 880, 944, 1024 }; /* 40 scfbands */

short sfb_8_128[] = { 4, 8, 12, 16, 20, 24, 28, 36, 44, 52, 60, 72, 88, 108,
        128 }; /* 15 scfbands */

short sfb_8_960[] = { 12, 24, 36, 48, 60, 72, 84, 96, 108, 120, 132, 144, 156,
        172, 188, 204, 220, 236, 252, 268, 288, 308, 328, 348, 372, 396, 420,
        448, 476, 508, 544, 580, 620, 664, 712, 764, 820, 880, 944, 960 }; /* 40 scfbands */

short sfb_8_120[] = { 4, 8, 12, 16, 20, 24, 28, 36, 44, 52, 60, 72, 88, 108,
        120 }; /* 15 scfbands */

short sfb_32_960[] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 48, 56, 64, 72,
        80, 88, 96, 108, 120, 132, 144, 160, 176, 196, 216, 240, 264, 292, 320,
        352, 384, 416, 448, 480, 512, 544, 576, 608, 640, 672, 704, 736, 768,
        800, 832, 864, 896, 928, 960, 0 };

short sfb_32_120[] = { 4, 8, 12, 16, 20, 28, 36, 44, 56, 68, 80, 96, 112, 120,
        0 };
SR_Info samp_rate_info[16] = {
/* sampling_frequency, #long sfb, long sfb, #short sfb, short sfb */
/* samp_rate, nsfb1024, SFbands1024, nsfb128, SFbands128 */
{ 96000, 41, sfb_96_1024, 12, sfb_96_128, 40, sfb_96_960, 12, sfb_96_120, 8, 4,
        0, 0, 0, 0 }, /* 96000 */
{ 88200, 41, sfb_96_1024, 12, sfb_96_128, 40, sfb_96_960, 12, sfb_96_120, 8, 4,
        0, 0, 0, 0 }, /* 88200 */
{ 64000, 47, sfb_64_1024, 12, sfb_64_128, 46, sfb_64_960, 12, sfb_64_120, 13,
        5, 0, 0, 0, 0 }, /* 64000 */
{ 48000, 49, sfb_48_1024, 14, sfb_48_128, 49, sfb_48_960, 14, sfb_48_120, 18,
        5, 35, sfb_48_480, 36, sfb_48_512 }, /* 48000 */
{ 44100, 49, sfb_48_1024, 14, sfb_48_128, 49, sfb_48_960, 14, sfb_48_120, 18,
        5, 35, sfb_48_480, 36, sfb_48_512 }, /* 44100 */
{ 32000, 51, sfb_32_1024, 14, sfb_48_128, 49, sfb_32_960, 14, sfb_48_120, 26,
        6, 37, sfb_32_480, 37, sfb_32_512 }, /* 32000 */
{ 24000, 47, sfb_24_1024, 15, sfb_24_128, 46, sfb_24_960, 15, sfb_24_120, 36,
        8, 30, sfb_24_480, 31, sfb_24_512 }, /* 24000 */
{ 22050, 47, sfb_24_1024, 15, sfb_24_128, 46, sfb_24_960, 15, sfb_24_120, 36,
        8, 30, sfb_24_480, 31, sfb_24_512 }, /* 22050 */
{ 16000, 43, sfb_16_1024, 15, sfb_16_128, 42, sfb_16_960, 15, sfb_16_120, 54,
        8, 0, 0, 0, 0 }, /* 16000 */
{ 12000, 43, sfb_16_1024, 15, sfb_16_128, 42, sfb_16_960, 15, sfb_16_120, 104,
        10, 0, 0, 0, 0 }, /* 12000 */
{ 11025, 43, sfb_16_1024, 15, sfb_16_128, 42, sfb_16_960, 15, sfb_16_120, 104,
        10, 0, 0, 0, 0 }, /* 11025 */
{ 8000, 40, sfb_8_1024, 15, sfb_8_128, 40, sfb_8_960, 15, sfb_8_120, 104, 9, 0,
        0, 0, 0 }, /*  8000 */
{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
