#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0062[4096] = {
    1, 2, 0, 0, 0, 3, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0,
    40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116,
    0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 0,
    0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0,
    0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314,
    0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0,
    0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0,
    0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367,
    0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390,
    0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0062(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A8000;
    case 2u: goto L_002A8004;
    case 3u: goto L_002A8014;
    case 4u: goto L_002A8018;
    case 5u: goto L_002A8028;
    case 6u: goto L_002A8038;
    case 7u: goto L_002A8060;
    case 8u: goto L_002A8088;
    case 9u: goto L_002A8098;
    case 10u: goto L_002A80C4;
    case 11u: goto L_002A80E4;
    case 12u: goto L_002A80F4;
    case 13u: goto L_002A8120;
    case 14u: goto L_002A8148;
    case 15u: goto L_002A8158;
    case 16u: goto L_002A8184;
    case 17u: goto L_002A81A4;
    case 18u: goto L_002A81B4;
    case 19u: goto L_002A81E0;
    case 20u: goto L_002A81FC;
    case 21u: goto L_002A8208;
    case 22u: goto L_002A8220;
    case 23u: goto L_002A8234;
    case 24u: goto L_002A8244;
    case 25u: goto L_002A8260;
    case 26u: goto L_002A8298;
    case 27u: goto L_002A82AC;
    case 28u: goto L_002A82D4;
    case 29u: goto L_002A8340;
    case 30u: goto L_002A8378;
    case 31u: goto L_002A838C;
    case 32u: goto L_002A839C;
    case 33u: goto L_002A83B8;
    case 34u: goto L_002A83F0;
    case 35u: goto L_002A8418;
    case 36u: goto L_002A8420;
    case 37u: goto L_002A8428;
    case 38u: goto L_002A845C;
    case 39u: goto L_002A8470;
    case 40u: goto L_002A8480;
    case 41u: goto L_002A8488;
    case 42u: goto L_002A84B0;
    case 43u: goto L_002A84E8;
    case 44u: goto L_002A8508;
    case 45u: goto L_002A8518;
    case 46u: goto L_002A8540;
    case 47u: goto L_002A8554;
    case 48u: goto L_002A855C;
    case 49u: goto L_002A8580;
    case 50u: goto L_002A85A4;
    case 51u: goto L_002A85C4;
    case 52u: goto L_002A8600;
    case 53u: goto L_002A8624;
    case 54u: goto L_002A864C;
    case 55u: goto L_002A8670;
    case 56u: goto L_002A869C;
    case 57u: goto L_002A86C8;
    case 58u: goto L_002A86F0;
    case 59u: goto L_002A8714;
    case 60u: goto L_002A873C;
    case 61u: goto L_002A8760;
    case 62u: goto L_002A877C;
    case 63u: goto L_002A879C;
    case 64u: goto L_002A87C0;
    case 65u: goto L_002A87C8;
    case 66u: goto L_002A8800;
    case 67u: goto L_002A880C;
    case 68u: goto L_002A8840;
    case 69u: goto L_002A887C;
    case 70u: goto L_002A88A8;
    case 71u: goto L_002A88E0;
    case 72u: goto L_002A8914;
    case 73u: goto L_002A893C;
    case 74u: goto L_002A8970;
    case 75u: goto L_002A897C;
    case 76u: goto L_002A89C0;
    case 77u: goto L_002A89D4;
    case 78u: goto L_002A8A10;
    case 79u: goto L_002A8A2C;
    case 80u: goto L_002A8A3C;
    case 81u: goto L_002A8A50;
    case 82u: goto L_002A8A70;
    case 83u: goto L_002A8A78;
    case 84u: goto L_002A8AB0;
    case 85u: goto L_002A8AC8;
    case 86u: goto L_002A8B14;
    case 87u: goto L_002A8B6C;
    case 88u: goto L_002A8BA4;
    case 89u: goto L_002A8BE0;
    case 90u: goto L_002A8BEC;
    case 91u: goto L_002A8C10;
    case 92u: goto L_002A8C4C;
    case 93u: goto L_002A8C64;
    case 94u: goto L_002A8C80;
    case 95u: goto L_002A8C9C;
    case 96u: goto L_002A8CB8;
    case 97u: goto L_002A8CD8;
    case 98u: goto L_002A8CF8;
    case 99u: goto L_002A8D08;
    case 100u: goto L_002A8D30;
    case 101u: goto L_002A8D94;
    case 102u: goto L_002A8DC8;
    case 103u: goto L_002A8DFC;
    case 104u: goto L_002A8E44;
    case 105u: goto L_002A8E5C;
    case 106u: goto L_002A8E78;
    case 107u: goto L_002A8EC4;
    case 108u: goto L_002A8F18;
    case 109u: goto L_002A8F30;
    case 110u: goto L_002A8F9C;
    case 111u: goto L_002A8FA4;
    case 112u: goto L_002A8FB4;
    case 113u: goto L_002A8FC8;
    case 114u: goto L_002A906C;
    case 115u: goto L_002A9074;
    case 116u: goto L_002A907C;
    case 117u: goto L_002A908C;
    case 118u: goto L_002A9094;
    case 119u: goto L_002A90A4;
    case 120u: goto L_002A90B4;
    case 121u: goto L_002A90BC;
    case 122u: goto L_002A90D0;
    case 123u: goto L_002A90D8;
    case 124u: goto L_002A90EC;
    case 125u: goto L_002A90F4;
    case 126u: goto L_002A9108;
    case 127u: goto L_002A9110;
    case 128u: goto L_002A9164;
    case 129u: goto L_002A917C;
    case 130u: goto L_002A91AC;
    case 131u: goto L_002A91E4;
    case 132u: goto L_002A91F8;
    case 133u: goto L_002A9200;
    case 134u: goto L_002A9228;
    case 135u: goto L_002A923C;
    case 136u: goto L_002A925C;
    case 137u: goto L_002A9268;
    case 138u: goto L_002A9270;
    case 139u: goto L_002A9278;
    case 140u: goto L_002A92C4;
    case 141u: goto L_002A9310;
    case 142u: goto L_002A9318;
    case 143u: goto L_002A9330;
    case 144u: goto L_002A9370;
    case 145u: goto L_002A93AC;
    case 146u: goto L_002A93B8;
    case 147u: goto L_002A93D4;
    case 148u: goto L_002A93F4;
    case 149u: goto L_002A9414;
    case 150u: goto L_002A9460;
    case 151u: goto L_002A94A8;
    case 152u: goto L_002A94B4;
    case 153u: goto L_002A94BC;
    case 154u: goto L_002A94E4;
    case 155u: goto L_002A94F0;
    case 156u: goto L_002A9510;
    case 157u: goto L_002A9558;
    case 158u: goto L_002A9570;
    case 159u: goto L_002A95B8;
    case 160u: goto L_002A95D0;
    case 161u: goto L_002A9618;
    case 162u: goto L_002A9630;
    case 163u: goto L_002A9670;
    case 164u: goto L_002A96C0;
    case 165u: goto L_002A96DC;
    case 166u: goto L_002A9718;
    case 167u: goto L_002A9738;
    case 168u: goto L_002A9768;
    case 169u: goto L_002A977C;
    case 170u: goto L_002A9790;
    case 171u: goto L_002A9798;
    case 172u: goto L_002A97A0;
    case 173u: goto L_002A97B4;
    case 174u: goto L_002A97D0;
    case 175u: goto L_002A97F0;
    case 176u: goto L_002A97FC;
    case 177u: goto L_002A9848;
    case 178u: goto L_002A9850;
    case 179u: goto L_002A9894;
    case 180u: goto L_002A98B8;
    case 181u: goto L_002A98D4;
    case 182u: goto L_002A9900;
    case 183u: goto L_002A994C;
    case 184u: goto L_002A99AC;
    case 185u: goto L_002A9A00;
    case 186u: goto L_002A9A0C;
    case 187u: goto L_002A9A70;
    case 188u: goto L_002A9B04;
    case 189u: goto L_002A9B28;
    case 190u: goto L_002A9B34;
    case 191u: goto L_002A9B58;
    case 192u: goto L_002A9B80;
    case 193u: goto L_002A9C30;
    case 194u: goto L_002A9C8C;
    case 195u: goto L_002A9CA0;
    case 196u: goto L_002A9D00;
    case 197u: goto L_002A9D20;
    case 198u: goto L_002A9DA4;
    case 199u: goto L_002A9DE0;
    case 200u: goto L_002A9E20;
    case 201u: goto L_002A9E5C;
    case 202u: goto L_002A9E90;
    case 203u: goto L_002A9EB0;
    case 204u: goto L_002A9EE8;
    case 205u: goto L_002A9EF8;
    case 206u: goto L_002A9F0C;
    case 207u: goto L_002A9F4C;
    case 208u: goto L_002A9F68;
    case 209u: goto L_002A9F78;
    case 210u: goto L_002A9F8C;
    case 211u: goto L_002A9FD0;
    case 212u: goto L_002A9FE0;
    case 213u: goto L_002A9FF4;
    case 214u: goto L_002AA008;
    case 215u: goto L_002AA010;
    case 216u: goto L_002AA034;
    case 217u: goto L_002AA044;
    case 218u: goto L_002AA058;
    case 219u: goto L_002AA09C;
    case 220u: goto L_002AA0B0;
    case 221u: goto L_002AA0C0;
    case 222u: goto L_002AA0F0;
    case 223u: goto L_002AA124;
    case 224u: goto L_002AA15C;
    case 225u: goto L_002AA180;
    case 226u: goto L_002AA1B0;
    case 227u: goto L_002AA1E0;
    case 228u: goto L_002AA21C;
    case 229u: goto L_002AA24C;
    case 230u: goto L_002AA260;
    case 231u: goto L_002AA2D4;
    case 232u: goto L_002AA2F8;
    case 233u: goto L_002AA330;
    case 234u: goto L_002AA34C;
    case 235u: goto L_002AA354;
    case 236u: goto L_002AA36C;
    case 237u: goto L_002AA374;
    case 238u: goto L_002AA384;
    case 239u: goto L_002AA3D0;
    case 240u: goto L_002AA3F4;
    case 241u: goto L_002AA41C;
    case 242u: goto L_002AA440;
    case 243u: goto L_002AA464;
    case 244u: goto L_002AA470;
    case 245u: goto L_002AA490;
    case 246u: goto L_002AA4A0;
    case 247u: goto L_002AA4C4;
    case 248u: goto L_002AA518;
    case 249u: goto L_002AA56C;
    case 250u: goto L_002AA598;
    case 251u: goto L_002AA5CC;
    case 252u: goto L_002AA5E4;
    case 253u: goto L_002AA600;
    case 254u: goto L_002AA610;
    case 255u: goto L_002AA620;
    case 256u: goto L_002AA634;
    case 257u: goto L_002AA678;
    case 258u: goto L_002AA694;
    case 259u: goto L_002AA6B0;
    case 260u: goto L_002AA6EC;
    case 261u: goto L_002AA704;
    case 262u: goto L_002AA720;
    case 263u: goto L_002AA734;
    case 264u: goto L_002AA748;
    case 265u: goto L_002AA77C;
    case 266u: goto L_002AA788;
    case 267u: goto L_002AA794;
    case 268u: goto L_002AA7C0;
    case 269u: goto L_002AA824;
    case 270u: goto L_002AA864;
    case 271u: goto L_002AA890;
    case 272u: goto L_002AA8DC;
    case 273u: goto L_002AA904;
    case 274u: goto L_002AA950;
    case 275u: goto L_002AA9A0;
    case 276u: goto L_002AA9C0;
    case 277u: goto L_002AAA28;
    case 278u: goto L_002AAA30;
    case 279u: goto L_002AAA40;
    case 280u: goto L_002AAA64;
    case 281u: goto L_002AAA98;
    case 282u: goto L_002AAAAC;
    case 283u: goto L_002AAAD8;
    case 284u: goto L_002AAAE0;
    case 285u: goto L_002AAB08;
    case 286u: goto L_002AAB10;
    case 287u: goto L_002AAB54;
    case 288u: goto L_002AAB5C;
    case 289u: goto L_002AAB6C;
    case 290u: goto L_002AAB74;
    case 291u: goto L_002AAB8C;
    case 292u: goto L_002AAB98;
    case 293u: goto L_002AABA0;
    case 294u: goto L_002AABA8;
    case 295u: goto L_002AABB0;
    case 296u: goto L_002AABC4;
    case 297u: goto L_002AABCC;
    case 298u: goto L_002AABDC;
    case 299u: goto L_002AABF0;
    case 300u: goto L_002AAC00;
    case 301u: goto L_002AAC54;
    case 302u: goto L_002AAC6C;
    case 303u: goto L_002AAC88;
    case 304u: goto L_002AACB0;
    case 305u: goto L_002AACFC;
    case 306u: goto L_002AAD10;
    case 307u: goto L_002AAD38;
    case 308u: goto L_002AAD64;
    case 309u: goto L_002AAD98;
    case 310u: goto L_002AADC0;
    case 311u: goto L_002AADE8;
    case 312u: goto L_002AAE6C;
    case 313u: goto L_002AAE8C;
    case 314u: goto L_002AAEFC;
    case 315u: goto L_002AAF18;
    case 316u: goto L_002AAF44;
    case 317u: goto L_002AAF5C;
    case 318u: goto L_002AAFBC;
    case 319u: goto L_002AAFCC;
    case 320u: goto L_002AAFF4;
    case 321u: goto L_002AB004;
    case 322u: goto L_002AB048;
    case 323u: goto L_002AB058;
    case 324u: goto L_002AB0A0;
    case 325u: goto L_002AB0AC;
    case 326u: goto L_002AB0D0;
    case 327u: goto L_002AB0E0;
    case 328u: goto L_002AB108;
    case 329u: goto L_002AB14C;
    case 330u: goto L_002AB16C;
    case 331u: goto L_002AB188;
    case 332u: goto L_002AB1CC;
    case 333u: goto L_002AB208;
    case 334u: goto L_002AB230;
    case 335u: goto L_002AB254;
    case 336u: goto L_002AB2D4;
    case 337u: goto L_002AB2DC;
    case 338u: goto L_002AB2E4;
    case 339u: goto L_002AB2F4;
    case 340u: goto L_002AB35C;
    case 341u: goto L_002AB3C4;
    case 342u: goto L_002AB400;
    case 343u: goto L_002AB410;
    case 344u: goto L_002AB448;
    case 345u: goto L_002AB454;
    case 346u: goto L_002AB4A0;
    case 347u: goto L_002AB4B0;
    case 348u: goto L_002AB530;
    case 349u: goto L_002AB53C;
    case 350u: goto L_002AB594;
    case 351u: goto L_002AB5B8;
    case 352u: goto L_002AB5C4;
    case 353u: goto L_002AB61C;
    case 354u: goto L_002AB644;
    case 355u: goto L_002AB664;
    case 356u: goto L_002AB688;
    case 357u: goto L_002AB6A8;
    case 358u: goto L_002AB6F0;
    case 359u: goto L_002AB6F8;
    case 360u: goto L_002AB72C;
    case 361u: goto L_002AB7A0;
    case 362u: goto L_002AB870;
    case 363u: goto L_002AB880;
    case 364u: goto L_002AB8B0;
    case 365u: goto L_002AB8F4;
    case 366u: goto L_002AB908;
    case 367u: goto L_002AB97C;
    case 368u: goto L_002AB99C;
    case 369u: goto L_002AB9B0;
    case 370u: goto L_002AB9C0;
    case 371u: goto L_002AB9F0;
    case 372u: goto L_002ABA2C;
    case 373u: goto L_002ABA3C;
    case 374u: goto L_002ABA50;
    case 375u: goto L_002ABA60;
    case 376u: goto L_002ABACC;
    case 377u: goto L_002ABB30;
    case 378u: goto L_002ABB38;
    case 379u: goto L_002ABB40;
    case 380u: goto L_002ABB58;
    case 381u: goto L_002ABB70;
    case 382u: goto L_002ABBB0;
    case 383u: goto L_002ABBBC;
    case 384u: goto L_002ABBD4;
    case 385u: goto L_002ABBF0;
    case 386u: goto L_002ABC04;
    case 387u: goto L_002ABC6C;
    case 388u: goto L_002ABC78;
    case 389u: goto L_002ABCC0;
    case 390u: goto L_002ABCFC;
    case 391u: goto L_002ABD14;
    case 392u: goto L_002ABD30;
    case 393u: goto L_002ABD44;
    case 394u: goto L_002ABD94;
    case 395u: goto L_002ABDB0;
    case 396u: goto L_002ABDCC;
    case 397u: goto L_002ABDE0;
    case 398u: goto L_002ABE0C;
    case 399u: goto L_002ABE20;
    case 400u: goto L_002ABE64;
    case 401u: goto L_002ABE6C;
    case 402u: goto L_002ABE94;
    case 403u: goto L_002ABECC;
    case 404u: goto L_002ABEE0;
    case 405u: goto L_002ABF28;
    case 406u: goto L_002ABF3C;
    case 407u: goto L_002ABF5C;
    case 408u: goto L_002ABF90;
    case 409u: goto L_002ABFB0;
    default: bad_entry(c, 0x002A8000u); return;
    }
L_002A8000:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002A8004:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8014u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8014u) [[unlikely]] return; }
L_002A8014:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002A8018:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 308u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7FB8u | kUnwind; return; } [[clang::musttail]] return unit_0061(c, 375u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8028u);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A8028u) [[unlikely]] return; }
L_002A8028:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002A803C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8038u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002A8038u) [[unlikely]] return; }
L_002A8038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002A803C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A8060:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8088u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A8088u) [[unlikely]] return; }
L_002A8088:
    set32(c.r[4], ld32((c.r[20].w[0] + 1156u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A80D4; } }
L_002A8098:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[4].w[0] + 320u)));  if (t) { goto L_002A80CC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 1156u), c.r[16].w[0]);  goto L_002A80AC; }
    st32((c.r[17].w[0] + 320u), c.r[16].w[0]);
    c.budget -= 1;
L_002A80AC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A80D4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A80C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A80C4u) [[unlikely]] return; }
L_002A80C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A80D0; } }
L_002A80CC:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002A80D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A80D4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 312u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8098u | kUnwind; return; } goto L_002A8098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A80E4u);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A80E4u) [[unlikely]] return; }
L_002A80E4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002A80F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A80F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002A80F4u) [[unlikely]] return; }
L_002A80F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002A80F8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A8120:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8148u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A8148u) [[unlikely]] return; }
L_002A8148:
    set32(c.r[4], ld32((c.r[20].w[0] + 1156u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A8194; } }
L_002A8158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; set32(c.r[16], ld32((c.r[4].w[0] + 320u)));  if (t) { goto L_002A818C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 1156u), c.r[16].w[0]);  goto L_002A816C; }
    st32((c.r[17].w[0] + 320u), c.r[16].w[0]);
    c.budget -= 1;
L_002A816C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A8194; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8184u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8184u) [[unlikely]] return; }
L_002A8184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8190; } }
L_002A818C:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002A8190:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A8194:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 304u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8158u | kUnwind; return; } goto L_002A8158; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81A4u);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A81A4u) [[unlikely]] return; }
L_002A81A4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002A81B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002A81B4u) [[unlikely]] return; }
L_002A81B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002A81B8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A81E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A81FCu) [[unlikely]] return; }
L_002A81FC:
    set32(c.r[4], ld32((c.r[18].w[0] + 1156u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A8224; } }
L_002A8208:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 320u)));  if (t) { goto L_002A8220; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8220u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8220u) [[unlikely]] return; }
L_002A8220:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A8224:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8208u | kUnwind; return; } goto L_002A8208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8234u); st32((c.r[18].w[0] + 1156u), 0u);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A8234u) [[unlikely]] return; }
L_002A8234:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002A8248; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8244u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002A8244u) [[unlikely]] return; }
L_002A8244:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002A8248:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A8260:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[4].w[0] + 1156u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8298u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A8298u) [[unlikely]] return; }
L_002A8298:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[2].w[0] + 74u));  if (t) { goto L_002A837C; } }
L_002A82AC:
    c.budget -= 2;
    if (c.r[22].d[0] != c.r[2].d[0]) { c.r[19].d[0] = c.r[20].d[0] + 0ull;  goto L_002A8344; }
    set32(c.r[2], ld32((c.r[20].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[20].w[0] + 332u));  goto L_002A82E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A82D4u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_00A8(c, 232u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x002A82D4u) [[unlikely]] return; }
L_002A82D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 320u)));  goto L_002A8350; }
    c.f[1] = ld32((c.r[20].w[0] + 332u));
    c.budget -= 1;
L_002A82E0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A8308; } }
    c.f[0] = ld32((c.r[20].w[0] + 324u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A8308; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A8308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A834C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[4].w[0] + 80u));  goto L_002A8338; }
    c.f[12] = 0u;
    c.budget -= 1;
L_002A8338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8340u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 430u, depth + 1u); else { c.pc = 0x00283F90u; return; } if (c.pc != 0x002A8340u) [[unlikely]] return; }
L_002A8340:
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002A8344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[20].w[0] + 320u)));  if (t) { goto L_002A837C; } }
L_002A834C:
    set32(c.r[17], ld32((c.r[20].w[0] + 320u)));
    c.budget -= 1;
L_002A8350:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[21].w[0] + 1156u), c.r[17].w[0]);  goto L_002A835C; }
    st32((c.r[19].w[0] + 320u), c.r[17].w[0]);
    c.budget -= 1;
L_002A835C:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[20].d[0] = c.r[17].d[0] + 0ull;  goto L_002A837C; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8378u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8378u) [[unlikely]] return; }
L_002A8378:
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A837C:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 336u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A82ACu | kUnwind; return; } goto L_002A82AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A838Cu);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A838Cu) [[unlikely]] return; }
L_002A838C:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  goto L_002A83A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A839Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002A839Cu) [[unlikely]] return; }
L_002A839C:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_002A83A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 74u));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_002A83CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A83B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002A83B8u) [[unlikely]] return; }
L_002A83B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 5;
L_002A83CC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A83F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8418u); set32(c.r[18], ld32((c.r[4].w[0] + 1156u)));  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A8418u) [[unlikely]] return; }
L_002A8418:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002A8420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8428u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002A8428u) [[unlikely]] return; }
L_002A8428:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 352u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 74u));
    c.f[0] = ld32((c.r[5].w[0] + 68u));
    st32((c.r[3].w[0] + 128u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 112u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8420u | kUnwind; return; } goto L_002A8420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8474; } }
L_002A845C:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 112u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8470u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 35u, depth + 1u); else { c.pc = 0x00284300u; return; } if (c.pc != 0x002A8470u) [[unlikely]] return; }
L_002A8470:
    set32(c.r[18], ld32((c.r[18].w[0] + 320u)));
    c.budget -= 1;
L_002A8474:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 344u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A845Cu | kUnwind; return; } goto L_002A845C; }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8488u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002A8488u) [[unlikely]] return; }
L_002A8488:
    set32(c.r[19], c.r[20].w[0] << 2);
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], c.r[19].w[0] + c.r[29].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 8;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[19].w[0] + c.r[29].w[0]);  goto L_002A84C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A84B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002A84B0u) [[unlikely]] return; }
L_002A84B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[19].w[0] + c.r[29].w[0]);
    c.budget -= 5;
L_002A84C4:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.f[20] = ld32((c.r[2].w[0] + 112u));
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002A84F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A84E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002A84E8u) [[unlikely]] return; }
L_002A84E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    st32((c.r[2].w[0] + 68u), c.f[20]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 3;
L_002A84F4:
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8480u | kUnwind; return; } goto L_002A8480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8508u);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A8508u) [[unlikely]] return; }
L_002A8508:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002A851C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8518u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002A8518u) [[unlikely]] return; }
L_002A8518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002A851C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002A8540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 1156u)));  if (t) { goto L_002A8560; } }
L_002A8554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A855Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 47u, depth + 1u); else { c.pc = 0x002844C0u; return; } if (c.pc != 0x002A855Cu) [[unlikely]] return; }
L_002A855C:
    set32(c.r[16], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 1;
L_002A8560:
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8554u | kUnwind; return; } goto L_002A8554; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A8580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1156u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A85D4; } }
L_002A85A4:
    c.budget -= 2;
    if (c.r[18].sd[0] < 0) { set32(c.r[4], c.r[16].w[0] + 352u);  goto L_002A85BC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 320u)));  goto L_002A85D4; }
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_002A85BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A85C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002A85C4u) [[unlikely]] return; }
L_002A85C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 4;
L_002A85D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A85A4u | kUnwind; return; } goto L_002A85A4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A8600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1156u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A8650; } }
L_002A8624:
    c.budget -= 2;
    if (c.r[18].sd[0] < 0) { set32(c.r[25], ld32((c.r[16].w[0] + 36u)));  goto L_002A863C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 320u)));  goto L_002A8650; }
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002A863C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A864Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A864Cu) [[unlikely]] return; }
L_002A864C:
    set32(c.r[16], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 1;
L_002A8650:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8624u | kUnwind; return; } goto L_002A8624; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A8670:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1156u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002A86CC; } }
L_002A869C:
    c.budget -= 2;
    if (c.r[19].sd[0] < 0) { set32(c.r[25], ld32((c.r[16].w[0] + 36u)));  goto L_002A86B4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 320u)));  goto L_002A86CC; }
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002A86B4:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A86C8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A86C8u) [[unlikely]] return; }
L_002A86C8:
    set32(c.r[16], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 1;
L_002A86CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A869Cu | kUnwind; return; } goto L_002A869C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A86F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1156u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A8740; } }
L_002A8714:
    c.budget -= 2;
    if (c.r[18].sd[0] < 0) { set32(c.r[25], ld32((c.r[16].w[0] + 36u)));  goto L_002A872C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 320u)));  goto L_002A8740; }
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002A872C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A873Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A873Cu) [[unlikely]] return; }
L_002A873C:
    set32(c.r[16], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 1;
L_002A8740:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8714u | kUnwind; return; } goto L_002A8714; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A8760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1156u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A87A0; } }
L_002A877C:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[4], c.r[16].w[0] + 32u);  goto L_002A8794; }
    set32(c.r[3], ld32((c.r[16].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 320u)));  goto L_002A87A0; }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002A8794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A879Cu);  if (depth < kMaxDepth) unit_00A8(c, 189u, depth + 1u); else { c.pc = 0x003C22E0u; return; } if (c.pc != 0x002A879Cu) [[unlikely]] return; }
L_002A879C:
    set32(c.r[16], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 1;
L_002A87A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A877Cu | kUnwind; return; } goto L_002A877C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A87C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 1156u)));  if (t) { goto L_002A87EC; } }
L_002A87C8:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[3], ld32((c.r[4].w[0] + 308u)));  goto L_002A87E0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 320u)));  goto L_002A87EC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 308u)));
    c.budget -= 1;
L_002A87E0:
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[4].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
L_002A87EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A87C8u | kUnwind; return; } goto L_002A87C8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A8800:
    set32(c.r[6], ld32((c.r[4].w[0] + 1156u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 9u);  if (t) { goto L_002A8830; } }
L_002A880C:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[3], ld32((c.r[6].w[0] + 308u)));  goto L_002A8824; }
    set32(c.r[3], ld32((c.r[6].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[6].w[0] + 320u)));  goto L_002A8830; }
    set32(c.r[3], ld32((c.r[6].w[0] + 308u)));
    c.budget -= 1;
L_002A8824:
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 320u)));
    c.budget -= 3;
L_002A8830:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A880Cu | kUnwind; return; } goto L_002A880C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A8840:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1156u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_002A88AC; } }
L_002A887C:
    c.budget -= 2;
    if (c.r[21].sd[0] < 0) { set32(c.r[4], c.r[16].w[0] + 32u);  goto L_002A8894; }
    set32(c.r[3], ld32((c.r[16].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[21].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 320u)));  goto L_002A88AC; }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002A8894:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A88A8u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 238u, depth + 1u); else { c.pc = 0x003C2D20u; return; } if (c.pc != 0x002A88A8u) [[unlikely]] return; }
L_002A88A8:
    set32(c.r[16], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 1;
L_002A88AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A887Cu | kUnwind; return; } goto L_002A887C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A88E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 1156u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002A8940; } }
L_002A8914:
    c.budget -= 2;
    if (c.r[20].sd[0] < 0) { set32(c.r[4], c.r[18].w[0] + 32u);  goto L_002A892C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[3].d[0]) { set32(c.r[18], ld32((c.r[18].w[0] + 320u)));  goto L_002A8940; }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_002A892C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A893Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x002A893Cu) [[unlikely]] return; }
L_002A893C:
    set32(c.r[18], ld32((c.r[18].w[0] + 320u)));
    c.budget -= 1;
L_002A8940:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8914u | kUnwind; return; } goto L_002A8914; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A8970:
    set32(c.r[2], ld32((c.r[4].w[0] + 1156u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1160u), c.r[5].w[0]);  if (t) { goto L_002A899C; } }
L_002A897C:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { st32((c.r[4].w[0] + 1164u), c.r[2].w[0]);  goto L_002A89AC; }
    set32(c.r[3], ld32((c.r[2].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 320u)));  goto L_002A899C; }
    st32((c.r[4].w[0] + 1164u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A89AC; } }
L_002A899C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A897Cu | kUnwind; return; } goto L_002A897C; } }
    st32((c.r[4].w[0] + 1164u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002A89AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A89C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 1164u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 320u)));  goto L_002A89F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A8A04; } }
L_002A89D4:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { st32((c.r[4].w[0] + 1164u), c.r[2].w[0]);  goto L_002A8A04; }
    set32(c.r[3], ld32((c.r[2].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 320u)));  goto L_002A89F4; }
    st32((c.r[4].w[0] + 1164u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8A04; } }
L_002A89F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 1160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A89D4u | kUnwind; return; } goto L_002A89D4; }
    st32((c.r[4].w[0] + 1164u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002A8A04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A8A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1156u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A8A54; } }
L_002A8A2C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8A3Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8A3Cu) [[unlikely]] return; }
L_002A8A3C:
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], c.r[17].w[0] + 1000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8A50u); set32(c.r[4], c.r[16].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8A50u) [[unlikely]] return; }
L_002A8A50:
    set32(c.r[16], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 1;
L_002A8A54:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8A2Cu | kUnwind; return; } goto L_002A8A2C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A8A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 1156u)));  if (t) { goto L_002A8A94; } }
L_002A8A78:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { st32((c.r[4].w[0] + 332u), c.f[12]);  goto L_002A8A90; }
    set32(c.r[3], ld32((c.r[4].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 320u)));  goto L_002A8A94; }
    st32((c.r[4].w[0] + 332u), c.f[12]);
    c.budget -= 1;
L_002A8A90:
    set32(c.r[4], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 1;
L_002A8A94:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8A78u | kUnwind; return; } goto L_002A8A78; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A8AB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8AC8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 372u, depth + 1u); else { c.pc = 0x00293560u; return; } if (c.pc != 0x002A8AC8u) [[unlikely]] return; }
L_002A8AC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25168u);
    set32(c.r[3], c.r[3].w[0] + 25224u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43540000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 480u), 0u);
    st32((c.r[16].w[0] + 484u), 0u);
    st32((c.r[16].w[0] + 488u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8B14u); set32(c.r[4], ld32((c.r[3].w[0] + 116u)));  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002A8B14u) [[unlikely]] return; }
L_002A8B14:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));  goto L_002A8BAC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));  goto L_002A8B74; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));  goto L_002A8B3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8BE0; } }
L_002A8B3C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8BE0; } }
    set32(c.r[2], 0u + 276u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 112u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8B6Cu); st32((c.r[29].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0069(c, 273u, depth + 1u); else { c.pc = 0x002C6C30u; return; } if (c.pc != 0x002A8B6Cu) [[unlikely]] return; }
L_002A8B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8BE0; } }
L_002A8B74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8BE0; } }
    set32(c.r[2], 0u + 277u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 80u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BA4u); st32((c.r[29].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_0069(c, 273u, depth + 1u); else { c.pc = 0x002C6C30u; return; } if (c.pc != 0x002A8BA4u) [[unlikely]] return; }
L_002A8BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8BE0; } }
L_002A8BAC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8BE0; } }
    set32(c.r[2], 0u + 278u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BE0u); st32((c.r[29].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0069(c, 273u, depth + 1u); else { c.pc = 0x002C6C30u; return; } if (c.pc != 0x002A8BE0u) [[unlikely]] return; }
L_002A8BE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BECu); set32(c.r[4], c.r[4].w[0] + 11168u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A8BECu) [[unlikely]] return; }
L_002A8BEC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002A8C10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A8C64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25168u);
    set32(c.r[2], c.r[2].w[0] + 25224u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C4Cu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 377u, depth + 1u); else { c.pc = 0x00293640u; return; } if (c.pc != 0x002A8C4Cu) [[unlikely]] return; }
L_002A8C4C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A8C68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002A8C64u) [[unlikely]] return; }
L_002A8C64:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A8C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A8C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C9Cu); set32(c.r[4], c.r[4].w[0] + 11216u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A8C9Cu) [[unlikely]] return; }
L_002A8C9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 484u)));  goto L_002A8CC0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8CB8u) [[unlikely]] return; }
L_002A8CB8:
    st32((c.r[16].w[0] + 480u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 2;
L_002A8CC0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 488u)));  goto L_002A8CE0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8CD8u) [[unlikely]] return; }
L_002A8CD8:
    st32((c.r[16].w[0] + 484u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 488u)));
    c.budget -= 2;
L_002A8CE0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_002A8D00; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8CF8u) [[unlikely]] return; }
L_002A8CF8:
    st32((c.r[16].w[0] + 488u), 0u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 2;
L_002A8D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8D08u);  if (depth < kMaxDepth) unit_005E(c, 280u, depth + 1u); else { c.pc = 0x0029AEF0u; return; } if (c.pc != 0x002A8D08u) [[unlikely]] return; }
L_002A8D08:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A8D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002A8F1C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[3].d[0] = c.r[4].d[0] ^ 9ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 5u);  goto L_002A8D78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8F18; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_002A8D78:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A8F18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A8DB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8D94u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002A8D94u) [[unlikely]] return; }
L_002A8D94:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A8DAC; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8DB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002A8DAC:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002A8DB8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A8DEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8DC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 242u, depth + 1u); else { c.pc = 0x002AA440u; return; } if (c.pc != 0x002A8DC8u) [[unlikely]] return; }
L_002A8DC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A8F18; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8F18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002A8DEC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A8E20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8DFCu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002A8DFCu) [[unlikely]] return; }
L_002A8DFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A8E14; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8E20; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002A8E14:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002A8E20:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A8E68; }
    set32(c.r[2], 0u + 7u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8E44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E44u);  if (depth < kMaxDepth) unit_0069(c, 268u, depth + 1u); else { c.pc = 0x002C6BA0u; return; } if (c.pc != 0x002A8E44u) [[unlikely]] return; }
L_002A8E44:
    c.f[12] = 0u;
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E5Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002A8E5Cu) [[unlikely]] return; }
L_002A8E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8F18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002A8E68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A8E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E78u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002A8E78u) [[unlikely]] return; }
L_002A8E78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 2u);  goto L_002A8E8C; }
L_002A8E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A8EA4; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_002A8E8C:
    set32(c.r[5], ld32((c.r[28].w[0] - 30400u)));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = ld64((c.r[5].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_002A8EA4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A8EB4; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 2;
L_002A8EB4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A8EF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8EC4u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002A8EC4u) [[unlikely]] return; }
L_002A8EC4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_002A8EDC; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8EF4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002A8EDC:
    set32(c.r[5], ld32((c.r[28].w[0] - 30400u)));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = ld64((c.r[5].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_002A8EF4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8F00; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_002A8F00:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A8F18; } }
    c.r[5].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F18u); c.r[5].d[0] = c.r[5].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0062(c, 230u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x002A8F18u) [[unlikely]] return; }
L_002A8F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A8F1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A8F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A94F0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].d[0] ^ 9ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;  goto L_002A8F78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002A94F4; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 1;
L_002A8F78:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A94F0; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + 11248u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002A8000u < 16384u) { entry = entries_0062[(t - 0x002A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A8F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8FA4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_005E(c, 285u, depth + 1u); else { c.pc = 0x0029AFA0u; return; } if (c.pc != 0x002A8FA4u) [[unlikely]] return; }
L_002A8FA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A94F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8FB4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_005E(c, 286u, depth + 1u); else { c.pc = 0x0029B010u; return; } if (c.pc != 0x002A8FB4u) [[unlikely]] return; }
L_002A8FB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8FC8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 404u, depth + 1u); else { c.pc = 0x00293A00u; return; } if (c.pc != 0x002A8FC8u) [[unlikely]] return; }
L_002A8FC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], 0u + 100u);
    set32(c.r[5], 0u + 105u);
    set32(c.r[4], 0u + 106u);
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[7].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0] + 284u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[6].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[3].w[0] + 284u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[3].w[0] + 284u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 31;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_002A9064; }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002A94F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002A9064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002A94F0; } }
L_002A906C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9074u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_005E(c, 278u, depth + 1u); else { c.pc = 0x0029AEA0u; return; } if (c.pc != 0x002A9074u) [[unlikely]] return; }
L_002A9074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A907Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 164u, depth + 1u); else { c.pc = 0x002A96C0u; return; } if (c.pc != 0x002A907Cu) [[unlikely]] return; }
L_002A907C:
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_002A908C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9094u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A9094u) [[unlikely]] return; }
L_002A9094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A94F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A90A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 222u, depth + 1u); else { c.pc = 0x002AA0F0u; return; } if (c.pc != 0x002A90A4u) [[unlikely]] return; }
L_002A90A4:
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_002A90B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A90BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A90BCu) [[unlikely]] return; }
L_002A90BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A94F0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002A94F0; } }
L_002A90D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A90D8u);  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A90D8u) [[unlikely]] return; }
L_002A90D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A94F0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002A94F0; } }
L_002A90EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A90F4u);  if (depth < kMaxDepth) unit_0062(c, 226u, depth + 1u); else { c.pc = 0x002AA1B0u; return; } if (c.pc != 0x002A90F4u) [[unlikely]] return; }
L_002A90F4:
    set32(c.r[4], 0u + 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[17].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_002A94F0; } }
L_002A9108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9110u);  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A9110u) [[unlikely]] return; }
L_002A9110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A94F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A9130; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_002A9130; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9130:
    set32(c.r[16], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9150; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002A9150:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 9u);  goto L_002A91A4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9164u); set32(c.r[4], c.r[4].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002A9164u) [[unlikely]] return; }
L_002A9164:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002A9194; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A917Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002A917Cu) [[unlikely]] return; }
L_002A917C:
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A91A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002A9194:
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002A91A0:
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
L_002A91A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002A94F0; } }
L_002A91AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A91CC; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];  if (t) { goto L_002A91CC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A91CC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A94F0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002A91E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A91E4u);  if (depth < kMaxDepth) unit_0069(c, 268u, depth + 1u); else { c.pc = 0x002C6BA0u; return; } if (c.pc != 0x002A91E4u) [[unlikely]] return; }
L_002A91E4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002A91E8:
    set32(c.r[2], 0u + 11u);
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 4;
L_002A91F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9200u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_005E(c, 285u, depth + 1u); else { c.pc = 0x0029AFA0u; return; } if (c.pc != 0x002A9200u) [[unlikely]] return; }
L_002A9200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A94F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002A9220; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 164u)));  if (t) { goto L_002A9220; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9228u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 57u, depth + 1u); else { c.pc = 0x00290A20u; return; } if (c.pc != 0x002A9228u) [[unlikely]] return; }
L_002A9228:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A923Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 8u, depth + 1u); else { c.pc = 0x002C4060u; return; } if (c.pc != 0x002A923Cu) [[unlikely]] return; }
L_002A923C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A925Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002A925Cu) [[unlikely]] return; }
L_002A925C:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002A94F0; } }
L_002A9268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9270u);  if (depth < kMaxDepth) unit_0062(c, 202u, depth + 1u); else { c.pc = 0x002A9E90u; return; } if (c.pc != 0x002A9270u) [[unlikely]] return; }
L_002A9270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9278u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 226u, depth + 1u); else { c.pc = 0x002AA1B0u; return; } if (c.pc != 0x002A9278u) [[unlikely]] return; }
L_002A9278:
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A9290; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 124u)));  if (t) { goto L_002A9290; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9290:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  goto L_002A92C8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002A92B0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_002A92B0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A92B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A92C4u);  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x002A92C4u) [[unlikely]] return; }
L_002A92C4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_002A92C8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A92DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 132u)));  if (t) { goto L_002A92DC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A92DC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 13u);  goto L_002A9314; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002A92FC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002A92FC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A92FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9310u);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x002A9310u) [[unlikely]] return; }
L_002A9310:
    set32(c.r[3], 0u + 13u);
    c.budget -= 1;
L_002A9314:
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_002A9318:
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.f[20] = 0u;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A9338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9330u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002A9330u) [[unlikely]] return; }
L_002A9330:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A9344; }
L_002A9338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A9350; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002A9344:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002A9350:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 480u)));  goto L_002A9368; }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002A9384; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 480u)));
    c.budget -= 1;
L_002A9368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9370u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_00A8(c, 232u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x002A9370u) [[unlikely]] return; }
L_002A9370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9384; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[16], 0u + 1u);
    c.f[20] = c.r[3].w[0];
    c.budget -= 3;
L_002A9384:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A94F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002A93A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 164u)));  if (t) { goto L_002A93A4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A93A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A93ACu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 57u, depth + 1u); else { c.pc = 0x00290A20u; return; } if (c.pc != 0x002A93ACu) [[unlikely]] return; }
L_002A93AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A93B8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 21u, depth + 1u); else { c.pc = 0x002C4250u; return; } if (c.pc != 0x002A93B8u) [[unlikely]] return; }
L_002A93B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 480u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 484u)));  goto L_002A93DC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A93D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A93D4u) [[unlikely]] return; }
L_002A93D4:
    st32((c.r[17].w[0] + 480u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 2;
L_002A93DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 488u)));  goto L_002A93FC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A93F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A93F4u) [[unlikely]] return; }
L_002A93F4:
    st32((c.r[17].w[0] + 484u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 488u)));
    c.budget -= 2;
L_002A93FC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_002A941C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9414u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9414u) [[unlikely]] return; }
L_002A9414:
    st32((c.r[17].w[0] + 488u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 2;
L_002A941C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A9430; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 124u)));  if (t) { goto L_002A9430; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9430:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_002A9464; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002A9450; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_002A9450; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9460u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x002A9460u) [[unlikely]] return; }
L_002A9460:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_002A9464:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A9478; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_002A9478; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9478:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 14u);  goto L_002A94AC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002A9498; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002A9498; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A94A8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x002A94A8u) [[unlikely]] return; }
L_002A94A8:
    set32(c.r[2], 0u + 14u);
    c.budget -= 1;
L_002A94AC:
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.f[20]);
    c.budget -= 2;
L_002A94B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A94BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A94BCu) [[unlikely]] return; }
L_002A94BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A94F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A94E4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002A94E4u) [[unlikely]] return; }
L_002A94E4:
    set32(c.r[3], 0u + 8u);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 3;
L_002A94F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002A94F4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A9510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002A955C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].d[0] ^ 9ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9558; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002A9550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9558; } }
L_002A9550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9558u);  if (depth < kMaxDepth) unit_005C(c, 387u, depth + 1u); else { c.pc = 0x002936F0u; return; } if (c.pc != 0x002A9558u) [[unlikely]] return; }
L_002A9558:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A955C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A9570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002A95BC; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].d[0] ^ 9ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A95B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002A95B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A95B8; } }
L_002A95B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A95B8u);  if (depth < kMaxDepth) unit_005C(c, 390u, depth + 1u); else { c.pc = 0x00293800u; return; } if (c.pc != 0x002A95B8u) [[unlikely]] return; }
L_002A95B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A95BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A95D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002A961C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].d[0] ^ 9ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9618; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002A9610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9618; } }
L_002A9610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9618u);  if (depth < kMaxDepth) unit_005C(c, 402u, depth + 1u); else { c.pc = 0x002939B0u; return; } if (c.pc != 0x002A9618u) [[unlikely]] return; }
L_002A9618:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A961C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A9630:
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002A965C; }
    set32(c.r[3], 0u + 71u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002A9650; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9660; } }
L_002A9650:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 148u), c.r[4].w[0]);  if (t) { goto L_002A9660; } }
L_002A965C:
    st32((c.r[3].w[0] + 148u), 0u);
    c.budget -= 1;
L_002A9660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A9670:
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A96AC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A96AC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A96AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A96AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A96AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A96AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A96C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A96DCu); set32(c.r[4], ld32((c.r[2].w[0] + 116u)));  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002A96DCu) [[unlikely]] return; }
L_002A96DC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  goto L_002A96F8; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), 0u);  goto L_002A96F8; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_002A96F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9718u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A9718u) [[unlikely]] return; }
L_002A9718:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9738u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A9738u) [[unlikely]] return; }
L_002A9738:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[8], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[7], 0u + 5u);
    set32(c.r[3], ld32((c.r[8].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9768u); st32((c.r[8].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 187u, depth + 1u); else { c.pc = 0x002A9A70u; return; } if (c.pc != 0x002A9768u) [[unlikely]] return; }
L_002A9768:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A977Cu); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_0062(c, 187u, depth + 1u); else { c.pc = 0x002A9A70u; return; } if (c.pc != 0x002A977Cu) [[unlikely]] return; }
L_002A977C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9790u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_0062(c, 187u, depth + 1u); else { c.pc = 0x002A9A70u; return; } if (c.pc != 0x002A9790u) [[unlikely]] return; }
L_002A9790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9798u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 174u, depth + 1u); else { c.pc = 0x002A97D0u; return; } if (c.pc != 0x002A9798u) [[unlikely]] return; }
L_002A9798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 185u, depth + 1u); else { c.pc = 0x002A9A00u; return; } if (c.pc != 0x002A97A0u) [[unlikely]] return; }
L_002A97A0:
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97B4u); set32(c.r[5], 0u + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A97B4u) [[unlikely]] return; }
L_002A97B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A97D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 445u, depth + 1u); else { c.pc = 0x00293FF0u; return; } if (c.pc != 0x002A97F0u) [[unlikely]] return; }
L_002A97F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 7u, depth + 1u); else { c.pc = 0x00294080u; return; } if (c.pc != 0x002A97FCu) [[unlikely]] return; }
L_002A97FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 17296u));
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[8], c.r[29].w[0] + 88u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 64u), c.r[6].d[0]);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 17304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 72u), c.r[4].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 17312u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 80u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 17320u));
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9848u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003C(c, 173u, depth + 1u); else { c.pc = 0x00211C50u; return; } if (c.pc != 0x002A9848u) [[unlikely]] return; }
L_002A9848:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 2;
L_002A9850:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9894u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0067(c, 349u, depth + 1u); else { c.pc = 0x002BFC80u; return; } if (c.pc != 0x002A9894u) [[unlikely]] return; }
L_002A9894:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] | 21313ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A98B8u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A98B8u) [[unlikely]] return; }
L_002A98B8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A98D4u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002A98D4u) [[unlikely]] return; }
L_002A98D4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9850u | kUnwind; return; } goto L_002A9850; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFA40000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF30000u);
    c.r[5].d[0] = c.r[4].d[0] | 28487ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 101u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[3].d[0] | 53109ull;
    c.budget -= 7;
L_002A9900:
    set32(c.r[8], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[8], ld32((c.r[8].w[0] + 96u)));
    set32(c.r[8], ld32((c.r[8].w[0])));
    st32((c.r[8].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[8].w[0] + 24u), 0u);
    st32((c.r[8].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[8].w[0] + 60u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9900u | kUnwind; return; } goto L_002A9900; } }
    c.r[10].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[8], 0u + 102u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
L_002A994C:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[9].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[9].w[0] + 24u), 0u);
    st32((c.r[9].w[0] + 28u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 56u), c.r[6].w[0]);
    st32((c.r[9].w[0] + 60u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 14;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A9988; }
    set32(c.r[3], ld32((c.r[3].w[0] + 140u)));
    c.budget -= 1;
L_002A9988:
    set32(c.r[5], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[9].w[0] + 128u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[10].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[9].w[0] + 148u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A994Cu | kUnwind; return; } goto L_002A994C; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 103u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
L_002A99AC:
    set32(c.r[6], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[6], ld32((c.r[6].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[6].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 24u), 0u);
    st32((c.r[6].w[0] + 28u), 0u);
    st32((c.r[6].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[6].w[0] + 60u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A99ACu | kUnwind; return; } goto L_002A99AC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A9A00:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
L_002A9A0C:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 104u)));  goto L_002A9A38; }
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[3].w[0] + 24u), 0u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 28u), 0u);  if (t) { goto L_002A9A54; } }
L_002A9A38:
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 7;
L_002A9A54:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9A0Cu | kUnwind; return; } goto L_002A9A0C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A9A70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[19].w[0] << 4);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 544u)));
    set32(c.r[22], c.r[2].w[0] + 544u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 546u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A9AE4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0] + 284u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + 1u);  if (t) { goto L_002A9AFC; } }
L_002A9AE4:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 284u)));
    set32(c.r[16], c.r[17].w[0] + 1u);
    c.budget -= 6;
L_002A9AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B04u); set32(c.r[4], ld32((c.r[4].w[0] + 116u)));  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002A9B04u) [[unlikely]] return; }
L_002A9B04:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[8], 0u + 17u);  goto L_002A9B10; }
    set32(c.r[8], 0u + 16u);
    c.budget -= 1;
L_002A9B10:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B28u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 192u, depth + 1u); else { c.pc = 0x002A9B80u; return; } if (c.pc != 0x002A9B28u) [[unlikely]] return; }
L_002A9B28:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B34u); set32(c.r[4], ld32((c.r[2].w[0] + 116u)));  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002A9B34u) [[unlikely]] return; }
L_002A9B34:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[8], 0u + 19u);  goto L_002A9B40; }
    set32(c.r[8], 0u + 18u);
    c.budget -= 1;
L_002A9B40:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B58u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 192u, depth + 1u); else { c.pc = 0x002A9B80u; return; } if (c.pc != 0x002A9B58u) [[unlikely]] return; }
L_002A9B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A9B80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[20], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 126u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_002A9CDC; } }
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[19].d[0] = c.r[3].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[19].sd[0] <= 0) { set32(c.r[4], ld32((c.r[20].w[0] + 292u)));  goto L_002A9C00; }
    c.r[1].d[0] = c.r[19].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A9C14; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 292u)));
    c.budget -= 1;
L_002A9C00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_002A9CDC; } }
L_002A9C14:
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9C30u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A9C30u) [[unlikely]] return; }
L_002A9C30:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[21].d[0] = c.r[2].d[0] + 0ull;  goto L_002A9C68; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[21].d[0] = c.r[2].d[0] + 0ull;  goto L_002A9C68; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A9C68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9C68; } }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9C68; } }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A9C68:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[3], c.r[21].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] | 21313ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9C8Cu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9C8Cu) [[unlikely]] return; }
L_002A9C8C:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9CA0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A9CA0u) [[unlikely]] return; }
L_002A9CA0:
    set32(c.r[3], c.r[19].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C00000u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 568u), c.f[0]);
    st32((c.r[20].w[0] + 572u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 284u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[20].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 15;
L_002A9CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A9D00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
L_002A9D20:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 8u);  goto L_002A9D58; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 6u);  goto L_002A9D4C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_002A9D44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9D54; } }
L_002A9D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 5u);  if (t) { goto L_002A9D5C; } }
L_002A9D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 7u);  if (t) { goto L_002A9D5C; } }
L_002A9D54:
    set32(c.r[4], 0u + 8u);
    c.budget -= 1;
L_002A9D58:
    set32(c.r[16], 0u + 9u);
    c.budget -= 1;
L_002A9D5C:
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 96u)));  goto L_002A9DE8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 96u)));  goto L_002A9DA8; }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9DA4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A9DA4u) [[unlikely]] return; }
L_002A9DA4:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002A9DA8:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002A9E60; }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 18u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9DE0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A9DE0u) [[unlikely]] return; }
L_002A9DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9E5C; } }
L_002A9DE8:
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 96u)));  goto L_002A9E24; }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9E20u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A9E20u) [[unlikely]] return; }
L_002A9E20:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002A9E24:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A9E5C; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 19u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9E5Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A9E5Cu) [[unlikely]] return; }
L_002A9E5C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A9E60:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9D20u | kUnwind; return; } goto L_002A9D20; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A9E90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9EB0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005E(c, 286u, depth + 1u); else { c.pc = 0x0029B010u; return; } if (c.pc != 0x002A9EB0u) [[unlikely]] return; }
L_002A9EB0:
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002A9ECC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0])));  goto L_002A9ECC; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9ECC:
    set32(c.r[4], ld32((c.r[18].w[0] + 480u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 76u);  goto L_002A9EF0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9EE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9EE8u) [[unlikely]] return; }
L_002A9EE8:
    st32((c.r[18].w[0] + 480u), 0u);
    set32(c.r[4], 0u + 76u);
    c.budget -= 2;
L_002A9EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9EF8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002A9EF8u) [[unlikely]] return; }
L_002A9EF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 480u), c.r[2].w[0]);  goto L_002A9F10; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F0Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x002A44A0u; return; } if (c.pc != 0x002A9F0Cu) [[unlikely]] return; }
L_002A9F0C:
    st32((c.r[18].w[0] + 480u), c.r[2].w[0]);
    c.budget -= 1;
L_002A9F10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 480u)));
    st32((c.r[2].w[0] + 72u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 480u)));
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 480u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F4Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 25u, depth + 1u); else { c.pc = 0x002A4620u; return; } if (c.pc != 0x002A9F4Cu) [[unlikely]] return; }
L_002A9F4C:
    set32(c.r[4], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 76u);  goto L_002A9F70; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9F68u) [[unlikely]] return; }
L_002A9F68:
    st32((c.r[18].w[0] + 484u), 0u);
    set32(c.r[4], 0u + 76u);
    c.budget -= 2;
L_002A9F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F78u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002A9F78u) [[unlikely]] return; }
L_002A9F78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 484u), c.r[2].w[0]);  goto L_002A9F90; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F8Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x002A44A0u; return; } if (c.pc != 0x002A9F8Cu) [[unlikely]] return; }
L_002A9F8C:
    st32((c.r[18].w[0] + 484u), c.r[2].w[0]);
    c.budget -= 1;
L_002A9F90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 484u)));
    st32((c.r[2].w[0] + 72u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 484u)));
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9FD0u); set32(c.r[6], c.r[2].w[0] + 3u);  if (depth < kMaxDepth) unit_0061(c, 25u, depth + 1u); else { c.pc = 0x002A4620u; return; } if (c.pc != 0x002A9FD0u) [[unlikely]] return; }
L_002A9FD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9FE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002A9FE0u) [[unlikely]] return; }
L_002A9FE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[16].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9FF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x002A9FF4u) [[unlikely]] return; }
L_002A9FF4:
    set32(c.r[2], ld32((c.r[18].w[0] + 484u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA008u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002AA008u) [[unlikely]] return; }
L_002AA008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA010u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002AA010u) [[unlikely]] return; }
L_002AA010:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002AA0D0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 488u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 76u);  goto L_002AA03C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA034u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA034u) [[unlikely]] return; }
L_002AA034:
    st32((c.r[18].w[0] + 488u), 0u);
    set32(c.r[4], 0u + 76u);
    c.budget -= 2;
L_002AA03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA044u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002AA044u) [[unlikely]] return; }
L_002AA044:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 488u), c.r[2].w[0]);  goto L_002AA05C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA058u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x002A44A0u; return; } if (c.pc != 0x002AA058u) [[unlikely]] return; }
L_002AA058:
    st32((c.r[18].w[0] + 488u), c.r[2].w[0]);
    c.budget -= 1;
L_002AA05C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 24u)));
    c.r[7].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[4], 0u + 6999u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[8].d[0] = c.r[8].d[0] & c.r[7].d[0];
    st32((c.r[2].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 488u)));
    st32((c.r[2].w[0] + 72u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 488u)));
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 488u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA09Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 25u, depth + 1u); else { c.pc = 0x002A4620u; return; } if (c.pc != 0x002AA09Cu) [[unlikely]] return; }
L_002AA09C:
    set32(c.r[2], ld32((c.r[18].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA0B0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002AA0B0u) [[unlikely]] return; }
L_002AA0B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 488u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA0C0u); set32(c.r[5], ld32((c.r[16].w[0] + 464u)));  if (depth < kMaxDepth) unit_00A8(c, 192u, depth + 1u); else { c.pc = 0x003C2350u; return; } if (c.pc != 0x002AA0C0u) [[unlikely]] return; }
L_002AA0C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 488u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[3].w[0] + 56u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
L_002AA0D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002AA0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.f[13] = c.f[12];
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA124u); set32(c.r[5], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AA124u) [[unlikely]] return; }
L_002AA124:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.f[13] = c.f[12];
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA15Cu); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AA15Cu) [[unlikely]] return; }
L_002AA15C:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA180u); set32(c.r[5], c.r[2].w[0] + 13u);  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AA180u) [[unlikely]] return; }
L_002AA180:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AA1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA1E0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AA1E0u) [[unlikely]] return; }
L_002AA1E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA21Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AA21Cu) [[unlikely]] return; }
L_002AA21C:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[6].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA24Cu); set32(c.r[5], 0u + 113u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA24Cu) [[unlikely]] return; }
L_002AA24C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AA260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AA294; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002AA2B0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002AA2B0; } }
L_002AA294:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_002AA2B4; }
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 1;
L_002AA2B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_002AA2B4:
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.f[13] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA2D4u); set32(c.r[5], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AA2D4u) [[unlikely]] return; }
L_002AA2D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA2F8u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AA2F8u) [[unlikely]] return; }
L_002AA2F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.f[13] = c.f[12];
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA330u); set32(c.r[5], c.r[2].w[0] + 13u);  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AA330u) [[unlikely]] return; }
L_002AA330:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA34Cu); st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0062(c, 185u, depth + 1u); else { c.pc = 0x002A9A00u; return; } if (c.pc != 0x002AA34Cu) [[unlikely]] return; }
L_002AA34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA354u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 196u, depth + 1u); else { c.pc = 0x002A9D00u; return; } if (c.pc != 0x002AA354u) [[unlikely]] return; }
L_002AA354:
    c.f[12] = 0u;
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA36Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002AA36Cu) [[unlikely]] return; }
L_002AA36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA374u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 163u, depth + 1u); else { c.pc = 0x002A9670u; return; } if (c.pc != 0x002AA374u) [[unlikely]] return; }
L_002AA374:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA384u); set32(c.r[4], ld32((c.r[2].w[0] + 116u)));  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002AA384u) [[unlikely]] return; }
L_002AA384:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[5], ld32((c.r[4].w[0] + 100u)));  if (t) { goto L_002AA3FC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));  goto L_002AA3D8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));  goto L_002AA3B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_002AA420; } }
L_002AA3B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA41C; } }
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[6], 0u + 273u);  goto L_002AA3C8; }
    set32(c.r[6], 0u + 276u);
    c.budget -= 1;
L_002AA3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA3D0u);  if (depth < kMaxDepth) unit_0069(c, 272u, depth + 1u); else { c.pc = 0x002C6C00u; return; } if (c.pc != 0x002AA3D0u) [[unlikely]] return; }
L_002AA3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA41C; } }
L_002AA3D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA41C; } }
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[6], 0u + 274u);  goto L_002AA3EC; }
    set32(c.r[6], 0u + 277u);
    c.budget -= 1;
L_002AA3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA3F4u);  if (depth < kMaxDepth) unit_0069(c, 272u, depth + 1u); else { c.pc = 0x002C6C00u; return; } if (c.pc != 0x002AA3F4u) [[unlikely]] return; }
L_002AA3F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA41C; } }
L_002AA3FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA41C; } }
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[6], 0u + 275u);  goto L_002AA414; }
    set32(c.r[6], 0u + 278u);
    c.budget -= 1;
L_002AA414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA41Cu);  if (depth < kMaxDepth) unit_0069(c, 272u, depth + 1u); else { c.pc = 0x002C6C00u; return; } if (c.pc != 0x002AA41Cu) [[unlikely]] return; }
L_002AA41C:
    set32(c.r[4], 0u + 6u);
    c.budget -= 1;
L_002AA420:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[17].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA440:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA464u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 163u, depth + 1u); else { c.pc = 0x002A9670u; return; } if (c.pc != 0x002AA464u) [[unlikely]] return; }
L_002AA464:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA470u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x002AA470u) [[unlikely]] return; }
L_002AA470:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002AA498; }
    c.f[12] = 0u;
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA490u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002AA490u) [[unlikely]] return; }
L_002AA490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AA5E8; } }
L_002AA498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA4A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 380u, depth + 1u); else { c.pc = 0x0028BE10u; return; } if (c.pc != 0x002AA4A0u) [[unlikely]] return; }
L_002AA4A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA4C4u); set32(c.r[5], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AA4C4u) [[unlikely]] return; }
L_002AA4C4:
    set32(c.r[6], ld32((c.r[17].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[4], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[7], ld32((c.r[6].w[0] + 4u)));
    c.r[6].d[0] = ld16((c.r[7].w[0] + 360u));
    c.r[6].d[0] = c.r[6].d[0] & 49151ull;
    st16((c.r[7].w[0] + 360u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    c.r[6].d[0] = ld16((c.r[7].w[0] + 360u));
    c.r[6].d[0] = c.r[6].d[0] & 49151ull;
    st16((c.r[7].w[0] + 360u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 292u)));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0] + 292u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 21;
L_002AA518:
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], ld32((c.r[3].w[0] + 100u)));  if (t) { goto L_002AA5A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { st32((c.r[29].w[0] + 100u), c.r[4].w[0]);  goto L_002AA574; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 132u), c.r[4].w[0]);  goto L_002AA548; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA5CC; } }
L_002AA548:
    set32(c.r[2], 0u + 279u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA56Cu); st32((c.r[29].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_0069(c, 273u, depth + 1u); else { c.pc = 0x002C6C30u; return; } if (c.pc != 0x002AA56Cu) [[unlikely]] return; }
L_002AA56C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA5CC; } }
L_002AA574:
    set32(c.r[2], 0u + 280u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA598u); st32((c.r[29].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0069(c, 273u, depth + 1u); else { c.pc = 0x002C6C30u; return; } if (c.pc != 0x002AA598u) [[unlikely]] return; }
L_002AA598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA5CC; } }
L_002AA5A0:
    st32((c.r[29].w[0] + 68u), c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));
    set32(c.r[2], 0u + 281u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA5CCu); st32((c.r[29].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_0069(c, 273u, depth + 1u); else { c.pc = 0x002C6C30u; return; } if (c.pc != 0x002AA5CCu) [[unlikely]] return; }
L_002AA5CC:
    c.f[12] = 0u;
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA5E4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002AA5E4u) [[unlikely]] return; }
L_002AA5E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AA5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002AA600:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8C10u | kUnwind; return; } goto L_002A8C10; }
L_002AA610:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9630u | kUnwind; return; } goto L_002A9630; }
L_002AA620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA634u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 372u, depth + 1u); else { c.pc = 0x00293560u; return; } if (c.pc != 0x002AA634u) [[unlikely]] return; }
L_002AA634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25344u);
    set32(c.r[2], c.r[2].w[0] + 25400u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 500u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[6], 0u + 28u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 480u), 0u);
    st32((c.r[16].w[0] + 484u), 0u);
    st32((c.r[16].w[0] + 488u), 0u);
    st32((c.r[16].w[0] + 492u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA678u); st32((c.r[16].w[0] + 496u), 0u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002AA678u) [[unlikely]] return; }
L_002AA678:
    st32((c.r[16].w[0] + 528u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 532u), 0u);
    set32(c.r[4], c.r[4].w[0] + 11472u);
    st32((c.r[16].w[0] + 536u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA694u); st32((c.r[16].w[0] + 540u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AA694u) [[unlikely]] return; }
L_002AA694:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AA6B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AA704; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25344u);
    set32(c.r[2], c.r[2].w[0] + 25400u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA6ECu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 377u, depth + 1u); else { c.pc = 0x00293640u; return; } if (c.pc != 0x002AA6ECu) [[unlikely]] return; }
L_002AA6EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AA708; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA704u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002AA704u) [[unlikely]] return; }
L_002AA704:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AA708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA734u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 306u, depth + 1u); else { c.pc = 0x002AAD10u; return; } if (c.pc != 0x002AA734u) [[unlikely]] return; }
L_002AA734:
    set32(c.r[4], ld32((c.r[16].w[0] + 540u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002AA750; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA748u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002AA748u) [[unlikely]] return; }
L_002AA748:
    st32((c.r[16].w[0] + 540u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_002AA750:
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_002AA780; }
    set32(c.r[5], ld32((c.r[2].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002AA77C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA77Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x002AA77Cu) [[unlikely]] return; }
L_002AA77C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002AA780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA788u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002AA788u) [[unlikely]] return; }
L_002AA788:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA794u); set32(c.r[4], c.r[4].w[0] + 11520u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002AA794u) [[unlikely]] return; }
L_002AA794:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AA7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002AA9A4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[3].d[0] = c.r[4].d[0] ^ 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 4u);  goto L_002AA808; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA9A0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_002AA808:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AA9A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002AA848; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA824u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002AA824u) [[unlikely]] return; }
L_002AA824:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002AA83C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA848; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002AA83C:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002AA848:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002AA880; }
    set32(c.r[3], ld32((c.r[17].w[0] + 488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA9A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA864u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 370u, depth + 1u); else { c.pc = 0x002AB9C0u; return; } if (c.pc != 0x002AA864u) [[unlikely]] return; }
L_002AA864:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA9A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002AA880:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002AA8B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA890u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002AA890u) [[unlikely]] return; }
L_002AA890:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002AA8A8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA8B4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002AA8A8:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002AA8B4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 488u)));  goto L_002AA8E8; }
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA8DCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002AA8DCu) [[unlikely]] return; }
L_002AA8DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA9A0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 488u)));
    c.budget -= 1;
L_002AA8E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA9A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AA90C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA904u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002AA904u) [[unlikely]] return; }
L_002AA904:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 8u);  goto L_002AA918; }
L_002AA90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002AA930; } }
    set32(c.r[4], 0u + 8u);
    c.budget -= 1;
L_002AA918:
    set32(c.r[5], ld32((c.r[28].w[0] - 30400u)));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = ld64((c.r[5].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_002AA930:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002AA940; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 2;
L_002AA940:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002AA980; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA950u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002AA950u) [[unlikely]] return; }
L_002AA950:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 4u);  goto L_002AA968; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA980; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_002AA968:
    set32(c.r[5], ld32((c.r[28].w[0] - 30400u)));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = ld64((c.r[5].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_002AA980:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA98C; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_002AA98C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AA9A0; } }
    c.r[5].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA9A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 375u, depth + 1u); else { c.pc = 0x002ABA60u; return; } if (c.pc != 0x002AA9A0u) [[unlikely]] return; }
L_002AA9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002AA9A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AABDC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].d[0] ^ 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;  goto L_002AAA04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002AABE0; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 1;
L_002AAA04:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AABDC; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + 11568u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002A8000u < 16384u) { entry = entries_0062[(t - 0x002A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002AAA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAA30u); set32(c.r[4], ld32((c.r[16].w[0] + 480u)));  if (depth < kMaxDepth) unit_005E(c, 285u, depth + 1u); else { c.pc = 0x0029AFA0u; return; } if (c.pc != 0x002AAA30u) [[unlikely]] return; }
L_002AAA30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AABDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAA40u); set32(c.r[4], ld32((c.r[16].w[0] + 480u)));  if (depth < kMaxDepth) unit_005E(c, 286u, depth + 1u); else { c.pc = 0x0029B010u; return; } if (c.pc != 0x002AAA40u) [[unlikely]] return; }
L_002AAA40:
    set32(c.r[3], ld32((c.r[16].w[0] + 528u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAA64u); set32(c.r[5], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_005C(c, 404u, depth + 1u); else { c.pc = 0x00293A00u; return; } if (c.pc != 0x002AAA64u) [[unlikely]] return; }
L_002AAA64:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002AAA8C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0])));  goto L_002AAA8C; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAA8C; } }
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_002AAA8C:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAA98u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002AAA98u) [[unlikely]] return; }
L_002AAA98:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 540u), c.r[4].w[0]);  goto L_002AAAB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAAACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 178u, depth + 1u); else { c.pc = 0x00209830u; return; } if (c.pc != 0x002AAAACu) [[unlikely]] return; }
L_002AAAAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 540u), c.r[4].w[0]);
    c.budget -= 2;
L_002AAAB4:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 5u);  goto L_002AAAEC; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAAD8u); set32(c.r[7], 0u + 112u);  if (depth < kMaxDepth) unit_005C(c, 420u, depth + 1u); else { c.pc = 0x00293CA0u; return; } if (c.pc != 0x002AAAD8u) [[unlikely]] return; }
L_002AAAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAAE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 443u, depth + 1u); else { c.pc = 0x00293FB0u; return; } if (c.pc != 0x002AAAE0u) [[unlikely]] return; }
L_002AAAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 484u)));  if (t) { goto L_002AAB30; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_002AAAEC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002AAB1C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB08u); set32(c.r[7], 0u + 112u);  if (depth < kMaxDepth) unit_005C(c, 420u, depth + 1u); else { c.pc = 0x00293CA0u; return; } if (c.pc != 0x002AAB08u) [[unlikely]] return; }
L_002AAB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 443u, depth + 1u); else { c.pc = 0x00293FB0u; return; } if (c.pc != 0x002AAB10u) [[unlikely]] return; }
L_002AAB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAB2C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002AAB1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002AABDC; } }
L_002AAB2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 1;
L_002AAB30:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_002AAB4C; }
    st32((c.r[16].w[0] + 484u), 0u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002AABDC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002AAB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002AABDC; } }
L_002AAB54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB5Cu);  if (depth < kMaxDepth) unit_0062(c, 310u, depth + 1u); else { c.pc = 0x002AADC0u; return; } if (c.pc != 0x002AAB5Cu) [[unlikely]] return; }
L_002AAB5C:
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_002AAB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002AAB74u) [[unlikely]] return; }
L_002AAB74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AABDC; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AAB8Cu) [[unlikely]] return; }
L_002AAB8C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002AABDC; } }
L_002AAB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AABA0u);  if (depth < kMaxDepth) unit_0062(c, 363u, depth + 1u); else { c.pc = 0x002AB880u; return; } if (c.pc != 0x002AABA0u) [[unlikely]] return; }
L_002AABA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AABDC; } }
L_002AABA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AABB0u);  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002AABB0u) [[unlikely]] return; }
L_002AABB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AABDC; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002AABDC; } }
L_002AABC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AABCCu);  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002AABCCu) [[unlikely]] return; }
L_002AABCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AABDC; } }
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_002AABDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002AABE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AABF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AAC00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AAC9C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].d[0] ^ 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002AACA0; }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AAC4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAC9C; } }
L_002AAC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAC54u);  if (depth < kMaxDepth) unit_005C(c, 390u, depth + 1u); else { c.pc = 0x00293800u; return; } if (c.pc != 0x002AAC54u) [[unlikely]] return; }
L_002AAC54:
    set32(c.r[3], ld32((c.r[16].w[0] + 496u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AAC9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002AAC8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 496u)));
    c.budget -= 1;
L_002AAC6C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002AAC8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAC88u);  if (depth < kMaxDepth) unit_005E(c, 171u, depth + 1u); else { c.pc = 0x00299D20u; return; } if (c.pc != 0x002AAC88u) [[unlikely]] return; }
L_002AAC88:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002AAC8C:
    set32(c.r[3], ld32((c.r[16].w[0] + 528u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 496u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAC6Cu | kUnwind; return; } goto L_002AAC6C; }
L_002AAC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002AACA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AACB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002AAD00; }
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[5].d[0] ^ 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AACFC; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AACF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AACFC; } }
L_002AACF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AACFCu);  if (depth < kMaxDepth) unit_005C(c, 402u, depth + 1u); else { c.pc = 0x002939B0u; return; } if (c.pc != 0x002AACFCu) [[unlikely]] return; }
L_002AACFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002AAD00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002AAD10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 496u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AAD9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AAD74; } }
L_002AAD38:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002AAD74; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 496u)));  goto L_002AAD68; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AAD64u) [[unlikely]] return; }
L_002AAD64:
    set32(c.r[3], ld32((c.r[17].w[0] + 496u)));
    c.budget -= 1;
L_002AAD68:
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_002AAD74:
    set32(c.r[3], ld32((c.r[17].w[0] + 528u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 496u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAD38u | kUnwind; return; } goto L_002AAD38; }
    set32(c.r[4], ld32((c.r[17].w[0] + 496u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002AADA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD98u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002AAD98u) [[unlikely]] return; }
L_002AAD98:
    st32((c.r[17].w[0] + 496u), 0u);
    c.budget -= 1;
L_002AAD9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002AADA0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AADC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 532u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AAE70; } }
L_002AADE8:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] - 7u);  goto L_002AADF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002AAE08; } }
L_002AADF8:
    set32(c.r[2], 0u + 3u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + 7u);
    c.budget -= 4;
L_002AAE08:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[17].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11312u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAE6Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AAE6Cu) [[unlikely]] return; }
L_002AAE6C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002AAE70:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AADE8u | kUnwind; return; } goto L_002AADE8; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AB088; } }
L_002AAE8C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 7u);  goto L_002AAF20; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 11312u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[6], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_002AAEBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AAECC; } }
L_002AAEBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[6], c.r[3].w[0] - 3u);
    c.r[5].d[0] = c.r[2].d[0] | 19266ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
L_002AAECC:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002AB088; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AB084; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAEFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AAEFCu) [[unlikely]] return; }
L_002AAEFC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAF18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002AAF18u) [[unlikely]] return; }
L_002AAF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB084; } }
L_002AAF20:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[18].w[0] - 7u);  goto L_002AAF64; }
    set32(c.r[17], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAF44u); c.r[5].d[0] = c.r[2].d[0] | 19265ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AAF44u) [[unlikely]] return; }
L_002AAF44:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAF5Cu); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002AAF5Cu) [[unlikely]] return; }
L_002AAF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB084; } }
L_002AAF64:
    set32(c.r[2], 0u + 3u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[19].w[0] << 2);  goto L_002AB00C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 96u)));  goto L_002AAFD4; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 96u)));  goto L_002AAF9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB084; } }
L_002AAF9C:
    set32(c.r[4], c.r[18].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] - 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFBCu); c.r[5].d[0] = c.r[2].d[0] | 19266ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AAFBCu) [[unlikely]] return; }
L_002AAFBC:
    set32(c.r[4], ld32((c.r[17].w[0] - 12u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFCCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002AAFCCu) [[unlikely]] return; }
L_002AAFCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB084; } }
L_002AAFD4:
    set32(c.r[4], c.r[18].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] - 4u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFF4u); c.r[5].d[0] = c.r[2].d[0] | 19268ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AAFF4u) [[unlikely]] return; }
L_002AAFF4:
    set32(c.r[4], ld32((c.r[17].w[0] - 4u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB004u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002AB004u) [[unlikely]] return; }
L_002AB004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB084; } }
L_002AB00C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 500u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 96u)));  goto L_002AB060; }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB048u); c.r[5].d[0] = c.r[2].d[0] | 19274ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB048u) [[unlikely]] return; }
L_002AB048:
    set32(c.r[4], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB058u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002AB058u) [[unlikely]] return; }
L_002AB058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_002AB084; } }
L_002AB060:
    set32(c.r[4], c.r[18].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 9;
L_002AB084:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002AB088:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[18].sd[0] < 7ll ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAE8Cu | kUnwind; return; } goto L_002AAE8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB0A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 306u, depth + 1u); else { c.pc = 0x002AAD10u; return; } if (c.pc != 0x002AB0A0u) [[unlikely]] return; }
L_002AB0A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 528u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB0ACu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002AB0ACu) [[unlikely]] return; }
L_002AB0AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 496u), c.r[2].w[0]);  if (t) { goto L_002AB0C8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002AB3E4; } }
L_002AB0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002AB170; } }
L_002AB0D0:
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 500u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB0E0u); set32(c.r[5], 0u + 105u);  if (depth < kMaxDepth) unit_0061(c, 147u, depth + 1u); else { c.pc = 0x002A5930u; return; } if (c.pc != 0x002AB0E0u) [[unlikely]] return; }
L_002AB0E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 1);  goto L_002AB11C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 306u, depth + 1u); else { c.pc = 0x002AAD10u; return; } if (c.pc != 0x002AB108u) [[unlikely]] return; }
L_002AB108:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002AB3E4; } }
L_002AB11C:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[4], c.r[4].w[0] + 7u);
    c.r[5].d[0] = c.r[2].d[0] | 19267ull;
    set32(c.r[17], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB14Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB14Cu) [[unlikely]] return; }
L_002AB14C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB16Cu); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002AB16Cu) [[unlikely]] return; }
L_002AB16C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002AB170:
    set32(c.r[2], ld32((c.r[16].w[0] + 528u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB0D0u | kUnwind; return; } goto L_002AB0D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB188u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 343u, depth + 1u); else { c.pc = 0x002AB410u; return; } if (c.pc != 0x002AB188u) [[unlikely]] return; }
L_002AB188:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[4].w[0] + 568u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 572u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 492u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AB1D4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB1CCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AB1CCu) [[unlikely]] return; }
L_002AB1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 96u)));  if (t) { goto L_002AB234; } }
L_002AB1D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[2].w[0] + 19u);  goto L_002AB214; }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AB210; } }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB208u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AB208u) [[unlikely]] return; }
L_002AB208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB230; } }
L_002AB210:
    set32(c.r[5], c.r[2].w[0] + 19u);
    c.budget -= 1;
L_002AB214:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB230u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AB230u) [[unlikely]] return; }
L_002AB230:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_002AB234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB254u); set32(c.r[4], ld32((c.r[16].w[0] + 528u)));  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002AB254u) [[unlikely]] return; }
L_002AB254:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[1] = 0u;
    set32(c.r[2], 0u + 1u);
    c.f[3] = c.r[3].w[0];
    set32(c.r[6], 0u + 24u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 536u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.f[1] = ld32((c.r[16].w[0] + 536u));
    c.f[0] = ld32((c.r[28].w[0] - 32668u));
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[7].w[0] + 208u), c.f[1]);
    set32(c.r[4], ld32((c.r[7].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[7].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.f[1] = ld32((c.r[3].w[0] + 208u));
    set32(c.r[4], c.r[3].w[0] + 440u);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 128u), c.f[1]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2D4u); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002AB2D4u) [[unlikely]] return; }
L_002AB2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 358u, depth + 1u); else { c.pc = 0x002AB6F0u; return; } if (c.pc != 0x002AB2DCu) [[unlikely]] return; }
L_002AB2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 381u, depth + 1u); else { c.pc = 0x002ABB70u; return; } if (c.pc != 0x002AB2E4u) [[unlikely]] return; }
L_002AB2E4:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB2F4u) [[unlikely]] return; }
L_002AB2F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 488u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_002AB3CC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[5].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 536u));
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[5].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB35Cu); set32(c.r[4], ld32((c.r[16].w[0] + 532u)));  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002AB35Cu) [[unlikely]] return; }
L_002AB35C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[4] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 24u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + 440u);
    c.f[1] = ld32((c.r[3].w[0] + 208u));
    c.f[0] = ld32((c.r[28].w[0] - 32668u));
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB3C4u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002AB3C4u) [[unlikely]] return; }
L_002AB3C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002AB3E8; } }
L_002AB3CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 6;
L_002AB3E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002AB3E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002AB400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AB410:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 528u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB448u); set32(c.r[5], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_005C(c, 445u, depth + 1u); else { c.pc = 0x00293FF0u; return; } if (c.pc != 0x002AB448u) [[unlikely]] return; }
L_002AB448:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB454u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 7u, depth + 1u); else { c.pc = 0x00294080u; return; } if (c.pc != 0x002AB454u) [[unlikely]] return; }
L_002AB454:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 17328u));
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[8], c.r[29].w[0] + 168u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 17336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 152u), c.r[4].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 17344u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 160u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 17352u));
    st64((c.r[29].w[0] + 168u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB4A0u); set32(c.r[6], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_003C(c, 173u, depth + 1u); else { c.pc = 0x00211C50u; return; } if (c.pc != 0x002AB4A0u) [[unlikely]] return; }
L_002AB4A0:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u + 7u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002AB6B4; } }
L_002AB4B0:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; c.r[3].d[0] = c.r[20].d[0] & 1ull;  if (t) { goto L_002AB4C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB4C4; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_002AB4C4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002AB6B4; }
    set32(c.r[3], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[17], c.r[20].w[0] << 2);
    set32(c.r[4], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[2].w[0] + 500u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 500u)));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 108u)));
    c.budget -= 20;
    if (c.r[22].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));  goto L_002AB528; }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 104u)));  if (t) { goto L_002AB580; } }
L_002AB528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB530u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002AB530u) [[unlikely]] return; }
L_002AB530:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB53Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002AB53Cu) [[unlikely]] return; }
L_002AB53C:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AB564; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002AB564:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AB57C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002AB57C:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.budget -= 1;
L_002AB580:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB594u); set32(c.r[5], 0u + 105u);  if (depth < kMaxDepth) unit_0067(c, 372u, depth + 1u); else { c.pc = 0x002BFFD0u; return; } if (c.pc != 0x002AB594u) [[unlikely]] return; }
L_002AB594:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 114u)));
    c.budget -= 4;
    if (c.r[22].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));  goto L_002AB5B0; }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 104u)));  if (t) { goto L_002AB608; } }
L_002AB5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5B8u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002AB5B8u) [[unlikely]] return; }
L_002AB5B8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5C4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002AB5C4u) [[unlikely]] return; }
L_002AB5C4:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AB5EC; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002AB5EC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AB604; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002AB604:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.budget -= 1;
L_002AB608:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB61Cu); set32(c.r[5], 0u + 105u);  if (depth < kMaxDepth) unit_0068(c, 14u, depth + 1u); else { c.pc = 0x002C02C0u; return; } if (c.pc != 0x002AB61Cu) [[unlikely]] return; }
L_002AB61C:
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[16], c.r[18].w[0] << 2);
    c.r[5].d[0] = c.r[2].d[0] | 19268ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB644u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB644u) [[unlikely]] return; }
L_002AB644:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB664u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002AB664u) [[unlikely]] return; }
L_002AB664:
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[5].d[0] = c.r[2].d[0] | 19270ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB688u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB688u) [[unlikely]] return; }
L_002AB688:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB6A8u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002AB6A8u) [[unlikely]] return; }
L_002AB6A8:
    set32(c.r[18], c.r[18].w[0] + 3u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 3;
L_002AB6B4:
    set32(c.r[3], ld32((c.r[21].w[0] + 108u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB4B0u | kUnwind; return; } goto L_002AB4B0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002AB6F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002AB710; } }
L_002AB6F8:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], ld32((c.r[28].w[0] - 31620u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 160u), c.r[5].w[0]);
    c.budget -= 6;
L_002AB710:
    set32(c.r[2], ld32((c.r[4].w[0] + 528u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 496u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB6F8u | kUnwind; return; } goto L_002AB6F8; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002AB788; } }
L_002AB72C:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].d[0] & 1ull;  if (t) { goto L_002AB740; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AB740; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_002AB740:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002AB788; }
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 16;
L_002AB788:
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB72Cu | kUnwind; return; } goto L_002AB72C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 7u);  if (t) { goto L_002AB7B8; } }
L_002AB7A0:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], ld32((c.r[28].w[0] - 31616u)));
    set32(c.r[6], c.r[6].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0] + 160u), c.r[5].w[0]);
    c.budget -= 6;
L_002AB7B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB7A0u | kUnwind; return; } goto L_002AB7A0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 488u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_002AB864; }
    set32(c.r[3], ld32((c.r[4].w[0] + 532u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 496u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 31612u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 160u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 532u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 532u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 532u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 31608u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0] + 160u), c.r[6].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 36;
L_002AB864:
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002A8000u < 16384u) { entry = entries_0062[(t - 0x002A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002AB870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AB880:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 9u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB8B0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AB8B0u) [[unlikely]] return; }
L_002AB8B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.f[2] = ld32((c.r[16].w[0] + 536u));
    c.f[0] = ld32((c.r[28].w[0] - 32668u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.f[1] = ld32((c.r[3].w[0] + 208u));
    set32(c.r[4], c.r[3].w[0] + 440u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB8F4u); st32((c.r[29].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002AB8F4u) [[unlikely]] return; }
L_002AB8F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 488u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 6u);  goto L_002AB980; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB908u); set32(c.r[4], ld32((c.r[16].w[0] + 532u)));  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002AB908u) [[unlikely]] return; }
L_002AB908:
    c.f[5] = ld32((c.r[16].w[0] + 536u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[4] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.f[6] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.f[3] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    set32(c.r[4], c.r[3].w[0] + 440u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 208u));
    c.f[1] = ld32((c.r[28].w[0] - 32668u));
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB97Cu); st32((c.r[29].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002AB97Cu) [[unlikely]] return; }
L_002AB97C:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_002AB980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB99Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB99Cu) [[unlikely]] return; }
L_002AB99C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002AB9B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AB9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 21u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB9F0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002AB9F0u) [[unlikely]] return; }
L_002AB9F0:
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 2u);
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[7], 0u - 1u);
    c.r[8].d[0] = ld16((c.r[9].w[0] + 360u));
    set32(c.r[6], 0u + 1u);
    c.r[8].d[0] = c.r[8].d[0] & 49151ull;
    st16((c.r[9].w[0] + 360u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABA2Cu); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002ABA2Cu) [[unlikely]] return; }
L_002ABA2C:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABA3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ABA3Cu) [[unlikely]] return; }
L_002ABA3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ABA50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ABA60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 528u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002ABB58; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 532u)));  goto L_002ABAA8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 532u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 532u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 528u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 532u)));  goto L_002ABAC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 532u), 0u);  if (t) { goto L_002ABAC0; } }
L_002ABAA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002ABABC; }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 532u), c.r[2].w[0]);  if (t) { goto L_002ABAC0; } }
L_002ABABC:
    st32((c.r[16].w[0] + 532u), c.r[2].w[0]);
    c.budget -= 1;
L_002ABAC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 532u)));
    c.budget -= 1;
L_002ABAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABACCu);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002ABACCu) [[unlikely]] return; }
L_002ABACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[4] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.f[3] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = 0u;
    set32(c.r[3], 0u + 1u);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[6], 0u + 24u);
    set32(c.r[4], c.r[7].w[0] + 440u);
    c.f[0] = ld32((c.r[7].w[0] + 208u));
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB30u); st32((c.r[29].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002ABB30u) [[unlikely]] return; }
L_002ABB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 358u, depth + 1u); else { c.pc = 0x002AB6F0u; return; } if (c.pc != 0x002ABB38u) [[unlikely]] return; }
L_002ABB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 381u, depth + 1u); else { c.pc = 0x002ABB70u; return; } if (c.pc != 0x002ABB40u) [[unlikely]] return; }
L_002ABB40:
    c.f[12] = 0u;
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB58u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002ABB58u) [[unlikely]] return; }
L_002ABB58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002ABB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 532u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 500u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1296u)));
    c.budget -= 13;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], 0u + 2u);  goto L_002ABBB4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x002ABBB0u) [[unlikely]] return; }
L_002ABBB0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_002ABBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBBCu);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002ABBBCu) [[unlikely]] return; }
L_002ABBBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 532u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 500u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBD4u); set32(c.r[4], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_0051(c, 290u, depth + 1u); else { c.pc = 0x00266540u; return; } if (c.pc != 0x002ABBD4u) [[unlikely]] return; }
L_002ABBD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ABBF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 255u, depth + 1u); else { c.pc = 0x002AA620u; return; } if (c.pc != 0x002ABC04u) [[unlikely]] return; }
L_002ABC04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25248u);
    set32(c.r[3], c.r[3].w[0] + 25304u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52500000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 544u), 0u);
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
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC6Cu); st32((c.r[29].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0060(c, 391u, depth + 1u); else { c.pc = 0x002A3B00u; return; } if (c.pc != 0x002ABC6Cu) [[unlikely]] return; }
L_002ABC6C:
    set32(c.r[4], c.r[16].w[0] + 500u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC78u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0060(c, 416u, depth + 1u); else { c.pc = 0x002A3FE0u; return; } if (c.pc != 0x002ABC78u) [[unlikely]] return; }
L_002ABC78:
    st32((c.r[16].w[0] + 528u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[16].w[0] + 492u), c.r[2].w[0]);  if (t) { goto L_002ABC98; } }
    set32(c.r[2], 0u + 9u);
    st32((c.r[16].w[0] + 492u), c.r[2].w[0]);
    c.budget -= 2;
L_002ABC98:
    set32(c.r[2], ld32((c.r[16].w[0] + 492u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002ABCB0; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 488u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_002ABCB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002ABCC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002ABD14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25248u);
    set32(c.r[2], c.r[2].w[0] + 25304u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCFCu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 259u, depth + 1u); else { c.pc = 0x002AA6B0u; return; } if (c.pc != 0x002ABCFCu) [[unlikely]] return; }
L_002ABCFC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002ABD18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002ABD14u) [[unlikely]] return; }
L_002ABD14:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002ABD18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ABD30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 276u, depth + 1u); else { c.pc = 0x002AA9C0u; return; } if (c.pc != 0x002ABD44u) [[unlikely]] return; }
L_002ABD44:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002ABDA8; }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));  goto L_002ABD68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002ABDD0; } }
L_002ABD68:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002ABD7C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_002ABD7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ABDCC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 10u);  goto L_002ABD98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD94u);  if (depth < kMaxDepth) unit_0069(c, 268u, depth + 1u); else { c.pc = 0x002C6BA0u; return; } if (c.pc != 0x002ABD94u) [[unlikely]] return; }
L_002ABD94:
    set32(c.r[4], 0u + 10u);
    c.budget -= 1;
L_002ABD98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_002ABDCC; } }
L_002ABDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDB0u);  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002ABDB0u) [[unlikely]] return; }
L_002ABDB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ABDCC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDCCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 363u, depth + 1u); else { c.pc = 0x002AB880u; return; } if (c.pc != 0x002ABDCCu) [[unlikely]] return; }
L_002ABDCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002ABDD0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ABDE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 488u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002ABE64; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002ABE0Cu) [[unlikely]] return; }
L_002ABE0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 532u), 0u);  goto L_002ABE54; }
    set32(c.r[3], ld32((c.r[17].w[0] + 528u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002ABE40; } }
L_002ABE20:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 500u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_002ABE40; }
    st32((c.r[17].w[0] + 532u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 544u), c.r[4].w[0]);  if (t) { goto L_002ABE58; } }
L_002ABE40:
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABE20u | kUnwind; return; } goto L_002ABE20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002ABE5C; } }
L_002ABE54:
    st32((c.r[17].w[0] + 544u), 0u);
    c.budget -= 1;
L_002ABE58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002ABE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE64u);  if (depth < kMaxDepth) unit_0062(c, 358u, depth + 1u); else { c.pc = 0x002AB6F0u; return; } if (c.pc != 0x002ABE64u) [[unlikely]] return; }
L_002ABE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 440u, depth + 1u); else { c.pc = 0x00293F10u; return; } if (c.pc != 0x002ABE6Cu) [[unlikely]] return; }
L_002ABE6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 472u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[5], c.r[3].w[0] - c.r[4].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 88u)));  goto L_002ABE9C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE94u); set32(c.r[4], c.r[4].w[0] + 10000u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002ABE94u) [[unlikely]] return; }
L_002ABE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002ABEA8; } }
L_002ABE9C:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_002ABEA8:
    set32(c.r[3], ld32((c.r[6].w[0] + 164u)));
    set32(c.r[2], 0u - 2u);
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[6].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABECCu); set32(c.r[5], 0u + 115u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ABECCu) [[unlikely]] return; }
L_002ABECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ABEE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 19267ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 532u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABF28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ABF28u) [[unlikely]] return; }
L_002ABF28:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABF3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002ABF3Cu) [[unlikely]] return; }
L_002ABF3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABF5Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002ABF5Cu) [[unlikely]] return; }
L_002ABF5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ABF90:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 116u);
    set32(c.r[25], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002A8000u < 16384u) { entry = entries_0062[(t - 0x002A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002ABFB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 532u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 500u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));
    set32(c.r[16], ld32((c.r[6].w[0] + 148u)));
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 20;
    [[clang::musttail]] return unit_0063(c, 1u, depth);
}

}
