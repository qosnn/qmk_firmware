/* Copyright 2023 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

#define LAYOUT( \
    k00,      k01, k02, k03, k04,   k05, k06, k07, k08,    k09, k0A, k0B, k0C,  k0E, k0F, k0G, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D,       k1E, k1F, k1G, \
    k20,   k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C,  k2D,    k2E, k2F, k2G, \
    k30,    k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3D,                        \
    k40,  k4E, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B,                k4F,      \
    k50,  k51,  k52,              k53,                k54,  k55,  k56,  k58,    k5E, k5F, k5G  \
) { \
    { k00,   KC_NO,  k01,  k02,   k03,   k04,   k05,   k06,   k07,   k08,   k09,   k0A,   k0B,   k0C,   k0E,   k0F,   k0G   }, \
    { k10,   k11,   k12,   k13,   k14,   k15,   k16,   k17,   k18,   k19,   k1A,   k1B,   k1C,   k1D,   k1E,   k1F,   k1G   }, \
    { k20,   k21,   k22,   k23,   k24,   k25,   k26,   k27,   k28,   k29,   k2A,   k2B,   k2C,   k2D,   k2E,   k2F,   k2G   }, \
    { k30,   k31,   k32,   k33,   k34,   k35,   k36,   k37,   k38,   k39,   k3A,   k3B,   KC_NO, k3D,   KC_NO, KC_NO, KC_NO }, \
    { k40,   k41,   k42,   k43,   k44,   k45,   k46,   k47,   k48,   k49,   k4A,   KC_NO, k4B,   KC_NO, k4E,   k4F,   KC_NO }, \
    { k50,   k51,   k52,   KC_NO, KC_NO, k53,   KC_NO, KC_NO, KC_NO, k54,   k55,   k56,   KC_NO, k58,   k5E,   k5F,   k5G   }, \
}


/*
#define LAYOUT( \
    K00,      K01, K02, K03, K04,   K05, K06, K07, K08,    K09, K0A, K0B, K0C,  K0E, K0F, K0G, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D,       K1E, K1F, K1G, \
    K20,   K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,  K2D,    K2E, K2F, K2G, \
    K30,    K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3D,                        \
    K40,  K4E, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,                K4F,      \
    K50,  K51,  K52,              K53,                K54,  K55,  K56,  K58,    K5E, K5F, K5G  \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   KC_NO, K0E,   K0F,   K0G   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D,   K1E,   K1F,   K1G   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C,   K2D,   K2E,   K2F,   K2G   }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   K3A,   K3B,   KC_NO, K3D,   KC_NO, KC_NO, KC_NO }, \
    { K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47,   K48,   K49,   K4A,   K4B,   KC_NO, KC_NO, K4E,   K4F,   KC_NO }, \
    { K50,   K51,   K52,   K53,   K54,   K55,   K56,   KC_NO, K58,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K5E,   K5F,   K5G   }, \
}

*/