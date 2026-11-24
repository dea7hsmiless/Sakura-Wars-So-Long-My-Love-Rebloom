#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A7[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0,
    0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0,
    0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200,
    0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252,
    0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320,
    0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333,
    0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0,
    0, 0, 0, 363, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 386, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388,
    0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0,
    0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003BC000;
    case 2u: goto L_003BC010;
    case 3u: goto L_003BC020;
    case 4u: goto L_003BC030;
    case 5u: goto L_003BC078;
    case 6u: goto L_003BC0B8;
    case 7u: goto L_003BC0F4;
    case 8u: goto L_003BC160;
    case 9u: goto L_003BC178;
    case 10u: goto L_003BC188;
    case 11u: goto L_003BC1C0;
    case 12u: goto L_003BC1D0;
    case 13u: goto L_003BC228;
    case 14u: goto L_003BC238;
    case 15u: goto L_003BC290;
    case 16u: goto L_003BC2A0;
    case 17u: goto L_003BC2B0;
    case 18u: goto L_003BC2E0;
    case 19u: goto L_003BC348;
    case 20u: goto L_003BC3B0;
    case 21u: goto L_003BC418;
    case 22u: goto L_003BC480;
    case 23u: goto L_003BC4E8;
    case 24u: goto L_003BC550;
    case 25u: goto L_003BC5B8;
    case 26u: goto L_003BC620;
    case 27u: goto L_003BC688;
    case 28u: goto L_003BC6A0;
    case 29u: goto L_003BC6B8;
    case 30u: goto L_003BC6C8;
    case 31u: goto L_003BC6D0;
    case 32u: goto L_003BC6E0;
    case 33u: goto L_003BC6E8;
    case 34u: goto L_003BC700;
    case 35u: goto L_003BC718;
    case 36u: goto L_003BC730;
    case 37u: goto L_003BC738;
    case 38u: goto L_003BC760;
    case 39u: goto L_003BC770;
    case 40u: goto L_003BC780;
    case 41u: goto L_003BC790;
    case 42u: goto L_003BC7A0;
    case 43u: goto L_003BC7C0;
    case 44u: goto L_003BC7D0;
    case 45u: goto L_003BC7E8;
    case 46u: goto L_003BC7FC;
    case 47u: goto L_003BC810;
    case 48u: goto L_003BC824;
    case 49u: goto L_003BC844;
    case 50u: goto L_003BC870;
    case 51u: goto L_003BC8B4;
    case 52u: goto L_003BC8CC;
    case 53u: goto L_003BC8E4;
    case 54u: goto L_003BC8F4;
    case 55u: goto L_003BC90C;
    case 56u: goto L_003BC930;
    case 57u: goto L_003BC944;
    case 58u: goto L_003BC990;
    case 59u: goto L_003BC9C8;
    case 60u: goto L_003BC9D0;
    case 61u: goto L_003BC9D8;
    case 62u: goto L_003BC9E0;
    case 63u: goto L_003BC9F0;
    case 64u: goto L_003BCA14;
    case 65u: goto L_003BCA30;
    case 66u: goto L_003BCA38;
    case 67u: goto L_003BCA48;
    case 68u: goto L_003BCA60;
    case 69u: goto L_003BCA70;
    case 70u: goto L_003BCA78;
    case 71u: goto L_003BCA88;
    case 72u: goto L_003BCAA0;
    case 73u: goto L_003BCAAC;
    case 74u: goto L_003BCAB4;
    case 75u: goto L_003BCABC;
    case 76u: goto L_003BCAC4;
    case 77u: goto L_003BCB00;
    case 78u: goto L_003BCB10;
    case 79u: goto L_003BCB44;
    case 80u: goto L_003BCB5C;
    case 81u: goto L_003BCB6C;
    case 82u: goto L_003BCB84;
    case 83u: goto L_003BCB90;
    case 84u: goto L_003BCB98;
    case 85u: goto L_003BCBB0;
    case 86u: goto L_003BCBD8;
    case 87u: goto L_003BCC18;
    case 88u: goto L_003BCC6C;
    case 89u: goto L_003BCCE4;
    case 90u: goto L_003BCD0C;
    case 91u: goto L_003BCD20;
    case 92u: goto L_003BCD3C;
    case 93u: goto L_003BCD44;
    case 94u: goto L_003BCD70;
    case 95u: goto L_003BCD94;
    case 96u: goto L_003BCDA8;
    case 97u: goto L_003BCDC0;
    case 98u: goto L_003BCDE0;
    case 99u: goto L_003BCDFC;
    case 100u: goto L_003BCE10;
    case 101u: goto L_003BCE2C;
    case 102u: goto L_003BCE50;
    case 103u: goto L_003BCE80;
    case 104u: goto L_003BCECC;
    case 105u: goto L_003BCEF0;
    case 106u: goto L_003BCF00;
    case 107u: goto L_003BCF18;
    case 108u: goto L_003BCF30;
    case 109u: goto L_003BCF68;
    case 110u: goto L_003BCF70;
    case 111u: goto L_003BCF8C;
    case 112u: goto L_003BCF98;
    case 113u: goto L_003BCFA8;
    case 114u: goto L_003BCFB8;
    case 115u: goto L_003BCFC0;
    case 116u: goto L_003BCFC8;
    case 117u: goto L_003BCFD8;
    case 118u: goto L_003BCFE8;
    case 119u: goto L_003BCFF8;
    case 120u: goto L_003BD008;
    case 121u: goto L_003BD01C;
    case 122u: goto L_003BD02C;
    case 123u: goto L_003BD048;
    case 124u: goto L_003BD050;
    case 125u: goto L_003BD058;
    case 126u: goto L_003BD068;
    case 127u: goto L_003BD078;
    case 128u: goto L_003BD09C;
    case 129u: goto L_003BD0A8;
    case 130u: goto L_003BD0B0;
    case 131u: goto L_003BD0C4;
    case 132u: goto L_003BD0D4;
    case 133u: goto L_003BD0DC;
    case 134u: goto L_003BD0F8;
    case 135u: goto L_003BD108;
    case 136u: goto L_003BD114;
    case 137u: goto L_003BD120;
    case 138u: goto L_003BD128;
    case 139u: goto L_003BD134;
    case 140u: goto L_003BD148;
    case 141u: goto L_003BD160;
    case 142u: goto L_003BD194;
    case 143u: goto L_003BD1AC;
    case 144u: goto L_003BD1C4;
    case 145u: goto L_003BD1F0;
    case 146u: goto L_003BD21C;
    case 147u: goto L_003BD25C;
    case 148u: goto L_003BD288;
    case 149u: goto L_003BD290;
    case 150u: goto L_003BD2B8;
    case 151u: goto L_003BD2C8;
    case 152u: goto L_003BD2F0;
    case 153u: goto L_003BD31C;
    case 154u: goto L_003BD334;
    case 155u: goto L_003BD350;
    case 156u: goto L_003BD36C;
    case 157u: goto L_003BD39C;
    case 158u: goto L_003BD3AC;
    case 159u: goto L_003BD3B8;
    case 160u: goto L_003BD3D0;
    case 161u: goto L_003BD3F0;
    case 162u: goto L_003BD43C;
    case 163u: goto L_003BD44C;
    case 164u: goto L_003BD45C;
    case 165u: goto L_003BD480;
    case 166u: goto L_003BD500;
    case 167u: goto L_003BD560;
    case 168u: goto L_003BD594;
    case 169u: goto L_003BD59C;
    case 170u: goto L_003BD5C0;
    case 171u: goto L_003BD5C8;
    case 172u: goto L_003BD5F0;
    case 173u: goto L_003BD624;
    case 174u: goto L_003BD658;
    case 175u: goto L_003BD690;
    case 176u: goto L_003BD6A8;
    case 177u: goto L_003BD6C0;
    case 178u: goto L_003BD6F0;
    case 179u: goto L_003BD71C;
    case 180u: goto L_003BD730;
    case 181u: goto L_003BD768;
    case 182u: goto L_003BD77C;
    case 183u: goto L_003BD7A8;
    case 184u: goto L_003BD7CC;
    case 185u: goto L_003BD7F8;
    case 186u: goto L_003BD810;
    case 187u: goto L_003BD844;
    case 188u: goto L_003BD868;
    case 189u: goto L_003BD8AC;
    case 190u: goto L_003BD8C8;
    case 191u: goto L_003BD8E4;
    case 192u: goto L_003BD910;
    case 193u: goto L_003BD944;
    case 194u: goto L_003BD960;
    case 195u: goto L_003BD9A8;
    case 196u: goto L_003BD9B4;
    case 197u: goto L_003BD9D0;
    case 198u: goto L_003BDA14;
    case 199u: goto L_003BDA50;
    case 200u: goto L_003BDA7C;
    case 201u: goto L_003BDA88;
    case 202u: goto L_003BDA94;
    case 203u: goto L_003BDAAC;
    case 204u: goto L_003BDABC;
    case 205u: goto L_003BDACC;
    case 206u: goto L_003BDB10;
    case 207u: goto L_003BDB40;
    case 208u: goto L_003BDB60;
    case 209u: goto L_003BDB78;
    case 210u: goto L_003BDBA0;
    case 211u: goto L_003BDBC8;
    case 212u: goto L_003BDBD8;
    case 213u: goto L_003BDBF0;
    case 214u: goto L_003BDC6C;
    case 215u: goto L_003BDC78;
    case 216u: goto L_003BDC90;
    case 217u: goto L_003BDCF8;
    case 218u: goto L_003BDD04;
    case 219u: goto L_003BDD10;
    case 220u: goto L_003BDDB0;
    case 221u: goto L_003BDDC8;
    case 222u: goto L_003BDDD8;
    case 223u: goto L_003BDE04;
    case 224u: goto L_003BDE10;
    case 225u: goto L_003BDE2C;
    case 226u: goto L_003BDE44;
    case 227u: goto L_003BDE50;
    case 228u: goto L_003BDE60;
    case 229u: goto L_003BDEC8;
    case 230u: goto L_003BDF20;
    case 231u: goto L_003BDF30;
    case 232u: goto L_003BDF84;
    case 233u: goto L_003BDFBC;
    case 234u: goto L_003BDFD0;
    case 235u: goto L_003BE010;
    case 236u: goto L_003BE0BC;
    case 237u: goto L_003BE0C4;
    case 238u: goto L_003BE0E4;
    case 239u: goto L_003BE0F8;
    case 240u: goto L_003BE228;
    case 241u: goto L_003BE2E0;
    case 242u: goto L_003BE304;
    case 243u: goto L_003BE31C;
    case 244u: goto L_003BE32C;
    case 245u: goto L_003BE33C;
    case 246u: goto L_003BE368;
    case 247u: goto L_003BE38C;
    case 248u: goto L_003BE39C;
    case 249u: goto L_003BE400;
    case 250u: goto L_003BE444;
    case 251u: goto L_003BE45C;
    case 252u: goto L_003BE47C;
    case 253u: goto L_003BE488;
    case 254u: goto L_003BE494;
    case 255u: goto L_003BE4BC;
    case 256u: goto L_003BE4EC;
    case 257u: goto L_003BE510;
    case 258u: goto L_003BE558;
    case 259u: goto L_003BE568;
    case 260u: goto L_003BE578;
    case 261u: goto L_003BE6C0;
    case 262u: goto L_003BE6D0;
    case 263u: goto L_003BE6F8;
    case 264u: goto L_003BE708;
    case 265u: goto L_003BE720;
    case 266u: goto L_003BE754;
    case 267u: goto L_003BE76C;
    case 268u: goto L_003BE780;
    case 269u: goto L_003BE798;
    case 270u: goto L_003BE7C0;
    case 271u: goto L_003BE7D8;
    case 272u: goto L_003BE7F4;
    case 273u: goto L_003BE80C;
    case 274u: goto L_003BE820;
    case 275u: goto L_003BE830;
    case 276u: goto L_003BE860;
    case 277u: goto L_003BE89C;
    case 278u: goto L_003BE8AC;
    case 279u: goto L_003BE8C0;
    case 280u: goto L_003BE900;
    case 281u: goto L_003BE92C;
    case 282u: goto L_003BE978;
    case 283u: goto L_003BE998;
    case 284u: goto L_003BE9B0;
    case 285u: goto L_003BE9D0;
    case 286u: goto L_003BE9E8;
    case 287u: goto L_003BEA78;
    case 288u: goto L_003BEAD4;
    case 289u: goto L_003BEB38;
    case 290u: goto L_003BEB54;
    case 291u: goto L_003BEB60;
    case 292u: goto L_003BEBE0;
    case 293u: goto L_003BEC0C;
    case 294u: goto L_003BEC18;
    case 295u: goto L_003BEC30;
    case 296u: goto L_003BEC50;
    case 297u: goto L_003BEC90;
    case 298u: goto L_003BECA4;
    case 299u: goto L_003BECC0;
    case 300u: goto L_003BECD8;
    case 301u: goto L_003BED08;
    case 302u: goto L_003BED24;
    case 303u: goto L_003BED40;
    case 304u: goto L_003BED5C;
    case 305u: goto L_003BED78;
    case 306u: goto L_003BEDB0;
    case 307u: goto L_003BEDD8;
    case 308u: goto L_003BEDF0;
    case 309u: goto L_003BEE0C;
    case 310u: goto L_003BEE40;
    case 311u: goto L_003BEEC8;
    case 312u: goto L_003BEED4;
    case 313u: goto L_003BEEE8;
    case 314u: goto L_003BEEF8;
    case 315u: goto L_003BEF18;
    case 316u: goto L_003BEF34;
    case 317u: goto L_003BEF48;
    case 318u: goto L_003BEFC0;
    case 319u: goto L_003BEFDC;
    case 320u: goto L_003BEFFC;
    case 321u: goto L_003BF018;
    case 322u: goto L_003BF024;
    case 323u: goto L_003BF03C;
    case 324u: goto L_003BF050;
    case 325u: goto L_003BF064;
    case 326u: goto L_003BF07C;
    case 327u: goto L_003BF090;
    case 328u: goto L_003BF0D8;
    case 329u: goto L_003BF0E4;
    case 330u: goto L_003BF0FC;
    case 331u: goto L_003BF130;
    case 332u: goto L_003BF170;
    case 333u: goto L_003BF17C;
    case 334u: goto L_003BF1A0;
    case 335u: goto L_003BF1D0;
    case 336u: goto L_003BF2D0;
    case 337u: goto L_003BF39C;
    case 338u: goto L_003BF3D0;
    case 339u: goto L_003BF428;
    case 340u: goto L_003BF434;
    case 341u: goto L_003BF440;
    case 342u: goto L_003BF470;
    case 343u: goto L_003BF4A0;
    case 344u: goto L_003BF4C0;
    case 345u: goto L_003BF4F4;
    case 346u: goto L_003BF4FC;
    case 347u: goto L_003BF520;
    case 348u: goto L_003BF528;
    case 349u: goto L_003BF534;
    case 350u: goto L_003BF564;
    case 351u: goto L_003BF5B0;
    case 352u: goto L_003BF5F4;
    case 353u: goto L_003BF610;
    case 354u: goto L_003BF618;
    case 355u: goto L_003BF628;
    case 356u: goto L_003BF630;
    case 357u: goto L_003BF638;
    case 358u: goto L_003BF65C;
    case 359u: goto L_003BF68C;
    case 360u: goto L_003BF6AC;
    case 361u: goto L_003BF6E0;
    case 362u: goto L_003BF6E8;
    case 363u: goto L_003BF70C;
    case 364u: goto L_003BF714;
    case 365u: goto L_003BF720;
    case 366u: goto L_003BF760;
    case 367u: goto L_003BF7B8;
    case 368u: goto L_003BF7D4;
    case 369u: goto L_003BF7F4;
    case 370u: goto L_003BF844;
    case 371u: goto L_003BF850;
    case 372u: goto L_003BF870;
    case 373u: goto L_003BF878;
    case 374u: goto L_003BF8C4;
    case 375u: goto L_003BF8E8;
    case 376u: goto L_003BF924;
    case 377u: goto L_003BF9B0;
    case 378u: goto L_003BFA00;
    case 379u: goto L_003BFA54;
    case 380u: goto L_003BFAAC;
    case 381u: goto L_003BFABC;
    case 382u: goto L_003BFAFC;
    case 383u: goto L_003BFB30;
    case 384u: goto L_003BFB60;
    case 385u: goto L_003BFB68;
    case 386u: goto L_003BFB74;
    case 387u: goto L_003BFBBC;
    case 388u: goto L_003BFBFC;
    case 389u: goto L_003BFC08;
    case 390u: goto L_003BFC14;
    case 391u: goto L_003BFC28;
    case 392u: goto L_003BFC40;
    case 393u: goto L_003BFC6C;
    case 394u: goto L_003BFC88;
    case 395u: goto L_003BFC9C;
    case 396u: goto L_003BFCD4;
    case 397u: goto L_003BFCF0;
    case 398u: goto L_003BFD08;
    case 399u: goto L_003BFD40;
    case 400u: goto L_003BFD70;
    case 401u: goto L_003BFD78;
    case 402u: goto L_003BFD84;
    case 403u: goto L_003BFDB4;
    case 404u: goto L_003BFDD0;
    case 405u: goto L_003BFE00;
    case 406u: goto L_003BFE30;
    case 407u: goto L_003BFE38;
    case 408u: goto L_003BFE40;
    case 409u: goto L_003BFE70;
    case 410u: goto L_003BFE88;
    case 411u: goto L_003BFEC0;
    case 412u: goto L_003BFEEC;
    case 413u: goto L_003BFF00;
    case 414u: goto L_003BFFC8;
    default: bad_entry(c, 0x003BC000u); return;
    }
L_003BC000:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBE40u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 383u, depth); }
L_003BC010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22104u);  c.pc = t; return; }
L_003BC020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC030u);  if (depth < kMaxDepth) unit_00A7(c, 2u, depth + 1u); else { c.pc = 0x003BC010u; return; } if (c.pc != 0x003BC030u) [[unlikely]] return; }
L_003BC030:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 12852u);
    set32(c.r[5], c.r[5].w[0] - 12528u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], 0u + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_003BC068; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB780u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 343u, depth); }
L_003BC068:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC078:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 12852u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003BC0A8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7A0u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 344u, depth); }
L_003BC0A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC0B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 100u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[6], 0u + 8u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003BC144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC0F4u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003BC0F4u) [[unlikely]] return; }
L_003BC0F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BC118; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBCE8u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 372u, depth); }
L_003BC118:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003BC140; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBC90u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 368u, depth); }
L_003BC140:
    set32(c.r[2], 0u - 100u);
    c.budget -= 1;
L_003BC144:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BC160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 100u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BC178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC178u);  if (depth < kMaxDepth) unit_00A6(c, 379u, depth + 1u); else { c.pc = 0x003BBDD8u; return; } if (c.pc != 0x003BC178u) [[unlikely]] return; }
L_003BC178:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003BC1AC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003BC1C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BC1B8; } }
L_003BC1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003BC1C0; } }
    c.budget -= 1;
L_003BC1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC1C0u);  if (depth < kMaxDepth) unit_00A6(c, 381u, depth + 1u); else { c.pc = 0x003BBDF8u; return; } if (c.pc != 0x003BC1C0u) [[unlikely]] return; }
L_003BC1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC1D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[12].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003BC218; } }
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - 100u);  goto L_003BC228; }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 100u);  if (t) { goto L_003BC228; } }
    c.budget -= 2;
    { const bool t = c.r[10].sd[0] < 0;  if (t) { goto L_003BC228; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BC22C; } }
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0;  if (t) { goto L_003BC220; } }
L_003BC218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003BC228; } }
L_003BC220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC228u);  if (depth < kMaxDepth) unit_00A6(c, 383u, depth + 1u); else { c.pc = 0x003BBE40u; return; } if (c.pc != 0x003BC228u) [[unlikely]] return; }
L_003BC228:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BC22C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC238:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[12].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003BC280; } }
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - 100u);  goto L_003BC290; }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 100u);  if (t) { goto L_003BC290; } }
    c.budget -= 2;
    { const bool t = c.r[10].sd[0] < 0;  if (t) { goto L_003BC290; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BC294; } }
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0;  if (t) { goto L_003BC288; } }
L_003BC280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003BC290; } }
L_003BC288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC290u);  if (depth < kMaxDepth) unit_00A6(c, 390u, depth + 1u); else { c.pc = 0x003BBFF8u; return; } if (c.pc != 0x003BC290u) [[unlikely]] return; }
L_003BC290:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BC294:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC2A0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003BC2D4; } }
    set32(c.r[2], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 2;
L_003BC2B0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_003BC2D8; } }
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] + c.r[7].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC2B0u | kUnwind; return; } goto L_003BC2B0; }
L_003BC2D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003BC2D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BC2E0:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003BC348:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 5u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003BC3B0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003BC418:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 7u));
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003BC480:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003BC4E8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003BC550:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003BC5B8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 2u));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003BC620:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 7u));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003BC688:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C430u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 28u, depth); }
L_003BC6A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C448u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 29u, depth); }
L_003BC6B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
L_003BC6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC6D0u);  if (depth < kMaxDepth) unit_0093(c, 430u, depth + 1u); else { c.pc = 0x0036FFB0u; return; } if (c.pc != 0x003BC6D0u) [[unlikely]] return; }
L_003BC6D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC6C8u | kUnwind; return; } goto L_003BC6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC6E0u);  if (depth < kMaxDepth) unit_0097(c, 28u, depth + 1u); else { c.pc = 0x0037C430u; return; } if (c.pc != 0x003BC6E0u) [[unlikely]] return; }
L_003BC6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC6E8u);  if (depth < kMaxDepth) unit_0093(c, 430u, depth + 1u); else { c.pc = 0x0036FFB0u; return; } if (c.pc != 0x003BC6E8u) [[unlikely]] return; }
L_003BC6E8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C448u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 29u, depth); }
L_003BC718:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036FFC0u | kUnwind; return; } [[clang::musttail]] return unit_0093(c, 431u, depth); }
L_003BC730:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_003BC738:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7552ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC738u | kUnwind; return; } goto L_003BC738; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BC760:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 12896u);  c.pc = t; return; }
L_003BC770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14672u);  c.pc = t; return; }
L_003BC780:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30220u)));  goto L_003BC790; }
L_003BC790:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_003BC7A0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30220u)));
    c.budget -= 6;
    { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_003BCBB0; }
L_003BC7C0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30220u)));  goto L_003BCD20; }
L_003BC7D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC7E8u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003BC7E8u) [[unlikely]] return; }
L_003BC7E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 30220u), c.r[2].w[0]);  goto L_003BC800; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC7FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 47u, depth + 1u); else { c.pc = 0x003BC810u; return; } if (c.pc != 0x003BC7FCu) [[unlikely]] return; }
L_003BC7FC:
    st32((c.r[28].w[0] - 30220u), c.r[2].w[0]);
    c.budget -= 1;
L_003BC800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BC810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC824u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x003BC824u) [[unlikely]] return; }
L_003BC824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 4848u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC844u); st32((c.r[16].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_008B(c, 247u, depth + 1u); else { c.pc = 0x0034E870u; return; } if (c.pc != 0x003BC844u) [[unlikely]] return; }
L_003BC844:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BC870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BC90C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 4848u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  goto L_003BC8BC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC8B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BC8B4u) [[unlikely]] return; }
L_003BC8B4:
    st32((c.r[17].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 2;
L_003BC8BC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_003BC8D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC8CCu);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x001B8190u; return; } if (c.pc != 0x003BC8CCu) [[unlikely]] return; }
L_003BC8CC:
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 2;
L_003BC8D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003BC8EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC8E4u);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x001B8190u; return; } if (c.pc != 0x003BC8E4u) [[unlikely]] return; }
L_003BC8E4:
    st32((c.r[17].w[0] + 76u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003BC8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC8F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003BC8F4u) [[unlikely]] return; }
L_003BC8F4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003BC910; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC90Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003BC90Cu) [[unlikely]] return; }
L_003BC90C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BC910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BC930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC944u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x003BC944u) [[unlikely]] return; }
L_003BC944:
    c.r[3].d[0] = c.r[2].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 4000u);  goto L_003BC964; }
    c.r[1].d[0] = c.r[2].sd[0] < 2000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BC960; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_003BC960:
    set32(c.r[3], 0u + 4000u);
    c.budget -= 1;
L_003BC964:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003BC974; }
    set32(c.r[16], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003BC974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BC990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BCAC4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 24256u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_00A7[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BC9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC9D0u);  if (depth < kMaxDepth) unit_008B(c, 294u, depth + 1u); else { c.pc = 0x0034EB80u; return; } if (c.pc != 0x003BC9D0u) [[unlikely]] return; }
L_003BC9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC9D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 293u, depth + 1u); else { c.pc = 0x0034EB60u; return; } if (c.pc != 0x003BC9D8u) [[unlikely]] return; }
L_003BC9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC9E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 56u, depth + 1u); else { c.pc = 0x003BC930u; return; } if (c.pc != 0x003BC9E0u) [[unlikely]] return; }
L_003BC9E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 3u);  goto L_003BCA28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC9F0u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003BC9F0u) [[unlikely]] return; }
L_003BC9F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), c.r[4].w[0]);  goto L_003BCA1C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 24608u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCA14u); set32(c.r[7], c.r[7].w[0] + 24621u);  if (depth < kMaxDepth) unit_00A7(c, 94u, depth + 1u); else { c.pc = 0x003BCD70u; return; } if (c.pc != 0x003BCA14u) [[unlikely]] return; }
L_003BCA14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.budget -= 2;
L_003BCA1C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BCAC4; } }
L_003BCA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BCAC4; } }
L_003BCA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCA38u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_008B(c, 324u, depth + 1u); else { c.pc = 0x0034EE80u; return; } if (c.pc != 0x003BCA38u) [[unlikely]] return; }
L_003BCA38:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_003BCAC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCA48u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_008B(c, 323u, depth + 1u); else { c.pc = 0x0034EE70u; return; } if (c.pc != 0x003BCA48u) [[unlikely]] return; }
L_003BCA48:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCA60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BCA60u) [[unlikely]] return; }
L_003BCA60:
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BCAC4; } }
L_003BCA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCA78u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_008B(c, 324u, depth + 1u); else { c.pc = 0x0034EE80u; return; } if (c.pc != 0x003BCA78u) [[unlikely]] return; }
L_003BCA78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BCAC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCA88u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_008B(c, 323u, depth + 1u); else { c.pc = 0x0034EE70u; return; } if (c.pc != 0x003BCA88u) [[unlikely]] return; }
L_003BCA88:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCAA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BCAA0u) [[unlikely]] return; }
L_003BCAA0:
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
L_003BCAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCAB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0014EF10u; return; } if (c.pc != 0x003BCAB4u) [[unlikely]] return; }
L_003BCAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCABCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 141u, depth + 1u); else { c.pc = 0x0014EEF0u; return; } if (c.pc != 0x003BCABCu) [[unlikely]] return; }
L_003BCABC:
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_003BCAC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_003BCAC8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_003BCB54; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_003BCAF0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003BCBA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BCB9C; } }
L_003BCAF0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 88u);  goto L_003BCB08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB00u);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x001B8190u; return; } if (c.pc != 0x003BCB00u) [[unlikely]] return; }
L_003BCB00:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[4], 0u + 88u);
    c.budget -= 2;
L_003BCB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB10u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003BCB10u) [[unlikely]] return; }
L_003BCB10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  goto L_003BCB48; }
    set32(c.r[7], ld32((c.r[16].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + 15584u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB44u); set32(c.r[6], c.r[6].w[0] + 24608u);  if (depth < kMaxDepth) unit_00A7(c, 94u, depth + 1u); else { c.pc = 0x003BCD70u; return; } if (c.pc != 0x003BCB44u) [[unlikely]] return; }
L_003BCB44:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_003BCB48:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
L_003BCB54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB5Cu);  if (depth < kMaxDepth) unit_008B(c, 324u, depth + 1u); else { c.pc = 0x0034EE80u; return; } if (c.pc != 0x003BCB5Cu) [[unlikely]] return; }
L_003BCB5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BCB9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB6Cu); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_008B(c, 323u, depth + 1u); else { c.pc = 0x0034EE70u; return; } if (c.pc != 0x003BCB6Cu) [[unlikely]] return; }
L_003BCB6C:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BCB84u) [[unlikely]] return; }
L_003BCB84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB90u); st32((c.r[16].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0014EF10u; return; } if (c.pc != 0x003BCB90u) [[unlikely]] return; }
L_003BCB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 141u, depth + 1u); else { c.pc = 0x0014EEF0u; return; } if (c.pc != 0x003BCB98u) [[unlikely]] return; }
L_003BCB98:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_003BCB9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BCBA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BCBB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1000ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BCBE0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003BCD10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCBD8u);  if (depth < kMaxDepth) unit_0026(c, 24u, depth + 1u); else { c.pc = 0x001B81B0u; return; } if (c.pc != 0x003BCBD8u) [[unlikely]] return; }
L_003BCBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BCD0C; } }
L_003BCBE0:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(20000ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1000ll) ? 1ull : 0ull;  goto L_003BCC24; }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(30000ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BCC20; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BCD0C; } }
    set32(c.r[2], 0u + 20000u);
    mmi::divu(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC18u);  if (depth < kMaxDepth) unit_0026(c, 24u, depth + 1u); else { c.pc = 0x001B81B0u; return; } if (c.pc != 0x003BCC18u) [[unlikely]] return; }
L_003BCC18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BCD0C; } }
L_003BCC20:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1000ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003BCC24:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = 0ull | 41000ull;  goto L_003BCC78; }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9000ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BCC74; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BCD0C; } }
    set32(c.r[2], 0u + 1000u);
    mmi::divu(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC6Cu); set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 24u, depth + 1u); else { c.pc = 0x001B81B0u; return; } if (c.pc != 0x003BCC6Cu) [[unlikely]] return; }
L_003BCC6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BCD0C; } }
L_003BCC74:
    c.r[3].d[0] = 0ull | 41000ull;
    c.budget -= 1;
L_003BCC78:
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9001ll) ? 1ull : 0ull;  goto L_003BCCF0; }
    c.r[1].d[0] = 0ull | 41999ull;
    c.r[1].d[0] = c.r[5].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BCCEC; } }
    set32(c.r[9], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_003BCD0C; } }
    set32(c.r[8], 0u + 1000u);
    set32(c.r[3], 0u + 41u);
    mmi::divu(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_003BCD0C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BCD0C; } }
    set32(c.r[2], c.r[8].w[0] << 5);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCCE4u); set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 24u, depth + 1u); else { c.pc = 0x001B81B0u; return; } if (c.pc != 0x003BCCE4u) [[unlikely]] return; }
L_003BCCE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BCD0C; } }
L_003BCCEC:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9001ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003BCCF0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003BCD0C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BCD0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD0Cu); set32(c.r[5], c.r[5].w[0] - 8950u);  if (depth < kMaxDepth) unit_0026(c, 24u, depth + 1u); else { c.pc = 0x001B81B0u; return; } if (c.pc != 0x003BCD0Cu) [[unlikely]] return; }
L_003BCD0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BCD10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BCD20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 294u, depth + 1u); else { c.pc = 0x0034EB80u; return; } if (c.pc != 0x003BCD3Cu) [[unlikely]] return; }
L_003BCD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 293u, depth + 1u); else { c.pc = 0x0034EB60u; return; } if (c.pc != 0x003BCD44u) [[unlikely]] return; }
L_003BCD44:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BCD70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD94u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x003BCD94u) [[unlikely]] return; }
L_003BCD94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCDA8u); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 102u, depth + 1u); else { c.pc = 0x003BCE50u; return; } if (c.pc != 0x003BCDA8u) [[unlikely]] return; }
L_003BCDA8:
    st32((c.r[18].w[0] + 52u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 56u), 0u);
    st32((c.r[18].w[0] + 60u), c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCDC0u); st32((c.r[18].w[0] + 64u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_008B(c, 294u, depth + 1u); else { c.pc = 0x0034EB80u; return; } if (c.pc != 0x003BCDC0u) [[unlikely]] return; }
L_003BCDC0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BCDE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCDFCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x003BCDFCu) [[unlikely]] return; }
L_003BCDFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE10u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 102u, depth + 1u); else { c.pc = 0x003BCE50u; return; } if (c.pc != 0x003BCE10u) [[unlikely]] return; }
L_003BCE10:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE2Cu); st32((c.r[17].w[0] + 76u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_008B(c, 294u, depth + 1u); else { c.pc = 0x0034EB80u; return; } if (c.pc != 0x003BCE2Cu) [[unlikely]] return; }
L_003BCE2C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BCE50:
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), 0u);  c.pc = t; return; }
L_003BCE80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BCF18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 4912u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_003BCED4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 68u), 0u);  goto L_003BCED0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCECCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BCECCu) [[unlikely]] return; }
L_003BCECC:
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 1;
L_003BCED0:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_003BCED4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003BCEF8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BCEF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCEF0u);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x003BCEF0u) [[unlikely]] return; }
L_003BCEF0:
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 1;
L_003BCEF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BCEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003BCF00u) [[unlikely]] return; }
L_003BCF00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003BCF1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003BCF18u) [[unlikely]] return; }
L_003BCF18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BCF1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BCF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BD148; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 24640u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_00A7[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BCF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF70u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003BCF70u) [[unlikely]] return; }
L_003BCF70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  goto L_003BCF90; }
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF8Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 87u, depth + 1u); else { c.pc = 0x001809E0u; return; } if (c.pc != 0x003BCF8Cu) [[unlikely]] return; }
L_003BCF8C:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_003BCF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x003BCF98u) [[unlikely]] return; }
L_003BCF98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_003BCFB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 141u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x003BCFA8u) [[unlikely]] return; }
L_003BCFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BD14C; } }
L_003BCFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFB8u);  if (depth < kMaxDepth) unit_0018(c, 108u, depth + 1u); else { c.pc = 0x00180D10u; return; } if (c.pc != 0x003BCFB8u) [[unlikely]] return; }
L_003BCFB8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_003BCFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFC8u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x003BCFC8u) [[unlikely]] return; }
L_003BCFC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_003BCFE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 141u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x003BCFD8u) [[unlikely]] return; }
L_003BCFD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD148; } }
L_003BCFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFE8u);  if (depth < kMaxDepth) unit_008B(c, 444u, depth + 1u); else { c.pc = 0x0034F8B0u; return; } if (c.pc != 0x003BCFE8u) [[unlikely]] return; }
L_003BCFE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFF8u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0018(c, 116u, depth + 1u); else { c.pc = 0x00180DD0u; return; } if (c.pc != 0x003BCFF8u) [[unlikely]] return; }
L_003BCFF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003BD010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD008u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 141u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x003BD008u) [[unlikely]] return; }
L_003BD008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD148; } }
L_003BD010:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD01Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x003BD01Cu) [[unlikely]] return; }
L_003BD01C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_003BD034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD02Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 141u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x003BD02Cu) [[unlikely]] return; }
L_003BD02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD148; } }
L_003BD034:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD048u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x00180D40u; return; } if (c.pc != 0x003BD048u) [[unlikely]] return; }
L_003BD048:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_003BD050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD058u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x003BD058u) [[unlikely]] return; }
L_003BD058:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_003BD070; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD068u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 141u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x003BD068u) [[unlikely]] return; }
L_003BD068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD148; } }
L_003BD070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD078u);  if (depth < kMaxDepth) unit_008B(c, 444u, depth + 1u); else { c.pc = 0x0034F8B0u; return; } if (c.pc != 0x003BD078u) [[unlikely]] return; }
L_003BD078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD148; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), 0u);  goto L_003BD0A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD09Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD09Cu) [[unlikely]] return; }
L_003BD09C:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 1;
L_003BD0A0:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_003BD0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD0B0u);  if (depth < kMaxDepth) unit_0026(c, 20u, depth + 1u); else { c.pc = 0x001B8160u; return; } if (c.pc != 0x003BD0B0u) [[unlikely]] return; }
L_003BD0B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD148; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD0C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 21u, depth + 1u); else { c.pc = 0x001B8170u; return; } if (c.pc != 0x003BD0C4u) [[unlikely]] return; }
L_003BD0C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003BD148; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_003BD0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD0DCu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0026(c, 23u, depth + 1u); else { c.pc = 0x001B81A0u; return; } if (c.pc != 0x003BD0DCu) [[unlikely]] return; }
L_003BD0DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD148; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003BD100; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD0F8u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x003BD0F8u) [[unlikely]] return; }
L_003BD0F8:
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003BD100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD108u);  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0014EF10u; return; } if (c.pc != 0x003BD108u) [[unlikely]] return; }
L_003BD108:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BD148; } }
L_003BD114:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD120u); set32(c.r[4], c.r[4].w[0] + 24688u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x003BD120u) [[unlikely]] return; }
L_003BD120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD128u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 446u, depth + 1u); else { c.pc = 0x0034F8E0u; return; } if (c.pc != 0x003BD128u) [[unlikely]] return; }
L_003BD128:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BD148; } }
L_003BD134:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { st32((c.r[16].w[0] + 52u), 0u);  goto L_003BD148; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_003BD148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BD14C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BD160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_003BD19C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), 0u);  goto L_003BD198; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD194u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD194u) [[unlikely]] return; }
L_003BD194:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 1;
L_003BD198:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_003BD19C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 64u)));  goto L_003BD1B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD1ACu);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x003BD1ACu) [[unlikely]] return; }
L_003BD1AC:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 2;
L_003BD1B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD1C4u); set32(c.r[5], c.r[5].w[0] + 24714u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x003BD1C4u) [[unlikely]] return; }
L_003BD1C4:
    set32(c.r[4], 0u + 8u);
    set32(c.r[3], 0u + 120u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BD1F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD21Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 296u, depth + 1u); else { c.pc = 0x003C35C0u; return; } if (c.pc != 0x003BD21Cu) [[unlikely]] return; }
L_003BD21C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 4968u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 212u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 216u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    st32((c.r[17].w[0] + 220u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 200u), 0u);
    st16((c.r[17].w[0] + 244u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD25Cu); st32((c.r[17].w[0] + 228u), 0u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003BD25Cu) [[unlikely]] return; }
L_003BD25C:
    st32((c.r[17].w[0] + 232u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 236u), 0u);
    st32((c.r[17].w[0] + 240u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[17].w[0] + 208u), c.r[3].w[0]);
    st16((c.r[17].w[0] + 246u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD288u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 165u, depth + 1u); else { c.pc = 0x003BD480u; return; } if (c.pc != 0x003BD288u) [[unlikely]] return; }
L_003BD288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD290u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 166u, depth + 1u); else { c.pc = 0x003BD500u; return; } if (c.pc != 0x003BD290u) [[unlikely]] return; }
L_003BD290:
    st32((c.r[17].w[0] + 180u), 0u);
    st32((c.r[17].w[0] + 184u), 0u);
    st32((c.r[17].w[0] + 188u), 0u);
    st32((c.r[17].w[0] + 192u), 0u);
    st32((c.r[17].w[0] + 196u), 0u);
    st32((c.r[17].w[0] + 204u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD2B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 161u, depth + 1u); else { c.pc = 0x003BD3F0u; return; } if (c.pc != 0x003BD2B8u) [[unlikely]] return; }
L_003BD2B8:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD2C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 199u, depth + 1u); else { c.pc = 0x003BDA50u; return; } if (c.pc != 0x003BD2C8u) [[unlikely]] return; }
L_003BD2C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BD2F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BD3D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 4968u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD31Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 207u, depth + 1u); else { c.pc = 0x003BDB40u; return; } if (c.pc != 0x003BD31Cu) [[unlikely]] return; }
L_003BD31C:
    set32(c.r[5], ld32((c.r[17].w[0] + 236u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 232u)));  goto L_003BD33C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD334u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003BD334u) [[unlikely]] return; }
L_003BD334:
    st32((c.r[17].w[0] + 236u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 232u)));
    c.budget -= 2;
L_003BD33C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 240u)));  goto L_003BD358; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD350u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003BD350u) [[unlikely]] return; }
L_003BD350:
    st32((c.r[17].w[0] + 232u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 2;
L_003BD358:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 176u)));  goto L_003BD374; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD36Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003BD36Cu) [[unlikely]] return; }
L_003BD36C:
    st32((c.r[17].w[0] + 240u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 2;
L_003BD374:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003BD3A4; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003BD394; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BD3B0; } }
L_003BD394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD39Cu);  if (depth < kMaxDepth) unit_00A7(c, 178u, depth + 1u); else { c.pc = 0x003BD6F0u; return; } if (c.pc != 0x003BD39Cu) [[unlikely]] return; }
L_003BD39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD3AC; } }
L_003BD3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD3ACu);  if (depth < kMaxDepth) unit_00A7(c, 192u, depth + 1u); else { c.pc = 0x003BD910u; return; } if (c.pc != 0x003BD3ACu) [[unlikely]] return; }
L_003BD3AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BD3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD3B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 297u, depth + 1u); else { c.pc = 0x003C35E0u; return; } if (c.pc != 0x003BD3B8u) [[unlikely]] return; }
L_003BD3B8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003BD3D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD3D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003BD3D0u) [[unlikely]] return; }
L_003BD3D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BD3D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BD3F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 128u)));
    c.budget -= 7;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003BD464; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_003BD454; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_003BD444; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003BD434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BD46C; } }
L_003BD434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD43Cu);  if (depth < kMaxDepth) unit_00A7(c, 172u, depth + 1u); else { c.pc = 0x003BD5F0u; return; } if (c.pc != 0x003BD43Cu) [[unlikely]] return; }
L_003BD43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD468; } }
L_003BD444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD44Cu);  if (depth < kMaxDepth) unit_00A7(c, 186u, depth + 1u); else { c.pc = 0x003BD810u; return; } if (c.pc != 0x003BD44Cu) [[unlikely]] return; }
L_003BD44C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD468; } }
L_003BD454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD45Cu);  if (depth < kMaxDepth) unit_00A7(c, 197u, depth + 1u); else { c.pc = 0x003BD9D0u; return; } if (c.pc != 0x003BD45Cu) [[unlikely]] return; }
L_003BD45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD468; } }
L_003BD464:
    st32((c.r[4].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 1;
L_003BD468:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BD46C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BD480:
    st16((c.r[4].w[0] + 168u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 112u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    set32(c.r[8], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 128u)));
    st32((c.r[4].w[0] + 124u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[8], c.r[8].w[0] + 132u);
    st32((c.r[4].w[0] + 128u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 92u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 140u), 0u);
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0] + 148u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 152u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 156u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 160u), c.r[7].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[6].w[0]));  c.pc = t; return; }
L_003BD500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 220u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 20u)));
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BD538; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 224u), c.r[3].w[0]);  if (t) { goto L_003BD5D4; } }
L_003BD538:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);  goto L_003BD550; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 224u), c.f[2]);  if (t) { goto L_003BD5D4; } }
L_003BD550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD560u); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BD560u) [[unlikely]] return; }
L_003BD560:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[17].w[0] + 16u));  goto L_003BD5A4; }
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD594u); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BD594u) [[unlikely]] return; }
L_003BD594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD59Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003BD59Cu) [[unlikely]] return; }
L_003BD59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_003BD5C8; } }
L_003BD5A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD5C0u); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BD5C0u) [[unlikely]] return; }
L_003BD5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD5C8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003BD5C8u) [[unlikely]] return; }
L_003BD5C8:
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.budget -= 3;
L_003BD5D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BD5F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD624u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 178u, depth + 1u); else { c.pc = 0x003BD6F0u; return; } if (c.pc != 0x003BD624u) [[unlikely]] return; }
L_003BD624:
    set32(c.r[4], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 176u)));  goto L_003BD660; }
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD658u); set32(c.r[4], ld32((c.r[20].w[0] + 220u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003BD658u) [[unlikely]] return; }
L_003BD658:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 176u)));
    c.budget -= 2;
L_003BD660:
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 112u)));  goto L_003BD698; }
    c.r[3].d[0] = c.r[18].d[0] << 56;
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD690u); set32(c.r[4], ld32((c.r[20].w[0] + 220u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003BD690u) [[unlikely]] return; }
L_003BD690:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 112u)));
    c.budget -= 2;
L_003BD698:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003BD6CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD6A8u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003BD6A8u) [[unlikely]] return; }
L_003BD6A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 112u), c.r[4].w[0]);  goto L_003BD6C8; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD6C0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 107u, depth + 1u); else { c.pc = 0x001589C0u; return; } if (c.pc != 0x003BD6C0u) [[unlikely]] return; }
L_003BD6C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 2;
L_003BD6C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003BD6CC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003BD6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003BD724; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD71Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD71Cu) [[unlikely]] return; }
L_003BD71C:
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003BD724:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BD730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BD7F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    st32((c.r[3].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_003BD770; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD768u); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_000E(c, 213u, depth + 1u); else { c.pc = 0x00159910u; return; } if (c.pc != 0x003BD768u) [[unlikely]] return; }
L_003BD768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BD7FC; } }
L_003BD770:
    set32(c.r[2], ld32((c.r[4].w[0] + 352u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD77Cu); c.r[5].d[0] = ld16((c.r[2].w[0] + 74u));  if (depth < kMaxDepth) unit_0010(c, 238u, depth + 1u); else { c.pc = 0x00162140u; return; } if (c.pc != 0x003BD77Cu) [[unlikely]] return; }
L_003BD77C:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003BD7B0; } }
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_003BD7B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD7A8u); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_000E(c, 216u, depth + 1u); else { c.pc = 0x00159970u; return; } if (c.pc != 0x003BD7A8u) [[unlikely]] return; }
L_003BD7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD7F8; } }
L_003BD7B0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_003BD7B4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_003BD7D8; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003BD7D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD7CCu); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_000E(c, 220u, depth + 1u); else { c.pc = 0x001599F0u; return; } if (c.pc != 0x003BD7CCu) [[unlikely]] return; }
L_003BD7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD7F8; } }
L_003BD7D4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003BD7D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BD7F8; } }
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BD7F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD7F8u); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_000E(c, 218u, depth + 1u); else { c.pc = 0x001599B0u; return; } if (c.pc != 0x003BD7F8u) [[unlikely]] return; }
L_003BD7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BD7FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BD810:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD844u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 192u, depth + 1u); else { c.pc = 0x003BD910u; return; } if (c.pc != 0x003BD844u) [[unlikely]] return; }
L_003BD844:
    set32(c.r[4], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 140u)));  goto L_003BD880; }
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD868u); set32(c.r[4], ld32((c.r[20].w[0] + 220u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003BD868u) [[unlikely]] return; }
L_003BD868:
    set32(c.r[4], ld32((c.r[20].w[0] + 176u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 6;
L_003BD880:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BD8B0; } }
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD8ACu); set32(c.r[4], ld32((c.r[20].w[0] + 220u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003BD8ACu) [[unlikely]] return; }
L_003BD8AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003BD8B0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003BD8F0; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003BD8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD8C8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003BD8C8u) [[unlikely]] return; }
L_003BD8C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 120u), c.r[4].w[0]);  goto L_003BD8EC; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD8E4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 261u, depth + 1u); else { c.pc = 0x003C3140u; return; } if (c.pc != 0x003BD8E4u) [[unlikely]] return; }
L_003BD8E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 120u), c.r[4].w[0]);
    c.budget -= 2;
L_003BD8EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003BD8F0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003BD910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 120u), 0u);  goto L_003BD948; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BD944; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD944u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD944u) [[unlikely]] return; }
L_003BD944:
    st32((c.r[16].w[0] + 120u), 0u);
    c.budget -= 1;
L_003BD948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BD960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003BD9B8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[16].w[0] + 80u);  goto L_003BD9A0; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_003BD9AC; }
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 1;
L_003BD9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD9A8u);  if (depth < kMaxDepth) unit_00A8(c, 277u, depth + 1u); else { c.pc = 0x003C33A0u; return; } if (c.pc != 0x003BD9A8u) [[unlikely]] return; }
L_003BD9A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_003BD9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD9B4u);  if (depth < kMaxDepth) unit_00A8(c, 267u, depth + 1u); else { c.pc = 0x003C3240u; return; } if (c.pc != 0x003BD9B4u) [[unlikely]] return; }
L_003BD9B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BD9B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BD9D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 132u), 0u);  goto L_003BDA18; }
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDA14u); set32(c.r[4], ld32((c.r[16].w[0] + 220u)));  if (depth < kMaxDepth) unit_00A9(c, 130u, depth + 1u); else { c.pc = 0x003C5500u; return; } if (c.pc != 0x003BDA14u) [[unlikely]] return; }
L_003BDA14:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 1;
L_003BDA18:
    st32((c.r[16].w[0] + 136u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BDA50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 244u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDA7Cu); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 104u, depth + 1u); else { c.pc = 0x003C5030u; return; } if (c.pc != 0x003BDA7Cu) [[unlikely]] return; }
L_003BDA7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BDB20; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 244u)));
    c.budget -= 1;
L_003BDA88:
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDA94u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 106u, depth + 1u); else { c.pc = 0x003C50A0u; return; } if (c.pc != 0x003BDA94u) [[unlikely]] return; }
L_003BDA94:
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDAACu); set32(c.r[4], ld32((c.r[3].w[0] + 136u)));  if (depth < kMaxDepth) unit_00A9(c, 311u, depth + 1u); else { c.pc = 0x003C7120u; return; } if (c.pc != 0x003BDAACu) [[unlikely]] return; }
L_003BDAAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDABCu); set32(c.r[6], c.r[16].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BDABCu) [[unlikely]] return; }
L_003BDABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BDAE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDACCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 207u, depth + 1u); else { c.pc = 0x003BDB40u; return; } if (c.pc != 0x003BDACCu) [[unlikely]] return; }
L_003BDACC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003BDB20; } }
L_003BDAE0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003BDAF8; } }
    st32((c.r[16].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BDB00; } }
    c.budget -= 1;
L_003BDAF8:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003BDB00:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 244u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB10u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00A9(c, 104u, depth + 1u); else { c.pc = 0x003C5030u; return; } if (c.pc != 0x003BDB10u) [[unlikely]] return; }
L_003BDB10:
    c.r[3].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 244u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDA88u | kUnwind; return; } goto L_003BDA88; }
    c.budget -= 1;
L_003BDB20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BDB40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BDB80; } }
L_003BDB60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_003BDB78; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB78u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BDB78u) [[unlikely]] return; }
L_003BDB78:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDB60u | kUnwind; return; } goto L_003BDB60; } }
L_003BDB80:
    st32((c.r[17].w[0] + 228u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BDBA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 232u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BDBD8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDBC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003BDBC8u) [[unlikely]] return; }
L_003BDBC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_003BDBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDBD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003BDBD8u) [[unlikely]] return; }
L_003BDBD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 232u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BDBF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BDFF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003BDFF8; }
    c.r[4].d[0] = ld16((c.r[19].w[0] + 246u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 168u));  goto L_003BDD98; }
    c.r[3].d[0] = c.r[4].d[0] & 65534ull;
    st16((c.r[19].w[0] + 246u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 176u)));  goto L_003BDCA8; }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC6Cu); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003BDC6Cu) [[unlikely]] return; }
L_003BDC6C:
    set32(c.r[17], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC78u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x003BDC78u) [[unlikely]] return; }
L_003BDC78:
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = ld32((c.r[3].w[0] + 76u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC90u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 64u, depth + 1u); else { c.pc = 0x0015C830u; return; } if (c.pc != 0x003BDC90u) [[unlikely]] return; }
L_003BDC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BDCA4; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 246u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[19].w[0] + 246u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003BDCA4:
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 1;
L_003BDCA8:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 246u));  goto L_003BDCCC; }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 246u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BDFF4; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 246u));
    c.budget -= 1;
L_003BDCCC:
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[19].w[0] + 246u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 48ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 176u)));  goto L_003BDD74; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDCF8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003BDCF8u) [[unlikely]] return; }
L_003BDCF8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDD04u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003BDD04u) [[unlikely]] return; }
L_003BDD04:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDD10u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 51u, depth + 1u); else { c.pc = 0x0017C6D0u; return; } if (c.pc != 0x003BDD10u) [[unlikely]] return; }
L_003BDD10:
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.f[1] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[19].w[0] + 176u)));  goto L_003BDD44; }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BDD40; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 246u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[19].w[0] + 246u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003BDD40:
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 1;
L_003BDD44:
    c.f[1] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BDD70; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BDD70; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 246u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[19].w[0] + 246u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003BDD70:
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 1;
L_003BDD74:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BDD94; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 246u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BDFF4; } }
L_003BDD94:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 168u));
    c.budget -= 1;
L_003BDD98:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 240u)));  goto L_003BDDB8; }
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDDB0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003BDDB0u) [[unlikely]] return; }
L_003BDDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 176u)));  if (t) { goto L_003BDDDC; } }
L_003BDDB8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 16u);  goto L_003BDDD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDDC8u); set32(c.r[4], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003BDDC8u) [[unlikely]] return; }
L_003BDDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BDDD8; } }
L_003BDDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDDD8u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003BDDD8u) [[unlikely]] return; }
L_003BDDD8:
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 1;
L_003BDDDC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 244u)));  goto L_003BDE08; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 16u);  goto L_003BDDFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BDE04; } }
L_003BDDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE04u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x003BDE04u) [[unlikely]] return; }
L_003BDE04:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 244u)));
    c.budget -= 1;
L_003BDE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE10u); set32(c.r[4], ld32((c.r[19].w[0] + 220u)));  if (depth < kMaxDepth) unit_00A9(c, 102u, depth + 1u); else { c.pc = 0x003C4FC0u; return; } if (c.pc != 0x003BDE10u) [[unlikely]] return; }
L_003BDE10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 212u)));  goto L_003BDE64; }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BDE60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE2Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 210u, depth + 1u); else { c.pc = 0x003BDBA0u; return; } if (c.pc != 0x003BDE2Cu) [[unlikely]] return; }
L_003BDE2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BDE60; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE44u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003BDE44u) [[unlikely]] return; }
L_003BDE44:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE50u); set32(c.r[4], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003BDE50u) [[unlikely]] return; }
L_003BDE50:
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE60u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003BDE60u) [[unlikely]] return; }
L_003BDE60:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 1;
L_003BDE64:
    c.f[0] = ld32((c.r[3].w[0] + 176u));
    st32((c.r[19].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 180u));
    st32((c.r[19].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 184u));
    st32((c.r[19].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 188u));
    st32((c.r[19].w[0] + 92u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] - 7u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 112u)));  goto L_003BDEB4; }
    st32((c.r[19].w[0] + 140u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 144u), 0u);
    st32((c.r[19].w[0] + 148u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_003BDEC8; } }
L_003BDEB4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BDEC8; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDEC8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000E(c, 182u, depth + 1u); else { c.pc = 0x001593B0u; return; } if (c.pc != 0x003BDEC8u) [[unlikely]] return; }
L_003BDEC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = ld16((c.r[19].w[0] + 168u));
    c.f[2] = ld32((c.r[3].w[0] + 24768u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[4].w[0] + 24776u));
    c.r[5].d[0] = c.r[5].d[0] & 65533ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[19].w[0] + 168u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 24772u));
    st32((c.r[19].w[0] + 96u), c.f[2]);
    st32((c.r[19].w[0] + 100u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24780u));
    st32((c.r[19].w[0] + 108u), c.f[0]);
    st32((c.r[19].w[0] + 116u), 0u);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 168u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[19].w[0] + 168u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[17], ld32((c.r[19].w[0] + 228u)));
    c.budget -= 22;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003BDF90; } }
L_003BDF20:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 244u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 220u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF30u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 106u, depth + 1u); else { c.pc = 0x003C50A0u; return; } if (c.pc != 0x003BDF30u) [[unlikely]] return; }
L_003BDF30:
    set32(c.r[2], ld32((c.r[19].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 168u));  goto L_003BDF54; }
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[2].w[0] + 152u));  if (t) { goto L_003BDF78; } }
L_003BDF54:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 212u)));  goto L_003BDF74; }
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.f[0] = ld32((c.r[19].w[0] + 160u));
    c.f[1] = ld32((c.r[2].w[0] + 156u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003BDF78; } }
L_003BDF74:
    c.f[12] = ld32((c.r[2].w[0] + 156u));
    c.budget -= 1;
L_003BDF78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF84u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 309u, depth + 1u); else { c.pc = 0x003C37D0u; return; } if (c.pc != 0x003BDF84u) [[unlikely]] return; }
L_003BDF84:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDF20u | kUnwind; return; } goto L_003BDF20; } }
L_003BDF90:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 168u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 176u)));  goto L_003BDFD4; }
    set32(c.r[3], ld32((c.r[19].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BDFD0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003BDFBCu) [[unlikely]] return; }
L_003BDFBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[19].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_003BDFD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFD0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003BDFD0u) [[unlikely]] return; }
L_003BDFD0:
    set32(c.r[4], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 1;
L_003BDFD4:
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BDFF4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 216u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
L_003BDFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003BDFF8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003BE010:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003BE4F0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BE4EC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], ld32((c.r[28].w[0] - 31436u)));  if (t) { goto L_003BE078; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BE4EC; } }
L_003BE078:
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 32ull;  goto L_003BE098; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 246u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BE4EC; } }
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 1;
L_003BE098:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_003BE0B4; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 246u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BE4EC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003BE0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE0BCu);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x003BE0BCu) [[unlikely]] return; }
L_003BE0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE0C4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x003BE0C4u) [[unlikely]] return; }
L_003BE0C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003BE0EC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE0E4u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003BE0E4u) [[unlikely]] return; }
L_003BE0E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 212u)));  if (t) { goto L_003BE0FC; } }
L_003BE0EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE0F8u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003BE0F8u) [[unlikely]] return; }
L_003BE0F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 1;
L_003BE0FC:
    set32(c.r[3], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00400000u);  if (t) { goto L_003BE120; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 168u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 352u)));  goto L_003BE270; }
L_003BE120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[21].d[0] = c.r[21].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 80u);  if (t) { goto L_003BE148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_003BE168; } }
L_003BE148:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  goto L_003BE16C; }
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 1;
L_003BE168:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_003BE16C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 84u);  if (t) { goto L_003BE184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_003BE1A4; } }
L_003BE184:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[17].w[0] + 88u)));  goto L_003BE1A8; }
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 1;
L_003BE1A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_003BE1A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 88u);  if (t) { goto L_003BE1C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_003BE1E0; } }
L_003BE1C0:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[17].w[0] + 92u)));  goto L_003BE1E4; }
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 1;
L_003BE1E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 1;
L_003BE1E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 92u);  if (t) { goto L_003BE1FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_003BE21C; } }
L_003BE1FC:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_003BE220; }
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 1;
L_003BE21C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003BE220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE228u);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003BE228u) [[unlikely]] return; }
L_003BE228:
    set32(c.r[3], ld32((c.r[20].w[0] + 352u)));
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BE26C; } }
    c.r[21].d[0] = c.r[21].d[0] | 8ull;
    c.budget -= 1;
L_003BE26C:
    set32(c.r[4], ld32((c.r[20].w[0] + 352u)));
    c.budget -= 1;
L_003BE270:
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[21].d[0] | c.r[3].d[0];  if (t) { goto L_003BE290; } }
    c.r[21].d[0] = c.r[21].d[0] | 64ull;
    c.budget -= 1;
L_003BE290:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 168u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_003BE2AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[21].d[0] = c.r[21].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
L_003BE2AC:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE31C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 128u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 120u)));  goto L_003BE2EC; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 84u)));
    set32(c.r[18], ld32((c.r[5].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; c.r[21].d[0] = c.r[21].d[0] | 4ull;  if (t) { goto L_003BE31C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE2E0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003BE2E0u) [[unlikely]] return; }
L_003BE2E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_003BE31C; } }
L_003BE2EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE31C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE304u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 148u, depth + 1u); else { c.pc = 0x0019DAC0u; return; } if (c.pc != 0x003BE304u) [[unlikely]] return; }
L_003BE304:
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE31Cu); set32(c.r[4], c.r[3].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 149u, depth + 1u); else { c.pc = 0x0019DAD0u; return; } if (c.pc != 0x003BE31Cu) [[unlikely]] return; }
L_003BE31C:
    c.budget -= 2;
    if (c.r[21].d[0] == c.r[19].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 352u)));  goto L_003BE340; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE32Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003BE32Cu) [[unlikely]] return; }
L_003BE32C:
    set32(c.r[4], ld32((c.r[20].w[0] + 352u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE33Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x003BE33Cu) [[unlikely]] return; }
L_003BE33C:
    set32(c.r[3], ld32((c.r[20].w[0] + 352u)));
    c.budget -= 1;
L_003BE340:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 76u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 78u));
    c.r[19].d[0] = c.r[2].d[0] & 128ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[19].d[0]; c.r[18].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_003BE380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE368u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x003BE368u) [[unlikely]] return; }
L_003BE368:
    set32(c.r[4], ld32((c.r[20].w[0] + 352u)));
    c.r[3].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 78u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003BE380:
    set32(c.r[19], ld32((c.r[17].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003BE410; } }
L_003BE38C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 244u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 220u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE39Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 106u, depth + 1u); else { c.pc = 0x003C50A0u; return; } if (c.pc != 0x003BE39Cu) [[unlikely]] return; }
L_003BE39C:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE400; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 168u));  goto L_003BE3D0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[2].w[0] + 152u));  if (t) { goto L_003BE3F4; } }
L_003BE3D0:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 212u)));  goto L_003BE3F0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.f[0] = ld32((c.r[17].w[0] + 160u));
    c.f[1] = ld32((c.r[2].w[0] + 156u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003BE3F4; } }
L_003BE3F0:
    c.f[12] = ld32((c.r[2].w[0] + 156u));
    c.budget -= 1;
L_003BE3F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE400u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 320u, depth + 1u); else { c.pc = 0x003C39A0u; return; } if (c.pc != 0x003BE400u) [[unlikely]] return; }
L_003BE400:
    set32(c.r[19], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE38Cu | kUnwind; return; } goto L_003BE38C; } }
    c.budget -= 1;
L_003BE410:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_003BE4E4; }
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 216u)));  goto L_003BE464; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_003BE44C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE444u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 180u, depth + 1u); else { c.pc = 0x003BD730u; return; } if (c.pc != 0x003BE444u) [[unlikely]] return; }
L_003BE444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BE4E0; } }
L_003BE44C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003BE4E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE45Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 194u, depth + 1u); else { c.pc = 0x003BD960u; return; } if (c.pc != 0x003BE45Cu) [[unlikely]] return; }
L_003BE45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BE4E0; } }
L_003BE464:
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE4E0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE47Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003BE47Cu) [[unlikely]] return; }
L_003BE47C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE488u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003BE488u) [[unlikely]] return; }
L_003BE488:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE494u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003BE494u) [[unlikely]] return; }
L_003BE494:
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE4BCu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0017(c, 51u, depth + 1u); else { c.pc = 0x0017C6D0u; return; } if (c.pc != 0x003BE4BCu) [[unlikely]] return; }
L_003BE4BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 9;
L_003BE4E0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003BE4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE4ECu);  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x003BE4ECu) [[unlikely]] return; }
L_003BE4EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003BE4F0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003BE510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003BE6A8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BE6A4; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003BE5E0; } }
L_003BE558:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 244u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 220u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE568u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 106u, depth + 1u); else { c.pc = 0x003C50A0u; return; } if (c.pc != 0x003BE568u) [[unlikely]] return; }
L_003BE568:
    set32(c.r[25], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE578u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE578u) [[unlikely]] return; }
L_003BE578:
    set32(c.r[3], ld32((c.r[18].w[0] + 220u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BE5A0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[3].w[0] + 152u));  if (t) { goto L_003BE5C8; } }
    c.budget -= 1;
L_003BE5A0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 168u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 212u)));  goto L_003BE5C4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003BE5C8; } }
L_003BE5C4:
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.budget -= 1;
L_003BE5C8:
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE558u | kUnwind; return; } goto L_003BE558; } }
L_003BE5E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    c.f[0] = ld32((c.r[18].w[0] + 200u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = ld16((c.r[18].w[0] + 168u));  goto L_003BE630; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 168u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 212u)));  goto L_003BE61C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003BE620; } }
L_003BE61C:
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.budget -= 1;
L_003BE620:
    c.f[0] = ld32((c.r[18].w[0] + 204u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 204u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 168u));
    c.budget -= 4;
L_003BE630:
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 212u)));  goto L_003BE650; }
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003BE654; } }
L_003BE650:
    c.f[2] = ld32((c.r[3].w[0] + 156u));
    c.budget -= 1;
L_003BE654:
    c.f[1] = ld32((c.r[18].w[0] + 200u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 200u), c.f[1]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 246u));
    c.r[3].d[0] = c.r[3].d[0] & 65531ull;
    st16((c.r[18].w[0] + 246u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BE6A4; } }
    c.f[0] = ld32((c.r[18].w[0] + 200u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BE6A4; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003BE6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003BE6A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BE6C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 236u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BE708; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE6F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003BE6F8u) [[unlikely]] return; }
L_003BE6F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 236u), c.r[2].w[0]);  if (t) { goto L_003BE708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE708u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003BE708u) [[unlikely]] return; }
L_003BE708:
    set32(c.r[2], ld32((c.r[16].w[0] + 236u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BE720:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BE838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE754u); set32(c.r[4], ld32((c.r[16].w[0] + 220u)));  if (depth < kMaxDepth) unit_00A9(c, 102u, depth + 1u); else { c.pc = 0x003C4FC0u; return; } if (c.pc != 0x003BE754u) [[unlikely]] return; }
L_003BE754:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BE83C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE76Cu); st16((c.r[16].w[0] + 244u), static_cast<std::uint16_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_00A7(c, 207u, depth + 1u); else { c.pc = 0x003BDB40u; return; } if (c.pc != 0x003BE76Cu) [[unlikely]] return; }
L_003BE76C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = ld16((c.r[16].w[0] + 164u));  goto L_003BE824; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE780u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 210u, depth + 1u); else { c.pc = 0x003BDBA0u; return; } if (c.pc != 0x003BE780u) [[unlikely]] return; }
L_003BE780:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003BE838; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE798u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003BE798u) [[unlikely]] return; }
L_003BE798:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_003BE810; }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_003BE7E0; }
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE7C0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x00158FC0u; return; } if (c.pc != 0x003BE7C0u) [[unlikely]] return; }
L_003BE7C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE80C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE7D8u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003BE7D8u) [[unlikely]] return; }
L_003BE7D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BE80C; } }
L_003BE7E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BE80C; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE7F4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003C33E0u; return; } if (c.pc != 0x003BE7F4u) [[unlikely]] return; }
L_003BE7F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE80C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE80Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003BE80Cu) [[unlikely]] return; }
L_003BE80C:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_003BE810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE820u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x003BE820u) [[unlikely]] return; }
L_003BE820:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 164u));
    c.budget -= 1;
L_003BE824:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 166u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 199u, depth + 1u); else { c.pc = 0x003BDA50u; return; } if (c.pc != 0x003BE830u) [[unlikely]] return; }
L_003BE830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BE83C; } }
L_003BE838:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE83C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003BE860:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 15;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003BE8D0; } }
L_003BE89C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 244u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 220u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE8ACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 106u, depth + 1u); else { c.pc = 0x003C50A0u; return; } if (c.pc != 0x003BE8ACu) [[unlikely]] return; }
L_003BE8AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE8C0u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 306u, depth + 1u); else { c.pc = 0x003C3780u; return; } if (c.pc != 0x003BE8C0u) [[unlikely]] return; }
L_003BE8C0:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE89Cu | kUnwind; return; } goto L_003BE89C; } }
    c.budget -= 1;
L_003BE8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BE900:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE92Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 296u, depth + 1u); else { c.pc = 0x003C35C0u; return; } if (c.pc != 0x003BE92Cu) [[unlikely]] return; }
L_003BE92C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4984u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[19].w[0]), 0u);
    st32((c.r[19].w[0] + 176u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    st32((c.r[19].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[19].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    st32((c.r[19].w[0] + 212u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 188u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE978u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003BE978u) [[unlikely]] return; }
L_003BE978:
    st32((c.r[19].w[0] + 192u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 196u), 0u);
    st32((c.r[19].w[0] + 200u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE998u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003BE998u) [[unlikely]] return; }
L_003BE998:
    st32((c.r[19].w[0] + 204u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE9B0u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003BE9B0u) [[unlikely]] return; }
L_003BE9B0:
    st32((c.r[19].w[0] + 208u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE9D0u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003BE9D0u) [[unlikely]] return; }
L_003BE9D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_003BEA40; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BEA50; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE9E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 216u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE9E8u | kUnwind; return; } goto L_003BE9E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 196u)));  if (t) { goto L_003BEA54; } }
L_003BEA40:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003BEA50:
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 1;
L_003BEA54:
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[19].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0])));  goto L_003BEAA0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003BEAAC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BEA78:
    set32(c.r[2], ld32((c.r[19].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEA78u | kUnwind; return; } goto L_003BEA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 204u)));  if (t) { goto L_003BEAB0; } }
L_003BEAA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003BEAAC:
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 1;
L_003BEAB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0])));  goto L_003BEB0C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BEB08; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003BEB18; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BEAD4:
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEAD4u | kUnwind; return; } goto L_003BEAD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BEB18; } }
L_003BEB08:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003BEB0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003BEB18:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 196u)));  goto L_003BEB40; }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEB38u); st32((c.r[19].w[0] + 196u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003BEB38u) [[unlikely]] return; }
L_003BEB38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[19].w[0] + 80u);  if (t) { goto L_003BEB58; } }
L_003BEB40:
    set32(c.r[2], 0u - 5u);
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEB54u); st32((c.r[19].w[0] + 196u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003BEB54u) [[unlikely]] return; }
L_003BEB54:
    set32(c.r[4], c.r[19].w[0] + 80u);
    c.budget -= 1;
L_003BEB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEB60u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003BEB60u) [[unlikely]] return; }
L_003BEB60:
    st32((c.r[19].w[0] + 144u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    st32((c.r[19].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 152u), 0u);  goto L_003BEB8C; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 2;
L_003BEB8C:
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 156u), 0u);  goto L_003BEBA8; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 2;
L_003BEBA8:
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 144u)));
    st32((c.r[19].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 172u), 0u);
    st32((c.r[19].w[0] + 168u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BEBE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BEC30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 4984u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEC0Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 296u, depth + 1u); else { c.pc = 0x003BEC50u; return; } if (c.pc != 0x003BEC0Cu) [[unlikely]] return; }
L_003BEC0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEC18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 297u, depth + 1u); else { c.pc = 0x003C35E0u; return; } if (c.pc != 0x003BEC18u) [[unlikely]] return; }
L_003BEC18:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003BEC34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEC30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003BEC30u) [[unlikely]] return; }
L_003BEC30:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BEC34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BEC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BED8C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 192u)));  goto L_003BECA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEC90u);  if (depth < kMaxDepth) unit_00A8(c, 78u, depth + 1u); else { c.pc = 0x003C0F70u; return; } if (c.pc != 0x003BEC90u) [[unlikely]] return; }
L_003BEC90:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BECA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BECA4u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003BECA4u) [[unlikely]] return; }
L_003BECA4:
    set32(c.r[3], ld32((c.r[18].w[0] + 192u)));
    c.budget -= 1;
L_003BECA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BECF0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003BECF0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BECC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 192u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BECD8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 306u, depth + 1u); else { c.pc = 0x003BEDB0u; return; } if (c.pc != 0x003BECD8u) [[unlikely]] return; }
L_003BECD8:
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BECC0u | kUnwind; return; } goto L_003BECC0; } }
    c.budget -= 1;
L_003BECF0:
    set32(c.r[5], ld32((c.r[18].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 204u)));  goto L_003BED10; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003BED08u) [[unlikely]] return; }
L_003BED08:
    st32((c.r[18].w[0] + 172u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    c.budget -= 2;
L_003BED10:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 208u)));  goto L_003BED2C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003BED24u) [[unlikely]] return; }
L_003BED24:
    st32((c.r[18].w[0] + 204u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 208u)));
    c.budget -= 2;
L_003BED2C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 192u)));  goto L_003BED48; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003BED40u) [[unlikely]] return; }
L_003BED40:
    st32((c.r[18].w[0] + 208u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 192u)));
    c.budget -= 2;
L_003BED48:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 216u)));  goto L_003BED64; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003BED5Cu) [[unlikely]] return; }
L_003BED5C:
    st32((c.r[18].w[0] + 192u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 2;
L_003BED64:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_003BED80; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED78u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003BED78u) [[unlikely]] return; }
L_003BED78:
    st32((c.r[18].w[0] + 216u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_003BED80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003BED8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BEDB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003BEE18; } }
L_003BEDD8:
    set32(c.r[5], ld32((c.r[18].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BEDF0; } }
    set32(c.r[6], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEDF0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 306u, depth + 1u); else { c.pc = 0x003BEDB0u; return; } if (c.pc != 0x003BEDF0u) [[unlikely]] return; }
L_003BEDF0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 184u)));  if (t) { goto L_003BEE10; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE0Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BEE0Cu) [[unlikely]] return; }
L_003BEE0C:
    c.budget -= 1;
L_003BEE10:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEDD8u | kUnwind; return; } goto L_003BEDD8; } }
L_003BEE18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BEE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003BF080; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 28u)));  goto L_003BEF50; }
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 140u)));
    st32((c.r[17].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 144u)));
    st32((c.r[17].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_003BF07C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 140u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 144u)));  goto L_003BEF00; }
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[17].w[0] + 80u);  goto L_003BEEF0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEEC8u); set32(c.r[5], c.r[5].w[0] - 12512u);  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x00158FC0u; return; } if (c.pc != 0x003BEEC8u) [[unlikely]] return; }
L_003BEEC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEED4u); set32(c.r[4], c.r[4].w[0] - 12512u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x003BEED4u) [[unlikely]] return; }
L_003BEED4:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 12512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEEE8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003BEEE8u) [[unlikely]] return; }
L_003BEEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF07C; } }
L_003BEEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEEF8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x003BEEF8u) [[unlikely]] return; }
L_003BEEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF07C; } }
L_003BEF00:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BF07C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF18u); set32(c.r[5], c.r[5].w[0] - 12512u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003C33E0u; return; } if (c.pc != 0x003BEF18u) [[unlikely]] return; }
L_003BEF18:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 80u);  goto L_003BEF38; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF34u); set32(c.r[4], c.r[4].w[0] - 12512u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x003BEF34u) [[unlikely]] return; }
L_003BEF34:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 1;
L_003BEF38:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 12512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF48u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003BEF48u) [[unlikely]] return; }
L_003BEF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF07C; } }
L_003BEF50:
    set32(c.r[3], ld32((c.r[17].w[0] + 188u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[28].w[0] - 30216u), c.r[3].w[0]);  if (t) { goto L_003BF07C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 192u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BF07C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[17].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 164u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 9;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[5], c.r[16].w[0] + 16u);  goto L_003BF05C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003BEFAC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BF058; } }
L_003BEFAC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BEFE4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEFC0u); set32(c.r[5], c.r[5].w[0] - 12512u);  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x00158FC0u; return; } if (c.pc != 0x003BEFC0u) [[unlikely]] return; }
L_003BEFC0:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[16].w[0] + 16u);  goto L_003BF01C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEFDCu); set32(c.r[4], c.r[4].w[0] - 12512u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x003BEFDCu) [[unlikely]] return; }
L_003BEFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF018; } }
L_003BEFE4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BF018; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEFFCu); set32(c.r[5], c.r[5].w[0] - 12512u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003C33E0u; return; } if (c.pc != 0x003BEFFCu) [[unlikely]] return; }
L_003BEFFC:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BF018; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF018u); set32(c.r[4], c.r[4].w[0] - 12512u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x003BF018u) [[unlikely]] return; }
L_003BF018:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_003BF01C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF024u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003BF024u) [[unlikely]] return; }
L_003BF024:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 80u);  goto L_003BF040; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF03Cu); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x003BF03Cu) [[unlikely]] return; }
L_003BF03C:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 1;
L_003BF040:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 12512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF050u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003BF050u) [[unlikely]] return; }
L_003BF050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF07C; } }
L_003BF058:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_003BF05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF064u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003BF064u) [[unlikely]] return; }
L_003BF064:
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BF07C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF07Cu); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x003BF07Cu) [[unlikely]] return; }
L_003BF07C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003BF080:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BF090:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u - 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 196u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 24ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BF110; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF0D8u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003BF0D8u) [[unlikely]] return; }
L_003BF0D8:
    set32(c.r[18], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF0E4u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x003BF0E4u) [[unlikely]] return; }
L_003BF0E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF0FCu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 64u, depth + 1u); else { c.pc = 0x0015C830u; return; } if (c.pc != 0x003BF0FCu) [[unlikely]] return; }
L_003BF0FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003BF114; }
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    c.budget -= 3;
L_003BF110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003BF114:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BF130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 196u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 192ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BF1C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF170u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003BF170u) [[unlikely]] return; }
L_003BF170:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF17Cu); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003BF17Cu) [[unlikely]] return; }
L_003BF17C:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003BF1C4; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF1A0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 51u, depth + 1u); else { c.pc = 0x0017C6D0u; return; } if (c.pc != 0x003BF1A0u) [[unlikely]] return; }
L_003BF1A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BF1C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    c.budget -= 3;
L_003BF1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BF1C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BF1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BF3AC; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 20u));  goto L_003BF210; }
    set32(c.r[2], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[16].w[0] + 20u));  goto L_003BF2E8; }
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 1;
L_003BF210:
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BF3BC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[16].w[0] + 28u));  goto L_003BF254; }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BF250; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003BF3B8; } }
L_003BF250:
    c.f[2] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 1;
L_003BF254:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BF3AC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BF3AC; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 196u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF3AC; } }
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003BF2C4; }
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BF3AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003BF2C4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF2D0u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF2D0u) [[unlikely]] return; }
L_003BF2D0:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BF3AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BF3BC; } }
L_003BF2E8:
    c.f[0] = ld32((c.r[7].w[0] + 200u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BF3AC; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 246u));
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[16].w[0] + 28u));  goto L_003BF328; }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BF324; } }
    c.r[2].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[7].w[0] + 246u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003BF3B8; } }
L_003BF324:
    c.f[2] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 1;
L_003BF328:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BF3AC; } }
    c.f[0] = ld32((c.r[7].w[0] + 204u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BF3AC; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[7].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 196u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF3AC; } }
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003BF390; }
    c.f[1] = ld32((c.r[7].w[0] + 200u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BF3AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003BF390:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF39Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF39Cu) [[unlikely]] return; }
L_003BF39C:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BF3B8; } }
L_003BF3AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF3BC; } }
L_003BF3B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003BF3BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BF3D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003BF64C; } }
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  goto L_003BF650; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF428u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x003BF428u) [[unlikely]] return; }
L_003BF428:
    set32(c.r[5], c.r[18].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF434u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003BF434u) [[unlikely]] return; }
L_003BF434:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF440u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 51u, depth + 1u); else { c.pc = 0x0017C6D0u; return; } if (c.pc != 0x003BF440u) [[unlikely]] return; }
L_003BF440:
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BF64C; } }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);  goto L_003BF548; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF470u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF470u) [[unlikely]] return; }
L_003BF470:
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003BF734; }
    c.f[2] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0] + 60u));  goto L_003BF4A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4A0u); c.f[12] = ld32((c.r[17].w[0] + 60u));  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003BF4A0u) [[unlikely]] return; }
L_003BF4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BF730; } }
L_003BF4A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4C0u); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF4C0u) [[unlikely]] return; }
L_003BF4C0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[17].w[0] + 64u));  goto L_003BF504; }
    c.f[2] = ld32((c.r[17].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4F4u); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF4F4u) [[unlikely]] return; }
L_003BF4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4FCu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003BF4FCu) [[unlikely]] return; }
L_003BF4FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_003BF528; } }
L_003BF504:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF520u); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF520u) [[unlikely]] return; }
L_003BF520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF528u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003BF528u) [[unlikely]] return; }
L_003BF528:
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF534u); c.f[12] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003BF534u) [[unlikely]] return; }
L_003BF534:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_003BF730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003BF730; } }
L_003BF548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF564u); c.f[21] = ld32((c.r[17].w[0] + 36u));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF564u) [[unlikely]] return; }
L_003BF564:
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[5] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[21]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[21], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BF730; } }
    c.f[4] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[5]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = ld32((c.r[17].w[0] + 40u));  goto L_003BF5B8; }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF5B0u); c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003BF5B0u) [[unlikely]] return; }
L_003BF5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BF730; } }
L_003BF5B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[17].w[0] + 60u));
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[21] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[21]);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF5F4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF5F4u) [[unlikely]] return; }
L_003BF5F4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[20];  goto L_003BF620; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF610u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF610u) [[unlikely]] return; }
L_003BF610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF618u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003BF618u) [[unlikely]] return; }
L_003BF618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_003BF630; } }
L_003BF620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF628u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF628u) [[unlikely]] return; }
L_003BF628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF630u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003BF630u) [[unlikely]] return; }
L_003BF630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF638u); c.f[12] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003BF638u) [[unlikely]] return; }
L_003BF638:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_003BF730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003BF730; } }
L_003BF64C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_003BF650:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF65Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF65Cu) [[unlikely]] return; }
L_003BF65C:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BF730; } }
    c.f[2] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0] + 40u));  goto L_003BF694; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF68Cu); c.f[12] = ld32((c.r[17].w[0] + 40u));  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003BF68Cu) [[unlikely]] return; }
L_003BF68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BF730; } }
L_003BF694:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF6ACu); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF6ACu) [[unlikely]] return; }
L_003BF6AC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[17].w[0] + 44u));  goto L_003BF6F0; }
    c.f[2] = ld32((c.r[17].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF6E0u); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF6E0u) [[unlikely]] return; }
L_003BF6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF6E8u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003BF6E8u) [[unlikely]] return; }
L_003BF6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_003BF714; } }
L_003BF6F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF70Cu); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003BF70Cu) [[unlikely]] return; }
L_003BF70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF714u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x003BF714u) [[unlikely]] return; }
L_003BF714:
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF720u); c.f[12] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003BF720u) [[unlikely]] return; }
L_003BF720:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_003BF730; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BF730:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003BF734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BF760:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] != 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BFAFC; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF7B8u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003C4F80u; return; } if (c.pc != 0x003BF7B8u) [[unlikely]] return; }
L_003BF7B8:
    set32(c.r[2], ld32((c.r[21].w[0] + 180u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF7D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 335u, depth + 1u); else { c.pc = 0x003BF1D0u; return; } if (c.pc != 0x003BF7D4u) [[unlikely]] return; }
L_003BF7D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BFA88; } }
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003BF810; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF810; } }
L_003BF7F4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF7F4u | kUnwind; return; } goto L_003BF7F4; } }
L_003BF810:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_003BF848; }
    set32(c.r[2], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF844; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.f[12] = ld32((c.r[21].w[0] + 144u));
    set32(c.r[6], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF844u); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BF844u) [[unlikely]] return; }
L_003BF844:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003BF848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF850u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 338u, depth + 1u); else { c.pc = 0x003BF3D0u; return; } if (c.pc != 0x003BF850u) [[unlikely]] return; }
L_003BF850:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003BFA88; } }
    set32(c.r[2], c.r[22].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[21].w[0] + 180u)));
    c.budget -= 5;
L_003BF870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF878u); set32(c.r[5], ld32((c.r[4].w[0] + 20u)));  if (depth < kMaxDepth) unit_00A9(c, 139u, depth + 1u); else { c.pc = 0x003C5730u; return; } if (c.pc != 0x003BF878u) [[unlikely]] return; }
L_003BF878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BFA78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 12448u), c.r[30].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 12444u), c.r[19].w[0]);
    st32((c.r[2].w[0] - 12440u), c.r[22].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 216u)));
    set32(c.r[4], 0u + 256u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8u)));
    st8((c.r[5].w[0] - 12436u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 9u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8C4u); st8((c.r[3].w[0] - 12435u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003BF8C4u) [[unlikely]] return; }
L_003BF8C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BF8F0; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 176u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8E8u); set32(c.r[7], c.r[7].w[0] - 12448u);  if (depth < kMaxDepth) unit_00A7(c, 145u, depth + 1u); else { c.pc = 0x003BD1F0u; return; } if (c.pc != 0x003BF8E8u) [[unlikely]] return; }
L_003BF8E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003BF8F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BFA78; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 216u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BF928; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF924u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 265u, depth + 1u); else { c.pc = 0x003BE720u; return; } if (c.pc != 0x003BF924u) [[unlikely]] return; }
L_003BF924:
    c.budget -= 1;
L_003BF928:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BF958; } }
    st32((c.r[20].w[0]), c.r[16].w[0]);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0])));
    st32((c.r[3].w[0] + 184u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0])));
    st32((c.r[3].w[0] + 188u), c.r[23].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[20].w[0])));  if (t) { goto L_003BF970; } }
    c.budget -= 1;
L_003BF958:
    st32((c.r[16].w[0] + 180u), c.r[18].w[0]);
    st32((c.r[18].w[0] + 184u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 188u), c.r[23].w[0]);
    c.budget -= 6;
L_003BF970:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BFA78; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BFA10; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BFA78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003BF9D0; } }
L_003BF9B0:
    set32(c.r[5], ld32((c.r[5].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF9B0u | kUnwind; return; } goto L_003BF9B0; } }
    c.budget -= 1;
L_003BF9D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BFA08; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BFA08; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BFA78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFA00u); set32(c.r[5], ld32((c.r[18].w[0] + 112u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0015A3C0u; return; } if (c.pc != 0x003BFA00u) [[unlikely]] return; }
L_003BFA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFA78; } }
L_003BFA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 196u), c.r[5].w[0]);  if (t) { goto L_003BFA78; } }
L_003BFA10:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BFA60; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 192u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BFA60; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BFA78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFA54u); set32(c.r[5], ld32((c.r[18].w[0] + 112u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0015A3C0u; return; } if (c.pc != 0x003BFA54u) [[unlikely]] return; }
L_003BFA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFA78; } }
    c.budget -= 1;
L_003BFA60:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 192u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0] + 196u), c.r[3].w[0]);
    c.budget -= 6;
L_003BFA78:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 180u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF870u | kUnwind; return; } goto L_003BF870; }
L_003BFA88:
    set32(c.r[3], ld32((c.r[21].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 212u)));  goto L_003BFAD0; }
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_003BFB00; }
    set32(c.r[6], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_003BFAAC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFABCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 366u, depth + 1u); else { c.pc = 0x003BF760u; return; } if (c.pc != 0x003BFABCu) [[unlikely]] return; }
L_003BFABC:
    set32(c.r[16], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[6], c.r[22].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BFAACu | kUnwind; return; } goto L_003BFAAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFAFC; } }
L_003BFAD0:
    set32(c.r[6], c.r[22].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003BFAFC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 192u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFAFCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 366u, depth + 1u); else { c.pc = 0x003BF760u; return; } if (c.pc != 0x003BFAFCu) [[unlikely]] return; }
L_003BFAFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003BFB00:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003BFB30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003BFD18; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 180u)));
    c.budget -= 1;
L_003BFB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFB68u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003C4F80u; return; } if (c.pc != 0x003BFB68u) [[unlikely]] return; }
L_003BFB68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFB74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 213u, depth + 1u); else { c.pc = 0x003BDBF0u; return; } if (c.pc != 0x003BFB74u) [[unlikely]] return; }
L_003BFB74:
    set32(c.r[5], ld32((c.r[18].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BFD08; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BFCF8; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003BFCA8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    st32((c.r[28].w[0] - 30208u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFBBCu); st32((c.r[28].w[0] - 30212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 262u, depth + 1u); else { c.pc = 0x003BE6D0u; return; } if (c.pc != 0x003BFBBCu) [[unlikely]] return; }
L_003BFBBC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[28].w[0] - 30192u), c.r[2].w[0]);  if (t) { goto L_003BFD08; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30212u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BFC48; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30208u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BFC30; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 100u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFBFCu); set32(c.r[5], c.r[5].w[0] - 12432u);  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x00158FC0u; return; } if (c.pc != 0x003BFBFCu) [[unlikely]] return; }
L_003BFBFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC08u); set32(c.r[4], c.r[4].w[0] - 12432u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x003BFC08u) [[unlikely]] return; }
L_003BFC08:
    set32(c.r[4], ld32((c.r[28].w[0] - 30192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC14u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003BFC14u) [[unlikely]] return; }
L_003BFC14:
    set32(c.r[4], ld32((c.r[28].w[0] - 30192u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 12432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC28u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003BFC28u) [[unlikely]] return; }
L_003BFC28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFC88; } }
L_003BFC30:
    set32(c.r[7], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC40u); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x003BFC40u) [[unlikely]] return; }
L_003BFC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFC88; } }
L_003BFC48:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003BFC88; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC6Cu); set32(c.r[5], c.r[5].w[0] - 12432u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003C33E0u; return; } if (c.pc != 0x003BFC6Cu) [[unlikely]] return; }
L_003BFC6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BFC88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC88u); set32(c.r[4], c.r[4].w[0] - 12432u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x003BFC88u) [[unlikely]] return; }
L_003BFC88:
    set32(c.r[5], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 30192u)));
    set32(c.r[7], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC9Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 383u, depth + 1u); else { c.pc = 0x003BFB30u; return; } if (c.pc != 0x003BFC9Cu) [[unlikely]] return; }
L_003BFC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFD08; } }
    c.budget -= 1;
L_003BFCA8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BFCE0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BFCE0; } }
    set32(c.r[6], c.r[2].w[0] + 16u);
    set32(c.r[7], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFCD4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 383u, depth + 1u); else { c.pc = 0x003BFB30u; return; } if (c.pc != 0x003BFCD4u) [[unlikely]] return; }
L_003BFCD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFD08; } }
    c.budget -= 1;
L_003BFCE0:
    set32(c.r[7], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFCF0u); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_00A7(c, 383u, depth + 1u); else { c.pc = 0x003BFB30u; return; } if (c.pc != 0x003BFCF0u) [[unlikely]] return; }
L_003BFCF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFD08; } }
L_003BFCF8:
    set32(c.r[7], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD08u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 383u, depth + 1u); else { c.pc = 0x003BFB30u; return; } if (c.pc != 0x003BFD08u) [[unlikely]] return; }
L_003BFD08:
    set32(c.r[18], ld32((c.r[18].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 180u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BFB60u | kUnwind; return; } goto L_003BFB60; }
    c.budget -= 1;
L_003BFD18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BFD40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003BFDE0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 180u)));
    c.budget -= 1;
L_003BFD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD78u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003C4F80u; return; } if (c.pc != 0x003BFD78u) [[unlikely]] return; }
L_003BFD78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD84u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 235u, depth + 1u); else { c.pc = 0x003BE010u; return; } if (c.pc != 0x003BFD84u) [[unlikely]] return; }
L_003BFD84:
    set32(c.r[5], ld32((c.r[18].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BFDD0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BFDC0; } }
    set32(c.r[7], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFDB4u); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_00A7(c, 399u, depth + 1u); else { c.pc = 0x003BFD40u; return; } if (c.pc != 0x003BFDB4u) [[unlikely]] return; }
L_003BFDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFDD0; } }
    c.budget -= 1;
L_003BFDC0:
    set32(c.r[7], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFDD0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 399u, depth + 1u); else { c.pc = 0x003BFD40u; return; } if (c.pc != 0x003BFDD0u) [[unlikely]] return; }
L_003BFDD0:
    set32(c.r[18], ld32((c.r[18].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 180u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BFD70u | kUnwind; return; } goto L_003BFD70; }
    c.budget -= 1;
L_003BFDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BFE00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003BFE98; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 180u)));
    c.budget -= 1;
L_003BFE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE38u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 101u, depth + 1u); else { c.pc = 0x003C4F80u; return; } if (c.pc != 0x003BFE38u) [[unlikely]] return; }
L_003BFE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 257u, depth + 1u); else { c.pc = 0x003BE510u; return; } if (c.pc != 0x003BFE40u) [[unlikely]] return; }
L_003BFE40:
    set32(c.r[5], ld32((c.r[18].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BFE88; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BFE78; } }
    set32(c.r[7], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE70u); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_00A7(c, 405u, depth + 1u); else { c.pc = 0x003BFE00u; return; } if (c.pc != 0x003BFE70u) [[unlikely]] return; }
L_003BFE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFE88; } }
L_003BFE78:
    set32(c.r[7], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE88u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 405u, depth + 1u); else { c.pc = 0x003BFE00u; return; } if (c.pc != 0x003BFE88u) [[unlikely]] return; }
L_003BFE88:
    set32(c.r[18], ld32((c.r[18].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 180u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BFE30u | kUnwind; return; } goto L_003BFE30; }
    c.budget -= 1;
L_003BFE98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BFEC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 10u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 1;
L_003BFEEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BFF00; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF00u); set32(c.r[5], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_00A7(c, 411u, depth + 1u); else { c.pc = 0x003BFEC0u; return; } if (c.pc != 0x003BFF00u) [[unlikely]] return; }
L_003BFF00:
    set32(c.r[3], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BFF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[17].w[0] + 184u)));  if (t) { [[clang::musttail]] return unit_00A8(c, 9u, depth); } }
    c.budget -= 1;
L_003BFF18:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 8u, depth); } }
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BFF50; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], ld32((c.r[17].w[0] + 184u)));  if (t) { goto L_003BFF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 180u), 0u);  if (t) { goto L_003BFF80; } }
L_003BFF50:
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BFF68; } }
    st32((c.r[4].w[0] + 184u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003BFF80; } }
L_003BFF68:
    st32((c.r[4].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    st32((c.r[3].w[0] + 180u), c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 6;
L_003BFF80:
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 6u, depth); } }
    set32(c.r[3], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 4u, depth); } }
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 104u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 9u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BFFE8; } }
    c.budget -= 1;
L_003BFFC8:
    set32(c.r[6], ld32((c.r[6].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 208u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BFFC8u | kUnwind; return; } goto L_003BFFC8; } }
    c.budget -= 1;
L_003BFFE8:
    set32(c.r[3], ld32((c.r[5].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 3u, depth); } }
    set32(c.r[3], ld32((c.r[6].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 3u, depth); } }
    [[clang::musttail]] return unit_00A8(c, 2u, depth);
}

}
