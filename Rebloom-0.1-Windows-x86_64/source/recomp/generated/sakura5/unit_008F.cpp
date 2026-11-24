#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0,
    20, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0,
    43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0,
    72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0,
    0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0,
    330, 0, 331, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 341,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361,
    0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0,
};

void unit_008F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0035C000;
    case 2u: goto L_0035C030;
    case 3u: goto L_0035C040;
    case 4u: goto L_0035C048;
    case 5u: goto L_0035C050;
    case 6u: goto L_0035C0B0;
    case 7u: goto L_0035C0C8;
    case 8u: goto L_0035C0F0;
    case 9u: goto L_0035C164;
    case 10u: goto L_0035C184;
    case 11u: goto L_0035C18C;
    case 12u: goto L_0035C1B8;
    case 13u: goto L_0035C1D4;
    case 14u: goto L_0035C1F4;
    case 15u: goto L_0035C218;
    case 16u: goto L_0035C230;
    case 17u: goto L_0035C248;
    case 18u: goto L_0035C264;
    case 19u: goto L_0035C278;
    case 20u: goto L_0035C280;
    case 21u: goto L_0035C288;
    case 22u: goto L_0035C29C;
    case 23u: goto L_0035C2D0;
    case 24u: goto L_0035C308;
    case 25u: goto L_0035C32C;
    case 26u: goto L_0035C350;
    case 27u: goto L_0035C378;
    case 28u: goto L_0035C388;
    case 29u: goto L_0035C390;
    case 30u: goto L_0035C398;
    case 31u: goto L_0035C3A0;
    case 32u: goto L_0035C410;
    case 33u: goto L_0035C464;
    case 34u: goto L_0035C470;
    case 35u: goto L_0035C710;
    case 36u: goto L_0035C738;
    case 37u: goto L_0035C740;
    case 38u: goto L_0035C748;
    case 39u: goto L_0035C750;
    case 40u: goto L_0035C758;
    case 41u: goto L_0035C760;
    case 42u: goto L_0035C768;
    case 43u: goto L_0035C780;
    case 44u: goto L_0035C78C;
    case 45u: goto L_0035C798;
    case 46u: goto L_0035C7C0;
    case 47u: goto L_0035C828;
    case 48u: goto L_0035C850;
    case 49u: goto L_0035C874;
    case 50u: goto L_0035C880;
    case 51u: goto L_0035C8A4;
    case 52u: goto L_0035C8C0;
    case 53u: goto L_0035C8DC;
    case 54u: goto L_0035C970;
    case 55u: goto L_0035C9D4;
    case 56u: goto L_0035C9DC;
    case 57u: goto L_0035C9E8;
    case 58u: goto L_0035CA54;
    case 59u: goto L_0035CA5C;
    case 60u: goto L_0035CA68;
    case 61u: goto L_0035CAC0;
    case 62u: goto L_0035CAEC;
    case 63u: goto L_0035CB00;
    case 64u: goto L_0035CB24;
    case 65u: goto L_0035CB38;
    case 66u: goto L_0035CB5C;
    case 67u: goto L_0035CB70;
    case 68u: goto L_0035CBB8;
    case 69u: goto L_0035CC48;
    case 70u: goto L_0035CC60;
    case 71u: goto L_0035CC78;
    case 72u: goto L_0035CC80;
    case 73u: goto L_0035CC98;
    case 74u: goto L_0035CCB0;
    case 75u: goto L_0035CCBC;
    case 76u: goto L_0035CD00;
    case 77u: goto L_0035CD18;
    case 78u: goto L_0035CD30;
    case 79u: goto L_0035CD48;
    case 80u: goto L_0035CD60;
    case 81u: goto L_0035CDB0;
    case 82u: goto L_0035CDE0;
    case 83u: goto L_0035CDF8;
    case 84u: goto L_0035CE10;
    case 85u: goto L_0035CE28;
    case 86u: goto L_0035CE40;
    case 87u: goto L_0035CE58;
    case 88u: goto L_0035CEE8;
    case 89u: goto L_0035CF10;
    case 90u: goto L_0035CF28;
    case 91u: goto L_0035CF40;
    case 92u: goto L_0035CF50;
    case 93u: goto L_0035CF60;
    case 94u: goto L_0035CF70;
    case 95u: goto L_0035CF88;
    case 96u: goto L_0035CFA0;
    case 97u: goto L_0035CFB8;
    case 98u: goto L_0035CFD0;
    case 99u: goto L_0035CFE0;
    case 100u: goto L_0035D000;
    case 101u: goto L_0035D028;
    case 102u: goto L_0035D068;
    case 103u: goto L_0035D0B0;
    case 104u: goto L_0035D104;
    case 105u: goto L_0035D110;
    case 106u: goto L_0035D120;
    case 107u: goto L_0035D144;
    case 108u: goto L_0035D160;
    case 109u: goto L_0035D178;
    case 110u: goto L_0035D1A4;
    case 111u: goto L_0035D1E8;
    case 112u: goto L_0035D210;
    case 113u: goto L_0035D218;
    case 114u: goto L_0035D228;
    case 115u: goto L_0035D248;
    case 116u: goto L_0035D250;
    case 117u: goto L_0035D274;
    case 118u: goto L_0035D2A0;
    case 119u: goto L_0035D2C4;
    case 120u: goto L_0035D2E0;
    case 121u: goto L_0035D2F8;
    case 122u: goto L_0035D310;
    case 123u: goto L_0035D324;
    case 124u: goto L_0035D340;
    case 125u: goto L_0035D358;
    case 126u: goto L_0035D370;
    case 127u: goto L_0035D3B4;
    case 128u: goto L_0035D3E0;
    case 129u: goto L_0035D438;
    case 130u: goto L_0035D440;
    case 131u: goto L_0035D45C;
    case 132u: goto L_0035D478;
    case 133u: goto L_0035D490;
    case 134u: goto L_0035D4AC;
    case 135u: goto L_0035D4DC;
    case 136u: goto L_0035D504;
    case 137u: goto L_0035D528;
    case 138u: goto L_0035D530;
    case 139u: goto L_0035D54C;
    case 140u: goto L_0035D560;
    case 141u: goto L_0035D578;
    case 142u: goto L_0035D59C;
    case 143u: goto L_0035D5A4;
    case 144u: goto L_0035D5E4;
    case 145u: goto L_0035D600;
    case 146u: goto L_0035D618;
    case 147u: goto L_0035D630;
    case 148u: goto L_0035D650;
    case 149u: goto L_0035D678;
    case 150u: goto L_0035D6C8;
    case 151u: goto L_0035D6E0;
    case 152u: goto L_0035D6E8;
    case 153u: goto L_0035D70C;
    case 154u: goto L_0035D798;
    case 155u: goto L_0035D7EC;
    case 156u: goto L_0035D810;
    case 157u: goto L_0035D848;
    case 158u: goto L_0035D850;
    case 159u: goto L_0035D898;
    case 160u: goto L_0035D8C4;
    case 161u: goto L_0035D8D4;
    case 162u: goto L_0035D8DC;
    case 163u: goto L_0035D8F4;
    case 164u: goto L_0035D908;
    case 165u: goto L_0035D930;
    case 166u: goto L_0035D968;
    case 167u: goto L_0035D980;
    case 168u: goto L_0035D998;
    case 169u: goto L_0035D9C0;
    case 170u: goto L_0035D9E0;
    case 171u: goto L_0035DA0C;
    case 172u: goto L_0035DA20;
    case 173u: goto L_0035DA38;
    case 174u: goto L_0035DA68;
    case 175u: goto L_0035DA78;
    case 176u: goto L_0035DA98;
    case 177u: goto L_0035DAA0;
    case 178u: goto L_0035DAC4;
    case 179u: goto L_0035DAD4;
    case 180u: goto L_0035DADC;
    case 181u: goto L_0035DB00;
    case 182u: goto L_0035DB4C;
    case 183u: goto L_0035DB58;
    case 184u: goto L_0035DB64;
    case 185u: goto L_0035DB90;
    case 186u: goto L_0035DBA8;
    case 187u: goto L_0035DBC0;
    case 188u: goto L_0035DBC8;
    case 189u: goto L_0035DBD0;
    case 190u: goto L_0035DBF0;
    case 191u: goto L_0035DC0C;
    case 192u: goto L_0035DC28;
    case 193u: goto L_0035DC30;
    case 194u: goto L_0035DC94;
    case 195u: goto L_0035DCC8;
    case 196u: goto L_0035DCF0;
    case 197u: goto L_0035DCFC;
    case 198u: goto L_0035DD08;
    case 199u: goto L_0035DD58;
    case 200u: goto L_0035DD78;
    case 201u: goto L_0035DD88;
    case 202u: goto L_0035DD90;
    case 203u: goto L_0035DD98;
    case 204u: goto L_0035DDAC;
    case 205u: goto L_0035DE08;
    case 206u: goto L_0035DE2C;
    case 207u: goto L_0035DE34;
    case 208u: goto L_0035DE3C;
    case 209u: goto L_0035DE54;
    case 210u: goto L_0035DE70;
    case 211u: goto L_0035DE84;
    case 212u: goto L_0035DE8C;
    case 213u: goto L_0035DEB0;
    case 214u: goto L_0035DEF0;
    case 215u: goto L_0035DF14;
    case 216u: goto L_0035DF3C;
    case 217u: goto L_0035DF78;
    case 218u: goto L_0035DF94;
    case 219u: goto L_0035DFA4;
    case 220u: goto L_0035DFC0;
    case 221u: goto L_0035E000;
    case 222u: goto L_0035E040;
    case 223u: goto L_0035E064;
    case 224u: goto L_0035E08C;
    case 225u: goto L_0035E0C8;
    case 226u: goto L_0035E0E4;
    case 227u: goto L_0035E100;
    case 228u: goto L_0035E140;
    case 229u: goto L_0035E168;
    case 230u: goto L_0035E17C;
    case 231u: goto L_0035E1A0;
    case 232u: goto L_0035E1A8;
    case 233u: goto L_0035E1B0;
    case 234u: goto L_0035E1C8;
    case 235u: goto L_0035E1D8;
    case 236u: goto L_0035E1E8;
    case 237u: goto L_0035E260;
    case 238u: goto L_0035E278;
    case 239u: goto L_0035E294;
    case 240u: goto L_0035E2C0;
    case 241u: goto L_0035E2D8;
    case 242u: goto L_0035E2E8;
    case 243u: goto L_0035E2F8;
    case 244u: goto L_0035E308;
    case 245u: goto L_0035E318;
    case 246u: goto L_0035E328;
    case 247u: goto L_0035E340;
    case 248u: goto L_0035E358;
    case 249u: goto L_0035E370;
    case 250u: goto L_0035E388;
    case 251u: goto L_0035E3B8;
    case 252u: goto L_0035E3E8;
    case 253u: goto L_0035E418;
    case 254u: goto L_0035E430;
    case 255u: goto L_0035E460;
    case 256u: goto L_0035E478;
    case 257u: goto L_0035E4A8;
    case 258u: goto L_0035E4C0;
    case 259u: goto L_0035E4E4;
    case 260u: goto L_0035E500;
    case 261u: goto L_0035E520;
    case 262u: goto L_0035E548;
    case 263u: goto L_0035E568;
    case 264u: goto L_0035E580;
    case 265u: goto L_0035E5C0;
    case 266u: goto L_0035E5C8;
    case 267u: goto L_0035E5E0;
    case 268u: goto L_0035E5E8;
    case 269u: goto L_0035E600;
    case 270u: goto L_0035E670;
    case 271u: goto L_0035E690;
    case 272u: goto L_0035E910;
    case 273u: goto L_0035E940;
    case 274u: goto L_0035E9E8;
    case 275u: goto L_0035EA50;
    case 276u: goto L_0035EA68;
    case 277u: goto L_0035EA98;
    case 278u: goto L_0035EAD8;
    case 279u: goto L_0035EB00;
    case 280u: goto L_0035EB4C;
    case 281u: goto L_0035EB74;
    case 282u: goto L_0035EBA0;
    case 283u: goto L_0035EC08;
    case 284u: goto L_0035EC54;
    case 285u: goto L_0035EC60;
    case 286u: goto L_0035EC98;
    case 287u: goto L_0035ECC0;
    case 288u: goto L_0035ECE8;
    case 289u: goto L_0035ED08;
    case 290u: goto L_0035ED48;
    case 291u: goto L_0035ED80;
    case 292u: goto L_0035ED90;
    case 293u: goto L_0035EDA0;
    case 294u: goto L_0035EDB8;
    case 295u: goto L_0035EE30;
    case 296u: goto L_0035EE44;
    case 297u: goto L_0035EE68;
    case 298u: goto L_0035EED0;
    case 299u: goto L_0035EF08;
    case 300u: goto L_0035EF18;
    case 301u: goto L_0035EF40;
    case 302u: goto L_0035EF50;
    case 303u: goto L_0035EF60;
    case 304u: goto L_0035EF70;
    case 305u: goto L_0035EF80;
    case 306u: goto L_0035EFA8;
    case 307u: goto L_0035F068;
    case 308u: goto L_0035F0D8;
    case 309u: goto L_0035F0E8;
    case 310u: goto L_0035F100;
    case 311u: goto L_0035F138;
    case 312u: goto L_0035F148;
    case 313u: goto L_0035F1A0;
    case 314u: goto L_0035F1B4;
    case 315u: goto L_0035F1E8;
    case 316u: goto L_0035F208;
    case 317u: goto L_0035F220;
    case 318u: goto L_0035F238;
    case 319u: goto L_0035F260;
    case 320u: goto L_0035F2B8;
    case 321u: goto L_0035F32C;
    case 322u: goto L_0035F348;
    case 323u: goto L_0035F35C;
    case 324u: goto L_0035F378;
    case 325u: goto L_0035F394;
    case 326u: goto L_0035F3B8;
    case 327u: goto L_0035F3D4;
    case 328u: goto L_0035F3E4;
    case 329u: goto L_0035F3F4;
    case 330u: goto L_0035F400;
    case 331u: goto L_0035F408;
    case 332u: goto L_0035F414;
    case 333u: goto L_0035F41C;
    case 334u: goto L_0035F4A0;
    case 335u: goto L_0035F4D4;
    case 336u: goto L_0035F518;
    case 337u: goto L_0035F5C0;
    case 338u: goto L_0035F5C8;
    case 339u: goto L_0035F5E4;
    case 340u: goto L_0035F5F4;
    case 341u: goto L_0035F5FC;
    case 342u: goto L_0035F694;
    case 343u: goto L_0035F6A0;
    case 344u: goto L_0035F6A8;
    case 345u: goto L_0035F7A0;
    case 346u: goto L_0035F808;
    case 347u: goto L_0035F838;
    case 348u: goto L_0035F854;
    case 349u: goto L_0035F8B0;
    case 350u: goto L_0035F8B8;
    case 351u: goto L_0035F8EC;
    case 352u: goto L_0035F918;
    case 353u: goto L_0035F960;
    case 354u: goto L_0035F9A8;
    case 355u: goto L_0035FA20;
    case 356u: goto L_0035FA38;
    case 357u: goto L_0035FA54;
    case 358u: goto L_0035FA90;
    case 359u: goto L_0035FAB8;
    case 360u: goto L_0035FACC;
    case 361u: goto L_0035FAFC;
    case 362u: goto L_0035FB0C;
    case 363u: goto L_0035FB40;
    case 364u: goto L_0035FBAC;
    case 365u: goto L_0035FBD4;
    case 366u: goto L_0035FBEC;
    case 367u: goto L_0035FC00;
    case 368u: goto L_0035FC14;
    case 369u: goto L_0035FC40;
    case 370u: goto L_0035FC80;
    case 371u: goto L_0035FCA4;
    case 372u: goto L_0035FCC0;
    case 373u: goto L_0035FCF0;
    case 374u: goto L_0035FD1C;
    case 375u: goto L_0035FD48;
    case 376u: goto L_0035FD6C;
    case 377u: goto L_0035FD98;
    case 378u: goto L_0035FDC0;
    case 379u: goto L_0035FDE8;
    case 380u: goto L_0035FE10;
    case 381u: goto L_0035FE3C;
    case 382u: goto L_0035FE64;
    case 383u: goto L_0035FE98;
    case 384u: goto L_0035FEC0;
    case 385u: goto L_0035FEE8;
    case 386u: goto L_0035FF10;
    case 387u: goto L_0035FF38;
    case 388u: goto L_0035FF60;
    case 389u: goto L_0035FF94;
    case 390u: goto L_0035FFBC;
    case 391u: goto L_0035FFD8;
    case 392u: goto L_0035FFF0;
    default: bad_entry(c, 0x0035C000u); return;
    }
L_0035C000:
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035C068; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] - 22456u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] - 22488u);
    c.budget -= 6;
L_0035C030:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C040u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035C040u) [[unlikely]] return; }
L_0035C040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C048u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 119u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x0035C048u) [[unlikely]] return; }
L_0035C048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C050u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008E(c, 427u, depth + 1u); else { c.pc = 0x0035B350u; return; } if (c.pc != 0x0035C050u) [[unlikely]] return; }
L_0035C050:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 22448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C030u | kUnwind; return; } goto L_0035C030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0035C074; } }
    c.budget -= 1;
L_0035C068:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[22].w[0] - 22448u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0035C074:
    set32(c.r[3], c.r[21].w[0] - 22456u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] - 22488u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035C0B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 28u, depth); }
L_0035C0C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 29u, depth); }
L_0035C0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26880u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[5], c.r[18].w[0] - 22356u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035C1E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] - 22636u)));
    st32((c.r[5].w[0]), c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035C1CC; } }
    set32(c.r[2], c.r[2].w[0] - 22568u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035C164; } }
    set32(c.r[2], c.r[2].w[0] - 22480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C164u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008E(c, 420u, depth + 1u); else { c.pc = 0x0035B298u; return; } if (c.pc != 0x0035C164u) [[unlikely]] return; }
L_0035C164:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 22560u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035C184; } }
    set32(c.r[2], c.r[2].w[0] - 22476u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C184u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008E(c, 420u, depth + 1u); else { c.pc = 0x0035B298u; return; } if (c.pc != 0x0035C184u) [[unlikely]] return; }
L_0035C184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C18Cu);  if (depth < kMaxDepth) unit_008E(c, 451u, depth + 1u); else { c.pc = 0x0035B7F0u; return; } if (c.pc != 0x0035C18Cu) [[unlikely]] return; }
L_0035C18C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[16].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035C1BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 22564u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035C1B8; } }
    set32(c.r[2], c.r[2].w[0] - 22484u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1B8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008E(c, 420u, depth + 1u); else { c.pc = 0x0035B298u; return; } if (c.pc != 0x0035C1B8u) [[unlikely]] return; }
L_0035C1B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 1;
L_0035C1BC:
    set32(c.r[3], c.r[3].w[0] - 22496u);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 4;
L_0035C1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1D4u);  if (depth < kMaxDepth) unit_0097(c, 89u, depth + 1u); else { c.pc = 0x0037CDC0u; return; } if (c.pc != 0x0035C1D4u) [[unlikely]] return; }
L_0035C1D4:
    set32(c.r[3], c.r[18].w[0] - 22356u);
    st32((c.r[3].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
L_0035C1E0:
    set32(c.r[2], ld32((c.r[2].w[0] - 22352u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0035C200; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035C1F4u) [[unlikely]] return; }
L_0035C1F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0035C204; } }
    c.budget -= 1;
L_0035C200:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0035C204:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035C218:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C0F0u | kUnwind; return; } goto L_0035C0F0; }
L_0035C230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 93u, depth); }
L_0035C248:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 22468u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C264u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008E(c, 427u, depth + 1u); else { c.pc = 0x0035B350u; return; } if (c.pc != 0x0035C264u) [[unlikely]] return; }
L_0035C264:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0035C278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C278u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008E(c, 423u, depth + 1u); else { c.pc = 0x0035B2E8u; return; } if (c.pc != 0x0035C278u) [[unlikely]] return; }
L_0035C278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C280u);  if (depth < kMaxDepth) unit_008E(c, 451u, depth + 1u); else { c.pc = 0x0035B7F0u; return; } if (c.pc != 0x0035C280u) [[unlikely]] return; }
L_0035C280:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_0035C288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[3].w[0] - 22464u);  if (t) { goto L_0035C2C0; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C29Cu);  if (depth < kMaxDepth) unit_008E(c, 427u, depth + 1u); else { c.pc = 0x0035B350u; return; } if (c.pc != 0x0035C29Cu) [[unlikely]] return; }
L_0035C29C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0035C2C4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B2E8u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 423u, depth); }
L_0035C2C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0035C2C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035C2D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] - 22548u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_0035C338; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 22472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C308u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 113u, depth + 1u); else { c.pc = 0x00124E60u; return; } if (c.pc != 0x0035C308u) [[unlikely]] return; }
L_0035C308:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 12u);  if (t) { goto L_0035C320; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0035C33C; }
L_0035C320:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C32Cu);  if (depth < kMaxDepth) unit_0001(c, 119u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x0035C32Cu) [[unlikely]] return; }
L_0035C32C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0]), 0u);  goto L_0035C338; }
L_0035C338:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0035C33C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035C350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 22548u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B338u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 426u, depth); }
L_0035C378:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C388u);  if (depth < kMaxDepth) unit_0097(c, 114u, depth + 1u); else { c.pc = 0x0037D0C0u; return; } if (c.pc != 0x0035C388u) [[unlikely]] return; }
L_0035C388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C390u);  if (depth < kMaxDepth) unit_008F(c, 17u, depth + 1u); else { c.pc = 0x0035C248u; return; } if (c.pc != 0x0035C390u) [[unlikely]] return; }
L_0035C390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C398u);  if (depth < kMaxDepth) unit_008F(c, 48u, depth + 1u); else { c.pc = 0x0035C850u; return; } if (c.pc != 0x0035C398u) [[unlikely]] return; }
L_0035C398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C3A0u);  if (depth < kMaxDepth) unit_008F(c, 26u, depth + 1u); else { c.pc = 0x0035C350u; return; } if (c.pc != 0x0035C3A0u) [[unlikely]] return; }
L_0035C3A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 116u, depth); }
L_0035C410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0035C458; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[7], 0u + 25u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (t) { goto L_0035C45C; } }
L_0035C458:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035C45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C464u); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 455u, depth + 1u); else { c.pc = 0x0035B8F8u; return; } if (c.pc != 0x0035C464u) [[unlikely]] return; }
L_0035C464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035C470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035BAD8u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 468u, depth); }
L_0035C710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 22636u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0035C7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C738u);  if (depth < kMaxDepth) unit_008E(c, 467u, depth + 1u); else { c.pc = 0x0035BA88u; return; } if (c.pc != 0x0035C738u) [[unlikely]] return; }
L_0035C738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C740u);  if (depth < kMaxDepth) unit_008E(c, 477u, depth + 1u); else { c.pc = 0x0035BB70u; return; } if (c.pc != 0x0035C740u) [[unlikely]] return; }
L_0035C740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C748u);  if (depth < kMaxDepth) unit_008E(c, 482u, depth + 1u); else { c.pc = 0x0035BC40u; return; } if (c.pc != 0x0035C748u) [[unlikely]] return; }
L_0035C748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C750u);  if (depth < kMaxDepth) unit_008E(c, 492u, depth + 1u); else { c.pc = 0x0035BDE0u; return; } if (c.pc != 0x0035C750u) [[unlikely]] return; }
L_0035C750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C758u);  if (depth < kMaxDepth) unit_008E(c, 487u, depth + 1u); else { c.pc = 0x0035BD10u; return; } if (c.pc != 0x0035C758u) [[unlikely]] return; }
L_0035C758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C760u);  if (depth < kMaxDepth) unit_008E(c, 498u, depth + 1u); else { c.pc = 0x0035BF10u; return; } if (c.pc != 0x0035C760u) [[unlikely]] return; }
L_0035C760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C768u);  if (depth < kMaxDepth) unit_008E(c, 503u, depth + 1u); else { c.pc = 0x0035BFE0u; return; } if (c.pc != 0x0035C768u) [[unlikely]] return; }
L_0035C768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 22472u);
    set32(c.r[5], ld32((c.r[3].w[0] + 8392u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C780u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x0035C780u) [[unlikely]] return; }
L_0035C780:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C78Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 81u, depth + 1u); else { c.pc = 0x0037CC38u; return; } if (c.pc != 0x0035C78Cu) [[unlikely]] return; }
L_0035C78C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C798u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 82u, depth + 1u); else { c.pc = 0x0037CC50u; return; } if (c.pc != 0x0035C798u) [[unlikely]] return; }
L_0035C798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] - 22632u), 0u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 104u, depth); }
L_0035C7B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035C7C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0097(c, 70u, depth); }
L_0035C828:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 30416u);
    set32(c.r[3], c.r[3].w[0] + 30424u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_0035C850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 30416u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0035C878; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C874u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035C874u) [[unlikely]] return; }
L_0035C874:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0035C878:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035C880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 30424u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0035C8A8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8A4u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035C8A4u) [[unlikely]] return; }
L_0035C8A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0035C8A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035C8C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8DCu); st32((c.r[2].w[0] + 8400u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0095(c, 100u, depth + 1u); else { c.pc = 0x00374CD8u; return; } if (c.pc != 0x0035C8DCu) [[unlikely]] return; }
L_0035C8DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0094(c, 258u, depth); }
L_0035C970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8400u)));
    st64((c.r[29].w[0] + 184u), c.r[5].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[6].d[0]);
    set32(c.r[6], c.r[29].w[0] + 184u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 200u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 208u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 216u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 224u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 232u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 152u), c.f[12]);
    st32((c.r[29].w[0] + 156u), c.f[13]);
    st32((c.r[29].w[0] + 160u), c.f[14]);
    st32((c.r[29].w[0] + 164u), c.f[15]);
    st32((c.r[29].w[0] + 168u), c.f[16]);
    st32((c.r[29].w[0] + 172u), c.f[17]);
    st32((c.r[29].w[0] + 176u), c.f[18]);
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 180u), c.f[19]);  if (t) { goto L_0035C9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9D4u);  if (depth < kMaxDepth) unit_000A(c, 330u, depth + 1u); else { c.pc = 0x0014BF38u; return; } if (c.pc != 0x0035C9D4u) [[unlikely]] return; }
L_0035C9D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9DCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x0035C9DCu) [[unlikely]] return; }
L_0035C9DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0035C9E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[12], ld32((c.r[2].w[0] + 8400u)));
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[13], 0u + 2u);
    st64((c.r[29].w[0] + 184u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[6].d[0]);
    set32(c.r[6], c.r[29].w[0] + 184u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st64((c.r[29].w[0] + 200u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 208u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 216u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 224u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 232u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 152u), c.f[12]);
    st32((c.r[29].w[0] + 156u), c.f[13]);
    st32((c.r[29].w[0] + 160u), c.f[14]);
    st32((c.r[29].w[0] + 164u), c.f[15]);
    st32((c.r[29].w[0] + 168u), c.f[16]);
    st32((c.r[29].w[0] + 172u), c.f[17]);
    st32((c.r[29].w[0] + 176u), c.f[18]);
    c.budget -= 25;
    { const bool t = c.r[12].d[0] == c.r[13].d[0]; st32((c.r[29].w[0] + 180u), c.f[19]);  if (t) { goto L_0035CA5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA54u);  if (depth < kMaxDepth) unit_000A(c, 330u, depth + 1u); else { c.pc = 0x0014BF38u; return; } if (c.pc != 0x0035CA54u) [[unlikely]] return; }
L_0035CA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA5Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x0035CA5Cu) [[unlikely]] return; }
L_0035CA5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0035CA68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0095(c, 334u, depth); }
L_0035CAC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CAECu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035CAECu) [[unlikely]] return; }
L_0035CAEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035CB00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB24u); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_0096(c, 335u, depth + 1u); else { c.pc = 0x0037BCD0u; return; } if (c.pc != 0x0035CB24u) [[unlikely]] return; }
L_0035CB24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035CB38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB5Cu); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_0096(c, 335u, depth + 1u); else { c.pc = 0x0037BCD0u; return; } if (c.pc != 0x0035CB5Cu) [[unlikely]] return; }
L_0035CB5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035CB70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0095(c, 389u, depth); }
L_0035CBB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0095(c, 396u, depth); }
L_0035CC48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0095(c, 369u, depth); }
L_0035CC60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 1u, depth); }
L_0035CC78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CC80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 10u, depth); }
L_0035CC98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCB0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 41u, depth + 1u); else { c.pc = 0x003787D8u; return; } if (c.pc != 0x0035CCB0u) [[unlikely]] return; }
L_0035CCB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0096(c, 38u, depth + 1u); else { c.pc = 0x00378740u; return; } if (c.pc != 0x0035CCBCu) [[unlikely]] return; }
L_0035CCBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 32u, depth); }
L_0035CD00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 38u, depth); }
L_0035CD18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 41u, depth); }
L_0035CD30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 45u, depth); }
L_0035CD48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 46u, depth); }
L_0035CD60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 48u, depth); }
L_0035CDB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 61u, depth); }
L_0035CDE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 67u, depth); }
L_0035CDF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 68u, depth); }
L_0035CE10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 70u, depth); }
L_0035CE28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 71u, depth); }
L_0035CE40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 72u, depth); }
L_0035CE58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 73u, depth); }
L_0035CEE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 75u, depth); }
L_0035CF10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 42u, depth); }
L_0035CF28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0096(c, 43u, depth); }
L_0035CF40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CF50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF60u);  if (depth < kMaxDepth) unit_0096(c, 77u, depth + 1u); else { c.pc = 0x003790F8u; return; } if (c.pc != 0x0035CF60u) [[unlikely]] return; }
L_0035CF60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035CF70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 8408u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_0035CF88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 8408u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_0035CFA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00352EC0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 220u, depth); }
L_0035CFB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00352ED0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 221u, depth); }
L_0035CFD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CFE0u);  if (depth < kMaxDepth) unit_008C(c, 222u, depth + 1u); else { c.pc = 0x00352EE0u; return; } if (c.pc != 0x0035CFE0u) [[unlikely]] return; }
L_0035CFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] + 8424u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2688u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_0035D000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8424u);
    set32(c.r[6], 0u + 2688u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_0035D028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 160u), 0u);  c.pc = t; return; }
L_0035D068:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[7].w[0] + 8424u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[20].w[0])));  if (t) { goto L_0035D0D4; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0035D0B0:
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 168u);  if (t) { goto L_0035D0D4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D0B0u | kUnwind; return; } goto L_0035D0B0; }
L_0035D0D4:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035D1C0; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + 8424u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D104u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0096(c, 216u, depth + 1u); else { c.pc = 0x0037A898u; return; } if (c.pc != 0x0035D104u) [[unlikely]] return; }
L_0035D104:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D110u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 217u, depth + 1u); else { c.pc = 0x0037A8A0u; return; } if (c.pc != 0x0035D110u) [[unlikely]] return; }
L_0035D110:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] >> 31);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D120u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0096(c, 218u, depth + 1u); else { c.pc = 0x0037A8A8u; return; } if (c.pc != 0x0035D120u) [[unlikely]] return; }
L_0035D120:
    set32(c.r[7], c.r[2].w[0] >> 31);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D144u); set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);  if (depth < kMaxDepth) unit_008C(c, 229u, depth + 1u); else { c.pc = 0x00352FE0u; return; } if (c.pc != 0x0035D144u) [[unlikely]] return; }
L_0035D144:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_0035D1C0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D160u); set32(c.r[5], c.r[5].w[0] - 10632u);  if (depth < kMaxDepth) unit_008C(c, 263u, depth + 1u); else { c.pc = 0x00353658u; return; } if (c.pc != 0x0035D160u) [[unlikely]] return; }
L_0035D160:
    st32((c.r[18].w[0] + 8u), c.r[21].w[0]);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0035D198; } }
    set32(c.r[7], c.r[18].w[0] + 12u);
    c.budget -= 2;
L_0035D178:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D178u | kUnwind; return; } goto L_0035D178; } }
L_0035D198:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D1A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 101u, depth + 1u); else { c.pc = 0x0035D028u; return; } if (c.pc != 0x0035D1A4u) [[unlikely]] return; }
L_0035D1A4:
    st32((c.r[18].w[0] + 72u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 76u), 0u);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_0035D1C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035D1E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0035D238; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0035D210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D210u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_008C(c, 236u, depth + 1u); else { c.pc = 0x00353100u; return; } if (c.pc != 0x0035D210u) [[unlikely]] return; }
L_0035D210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D218u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x0035D218u) [[unlikely]] return; }
L_0035D218:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D228u); set32(c.r[6], 0u + 168u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0035D228u) [[unlikely]] return; }
L_0035D228:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354F80u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 71u, depth); }
L_0035D238:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035D248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_0035D250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D274u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008C(c, 157u, depth + 1u); else { c.pc = 0x00351710u; return; } if (c.pc != 0x0035D274u) [[unlikely]] return; }
L_0035D274:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00351528u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 148u, depth); }
L_0035D2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 56u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2C4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008C(c, 159u, depth + 1u); else { c.pc = 0x00351740u; return; } if (c.pc != 0x0035D2C4u) [[unlikely]] return; }
L_0035D2C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00351558u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 150u, depth); }
L_0035D2E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2F8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008C(c, 163u, depth + 1u); else { c.pc = 0x003517D0u; return; } if (c.pc != 0x0035D2F8u) [[unlikely]] return; }
L_0035D2F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00351578u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 151u, depth); }
L_0035D310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D324u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 101u, depth + 1u); else { c.pc = 0x0035D028u; return; } if (c.pc != 0x0035D324u) [[unlikely]] return; }
L_0035D324:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035D340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D358u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008C(c, 296u, depth + 1u); else { c.pc = 0x00353AB0u; return; } if (c.pc != 0x0035D358u) [[unlikely]] return; }
L_0035D358:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035D370:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[6].d[0] = 0ull | 51200ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D3B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D3B4u) [[unlikely]] return; }
L_0035D3B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0035D404; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] >> 31);  if (t) { goto L_0035D408; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_0035D3E0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_0035D404; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D3E0u | kUnwind; return; } goto L_0035D3E0; }
L_0035D404:
    set32(c.r[2], c.r[5].w[0] >> 31);
    c.budget -= 1;
L_0035D408:
    set32(c.r[3], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[20], c.r[29].w[0] + 16u);  if (t) { goto L_0035D468; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D438u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D438u) [[unlikely]] return; }
L_0035D438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D440u);  if (depth < kMaxDepth) unit_008C(c, 221u, depth + 1u); else { c.pc = 0x00352ED0u; return; } if (c.pc != 0x0035D440u) [[unlikely]] return; }
L_0035D440:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_0035D654; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 9856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D45Cu); set32(c.r[5], c.r[5].w[0] - 9824u);  if (depth < kMaxDepth) unit_008D(c, 110u, depth + 1u); else { c.pc = 0x003564E8u; return; } if (c.pc != 0x0035D45Cu) [[unlikely]] return; }
L_0035D45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0035D654; } }
    c.budget -= 1;
L_0035D468:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D478u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 312u, depth + 1u); else { c.pc = 0x0037B6E0u; return; } if (c.pc != 0x0035D478u) [[unlikely]] return; }
L_0035D478:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D490u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D490u) [[unlikely]] return; }
L_0035D490:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_0035D4C8; }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 256u, depth + 1u); else { c.pc = 0x003534E0u; return; } if (c.pc != 0x0035D4ACu) [[unlikely]] return; }
L_0035D4AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0035D4C4; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D4E8; } }
L_0035D4C4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0035D4C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4DCu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D4DCu) [[unlikely]] return; }
L_0035D4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0035D65C; } }
    c.budget -= 1;
L_0035D4E8:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { st32((c.r[19].w[0] + 152u), c.r[17].w[0]);  goto L_0035D558; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 154u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0035D510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D504u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008C(c, 255u, depth + 1u); else { c.pc = 0x00353440u; return; } if (c.pc != 0x0035D504u) [[unlikely]] return; }
L_0035D504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 152u), c.r[17].w[0]);  if (t) { goto L_0035D558; } }
    c.budget -= 1;
L_0035D510:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D528u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D528u) [[unlikely]] return; }
L_0035D528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D530u);  if (depth < kMaxDepth) unit_008C(c, 221u, depth + 1u); else { c.pc = 0x00352ED0u; return; } if (c.pc != 0x0035D530u) [[unlikely]] return; }
L_0035D530:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_0035D654; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 9792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D54Cu); set32(c.r[5], c.r[5].w[0] - 9760u);  if (depth < kMaxDepth) unit_008D(c, 110u, depth + 1u); else { c.pc = 0x003564E8u; return; } if (c.pc != 0x0035D54Cu) [[unlikely]] return; }
L_0035D54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0035D654; } }
    c.budget -= 1;
L_0035D558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D560u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 265u, depth + 1u); else { c.pc = 0x00353680u; return; } if (c.pc != 0x0035D560u) [[unlikely]] return; }
L_0035D560:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035D570; } }
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0035D570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D578u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 265u, depth + 1u); else { c.pc = 0x00353680u; return; } if (c.pc != 0x0035D578u) [[unlikely]] return; }
L_0035D578:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 64u);  if (t) { goto L_0035D59C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[19].w[0] + 88u);
    c.r[2].d[0] = c.r[6].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D59Cu); if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x0035D59Cu) [[unlikely]] return; }
L_0035D59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D5A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 265u, depth + 1u); else { c.pc = 0x00353680u; return; } if (c.pc != 0x0035D5A4u) [[unlikely]] return; }
L_0035D5A4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - 10u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_0035D5D0; }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_0035D5CC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0035D5F0; } }
L_0035D5CC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0035D5D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D5E4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D5E4u) [[unlikely]] return; }
L_0035D5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 232u)));  if (t) { goto L_0035D634; } }
    c.budget -= 1;
L_0035D5F0:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D600u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 312u, depth + 1u); else { c.pc = 0x0037B6E0u; return; } if (c.pc != 0x0035D600u) [[unlikely]] return; }
L_0035D600:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D618u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D618u) [[unlikely]] return; }
L_0035D618:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D630u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D630u) [[unlikely]] return; }
L_0035D630:
    set32(c.r[2], ld32((c.r[18].w[0] + 232u)));
    c.budget -= 1;
L_0035D634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035D650; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8416u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0035D650; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D650u); set32(c.r[5], ld32((c.r[4].w[0] + 20u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D650u) [[unlikely]] return; }
L_0035D650:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0035D654:
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_0035D65C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035D678:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[17], c.r[18].w[0] + 28u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[16], c.r[18].w[0] + 12u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_0035D6E0; } }
    c.budget -= 1;
L_0035D6C8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[8], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[8].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D6E0u) [[unlikely]] return; }
L_0035D6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6E8u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_008C(c, 267u, depth + 1u); else { c.pc = 0x00353690u; return; } if (c.pc != 0x0035D6E8u) [[unlikely]] return; }
L_0035D6E8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 16384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D6C8u | kUnwind; return; } goto L_0035D6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D70Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 216u, depth + 1u); else { c.pc = 0x0037A898u; return; } if (c.pc != 0x0035D70Cu) [[unlikely]] return; }
L_0035D70C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    st32((c.r[23].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 17;
    if (c.r[3].sd[0] < 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x1FFF0000u);  goto L_0035D760; }
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_0035D764; } }
    c.budget -= 1;
L_0035D760:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 1;
L_0035D764:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353678u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 264u, depth); }
L_0035D798:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[20], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[17], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_0035D7EC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));  goto L_0035D7F0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));  goto L_0035D7F0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7ECu); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D7ECu) [[unlikely]] return; }
L_0035D7EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 1;
L_0035D7F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0035D828; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D810u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D810u) [[unlikely]] return; }
L_0035D810:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0035D828; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035DADC; } }
    c.budget -= 1;
L_0035D828:
    set32(c.r[19], c.r[18].w[0] + 20u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D848u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D848u) [[unlikely]] return; }
L_0035D848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D850u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 265u, depth + 1u); else { c.pc = 0x00353680u; return; } if (c.pc != 0x0035D850u) [[unlikely]] return; }
L_0035D850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D9D8; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull | 32769ull;  if (t) { goto L_0035D9D8; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0035D9D8; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D898u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003559E0u; return; } if (c.pc != 0x0035D898u) [[unlikely]] return; }
L_0035D898:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 156u)));  goto L_0035D8F8; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_0035DA54; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8C4u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 312u, depth + 1u); else { c.pc = 0x0037B6E0u; return; } if (c.pc != 0x0035D8C4u) [[unlikely]] return; }
L_0035D8C4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
L_0035D8D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8DCu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D8DCu) [[unlikely]] return; }
L_0035D8DC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8F4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D8F4u) [[unlikely]] return; }
L_0035D8F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 156u)));
    c.budget -= 1;
L_0035D8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0035DADC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { goto L_0035D9A4; } }
L_0035D908:
    c.r[16].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0035D95C; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0035D95C; }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0035D930:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_0035D958; }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D930u | kUnwind; return; } goto L_0035D930; }
    c.r[16].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0035D958:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0035D95C:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D968u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 312u, depth + 1u); else { c.pc = 0x0037B6E0u; return; } if (c.pc != 0x0035D968u) [[unlikely]] return; }
L_0035D968:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D980u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D980u) [[unlikely]] return; }
L_0035D980:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D998u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D998u) [[unlikely]] return; }
L_0035D998:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0035DAE0; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0035D9A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9C0u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D9C0u) [[unlikely]] return; }
L_0035D9C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D908u | kUnwind; return; } goto L_0035D908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0035DAE0; } }
    c.budget -= 1;
L_0035D9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 251u, depth + 1u); else { c.pc = 0x0035E3B8u; return; } if (c.pc != 0x0035D9E0u) [[unlikely]] return; }
L_0035D9E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0035DA18; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA0Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DA0Cu) [[unlikely]] return; }
L_0035DA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0035DAE0; } }
    c.budget -= 1;
L_0035DA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 250u, depth + 1u); else { c.pc = 0x0035E388u; return; } if (c.pc != 0x0035DA20u) [[unlikely]] return; }
L_0035DA20:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA38u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DA38u) [[unlikely]] return; }
L_0035DA38:
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035DA70; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0035DA54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA68u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DA68u) [[unlikely]] return; }
L_0035DA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0035DAE0; } }
L_0035DA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA78u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 265u, depth + 1u); else { c.pc = 0x00353680u; return; } if (c.pc != 0x0035DA78u) [[unlikely]] return; }
L_0035DA78:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0035DA98; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA98u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DA98u) [[unlikely]] return; }
L_0035DA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAA0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 265u, depth + 1u); else { c.pc = 0x00353680u; return; } if (c.pc != 0x0035DAA0u) [[unlikely]] return; }
L_0035DAA0:
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[18].w[0] + 24u)));  goto L_0035DAC8; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAC4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DAC4u) [[unlikely]] return; }
L_0035DAC4:
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_0035DAC8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAD4u); set32(c.r[5], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_008C(c, 294u, depth + 1u); else { c.pc = 0x00353A18u; return; } if (c.pc != 0x0035DAD4u) [[unlikely]] return; }
L_0035DAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DADCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 295u, depth + 1u); else { c.pc = 0x00353A98u; return; } if (c.pc != 0x0035DADCu) [[unlikely]] return; }
L_0035DADC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0035DAE0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035DB00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[20], c.r[18].w[0] + 12u);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    set32(c.r[21], c.r[18].w[0] + 28u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    set32(c.r[23], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB4Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 271u, depth + 1u); else { c.pc = 0x00353738u; return; } if (c.pc != 0x0035DB4Cu) [[unlikely]] return; }
L_0035DB4C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB58u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 301u, depth + 1u); else { c.pc = 0x00353B38u; return; } if (c.pc != 0x0035DB58u) [[unlikely]] return; }
L_0035DB58:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB64u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008C(c, 302u, depth + 1u); else { c.pc = 0x00353B40u; return; } if (c.pc != 0x0035DB64u) [[unlikely]] return; }
L_0035DB64:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[30], c.r[29].w[0] + 16u);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB90u); if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0096(c, 312u, depth + 1u); else { c.pc = 0x0037B6E0u; return; } if (c.pc != 0x0035DB90u) [[unlikely]] return; }
L_0035DB90:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBA8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DBA8u) [[unlikely]] return; }
L_0035DBA8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBC0u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DBC0u) [[unlikely]] return; }
L_0035DBC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DC28; } }
L_0035DBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBD0u);  if (depth < kMaxDepth) unit_0096(c, 312u, depth + 1u); else { c.pc = 0x0037B6E0u; return; } if (c.pc != 0x0035DBD0u) [[unlikely]] return; }
L_0035DBD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { goto L_0035DBF0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBF0u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DBF0u) [[unlikely]] return; }
L_0035DBF0:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC0Cu); set32(c.r[21], c.r[21].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DC0Cu) [[unlikely]] return; }
L_0035DC0C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC28u); set32(c.r[20], c.r[20].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DC28u) [[unlikely]] return; }
L_0035DC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC30u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_008C(c, 267u, depth + 1u); else { c.pc = 0x00353690u; return; } if (c.pc != 0x0035DC30u) [[unlikely]] return; }
L_0035DC30:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[19].w[0] << 1);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[30].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DBC8u | kUnwind; return; } goto L_0035DBC8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[7], c.r[7].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[6], c.r[6].w[0] + c.r[19].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC94u); st32((c.r[18].w[0] + 64u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_008C(c, 299u, depth + 1u); else { c.pc = 0x00353AF8u; return; } if (c.pc != 0x0035DC94u) [[unlikely]] return; }
L_0035DC94:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0035DCC8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 271u, depth + 1u); else { c.pc = 0x00353738u; return; } if (c.pc != 0x0035DCF0u) [[unlikely]] return; }
L_0035DCF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCFCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 301u, depth + 1u); else { c.pc = 0x00353B38u; return; } if (c.pc != 0x0035DCFCu) [[unlikely]] return; }
L_0035DCFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD08u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 302u, depth + 1u); else { c.pc = 0x00353B40u; return; } if (c.pc != 0x0035DD08u) [[unlikely]] return; }
L_0035DD08:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] - c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[5].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035DD58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 293u, depth + 1u); else { c.pc = 0x00353A10u; return; } if (c.pc != 0x0035DD78u) [[unlikely]] return; }
L_0035DD78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DD88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 154u, depth + 1u); else { c.pc = 0x0035D798u; return; } if (c.pc != 0x0035DD88u) [[unlikely]] return; }
L_0035DD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 15u, depth + 1u); else { c.pc = 0x00354100u; return; } if (c.pc != 0x0035DD90u) [[unlikely]] return; }
L_0035DD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 293u, depth + 1u); else { c.pc = 0x00353A10u; return; } if (c.pc != 0x0035DD98u) [[unlikely]] return; }
L_0035DD98:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 152u)));  goto L_0035DDB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 181u, depth + 1u); else { c.pc = 0x0035DB00u; return; } if (c.pc != 0x0035DDACu) [[unlikely]] return; }
L_0035DDAC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 152u)));
    c.budget -= 1;
L_0035DDB0:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_0035DDDC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_0035DDDC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_0035DDDC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_0035DDDC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0035DDF8; } }
L_0035DDDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DCC8u | kUnwind; return; } goto L_0035DCC8; }
L_0035DDF8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035DE08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 7;
    if (c.r[2].sd[0] <= 0) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_0035DE40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE2Cu);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x0035DE2Cu) [[unlikely]] return; }
L_0035DE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 213u, depth + 1u); else { c.pc = 0x0035DEB0u; return; } if (c.pc != 0x0035DE34u) [[unlikely]] return; }
L_0035DE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE3Cu);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x0035DE3Cu) [[unlikely]] return; }
L_0035DE3C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_0035DE40:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0035DE60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 199u, depth + 1u); else { c.pc = 0x0035DD58u; return; } if (c.pc != 0x0035DE54u) [[unlikely]] return; }
L_0035DE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  if (t) { goto L_0035DE74; } }
    c.budget -= 1;
L_0035DE60:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  goto L_0035DE74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 126u, depth + 1u); else { c.pc = 0x0035D370u; return; } if (c.pc != 0x0035DE70u) [[unlikely]] return; }
L_0035DE70:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_0035DE74:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0035DEA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE84u);  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x0035DE84u) [[unlikely]] return; }
L_0035DE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 221u, depth + 1u); else { c.pc = 0x0035E000u; return; } if (c.pc != 0x0035DE8Cu) [[unlikely]] return; }
L_0035DE8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00354F80u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 71u, depth); }
L_0035DEA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035DEB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[17], c.r[2].w[0] << 1);
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = ld8((c.r[18].w[0] + 2u));  if (t) { goto L_0035DF4C; } }
    set32(c.r[16], c.r[18].w[0] + 12u);
    c.budget -= 2;
L_0035DEF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF14u); set32(c.r[19], c.r[19].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DF14u) [[unlikely]] return; }
L_0035DF14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[8], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF3Cu); if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[8].d[0];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DF3Cu) [[unlikely]] return; }
L_0035DF3C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[18].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DEF0u | kUnwind; return; } goto L_0035DEF0; } }
L_0035DF4C:
    set32(c.r[2], c.r[17].w[0] >> 31);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[17], c.r[20].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035DFE0; } }
    set32(c.r[2], c.r[4].w[0] << 24);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0035DFD0; } }
    set32(c.r[16], c.r[18].w[0] + 12u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0035DF78:
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF94u); set32(c.r[19], c.r[19].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DF94u) [[unlikely]] return; }
L_0035DF94:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFA4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0035DFA4u) [[unlikely]] return; }
L_0035DFA4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFC0u); set32(c.r[16], c.r[16].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DFC0u) [[unlikely]] return; }
L_0035DFC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DF78u | kUnwind; return; } goto L_0035DF78; }
L_0035DFD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    st32((c.r[18].w[0] + 160u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_0035DFE0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035E000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[17], c.r[2].w[0] << 1);
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = ld8((c.r[18].w[0] + 2u));  if (t) { goto L_0035E09C; } }
    set32(c.r[16], c.r[18].w[0] + 12u);
    c.budget -= 2;
L_0035E040:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E064u); set32(c.r[19], c.r[19].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E064u) [[unlikely]] return; }
L_0035E064:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[8], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E08Cu); if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[8].d[0];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E08Cu) [[unlikely]] return; }
L_0035E08C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[18].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035E040u | kUnwind; return; } goto L_0035E040; } }
L_0035E09C:
    set32(c.r[2], c.r[17].w[0] >> 31);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[17], c.r[20].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035E120; } }
    set32(c.r[2], c.r[4].w[0] << 24);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0035E110; } }
    set32(c.r[16], c.r[18].w[0] + 12u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0035E0C8:
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E0E4u); set32(c.r[19], c.r[19].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E0E4u) [[unlikely]] return; }
L_0035E0E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E100u); set32(c.r[16], c.r[16].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E100u) [[unlikely]] return; }
L_0035E100:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035E0C8u | kUnwind; return; } goto L_0035E0C8; }
L_0035E110:
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_0035E120:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035E140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 8424u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_0035E168:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0035E180; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E17Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 205u, depth + 1u); else { c.pc = 0x0035DE08u; return; } if (c.pc != 0x0035E17Cu) [[unlikely]] return; }
L_0035E17C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0035E180:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 168u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035E168u | kUnwind; return; } goto L_0035E168; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E1A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_0035E1A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  c.pc = t; return; }
L_0035E1B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353B48u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 303u, depth); }
L_0035E1C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.r[5].w[0]);  c.pc = t; return; }
L_0035E1D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 156u), c.r[5].w[0]);  c.pc = t; return; }
L_0035E1E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353830u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 285u, depth); }
L_0035E260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353438u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 254u, depth); }
L_0035E278:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E294u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 70u, depth + 1u); else { c.pc = 0x00354F68u; return; } if (c.pc != 0x0035E294u) [[unlikely]] return; }
L_0035E294:
    c.budget -= 2;
    if (c.r[17].sd[0] <= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  goto L_0035E2B0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0035E2B8; } }
    c.budget -= 1;
L_0035E2B0:
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_0035E2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E2C0u);  if (depth < kMaxDepth) unit_008D(c, 71u, depth + 1u); else { c.pc = 0x00354F80u; return; } if (c.pc != 0x0035E2C0u) [[unlikely]] return; }
L_0035E2C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E2D8:
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), c.r[5].w[0]);  c.pc = t; return; }
L_0035E2E8:
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.r[5].w[0]);  c.pc = t; return; }
L_0035E2F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  c.pc = t; return; }
L_0035E308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  c.pc = t; return; }
L_0035E318:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), c.r[5].w[0]);  c.pc = t; return; }
L_0035E328:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353680u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 265u, depth); }
L_0035E340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353688u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 266u, depth); }
L_0035E358:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353690u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 267u, depth); }
L_0035E370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003536C8u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 269u, depth); }
L_0035E388:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353728u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 270u, depth); }
L_0035E3B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353738u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 271u, depth); }
L_0035E3E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353750u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 272u, depth); }
L_0035E418:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353758u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 273u, depth); }
L_0035E430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0035E450; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353760u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 274u, depth); }
L_0035E450:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035E460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353778u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 275u, depth); }
L_0035E478:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353780u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 276u, depth); }
L_0035E4A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E4C0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008C(c, 277u, depth + 1u); else { c.pc = 0x00353788u; return; } if (c.pc != 0x0035E4C0u) [[unlikely]] return; }
L_0035E4C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035E4F0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0035E4F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E4E4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008C(c, 278u, depth + 1u); else { c.pc = 0x00353790u; return; } if (c.pc != 0x0035E4E4u) [[unlikely]] return; }
L_0035E4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0035E4F4; } }
    c.budget -= 1;
L_0035E4F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0035E4F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035E500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E520u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008C(c, 277u, depth + 1u); else { c.pc = 0x00353788u; return; } if (c.pc != 0x0035E520u) [[unlikely]] return; }
L_0035E520:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u - 128u);  if (t) { goto L_0035E550; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 128u);  goto L_0035E550; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E548u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 279u, depth + 1u); else { c.pc = 0x00353798u; return; } if (c.pc != 0x0035E548u) [[unlikely]] return; }
L_0035E548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0035E554; } }
L_0035E550:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0035E554:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E568:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E580u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008C(c, 277u, depth + 1u); else { c.pc = 0x00353788u; return; } if (c.pc != 0x0035E580u) [[unlikely]] return; }
L_0035E580:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0035E5B0; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0035E5B0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003537A8u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 280u, depth); }
L_0035E5B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035E5C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 152u)));  c.pc = t; return; }
L_0035E5C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003536C0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 268u, depth); }
L_0035E5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 88u);  c.pc = t; return; }
L_0035E5E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003537B0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 281u, depth); }
L_0035E600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003537F0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 283u, depth); }
L_0035E670:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 11112u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0035E690:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 11112u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0035E910:
    set32(c.r[3], c.r[6].w[0] + 31u);
    set32(c.r[6], c.r[6].w[0] + 62u);
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[6].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 4u);  c.pc = t; return; }
L_0035E940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[11], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] ^ 1ull;
    set32(c.r[3], 0u + 64u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[11].d[0];
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[17].w[0], c.r[3].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 25;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0035E9A0u);  goto L_0035E9A4; }
L_0035E9A4:
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 4u);
    c.r[11].d[0] = c.hi.d[0];
    set32(c.r[11], c.r[3].w[0] - c.r[11].w[0]);
    mmi::div(c, 0, c.r[11].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[8].w[0]);
    st32((c.r[19].w[0]), c.r[8].w[0]);
    set32(c.r[9], c.r[2].w[0] + 31u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[9].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] << 3);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9E8u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008D(c, 91u, depth + 1u); else { c.pc = 0x00355A40u; return; } if (c.pc != 0x0035E9E8u) [[unlikely]] return; }
L_0035E9E8:
    set32(c.r[16], c.r[16].w[0] << 1);
    set32(c.r[6], 0u + 2048u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] + 2051u);
    c.r[4].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[7], c.r[6].w[0] + 2047u);
    c.r[5].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[5], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA50u); set32(c.r[6], c.r[17].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_008F(c, 272u, depth + 1u); else { c.pc = 0x0035E910u; return; } if (c.pc != 0x0035EA50u) [[unlikely]] return; }
L_0035EA50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA68u); set32(c.r[6], c.r[23].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_008F(c, 272u, depth + 1u); else { c.pc = 0x0035E910u; return; } if (c.pc != 0x0035EA68u) [[unlikely]] return; }
L_0035EA68:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035EA98:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[9].w[0]);
    set32(c.r[9], c.r[29].w[0] + 20u);
    set32(c.r[2], c.r[29].w[0] + 24u);
    set32(c.r[8], c.r[29].w[0] + 19u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 18u);
    set32(c.r[10], c.r[29].w[0] + 21u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EAD8u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008D(c, 81u, depth + 1u); else { c.pc = 0x00355230u; return; } if (c.pc != 0x0035EAD8u) [[unlikely]] return; }
L_0035EAD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 21u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 19u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035EB00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB4Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035EB4Cu) [[unlikely]] return; }
L_0035EB4C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0035EB80; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB74u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035EB74u) [[unlikely]] return; }
L_0035EB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035EC9C; } }
    c.budget -= 1;
L_0035EB80:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0035EBE8; } }
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0035EC80; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 2;
L_0035EBA0:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    set32(c.r[3], c.r[4].w[0] << 8);
    set32(c.r[2], c.r[4].w[0] >> 24);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] & c.r[9].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[8].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035EBA0u | kUnwind; return; } goto L_0035EBA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0])));  if (t) { goto L_0035EC84; } }
L_0035EBE8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035EC40; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0035EC80; } }
    set32(c.r[7], 0u - 256u);
    c.budget -= 2;
L_0035EC08:
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[4].d[0] = c.r[8].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035EC08u | kUnwind; return; } goto L_0035EC08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0])));  if (t) { goto L_0035EC84; } }
    c.budget -= 1;
L_0035EC40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_0035EC60; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC54u); c.r[6].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x0035EC54u) [[unlikely]] return; }
L_0035EC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0])));  if (t) { goto L_0035EC84; } }
    c.budget -= 1;
L_0035EC60:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035EC60u | kUnwind; return; } goto L_0035EC60; } }
    c.budget -= 1;
L_0035EC80:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_0035EC84:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC98u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035EC98u) [[unlikely]] return; }
L_0035EC98:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0035EC9C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035ECC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17216u);
    set32(c.r[6], 0u + 192u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_0035ECE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 17216u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0035ED38; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_0035ED08:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.r[4].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { goto L_0035ED3C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ED08u | kUnwind; return; } goto L_0035ED08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035ED40; } }
    c.budget -= 1;
L_0035ED38:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0035ED3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035ED40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_0035ED48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0035ED70; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_0035ED70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035ED80:
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0035ED90:
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0035EDA0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0035EDB8:
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));  if (t) { goto L_0035EE28; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = ld16((c.r[6].w[0] + 8u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 32767ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[5].sd[0] < -32768ll ? 1ull : 0ull;  if (t) { goto L_0035EE10; } }
    set32(c.r[2], 0u - 32768u);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));  if (t) { goto L_0035EE14; } }
L_0035EE10:
    set32(c.r[3], 0u + 32767u);
    c.budget -= 1;
L_0035EE14:
    st16((c.r[6].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[6].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0035EE28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_0035EE30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 288u, depth + 1u); else { c.pc = 0x0035ECE8u; return; } if (c.pc != 0x0035EE44u) [[unlikely]] return; }
L_0035EE44:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);  if (t) { goto L_0035EEBC; } }
    set32(c.r[4], c.r[3].w[0] + 17408u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0035EE98; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0035EE68:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 144u);
    c.r[3].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 144u);  if (t) { goto L_0035EE9C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035EE68u | kUnwind; return; } goto L_0035EE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[16].w[0]);  if (t) { goto L_0035EEA0; } }
    c.budget -= 1;
L_0035EE98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0035EE9C:
    st32((c.r[4].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 1;
L_0035EEA0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 136u), c.r[8].w[0]);  if (t) { goto L_0035EEB8; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035EEBC; } }
L_0035EEB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035EEBC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035EED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0035EEF8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 144u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_0035EEF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035EF08:
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0035EF18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 2u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF40u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 74u, depth + 1u); else { c.pc = 0x00354FA8u; return; } if (c.pc != 0x0035EF40u) [[unlikely]] return; }
L_0035EF40:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF50u); c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2u)));  if (depth < kMaxDepth) unit_008F(c, 299u, depth + 1u); else { c.pc = 0x0035EF08u; return; } if (c.pc != 0x0035EF50u) [[unlikely]] return; }
L_0035EF50:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF60u); c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2u)));  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0035ED80u; return; } if (c.pc != 0x0035EF60u) [[unlikely]] return; }
L_0035EF60:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035EF70:
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0035EF80:
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));  if (t) { goto L_0035EFC8; } }
    set32(c.r[3], ld32((c.r[8].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[8].w[0] + 120u), 0u);  goto L_0035EFC8; }
    set32(c.r[2], c.r[8].w[0] + 24u);
    c.budget -= 2;
L_0035EFA8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035EFA8u | kUnwind; return; } goto L_0035EFA8; } }
    st32((c.r[8].w[0] + 120u), 0u);
    c.budget -= 1;
L_0035EFC8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0035F05C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 8u)));
    set32(c.r[5], 0u + 32767u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 6u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[2], c.r[9].w[0] - c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 24u);  if (t) { goto L_0035F028; } }
    set32(c.r[2], 0u - 32768u);
    c.r[3].d[0] = c.r[6].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[6].d[0];  if (t) { goto L_0035F02C; } }
    c.budget -= 1;
L_0035F028:
    set32(c.r[5], 0u + 32767u);
    c.budget -= 1;
L_0035F02C:
    set32(c.r[2], c.r[5].w[0] << 16);
    set32(c.r[3], ld32((c.r[8].w[0] + 120u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_0035F040; }
L_0035F040:
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0035F050; } }
    st32((c.r[8].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_0035F050:
    c.r[2].d[0] = ld16((c.r[8].w[0] + 8u));
    st16((c.r[8].w[0] + 8u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[8].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0035F05C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035F068:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x0035F080u);  goto L_0035F084; }
L_0035F084:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 11128u)));
    set32(c.r[2], c.r[7].w[0] - 1u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[6].d[0] = c.r[3].sd[0] < 1ll ? 1ull : 0ull;
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[8].d[0];
    c.budget -= 15;
    { const bool t = c.r[7].d[0] != 0ull; st16((c.r[16].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0035F0D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[1].w[0] - 9624u));  if (t) { goto L_0035F0E8; } }
    c.budget -= 1;
L_0035F0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F0D8u);  if (depth < kMaxDepth) unit_000B(c, 87u, depth + 1u); else { c.pc = 0x0014E9A0u; return; } if (c.pc != 0x0035F0D8u) [[unlikely]] return; }
L_0035F0D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = ld64((c.r[1].w[0] - 9616u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F0E8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0014E6F0u; return; } if (c.pc != 0x0035F0E8u) [[unlikely]] return; }
L_0035F0E8:
    st64((c.r[16].w[0] + 128u), c.r[2].d[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035F100:
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_0035F114; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 24u)));
    c.budget -= 1;
L_0035F114:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035F138:
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 88u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_0035F148:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    set32(c.r[30], c.r[23].w[0] + 4u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[23].w[0] + 88u)));
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[29].w[0] + 16u), c.r[7].w[0]);  if (t) { goto L_0035F1D8; } }
    c.r[16].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_0035F1A0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F1B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035F1B4u) [[unlikely]] return; }
L_0035F1B4:
    set32(c.r[17], c.r[2].w[0] >> 1);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035F284; } }
    set32(c.r[3], ld32((c.r[23].w[0] + 88u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F1A0u | kUnwind; return; } goto L_0035F1A0; }
L_0035F1D8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0035F280; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0035F1E8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0035F270; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[22], c.r[18].w[0] << 1);
    set32(c.r[16], c.r[21].w[0] + c.r[30].w[0]);
    set32(c.r[19], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
L_0035F208:
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F220u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035F220u) [[unlikely]] return; }
L_0035F220:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F238u); set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x0035F238u) [[unlikely]] return; }
L_0035F238:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 15);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F260u); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035F260u) [[unlikely]] return; }
L_0035F260:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F208u | kUnwind; return; } goto L_0035F208; }
    set32(c.r[3], ld32((c.r[23].w[0] + 88u)));
    c.budget -= 1;
L_0035F270:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F1E8u | kUnwind; return; } goto L_0035F1E8; } }
L_0035F280:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0035F284:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0035F2B8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    set32(c.r[22], c.r[19].w[0] + 12u);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    set32(c.r[23], c.r[19].w[0] + 8u);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    set32(c.r[30], c.r[20].w[0] << 1);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[3], c.r[20].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    set32(c.r[2], c.r[30].w[0] + 128u);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 128u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F32Cu); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 304u, depth + 1u); else { c.pc = 0x0035EF70u; return; } if (c.pc != 0x0035F32Cu) [[unlikely]] return; }
L_0035F32C:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0035F370; } }
    set32(c.r[21], c.r[20].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[16], c.r[2].w[0] + 144u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 4;
L_0035F348:
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F35Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 305u, depth + 1u); else { c.pc = 0x0035EF80u; return; } if (c.pc != 0x0035F35Cu) [[unlikely]] return; }
L_0035F35C:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F348u | kUnwind; return; } goto L_0035F348; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0035F370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F378u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 307u, depth + 1u); else { c.pc = 0x0035F068u; return; } if (c.pc != 0x0035F378u) [[unlikely]] return; }
L_0035F378:
    set32(c.r[2], c.r[30].w[0] + 128u);
    set32(c.r[3], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F394u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_008F(c, 292u, depth + 1u); else { c.pc = 0x0035ED90u; return; } if (c.pc != 0x0035F394u) [[unlikely]] return; }
L_0035F394:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035F4E8; } }
    set32(c.r[21], c.r[20].w[0] << 6);
    set32(c.r[20], 0u + 4681u);
    set32(c.r[30], c.r[29].w[0] + 2u);
    set32(c.r[23], 0u + 32767u);
    set32(c.r[22], 0u - 32768u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 6;
L_0035F3B8:
    set32(c.r[2], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3D4u); c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 144u)));  if (depth < kMaxDepth) unit_008F(c, 293u, depth + 1u); else { c.pc = 0x0035EDA0u; return; } if (c.pc != 0x0035F3D4u) [[unlikely]] return; }
L_0035F3D4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3E4u); c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2u)));  if (depth < kMaxDepth) unit_008F(c, 304u, depth + 1u); else { c.pc = 0x0035EF70u; return; } if (c.pc != 0x0035F3E4u) [[unlikely]] return; }
L_0035F3E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3F4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 305u, depth + 1u); else { c.pc = 0x0035EF80u; return; } if (c.pc != 0x0035F3F4u) [[unlikely]] return; }
L_0035F3F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F400u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 310u, depth + 1u); else { c.pc = 0x0035F100u; return; } if (c.pc != 0x0035F400u) [[unlikely]] return; }
L_0035F400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F408u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 87u, depth + 1u); else { c.pc = 0x0014E9A0u; return; } if (c.pc != 0x0035F408u) [[unlikely]] return; }
L_0035F408:
    c.r[5].d[0] = ld64((c.r[17].w[0] + 128u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F414u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x0035F414u) [[unlikely]] return; }
L_0035F414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F41Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 90u, depth + 1u); else { c.pc = 0x0014EA58u; return; } if (c.pc != 0x0035F41Cu) [[unlikely]] return; }
L_0035F41C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[23].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 32767u);  goto L_0035F440; }
    c.r[3].d[0] = c.r[16].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[16].d[0];
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
L_0035F440:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], c.r[16].w[0] + 2340u);  goto L_0035F450; }
    set32(c.r[2], c.r[16].w[0] - 2340u);
    c.budget -= 1;
L_0035F450:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { breakpoint(c, 0x0035F454u);  goto L_0035F458; }
L_0035F458:
    mmi::div(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_0035F488; } }
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < -8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u - 8u);  goto L_0035F488; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0035F48C; } }
L_0035F488:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0035F48C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] << 24);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4A0u); set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 24));  if (depth < kMaxDepth) unit_008F(c, 311u, depth + 1u); else { c.pc = 0x0035F138u; return; } if (c.pc != 0x0035F4A0u) [[unlikely]] return; }
L_0035F4A0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 124u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[23].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], 0u + 32767u);  goto L_0035F4C8; }
    c.r[3].d[0] = c.r[16].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[16].d[0];
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
L_0035F4C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4D4u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_008F(c, 294u, depth + 1u); else { c.pc = 0x0035EDB8u; return; } if (c.pc != 0x0035F4D4u) [[unlikely]] return; }
L_0035F4D4:
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F3B8u | kUnwind; return; } goto L_0035F3B8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035F4E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0035F518:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], 0u + 8u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    set32(c.r[3], c.r[5].w[0] << 6);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    set32(c.r[30], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    set32(c.r[5], c.r[5].w[0] + 680u);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 528u);
    c.r[7].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 29;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0035F588u);  goto L_0035F58C; }
L_0035F58C:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[7], c.r[3].w[0] + 272u);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 400u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[23], ld32((c.r[4].w[0] + 128u)));
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0035F76C; } }
    set32(c.r[21], 0u + 4681u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0035F5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5C8u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 310u, depth + 1u); else { c.pc = 0x0035F100u; return; } if (c.pc != 0x0035F5C8u) [[unlikely]] return; }
L_0035F5C8:
    set32(c.r[17], c.r[20].w[0] << 1);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] << 16);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5E4u); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));  if (depth < kMaxDepth) unit_000B(c, 87u, depth + 1u); else { c.pc = 0x0014E9A0u; return; } if (c.pc != 0x0035F5E4u) [[unlikely]] return; }
L_0035F5E4:
    c.r[18].d[0] = ld64((c.r[23].w[0] + 128u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5F4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x0035F5F4u) [[unlikely]] return; }
L_0035F5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 90u, depth + 1u); else { c.pc = 0x0014EA58u; return; } if (c.pc != 0x0035F5FCu) [[unlikely]] return; }
L_0035F5FC:
    set32(c.r[5], 0u + 32767u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 32767u);  if (t) { goto L_0035F628; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u - 32768u);  goto L_0035F628; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_0035F62C; } }
L_0035F628:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_0035F62C:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0035F648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - 2340u);  if (t) { goto L_0035F64C; } }
L_0035F648:
    set32(c.r[2], c.r[4].w[0] + 2340u);
    c.budget -= 1;
L_0035F64C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { breakpoint(c, 0x0035F650u);  goto L_0035F654; }
L_0035F654:
    mmi::div(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 7u);  if (t) { goto L_0035F688; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < -8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u - 8u);  goto L_0035F688; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 124u)));  if (t) { goto L_0035F68C; } }
    c.budget -= 1;
L_0035F688:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 124u)));
    c.budget -= 1;
L_0035F68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F694u); mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_000B(c, 87u, depth + 1u); else { c.pc = 0x0014E9A0u; return; } if (c.pc != 0x0035F694u) [[unlikely]] return; }
L_0035F694:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x0035F6A0u) [[unlikely]] return; }
L_0035F6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 90u, depth + 1u); else { c.pc = 0x0014EA58u; return; } if (c.pc != 0x0035F6A8u) [[unlikely]] return; }
L_0035F6A8:
    set32(c.r[3], 0u + 32767u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 32767u);  goto L_0035F6D0; }
    c.r[2].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u - 32768u);  goto L_0035F6D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::div(c, 0, c.r[20].w[0], c.r[22].w[0]);  if (t) { goto L_0035F6D4; } }
L_0035F6D0:
    mmi::div(c, 0, c.r[20].w[0], c.r[22].w[0]);
    c.budget -= 1;
L_0035F6D4:
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 5;
    if (c.r[22].d[0] == 0ull) { breakpoint(c, 0x0035F6E4u);  goto L_0035F6E8; }
L_0035F6E8:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_0035F710; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[2].w[0] + c.r[30].w[0]);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035F714; } }
L_0035F710:
    set32(c.r[7], c.r[3].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_0035F714:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], 0u + 8u);
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[4], c.r[6].w[0] - c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[16].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] << (c.r[4].w[0] & 31u));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F5C0u | kUnwind; return; } goto L_0035F5C0; } }
L_0035F76C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0035F7A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[8], c.r[16].w[0] + 144u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[9], c.r[16].w[0] + 208u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[6].d[0];
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F808u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 312u, depth + 1u); else { c.pc = 0x0035F148u; return; } if (c.pc != 0x0035F808u) [[unlikely]] return; }
L_0035F808:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0035F934; }
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  if (t) { goto L_0035F878; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0035F878; } }
    set32(c.r[20], c.r[17].w[0] << 1);
    c.r[18].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
L_0035F838:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_0035F85C; } }
    set32(c.r[6], c.r[6].w[0] - c.r[17].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F854u); set32(c.r[6], c.r[6].w[0] << 1);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0035F854u) [[unlikely]] return; }
L_0035F854:
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 2;
L_0035F85C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F838u | kUnwind; return; } goto L_0035F838; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 48u)));  if (t) { goto L_0035F87C; } }
    c.budget -= 1;
L_0035F878:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_0035F87C:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_0035F92C; } }
    set32(c.r[30], c.r[29].w[0] + 18u);
    set32(c.r[23], c.r[16].w[0] + 12u);
    set32(c.r[22], c.r[16].w[0] + 8u);
    set32(c.r[20], c.r[16].w[0] + 664u);
    set32(c.r[19], c.r[16].w[0] + 656u);
    set32(c.r[17], c.r[16].w[0] + 128u);
    set32(c.r[18], 0u + 128u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
L_0035F8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 320u, depth + 1u); else { c.pc = 0x0035F2B8u; return; } if (c.pc != 0x0035F8B8u) [[unlikely]] return; }
L_0035F8B8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = ld64((c.r[3].w[0] + 128u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 124u));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[4], ld32((c.r[3].w[0] + 136u)));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    st64((c.r[20].w[0]), c.r[7].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8ECu); set32(c.r[20], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_008F(c, 293u, depth + 1u); else { c.pc = 0x0035EDA0u; return; } if (c.pc != 0x0035F8ECu) [[unlikely]] return; }
L_0035F8EC:
    set32(c.r[4], c.r[22].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 16u));
    set32(c.r[6], c.r[23].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 18u));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F918u); set32(c.r[18], c.r[18].w[0] + 2u);  if (depth < kMaxDepth) unit_008F(c, 336u, depth + 1u); else { c.pc = 0x0035F518u; return; } if (c.pc != 0x0035F918u) [[unlikely]] return; }
L_0035F918:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F8B0u | kUnwind; return; } goto L_0035F8B0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_0035F92C:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_0035F934:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0035F960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[20], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_0035FA64; } }
    set32(c.r[17], c.r[18].w[0] + 680u);
    set32(c.r[19], c.r[18].w[0] + 656u);
    c.r[4].d[0] = ld16((c.r[18].w[0] + 720u));
    c.budget -= 3;
L_0035F9A8:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 722u));
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[2].d[0] = ld16((c.r[18].w[0] + 724u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    c.budget -= 14;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[18].w[0] + 720u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035FA00; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0035FA04; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0035FA08; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 2;
L_0035FA00:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_0035FA04:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0035FA08:
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 8));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA20u); st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FA20u) [[unlikely]] return; }
L_0035FA20:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA38u); st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FA38u) [[unlikely]] return; }
L_0035FA38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA54u); set32(c.r[22], c.r[22].w[0] + 18u);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FA54u) [[unlikely]] return; }
L_0035FA54:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[18].w[0] + 720u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035F9A8u | kUnwind; return; } goto L_0035F9A8; }
L_0035FA64:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035FA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 18u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 10;
L_0035FAB8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FACCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035FACCu) [[unlikely]] return; }
L_0035FACC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.budget -= 4;
    if (c.r[18].d[0] == 0ull) { breakpoint(c, 0x0035FAD8u);  goto L_0035FADC; }
L_0035FADC:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0035FB24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FAFCu);  if (depth < kMaxDepth) unit_008F(c, 345u, depth + 1u); else { c.pc = 0x0035F7A0u; return; } if (c.pc != 0x0035FAFCu) [[unlikely]] return; }
L_0035FAFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0035FB24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 353u, depth + 1u); else { c.pc = 0x0035F960u; return; } if (c.pc != 0x0035FB0Cu) [[unlikely]] return; }
L_0035FB0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035FAB8u | kUnwind; return; } goto L_0035FAB8; } }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0035FB24:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035FB40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], ld32((c.r[4].w[0] + 44u)));  if (t) { goto L_0035FB70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 80u)));  if (t) { goto L_0035FB94; } }
L_0035FB70:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 2047u);
    set32(c.r[2], c.r[2].w[0] + 4094u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 9;
L_0035FB94:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBACu); set32(c.r[16], c.r[17].w[0] - 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035FBACu) [[unlikely]] return; }
L_0035FBAC:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035FC20; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = 0ull | 32769ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBD4u); st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FBD4u) [[unlikely]] return; }
L_0035FBD4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBECu); st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FBECu) [[unlikely]] return; }
L_0035FBEC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035FC1C; } }
    set32(c.r[19], c.r[29].w[0] + 2u);
    set32(c.r[16], c.r[17].w[0] - 4u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
L_0035FC00:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC14u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FC14u) [[unlikely]] return; }
L_0035FC14:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035FC00u | kUnwind; return; } goto L_0035FC00; } }
L_0035FC1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0035FC20:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035FC40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 11132u)));
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC80u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0035FC80u) [[unlikely]] return; }
L_0035FC80:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FCA4u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035FCA4u) [[unlikely]] return; }
L_0035FCA4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 28u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FCC0u); set32(c.r[16], ld32((c.r[29].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035FCC0u) [[unlikely]] return; }
L_0035FCC0:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[16].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FCF0u); st16((c.r[29].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FCF0u) [[unlikely]] return; }
L_0035FCF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 72u)));
    set32(c.r[4], c.r[29].w[0] + 18u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD1Cu); st16((c.r[29].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FD1Cu) [[unlikely]] return; }
L_0035FD1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 76u)));
    set32(c.r[23], c.r[29].w[0] + 20u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD48u); st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FD48u) [[unlikely]] return; }
L_0035FD48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 80u));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD6Cu); st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FD6Cu) [[unlikely]] return; }
L_0035FD6C:
    set32(c.r[18], 0u + 1u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[18].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 84u));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD98u); st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FD98u) [[unlikely]] return; }
L_0035FD98:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 88u));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDC0u); st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FDC0u) [[unlikely]] return; }
L_0035FDC0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDE8u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FDE8u) [[unlikely]] return; }
L_0035FDE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE10u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FE10u) [[unlikely]] return; }
L_0035FE10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 100u)));
    set32(c.r[22], c.r[29].w[0] + 22u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE3Cu); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FE3Cu) [[unlikely]] return; }
L_0035FE3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE64u); st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FE64u) [[unlikely]] return; }
L_0035FE64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 720u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0035FE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035FE84; } }
L_0035FE80:
    st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0035FE84:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE98u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FE98u) [[unlikely]] return; }
L_0035FE98:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FEC0u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FEC0u) [[unlikely]] return; }
L_0035FEC0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 712u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FEE8u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FEE8u) [[unlikely]] return; }
L_0035FEE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 716u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF10u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FF10u) [[unlikely]] return; }
L_0035FF10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 714u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF38u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FF38u) [[unlikely]] return; }
L_0035FF38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 718u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF60u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FF60u) [[unlikely]] return; }
L_0035FF60:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[18], 0u + 28u);  if (t) { [[clang::musttail]] return unit_0090(c, 8u, depth); } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 104u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF94u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FF94u) [[unlikely]] return; }
L_0035FF94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 108u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FFBCu); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FFBCu) [[unlikely]] return; }
L_0035FFBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 25u, depth); } }
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    set32(c.r[18], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 8u, depth); } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_0035FFD8:
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FFF0u); set32(c.r[21], c.r[21].w[0] + 1u);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0035EB00u; return; } if (c.pc != 0x0035FFF0u) [[unlikely]] return; }
L_0035FFF0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    [[clang::musttail]] return unit_0090(c, 1u, depth);
}

}
