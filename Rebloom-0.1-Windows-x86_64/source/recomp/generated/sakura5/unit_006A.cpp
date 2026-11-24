#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006A[4096] = {
    1, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159,
    0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219,
    0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 283, 0, 0, 284, 0, 0, 285, 0, 286, 0, 287, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0,
    0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 307,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314,
    0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364,
    0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0,
    383, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0,
};

void unit_006A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C8000;
    case 2u: goto L_002C8018;
    case 3u: goto L_002C801C;
    case 4u: goto L_002C8060;
    case 5u: goto L_002C8084;
    case 6u: goto L_002C80A8;
    case 7u: goto L_002C80B4;
    case 8u: goto L_002C80D0;
    case 9u: goto L_002C8100;
    case 10u: goto L_002C810C;
    case 11u: goto L_002C8128;
    case 12u: goto L_002C8138;
    case 13u: goto L_002C81C4;
    case 14u: goto L_002C81E8;
    case 15u: goto L_002C822C;
    case 16u: goto L_002C8260;
    case 17u: goto L_002C8274;
    case 18u: goto L_002C8294;
    case 19u: goto L_002C82A0;
    case 20u: goto L_002C82C0;
    case 21u: goto L_002C82E0;
    case 22u: goto L_002C830C;
    case 23u: goto L_002C8328;
    case 24u: goto L_002C8334;
    case 25u: goto L_002C8348;
    case 26u: goto L_002C8360;
    case 27u: goto L_002C8390;
    case 28u: goto L_002C839C;
    case 29u: goto L_002C83B0;
    case 30u: goto L_002C83CC;
    case 31u: goto L_002C8420;
    case 32u: goto L_002C847C;
    case 33u: goto L_002C8488;
    case 34u: goto L_002C84A0;
    case 35u: goto L_002C84C0;
    case 36u: goto L_002C84D0;
    case 37u: goto L_002C84FC;
    case 38u: goto L_002C8518;
    case 39u: goto L_002C8588;
    case 40u: goto L_002C85A4;
    case 41u: goto L_002C85BC;
    case 42u: goto L_002C8618;
    case 43u: goto L_002C8620;
    case 44u: goto L_002C8628;
    case 45u: goto L_002C863C;
    case 46u: goto L_002C864C;
    case 47u: goto L_002C865C;
    case 48u: goto L_002C8678;
    case 49u: goto L_002C86E0;
    case 50u: goto L_002C8758;
    case 51u: goto L_002C8778;
    case 52u: goto L_002C8798;
    case 53u: goto L_002C87B8;
    case 54u: goto L_002C884C;
    case 55u: goto L_002C886C;
    case 56u: goto L_002C8880;
    case 57u: goto L_002C88D4;
    case 58u: goto L_002C8900;
    case 59u: goto L_002C893C;
    case 60u: goto L_002C8984;
    case 61u: goto L_002C898C;
    case 62u: goto L_002C8994;
    case 63u: goto L_002C899C;
    case 64u: goto L_002C89A4;
    case 65u: goto L_002C89BC;
    case 66u: goto L_002C89F0;
    case 67u: goto L_002C8A00;
    case 68u: goto L_002C8A90;
    case 69u: goto L_002C8AA8;
    case 70u: goto L_002C8ADC;
    case 71u: goto L_002C8B90;
    case 72u: goto L_002C8BD0;
    case 73u: goto L_002C8BDC;
    case 74u: goto L_002C8BFC;
    case 75u: goto L_002C8C18;
    case 76u: goto L_002C8C28;
    case 77u: goto L_002C8C40;
    case 78u: goto L_002C8C78;
    case 79u: goto L_002C8CA0;
    case 80u: goto L_002C8CB0;
    case 81u: goto L_002C8CF0;
    case 82u: goto L_002C8D04;
    case 83u: goto L_002C8D68;
    case 84u: goto L_002C8D74;
    case 85u: goto L_002C8DB0;
    case 86u: goto L_002C8DEC;
    case 87u: goto L_002C8E04;
    case 88u: goto L_002C8E20;
    case 89u: goto L_002C8E34;
    case 90u: goto L_002C8E54;
    case 91u: goto L_002C8E88;
    case 92u: goto L_002C8EA0;
    case 93u: goto L_002C8EB4;
    case 94u: goto L_002C8EDC;
    case 95u: goto L_002C8F14;
    case 96u: goto L_002C8F30;
    case 97u: goto L_002C8F50;
    case 98u: goto L_002C8FAC;
    case 99u: goto L_002C8FF8;
    case 100u: goto L_002C9018;
    case 101u: goto L_002C903C;
    case 102u: goto L_002C9090;
    case 103u: goto L_002C90A0;
    case 104u: goto L_002C90BC;
    case 105u: goto L_002C90F0;
    case 106u: goto L_002C9150;
    case 107u: goto L_002C9170;
    case 108u: goto L_002C9190;
    case 109u: goto L_002C91B8;
    case 110u: goto L_002C91C8;
    case 111u: goto L_002C91E0;
    case 112u: goto L_002C9200;
    case 113u: goto L_002C9218;
    case 114u: goto L_002C9254;
    case 115u: goto L_002C925C;
    case 116u: goto L_002C9280;
    case 117u: goto L_002C9290;
    case 118u: goto L_002C92B8;
    case 119u: goto L_002C92CC;
    case 120u: goto L_002C9310;
    case 121u: goto L_002C9324;
    case 122u: goto L_002C9330;
    case 123u: goto L_002C9360;
    case 124u: goto L_002C936C;
    case 125u: goto L_002C9380;
    case 126u: goto L_002C9394;
    case 127u: goto L_002C93B8;
    case 128u: goto L_002C93CC;
    case 129u: goto L_002C93D8;
    case 130u: goto L_002C93E4;
    case 131u: goto L_002C9448;
    case 132u: goto L_002C9454;
    case 133u: goto L_002C9460;
    case 134u: goto L_002C9498;
    case 135u: goto L_002C94BC;
    case 136u: goto L_002C94D0;
    case 137u: goto L_002C9544;
    case 138u: goto L_002C9568;
    case 139u: goto L_002C9574;
    case 140u: goto L_002C9594;
    case 141u: goto L_002C95A8;
    case 142u: goto L_002C962C;
    case 143u: goto L_002C9634;
    case 144u: goto L_002C963C;
    case 145u: goto L_002C9658;
    case 146u: goto L_002C9674;
    case 147u: goto L_002C9680;
    case 148u: goto L_002C96AC;
    case 149u: goto L_002C96C0;
    case 150u: goto L_002C96D4;
    case 151u: goto L_002C96E4;
    case 152u: goto L_002C9714;
    case 153u: goto L_002C9784;
    case 154u: goto L_002C97B4;
    case 155u: goto L_002C9824;
    case 156u: goto L_002C9834;
    case 157u: goto L_002C9840;
    case 158u: goto L_002C9864;
    case 159u: goto L_002C987C;
    case 160u: goto L_002C9884;
    case 161u: goto L_002C9898;
    case 162u: goto L_002C98B4;
    case 163u: goto L_002C98D0;
    case 164u: goto L_002C98E4;
    case 165u: goto L_002C9930;
    case 166u: goto L_002C995C;
    case 167u: goto L_002C9980;
    case 168u: goto L_002C99C4;
    case 169u: goto L_002C99E8;
    case 170u: goto L_002C9A14;
    case 171u: goto L_002C9A3C;
    case 172u: goto L_002C9A48;
    case 173u: goto L_002C9A5C;
    case 174u: goto L_002C9A8C;
    case 175u: goto L_002C9AC4;
    case 176u: goto L_002C9AD8;
    case 177u: goto L_002C9AEC;
    case 178u: goto L_002C9B00;
    case 179u: goto L_002C9B14;
    case 180u: goto L_002C9B40;
    case 181u: goto L_002C9B50;
    case 182u: goto L_002C9BAC;
    case 183u: goto L_002C9BB8;
    case 184u: goto L_002C9BD0;
    case 185u: goto L_002C9BF0;
    case 186u: goto L_002C9C00;
    case 187u: goto L_002C9C4C;
    case 188u: goto L_002C9C78;
    case 189u: goto L_002C9CD0;
    case 190u: goto L_002C9CD8;
    case 191u: goto L_002C9D38;
    case 192u: goto L_002C9D80;
    case 193u: goto L_002C9DC0;
    case 194u: goto L_002C9E14;
    case 195u: goto L_002C9E70;
    case 196u: goto L_002C9EC0;
    case 197u: goto L_002C9ED8;
    case 198u: goto L_002C9EF4;
    case 199u: goto L_002C9F10;
    case 200u: goto L_002C9F3C;
    case 201u: goto L_002C9F44;
    case 202u: goto L_002C9F78;
    case 203u: goto L_002C9FB0;
    case 204u: goto L_002C9FE8;
    case 205u: goto L_002CA020;
    case 206u: goto L_002CA054;
    case 207u: goto L_002CA060;
    case 208u: goto L_002CA090;
    case 209u: goto L_002CA0C0;
    case 210u: goto L_002CA0DC;
    case 211u: goto L_002CA110;
    case 212u: goto L_002CA160;
    case 213u: goto L_002CA1B0;
    case 214u: goto L_002CA1F0;
    case 215u: goto L_002CA228;
    case 216u: goto L_002CA240;
    case 217u: goto L_002CA250;
    case 218u: goto L_002CA270;
    case 219u: goto L_002CA27C;
    case 220u: goto L_002CA28C;
    case 221u: goto L_002CA2A0;
    case 222u: goto L_002CA2C0;
    case 223u: goto L_002CA2CC;
    case 224u: goto L_002CA2E4;
    case 225u: goto L_002CA2F4;
    case 226u: goto L_002CA310;
    case 227u: goto L_002CA32C;
    case 228u: goto L_002CA338;
    case 229u: goto L_002CA35C;
    case 230u: goto L_002CA380;
    case 231u: goto L_002CA3D0;
    case 232u: goto L_002CA3E0;
    case 233u: goto L_002CA40C;
    case 234u: goto L_002CA440;
    case 235u: goto L_002CA464;
    case 236u: goto L_002CA46C;
    case 237u: goto L_002CA47C;
    case 238u: goto L_002CA490;
    case 239u: goto L_002CA4D0;
    case 240u: goto L_002CA4DC;
    case 241u: goto L_002CA4F4;
    case 242u: goto L_002CA510;
    case 243u: goto L_002CA520;
    case 244u: goto L_002CA530;
    case 245u: goto L_002CA54C;
    case 246u: goto L_002CA558;
    case 247u: goto L_002CA5A0;
    case 248u: goto L_002CA5C0;
    case 249u: goto L_002CA5E4;
    case 250u: goto L_002CA5FC;
    case 251u: goto L_002CA610;
    case 252u: goto L_002CA644;
    case 253u: goto L_002CA658;
    case 254u: goto L_002CA670;
    case 255u: goto L_002CA67C;
    case 256u: goto L_002CA6B0;
    case 257u: goto L_002CA6D4;
    case 258u: goto L_002CA6EC;
    case 259u: goto L_002CA700;
    case 260u: goto L_002CA710;
    case 261u: goto L_002CA770;
    case 262u: goto L_002CA7FC;
    case 263u: goto L_002CA818;
    case 264u: goto L_002CA828;
    case 265u: goto L_002CA844;
    case 266u: goto L_002CA894;
    case 267u: goto L_002CA8A0;
    case 268u: goto L_002CA8CC;
    case 269u: goto L_002CA8E8;
    case 270u: goto L_002CA91C;
    case 271u: goto L_002CA958;
    case 272u: goto L_002CA964;
    case 273u: goto L_002CA970;
    case 274u: goto L_002CA97C;
    case 275u: goto L_002CA9AC;
    case 276u: goto L_002CA9C8;
    case 277u: goto L_002CAA08;
    case 278u: goto L_002CAA10;
    case 279u: goto L_002CAA24;
    case 280u: goto L_002CAA38;
    case 281u: goto L_002CAA40;
    case 282u: goto L_002CAA48;
    case 283u: goto L_002CAA50;
    case 284u: goto L_002CAA5C;
    case 285u: goto L_002CAA68;
    case 286u: goto L_002CAA70;
    case 287u: goto L_002CAA78;
    case 288u: goto L_002CAA80;
    case 289u: goto L_002CAAB4;
    case 290u: goto L_002CAADC;
    case 291u: goto L_002CAB00;
    case 292u: goto L_002CAB24;
    case 293u: goto L_002CAB48;
    case 294u: goto L_002CAB68;
    case 295u: goto L_002CAB70;
    case 296u: goto L_002CAB78;
    case 297u: goto L_002CAB84;
    case 298u: goto L_002CAB98;
    case 299u: goto L_002CABF0;
    case 300u: goto L_002CACD0;
    case 301u: goto L_002CAD10;
    case 302u: goto L_002CAD1C;
    case 303u: goto L_002CAD34;
    case 304u: goto L_002CAD50;
    case 305u: goto L_002CAD58;
    case 306u: goto L_002CAD60;
    case 307u: goto L_002CAD7C;
    case 308u: goto L_002CADBC;
    case 309u: goto L_002CADD8;
    case 310u: goto L_002CAE10;
    case 311u: goto L_002CAE6C;
    case 312u: goto L_002CAE88;
    case 313u: goto L_002CAEAC;
    case 314u: goto L_002CAEFC;
    case 315u: goto L_002CAF14;
    case 316u: goto L_002CAF1C;
    case 317u: goto L_002CAF2C;
    case 318u: goto L_002CAF54;
    case 319u: goto L_002CAF84;
    case 320u: goto L_002CAFA0;
    case 321u: goto L_002CAFC4;
    case 322u: goto L_002CAFE0;
    case 323u: goto L_002CB028;
    case 324u: goto L_002CB06C;
    case 325u: goto L_002CB09C;
    case 326u: goto L_002CB0B8;
    case 327u: goto L_002CB0DC;
    case 328u: goto L_002CB0F0;
    case 329u: goto L_002CB130;
    case 330u: goto L_002CB160;
    case 331u: goto L_002CB17C;
    case 332u: goto L_002CB1A0;
    case 333u: goto L_002CB1B0;
    case 334u: goto L_002CB204;
    case 335u: goto L_002CB234;
    case 336u: goto L_002CB250;
    case 337u: goto L_002CB274;
    case 338u: goto L_002CB290;
    case 339u: goto L_002CB2E4;
    case 340u: goto L_002CB314;
    case 341u: goto L_002CB330;
    case 342u: goto L_002CB354;
    case 343u: goto L_002CB370;
    case 344u: goto L_002CB3CC;
    case 345u: goto L_002CB458;
    case 346u: goto L_002CB4A4;
    case 347u: goto L_002CB5C8;
    case 348u: goto L_002CB6E8;
    case 349u: goto L_002CB748;
    case 350u: goto L_002CB754;
    case 351u: goto L_002CB75C;
    case 352u: goto L_002CB78C;
    case 353u: goto L_002CB7A8;
    case 354u: goto L_002CB7CC;
    case 355u: goto L_002CB7F0;
    case 356u: goto L_002CB800;
    case 357u: goto L_002CB840;
    case 358u: goto L_002CB880;
    case 359u: goto L_002CB8BC;
    case 360u: goto L_002CB8D4;
    case 361u: goto L_002CB8EC;
    case 362u: goto L_002CB910;
    case 363u: goto L_002CB950;
    case 364u: goto L_002CB97C;
    case 365u: goto L_002CB9A0;
    case 366u: goto L_002CB9B0;
    case 367u: goto L_002CB9C0;
    case 368u: goto L_002CB9D0;
    case 369u: goto L_002CB9EC;
    case 370u: goto L_002CB9F8;
    case 371u: goto L_002CBA30;
    case 372u: goto L_002CBA50;
    case 373u: goto L_002CBA90;
    case 374u: goto L_002CBA9C;
    case 375u: goto L_002CBAB4;
    case 376u: goto L_002CBAD0;
    case 377u: goto L_002CBAEC;
    case 378u: goto L_002CBB08;
    case 379u: goto L_002CBB30;
    case 380u: goto L_002CBB98;
    case 381u: goto L_002CBBB4;
    case 382u: goto L_002CBBF4;
    case 383u: goto L_002CBC00;
    case 384u: goto L_002CBC08;
    case 385u: goto L_002CBC1C;
    case 386u: goto L_002CBC30;
    case 387u: goto L_002CBC40;
    case 388u: goto L_002CBC54;
    case 389u: goto L_002CBC80;
    case 390u: goto L_002CBC8C;
    case 391u: goto L_002CBCA0;
    case 392u: goto L_002CBCB8;
    case 393u: goto L_002CBCDC;
    case 394u: goto L_002CBD04;
    case 395u: goto L_002CBD18;
    case 396u: goto L_002CBD40;
    case 397u: goto L_002CBD54;
    case 398u: goto L_002CBD8C;
    case 399u: goto L_002CBDA4;
    case 400u: goto L_002CBDC0;
    case 401u: goto L_002CBEA8;
    case 402u: goto L_002CBEC8;
    case 403u: goto L_002CBF10;
    case 404u: goto L_002CBF68;
    case 405u: goto L_002CBF90;
    case 406u: goto L_002CBFE8;
    default: bad_entry(c, 0x002C8000u); return;
    }
L_002C8000:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002C800C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_002C800C:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002C8018:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002C801C:
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002C8048; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.f[0] = 0u;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002C8040; }
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_002C8040:
    st32((c.r[3].w[0] + 100u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_002C8048:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C8060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8084u); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_0069(c, 38u, depth + 1u); else { c.pc = 0x002C4520u; return; } if (c.pc != 0x002C8084u) [[unlikely]] return; }
L_002C8084:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002C80AC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C80A8u); set32(c.r[5], 0u + 23u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C80A8u) [[unlikely]] return; }
L_002C80A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002C80AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C80B4u); set32(c.r[5], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002C80B4u) [[unlikely]] return; }
L_002C80B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C80D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1144u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8100u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x002C8100u) [[unlikely]] return; }
L_002C8100:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C810Cu); set32(c.r[5], ld32((c.r[4].w[0] + 1144u)));  if (depth < kMaxDepth) unit_006A(c, 49u, depth + 1u); else { c.pc = 0x002C86E0u; return; } if (c.pc != 0x002C810Cu) [[unlikely]] return; }
L_002C810C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 1144u)));  goto L_002C8130; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8128u);  if (depth < kMaxDepth) unit_0072(c, 129u, depth + 1u); else { c.pc = 0x002E9940u; return; } if (c.pc != 0x002C8128u) [[unlikely]] return; }
L_002C8128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  if (t) { goto L_002C813C; } }
L_002C8130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8138u); set32(c.r[5], ld32((c.r[2].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0028CB70u; return; } if (c.pc != 0x002C8138u) [[unlikely]] return; }
L_002C8138:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002C813C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 1144u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[3].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[3].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[3].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    st32((c.r[3].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1144u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    st32((c.r[4].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    st32((c.r[4].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    st32((c.r[4].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    st32((c.r[4].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81C4u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x002C81C4u) [[unlikely]] return; }
L_002C81C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 104u)));  goto L_002C81F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 11136u)));
    c.f[12] = c.r[3].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 66u, depth + 1u); else { c.pc = 0x002C4950u; return; } if (c.pc != 0x002C81E8u) [[unlikely]] return; }
L_002C81E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002C834C; } }
L_002C81F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 60u);  goto L_002C8208; }
    set32(c.r[2], 0u + 58u);
    set32(c.r[6], 0u + 19u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_002C8210; } }
L_002C8208:
    set32(c.r[6], 0u + 21u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_002C8210:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C822Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x002C822Cu) [[unlikely]] return; }
L_002C822C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002C82B0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1144u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 5;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], 0u + 9000u);  goto L_002C8264; }
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8260u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8260u) [[unlikely]] return; }
L_002C8260:
    set32(c.r[2], 0u + 9000u);
    c.budget -= 1;
L_002C8264:
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8274u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002C8274u) [[unlikely]] return; }
L_002C8274:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], c.r[18].w[0] + 352u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1144u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8294u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002C8294u) [[unlikely]] return; }
L_002C8294:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C82A0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002C82A0u) [[unlikely]] return; }
L_002C82A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
L_002C82B0:
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C82C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x002C82C0u) [[unlikely]] return; }
L_002C82C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1144u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[6].sd[0] < 0) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  goto L_002C82E4; }
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C82E0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002C82E0u) [[unlikely]] return; }
L_002C82E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_002C82E4:
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  goto L_002C8310; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 24u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C830Cu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C830Cu) [[unlikely]] return; }
L_002C830C:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_002C8310:
    c.r[2].d[0] = c.r[2].d[0] & 257ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002C832C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8328u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x002C8328u) [[unlikely]] return; }
L_002C8328:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002C832C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8334u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002C8334u) [[unlikely]] return; }
L_002C8334:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 11136u)));
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8348u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 66u, depth + 1u); else { c.pc = 0x002C4950u; return; } if (c.pc != 0x002C8348u) [[unlikely]] return; }
L_002C8348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C834C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C8360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C8390; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8390u); set32(c.r[5], 0u + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8390u) [[unlikely]] return; }
L_002C8390:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C839Cu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002C839Cu) [[unlikely]] return; }
L_002C839C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C83B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 452u);  if (t) { goto L_002C83FC; } }
    set32(c.r[2], c.r[9].w[0] << 2);
    c.budget -= 1;
L_002C83CC:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_002C83FC; }
    set32(c.r[3], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002C83F8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002C840C; } }
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 1;
L_002C83F8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002C83FC:
    c.r[2].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[9].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C83CCu | kUnwind; return; } goto L_002C83CC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C840C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C84A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27424u);
    set32(c.r[2], c.r[2].w[0] + 27480u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002C8488; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C847Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002C847Cu) [[unlikely]] return; }
L_002C847C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8488u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002C8488u) [[unlikely]] return; }
L_002C8488:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002C84A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C84A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002C84A0u) [[unlikely]] return; }
L_002C84A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002C84A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C84C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8420u | kUnwind; return; } goto L_002C8420; }
L_002C84D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C84FCu); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x002C84FCu) [[unlikely]] return; }
L_002C84FC:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_002C856C; }
    set32(c.r[7], ld32((c.r[28].w[0] - 30316u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_002C855C; } }
L_002C8518:
    set32(c.r[6], ld32((c.r[7].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1296u)));
    set32(c.r[4], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[6].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_002C8558; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002C855C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 1300u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C8558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002C86C8; } }
L_002C8558:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002C855C:
    c.r[2].d[0] = c.r[8].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8518u | kUnwind; return; } goto L_002C8518; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_002C856C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 1296u)));  if (t) { goto L_002C857C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_002C8580; } }
L_002C857C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C8580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8588u);  if (depth < kMaxDepth) unit_0052(c, 94u, depth + 1u); else { c.pc = 0x00268E00u; return; } if (c.pc != 0x002C8588u) [[unlikely]] return; }
L_002C8588:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C859C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C86C4; } }
L_002C859C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C85A4u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002C85A4u) [[unlikely]] return; }
L_002C85A4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C8644; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C85BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002C85BCu) [[unlikely]] return; }
L_002C85BC:
    c.f[4] = ld32((c.r[17].w[0] + 672u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[4]);
    c.f[3] = ld32((c.r[17].w[0] + 676u));
    st32((c.r[29].w[0] + 100u), c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 680u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 684u));
    st32((c.r[29].w[0] + 116u), c.f[3]);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 112u), c.f[4]);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 120u), c.f[2]);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 108u), c.f[1]);
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8618u); st32((c.r[29].w[0] + 124u), c.f[1]);  if (depth < kMaxDepth) unit_0013(c, 258u, depth + 1u); else { c.pc = 0x0016EEA0u; return; } if (c.pc != 0x002C8618u) [[unlikely]] return; }
L_002C8618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8620u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 256u, depth + 1u); else { c.pc = 0x0016EE80u; return; } if (c.pc != 0x002C8620u) [[unlikely]] return; }
L_002C8620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8628u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002C8628u) [[unlikely]] return; }
L_002C8628:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 272u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C863Cu); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0013(c, 263u, depth + 1u); else { c.pc = 0x0016EEF0u; return; } if (c.pc != 0x002C863Cu) [[unlikely]] return; }
L_002C863C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C865C; } }
L_002C8644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C864Cu);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002C864Cu) [[unlikely]] return; }
L_002C864C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C865Cu); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0059(c, 441u, depth + 1u); else { c.pc = 0x00287D90u; return; } if (c.pc != 0x002C865Cu) [[unlikely]] return; }
L_002C865C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[2].w[0] + 44u)));  goto L_002C866C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C86C4; } }
L_002C866C:
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002C86B4; } }
L_002C8678:
    set32(c.r[5], ld32((c.r[6].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1296u)));
    set32(c.r[4], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002C86B4; }
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002C86B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C86C4; } }
L_002C86B0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002C86B4:
    c.r[2].d[0] = c.r[8].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8678u | kUnwind; return; } goto L_002C8678; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C86C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C86C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C86E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C873C; } }
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002C8740; } }
L_002C873C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C8740:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002C8750; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_002C8750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8758u);  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x002C8758u) [[unlikely]] return; }
L_002C8758:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  goto L_002C876C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C88D8; } }
L_002C876C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8778u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002C8778u) [[unlikely]] return; }
L_002C8778:
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8798u); c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002C8798u) [[unlikely]] return; }
L_002C8798:
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C87B8u); c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002C87B8u) [[unlikely]] return; }
L_002C87B8:
    c.f[2] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[21]);
    st32((c.r[29].w[0] + 120u), c.f[20]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 13;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C87F0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C87F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[20].w[0] + 616u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_002C8820; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_002C8828; }
L_002C8820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C8830; } }
L_002C8828:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002C8830:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[17], c.r[2].w[0] + 688u);  if (t) { goto L_002C8840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C8844; } }
L_002C8840:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002C8844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C884Cu); set32(c.r[5], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_0061(c, 14u, depth + 1u); else { c.pc = 0x002A4410u; return; } if (c.pc != 0x002C884Cu) [[unlikely]] return; }
L_002C884C:
    c.f[12] = ld32((c.r[28].w[0] - 32164u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C886Cu); c.r[9].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 343u, depth + 1u); else { c.pc = 0x002EFCD0u; return; } if (c.pc != 0x002C886Cu) [[unlikely]] return; }
L_002C886C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[29].w[0] + 112u));  goto L_002C8888; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8880u); set32(c.r[4], c.r[4].w[0] + 25008u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C8880u) [[unlikely]] return; }
L_002C8880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C88D8; } }
L_002C8888:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 1344u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[20].w[0] + 1328u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[20].w[0] + 1332u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[20].w[0] + 1336u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[20].w[0] + 1340u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    st32((c.r[20].w[0] + 1344u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    st32((c.r[20].w[0] + 1348u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[20].w[0] + 1352u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C88D4u); st32((c.r[20].w[0] + 1356u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 289u, depth + 1u); else { c.pc = 0x00292750u; return; } if (c.pc != 0x002C88D4u) [[unlikely]] return; }
L_002C88D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C88D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C8900:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C893Cu); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002C893Cu) [[unlikely]] return; }
L_002C893C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30268u)));  goto L_002C8B38; }
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C8B34; } }
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002C89A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 25056u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C8000u < 16384u) { entry = entries_006A[(t - 0x002C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C8984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_002C89A8; } }
L_002C898C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 3u);  if (t) { goto L_002C89A8; } }
L_002C8994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 4u);  if (t) { goto L_002C89A8; } }
L_002C899C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 5u);  if (t) { goto L_002C89A8; } }
L_002C89A4:
    set32(c.r[18], 0u + 6u);
    c.budget -= 1;
L_002C89A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C89BCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x002C89BCu) [[unlikely]] return; }
L_002C89BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8B34; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 1296u)));
    set32(c.r[22], ld32((c.r[20].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_002C8B34; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[30], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[2].w[0] + 452u);  if (t) { goto L_002C8A44; } }
L_002C89F0:
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8A00u); set32(c.r[4], ld32((c.r[21].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002C8A00u) [[unlikely]] return; }
L_002C8A00:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002C8A44; }
    set32(c.r[3], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C8A40; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 1296u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_002C8A40; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 5ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8A40; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002C8A40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C8A44:
    c.r[2].d[0] = c.r[16].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C89F0u | kUnwind; return; } goto L_002C89F0; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C8B34; } }
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  goto L_002C8A6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C8A78; } }
L_002C8A6C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], 0u + 2u);  goto L_002C8A78; }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002C8A78:
    set32(c.r[5], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002C8AD0; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 1u);
    set32(c.r[5], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 3;
L_002C8A90:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[5].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002C8AB0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8AA8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 255u, depth + 1u); else { c.pc = 0x00292250u; return; } if (c.pc != 0x002C8AA8u) [[unlikely]] return; }
L_002C8AA8:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002C8AB0:
    c.r[2].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 148u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8A90u | kUnwind; return; } goto L_002C8A90; }
    set32(c.r[2], 0u + 5u);
    mmi::divu(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_002C8AE4; } }
L_002C8AD0:
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8ADCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 255u, depth + 1u); else { c.pc = 0x00292250u; return; } if (c.pc != 0x002C8ADCu) [[unlikely]] return; }
L_002C8ADC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002C8AE4:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  goto L_002C8AF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002C8B00; } }
L_002C8AF4:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], 0u + 2u);  goto L_002C8B00; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002C8B00:
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1976u);  if (t) { goto L_002C8B60; } }
L_002C8B34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30268u)));
    c.budget -= 1;
L_002C8B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 25048u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[28].w[0] - 30268u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 25052u), c.r[3].w[0]);
    c.budget -= 6;
L_002C8B58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 25048u);
    c.budget -= 2;
L_002C8B60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002C8B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C8BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C8C2C; } }
L_002C8BB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8BD0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_005C(c, 46u, depth + 1u); else { c.pc = 0x00290810u; return; } if (c.pc != 0x002C8BD0u) [[unlikely]] return; }
L_002C8BD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8BDCu); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002C8BDCu) [[unlikely]] return; }
L_002C8BDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 1408u), c.r[2].w[0]);  goto L_002C8C00; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8BFCu); set32(c.r[6], c.r[6].w[0] + 25080u);  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x002C8BFCu) [[unlikely]] return; }
L_002C8BFC:
    st32((c.r[17].w[0] + 1408u), c.r[2].w[0]);
    c.budget -= 1;
L_002C8C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C8C2C; } }
L_002C8C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C18u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x002C8C18u) [[unlikely]] return; }
L_002C8C18:
    set32(c.r[4], ld32((c.r[17].w[0] + 1408u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x002C8C28u) [[unlikely]] return; }
L_002C8C28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C8C2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C8C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C8C8C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1408u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  goto L_002C8C80; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8C78u) [[unlikely]] return; }
L_002C8C78:
    st32((c.r[16].w[0] + 1408u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 2;
L_002C8C80:
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 3;
L_002C8C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8CA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 8ull;  c.pc = t; return; }
L_002C8CB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 1408u)));  goto L_002C8CC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C8CE8; } }
L_002C8CC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C8CE8; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002C8CE8; } }
L_002C8CE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 255u, depth + 1u); else { c.pc = 0x002AA620u; return; } if (c.pc != 0x002C8D04u) [[unlikely]] return; }
L_002C8D04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 27520u);
    set32(c.r[3], c.r[3].w[0] + 27576u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D480000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D68u); st32((c.r[29].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0060(c, 391u, depth + 1u); else { c.pc = 0x002A3B00u; return; } if (c.pc != 0x002C8D68u) [[unlikely]] return; }
L_002C8D68:
    set32(c.r[4], c.r[16].w[0] + 500u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D74u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0060(c, 416u, depth + 1u); else { c.pc = 0x002A3FE0u; return; } if (c.pc != 0x002C8D74u) [[unlikely]] return; }
L_002C8D74:
    st32((c.r[16].w[0] + 528u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 660u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 492u), c.r[2].w[0]);  if (t) { goto L_002C8D90; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 488u), c.r[2].w[0]);
    c.budget -= 2;
L_002C8D90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C8DB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C8E04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27520u);
    set32(c.r[2], c.r[2].w[0] + 27576u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8DECu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 259u, depth + 1u); else { c.pc = 0x002AA6B0u; return; } if (c.pc != 0x002C8DECu) [[unlikely]] return; }
L_002C8DEC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C8E08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002C8E04u) [[unlikely]] return; }
L_002C8E04:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C8E08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C8E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 276u, depth + 1u); else { c.pc = 0x002AA9C0u; return; } if (c.pc != 0x002C8E34u) [[unlikely]] return; }
L_002C8E34:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002C8E4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002C8E94; } }
L_002C8E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E54u);  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002C8E54u) [[unlikely]] return; }
L_002C8E54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8E90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 532u)));
    c.f[12] = 0u;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 25u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 500u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E88u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002C8E88u) [[unlikely]] return; }
L_002C8E88:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_002C8E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C8E94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8EB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 440u, depth + 1u); else { c.pc = 0x00293F10u; return; } if (c.pc != 0x002C8EB4u) [[unlikely]] return; }
L_002C8EB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 472u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], c.r[3].w[0] - c.r[4].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_002C8EE4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8EDCu); set32(c.r[4], c.r[4].w[0] + 10000u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002C8EDCu) [[unlikely]] return; }
L_002C8EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002C8EF0; } }
L_002C8EE4:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_002C8EF0:
    set32(c.r[3], ld32((c.r[6].w[0] + 164u)));
    set32(c.r[2], 0u - 2u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[6].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F14u); set32(c.r[5], 0u + 117u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8F14u) [[unlikely]] return; }
L_002C8F14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8F30:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 118u);
    set32(c.r[25], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002C8000u < 16384u) { entry = entries_006A[(t - 0x002C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C8F50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C8F80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 660u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 660u), c.r[2].w[0]);
    c.budget -= 4;
L_002C8F80:
    set32(c.r[2], ld32((c.r[17].w[0] + 532u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 500u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002C8FACu) [[unlikely]] return; }
L_002C8FAC:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C8FC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_002C8FD4; } }
L_002C8FC0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002C8FD4; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 3;
L_002C8FD4:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_002C8FFC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002C8FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C8FF8u) [[unlikely]] return; }
L_002C8FF8:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002C8FFC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9018u); st32((c.r[29].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002C9018u) [[unlikely]] return; }
L_002C9018:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 532u)));  goto L_002C9040; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002C903C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C903Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002C903Cu) [[unlikely]] return; }
L_002C903C:
    set32(c.r[4], ld32((c.r[17].w[0] + 532u)));
    c.budget -= 1;
L_002C9040:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 500u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 148u)));  if (t) { goto L_002C9060; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 672u), c.r[4].w[0]);
    c.budget -= 2;
L_002C9060:
    set32(c.r[4], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[17].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C9090:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8DB0u | kUnwind; return; } goto L_002C8DB0; }
L_002C90A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90BCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x002C90BCu) [[unlikely]] return; }
L_002C90BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 27616u);
    set32(c.r[3], c.r[3].w[0] + 27672u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x454D0000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17736ull;
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 104u), c.r[16].w[0]);
    c.budget -= 13;
L_002C90F0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 108u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C90F0u | kUnwind; return; } goto L_002C90F0; } }
    st32((c.r[17].w[0] + 116u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C9138; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_002C9138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C9150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 8;
L_002C9170:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 108u);  if (t) { goto L_002C9194; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9190u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C9190u) [[unlikely]] return; }
L_002C9190:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002C9194:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9170u | kUnwind; return; } goto L_002C9170; }
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002C91C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C91B8u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002C91B8u) [[unlikely]] return; }
L_002C91B8:
    st32((c.r[18].w[0] + 116u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002C91C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C91C8u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x002C91C8u) [[unlikely]] return; }
L_002C91C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C91E0:
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[5], 0u + 79u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002C8000u < 16384u) { entry = entries_006A[(t - 0x002C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C9200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9218u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x002C9218u) [[unlikely]] return; }
L_002C9218:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002C98B8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C98B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 25104u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002C8000u < 16384u) { entry = entries_006A[(t - 0x002C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C9254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C925Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_005E(c, 285u, depth + 1u); else { c.pc = 0x0029AFA0u; return; } if (c.pc != 0x002C925Cu) [[unlikely]] return; }
L_002C925C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 5u);  goto L_002C9288; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9280u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x002C9280u) [[unlikely]] return; }
L_002C9280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C98B4; } }
L_002C9288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9290u);  if (depth < kMaxDepth) unit_005E(c, 286u, depth + 1u); else { c.pc = 0x0029B010u; return; } if (c.pc != 0x002C9290u) [[unlikely]] return; }
L_002C9290:
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002C92AC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0])));  goto L_002C92AC; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C92AC:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C92B8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002C92B8u) [[unlikely]] return; }
L_002C92B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), c.r[4].w[0]);  goto L_002C92D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C92CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 178u, depth + 1u); else { c.pc = 0x00209830u; return; } if (c.pc != 0x002C92CCu) [[unlikely]] return; }
L_002C92CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 2;
L_002C92D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C98B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    st32((c.r[29].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9310u); st32((c.r[29].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0069(c, 273u, depth + 1u); else { c.pc = 0x002C6C30u; return; } if (c.pc != 0x002C9310u) [[unlikely]] return; }
L_002C9310:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9324u); set32(c.r[5], 0u + 75u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C9324u) [[unlikely]] return; }
L_002C9324:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002C98B4; } }
L_002C9330:
    set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002C9348; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_002C9348:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C98B4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002C9364; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9360u);  if (depth < kMaxDepth) unit_0069(c, 268u, depth + 1u); else { c.pc = 0x002C6BA0u; return; } if (c.pc != 0x002C9360u) [[unlikely]] return; }
L_002C9360:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002C9364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C936Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 167u, depth + 1u); else { c.pc = 0x002C9980u; return; } if (c.pc != 0x002C936Cu) [[unlikely]] return; }
L_002C936C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 71u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9380u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x002C9380u) [[unlikely]] return; }
L_002C9380:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9394u); set32(c.r[5], 0u + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C9394u) [[unlikely]] return; }
L_002C9394:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002C93B0; }
    set32(c.r[17], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 1;
L_002C93B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C93B8u);  if (depth < kMaxDepth) unit_005C(c, 59u, depth + 1u); else { c.pc = 0x00290A60u; return; } if (c.pc != 0x002C93B8u) [[unlikely]] return; }
L_002C93B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C93CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 8u, depth + 1u); else { c.pc = 0x002C4060u; return; } if (c.pc != 0x002C93CCu) [[unlikely]] return; }
L_002C93CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_002C93D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C93E4u); set32(c.r[4], ld32((c.r[2].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x002C93E4u) [[unlikely]] return; }
L_002C93E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.f[4] = ld32((c.r[6].w[0] + 80u));  if (t) { goto L_002C941C; } }
    c.f[3] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);  if (t) { goto L_002C9424; } }
L_002C941C:
    c.f[3] = ld32((c.r[5].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 2;
L_002C9424:
    c.f[1] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C98B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9448u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 180u, depth + 1u); else { c.pc = 0x002C9B40u; return; } if (c.pc != 0x002C9448u) [[unlikely]] return; }
L_002C9448:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9454u); set32(c.r[4], ld32((c.r[2].w[0] + 116u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002C9454u) [[unlikely]] return; }
L_002C9454:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9460u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002C9460u) [[unlikely]] return; }
L_002C9460:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  goto L_002C94AC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 1296u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 144u)));  if (t) { goto L_002C948C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002C9490; } }
L_002C948C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C9490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9498u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 320u, depth + 1u); else { c.pc = 0x0028F420u; return; } if (c.pc != 0x002C9498u) [[unlikely]] return; }
L_002C9498:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.budget -= 5;
L_002C94AC:
    set32(c.r[4], 0u - 1u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C94BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 66u, depth + 1u); else { c.pc = 0x002C4950u; return; } if (c.pc != 0x002C94BCu) [[unlikely]] return; }
L_002C94BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 5;
L_002C94D0:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002C951C; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_002C950C; }
L_002C950C:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.f[0]);  if (t) { goto L_002C98B4; } }
L_002C951C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C9534; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C98B4; } }
L_002C9534:
    c.f[12] = 0u;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9544u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 66u, depth + 1u); else { c.pc = 0x002C4950u; return; } if (c.pc != 0x002C9544u) [[unlikely]] return; }
L_002C9544:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9568u); set32(c.r[5], 0u + 77u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C9568u) [[unlikely]] return; }
L_002C9568:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9574u); set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_006A(c, 195u, depth + 1u); else { c.pc = 0x002C9E70u; return; } if (c.pc != 0x002C9574u) [[unlikely]] return; }
L_002C9574:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 104u)));  goto L_002C95AC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9594u); set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0028CB70u; return; } if (c.pc != 0x002C9594u) [[unlikely]] return; }
L_002C9594:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C95A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x002C95A8u) [[unlikely]] return; }
L_002C95A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 1;
L_002C95AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[0] = ld32((c.r[3].w[0] + 1328u));
    st32((c.r[3].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 1332u));
    st32((c.r[3].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 1336u));
    st32((c.r[3].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 1340u));
    st32((c.r[3].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1344u)));
    st32((c.r[3].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1348u)));
    st32((c.r[3].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1352u)));
    st32((c.r[3].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1356u)));
    st32((c.r[3].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C962Cu); set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x002C962Cu) [[unlikely]] return; }
L_002C962C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9634u); set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x002C9634u) [[unlikely]] return; }
L_002C9634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C963Cu); set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002C963Cu) [[unlikely]] return; }
L_002C963C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[5], 0u + 9u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9658u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x002C9658u) [[unlikely]] return; }
L_002C9658:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9674u); st32((c.r[5].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002C9674u) [[unlikely]] return; }
L_002C9674:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9680u); set32(c.r[4], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_0051(c, 290u, depth + 1u); else { c.pc = 0x00266540u; return; } if (c.pc != 0x002C9680u) [[unlikely]] return; }
L_002C9680:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30404u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 244u)));  if (t) { goto L_002C9694; } }
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 1;
L_002C9694:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002C96A4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 1;
L_002C96A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C96ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002C96ACu) [[unlikely]] return; }
L_002C96AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C96C0u); set32(c.r[5], 0u + 78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C96C0u) [[unlikely]] return; }
L_002C96C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C96D4u); st32((c.r[2].w[0] + 152u), 0u);  if (depth < kMaxDepth) unit_006A(c, 167u, depth + 1u); else { c.pc = 0x002C9980u; return; } if (c.pc != 0x002C96D4u) [[unlikely]] return; }
L_002C96D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002C98B4; } }
L_002C96E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C96F4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 1;
L_002C96F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 84u)));  if (t) { goto L_002C9708; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 136u)));  if (t) { goto L_002C970C; } }
L_002C9708:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C970C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9714u); set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002C9714u) [[unlikely]] return; }
L_002C9714:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], ld32((c.r[16].w[0] + 104u)));  goto L_002C9760; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_002C9750; }
L_002C9750:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.f[0]);  if (t) { goto L_002C98B4; } }
L_002C9760:
    set32(c.r[3], 0u - 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 9;
L_002C9784:
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C9794; }
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 1;
L_002C9794:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 84u)));  if (t) { goto L_002C97A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 136u)));  if (t) { goto L_002C97AC; } }
L_002C97A8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C97AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C97B4u); set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002C97B4u) [[unlikely]] return; }
L_002C97B4:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_002C9800; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_002C97F0; }
L_002C97F0:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.f[0]);  if (t) { goto L_002C98B4; } }
L_002C9800:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002C980C; }
    set32(c.r[17], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 1;
L_002C980C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002C981C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 2;
L_002C981C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9824u);  if (depth < kMaxDepth) unit_005C(c, 163u, depth + 1u); else { c.pc = 0x00291680u; return; } if (c.pc != 0x002C9824u) [[unlikely]] return; }
L_002C9824:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9834u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 199u, depth + 1u); else { c.pc = 0x002B1700u; return; } if (c.pc != 0x002C9834u) [[unlikely]] return; }
L_002C9834:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_002C9840:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002C9850; }
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 1;
L_002C9850:
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C98B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9864u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002C9864u) [[unlikely]] return; }
L_002C9864:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002C9874; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_002C9874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C987Cu);  if (depth < kMaxDepth) unit_005B(c, 313u, depth + 1u); else { c.pc = 0x0028F230u; return; } if (c.pc != 0x002C987Cu) [[unlikely]] return; }
L_002C987C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9884u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 5u, depth + 1u); else { c.pc = 0x00288060u; return; } if (c.pc != 0x002C9884u) [[unlikely]] return; }
L_002C9884:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9898u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C9898u) [[unlikely]] return; }
L_002C9898:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C98B4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x002C98B4u) [[unlikely]] return; }
L_002C98B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C98B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C98D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C98E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x002C98E4u) [[unlikely]] return; }
L_002C98E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C9970; }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002C990C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C996C; } }
L_002C990C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C996C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002C9928; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_002C9928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9930u);  if (depth < kMaxDepth) unit_005B(c, 330u, depth + 1u); else { c.pc = 0x0028F550u; return; } if (c.pc != 0x002C9930u) [[unlikely]] return; }
L_002C9930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C996C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002C994C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002C9950; } }
L_002C994C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C9950:
    set32(c.r[5], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C995Cu); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002C995Cu) [[unlikely]] return; }
L_002C995C:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 4;
L_002C996C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C9970:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C9980:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[19].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C99E0; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 104u)));  goto L_002C99BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9A00; } }
L_002C99BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C99C4u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002C99C4u) [[unlikely]] return; }
L_002C99C4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], 0u + 3u);  goto L_002C99D8; }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_002C99D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_002C9A0C; } }
L_002C99E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C99E8u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002C99E8u) [[unlikely]] return; }
L_002C99E8:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002C9B18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 4u);  if (t) { goto L_002C9A08; } }
L_002C9A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9B14; } }
L_002C9A08:
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_002C9A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9A14u);  if (depth < kMaxDepth) unit_005E(c, 286u, depth + 1u); else { c.pc = 0x0029B010u; return; } if (c.pc != 0x002C9A14u) [[unlikely]] return; }
L_002C9A14:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 108u);  if (t) { goto L_002C9A40; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9A3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C9A3Cu) [[unlikely]] return; }
L_002C9A3C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002C9A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9A48u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002C9A48u) [[unlikely]] return; }
L_002C9A48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_002C9A60; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9A5Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x002A44A0u; return; } if (c.pc != 0x002C9A5Cu) [[unlikely]] return; }
L_002C9A5C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002C9A60:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002C9A7C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_002C9A7C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C9A7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9A8Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 25u, depth + 1u); else { c.pc = 0x002A4620u; return; } if (c.pc != 0x002C9A8Cu) [[unlikely]] return; }
L_002C9A8C:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == c.r[3].d[0]; st32((c.r[6].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_002C9AE0; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 104u)));  goto L_002C9ABC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9B14; } }
L_002C9ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9AC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002C9AC4u) [[unlikely]] return; }
L_002C9AC4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[17].w[0] + 352u);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9AD8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002C9AD8u) [[unlikely]] return; }
L_002C9AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9B14; } }
L_002C9AE0:
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9AECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002C9AECu) [[unlikely]] return; }
L_002C9AEC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[17].w[0] + 352u);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B00u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002C9B00u) [[unlikely]] return; }
L_002C9B00:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B14u); set32(c.r[4], ld32((c.r[3].w[0] + 52u)));  if (depth < kMaxDepth) unit_00A8(c, 192u, depth + 1u); else { c.pc = 0x003C2350u; return; } if (c.pc != 0x002C9B14u) [[unlikely]] return; }
L_002C9B14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002C9B18:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C9B40:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 104u)));  [[clang::musttail]] return unit_0072(c, 129u, depth); }
L_002C9B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C9BD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27616u);
    set32(c.r[2], c.r[2].w[0] + 27672u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002C9BB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9BACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002C9BACu) [[unlikely]] return; }
L_002C9BAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9BB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002C9BB8u) [[unlikely]] return; }
L_002C9BB8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002C9BD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9BD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002C9BD0u) [[unlikely]] return; }
L_002C9BD0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002C9BD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C9BF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9B50u | kUnwind; return; } goto L_002C9B50; }
L_002C9C00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[20].w[0]) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[5].w[0] + 1296u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9C4Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_006C(c, 312u, depth + 1u); else { c.pc = 0x002D34B0u; return; } if (c.pc != 0x002C9C4Cu) [[unlikely]] return; }
L_002C9C4C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_002C9C5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C9E50; } }
L_002C9C5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 1296u)));  if (t) { goto L_002C9C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_002C9C70; } }
L_002C9C6C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C9C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9C78u);  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x002C9C78u) [[unlikely]] return; }
L_002C9C78:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 112u));  goto L_002C9D94; }
    ld128((c.r[18].w[0] + 192u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 192u), c.f[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[18].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[18].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    st32((c.r[18].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9CD0u); st32((c.r[18].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002C9CD0u) [[unlikely]] return; }
L_002C9CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9CD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002C9CD8u) [[unlikely]] return; }
L_002C9CD8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 616u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_002C9D08; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_002C9D10; }
L_002C9D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C9D18; } }
L_002C9D10:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002C9D18:
    set32(c.r[9], ld32((c.r[17].w[0] + 1304u)));
    c.f[12] = ld32((c.r[28].w[0] - 32164u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 688u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D38u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 343u, depth + 1u); else { c.pc = 0x002EFCD0u; return; } if (c.pc != 0x002C9D38u) [[unlikely]] return; }
L_002C9D38:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[18].w[0] + 196u), c.f[2]);
    st32((c.r[18].w[0] + 200u), c.f[1]);
    st32((c.r[18].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D80u); st32((c.r[18].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002C9D80u) [[unlikely]] return; }
L_002C9D80:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002C9D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C9E50; } }
L_002C9D90:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002C9D94:
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] + 564u);  if (t) { goto L_002C9E38; } }
L_002C9DC0:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[18].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002C9E38; }
    set32(c.r[3], ld32((c.r[4].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C9E34; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[4].w[0] + 208u);  goto L_002C9E0C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9E34; } }
    set32(c.r[5], c.r[4].w[0] + 208u);
    c.budget -= 1;
L_002C9E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002C9E14u) [[unlikely]] return; }
L_002C9E14:
    c.f[2] = ld32((c.r[18].w[0] + 656u));
    c.f[1] = ld32((c.r[17].w[0] + 656u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C9E34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C9E50; } }
L_002C9E34:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002C9E38:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 960u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9DC0u | kUnwind; return; } goto L_002C9DC0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C9E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C9E70:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 1296u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 17;
    { const bool t = c.r[17].d[0] == c.r[5].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C9EC0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9EC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x002C9EC0u) [[unlikely]] return; }
L_002C9EC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[22] = ld32((c.r[18].w[0] + 196u));
    c.f[20] = ld32((c.r[18].w[0] + 200u));
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9ED8u); c.f[21] = ld32((c.r[18].w[0] + 192u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002C9ED8u) [[unlikely]] return; }
L_002C9ED8:
    c.f[1] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9EF4u); c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002C9EF4u) [[unlikely]] return; }
L_002C9EF4:
    c.f[1] = fp::ee::add(c.fcr31, c.f[22], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9F10u); c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002C9F10u) [[unlikely]] return; }
L_002C9F10:
    c.f[1] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[16], 0u + 1u);
    c.f[0] = c.r[3].w[0];
    c.f[23] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 656u));
    c.f[0] = c.r[2].w[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[24] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_002CA02C; } }
L_002C9F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9F44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002C9F44u) [[unlikely]] return; }
L_002C9F44:
    c.f[21] = fp::ee::mul(c.fcr31, c.f[24], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[23], c.f[21]);
    st32((c.r[29].w[0] + 128u), c.f[23]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[22]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9F78u); st32((c.r[29].w[0] + 136u), c.f[20]);  if (depth < kMaxDepth) unit_006A(c, 186u, depth + 1u); else { c.pc = 0x002C9C00u; return; } if (c.pc != 0x002C9F78u) [[unlikely]] return; }
L_002C9F78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[29].w[0] + 112u));  goto L_002CA06C; }
    c.f[0] = fp::ee::add(c.fcr31, c.f[23], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.f[23]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[22]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9FB0u); st32((c.r[29].w[0] + 136u), c.f[20]);  if (depth < kMaxDepth) unit_006A(c, 186u, depth + 1u); else { c.pc = 0x002C9C00u; return; } if (c.pc != 0x002C9FB0u) [[unlikely]] return; }
L_002C9FB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CA068; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 136u), c.f[20]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[23]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9FE8u); st32((c.r[29].w[0] + 132u), c.f[22]);  if (depth < kMaxDepth) unit_006A(c, 186u, depth + 1u); else { c.pc = 0x002C9C00u; return; } if (c.pc != 0x002C9FE8u) [[unlikely]] return; }
L_002C9FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CA068; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[20], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 136u), c.f[20]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[23]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA020u); st32((c.r[29].w[0] + 132u), c.f[22]);  if (depth < kMaxDepth) unit_006A(c, 186u, depth + 1u); else { c.pc = 0x002C9C00u; return; } if (c.pc != 0x002CA020u) [[unlikely]] return; }
L_002CA020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CA068; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002CA02C:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9F3Cu | kUnwind; return; } goto L_002C9F3C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1296u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002CA054; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA054u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x002CA054u) [[unlikely]] return; }
L_002CA054:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA060u); set32(c.r[4], c.r[4].w[0] + 25136u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002CA060u) [[unlikely]] return; }
L_002CA060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CA0E0; } }
L_002CA068:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002CA06C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[19].w[0] + 1328u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[19].w[0] + 1332u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[19].w[0] + 1336u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA090u); st32((c.r[19].w[0] + 1340u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002CA090u) [[unlikely]] return; }
L_002CA090:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 1344u);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[19].w[0] + 1344u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 244u)));
    st32((c.r[19].w[0] + 1348u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    st32((c.r[19].w[0] + 1352u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 252u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA0C0u); st32((c.r[19].w[0] + 1356u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 289u, depth + 1u); else { c.pc = 0x00292750u; return; } if (c.pc != 0x002CA0C0u) [[unlikely]] return; }
L_002CA0C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 1296u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002CA0E0; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA0DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x002CA0DCu) [[unlikely]] return; }
L_002CA0DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CA0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002CA110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[2].d[0] = c.r[2].d[0] | 16706ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA160u); set32(c.r[4], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002CA160u) [[unlikely]] return; }
L_002CA160:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 27712u);
    set32(c.r[3], c.r[3].w[0] + 27724u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42410000u);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 20051ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 40u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 44u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CA1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CA228; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27712u);
    set32(c.r[2], c.r[2].w[0] + 27724u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA1F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002CA1F0u) [[unlikely]] return; }
L_002CA1F0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002CA214; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_002CA214:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CA22C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA228u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002CA228u) [[unlikely]] return; }
L_002CA228:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CA22C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CA240:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA1B0u | kUnwind; return; } goto L_002CA1B0; }
L_002CA250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002CA270u) [[unlikely]] return; }
L_002CA270:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA27Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002CA27Cu) [[unlikely]] return; }
L_002CA27C:
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA28Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x002CA28Cu) [[unlikely]] return; }
L_002CA28C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CA2A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA2C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002CA2C0u) [[unlikely]] return; }
L_002CA2C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA2CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002CA2CCu) [[unlikely]] return; }
L_002CA2CC:
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA2E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002CA2E4u) [[unlikely]] return; }
L_002CA2E4:
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA2F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x002CA2F4u) [[unlikely]] return; }
L_002CA2F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CA310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA32Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002CA32Cu) [[unlikely]] return; }
L_002CA32C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA338u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002CA338u) [[unlikely]] return; }
L_002CA338:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27760u);
    set32(c.r[2], c.r[2].w[0] + 27816u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA35Cu); st32((c.r[28].w[0] - 30264u), 0u);  if (depth < kMaxDepth) unit_006A(c, 231u, depth + 1u); else { c.pc = 0x002CA3D0u; return; } if (c.pc != 0x002CA35Cu) [[unlikely]] return; }
L_002CA35C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CA380:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[28].w[0] - 30260u), 0u);  goto L_002CA3C4; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_002CA3C0; }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[28].w[0] - 30260u), 0u);  goto L_002CA3C4; }
    set32(c.r[3], 0u + 87u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_002CA3B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3C4; } }
L_002CA3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30260u), c.r[3].w[0]);  if (t) { goto L_002CA3C4; } }
L_002CA3C0:
    st32((c.r[28].w[0] - 30260u), c.r[3].w[0]);
    c.budget -= 1;
L_002CA3C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CA3D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30260u), c.r[4].w[0]);  c.pc = t; return; }
L_002CA3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30260u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30264u)));  goto L_002CA420; }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA40Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002CA40Cu) [[unlikely]] return; }
L_002CA40C:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30264u)));
    c.budget -= 5;
L_002CA420:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002CA480; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30260u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  goto L_002CA458; }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA440u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002CA440u) [[unlikely]] return; }
L_002CA440:
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], 0u - 65u);
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002CA47C; } }
L_002CA458:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA464u); set32(c.r[16], ld32((c.r[2].w[0] + 24u)));  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x002CA464u) [[unlikely]] return; }
L_002CA464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA46Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002CA46Cu) [[unlikely]] return; }
L_002CA46C:
    set32(c.r[4], ld32((c.r[17].w[0] + 352u)));
    c.r[6].d[0] = c.r[16].d[0] | 64ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA47Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x002CA47Cu) [[unlikely]] return; }
L_002CA47C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002CA480:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CA490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CA4F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27760u);
    set32(c.r[2], c.r[2].w[0] + 27816u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA4D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002CA4D0u) [[unlikely]] return; }
L_002CA4D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA4DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002CA4DCu) [[unlikely]] return; }
L_002CA4DC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CA4F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA4F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002CA4F4u) [[unlikely]] return; }
L_002CA4F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CA4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CA510:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA490u | kUnwind; return; } goto L_002CA490; }
L_002CA520:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA380u | kUnwind; return; } goto L_002CA380; }
L_002CA530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA54Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002CA54Cu) [[unlikely]] return; }
L_002CA54C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA558u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002CA558u) [[unlikely]] return; }
L_002CA558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 27840u);
    set32(c.r[3], c.r[3].w[0] + 27896u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CA5A0:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_002CA5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CA600; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA5E4u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002CA5E4u) [[unlikely]] return; }
L_002CA5E4:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CA5FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA5FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 259u, depth + 1u); else { c.pc = 0x002CA700u; return; } if (c.pc != 0x002CA5FCu) [[unlikely]] return; }
L_002CA5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CA600:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CA610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CA68C; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA644u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002CA644u) [[unlikely]] return; }
L_002CA644:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], 0u + 7000u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA658u); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002CA658u) [[unlikely]] return; }
L_002CA658:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  goto L_002CA674; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA670u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 260u, depth + 1u); else { c.pc = 0x002CA710u; return; } if (c.pc != 0x002CA670u) [[unlikely]] return; }
L_002CA670:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_002CA674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA67Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002CA67Cu) [[unlikely]] return; }
L_002CA67C:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002CA68C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CA6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CA6F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6D4u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002CA6D4u) [[unlikely]] return; }
L_002CA6D4:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CA6EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 299u, depth + 1u); else { c.pc = 0x002CABF0u; return; } if (c.pc != 0x002CA6ECu) [[unlikely]] return; }
L_002CA6EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CA6F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CA700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CA710:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CAB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA770u); set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002CA770u) [[unlikely]] return; }
L_002CA770:
    set32(c.r[17], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[16], c.r[2].w[0] + 16u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 608u)));
    c.f[22] = 0u;
    set32(c.r[23], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[5].w[0] + 804u);  if (t) { goto L_002CA7E0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1304u)));  goto L_002CA7A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA860; } }
L_002CA7A8:
    c.f[22] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[19].d[0] = c.r[23].d[0] & 8ull;  if (t) { goto L_002CA7CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[21].d[0] = c.r[4].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[3].d[0] | 65535ull;  if (t) { goto L_002CA860; } }
L_002CA7CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF400000u);
    c.r[21].d[0] = c.r[4].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[3].d[0] | 65535ull;  if (t) { goto L_002CA860; } }
L_002CA7E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[22] = ld32((c.r[18].w[0] + 20u));  goto L_002CA848; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA7FCu); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002921E0u; return; } if (c.pc != 0x002CA7FCu) [[unlikely]] return; }
L_002CA7FC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002CA820; }
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA818u); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002CA818u) [[unlikely]] return; }
L_002CA818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[0];  if (t) { goto L_002CA848; } }
L_002CA820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA828u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002921E0u; return; } if (c.pc != 0x002CA828u) [[unlikely]] return; }
L_002CA828:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.f[22] = ld32((c.r[18].w[0] + 20u));  goto L_002CA848; }
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA844u); set32(c.r[4], c.r[2].w[0] + 2072u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002CA844u) [[unlikely]] return; }
L_002CA844:
    c.f[22] = c.f[0];
    c.budget -= 1;
L_002CA848:
    set32(c.r[17], ld32((c.r[20].w[0] + 72u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xCC220000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[19].d[0] = c.r[23].d[0] & 512ull;
    c.r[21].d[0] = c.r[4].d[0] | 8447ull;
    c.r[22].d[0] = c.r[3].d[0] | 8447ull;
    c.budget -= 6;
L_002CA860:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[22]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  goto L_002CAB9C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 1304u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 80u));  goto L_002CA8A8; }
    c.f[21] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA894u); set32(c.r[18], 0u + 7u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002CA894u) [[unlikely]] return; }
L_002CA894:
    set32(c.r[5], c.r[17].w[0] + 1200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA8A0u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002CA8A0u) [[unlikely]] return; }
L_002CA8A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002CA974; } }
L_002CA8A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA8CCu);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002CA8CCu) [[unlikely]] return; }
L_002CA8CC:
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[17], ld32((c.r[20].w[0] + 72u)));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA8E8u); c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002CA8E8u) [[unlikely]] return; }
L_002CA8E8:
    c.f[0] = ld32((c.r[17].w[0] + 1392u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[21] ^ fp::kSign;
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1396u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1400u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1404u));
    st32((c.r[29].w[0] + 220u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA91Cu); set32(c.r[5], c.r[2].w[0] + 1264u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002CA91Cu) [[unlikely]] return; }
L_002CA91C:
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[3] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = ld32((c.r[29].w[0] + 196u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 208u), c.f[4]);
    st32((c.r[29].w[0] + 212u), c.f[2]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA958u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002CA958u) [[unlikely]] return; }
L_002CA958:
    set32(c.r[5], c.r[16].w[0] + 1200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA964u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002CA964u) [[unlikely]] return; }
L_002CA964:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA970u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002CA970u) [[unlikely]] return; }
L_002CA970:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002CA974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA97Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002CA97Cu) [[unlikely]] return; }
L_002CA97C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[18].w[0] - 1u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[20].w[0] + 88u), c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    c.f[20] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[27] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA9ACu); c.f[28] = fp::ee::mul(c.fcr31, c.f[27], c.f[21]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002CA9ACu) [[unlikely]] return; }
L_002CA9AC:
    c.f[26] = fp::ee::div(c.fcr31, c.f[27], c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA9C8u); set32(c.r[4], ld32((c.r[2].w[0] + 40u)));  if (depth < kMaxDepth) unit_000F(c, 45u, depth + 1u); else { c.pc = 0x0015C500u; return; } if (c.pc != 0x002CA9C8u) [[unlikely]] return; }
L_002CA9C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[25] = c.f[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 404u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA08u); c.f[24] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x002CAA08u) [[unlikely]] return; }
L_002CAA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA10u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002CAA10u) [[unlikely]] return; }
L_002CAA10:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[23].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002CAA24u) [[unlikely]] return; }
L_002CAA24:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], 0u + 7000u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA38u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x002CAA38u) [[unlikely]] return; }
L_002CAA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA40u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x002CAA40u) [[unlikely]] return; }
L_002CAA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002CAA48u) [[unlikely]] return; }
L_002CAA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA50u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x002CAA50u) [[unlikely]] return; }
L_002CAA50:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA5Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x002CAA5Cu) [[unlikely]] return; }
L_002CAA5C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 118u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x002CAA68u) [[unlikely]] return; }
L_002CAA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA70u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x002CAA70u) [[unlikely]] return; }
L_002CAA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA78u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 148u, depth + 1u); else { c.pc = 0x0016DBC0u; return; } if (c.pc != 0x002CAA78u) [[unlikely]] return; }
L_002CAA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002CAB54; } }
L_002CAA80:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.f[0] = fp::ee::add(c.fcr31, c.f[24], c.f[28]);  goto L_002CAA98; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[23] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);  if (t) { goto L_002CAAA4; } }
L_002CAA98:
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[25]);
    c.f[23] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 3;
L_002CAAA4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAAB4u); c.f[12] = c.f[27];  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x002CAAB4u) [[unlikely]] return; }
L_002CAAB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.f[21] = c.f[23] ^ fp::kSign;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = 0u;
    c.f[13] = c.f[23];
    c.f[14] = c.f[28];
    c.f[12] = c.f[21];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAADCu); c.f[16] = c.f[15];  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0016DC10u; return; } if (c.pc != 0x002CAADCu) [[unlikely]] return; }
L_002CAADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = 0u;
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.f[16] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.f[13] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB00u); c.f[14] = c.f[28];  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0016DC10u; return; } if (c.pc != 0x002CAB00u) [[unlikely]] return; }
L_002CAB00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[23];
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.f[15] = c.r[2].w[0];
    c.f[13] = c.f[23];
    c.f[16] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB24u); c.f[14] = c.f[28];  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0016DC10u; return; } if (c.pc != 0x002CAB24u) [[unlikely]] return; }
L_002CAB24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.f[12] = c.f[23];
    c.f[13] = c.f[21];
    c.f[14] = c.f[28];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB48u); c.f[16] = c.f[15];  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0016DC10u; return; } if (c.pc != 0x002CAB48u) [[unlikely]] return; }
L_002CAB48:
    c.f[28] = fp::ee::sub(c.fcr31, c.f[28], c.f[20]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[27] = fp::ee::sub(c.fcr31, c.f[27], c.f[26]);
    c.budget -= 3;
L_002CAB54:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CAA80u | kUnwind; return; } goto L_002CAA80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB68u);  if (depth < kMaxDepth) unit_0013(c, 150u, depth + 1u); else { c.pc = 0x0016DBE0u; return; } if (c.pc != 0x002CAB68u) [[unlikely]] return; }
L_002CAB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB70u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x002CAB70u) [[unlikely]] return; }
L_002CAB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB78u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x002CAB78u) [[unlikely]] return; }
L_002CAB78:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002CAB84u) [[unlikely]] return; }
L_002CAB84:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = c.r[23].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB98u); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x002CAB98u) [[unlikely]] return; }
L_002CAB98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_002CAB9C:
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002CABF0:
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], ld32((c.r[5].w[0] + 1304u)));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));  goto L_002CAC68; }
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[6].w[0] + 80u));  goto L_002CAC2C; }
    c.f[3] = 0u;
    c.budget -= 1;
L_002CAC2C:
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.f[2] = ld32((c.r[28].w[0] - 32080u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CACBC; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 80u), c.f[0]);  if (t) { goto L_002CACBC; } }
L_002CAC68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[6].w[0] + 80u));  goto L_002CAC8C; }
    c.f[3] = 0u;
    c.budget -= 1;
L_002CAC8C:
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.f[2] = ld32((c.r[28].w[0] - 32080u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 80u), c.f[1]);  if (t) { goto L_002CACBC; } }
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.budget -= 3;
L_002CACBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CACD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CAD34; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27840u);
    set32(c.r[2], c.r[2].w[0] + 27896u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002CAD10u) [[unlikely]] return; }
L_002CAD10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002CAD1Cu) [[unlikely]] return; }
L_002CAD1C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CAD38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002CAD34u) [[unlikely]] return; }
L_002CAD34:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CAD38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CAD50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CACD0u | kUnwind; return; } goto L_002CACD0; }
L_002CAD58:
    c.budget -= 2;
L_002CAD60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD7Cu); set32(c.r[4], 0u + 744u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002CAD7Cu) [[unlikely]] return; }
L_002CAD7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CADF0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002CAD90; } }
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_002CAD90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[2], c.r[2].w[0] + 16128u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 2048u);
    set32(c.r[6], c.r[6].w[0] + 29856u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CADBCu); set32(c.r[8], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x002CADBCu) [[unlikely]] return; }
L_002CADBC:
    st32((c.r[16].w[0] + 672u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 668u), 0u);
    set32(c.r[4], c.r[16].w[0] + 704u);
    st32((c.r[16].w[0] + 684u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CADD8u); st32((c.r[16].w[0] + 688u), 0u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002CADD8u) [[unlikely]] return; }
L_002CADD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27920u);
    set32(c.r[2], c.r[2].w[0] + 27948u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 6;
L_002CADF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CAE10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CAE34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 136u)));  if (t) { goto L_002CAE38; } }
L_002CAE34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CAE38:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_002CAEB8; }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 96u), 0u);  if (t) { goto L_002CAE6C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002CAE6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CAE6Cu) [[unlikely]] return; }
L_002CAE6C:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE88u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002CAE88u) [[unlikely]] return; }
L_002CAE88:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002CAFC8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002CAFC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAEACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CAEACu) [[unlikely]] return; }
L_002CAEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAFC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002CAEB8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002CAECC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002CAEEC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CAECC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002CAEEC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAEEC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CAEEC:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { set32(c.r[4], 0u + 2u);  goto L_002CAF0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAEFCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002CAEFCu) [[unlikely]] return; }
L_002CAEFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 116u)));  if (t) { goto L_002CAF2C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_002CAF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAF14u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002CAF14u) [[unlikely]] return; }
L_002CAF14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAF1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 290u, depth + 1u); else { c.pc = 0x00266540u; return; } if (c.pc != 0x002CAF1Cu) [[unlikely]] return; }
L_002CAF1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAF2Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x002CAF2Cu) [[unlikely]] return; }
L_002CAF2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002CAF58; }
    set32(c.r[5], ld32((c.r[2].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002CAF54; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAF54u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x002CAF54u) [[unlikely]] return; }
L_002CAF54:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CAF58:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 64u), 0u);  if (t) { goto L_002CAF84; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002CAF84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAF84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CAF84u) [[unlikely]] return; }
L_002CAF84:
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAFA0u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002CAFA0u) [[unlikely]] return; }
L_002CAFA0:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CAFC4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002CAFC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAFC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CAFC4u) [[unlikely]] return; }
L_002CAFC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002CAFC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002CAFE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CB004; } }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CB01C; } }
L_002CB004:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CB018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_002CB01C; } }
L_002CB018:
    c.f[1] = 0u;
    c.budget -= 1;
L_002CB01C:
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB028u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002CB028u) [[unlikely]] return; }
L_002CB028:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002CB038; }
    set32(c.r[4], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 1;
L_002CB038:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002CB050; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CB064; } }
L_002CB050:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002CB060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_002CB064; } }
L_002CB060:
    c.f[12] = 0u;
    c.budget -= 1;
L_002CB064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB06Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 289u, depth + 1u); else { c.pc = 0x00266530u; return; } if (c.pc != 0x002CB06Cu) [[unlikely]] return; }
L_002CB06C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002CB09C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002CB09C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB09Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CB09Cu) [[unlikely]] return; }
L_002CB09C:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0B8u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002CB0B8u) [[unlikely]] return; }
L_002CB0B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CB0E0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002CB0DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CB0DCu) [[unlikely]] return; }
L_002CB0DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CB0E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CB0F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CB110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002CB128; } }
L_002CB110:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_002CB128; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_002CB128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB130u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002CB130u) [[unlikely]] return; }
L_002CB130:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002CB160; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002CB160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB160u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CB160u) [[unlikely]] return; }
L_002CB160:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB17Cu); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002CB17Cu) [[unlikely]] return; }
L_002CB17C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CB1A4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002CB1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB1A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CB1A0u) [[unlikely]] return; }
L_002CB1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CB1A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CB1B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CB1D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 136u)));  if (t) { goto L_002CB1D4; } }
L_002CB1D0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CB1D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002CB1E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002CB1FC; } }
L_002CB1E8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002CB1FC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002CB1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB204u);  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002CB204u) [[unlikely]] return; }
L_002CB204:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002CB234; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002CB234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB234u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CB234u) [[unlikely]] return; }
L_002CB234:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB250u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002CB250u) [[unlikely]] return; }
L_002CB250:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CB278; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002CB274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB274u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CB274u) [[unlikely]] return; }
L_002CB274:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CB278:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CB290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CB2B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 136u)));  if (t) { goto L_002CB2B4; } }
L_002CB2B0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CB2B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002CB2C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002CB2DC; } }
L_002CB2C8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002CB2DC; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_002CB2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB2E4u);  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002CB2E4u) [[unlikely]] return; }
L_002CB2E4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_002CB314; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002CB314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB314u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CB314u) [[unlikely]] return; }
L_002CB314:
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], c.r[16].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB330u); st16((c.r[16].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002CB330u) [[unlikely]] return; }
L_002CB330:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CB358; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002CB354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB354u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CB354u) [[unlikely]] return; }
L_002CB354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CB358:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CB370:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CB398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 136u)));  if (t) { goto L_002CB39C; } }
L_002CB398:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CB39C:
    set32(c.r[3], ld32((c.r[18].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[18].w[0] + 728u));  goto L_002CB6F8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 732u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[18].w[0] + 736u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB3CCu); st32((c.r[18].w[0] + 740u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002CB3CCu) [[unlikely]] return; }
L_002CB3CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { st32((c.r[18].w[0] + 728u), 0u);  goto L_002CB40C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002CB3F4; }
    c.f[0] = ld32((c.r[18].w[0] + 140u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CB408; } }
L_002CB3F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CB404; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 140u));  if (t) { goto L_002CB408; } }
L_002CB404:
    c.f[0] = 0u;
    c.budget -= 1;
L_002CB408:
    st32((c.r[18].w[0] + 728u), c.f[0]);
    c.budget -= 1;
L_002CB40C:
    c.f[1] = ld32((c.r[18].w[0] + 728u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_002CB438; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002CB450; } }
L_002CB438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
L_002CB450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB458u);  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002CB458u) [[unlikely]] return; }
L_002CB458:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], 0u + 2u);  goto L_002CB49C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002CB480; }
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CB494; } }
L_002CB480:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CB490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 160u));  if (t) { goto L_002CB494; } }
L_002CB490:
    c.f[0] = 0u;
    c.budget -= 1;
L_002CB494:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 2;
L_002CB49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB4A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002CB4A4u) [[unlikely]] return; }
L_002CB4A4:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_002CB4BC; } }
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CB4D4; } }
L_002CB4BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CB4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[18].w[0] + 60u));  if (t) { goto L_002CB4D4; } }
L_002CB4D0:
    c.f[3] = 0u;
    c.budget -= 1;
L_002CB4D4:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002CB4EC; }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CB500; } }
L_002CB4EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CB4FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[18].w[0] + 40u));  if (t) { goto L_002CB500; } }
L_002CB4FC:
    c.f[1] = 0u;
    c.budget -= 1;
L_002CB500:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002CB518; }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CB52C; } }
L_002CB518:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CB528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[18].w[0] + 20u));  if (t) { goto L_002CB52C; } }
L_002CB528:
    c.f[2] = 0u;
    c.budget -= 1;
L_002CB52C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 120u), c.f[3]);
    st32((c.r[29].w[0] + 112u), c.f[2]);
    c.f[1] = ld32((c.r[18].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 11;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002CB5C0; }
    st32((c.r[16].w[0] + 48u), c.f[2]);
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[16].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[16].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_002CB5C8; } }
L_002CB5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB5C8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003A(c, 259u, depth + 1u); else { c.pc = 0x0020A630u; return; } if (c.pc != 0x002CB5C8u) [[unlikely]] return; }
L_002CB5C8:
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002CB5E0; }
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CB5F4; } }
L_002CB5E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CB5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[18].w[0] + 120u));  if (t) { goto L_002CB5F4; } }
L_002CB5F0:
    c.f[3] = 0u;
    c.budget -= 1;
L_002CB5F4:
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002CB60C; }
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CB620; } }
L_002CB60C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CB61C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[18].w[0] + 100u));  if (t) { goto L_002CB620; } }
L_002CB61C:
    c.f[1] = 0u;
    c.budget -= 1;
L_002CB620:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002CB638; }
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CB64C; } }
L_002CB638:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CB648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[18].w[0] + 80u));  if (t) { goto L_002CB64C; } }
L_002CB648:
    c.f[2] = 0u;
    c.budget -= 1;
L_002CB64C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[3]);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    c.f[1] = ld32((c.r[18].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 11;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002CB6E0; }
    st32((c.r[16].w[0] + 112u), c.f[2]);
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[16].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[16].w[0] + 140u), c.f[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_002CB6E8; } }
L_002CB6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB6E8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 260u, depth + 1u); else { c.pc = 0x0020A6C0u; return; } if (c.pc != 0x002CB6E8u) [[unlikely]] return; }
L_002CB6E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[18].w[0] + 724u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 728u));
    c.budget -= 4;
L_002CB6F8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], ld32((c.r[18].w[0] + 736u)));  goto L_002CB740; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_002CB730; }
L_002CB730:
    c.f[0] = ld32((c.r[18].w[0] + 728u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 728u), c.f[0]);  if (t) { goto L_002CB7CC; } }
L_002CB740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB748u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002CB748u) [[unlikely]] return; }
L_002CB748:
    set32(c.r[5], ld32((c.r[18].w[0] + 740u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB754u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002CB754u) [[unlikely]] return; }
L_002CB754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB75Cu); set32(c.r[4], ld32((c.r[18].w[0] + 732u)));  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002CB75Cu) [[unlikely]] return; }
L_002CB75C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002CB78C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002CB78C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB78Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CB78Cu) [[unlikely]] return; }
L_002CB78C:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], c.r[18].w[0] + 668u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 700u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB7A8u); st16((c.r[18].w[0] + 700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x002CB7A8u) [[unlikely]] return; }
L_002CB7A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002CB7D0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002CB7CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB7CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CB7CCu) [[unlikely]] return; }
L_002CB7CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002CB7D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002CB7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 724u), 0u);  c.pc = t; return; }
L_002CB800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CB8EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27920u);
    set32(c.r[2], c.r[2].w[0] + 27948u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 704u);
    st32((c.r[17].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB840u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002CB840u) [[unlikely]] return; }
L_002CB840:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002CB8D8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[17].w[0] + 688u);
    set32(c.r[3], c.r[3].w[0] + 16128u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002CB880; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 668u);  goto L_002CB884; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002CB880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB880u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CB880u) [[unlikely]] return; }
L_002CB880:
    set32(c.r[2], c.r[17].w[0] + 668u);
    c.budget -= 1;
L_002CB884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB8BC; } }
    set32(c.r[2], c.r[17].w[0] + 672u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB8BC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CB8BC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002CB8BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB8BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002CB8BCu) [[unlikely]] return; }
L_002CB8BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB8D4u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x002CB8D4u) [[unlikely]] return; }
L_002CB8D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002CB8D8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CB8F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB8ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002CB8ECu) [[unlikely]] return; }
L_002CB8EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CB8F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CB910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CB97C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 27968u);
    set32(c.r[2], c.r[2].w[0] + 27988u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB950u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002CB950u) [[unlikely]] return; }
L_002CB950:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002CB968; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_002CB968:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CB980; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB97Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002CB97Cu) [[unlikely]] return; }
L_002CB97C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CB980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CB9A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 25344u);  c.pc = t; return; }
L_002CB9B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CB910u | kUnwind; return; } goto L_002CB910; }
L_002CB9C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 704u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CB800u | kUnwind; return; } goto L_002CB800; }
L_002CB9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB9ECu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002CB9ECu) [[unlikely]] return; }
L_002CB9EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB9F8u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002CB9F8u) [[unlikely]] return; }
L_002CB9F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 28016u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 28072u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x454D0000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21331ull;
    set32(c.r[4], c.r[4].w[0] + 25552u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA30u); st32((c.r[17].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002CBA30u) [[unlikely]] return; }
L_002CBA30:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CBA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CBAB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28016u);
    set32(c.r[2], c.r[2].w[0] + 28072u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002CBA90u) [[unlikely]] return; }
L_002CBA90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002CBA9Cu) [[unlikely]] return; }
L_002CBA9C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CBAB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBAB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002CBAB4u) [[unlikely]] return; }
L_002CBAB4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CBAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CBAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBAECu); set32(c.r[4], c.r[4].w[0] + 25584u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002CBAECu) [[unlikely]] return; }
L_002CBAEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_002CBB10; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CBB08u) [[unlikely]] return; }
L_002CBB08:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 2;
L_002CBB10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CBB30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CBDA8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002CBD60; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  goto L_002CBD24; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  goto L_002CBCE8; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002CBB90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002CBDAC; } }
L_002CBB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB98u);  if (depth < kMaxDepth) unit_006A(c, 400u, depth + 1u); else { c.pc = 0x002CBDC0u; return; } if (c.pc != 0x002CBB98u) [[unlikely]] return; }
L_002CBB98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBDA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002CBBD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBBB4u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002CBBB4u) [[unlikely]] return; }
L_002CBBB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002CBBC8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CBBD4; } }
L_002CBBC8:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002CBBD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CBDA8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002CBC58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBBF4u); set32(c.r[17], 0u + 2432u);  if (depth < kMaxDepth) unit_00C0(c, 386u, depth + 1u); else { c.pc = 0x00422960u; return; } if (c.pc != 0x002CBBF4u) [[unlikely]] return; }
L_002CBBF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC00u); set32(c.r[5], c.r[2].w[0] + 2432u);  if (depth < kMaxDepth) unit_0056(c, 390u, depth + 1u); else { c.pc = 0x0027B430u; return; } if (c.pc != 0x002CBC00u) [[unlikely]] return; }
L_002CBC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC08u); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 388u, depth + 1u); else { c.pc = 0x004229A0u; return; } if (c.pc != 0x002CBC08u) [[unlikely]] return; }
L_002CBC08:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CBC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC1Cu);  if (depth < kMaxDepth) unit_00C0(c, 388u, depth + 1u); else { c.pc = 0x004229A0u; return; } if (c.pc != 0x002CBC1Cu) [[unlikely]] return; }
L_002CBC1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 25616u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC30u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002CBC30u) [[unlikely]] return; }
L_002CBC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CBDA8; } }
L_002CBC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC40u);  if (depth < kMaxDepth) unit_00C0(c, 388u, depth + 1u); else { c.pc = 0x004229A0u; return; } if (c.pc != 0x002CBC40u) [[unlikely]] return; }
L_002CBC40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC54u); set32(c.r[4], c.r[4].w[0] + 25680u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002CBC54u) [[unlikely]] return; }
L_002CBC54:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002CBC58:
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1180u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], 0u + 200u);  goto L_002CBC84; }
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC80u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002CBC80u) [[unlikely]] return; }
L_002CBC80:
    set32(c.r[4], 0u + 200u);
    c.budget -= 1;
L_002CBC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC8Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002CBC8Cu) [[unlikely]] return; }
L_002CBC8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), c.r[17].w[0]);  goto L_002CBCC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBCA0u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x002CBCA0u) [[unlikely]] return; }
L_002CBCA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBCB8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 220u, depth + 1u); else { c.pc = 0x00415DE0u; return; } if (c.pc != 0x002CBCB8u) [[unlikely]] return; }
L_002CBCB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[17].w[0]);
    c.budget -= 2;
L_002CBCC0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002CBDA8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBCDCu); set32(c.r[5], 0u + 22u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CBCDCu) [[unlikely]] return; }
L_002CBCDC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002CBDA8; } }
L_002CBCE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CBDA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD04u);  if (depth < kMaxDepth) unit_006A(c, 403u, depth + 1u); else { c.pc = 0x002CBF10u; return; } if (c.pc != 0x002CBD04u) [[unlikely]] return; }
L_002CBD04:
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD18u); set32(c.r[5], 0u + 23u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CBD18u) [[unlikely]] return; }
L_002CBD18:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002CBDA8; } }
L_002CBD24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CBDA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD40u);  if (depth < kMaxDepth) unit_006A(c, 405u, depth + 1u); else { c.pc = 0x002CBF90u; return; } if (c.pc != 0x002CBD40u) [[unlikely]] return; }
L_002CBD40:
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD54u); set32(c.r[5], 0u + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CBD54u) [[unlikely]] return; }
L_002CBD54:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002CBDA8; } }
L_002CBD60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CBDA8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 52u)));  goto L_002CBD94; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CBD8Cu) [[unlikely]] return; }
L_002CBD8C:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 2;
L_002CBD94:
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBDA4u); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CBDA4u) [[unlikely]] return; }
L_002CBDA4:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_002CBDA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002CBDAC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CBDC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_002CBDE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CBEFC; } }
L_002CBDE4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CBDF8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CBDF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));  goto L_002CBE08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CBEFC; } }
L_002CBE08:
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CBEFC; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_002CBE34; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CBEFC; } }
L_002CBE34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CBE40; }
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_002CBE40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 128u)));  goto L_002CBE50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CBEFC; } }
L_002CBE50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 76u)));  goto L_002CBE60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CBE80; } }
L_002CBE60:
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002CBE7C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  goto L_002CBE80; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002CBE7C:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002CBE80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[4].w[0] + 116u)));  goto L_002CBE90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CBEFC; } }
L_002CBE90:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_002CBEA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CBEFC; } }
L_002CBEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBEA8u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002CBEA8u) [[unlikely]] return; }
L_002CBEA8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002CBEC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CBEFC; } }
L_002CBEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBEC8u);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x002CBEC8u) [[unlikely]] return; }
L_002CBEC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1180u)));  goto L_002CBED8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CBEFC; } }
L_002CBED8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002CBEFC; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CBEF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CBEFC; } }
L_002CBEF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CBEFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CBF10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));  goto L_002CBF40; }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 6;
L_002CBF40:
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CBF60; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002CBF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBF68u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002CBF68u) [[unlikely]] return; }
L_002CBF68:
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CBF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));  goto L_002CBFC0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 6;
L_002CBFC0:
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CBFE0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002CBFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBFE8u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002CBFE8u) [[unlikely]] return; }
L_002CBFE8:
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    [[clang::musttail]] return unit_006B(c, 1u, depth);
}

}
