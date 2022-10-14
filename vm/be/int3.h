#if !defined(VM_HEADER_IR_BE_INT3)
#define VM_HEADER_IR_BE_INT3

#include <stdint.h>
#include "../ir.h"

enum {
    VM_OPCODE_ADD_I8_REG_REG = 1,
    VM_OPCODE_ADD_I8_REG_CONST = 2,
    VM_OPCODE_ADD_I8_CONST_REG = 3,
    VM_OPCODE_ADD_I8_CONST_CONST = 4,
    VM_OPCODE_SUB_I8_REG_REG = 5,
    VM_OPCODE_SUB_I8_REG_CONST = 6,
    VM_OPCODE_SUB_I8_CONST_REG = 7,
    VM_OPCODE_SUB_I8_CONST_CONST = 8,
    VM_OPCODE_MUL_I8_REG_REG = 9,
    VM_OPCODE_MUL_I8_REG_CONST = 10,
    VM_OPCODE_MUL_I8_CONST_REG = 11,
    VM_OPCODE_MUL_I8_CONST_CONST = 12,
    VM_OPCODE_DIV_I8_REG_REG = 13,
    VM_OPCODE_DIV_I8_REG_CONST = 14,
    VM_OPCODE_DIV_I8_CONST_REG = 15,
    VM_OPCODE_DIV_I8_CONST_CONST = 16,
    VM_OPCODE_MOD_I8_REG_REG = 17,
    VM_OPCODE_MOD_I8_REG_CONST = 18,
    VM_OPCODE_MOD_I8_CONST_REG = 19,
    VM_OPCODE_MOD_I8_CONST_CONST = 20,
    VM_OPCODE_BB_I8_REG_FUNC_FUNC = 21,
    VM_OPCODE_BB_I8_CONST_FUNC_FUNC = 22,
    VM_OPCODE_BEQ_I8_REG_REG_FUNC_FUNC = 23,
    VM_OPCODE_BEQ_I8_REG_CONST_FUNC_FUNC = 24,
    VM_OPCODE_BEQ_I8_CONST_REG_FUNC_FUNC = 25,
    VM_OPCODE_BEQ_I8_CONST_CONST_FUNC_FUNC = 26,
    VM_OPCODE_BLT_I8_REG_REG_FUNC_FUNC = 27,
    VM_OPCODE_BLT_I8_REG_CONST_FUNC_FUNC = 28,
    VM_OPCODE_BLT_I8_CONST_REG_FUNC_FUNC = 29,
    VM_OPCODE_BLT_I8_CONST_CONST_FUNC_FUNC = 30,
    VM_OPCODE_MOVE_I8_REG = 31,
    VM_OPCODE_MOVE_I8_CONST = 32,
    VM_OPCODE_OUT_I8_REG = 33,
    VM_OPCODE_OUT_I8_CONST = 34,
    VM_OPCODE_IN_I8_VOID = 35,
    VM_OPCODE_TYPE_I8_VOID = 36,
    VM_OPCODE_BNOT_I8_REG = 37,
    VM_OPCODE_BNOT_I8_CONST = 38,
    VM_OPCODE_RET_I8_REG = 39,
    VM_OPCODE_RET_I8_CONST = 40,
    VM_OPCODE_BOR_I8_REG_REG = 41,
    VM_OPCODE_BOR_I8_REG_CONST = 42,
    VM_OPCODE_BOR_I8_CONST_REG = 43,
    VM_OPCODE_BOR_I8_CONST_CONST = 44,
    VM_OPCODE_BXOR_I8_REG_REG = 45,
    VM_OPCODE_BXOR_I8_REG_CONST = 46,
    VM_OPCODE_BXOR_I8_CONST_REG = 47,
    VM_OPCODE_BXOR_I8_CONST_CONST = 48,
    VM_OPCODE_BAND_I8_REG_REG = 49,
    VM_OPCODE_BAND_I8_REG_CONST = 50,
    VM_OPCODE_BAND_I8_CONST_REG = 51,
    VM_OPCODE_BAND_I8_CONST_CONST = 52,
    VM_OPCODE_BSHL_I8_REG_REG = 53,
    VM_OPCODE_BSHL_I8_REG_CONST = 54,
    VM_OPCODE_BSHL_I8_CONST_REG = 55,
    VM_OPCODE_BSHL_I8_CONST_CONST = 56,
    VM_OPCODE_BSHR_I8_REG_REG = 57,
    VM_OPCODE_BSHR_I8_REG_CONST = 58,
    VM_OPCODE_BSHR_I8_CONST_REG = 59,
    VM_OPCODE_BSHR_I8_CONST_CONST = 60,
    VM_OPCODE_ADD_I16_REG_REG = 61,
    VM_OPCODE_ADD_I16_REG_CONST = 62,
    VM_OPCODE_ADD_I16_CONST_REG = 63,
    VM_OPCODE_ADD_I16_CONST_CONST = 64,
    VM_OPCODE_SUB_I16_REG_REG = 65,
    VM_OPCODE_SUB_I16_REG_CONST = 66,
    VM_OPCODE_SUB_I16_CONST_REG = 67,
    VM_OPCODE_SUB_I16_CONST_CONST = 68,
    VM_OPCODE_MUL_I16_REG_REG = 69,
    VM_OPCODE_MUL_I16_REG_CONST = 70,
    VM_OPCODE_MUL_I16_CONST_REG = 71,
    VM_OPCODE_MUL_I16_CONST_CONST = 72,
    VM_OPCODE_DIV_I16_REG_REG = 73,
    VM_OPCODE_DIV_I16_REG_CONST = 74,
    VM_OPCODE_DIV_I16_CONST_REG = 75,
    VM_OPCODE_DIV_I16_CONST_CONST = 76,
    VM_OPCODE_MOD_I16_REG_REG = 77,
    VM_OPCODE_MOD_I16_REG_CONST = 78,
    VM_OPCODE_MOD_I16_CONST_REG = 79,
    VM_OPCODE_MOD_I16_CONST_CONST = 80,
    VM_OPCODE_BB_I16_REG_FUNC_FUNC = 81,
    VM_OPCODE_BB_I16_CONST_FUNC_FUNC = 82,
    VM_OPCODE_BEQ_I16_REG_REG_FUNC_FUNC = 83,
    VM_OPCODE_BEQ_I16_REG_CONST_FUNC_FUNC = 84,
    VM_OPCODE_BEQ_I16_CONST_REG_FUNC_FUNC = 85,
    VM_OPCODE_BEQ_I16_CONST_CONST_FUNC_FUNC = 86,
    VM_OPCODE_BLT_I16_REG_REG_FUNC_FUNC = 87,
    VM_OPCODE_BLT_I16_REG_CONST_FUNC_FUNC = 88,
    VM_OPCODE_BLT_I16_CONST_REG_FUNC_FUNC = 89,
    VM_OPCODE_BLT_I16_CONST_CONST_FUNC_FUNC = 90,
    VM_OPCODE_MOVE_I16_REG = 91,
    VM_OPCODE_MOVE_I16_CONST = 92,
    VM_OPCODE_OUT_I16_REG = 93,
    VM_OPCODE_OUT_I16_CONST = 94,
    VM_OPCODE_IN_I16_VOID = 95,
    VM_OPCODE_TYPE_I16_VOID = 96,
    VM_OPCODE_BNOT_I16_REG = 97,
    VM_OPCODE_BNOT_I16_CONST = 98,
    VM_OPCODE_RET_I16_REG = 99,
    VM_OPCODE_RET_I16_CONST = 100,
    VM_OPCODE_BOR_I16_REG_REG = 101,
    VM_OPCODE_BOR_I16_REG_CONST = 102,
    VM_OPCODE_BOR_I16_CONST_REG = 103,
    VM_OPCODE_BOR_I16_CONST_CONST = 104,
    VM_OPCODE_BXOR_I16_REG_REG = 105,
    VM_OPCODE_BXOR_I16_REG_CONST = 106,
    VM_OPCODE_BXOR_I16_CONST_REG = 107,
    VM_OPCODE_BXOR_I16_CONST_CONST = 108,
    VM_OPCODE_BAND_I16_REG_REG = 109,
    VM_OPCODE_BAND_I16_REG_CONST = 110,
    VM_OPCODE_BAND_I16_CONST_REG = 111,
    VM_OPCODE_BAND_I16_CONST_CONST = 112,
    VM_OPCODE_BSHL_I16_REG_REG = 113,
    VM_OPCODE_BSHL_I16_REG_CONST = 114,
    VM_OPCODE_BSHL_I16_CONST_REG = 115,
    VM_OPCODE_BSHL_I16_CONST_CONST = 116,
    VM_OPCODE_BSHR_I16_REG_REG = 117,
    VM_OPCODE_BSHR_I16_REG_CONST = 118,
    VM_OPCODE_BSHR_I16_CONST_REG = 119,
    VM_OPCODE_BSHR_I16_CONST_CONST = 120,
    VM_OPCODE_ADD_I32_REG_REG = 121,
    VM_OPCODE_ADD_I32_REG_CONST = 122,
    VM_OPCODE_ADD_I32_CONST_REG = 123,
    VM_OPCODE_ADD_I32_CONST_CONST = 124,
    VM_OPCODE_SUB_I32_REG_REG = 125,
    VM_OPCODE_SUB_I32_REG_CONST = 126,
    VM_OPCODE_SUB_I32_CONST_REG = 127,
    VM_OPCODE_SUB_I32_CONST_CONST = 128,
    VM_OPCODE_MUL_I32_REG_REG = 129,
    VM_OPCODE_MUL_I32_REG_CONST = 130,
    VM_OPCODE_MUL_I32_CONST_REG = 131,
    VM_OPCODE_MUL_I32_CONST_CONST = 132,
    VM_OPCODE_DIV_I32_REG_REG = 133,
    VM_OPCODE_DIV_I32_REG_CONST = 134,
    VM_OPCODE_DIV_I32_CONST_REG = 135,
    VM_OPCODE_DIV_I32_CONST_CONST = 136,
    VM_OPCODE_MOD_I32_REG_REG = 137,
    VM_OPCODE_MOD_I32_REG_CONST = 138,
    VM_OPCODE_MOD_I32_CONST_REG = 139,
    VM_OPCODE_MOD_I32_CONST_CONST = 140,
    VM_OPCODE_BB_I32_REG_FUNC_FUNC = 141,
    VM_OPCODE_BB_I32_CONST_FUNC_FUNC = 142,
    VM_OPCODE_BEQ_I32_REG_REG_FUNC_FUNC = 143,
    VM_OPCODE_BEQ_I32_REG_CONST_FUNC_FUNC = 144,
    VM_OPCODE_BEQ_I32_CONST_REG_FUNC_FUNC = 145,
    VM_OPCODE_BEQ_I32_CONST_CONST_FUNC_FUNC = 146,
    VM_OPCODE_BLT_I32_REG_REG_FUNC_FUNC = 147,
    VM_OPCODE_BLT_I32_REG_CONST_FUNC_FUNC = 148,
    VM_OPCODE_BLT_I32_CONST_REG_FUNC_FUNC = 149,
    VM_OPCODE_BLT_I32_CONST_CONST_FUNC_FUNC = 150,
    VM_OPCODE_MOVE_I32_REG = 151,
    VM_OPCODE_MOVE_I32_CONST = 152,
    VM_OPCODE_OUT_I32_REG = 153,
    VM_OPCODE_OUT_I32_CONST = 154,
    VM_OPCODE_IN_I32_VOID = 155,
    VM_OPCODE_TYPE_I32_VOID = 156,
    VM_OPCODE_BNOT_I32_REG = 157,
    VM_OPCODE_BNOT_I32_CONST = 158,
    VM_OPCODE_RET_I32_REG = 159,
    VM_OPCODE_RET_I32_CONST = 160,
    VM_OPCODE_BOR_I32_REG_REG = 161,
    VM_OPCODE_BOR_I32_REG_CONST = 162,
    VM_OPCODE_BOR_I32_CONST_REG = 163,
    VM_OPCODE_BOR_I32_CONST_CONST = 164,
    VM_OPCODE_BXOR_I32_REG_REG = 165,
    VM_OPCODE_BXOR_I32_REG_CONST = 166,
    VM_OPCODE_BXOR_I32_CONST_REG = 167,
    VM_OPCODE_BXOR_I32_CONST_CONST = 168,
    VM_OPCODE_BAND_I32_REG_REG = 169,
    VM_OPCODE_BAND_I32_REG_CONST = 170,
    VM_OPCODE_BAND_I32_CONST_REG = 171,
    VM_OPCODE_BAND_I32_CONST_CONST = 172,
    VM_OPCODE_BSHL_I32_REG_REG = 173,
    VM_OPCODE_BSHL_I32_REG_CONST = 174,
    VM_OPCODE_BSHL_I32_CONST_REG = 175,
    VM_OPCODE_BSHL_I32_CONST_CONST = 176,
    VM_OPCODE_BSHR_I32_REG_REG = 177,
    VM_OPCODE_BSHR_I32_REG_CONST = 178,
    VM_OPCODE_BSHR_I32_CONST_REG = 179,
    VM_OPCODE_BSHR_I32_CONST_CONST = 180,
    VM_OPCODE_ADD_I64_REG_REG = 181,
    VM_OPCODE_ADD_I64_REG_CONST = 182,
    VM_OPCODE_ADD_I64_CONST_REG = 183,
    VM_OPCODE_ADD_I64_CONST_CONST = 184,
    VM_OPCODE_SUB_I64_REG_REG = 185,
    VM_OPCODE_SUB_I64_REG_CONST = 186,
    VM_OPCODE_SUB_I64_CONST_REG = 187,
    VM_OPCODE_SUB_I64_CONST_CONST = 188,
    VM_OPCODE_MUL_I64_REG_REG = 189,
    VM_OPCODE_MUL_I64_REG_CONST = 190,
    VM_OPCODE_MUL_I64_CONST_REG = 191,
    VM_OPCODE_MUL_I64_CONST_CONST = 192,
    VM_OPCODE_DIV_I64_REG_REG = 193,
    VM_OPCODE_DIV_I64_REG_CONST = 194,
    VM_OPCODE_DIV_I64_CONST_REG = 195,
    VM_OPCODE_DIV_I64_CONST_CONST = 196,
    VM_OPCODE_MOD_I64_REG_REG = 197,
    VM_OPCODE_MOD_I64_REG_CONST = 198,
    VM_OPCODE_MOD_I64_CONST_REG = 199,
    VM_OPCODE_MOD_I64_CONST_CONST = 200,
    VM_OPCODE_BB_I64_REG_FUNC_FUNC = 201,
    VM_OPCODE_BB_I64_CONST_FUNC_FUNC = 202,
    VM_OPCODE_BEQ_I64_REG_REG_FUNC_FUNC = 203,
    VM_OPCODE_BEQ_I64_REG_CONST_FUNC_FUNC = 204,
    VM_OPCODE_BEQ_I64_CONST_REG_FUNC_FUNC = 205,
    VM_OPCODE_BEQ_I64_CONST_CONST_FUNC_FUNC = 206,
    VM_OPCODE_BLT_I64_REG_REG_FUNC_FUNC = 207,
    VM_OPCODE_BLT_I64_REG_CONST_FUNC_FUNC = 208,
    VM_OPCODE_BLT_I64_CONST_REG_FUNC_FUNC = 209,
    VM_OPCODE_BLT_I64_CONST_CONST_FUNC_FUNC = 210,
    VM_OPCODE_MOVE_I64_REG = 211,
    VM_OPCODE_MOVE_I64_CONST = 212,
    VM_OPCODE_OUT_I64_REG = 213,
    VM_OPCODE_OUT_I64_CONST = 214,
    VM_OPCODE_IN_I64_VOID = 215,
    VM_OPCODE_TYPE_I64_VOID = 216,
    VM_OPCODE_BNOT_I64_REG = 217,
    VM_OPCODE_BNOT_I64_CONST = 218,
    VM_OPCODE_RET_I64_REG = 219,
    VM_OPCODE_RET_I64_CONST = 220,
    VM_OPCODE_BOR_I64_REG_REG = 221,
    VM_OPCODE_BOR_I64_REG_CONST = 222,
    VM_OPCODE_BOR_I64_CONST_REG = 223,
    VM_OPCODE_BOR_I64_CONST_CONST = 224,
    VM_OPCODE_BXOR_I64_REG_REG = 225,
    VM_OPCODE_BXOR_I64_REG_CONST = 226,
    VM_OPCODE_BXOR_I64_CONST_REG = 227,
    VM_OPCODE_BXOR_I64_CONST_CONST = 228,
    VM_OPCODE_BAND_I64_REG_REG = 229,
    VM_OPCODE_BAND_I64_REG_CONST = 230,
    VM_OPCODE_BAND_I64_CONST_REG = 231,
    VM_OPCODE_BAND_I64_CONST_CONST = 232,
    VM_OPCODE_BSHL_I64_REG_REG = 233,
    VM_OPCODE_BSHL_I64_REG_CONST = 234,
    VM_OPCODE_BSHL_I64_CONST_REG = 235,
    VM_OPCODE_BSHL_I64_CONST_CONST = 236,
    VM_OPCODE_BSHR_I64_REG_REG = 237,
    VM_OPCODE_BSHR_I64_REG_CONST = 238,
    VM_OPCODE_BSHR_I64_CONST_REG = 239,
    VM_OPCODE_BSHR_I64_CONST_CONST = 240,
    VM_OPCODE_ADD_U8_REG_REG = 241,
    VM_OPCODE_ADD_U8_REG_CONST = 242,
    VM_OPCODE_ADD_U8_CONST_REG = 243,
    VM_OPCODE_ADD_U8_CONST_CONST = 244,
    VM_OPCODE_SUB_U8_REG_REG = 245,
    VM_OPCODE_SUB_U8_REG_CONST = 246,
    VM_OPCODE_SUB_U8_CONST_REG = 247,
    VM_OPCODE_SUB_U8_CONST_CONST = 248,
    VM_OPCODE_MUL_U8_REG_REG = 249,
    VM_OPCODE_MUL_U8_REG_CONST = 250,
    VM_OPCODE_MUL_U8_CONST_REG = 251,
    VM_OPCODE_MUL_U8_CONST_CONST = 252,
    VM_OPCODE_DIV_U8_REG_REG = 253,
    VM_OPCODE_DIV_U8_REG_CONST = 254,
    VM_OPCODE_DIV_U8_CONST_REG = 255,
    VM_OPCODE_DIV_U8_CONST_CONST = 256,
    VM_OPCODE_MOD_U8_REG_REG = 257,
    VM_OPCODE_MOD_U8_REG_CONST = 258,
    VM_OPCODE_MOD_U8_CONST_REG = 259,
    VM_OPCODE_MOD_U8_CONST_CONST = 260,
    VM_OPCODE_BB_U8_REG_FUNC_FUNC = 261,
    VM_OPCODE_BB_U8_CONST_FUNC_FUNC = 262,
    VM_OPCODE_BEQ_U8_REG_REG_FUNC_FUNC = 263,
    VM_OPCODE_BEQ_U8_REG_CONST_FUNC_FUNC = 264,
    VM_OPCODE_BEQ_U8_CONST_REG_FUNC_FUNC = 265,
    VM_OPCODE_BEQ_U8_CONST_CONST_FUNC_FUNC = 266,
    VM_OPCODE_BLT_U8_REG_REG_FUNC_FUNC = 267,
    VM_OPCODE_BLT_U8_REG_CONST_FUNC_FUNC = 268,
    VM_OPCODE_BLT_U8_CONST_REG_FUNC_FUNC = 269,
    VM_OPCODE_BLT_U8_CONST_CONST_FUNC_FUNC = 270,
    VM_OPCODE_MOVE_U8_REG = 271,
    VM_OPCODE_MOVE_U8_CONST = 272,
    VM_OPCODE_OUT_U8_REG = 273,
    VM_OPCODE_OUT_U8_CONST = 274,
    VM_OPCODE_IN_U8_VOID = 275,
    VM_OPCODE_TYPE_U8_VOID = 276,
    VM_OPCODE_BNOT_U8_REG = 277,
    VM_OPCODE_BNOT_U8_CONST = 278,
    VM_OPCODE_RET_U8_REG = 279,
    VM_OPCODE_RET_U8_CONST = 280,
    VM_OPCODE_BOR_U8_REG_REG = 281,
    VM_OPCODE_BOR_U8_REG_CONST = 282,
    VM_OPCODE_BOR_U8_CONST_REG = 283,
    VM_OPCODE_BOR_U8_CONST_CONST = 284,
    VM_OPCODE_BXOR_U8_REG_REG = 285,
    VM_OPCODE_BXOR_U8_REG_CONST = 286,
    VM_OPCODE_BXOR_U8_CONST_REG = 287,
    VM_OPCODE_BXOR_U8_CONST_CONST = 288,
    VM_OPCODE_BAND_U8_REG_REG = 289,
    VM_OPCODE_BAND_U8_REG_CONST = 290,
    VM_OPCODE_BAND_U8_CONST_REG = 291,
    VM_OPCODE_BAND_U8_CONST_CONST = 292,
    VM_OPCODE_BSHL_U8_REG_REG = 293,
    VM_OPCODE_BSHL_U8_REG_CONST = 294,
    VM_OPCODE_BSHL_U8_CONST_REG = 295,
    VM_OPCODE_BSHL_U8_CONST_CONST = 296,
    VM_OPCODE_BSHR_U8_REG_REG = 297,
    VM_OPCODE_BSHR_U8_REG_CONST = 298,
    VM_OPCODE_BSHR_U8_CONST_REG = 299,
    VM_OPCODE_BSHR_U8_CONST_CONST = 300,
    VM_OPCODE_ADD_U16_REG_REG = 301,
    VM_OPCODE_ADD_U16_REG_CONST = 302,
    VM_OPCODE_ADD_U16_CONST_REG = 303,
    VM_OPCODE_ADD_U16_CONST_CONST = 304,
    VM_OPCODE_SUB_U16_REG_REG = 305,
    VM_OPCODE_SUB_U16_REG_CONST = 306,
    VM_OPCODE_SUB_U16_CONST_REG = 307,
    VM_OPCODE_SUB_U16_CONST_CONST = 308,
    VM_OPCODE_MUL_U16_REG_REG = 309,
    VM_OPCODE_MUL_U16_REG_CONST = 310,
    VM_OPCODE_MUL_U16_CONST_REG = 311,
    VM_OPCODE_MUL_U16_CONST_CONST = 312,
    VM_OPCODE_DIV_U16_REG_REG = 313,
    VM_OPCODE_DIV_U16_REG_CONST = 314,
    VM_OPCODE_DIV_U16_CONST_REG = 315,
    VM_OPCODE_DIV_U16_CONST_CONST = 316,
    VM_OPCODE_MOD_U16_REG_REG = 317,
    VM_OPCODE_MOD_U16_REG_CONST = 318,
    VM_OPCODE_MOD_U16_CONST_REG = 319,
    VM_OPCODE_MOD_U16_CONST_CONST = 320,
    VM_OPCODE_BB_U16_REG_FUNC_FUNC = 321,
    VM_OPCODE_BB_U16_CONST_FUNC_FUNC = 322,
    VM_OPCODE_BEQ_U16_REG_REG_FUNC_FUNC = 323,
    VM_OPCODE_BEQ_U16_REG_CONST_FUNC_FUNC = 324,
    VM_OPCODE_BEQ_U16_CONST_REG_FUNC_FUNC = 325,
    VM_OPCODE_BEQ_U16_CONST_CONST_FUNC_FUNC = 326,
    VM_OPCODE_BLT_U16_REG_REG_FUNC_FUNC = 327,
    VM_OPCODE_BLT_U16_REG_CONST_FUNC_FUNC = 328,
    VM_OPCODE_BLT_U16_CONST_REG_FUNC_FUNC = 329,
    VM_OPCODE_BLT_U16_CONST_CONST_FUNC_FUNC = 330,
    VM_OPCODE_MOVE_U16_REG = 331,
    VM_OPCODE_MOVE_U16_CONST = 332,
    VM_OPCODE_OUT_U16_REG = 333,
    VM_OPCODE_OUT_U16_CONST = 334,
    VM_OPCODE_IN_U16_VOID = 335,
    VM_OPCODE_TYPE_U16_VOID = 336,
    VM_OPCODE_BNOT_U16_REG = 337,
    VM_OPCODE_BNOT_U16_CONST = 338,
    VM_OPCODE_RET_U16_REG = 339,
    VM_OPCODE_RET_U16_CONST = 340,
    VM_OPCODE_BOR_U16_REG_REG = 341,
    VM_OPCODE_BOR_U16_REG_CONST = 342,
    VM_OPCODE_BOR_U16_CONST_REG = 343,
    VM_OPCODE_BOR_U16_CONST_CONST = 344,
    VM_OPCODE_BXOR_U16_REG_REG = 345,
    VM_OPCODE_BXOR_U16_REG_CONST = 346,
    VM_OPCODE_BXOR_U16_CONST_REG = 347,
    VM_OPCODE_BXOR_U16_CONST_CONST = 348,
    VM_OPCODE_BAND_U16_REG_REG = 349,
    VM_OPCODE_BAND_U16_REG_CONST = 350,
    VM_OPCODE_BAND_U16_CONST_REG = 351,
    VM_OPCODE_BAND_U16_CONST_CONST = 352,
    VM_OPCODE_BSHL_U16_REG_REG = 353,
    VM_OPCODE_BSHL_U16_REG_CONST = 354,
    VM_OPCODE_BSHL_U16_CONST_REG = 355,
    VM_OPCODE_BSHL_U16_CONST_CONST = 356,
    VM_OPCODE_BSHR_U16_REG_REG = 357,
    VM_OPCODE_BSHR_U16_REG_CONST = 358,
    VM_OPCODE_BSHR_U16_CONST_REG = 359,
    VM_OPCODE_BSHR_U16_CONST_CONST = 360,
    VM_OPCODE_ADD_U32_REG_REG = 361,
    VM_OPCODE_ADD_U32_REG_CONST = 362,
    VM_OPCODE_ADD_U32_CONST_REG = 363,
    VM_OPCODE_ADD_U32_CONST_CONST = 364,
    VM_OPCODE_SUB_U32_REG_REG = 365,
    VM_OPCODE_SUB_U32_REG_CONST = 366,
    VM_OPCODE_SUB_U32_CONST_REG = 367,
    VM_OPCODE_SUB_U32_CONST_CONST = 368,
    VM_OPCODE_MUL_U32_REG_REG = 369,
    VM_OPCODE_MUL_U32_REG_CONST = 370,
    VM_OPCODE_MUL_U32_CONST_REG = 371,
    VM_OPCODE_MUL_U32_CONST_CONST = 372,
    VM_OPCODE_DIV_U32_REG_REG = 373,
    VM_OPCODE_DIV_U32_REG_CONST = 374,
    VM_OPCODE_DIV_U32_CONST_REG = 375,
    VM_OPCODE_DIV_U32_CONST_CONST = 376,
    VM_OPCODE_MOD_U32_REG_REG = 377,
    VM_OPCODE_MOD_U32_REG_CONST = 378,
    VM_OPCODE_MOD_U32_CONST_REG = 379,
    VM_OPCODE_MOD_U32_CONST_CONST = 380,
    VM_OPCODE_BB_U32_REG_FUNC_FUNC = 381,
    VM_OPCODE_BB_U32_CONST_FUNC_FUNC = 382,
    VM_OPCODE_BEQ_U32_REG_REG_FUNC_FUNC = 383,
    VM_OPCODE_BEQ_U32_REG_CONST_FUNC_FUNC = 384,
    VM_OPCODE_BEQ_U32_CONST_REG_FUNC_FUNC = 385,
    VM_OPCODE_BEQ_U32_CONST_CONST_FUNC_FUNC = 386,
    VM_OPCODE_BLT_U32_REG_REG_FUNC_FUNC = 387,
    VM_OPCODE_BLT_U32_REG_CONST_FUNC_FUNC = 388,
    VM_OPCODE_BLT_U32_CONST_REG_FUNC_FUNC = 389,
    VM_OPCODE_BLT_U32_CONST_CONST_FUNC_FUNC = 390,
    VM_OPCODE_MOVE_U32_REG = 391,
    VM_OPCODE_MOVE_U32_CONST = 392,
    VM_OPCODE_OUT_U32_REG = 393,
    VM_OPCODE_OUT_U32_CONST = 394,
    VM_OPCODE_IN_U32_VOID = 395,
    VM_OPCODE_TYPE_U32_VOID = 396,
    VM_OPCODE_BNOT_U32_REG = 397,
    VM_OPCODE_BNOT_U32_CONST = 398,
    VM_OPCODE_RET_U32_REG = 399,
    VM_OPCODE_RET_U32_CONST = 400,
    VM_OPCODE_BOR_U32_REG_REG = 401,
    VM_OPCODE_BOR_U32_REG_CONST = 402,
    VM_OPCODE_BOR_U32_CONST_REG = 403,
    VM_OPCODE_BOR_U32_CONST_CONST = 404,
    VM_OPCODE_BXOR_U32_REG_REG = 405,
    VM_OPCODE_BXOR_U32_REG_CONST = 406,
    VM_OPCODE_BXOR_U32_CONST_REG = 407,
    VM_OPCODE_BXOR_U32_CONST_CONST = 408,
    VM_OPCODE_BAND_U32_REG_REG = 409,
    VM_OPCODE_BAND_U32_REG_CONST = 410,
    VM_OPCODE_BAND_U32_CONST_REG = 411,
    VM_OPCODE_BAND_U32_CONST_CONST = 412,
    VM_OPCODE_BSHL_U32_REG_REG = 413,
    VM_OPCODE_BSHL_U32_REG_CONST = 414,
    VM_OPCODE_BSHL_U32_CONST_REG = 415,
    VM_OPCODE_BSHL_U32_CONST_CONST = 416,
    VM_OPCODE_BSHR_U32_REG_REG = 417,
    VM_OPCODE_BSHR_U32_REG_CONST = 418,
    VM_OPCODE_BSHR_U32_CONST_REG = 419,
    VM_OPCODE_BSHR_U32_CONST_CONST = 420,
    VM_OPCODE_ADD_U64_REG_REG = 421,
    VM_OPCODE_ADD_U64_REG_CONST = 422,
    VM_OPCODE_ADD_U64_CONST_REG = 423,
    VM_OPCODE_ADD_U64_CONST_CONST = 424,
    VM_OPCODE_SUB_U64_REG_REG = 425,
    VM_OPCODE_SUB_U64_REG_CONST = 426,
    VM_OPCODE_SUB_U64_CONST_REG = 427,
    VM_OPCODE_SUB_U64_CONST_CONST = 428,
    VM_OPCODE_MUL_U64_REG_REG = 429,
    VM_OPCODE_MUL_U64_REG_CONST = 430,
    VM_OPCODE_MUL_U64_CONST_REG = 431,
    VM_OPCODE_MUL_U64_CONST_CONST = 432,
    VM_OPCODE_DIV_U64_REG_REG = 433,
    VM_OPCODE_DIV_U64_REG_CONST = 434,
    VM_OPCODE_DIV_U64_CONST_REG = 435,
    VM_OPCODE_DIV_U64_CONST_CONST = 436,
    VM_OPCODE_MOD_U64_REG_REG = 437,
    VM_OPCODE_MOD_U64_REG_CONST = 438,
    VM_OPCODE_MOD_U64_CONST_REG = 439,
    VM_OPCODE_MOD_U64_CONST_CONST = 440,
    VM_OPCODE_BB_U64_REG_FUNC_FUNC = 441,
    VM_OPCODE_BB_U64_CONST_FUNC_FUNC = 442,
    VM_OPCODE_BEQ_U64_REG_REG_FUNC_FUNC = 443,
    VM_OPCODE_BEQ_U64_REG_CONST_FUNC_FUNC = 444,
    VM_OPCODE_BEQ_U64_CONST_REG_FUNC_FUNC = 445,
    VM_OPCODE_BEQ_U64_CONST_CONST_FUNC_FUNC = 446,
    VM_OPCODE_BLT_U64_REG_REG_FUNC_FUNC = 447,
    VM_OPCODE_BLT_U64_REG_CONST_FUNC_FUNC = 448,
    VM_OPCODE_BLT_U64_CONST_REG_FUNC_FUNC = 449,
    VM_OPCODE_BLT_U64_CONST_CONST_FUNC_FUNC = 450,
    VM_OPCODE_MOVE_U64_REG = 451,
    VM_OPCODE_MOVE_U64_CONST = 452,
    VM_OPCODE_OUT_U64_REG = 453,
    VM_OPCODE_OUT_U64_CONST = 454,
    VM_OPCODE_IN_U64_VOID = 455,
    VM_OPCODE_TYPE_U64_VOID = 456,
    VM_OPCODE_BNOT_U64_REG = 457,
    VM_OPCODE_BNOT_U64_CONST = 458,
    VM_OPCODE_RET_U64_REG = 459,
    VM_OPCODE_RET_U64_CONST = 460,
    VM_OPCODE_BOR_U64_REG_REG = 461,
    VM_OPCODE_BOR_U64_REG_CONST = 462,
    VM_OPCODE_BOR_U64_CONST_REG = 463,
    VM_OPCODE_BOR_U64_CONST_CONST = 464,
    VM_OPCODE_BXOR_U64_REG_REG = 465,
    VM_OPCODE_BXOR_U64_REG_CONST = 466,
    VM_OPCODE_BXOR_U64_CONST_REG = 467,
    VM_OPCODE_BXOR_U64_CONST_CONST = 468,
    VM_OPCODE_BAND_U64_REG_REG = 469,
    VM_OPCODE_BAND_U64_REG_CONST = 470,
    VM_OPCODE_BAND_U64_CONST_REG = 471,
    VM_OPCODE_BAND_U64_CONST_CONST = 472,
    VM_OPCODE_BSHL_U64_REG_REG = 473,
    VM_OPCODE_BSHL_U64_REG_CONST = 474,
    VM_OPCODE_BSHL_U64_CONST_REG = 475,
    VM_OPCODE_BSHL_U64_CONST_CONST = 476,
    VM_OPCODE_BSHR_U64_REG_REG = 477,
    VM_OPCODE_BSHR_U64_REG_CONST = 478,
    VM_OPCODE_BSHR_U64_CONST_REG = 479,
    VM_OPCODE_BSHR_U64_CONST_CONST = 480,
    VM_OPCODE_ADD_F32_REG_REG = 481,
    VM_OPCODE_ADD_F32_REG_CONST = 482,
    VM_OPCODE_ADD_F32_CONST_REG = 483,
    VM_OPCODE_ADD_F32_CONST_CONST = 484,
    VM_OPCODE_SUB_F32_REG_REG = 485,
    VM_OPCODE_SUB_F32_REG_CONST = 486,
    VM_OPCODE_SUB_F32_CONST_REG = 487,
    VM_OPCODE_SUB_F32_CONST_CONST = 488,
    VM_OPCODE_MUL_F32_REG_REG = 489,
    VM_OPCODE_MUL_F32_REG_CONST = 490,
    VM_OPCODE_MUL_F32_CONST_REG = 491,
    VM_OPCODE_MUL_F32_CONST_CONST = 492,
    VM_OPCODE_DIV_F32_REG_REG = 493,
    VM_OPCODE_DIV_F32_REG_CONST = 494,
    VM_OPCODE_DIV_F32_CONST_REG = 495,
    VM_OPCODE_DIV_F32_CONST_CONST = 496,
    VM_OPCODE_MOD_F32_REG_REG = 497,
    VM_OPCODE_MOD_F32_REG_CONST = 498,
    VM_OPCODE_MOD_F32_CONST_REG = 499,
    VM_OPCODE_MOD_F32_CONST_CONST = 500,
    VM_OPCODE_BB_F32_REG_FUNC_FUNC = 501,
    VM_OPCODE_BB_F32_CONST_FUNC_FUNC = 502,
    VM_OPCODE_BEQ_F32_REG_REG_FUNC_FUNC = 503,
    VM_OPCODE_BEQ_F32_REG_CONST_FUNC_FUNC = 504,
    VM_OPCODE_BEQ_F32_CONST_REG_FUNC_FUNC = 505,
    VM_OPCODE_BEQ_F32_CONST_CONST_FUNC_FUNC = 506,
    VM_OPCODE_BLT_F32_REG_REG_FUNC_FUNC = 507,
    VM_OPCODE_BLT_F32_REG_CONST_FUNC_FUNC = 508,
    VM_OPCODE_BLT_F32_CONST_REG_FUNC_FUNC = 509,
    VM_OPCODE_BLT_F32_CONST_CONST_FUNC_FUNC = 510,
    VM_OPCODE_MOVE_F32_REG = 511,
    VM_OPCODE_MOVE_F32_CONST = 512,
    VM_OPCODE_OUT_F32_REG = 513,
    VM_OPCODE_OUT_F32_CONST = 514,
    VM_OPCODE_IN_F32_VOID = 515,
    VM_OPCODE_TYPE_F32_VOID = 516,
    VM_OPCODE_BNOT_F32_REG = 517,
    VM_OPCODE_BNOT_F32_CONST = 518,
    VM_OPCODE_RET_F32_REG = 519,
    VM_OPCODE_RET_F32_CONST = 520,
    VM_OPCODE_ADD_F64_REG_REG = 521,
    VM_OPCODE_ADD_F64_REG_CONST = 522,
    VM_OPCODE_ADD_F64_CONST_REG = 523,
    VM_OPCODE_ADD_F64_CONST_CONST = 524,
    VM_OPCODE_SUB_F64_REG_REG = 525,
    VM_OPCODE_SUB_F64_REG_CONST = 526,
    VM_OPCODE_SUB_F64_CONST_REG = 527,
    VM_OPCODE_SUB_F64_CONST_CONST = 528,
    VM_OPCODE_MUL_F64_REG_REG = 529,
    VM_OPCODE_MUL_F64_REG_CONST = 530,
    VM_OPCODE_MUL_F64_CONST_REG = 531,
    VM_OPCODE_MUL_F64_CONST_CONST = 532,
    VM_OPCODE_DIV_F64_REG_REG = 533,
    VM_OPCODE_DIV_F64_REG_CONST = 534,
    VM_OPCODE_DIV_F64_CONST_REG = 535,
    VM_OPCODE_DIV_F64_CONST_CONST = 536,
    VM_OPCODE_MOD_F64_REG_REG = 537,
    VM_OPCODE_MOD_F64_REG_CONST = 538,
    VM_OPCODE_MOD_F64_CONST_REG = 539,
    VM_OPCODE_MOD_F64_CONST_CONST = 540,
    VM_OPCODE_BB_F64_REG_FUNC_FUNC = 541,
    VM_OPCODE_BB_F64_CONST_FUNC_FUNC = 542,
    VM_OPCODE_BEQ_F64_REG_REG_FUNC_FUNC = 543,
    VM_OPCODE_BEQ_F64_REG_CONST_FUNC_FUNC = 544,
    VM_OPCODE_BEQ_F64_CONST_REG_FUNC_FUNC = 545,
    VM_OPCODE_BEQ_F64_CONST_CONST_FUNC_FUNC = 546,
    VM_OPCODE_BLT_F64_REG_REG_FUNC_FUNC = 547,
    VM_OPCODE_BLT_F64_REG_CONST_FUNC_FUNC = 548,
    VM_OPCODE_BLT_F64_CONST_REG_FUNC_FUNC = 549,
    VM_OPCODE_BLT_F64_CONST_CONST_FUNC_FUNC = 550,
    VM_OPCODE_MOVE_F64_REG = 551,
    VM_OPCODE_MOVE_F64_CONST = 552,
    VM_OPCODE_OUT_F64_REG = 553,
    VM_OPCODE_OUT_F64_CONST = 554,
    VM_OPCODE_IN_F64_VOID = 555,
    VM_OPCODE_TYPE_F64_VOID = 556,
    VM_OPCODE_BNOT_F64_REG = 557,
    VM_OPCODE_BNOT_F64_CONST = 558,
    VM_OPCODE_RET_F64_REG = 559,
    VM_OPCODE_RET_F64_CONST = 560,
    VM_OPCODE_EXIT_BREAK_VOID = 561,
    VM_OPCODE_JUMP_FUNC_CONST = 562,
    VM_OPCODE_CALL_FUNC_CONST = 563,
    VM_OPCODE_CALL_FUNC_REG = 564,
    VM_OPCODE_CALL_FUNC_CONST_REG = 565,
    VM_OPCODE_CALL_FUNC_REG_REG = 566,
    VM_OPCODE_CALL_FUNC_CONST_REG_REG = 567,
    VM_OPCODE_CALL_FUNC_REG_REG_REG = 568,
    VM_OPCODE_CALL_FUNC_CONST_REG_REG_REG = 569,
    VM_OPCODE_CALL_FUNC_REG_REG_REG_REG = 570,
    VM_OPCODE_CALL_FUNC_CONST_REG_REG_REG_REG = 571,
    VM_OPCODE_CALL_FUNC_REG_REG_REG_REG_REG = 572,
    VM_OPCODE_CALL_FUNC_CONST_REG_REG_REG_REG_REG = 573,
    VM_OPCODE_CALL_FUNC_REG_REG_REG_REG_REG_REG = 574,
    VM_OPCODE_CALL_FUNC_CONST_REG_REG_REG_REG_REG_REG = 575,
    VM_OPCODE_CALL_FUNC_REG_REG_REG_REG_REG_REG_REG = 576,
    VM_OPCODE_CALL_FUNC_CONST_REG_REG_REG_REG_REG_REG_REG = 577,
    VM_OPCODE_CALL_FUNC_REG_REG_REG_REG_REG_REG_REG_REG = 578,
    VM_OPCODE_CALL_FUNC_CONST_REG_REG_REG_REG_REG_REG_REG_REG = 579,
    VM_OPCODE_CALL_FUNC_REG_REG_REG_REG_REG_REG_REG_REG_REG = 580
};
struct vm_state_t;
typedef struct vm_state_t vm_state_t;

union vm_opcode_t;
typedef union vm_opcode_t vm_opcode_t;

union vm_opcode_t {
    void *ptr;
    size_t reg;
    int8_t i8;
    int16_t i16;
    int32_t i32;
    int64_t i64;
    uint8_t u8;
    uint16_t u16;
    uint32_t u32;
    uint64_t u64;
    float f32;
    double f64;
    vm_block_t *func;
};

struct vm_state_t {
    vm_opcode_t **ips;
    size_t framesize;
    size_t nlocals;
    void *locals;
    void **ptrs;
};

vm_state_t *vm_state_init(size_t nregs);
void vm_state_deinit(vm_state_t *state);
void vm_run(vm_state_t *state, vm_block_t *block);

#endif
