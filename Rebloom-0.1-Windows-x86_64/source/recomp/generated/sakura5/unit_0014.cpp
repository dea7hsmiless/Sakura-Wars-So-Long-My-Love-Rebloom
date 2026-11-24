#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0014[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 105,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 123, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0,
    127, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 133,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0,
    212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0,
    261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 305,
    0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309,
    0, 0, 0, 0, 0, 310, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 338, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351,
    0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 369, 0, 370,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 384, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0,
    0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423,
};

void unit_0014(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00170000;
    case 2u: goto L_00170024;
    case 3u: goto L_00170040;
    case 4u: goto L_00170068;
    case 5u: goto L_00170080;
    case 6u: goto L_001700A4;
    case 7u: goto L_001700C0;
    case 8u: goto L_001700D0;
    case 9u: goto L_00170108;
    case 10u: goto L_00170114;
    case 11u: goto L_00170128;
    case 12u: goto L_0017013C;
    case 13u: goto L_00170154;
    case 14u: goto L_00170180;
    case 15u: goto L_001701B0;
    case 16u: goto L_001701C0;
    case 17u: goto L_00170210;
    case 18u: goto L_0017021C;
    case 19u: goto L_00170230;
    case 20u: goto L_00170244;
    case 21u: goto L_0017025C;
    case 22u: goto L_00170280;
    case 23u: goto L_001702AC;
    case 24u: goto L_001702D4;
    case 25u: goto L_001702EC;
    case 26u: goto L_001702F8;
    case 27u: goto L_00170320;
    case 28u: goto L_00170370;
    case 29u: goto L_001703BC;
    case 30u: goto L_001703C8;
    case 31u: goto L_001703DC;
    case 32u: goto L_001703F0;
    case 33u: goto L_00170408;
    case 34u: goto L_00170430;
    case 35u: goto L_00170444;
    case 36u: goto L_00170460;
    case 37u: goto L_001704B4;
    case 38u: goto L_001704C0;
    case 39u: goto L_001704D4;
    case 40u: goto L_001704E8;
    case 41u: goto L_00170500;
    case 42u: goto L_0017052C;
    case 43u: goto L_00170544;
    case 44u: goto L_00170560;
    case 45u: goto L_00170590;
    case 46u: goto L_001705A8;
    case 47u: goto L_001705C0;
    case 48u: goto L_001705D0;
    case 49u: goto L_001705F0;
    case 50u: goto L_00170644;
    case 51u: goto L_00170654;
    case 52u: goto L_0017069C;
    case 53u: goto L_001706A4;
    case 54u: goto L_001706B8;
    case 55u: goto L_00170720;
    case 56u: goto L_00170738;
    case 57u: goto L_00170760;
    case 58u: goto L_001707A4;
    case 59u: goto L_001707B0;
    case 60u: goto L_001707C8;
    case 61u: goto L_001707E0;
    case 62u: goto L_0017080C;
    case 63u: goto L_0017081C;
    case 64u: goto L_00170830;
    case 65u: goto L_001708A8;
    case 66u: goto L_001708B0;
    case 67u: goto L_001708C4;
    case 68u: goto L_00170944;
    case 69u: goto L_001709A0;
    case 70u: goto L_001709B0;
    case 71u: goto L_001709C0;
    case 72u: goto L_001709D0;
    case 73u: goto L_001709E0;
    case 74u: goto L_001709F8;
    case 75u: goto L_00170A00;
    case 76u: goto L_00170A30;
    case 77u: goto L_00170ABC;
    case 78u: goto L_00170ADC;
    case 79u: goto L_00170AF0;
    case 80u: goto L_00170B08;
    case 81u: goto L_00170B3C;
    case 82u: goto L_00170B5C;
    case 83u: goto L_00170B70;
    case 84u: goto L_00170B94;
    case 85u: goto L_00170BA8;
    case 86u: goto L_00170BC0;
    case 87u: goto L_00170BD0;
    case 88u: goto L_00170C14;
    case 89u: goto L_00170C2C;
    case 90u: goto L_00170C3C;
    case 91u: goto L_00170C74;
    case 92u: goto L_00170C90;
    case 93u: goto L_00170CE0;
    case 94u: goto L_00170D08;
    case 95u: goto L_00170D1C;
    case 96u: goto L_00170D38;
    case 97u: goto L_00170D5C;
    case 98u: goto L_00170D84;
    case 99u: goto L_00170DA8;
    case 100u: goto L_00170DC0;
    case 101u: goto L_00170E00;
    case 102u: goto L_00170E50;
    case 103u: goto L_00170E6C;
    case 104u: goto L_00170E74;
    case 105u: goto L_00170E7C;
    case 106u: goto L_00170E84;
    case 107u: goto L_00170EA4;
    case 108u: goto L_00170EBC;
    case 109u: goto L_00170ED4;
    case 110u: goto L_00170EF0;
    case 111u: goto L_00170F00;
    case 112u: goto L_00170F08;
    case 113u: goto L_00170F28;
    case 114u: goto L_00170F40;
    case 115u: goto L_00170F4C;
    case 116u: goto L_00170F54;
    case 117u: goto L_00170F5C;
    case 118u: goto L_00170F70;
    case 119u: goto L_00170FB4;
    case 120u: goto L_00170FBC;
    case 121u: goto L_00170FC8;
    case 122u: goto L_00171038;
    case 123u: goto L_0017103C;
    case 124u: goto L_00171040;
    case 125u: goto L_00171070;
    case 126u: goto L_00171078;
    case 127u: goto L_00171080;
    case 128u: goto L_00171084;
    case 129u: goto L_001710A0;
    case 130u: goto L_001710C0;
    case 131u: goto L_001710E8;
    case 132u: goto L_001710F0;
    case 133u: goto L_001710FC;
    case 134u: goto L_00171100;
    case 135u: goto L_00171140;
    case 136u: goto L_0017116C;
    case 137u: goto L_00171178;
    case 138u: goto L_00171180;
    case 139u: goto L_001711B8;
    case 140u: goto L_001711C0;
    case 141u: goto L_001711CC;
    case 142u: goto L_001711F0;
    case 143u: goto L_00171228;
    case 144u: goto L_001712F0;
    case 145u: goto L_00171300;
    case 146u: goto L_00171310;
    case 147u: goto L_00171350;
    case 148u: goto L_00171360;
    case 149u: goto L_00171370;
    case 150u: goto L_00171380;
    case 151u: goto L_00171390;
    case 152u: goto L_001713A0;
    case 153u: goto L_001713B0;
    case 154u: goto L_001713C0;
    case 155u: goto L_001713D0;
    case 156u: goto L_001713FC;
    case 157u: goto L_00171410;
    case 158u: goto L_00171434;
    case 159u: goto L_0017143C;
    case 160u: goto L_00171450;
    case 161u: goto L_00171478;
    case 162u: goto L_00171498;
    case 163u: goto L_001714A8;
    case 164u: goto L_001714D4;
    case 165u: goto L_001714F0;
    case 166u: goto L_00171564;
    case 167u: goto L_00171580;
    case 168u: goto L_00171594;
    case 169u: goto L_001715B8;
    case 170u: goto L_001715D8;
    case 171u: goto L_001715F0;
    case 172u: goto L_00171618;
    case 173u: goto L_00171630;
    case 174u: goto L_00171688;
    case 175u: goto L_00171690;
    case 176u: goto L_001716B0;
    case 177u: goto L_001716C4;
    case 178u: goto L_001716E8;
    case 179u: goto L_00171720;
    case 180u: goto L_0017173C;
    case 181u: goto L_00171750;
    case 182u: goto L_00171774;
    case 183u: goto L_00171794;
    case 184u: goto L_001717AC;
    case 185u: goto L_001717D4;
    case 186u: goto L_001717F0;
    case 187u: goto L_0017183C;
    case 188u: goto L_0017184C;
    case 189u: goto L_00171854;
    case 190u: goto L_00171874;
    case 191u: goto L_00171880;
    case 192u: goto L_00171888;
    case 193u: goto L_001718AC;
    case 194u: goto L_001718E4;
    case 195u: goto L_00171900;
    case 196u: goto L_00171914;
    case 197u: goto L_00171938;
    case 198u: goto L_00171958;
    case 199u: goto L_00171970;
    case 200u: goto L_00171998;
    case 201u: goto L_001719B0;
    case 202u: goto L_001719D0;
    case 203u: goto L_001719F0;
    case 204u: goto L_00171A00;
    case 205u: goto L_00171A10;
    case 206u: goto L_00171A20;
    case 207u: goto L_00171A68;
    case 208u: goto L_00171A7C;
    case 209u: goto L_00171A98;
    case 210u: goto L_00171AC8;
    case 211u: goto L_00171AE4;
    case 212u: goto L_00171B00;
    case 213u: goto L_00171B08;
    case 214u: goto L_00171B60;
    case 215u: goto L_00171BA8;
    case 216u: goto L_00171BB8;
    case 217u: goto L_00171BD4;
    case 218u: goto L_00171C04;
    case 219u: goto L_00171C20;
    case 220u: goto L_00171C3C;
    case 221u: goto L_00171C44;
    case 222u: goto L_00171CA0;
    case 223u: goto L_00171CF0;
    case 224u: goto L_00171D14;
    case 225u: goto L_00171D30;
    case 226u: goto L_00171D4C;
    case 227u: goto L_00171D54;
    case 228u: goto L_00171D88;
    case 229u: goto L_00171DB0;
    case 230u: goto L_00171DD0;
    case 231u: goto L_00171DF0;
    case 232u: goto L_00171E10;
    case 233u: goto L_00171E30;
    case 234u: goto L_00171EB0;
    case 235u: goto L_00171EC8;
    case 236u: goto L_00171F20;
    case 237u: goto L_00171F78;
    case 238u: goto L_00171F90;
    case 239u: goto L_00171FE0;
    case 240u: goto L_00171FFC;
    case 241u: goto L_0017202C;
    case 242u: goto L_0017203C;
    case 243u: goto L_00172048;
    case 244u: goto L_00172064;
    case 245u: goto L_0017206C;
    case 246u: goto L_001720C0;
    case 247u: goto L_00172128;
    case 248u: goto L_00172144;
    case 249u: goto L_00172160;
    case 250u: goto L_00172168;
    case 251u: goto L_0017219C;
    case 252u: goto L_001721D0;
    case 253u: goto L_001721F4;
    case 254u: goto L_00172250;
    case 255u: goto L_00172270;
    case 256u: goto L_00172290;
    case 257u: goto L_001722B0;
    case 258u: goto L_001722D0;
    case 259u: goto L_001722F0;
    case 260u: goto L_001722F8;
    case 261u: goto L_00172300;
    case 262u: goto L_00172314;
    case 263u: goto L_00172354;
    case 264u: goto L_00172400;
    case 265u: goto L_00172424;
    case 266u: goto L_0017243C;
    case 267u: goto L_00172450;
    case 268u: goto L_00172458;
    case 269u: goto L_00172460;
    case 270u: goto L_00172474;
    case 271u: goto L_0017248C;
    case 272u: goto L_001724C4;
    case 273u: goto L_00172618;
    case 274u: goto L_0017267C;
    case 275u: goto L_001726A0;
    case 276u: goto L_001726BC;
    case 277u: goto L_001726D4;
    case 278u: goto L_001726E4;
    case 279u: goto L_00172714;
    case 280u: goto L_00172724;
    case 281u: goto L_0017274C;
    case 282u: goto L_001728F0;
    case 283u: goto L_0017293C;
    case 284u: goto L_00172950;
    case 285u: goto L_00172978;
    case 286u: goto L_00172980;
    case 287u: goto L_001729A0;
    case 288u: goto L_001729B8;
    case 289u: goto L_001729C8;
    case 290u: goto L_001729D0;
    case 291u: goto L_001729D8;
    case 292u: goto L_001729EC;
    case 293u: goto L_00172A14;
    case 294u: goto L_00172A24;
    case 295u: goto L_00172A40;
    case 296u: goto L_00172A70;
    case 297u: goto L_00172AB4;
    case 298u: goto L_00172ACC;
    case 299u: goto L_00172AD4;
    case 300u: goto L_00172ADC;
    case 301u: goto L_00172AF0;
    case 302u: goto L_00172B20;
    case 303u: goto L_00172B5C;
    case 304u: goto L_00172B74;
    case 305u: goto L_00172B7C;
    case 306u: goto L_00172B84;
    case 307u: goto L_00172B98;
    case 308u: goto L_00172BC0;
    case 309u: goto L_00172BFC;
    case 310u: goto L_00172C14;
    case 311u: goto L_00172C1C;
    case 312u: goto L_00172C24;
    case 313u: goto L_00172C38;
    case 314u: goto L_00172C60;
    case 315u: goto L_00172C94;
    case 316u: goto L_00172C9C;
    case 317u: goto L_00172CA4;
    case 318u: goto L_00172CB8;
    case 319u: goto L_00172CF0;
    case 320u: goto L_00172D80;
    case 321u: goto L_00172DB0;
    case 322u: goto L_00172DB8;
    case 323u: goto L_00172DC0;
    case 324u: goto L_00172DD4;
    case 325u: goto L_00172E00;
    case 326u: goto L_00172E30;
    case 327u: goto L_00172E38;
    case 328u: goto L_00172E40;
    case 329u: goto L_00172E54;
    case 330u: goto L_00172E80;
    case 331u: goto L_00172EB0;
    case 332u: goto L_00172EB8;
    case 333u: goto L_00172EC0;
    case 334u: goto L_00172ED4;
    case 335u: goto L_00172F20;
    case 336u: goto L_00172F50;
    case 337u: goto L_00172F88;
    case 338u: goto L_00172F90;
    case 339u: goto L_00172F98;
    case 340u: goto L_00172FAC;
    case 341u: goto L_00172FF0;
    case 342u: goto L_00173080;
    case 343u: goto L_001730BC;
    case 344u: goto L_001730D8;
    case 345u: goto L_001730E8;
    case 346u: goto L_00173100;
    case 347u: goto L_001731DC;
    case 348u: goto L_00173200;
    case 349u: goto L_00173248;
    case 350u: goto L_00173274;
    case 351u: goto L_0017327C;
    case 352u: goto L_00173284;
    case 353u: goto L_00173298;
    case 354u: goto L_001732BC;
    case 355u: goto L_001732E4;
    case 356u: goto L_00173300;
    case 357u: goto L_00173324;
    case 358u: goto L_0017334C;
    case 359u: goto L_00173368;
    case 360u: goto L_00173394;
    case 361u: goto L_001733D0;
    case 362u: goto L_00173404;
    case 363u: goto L_0017343C;
    case 364u: goto L_00173440;
    case 365u: goto L_00173480;
    case 366u: goto L_001734BC;
    case 367u: goto L_001734D4;
    case 368u: goto L_001734EC;
    case 369u: goto L_001734F4;
    case 370u: goto L_001734FC;
    case 371u: goto L_00173510;
    case 372u: goto L_0017353C;
    case 373u: goto L_00173548;
    case 374u: goto L_00173560;
    case 375u: goto L_001735C8;
    case 376u: goto L_0017364C;
    case 377u: goto L_00173698;
    case 378u: goto L_001736B4;
    case 379u: goto L_001736D8;
    case 380u: goto L_0017373C;
    case 381u: goto L_001737A0;
    case 382u: goto L_001737E0;
    case 383u: goto L_001737E8;
    case 384u: goto L_001737F4;
    case 385u: goto L_0017383C;
    case 386u: goto L_00173860;
    case 387u: goto L_00173880;
    case 388u: goto L_001738B0;
    case 389u: goto L_001738D4;
    case 390u: goto L_00173990;
    case 391u: goto L_00173A44;
    case 392u: goto L_00173AA0;
    case 393u: goto L_00173AC0;
    case 394u: goto L_00173AF8;
    case 395u: goto L_00173BC4;
    case 396u: goto L_00173C3C;
    case 397u: goto L_00173C5C;
    case 398u: goto L_00173C7C;
    case 399u: goto L_00173CD0;
    case 400u: goto L_00173CE0;
    case 401u: goto L_00173D20;
    case 402u: goto L_00173D30;
    case 403u: goto L_00173D60;
    case 404u: goto L_00173D74;
    case 405u: goto L_00173DA0;
    case 406u: goto L_00173DC0;
    case 407u: goto L_00173DF8;
    case 408u: goto L_00173E0C;
    case 409u: goto L_00173E8C;
    case 410u: goto L_00173EA4;
    case 411u: goto L_00173EC0;
    case 412u: goto L_00173EC8;
    case 413u: goto L_00173ED4;
    case 414u: goto L_00173EEC;
    case 415u: goto L_00173F08;
    case 416u: goto L_00173F20;
    case 417u: goto L_00173F48;
    case 418u: goto L_00173F68;
    case 419u: goto L_00173F70;
    case 420u: goto L_00173F98;
    case 421u: goto L_00173FC0;
    case 422u: goto L_00173FD8;
    case 423u: goto L_00173FFC;
    default: bad_entry(c, 0x00170000u); return;
    }
L_00170000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017002C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170024u); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 139u, depth + 1u); else { c.pc = 0x0019D900u; return; } if (c.pc != 0x00170024u) [[unlikely]] return; }
L_00170024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00170034; } }
L_0017002C:
    c.f[0] = 0u;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00170034:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00170040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00170070; } }
    set32(c.r[4], c.r[5].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170068u); set32(c.r[5], ld32((c.r[5].w[0] + 116u)));  if (depth < kMaxDepth) unit_001F(c, 140u, depth + 1u); else { c.pc = 0x0019D920u; return; } if (c.pc != 0x00170068u) [[unlikely]] return; }
L_00170068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00170078; } }
L_00170070:
    c.f[0] = 0u;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00170078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00170080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001700AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001700A4u); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 140u, depth + 1u); else { c.pc = 0x0019D920u; return; } if (c.pc != 0x001700A4u) [[unlikely]] return; }
L_001700A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001700B4; } }
L_001700AC:
    c.f[0] = 0u;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_001700B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001700C0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 112u), c.f[12]);  c.pc = t; return; }
L_001700D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00170154; } }
    st32((c.r[17].w[0] + 120u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 124u)));  goto L_00170140; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170108u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 144u, depth + 1u); else { c.pc = 0x0019D9B0u; return; } if (c.pc != 0x00170108u) [[unlikely]] return; }
L_00170108:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170114u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00170114u) [[unlikely]] return; }
L_00170114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_00170130; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170128u); set32(c.r[5], 0u + 113u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00170128u) [[unlikely]] return; }
L_00170128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 124u)));  if (t) { goto L_00170158; } }
L_00170130:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017013Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 146u, depth + 1u); else { c.pc = 0x0019DA30u; return; } if (c.pc != 0x0017013Cu) [[unlikely]] return; }
L_0017013C:
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 1;
L_00170140:
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170154u); set32(c.r[7], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001F(c, 259u, depth + 1u); else { c.pc = 0x0019F810u; return; } if (c.pc != 0x00170154u) [[unlikely]] return; }
L_00170154:
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 1;
L_00170158:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[3], c.r[2].w[0] << 5);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00170180:
    set32(c.r[3], c.r[6].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[6].w[0] << 24);
    set32(c.r[2], c.r[6].w[0] >> 8);
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[6].w[0] >> 24);
    c.budget -= 12;
    { c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  [[clang::musttail]] return unit_001F(c, 142u, depth); }
L_001701B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 64u);  [[clang::musttail]] return unit_001F(c, 141u, depth); }
L_001701C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017025C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_00170260; }
    st32((c.r[19].w[0] + 120u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 124u)));  goto L_00170248; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170210u); set32(c.r[4], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 144u, depth + 1u); else { c.pc = 0x0019D9B0u; return; } if (c.pc != 0x00170210u) [[unlikely]] return; }
L_00170210:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017021Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x0017021Cu) [[unlikely]] return; }
L_0017021C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_00170238; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170230u); set32(c.r[5], 0u + 113u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00170230u) [[unlikely]] return; }
L_00170230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017025C; } }
L_00170238:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170244u); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 146u, depth + 1u); else { c.pc = 0x0019DA30u; return; } if (c.pc != 0x00170244u) [[unlikely]] return; }
L_00170244:
    set32(c.r[4], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 1;
L_00170248:
    c.f[12] = ld32((c.r[19].w[0] + 112u));
    set32(c.r[6], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017025Cu); set32(c.r[7], c.r[19].w[0] + 96u);  if (depth < kMaxDepth) unit_001F(c, 259u, depth + 1u); else { c.pc = 0x0019F810u; return; } if (c.pc != 0x0017025Cu) [[unlikely]] return; }
L_0017025C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00170260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 32u);  goto L_00170278; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00170348; } }
L_00170278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170280u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x00170280u) [[unlikely]] return; }
L_00170280:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00170294; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00170348; } }
L_00170294:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_001702A0; }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_001702A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001702ACu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_001A(c, 343u, depth + 1u); else { c.pc = 0x0018BE90u; return; } if (c.pc != 0x001702ACu) [[unlikely]] return; }
L_001702AC:
    set32(c.r[6], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001702DC; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 116u)));
    c.f[12] = ld32((c.r[19].w[0] + 112u));
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001702D4u); set32(c.r[7], c.r[19].w[0] + 96u);  if (depth < kMaxDepth) unit_001F(c, 239u, depth + 1u); else { c.pc = 0x0019F540u; return; } if (c.pc != 0x001702D4u) [[unlikely]] return; }
L_001702D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001702F0; } }
L_001702DC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001702ECu); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 262u, depth + 1u); else { c.pc = 0x0019F8B0u; return; } if (c.pc != 0x001702ECu) [[unlikely]] return; }
L_001702EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001702F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001702F8u);  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x001702F8u) [[unlikely]] return; }
L_001702F8:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[6], 0u + 2u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 92u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170320u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x00170320u) [[unlikely]] return; }
L_00170320:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_00170330; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00170348; } }
L_00170330:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    set32(c.r[4], c.r[4].w[0] - 864u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_00170348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00170370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00170408; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 124u)));  goto L_0017040C; }
    st32((c.r[17].w[0] + 120u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 124u)));  goto L_001703F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001703BCu); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 144u, depth + 1u); else { c.pc = 0x0019D9B0u; return; } if (c.pc != 0x001703BCu) [[unlikely]] return; }
L_001703BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001703C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001703C8u) [[unlikely]] return; }
L_001703C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_001703E4; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001703DCu); set32(c.r[5], 0u + 113u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x001703DCu) [[unlikely]] return; }
L_001703DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00170408; } }
L_001703E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001703F0u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 146u, depth + 1u); else { c.pc = 0x0019DA30u; return; } if (c.pc != 0x001703F0u) [[unlikely]] return; }
L_001703F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 1;
L_001703F4:
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170408u); set32(c.r[7], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001F(c, 259u, depth + 1u); else { c.pc = 0x0019F810u; return; } if (c.pc != 0x00170408u) [[unlikely]] return; }
L_00170408:
    set32(c.r[6], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 1;
L_0017040C:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00170438; }
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.f[13] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170430u); set32(c.r[7], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001F(c, 239u, depth + 1u); else { c.pc = 0x0019F540u; return; } if (c.pc != 0x00170430u) [[unlikely]] return; }
L_00170430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00170448; } }
L_00170438:
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170444u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001F(c, 262u, depth + 1u); else { c.pc = 0x0019F8B0u; return; } if (c.pc != 0x00170444u) [[unlikely]] return; }
L_00170444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00170448:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00170460:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00170500; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[18].w[0] + 124u)));  goto L_00170504; }
    st32((c.r[18].w[0] + 120u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 124u)));  goto L_001704EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001704B4u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 144u, depth + 1u); else { c.pc = 0x0019D9B0u; return; } if (c.pc != 0x001704B4u) [[unlikely]] return; }
L_001704B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001704C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001704C0u) [[unlikely]] return; }
L_001704C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_001704DC; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001704D4u); set32(c.r[5], 0u + 113u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x001704D4u) [[unlikely]] return; }
L_001704D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00170500; } }
L_001704DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001704E8u); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 146u, depth + 1u); else { c.pc = 0x0019DA30u; return; } if (c.pc != 0x001704E8u) [[unlikely]] return; }
L_001704E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 1;
L_001704EC:
    c.f[12] = ld32((c.r[18].w[0] + 112u));
    set32(c.r[6], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170500u); set32(c.r[7], c.r[18].w[0] + 96u);  if (depth < kMaxDepth) unit_001F(c, 259u, depth + 1u); else { c.pc = 0x0019F810u; return; } if (c.pc != 0x00170500u) [[unlikely]] return; }
L_00170500:
    set32(c.r[6], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 1;
L_00170504:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00170534; }
    set32(c.r[6], ld32((c.r[18].w[0] + 116u)));
    c.f[12] = ld32((c.r[18].w[0] + 112u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[20];
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017052Cu); set32(c.r[7], c.r[18].w[0] + 96u);  if (depth < kMaxDepth) unit_001F(c, 249u, depth + 1u); else { c.pc = 0x0019F6A0u; return; } if (c.pc != 0x0017052Cu) [[unlikely]] return; }
L_0017052C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00170548; } }
L_00170534:
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170544u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 263u, depth + 1u); else { c.pc = 0x0019F8E0u; return; } if (c.pc != 0x00170544u) [[unlikely]] return; }
L_00170544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00170548:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00170560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001705A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170590u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x00170590u) [[unlikely]] return; }
L_00170590:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001705AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001705A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001705A8u) [[unlikely]] return; }
L_001705A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001705AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001705C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001705D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001705E4; } }
    set32(c.r[3], c.r[6].w[0] + 16u);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 2;
L_001705E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001705F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0017063C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001706EC; } }
L_0017063C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170644u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 161u, depth + 1u); else { c.pc = 0x001A2430u; return; } if (c.pc != 0x00170644u) [[unlikely]] return; }
L_00170644:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170654u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 246u, depth + 1u); else { c.pc = 0x00166100u; return; } if (c.pc != 0x00170654u) [[unlikely]] return; }
L_00170654:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 32u)));  goto L_00170674; }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001706EC; } }
L_00170674:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48560000u);
    c.r[2].d[0] = c.r[2].d[0] | 22599ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[21].w[0] + 72u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 68u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[21].w[0] + 64u), c.r[4].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017069Cu); set32(c.r[5], ld32((c.r[21].w[0] + 68u)));  if (depth < kMaxDepth) unit_0020(c, 162u, depth + 1u); else { c.pc = 0x001A2490u; return; } if (c.pc != 0x0017069Cu) [[unlikely]] return; }
L_0017069C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001706A4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x001706A4u) [[unlikely]] return; }
L_001706A4:
    set32(c.r[4], ld32((c.r[21].w[0] + 64u)));
    set32(c.r[5], c.r[20].w[0] + 80u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001706B8u); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 147u, depth + 1u); else { c.pc = 0x001A21C0u; return; } if (c.pc != 0x001706B8u) [[unlikely]] return; }
L_001706B8:
    set32(c.r[4], ld32((c.r[21].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[21].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001706E8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_001706E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001706EC:
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
L_00170720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170738u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x00170738u) [[unlikely]] return; }
L_00170738:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 9264u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00170760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001707C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 9264u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001707A8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001707A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001707A4u) [[unlikely]] return; }
L_001707A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001707A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001707B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x001707B0u) [[unlikely]] return; }
L_001707B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001707CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001707C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001707C8u) [[unlikely]] return; }
L_001707C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001707CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001707E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00170814; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017080Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017080Cu) [[unlikely]] return; }
L_0017080C:
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00170814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017081Cu);  if (depth < kMaxDepth) unit_0011(c, 244u, depth + 1u); else { c.pc = 0x001660D0u; return; } if (c.pc != 0x0017081Cu) [[unlikely]] return; }
L_0017081C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00170830:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 26;
    { const bool t = c.r[4].d[0] == 0ull; c.r[22].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_001708A8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001708A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001708A8u) [[unlikely]] return; }
L_001708A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001708B0u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001708B0u) [[unlikely]] return; }
L_001708B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00170918; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001708C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x001708C4u) [[unlikely]] return; }
L_001708C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47580000u);
    set32(c.r[3], c.r[3].w[0] + 9296u);
    c.r[2].d[0] = c.r[2].d[0] | 22088ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 21;
L_00170918:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[21].w[0] + 64u), c.r[16].w[0]);  if (t) { goto L_00170928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00170978; } }
L_00170928:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170944u); c.r[9].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 49u, depth + 1u); else { c.pc = 0x001705F0u; return; } if (c.pc != 0x00170944u) [[unlikely]] return; }
L_00170944:
    set32(c.r[3], ld32((c.r[21].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  goto L_0017096C; }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 4;
L_0017096C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00170978:
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
L_001709A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001709B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001709C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31292u), 0u);  c.pc = t; return; }
L_001709D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31292u), 0u);  c.pc = t; return; }
L_001709E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 31292u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00170A18; } }
L_001709F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170A00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 92u, depth + 1u); else { c.pc = 0x00170C90u; return; } if (c.pc != 0x00170A00u) [[unlikely]] return; }
L_00170A00:
    set32(c.r[16], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001709F8u | kUnwind; return; } goto L_001709F8; } }
    c.budget -= 1;
L_00170A18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00170A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[7].d[0] = c.r[2].d[0] | 16706ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 9328u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 32;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 72u);  goto L_00170AD4; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170ABCu); set32(c.r[5], 0u + 117u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00170ABCu) [[unlikely]] return; }
L_00170ABC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00170BBC; } }
L_00170AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170ADCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00170ADCu) [[unlikely]] return; }
L_00170ADC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  goto L_00170AF4; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170AF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0015D160u; return; } if (c.pc != 0x00170AF0u) [[unlikely]] return; }
L_00170AF0:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_00170AF4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  goto L_00170B20; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170B08u); set32(c.r[5], 0u + 116u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00170B08u) [[unlikely]] return; }
L_00170B08:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00170BBC; } }
L_00170B20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 64u)));  goto L_00170B54; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170B3Cu); set32(c.r[5], 0u + 116u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00170B3Cu) [[unlikely]] return; }
L_00170B3C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00170BBC; } }
L_00170B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170B5Cu); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0020(c, 232u, depth + 1u); else { c.pc = 0x001A3060u; return; } if (c.pc != 0x00170B5Cu) [[unlikely]] return; }
L_00170B5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_00170BA0; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170B70u); set32(c.r[5], 0u + 117u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00170B70u) [[unlikely]] return; }
L_00170B70:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00170B94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00170B94u) [[unlikely]] return; }
L_00170B94:
    st32((c.r[17].w[0] + 40u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00170BBC; } }
L_00170BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170BA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 100u, depth + 1u); else { c.pc = 0x00170DC0u; return; } if (c.pc != 0x00170BA8u) [[unlikely]] return; }
L_00170BA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_00170BBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00170BC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00170BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00170C74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 9328u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  goto L_00170C1C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00170C14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00170C14u) [[unlikely]] return; }
L_00170C14:
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 2;
L_00170C1C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00170C34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170C2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00170C2Cu) [[unlikely]] return; }
L_00170C2C:
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00170C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170C3Cu);  if (depth < kMaxDepth) unit_0014(c, 101u, depth + 1u); else { c.pc = 0x00170E00u; return; } if (c.pc != 0x00170C3Cu) [[unlikely]] return; }
L_00170C3C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00170C60; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_00170C60:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00170C78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170C74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00170C74u) [[unlikely]] return; }
L_00170C74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00170C78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00170C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00170DAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_00170CCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00170DB0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_00170CCC:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_00170DAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170CE0u);  if (depth < kMaxDepth) unit_0014(c, 101u, depth + 1u); else { c.pc = 0x00170E00u; return; } if (c.pc != 0x00170CE0u) [[unlikely]] return; }
L_00170CE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[2].d[0] = c.r[2].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 36u)));  goto L_00170D14; }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170D08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00170D08u) [[unlikely]] return; }
L_00170D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00170D20; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_00170D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170D1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x00170D1Cu) [[unlikely]] return; }
L_00170D1C:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_00170D20:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_00170D50; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170D38u); set32(c.r[5], 0u + 115u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00170D38u) [[unlikely]] return; }
L_00170D38:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00170DAC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_00170D50:
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170D5Cu); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0020(c, 224u, depth + 1u); else { c.pc = 0x001A2EE0u; return; } if (c.pc != 0x00170D5Cu) [[unlikely]] return; }
L_00170D5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_00170D7C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00170D94; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_00170D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170D84u); set32(c.r[5], 0u + 118u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00170D84u) [[unlikely]] return; }
L_00170D84:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_00170D94:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00170DA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00170DA8u) [[unlikely]] return; }
L_00170DA8:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_00170DAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00170DB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00170DC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00170DEC; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 31292u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00170DE8; } }
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 1;
L_00170DE8:
    st32((c.r[28].w[0] - 31292u), c.r[4].w[0]);
    c.budget -= 1;
L_00170DEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00170E00:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00170E48; } }
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 24u)));  goto L_00170E28; }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00170E2C; } }
L_00170E28:
    st32((c.r[28].w[0] - 31292u), c.r[3].w[0]);
    c.budget -= 1;
L_00170E2C:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 24u), 0u);  goto L_00170E44; }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 3;
L_00170E44:
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 1;
L_00170E48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00170E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 31952u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170E6Cu); set32(c.r[4], c.r[4].w[0] + 15296u);  if (depth < kMaxDepth) unit_0019(c, 247u, depth + 1u); else { c.pc = 0x001873A0u; return; } if (c.pc != 0x00170E6Cu) [[unlikely]] return; }
L_00170E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170E74u);  if (depth < kMaxDepth) unit_0014(c, 146u, depth + 1u); else { c.pc = 0x00171310u; return; } if (c.pc != 0x00170E74u) [[unlikely]] return; }
L_00170E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170E7Cu);  if (depth < kMaxDepth) unit_0014(c, 201u, depth + 1u); else { c.pc = 0x001719B0u; return; } if (c.pc != 0x00170E7Cu) [[unlikely]] return; }
L_00170E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170E84u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0015(c, 236u, depth + 1u); else { c.pc = 0x00176260u; return; } if (c.pc != 0x00170E84u) [[unlikely]] return; }
L_00170E84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  goto L_00170E94; }
    set32(c.r[16], 0u + 1u);
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00170E94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  goto L_00170EAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170EA4u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x00179BE0u; return; } if (c.pc != 0x00170EA4u) [[unlikely]] return; }
L_00170EA4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00170EAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  goto L_00170EC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170EBCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0015(c, 197u, depth + 1u); else { c.pc = 0x00175C40u; return; } if (c.pc != 0x00170EBCu) [[unlikely]] return; }
L_00170EBC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00170EC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00170EDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170ED4u);  if (depth < kMaxDepth) unit_0018(c, 179u, depth + 1u); else { c.pc = 0x00182380u; return; } if (c.pc != 0x00170ED4u) [[unlikely]] return; }
L_00170ED4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00170EDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00170EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170F00u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0015(c, 198u, depth + 1u); else { c.pc = 0x00175C50u; return; } if (c.pc != 0x00170F00u) [[unlikely]] return; }
L_00170F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170F08u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 137u, depth + 1u); else { c.pc = 0x00179BF0u; return; } if (c.pc != 0x00170F08u) [[unlikely]] return; }
L_00170F08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  goto L_00170F18; }
    set32(c.r[16], 0u + 1u);
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00170F18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  goto L_00170F30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170F28u);  if (depth < kMaxDepth) unit_0015(c, 237u, depth + 1u); else { c.pc = 0x00176270u; return; } if (c.pc != 0x00170F28u) [[unlikely]] return; }
L_00170F28:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00170F30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00170F44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170F40u);  if (depth < kMaxDepth) unit_0018(c, 180u, depth + 1u); else { c.pc = 0x00182390u; return; } if (c.pc != 0x00170F40u) [[unlikely]] return; }
L_00170F40:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00170F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170F4Cu);  if (depth < kMaxDepth) unit_0014(c, 202u, depth + 1u); else { c.pc = 0x001719D0u; return; } if (c.pc != 0x00170F4Cu) [[unlikely]] return; }
L_00170F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170F54u);  if (depth < kMaxDepth) unit_0014(c, 147u, depth + 1u); else { c.pc = 0x00171350u; return; } if (c.pc != 0x00170F54u) [[unlikely]] return; }
L_00170F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170F5Cu);  if (depth < kMaxDepth) unit_0019(c, 253u, depth + 1u); else { c.pc = 0x00187410u; return; } if (c.pc != 0x00170F5Cu) [[unlikely]] return; }
L_00170F5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00170F70:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 592u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 600u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 616u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 624u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 632u), c.r[11].d[0]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170FB4u); set32(c.r[5], c.r[5].w[0] - 17224u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00170FB4u) [[unlikely]] return; }
L_00170FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170FBCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00170FBCu) [[unlikely]] return; }
L_00170FBC:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170FC8u); set32(c.r[4], c.r[2].w[0] + 39u);  if (depth < kMaxDepth) unit_0014(c, 155u, depth + 1u); else { c.pc = 0x001713D0u; return; } if (c.pc != 0x00170FC8u) [[unlikely]] return; }
L_00170FC8:
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 47u);
    set32(c.r[3], 0u + 41u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st8((c.r[29].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[7].d[0] & c.r[5].d[0];
    st8((c.r[29].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[6], c.r[5].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[5].d[0] = c.r[7].d[0] & 65280ull;
    set32(c.r[2], c.r[2].w[0] >> 24);
    set32(c.r[5], c.r[5].w[0] << 8);
    st8((c.r[29].w[0] + 54u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[3].w[0] >> 24);
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] >> 16);
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] >> 8);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171038u); st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0014(c, 155u, depth + 1u); else { c.pc = 0x001713D0u; return; } if (c.pc != 0x00171038u) [[unlikely]] return; }
L_00171038:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0017103C:
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 1;
L_00171040:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_00171050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00171058; } }
L_00171050:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_00171058:
    c.r[5].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 640u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171070u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000A(c, 330u, depth + 1u); else { c.pc = 0x0014BF38u; return; } if (c.pc != 0x00171070u) [[unlikely]] return; }
L_00171070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171078u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0014(c, 155u, depth + 1u); else { c.pc = 0x001713D0u; return; } if (c.pc != 0x00171078u) [[unlikely]] return; }
L_00171078:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171084u); set32(c.r[4], c.r[4].w[0] - 17232u);  if (depth < kMaxDepth) unit_0014(c, 155u, depth + 1u); else { c.pc = 0x001713D0u; return; } if (c.pc != 0x00171084u) [[unlikely]] return; }
    goto L_00171084;
L_00171080:
    set32(c.r[4], c.r[4].w[0] - 17232u);
    c.budget -= 1;
L_00171084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_001710A0:
    set32(c.r[29], c.r[29].w[0] - 672u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 632u), c.r[7].d[0]);
    c.budget -= 8;
L_001710C0:
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 640u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 648u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 656u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 664u), c.r[11].d[0]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001710E8u); set32(c.r[5], c.r[5].w[0] - 17224u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x001710E8u) [[unlikely]] return; }
L_001710E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001710F0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001710F0u) [[unlikely]] return; }
L_001710F0:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001710FCu); set32(c.r[4], c.r[2].w[0] + 55u);  if (depth < kMaxDepth) unit_0014(c, 155u, depth + 1u); else { c.pc = 0x001713D0u; return; } if (c.pc != 0x001710FCu) [[unlikely]] return; }
L_001710FC:
    set32(c.r[7], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00171100:
    set32(c.r[2], 0u + 47u);
    set32(c.r[3], 0u + 41u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st8((c.r[29].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[7].d[0] & c.r[5].d[0];
    st8((c.r[29].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[6], c.r[5].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[5].d[0] = c.r[7].d[0] & 65280ull;
    set32(c.r[2], c.r[2].w[0] >> 24);
    set32(c.r[5], c.r[5].w[0] << 8);
    st8((c.r[29].w[0] + 70u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_00171140:
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[3].w[0] >> 24);
    st8((c.r[29].w[0] + 67u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] >> 16);
    st8((c.r[29].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] >> 8);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017116Cu); st8((c.r[29].w[0] + 66u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0014(c, 155u, depth + 1u); else { c.pc = 0x001713D0u; return; } if (c.pc != 0x0017116Cu) [[unlikely]] return; }
L_0017116C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171178u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0014(c, 160u, depth + 1u); else { c.pc = 0x00171450u; return; } if (c.pc != 0x00171178u) [[unlikely]] return; }
L_00171178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171180u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0014(c, 155u, depth + 1u); else { c.pc = 0x001713D0u; return; } if (c.pc != 0x00171180u) [[unlikely]] return; }
L_00171180:
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_00171198; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001711A0; } }
L_00171198:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_001711A0:
    c.r[5].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 672u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001711B8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000A(c, 330u, depth + 1u); else { c.pc = 0x0014BF38u; return; } if (c.pc != 0x001711B8u) [[unlikely]] return; }
L_001711B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001711C0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0014(c, 155u, depth + 1u); else { c.pc = 0x001713D0u; return; } if (c.pc != 0x001711C0u) [[unlikely]] return; }
L_001711C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001711CCu); set32(c.r[4], c.r[4].w[0] - 17232u);  if (depth < kMaxDepth) unit_0014(c, 155u, depth + 1u); else { c.pc = 0x001713D0u; return; } if (c.pc != 0x001711CCu) [[unlikely]] return; }
L_001711CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 672u);  c.pc = t; return; }
L_001711F0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001712E0; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[8], ld32((c.r[5].w[0])));  goto L_0017120C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001712E0; } }
L_0017120C:
    set32(c.r[9], c.r[5].w[0] + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 64u);
    set32(c.r[3], 0u + 128u);
    set32(c.r[5], 0u + 192u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] - 4u);  if (t) { goto L_001712C8; } }
L_00171228:
    c.r[10].d[0] = c.r[11].d[0] & 192ull;
    c.budget -= 3;
    if (c.r[10].d[0] == c.r[5].d[0]) { c.r[10].d[0] = c.r[11].d[0] & 63ull;  goto L_00171274; }
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[3].d[0]) { c.r[10].d[0] = ld8((c.r[9].w[0] + 1u));  goto L_00171258; }
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[2].d[0]) { c.r[10].d[0] = c.r[11].d[0] & 63ull;  goto L_0017124C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001712C8; } }
L_0017124C:
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { goto L_001712A0; } }
L_00171258:
    c.r[11].d[0] = c.r[11].d[0] & 63ull;
    set32(c.r[11], c.r[11].w[0] << 8);
    set32(c.r[8], c.r[8].w[0] - 2u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[10].d[0] & 65535ull;  if (t) { goto L_001712A0; } }
L_00171274:
    c.r[12].d[0] = ld8((c.r[9].w[0] + 1u));
    c.r[11].d[0] = ld8((c.r[9].w[0] + 2u));
    set32(c.r[13], c.r[10].w[0] << 24);
    c.r[10].d[0] = ld8((c.r[9].w[0] + 3u));
    set32(c.r[8], c.r[8].w[0] - 4u);
    set32(c.r[12], c.r[12].w[0] << 16);
    c.r[12].d[0] = c.r[13].d[0] | c.r[12].d[0];
    set32(c.r[11], c.r[11].w[0] << 8);
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    c.budget -= 11;
L_001712A0:
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[11], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[10], ld32((c.r[11].w[0])));  if (t) { goto L_001712C0; } }
    set32(c.r[10], c.r[10].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[11].w[0]), c.r[10].w[0]);  if (t) { goto L_001712C8; } }
L_001712C0:
    set32(c.r[10], c.r[10].w[0] - c.r[4].w[0]);
    st32((c.r[11].w[0]), c.r[10].w[0]);
    c.budget -= 2;
L_001712C8:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001712E0; }
    c.r[10].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 3;
    if (c.r[10].d[0] != 0ull) { c.r[11].d[0] = c.r[10].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00171228u | kUnwind; return; } goto L_00171228; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001712E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001712F0:
    c.budget -= 2;
    { set32(c.r[6], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001711F0u | kUnwind; return; } goto L_001711F0; }
L_00171300:
    c.budget -= 2;
    {  goto L_001713D0; }
L_00171310:
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 15296u), c.r[4].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00170000u);
    st32((c.r[2].w[0] + 15304u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4864u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 15300u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 13;
    { st32((c.r[2].w[0] + 15308u), 0u);  [[clang::musttail]] return unit_001A(c, 303u, depth); }
L_00171350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00171360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[31].w[0] + 0u);  c.pc = t; return; }
L_00171370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], mfc0(c, 1u, 0u));  c.pc = t; return; }
L_00171380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], mfc0(c, 9u, 0u));  c.pc = t; return; }
L_00171390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 15308u)));  c.pc = t; return; }
L_001713A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 15304u), c.r[4].w[0]);  c.pc = t; return; }
L_001713B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 15296u), c.r[4].w[0]);  c.pc = t; return; }
L_001713C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 15300u), c.r[4].w[0]);  c.pc = t; return; }
L_001713D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[3].w[0] + 15296u)));
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001713FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001713FCu);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001713FCu) [[unlikely]] return; }
L_001713FC:
    c.r[3].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[17].d[0] & 16ull;  goto L_00171414; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171410u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 299u, depth + 1u); else { c.pc = 0x001AF9D0u; return; } if (c.pc != 0x00171410u) [[unlikely]] return; }
L_00171410:
    c.r[3].d[0] = c.r[17].d[0] & 16ull;
    c.budget -= 1;
L_00171414:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00171438; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 15300u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00171434; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171434u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171434u) [[unlikely]] return; }
L_00171434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00171438:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 1;
L_0017143C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00171450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 5u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 17120u);  if (t) { goto L_001714B0; } }
L_00171478:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001714B0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 17116u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171498u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x00171498u) [[unlikely]] return; }
L_00171498:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001714A8u); set32(c.r[5], c.r[5].w[0] - 17080u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x001714A8u) [[unlikely]] return; }
L_001714A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001714D8; } }
L_001714B0:
    set32(c.r[5], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00171478u | kUnwind; return; } goto L_00171478; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001714D4u); set32(c.r[5], c.r[5].w[0] - 17072u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x001714D4u) [[unlikely]] return; }
L_001714D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001714D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001714F0:
    set32(c.r[29], c.r[29].w[0] - 624u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 568u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 576u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 584u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 592u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 600u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 616u), c.r[11].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 15304u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0017161C; }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_00171544; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0017154C; } }
L_00171544:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_0017154C:
    c.r[5].d[0] = c.r[4].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 624u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171564u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 330u, depth + 1u); else { c.pc = 0x0014BF38u; return; } if (c.pc != 0x00171564u) [[unlikely]] return; }
L_00171564:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 15296u)));
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 2ull;  goto L_00171584; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171580u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00171580u) [[unlikely]] return; }
L_00171580:
    c.r[3].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 1;
L_00171584:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 16ull;  goto L_00171598; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171594u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0023(c, 299u, depth + 1u); else { c.pc = 0x001AF9D0u; return; } if (c.pc != 0x00171594u) [[unlikely]] return; }
L_00171594:
    c.r[3].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 1;
L_00171598:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001715B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 15300u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001715B8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001715B8u); set32(c.r[4], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001715B8u) [[unlikely]] return; }
L_001715B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 15296u)));
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 2ull;  goto L_001715DC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001715D8u); set32(c.r[4], c.r[4].w[0] - 17056u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001715D8u) [[unlikely]] return; }
L_001715D8:
    c.r[3].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 1;
L_001715DC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 16ull;  goto L_001715F4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001715F0u); set32(c.r[4], c.r[4].w[0] - 17056u);  if (depth < kMaxDepth) unit_0023(c, 299u, depth + 1u); else { c.pc = 0x001AF9D0u; return; } if (c.pc != 0x001715F0u) [[unlikely]] return; }
L_001715F0:
    c.r[3].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 1;
L_001715F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00171618; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 15300u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00171618; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171618u); set32(c.r[4], c.r[4].w[0] - 17056u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171618u) [[unlikely]] return; }
L_00171618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017161C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_00171630:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 600u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 616u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 624u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 632u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 648u), c.r[11].d[0]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 15304u)));
    c.budget -= 18;
    if (c.r[3].sd[0] <= 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001717D8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171688u); set32(c.r[5], c.r[5].w[0] - 17048u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00171688u) [[unlikely]] return; }
L_00171688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171690u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00171690u) [[unlikely]] return; }
L_00171690:
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 15296u)));
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 55u);  if (t) { goto L_001716B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001716B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001716B0u) [[unlikely]] return; }
L_001716B0:
    c.r[2].d[0] = c.r[18].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] & 16ull;  goto L_001716C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001716C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 299u, depth + 1u); else { c.pc = 0x001AF9D0u; return; } if (c.pc != 0x001716C4u) [[unlikely]] return; }
L_001716C4:
    c.r[2].d[0] = c.r[18].d[0] & 16ull;
    c.budget -= 1;
L_001716C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_001716EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 15300u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001716E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001716E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001716E8u) [[unlikely]] return; }
L_001716E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001716EC:
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_00171700; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00171708; } }
L_00171700:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_00171708:
    c.r[5].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 656u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171720u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000A(c, 330u, depth + 1u); else { c.pc = 0x0014BF38u; return; } if (c.pc != 0x00171720u) [[unlikely]] return; }
L_00171720:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 15296u)));
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 2ull;  goto L_00171740; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017173Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x0017173Cu) [[unlikely]] return; }
L_0017173C:
    c.r[3].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 1;
L_00171740:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 16ull;  goto L_00171754; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171750u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 299u, depth + 1u); else { c.pc = 0x001AF9D0u; return; } if (c.pc != 0x00171750u) [[unlikely]] return; }
L_00171750:
    c.r[3].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 1;
L_00171754:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00171774; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 15300u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00171774; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171774u); set32(c.r[4], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171774u) [[unlikely]] return; }
L_00171774:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 15296u)));
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 2ull;  goto L_00171798; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171794u); set32(c.r[4], c.r[4].w[0] - 17056u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00171794u) [[unlikely]] return; }
L_00171794:
    c.r[3].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 1;
L_00171798:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 16ull;  goto L_001717B0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001717ACu); set32(c.r[4], c.r[4].w[0] - 17056u);  if (depth < kMaxDepth) unit_0023(c, 299u, depth + 1u); else { c.pc = 0x001AF9D0u; return; } if (c.pc != 0x001717ACu) [[unlikely]] return; }
L_001717AC:
    c.r[3].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 1;
L_001717B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001717D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 15300u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001717D4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001717D4u); set32(c.r[4], c.r[4].w[0] - 17056u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001717D4u) [[unlikely]] return; }
L_001717D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001717D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_001717F0:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 600u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 616u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 624u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 632u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 648u), c.r[11].d[0]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 15304u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 19;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0017199C; }
L_0017183C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017184Cu); set32(c.r[5], c.r[5].w[0] - 17048u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x0017184Cu) [[unlikely]] return; }
L_0017184C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171854u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00171854u) [[unlikely]] return; }
L_00171854:
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 15296u)));
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 55u);  if (t) { goto L_00171874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171874u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00171874u) [[unlikely]] return; }
L_00171874:
    c.r[2].d[0] = c.r[18].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] & 16ull;  goto L_0017188C; }
L_00171880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171888u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 299u, depth + 1u); else { c.pc = 0x001AF9D0u; return; } if (c.pc != 0x00171888u) [[unlikely]] return; }
L_00171888:
    c.r[2].d[0] = c.r[18].d[0] & 16ull;
    c.budget -= 1;
L_0017188C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_001718B0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 15300u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001718AC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001718ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001718ACu) [[unlikely]] return; }
L_001718AC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001718B0:
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_001718C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001718CC; } }
L_001718C4:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_001718CC:
    c.r[5].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 656u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001718E4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000A(c, 330u, depth + 1u); else { c.pc = 0x0014BF38u; return; } if (c.pc != 0x001718E4u) [[unlikely]] return; }
L_001718E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 15296u)));
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 2ull;  goto L_00171904; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171900u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00171900u) [[unlikely]] return; }
L_00171900:
    c.r[3].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 1;
L_00171904:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 16ull;  goto L_00171918; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171914u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 299u, depth + 1u); else { c.pc = 0x001AF9D0u; return; } if (c.pc != 0x00171914u) [[unlikely]] return; }
L_00171914:
    c.r[3].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 1;
L_00171918:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00171938; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 15300u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00171938; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171938u); set32(c.r[4], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171938u) [[unlikely]] return; }
L_00171938:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 15296u)));
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 2ull;  goto L_0017195C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171958u); set32(c.r[4], c.r[4].w[0] - 17056u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00171958u) [[unlikely]] return; }
L_00171958:
    c.r[3].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 1;
L_0017195C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 16ull;  goto L_00171974; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171970u); set32(c.r[4], c.r[4].w[0] - 17056u);  if (depth < kMaxDepth) unit_0023(c, 299u, depth + 1u); else { c.pc = 0x001AF9D0u; return; } if (c.pc != 0x00171970u) [[unlikely]] return; }
L_00171970:
    c.r[3].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 1;
L_00171974:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00171998; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 15300u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00171998; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171998u); set32(c.r[4], c.r[4].w[0] - 17056u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171998u) [[unlikely]] return; }
L_00171998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0017199C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_001719B0:
    st32((c.r[28].w[0] - 31288u), 0u);
    st32((c.r[28].w[0] - 31284u), 0u);
    st8((c.r[28].w[0] - 31280u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 31276u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31272u), 0u);  c.pc = t; return; }
L_001719D0:
    st32((c.r[28].w[0] - 31288u), 0u);
    st32((c.r[28].w[0] - 31284u), 0u);
    st8((c.r[28].w[0] - 31280u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 31276u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31272u), 0u);  c.pc = t; return; }
L_001719F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31288u), c.r[4].w[0]);  c.pc = t; return; }
L_00171A00:
    st8((c.r[28].w[0] - 31280u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 31276u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00171A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31272u), c.r[4].w[0]);  c.pc = t; return; }
L_00171A20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00171A50; } }
    set32(c.r[16], c.r[31].w[0] - 8u);
    c.budget -= 1;
L_00171A50:
    set32(c.r[4], ld32((c.r[28].w[0] - 31272u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_00171A70; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171A68u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x00171A68u) [[unlikely]] return; }
L_00171A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00171B30; } }
L_00171A70:
    set32(c.r[5], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171A7Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 361u, depth + 1u); else { c.pc = 0x001733D0u; return; } if (c.pc != 0x00171A7Cu) [[unlikely]] return; }
L_00171A7C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 31288u)));  goto L_00171AA0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171A98u); set32(c.r[4], c.r[4].w[0] - 17024u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x00171A98u) [[unlikely]] return; }
L_00171A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00171B34; } }
L_00171AA0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00171B30; } }
    c.r[16].d[0] = ld8((c.r[28].w[0] - 31276u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[21].d[0] = ld8((c.r[28].w[0] - 31280u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[19], ld32((c.r[28].w[0] - 31284u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171AC8u); c.r[18].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 230u, depth + 1u); else { c.pc = 0x00171DD0u; return; } if (c.pc != 0x00171AC8u) [[unlikely]] return; }
L_00171AC8:
    c.r[16].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00171AEC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171AE4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00171AE4u) [[unlikely]] return; }
L_00171AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31284u), c.r[19].w[0]);  if (t) { goto L_00171B30; } }
L_00171AEC:
    c.r[2].d[0] = ~(c.r[16].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00171B24; } }
L_00171B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171B08u);  if (depth < kMaxDepth) unit_0014(c, 150u, depth + 1u); else { c.pc = 0x00171380u; return; } if (c.pc != 0x00171B08u) [[unlikely]] return; }
L_00171B08:
    c.r[19].d[0] = c.r[19].d[0] ^ c.r[2].d[0];
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.r[2].d[0] = c.r[21].d[0] | c.r[2].d[0];
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 7;
L_00171B24:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00171B00u | kUnwind; return; } goto L_00171B00; } }
    st32((c.r[28].w[0] - 31284u), c.r[19].w[0]);
    c.budget -= 1;
L_00171B30:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00171B34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00171B60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00171B90; } }
    set32(c.r[16], c.r[31].w[0] - 8u);
    c.budget -= 1;
L_00171B90:
    set32(c.r[4], ld32((c.r[28].w[0] - 31272u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_00171BB0; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171BA8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x00171BA8u) [[unlikely]] return; }
L_00171BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00171C6C; } }
L_00171BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171BB8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 361u, depth + 1u); else { c.pc = 0x001733D0u; return; } if (c.pc != 0x00171BB8u) [[unlikely]] return; }
L_00171BB8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 31288u)));  goto L_00171BDC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171BD4u); set32(c.r[4], c.r[4].w[0] - 17024u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x00171BD4u) [[unlikely]] return; }
L_00171BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00171C70; } }
L_00171BDC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00171C6C; } }
    c.r[16].d[0] = ld8((c.r[28].w[0] - 31276u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[21].d[0] = ld8((c.r[28].w[0] - 31280u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[19], ld32((c.r[28].w[0] - 31284u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171C04u); c.r[18].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 230u, depth + 1u); else { c.pc = 0x00171DD0u; return; } if (c.pc != 0x00171C04u) [[unlikely]] return; }
L_00171C04:
    c.r[16].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00171C28; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171C20u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00171C20u) [[unlikely]] return; }
L_00171C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31284u), c.r[19].w[0]);  if (t) { goto L_00171C6C; } }
L_00171C28:
    c.r[2].d[0] = ~(c.r[16].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00171C60; } }
L_00171C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171C44u);  if (depth < kMaxDepth) unit_0014(c, 150u, depth + 1u); else { c.pc = 0x00171380u; return; } if (c.pc != 0x00171C44u) [[unlikely]] return; }
L_00171C44:
    c.r[19].d[0] = c.r[19].d[0] ^ c.r[2].d[0];
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.r[2].d[0] = c.r[21].d[0] | c.r[2].d[0];
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 7;
L_00171C60:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00171C3Cu | kUnwind; return; } goto L_00171C3C; } }
    st32((c.r[28].w[0] - 31284u), c.r[19].w[0]);
    c.budget -= 1;
L_00171C6C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00171C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00171CA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[19].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00171CD4; } }
    set32(c.r[19], c.r[31].w[0] - 8u);
    c.budget -= 1;
L_00171CD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 31288u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00171D80; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171CF0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 308u, depth + 1u); else { c.pc = 0x00172BC0u; return; } if (c.pc != 0x00171CF0u) [[unlikely]] return; }
L_00171CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00171D7C; } }
    c.r[21].d[0] = ld8((c.r[28].w[0] - 31276u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].d[0] = ld8((c.r[28].w[0] - 31280u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[28].w[0] - 31284u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171D14u); c.r[17].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 230u, depth + 1u); else { c.pc = 0x00171DD0u; return; } if (c.pc != 0x00171D14u) [[unlikely]] return; }
L_00171D14:
    c.r[21].d[0] = c.r[21].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00171D38; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171D30u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00171D30u) [[unlikely]] return; }
L_00171D30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31284u), c.r[18].w[0]);  if (t) { goto L_00171D7C; } }
L_00171D38:
    c.r[2].d[0] = ~(c.r[21].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[22].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00171D70; } }
L_00171D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171D54u);  if (depth < kMaxDepth) unit_0014(c, 150u, depth + 1u); else { c.pc = 0x00171380u; return; } if (c.pc != 0x00171D54u) [[unlikely]] return; }
L_00171D54:
    c.r[18].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[21].d[0];
    c.r[2].d[0] = c.r[22].d[0] | c.r[2].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 7;
L_00171D70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00171D4Cu | kUnwind; return; } goto L_00171D4C; } }
    st32((c.r[28].w[0] - 31284u), c.r[18].w[0]);
    c.budget -= 1;
L_00171D7C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00171D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171D88u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 365u, depth + 1u); else { c.pc = 0x00173480u; return; } if (c.pc != 0x00171D88u) [[unlikely]] return; }
L_00171D88:
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
L_00171DB0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00171DBC; } }
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.budget -= 1;
L_00171DBC:
    c.budget -= 2;
    {  goto L_00172950; }
L_00171DD0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00171DDC; } }
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.budget -= 1;
L_00171DDC:
    c.budget -= 2;
    {  goto L_00172A70; }
L_00171DF0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00171DFC; } }
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.budget -= 1;
L_00171DFC:
    c.budget -= 2;
    {  goto L_00172B20; }
L_00171E10:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00171E1C; } }
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.budget -= 1;
L_00171E1C:
    c.budget -= 2;
    {  goto L_00172F20; }
L_00171E30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[5].d[0] = c.r[2].d[0] | 16706ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50410000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 9344u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 17736ull;
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0] + 24u), 0u);
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171EB0u); st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0014(c, 149u, depth + 1u); else { c.pc = 0x00171370u; return; } if (c.pc != 0x00171EB0u) [[unlikely]] return; }
L_00171EB0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171EC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 258u, depth + 1u); else { c.pc = 0x001722D0u; return; } if (c.pc != 0x00171EC8u) [[unlikely]] return; }
L_00171EC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 20u), 0u);  goto L_00171EE8; }
    st32((c.r[19].w[0] + 20u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00171EF8; } }
L_00171EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_00171EF8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00171F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00171F7C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 9344u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00171F60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_00171F60:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00171F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171F78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00171F78u) [[unlikely]] return; }
L_00171F78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00171F7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00171F90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00171FC4; } }
    set32(c.r[16], c.r[31].w[0] - 8u);
    c.budget -= 1;
L_00171FC4:
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_00171FD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00172098; } }
L_00171FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171FE0u);  if (depth < kMaxDepth) unit_0014(c, 264u, depth + 1u); else { c.pc = 0x00172400u; return; } if (c.pc != 0x00171FE0u) [[unlikely]] return; }
L_00171FE0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 24u)));  goto L_00172004; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171FFCu); set32(c.r[4], c.r[4].w[0] - 17024u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x00171FFCu) [[unlikely]] return; }
L_00171FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00172098; } }
L_00172004:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00172094; } }
    c.r[16].d[0] = ld8((c.r[21].w[0] + 33u));
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].d[0] = ld8((c.r[21].w[0] + 32u));
    set32(c.r[19], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017202Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 296u, depth + 1u); else { c.pc = 0x00172A70u; return; } if (c.pc != 0x0017202Cu) [[unlikely]] return; }
L_0017202C:
    c.r[16].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00172050; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0017203C:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172048u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00172048u) [[unlikely]] return; }
L_00172048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 28u), c.r[19].w[0]);  if (t) { goto L_00172094; } }
L_00172050:
    c.r[2].d[0] = ~(c.r[16].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[22].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00172088; } }
L_00172064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017206Cu);  if (depth < kMaxDepth) unit_0014(c, 150u, depth + 1u); else { c.pc = 0x00171380u; return; } if (c.pc != 0x0017206Cu) [[unlikely]] return; }
L_0017206C:
    c.r[19].d[0] = c.r[19].d[0] ^ c.r[2].d[0];
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.r[2].d[0] = c.r[22].d[0] | c.r[2].d[0];
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 7;
L_00172088:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172064u | kUnwind; return; } goto L_00172064; } }
    st32((c.r[21].w[0] + 28u), c.r[19].w[0]);
    c.budget -= 1;
L_00172094:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00172098:
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
L_001720C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = c.r[19].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001720FC; } }
    set32(c.r[19], c.r[31].w[0] - 8u);
    c.budget -= 1;
L_001720FC:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00172194; }
    c.r[16].d[0] = ld8((c.r[21].w[0] + 33u));
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[23].d[0] = ld8((c.r[21].w[0] + 32u));
    set32(c.r[18], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172128u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 296u, depth + 1u); else { c.pc = 0x00172A70u; return; } if (c.pc != 0x00172128u) [[unlikely]] return; }
L_00172128:
    c.r[22].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017214C; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172144u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00172144u) [[unlikely]] return; }
L_00172144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 28u), c.r[18].w[0]);  if (t) { goto L_00172190; } }
L_0017214C:
    c.r[2].d[0] = ~(c.r[22].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[23].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00172184; } }
L_00172160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172168u);  if (depth < kMaxDepth) unit_0014(c, 150u, depth + 1u); else { c.pc = 0x00171380u; return; } if (c.pc != 0x00172168u) [[unlikely]] return; }
L_00172168:
    c.r[18].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[22].d[0];
    c.r[2].d[0] = c.r[23].d[0] | c.r[2].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 7;
L_00172184:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172160u | kUnwind; return; } goto L_00172160; } }
    st32((c.r[21].w[0] + 28u), c.r[18].w[0]);
    c.budget -= 1;
L_00172190:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00172194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017219Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 275u, depth + 1u); else { c.pc = 0x001726A0u; return; } if (c.pc != 0x0017219Cu) [[unlikely]] return; }
L_0017219C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001721D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001721E8; } }
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.budget -= 1;
L_001721E8:
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001721F4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0014(c, 314u, depth + 1u); else { c.pc = 0x00172C60u; return; } if (c.pc != 0x001721F4u) [[unlikely]] return; }
L_001721F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00172250:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_00172260; }
    set32(c.r[5], c.r[31].w[0] - 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 2;
L_00172260:
    c.budget -= 2;
    {  goto L_00172D80; }
L_00172270:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_00172280; }
    set32(c.r[5], c.r[31].w[0] - 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 2;
L_00172280:
    c.budget -= 2;
    {  goto L_00172E00; }
L_00172290:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_001722A0; }
    set32(c.r[5], c.r[31].w[0] - 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 2;
L_001722A0:
    c.budget -= 2;
    {  goto L_00172E80; }
L_001722B0:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_001722C0; }
    set32(c.r[8], c.r[31].w[0] - 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 2;
L_001722C0:
    c.budget -= 2;
    {  goto L_00173200; }
L_001722D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0017231C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001722F0u); set32(c.r[4], c.r[4].w[0] - 16960u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001722F0u) [[unlikely]] return; }
L_001722F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001722F8u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001722F8u) [[unlikely]] return; }
L_001722F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172300u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x00172300u) [[unlikely]] return; }
L_00172300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001722F0u | kUnwind; return; } goto L_001722F0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172314u); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172314u) [[unlikely]] return; }
L_00172314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001722F0u | kUnwind; return; } goto L_001722F0; } }
L_0017231C:
    set32(c.r[2], c.r[4].w[0] + 112u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 112u);  if (t) { goto L_00172338; } }
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00172338:
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x4C480000u);  goto L_00172360; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172354u); set32(c.r[4], c.r[4].w[0] - 16928u);  if (depth < kMaxDepth) unit_0014(c, 173u, depth + 1u); else { c.pc = 0x00171630u; return; } if (c.pc != 0x00172354u) [[unlikely]] return; }
L_00172354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001723EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C480000u);
    c.budget -= 1;
L_00172360:
    set32(c.r[10], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 23113ull;
    set32(c.r[9], c.r[10].w[0] - 48u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[8], 0u + 16u);
    set32(c.r[2], 0u + 12u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[9].w[0]);
    c.r[6].d[0] = c.r[3].d[0] | 23113ull;
    st32((c.r[4].w[0] + 20u), c.r[9].w[0]);
    set32(c.r[3], c.r[9].w[0] + 48u);
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st64((c.r[4].w[0] + 48u), c.r[8].d[0]);
    st32((c.r[10].w[0] - 44u), 0u);
    st32((c.r[10].w[0] - 48u), c.r[6].w[0]);
    st32((c.r[10].w[0] - 40u), 0u);
    st32((c.r[10].w[0] - 36u), 0u);
    st32((c.r[10].w[0] - 32u), 0u);
    st32((c.r[10].w[0] - 28u), 0u);
    st32((c.r[10].w[0] - 24u), c.r[4].w[0]);
    st32((c.r[10].w[0] - 20u), c.r[3].w[0]);
    st64((c.r[10].w[0] - 16u), 0ull);
    st32((c.r[10].w[0] - 8u), 0u);
    st32((c.r[10].w[0] - 4u), 0u);
    c.budget -= 35;
L_001723EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00172400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172424u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00172424u) [[unlikely]] return; }
L_00172424:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00172440; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4C480000u);
    c.r[3].d[0] = c.r[3].d[0] | 23113ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017247C; } }
    goto L_00172440;
L_0017243C:
    c.budget -= 1;
L_00172440:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172450u); set32(c.r[4], c.r[4].w[0] - 16992u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00172450u) [[unlikely]] return; }
L_00172450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172458u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x00172458u) [[unlikely]] return; }
L_00172458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172460u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x00172460u) [[unlikely]] return; }
L_00172460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172450u | kUnwind; return; } goto L_00172450; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172474u); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172474u) [[unlikely]] return; }
L_00172474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172450u | kUnwind; return; } goto L_00172450; } }
L_0017247C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001724B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[18].w[0] + 24u);  if (t) { goto L_001724A0; } }
L_0017248C:
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001724AC; } }
    set32(c.r[6], c.r[3].w[0] + 12u);
    c.budget -= 1;
L_001724A0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017248Cu | kUnwind; return; } goto L_0017248C; } }
L_001724AC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 12u)));  goto L_001724D4; }
L_001724B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00172680; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001724C4u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x001724C4u) [[unlikely]] return; }
L_001724C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00172680; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_001724D4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[6].w[0])));  goto L_001724E8; }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 3;
L_001724E8:
    set32(c.r[7], c.r[3].w[0] + 48u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);
    set32(c.r[16], c.r[7].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 11;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] - 48u);  goto L_0017251C; }
    set32(c.r[16], c.r[16].w[0] - c.r[4].w[0]);
    set32(c.r[16], c.r[16].w[0] - 48u);
    c.budget -= 2;
L_0017251C:
    set32(c.r[4], c.r[7].w[0] + 48u);
    c.r[4].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x80480000u);  goto L_00172594; }
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = ld64((c.r[18].w[0] + 48u));
    c.r[4].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[18].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[3].w[0] + 32u), c.r[5].d[0]);
    st32((c.r[3].w[0] + 40u), 0u);
    st32((c.r[3].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_0017256C; } }
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_0017256C:
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_0017266C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80480000u);
    c.budget -= 1;
L_00172594:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[4].d[0] | 23113ull;
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    c.r[6].d[0] = ld64((c.r[18].w[0] + 48u));
    c.r[5].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[18].w[0] + 48u), c.r[5].d[0]);
    st64((c.r[16].w[0] + 32u), c.r[6].d[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_001725E0; } }
    st32((c.r[4].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_001725E0:
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] - c.r[7].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_00172600; } }
    st32((c.r[4].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_00172600:
    st32((c.r[18].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[7], c.r[18].w[0] + 24u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), 0u);  if (t) { goto L_00172634; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00172618:
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  goto L_00172644; }
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[4].w[0] + 12u);
    c.budget -= 3;
L_00172634:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00172618u | kUnwind; return; } goto L_00172618; }
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 1;
L_00172644:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[7].w[0]), c.r[3].w[0]);  goto L_00172654; }
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00172654:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 6;
L_0017266C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 48u);  goto L_00172680; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017267Cu);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x0017267Cu) [[unlikely]] return; }
L_0017267C:
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_00172680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001726A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001726BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x001726BCu) [[unlikely]] return; }
L_001726BC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] - 48u)));  goto L_001726F0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001726D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001726D4u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x001726D4u) [[unlikely]] return; }
L_001726D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001726E4u); set32(c.r[4], c.r[4].w[0] - 16896u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x001726E4u) [[unlikely]] return; }
L_001726E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00172940; } }
    set32(c.r[6], ld32((c.r[17].w[0] - 48u)));
    c.budget -= 1;
L_001726F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80480000u);
    set32(c.r[3], ld32((c.r[17].w[0] - 24u)));
    c.r[5].d[0] = c.r[5].d[0] | 23113ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[17].w[0] - 48u);  if (t) { goto L_0017272C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00172714; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172714u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00172714u) [[unlikely]] return; }
L_00172714:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172724u); set32(c.r[4], c.r[4].w[0] - 16864u);  if (depth < kMaxDepth) unit_0014(c, 173u, depth + 1u); else { c.pc = 0x00171630u; return; } if (c.pc != 0x00172724u) [[unlikely]] return; }
L_00172724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017293C; } }
L_0017272C:
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].d[0] = c.r[6].d[0] << 33;  goto L_00172758; }
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_0017293C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017274Cu);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x0017274Cu) [[unlikely]] return; }
L_0017274C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017293C; } }
    c.r[5].d[0] = c.r[6].d[0] << 33;
    c.budget -= 1;
L_00172758:
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 8u)));  goto L_00172778; }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
L_00172778:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 12u)));  goto L_00172790; }
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00172794; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00172790:
    st32((c.r[3].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 1;
L_00172794:
    set32(c.r[8], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[8].d[0] == 0ull) { set32(c.r[8], ld32((c.r[4].w[0] + 16u)));  goto L_00172830; }
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0017282C; } }
    set32(c.r[6], ld32((c.r[8].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[8].w[0] + 8u)));  goto L_001727CC; }
    set32(c.r[5], ld32((c.r[8].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 3;
L_001727CC:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[5], ld32((c.r[8].w[0] + 12u)));  goto L_001727E4; }
    set32(c.r[5], ld32((c.r[8].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_001727E8; } }
    set32(c.r[5], ld32((c.r[8].w[0] + 12u)));
    c.budget -= 1;
L_001727E4:
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 1;
L_001727E8:
    set32(c.r[5], ld32((c.r[8].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 20u), c.r[5].w[0]);  if (t) { goto L_001727F8; } }
    st32((c.r[5].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 1;
L_001727F8:
    set32(c.r[6], ld32((c.r[8].w[0] + 28u)));
    set32(c.r[7], c.r[8].w[0] + 48u);
    set32(c.r[5], c.r[4].w[0] + 48u);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[8].w[0]), 0u);
    set32(c.r[5], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[3].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 13;
L_0017282C:
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_00172830:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 36u)));  goto L_001728CC; }
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001728C8; } }
    set32(c.r[6], ld32((c.r[8].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[8].w[0] + 8u)));  goto L_00172864; }
    set32(c.r[5], ld32((c.r[8].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 3;
L_00172864:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[5], ld32((c.r[8].w[0] + 12u)));  goto L_0017287C; }
    set32(c.r[5], ld32((c.r[8].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00172880; } }
    set32(c.r[5], ld32((c.r[8].w[0] + 12u)));
    c.budget -= 1;
L_0017287C:
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 1;
L_00172880:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[8].w[0] + 20u), c.r[5].w[0]);  if (t) { goto L_00172890; } }
    st32((c.r[5].w[0] + 16u), c.r[8].w[0]);
    c.budget -= 1;
L_00172890:
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[7], c.r[4].w[0] + 48u);
    set32(c.r[5], c.r[8].w[0] + 48u);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st32((c.r[8].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], ld32((c.r[3].w[0] + 40u)));
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[3].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 14;
L_001728C8:
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 1;
L_001728CC:
    set32(c.r[7], c.r[3].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0017290C; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_001728F0:
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  goto L_0017291C; }
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[3].w[0] + 12u);
    c.budget -= 3;
L_0017290C:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[3].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001728F0u | kUnwind; return; } goto L_001728F0; }
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 1;
L_0017291C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[7].w[0]), c.r[4].w[0]);  goto L_0017292C; }
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 2;
L_0017292C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017293C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017293Cu);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x0017293Cu) [[unlikely]] return; }
L_0017293C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00172940:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00172950:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172978u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00172978u) [[unlikely]] return; }
L_00172978:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001729A8; } }
L_00172980:
    set32(c.r[16], ld32((c.r[20].w[0] - 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80480000u);
    c.r[2].d[0] = c.r[2].d[0] | 23113ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[20].w[0] - 48u);  if (t) { goto L_001729F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x21550000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001729A0u); c.r[4].d[0] = c.r[2].d[0] | 21317ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x001729A0u) [[unlikely]] return; }
L_001729A0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 40u)));  goto L_001729F8; }
L_001729A8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001729B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001729B8u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x001729B8u) [[unlikely]] return; }
L_001729B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001729C8u); set32(c.r[4], c.r[4].w[0] - 16832u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001729C8u) [[unlikely]] return; }
L_001729C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001729D0u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001729D0u) [[unlikely]] return; }
L_001729D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001729D8u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001729D8u) [[unlikely]] return; }
L_001729D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001729C8u | kUnwind; return; } goto L_001729C8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001729ECu); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001729ECu) [[unlikely]] return; }
L_001729EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001729C8u | kUnwind; return; } goto L_001729C8; } }
L_001729F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_001729F8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_00172A30; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00172A14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172A14u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00172A14u) [[unlikely]] return; }
L_00172A14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172A24u); set32(c.r[4], c.r[4].w[0] - 16800u);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x00172A24u) [[unlikely]] return; }
L_00172A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00172A44; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00172A30:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_00172A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172A40u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00172A40u) [[unlikely]] return; }
L_00172A40:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00172A44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00172A70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00172ABC; } }
    set32(c.r[16], ld32((c.r[4].w[0] - 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[2].d[0] | 23113ull;
    c.r[3].d[0] = c.r[16].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[4].w[0] - 48u);  if (t) { goto L_00172AF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x21550000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172AB4u); c.r[4].d[0] = c.r[2].d[0] | 21317ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x00172AB4u) [[unlikely]] return; }
L_00172AB4:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_00172AFC; }
L_00172ABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172ACCu); set32(c.r[4], c.r[4].w[0] - 16832u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00172ACCu) [[unlikely]] return; }
L_00172ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172AD4u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x00172AD4u) [[unlikely]] return; }
L_00172AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172ADCu); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x00172ADCu) [[unlikely]] return; }
L_00172ADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172ACCu | kUnwind; return; } goto L_00172ACC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172AF0u); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172AF0u) [[unlikely]] return; }
L_00172AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172ACCu | kUnwind; return; } goto L_00172ACC; } }
L_00172AF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_00172AFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00172B20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00172B64; } }
    set32(c.r[16], ld32((c.r[4].w[0] - 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80480000u);
    c.r[2].d[0] = c.r[2].d[0] | 23113ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[4].w[0] - 48u);  if (t) { goto L_00172BA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x21550000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172B5Cu); c.r[4].d[0] = c.r[2].d[0] | 21317ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x00172B5Cu) [[unlikely]] return; }
L_00172B5C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_00172BA4; }
L_00172B64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172B74u); set32(c.r[4], c.r[4].w[0] - 16832u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00172B74u) [[unlikely]] return; }
L_00172B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172B7Cu);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x00172B7Cu) [[unlikely]] return; }
L_00172B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172B84u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x00172B84u) [[unlikely]] return; }
L_00172B84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172B74u | kUnwind; return; } goto L_00172B74; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172B98u); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172B98u) [[unlikely]] return; }
L_00172B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172B74u | kUnwind; return; } goto L_00172B74; } }
L_00172BA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00172BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00172BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00172C04; } }
    set32(c.r[16], ld32((c.r[4].w[0] - 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80480000u);
    c.r[2].d[0] = c.r[2].d[0] | 23113ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[4].w[0] - 48u);  if (t) { goto L_00172C40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x21550000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172BFCu); c.r[4].d[0] = c.r[2].d[0] | 21317ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x00172BFCu) [[unlikely]] return; }
L_00172BFC:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_00172C44; }
L_00172C04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172C14u); set32(c.r[4], c.r[4].w[0] - 16832u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00172C14u) [[unlikely]] return; }
L_00172C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172C1Cu);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x00172C1Cu) [[unlikely]] return; }
L_00172C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172C24u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x00172C24u) [[unlikely]] return; }
L_00172C24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172C14u | kUnwind; return; } goto L_00172C14; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172C38u); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172C38u) [[unlikely]] return; }
L_00172C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172C14u | kUnwind; return; } goto L_00172C14; } }
L_00172C40:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_00172C44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00172C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00172C84; } }
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4C480000u);
    c.r[3].d[0] = c.r[3].d[0] | 23113ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00172CC0; } }
L_00172C84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172C94u); set32(c.r[4], c.r[4].w[0] - 16992u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00172C94u) [[unlikely]] return; }
L_00172C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172C9Cu);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x00172C9Cu) [[unlikely]] return; }
L_00172C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172CA4u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x00172CA4u) [[unlikely]] return; }
L_00172CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172C94u | kUnwind; return; } goto L_00172C94; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172CB8u); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172CB8u) [[unlikely]] return; }
L_00172CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172C94u | kUnwind; return; } goto L_00172C94; } }
L_00172CC0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00172D68; }
    set32(c.r[13], ld32((c.r[4].w[0] + 20u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[12].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_00172D34; } }
    set32(c.r[3], ld32((c.r[13].w[0])));
    c.budget -= 1;
L_00172CF0:
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[13].w[0] + 28u)));  goto L_00172D1C; }
    set32(c.r[3], ld32((c.r[13].w[0] + 28u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[1].d[0] = c.r[11].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[12], c.r[12].w[0] + c.r[3].w[0]);  if (t) { goto L_00172D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00172D30; } }
    set32(c.r[3], ld32((c.r[13].w[0] + 28u)));
    c.budget -= 1;
L_00172D1C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[1].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);  if (t) { goto L_00172D30; } }
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00172D30:
    set32(c.r[13], ld32((c.r[13].w[0] + 20u)));
    c.budget -= 1;
L_00172D34:
    c.budget -= 2;
    if (c.r[13].d[0] != 0ull) { set32(c.r[3], ld32((c.r[13].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00172CF0u | kUnwind; return; } goto L_00172CF0; }
    st32((c.r[5].w[0] + 8u), c.r[12].w[0]);
    set32(c.r[3], c.r[10].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[11].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[10].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[9].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[7].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
L_00172D68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00172D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00172DA4; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C480000u);
    c.r[2].d[0] = c.r[2].d[0] | 23113ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00172DDC; } }
L_00172DA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172DB0u); set32(c.r[4], c.r[4].w[0] - 16992u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00172DB0u) [[unlikely]] return; }
L_00172DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172DB8u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x00172DB8u) [[unlikely]] return; }
L_00172DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172DC0u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x00172DC0u) [[unlikely]] return; }
L_00172DC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172DB0u | kUnwind; return; } goto L_00172DB0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172DD4u); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172DD4u) [[unlikely]] return; }
L_00172DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172DB0u | kUnwind; return; } goto L_00172DB0; } }
L_00172DDC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_00172DF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00172DF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00172DF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00172E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00172E24; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C480000u);
    c.r[2].d[0] = c.r[2].d[0] | 23113ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00172E5C; } }
L_00172E24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172E30u); set32(c.r[4], c.r[4].w[0] - 16992u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00172E30u) [[unlikely]] return; }
L_00172E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172E38u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x00172E38u) [[unlikely]] return; }
L_00172E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172E40u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x00172E40u) [[unlikely]] return; }
L_00172E40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172E30u | kUnwind; return; } goto L_00172E30; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172E54u); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172E54u) [[unlikely]] return; }
L_00172E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172E30u | kUnwind; return; } goto L_00172E30; } }
L_00172E5C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_00172E70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00172E70; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_00172E70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00172E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00172EA4; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C480000u);
    c.r[2].d[0] = c.r[2].d[0] | 23113ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00172EDC; } }
L_00172EA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172EB0u); set32(c.r[4], c.r[4].w[0] - 16992u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00172EB0u) [[unlikely]] return; }
L_00172EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172EB8u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x00172EB8u) [[unlikely]] return; }
L_00172EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172EC0u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x00172EC0u) [[unlikely]] return; }
L_00172EC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172EB0u | kUnwind; return; } goto L_00172EB0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172ED4u); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172ED4u) [[unlikely]] return; }
L_00172ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172EB0u | kUnwind; return; } goto L_00172EB0; } }
L_00172EDC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_00172EF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00172F04; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00172EF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00172F04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 48u);  if (t) { goto L_00172F04; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00172F04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00172F20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00172F78; } }
    set32(c.r[18], ld32((c.r[4].w[0] - 48u)));
    set32(c.r[16], c.r[4].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x21550000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172F50u); c.r[4].d[0] = c.r[2].d[0] | 21317ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x00172F50u) [[unlikely]] return; }
L_00172F50:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[3].d[0] = c.r[18].d[0] << 40;  goto L_00172F64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00172FCC; } }
    c.r[3].d[0] = c.r[18].d[0] << 40;
    c.budget -= 1;
L_00172F64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | 23113ull;
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_00172FB8; }
L_00172F78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172F88u); set32(c.r[4], c.r[4].w[0] - 16832u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00172F88u) [[unlikely]] return; }
L_00172F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172F90u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x00172F90u) [[unlikely]] return; }
L_00172F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172F98u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x00172F98u) [[unlikely]] return; }
L_00172F98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172F88u | kUnwind; return; } goto L_00172F88; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172FACu); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172FACu) [[unlikely]] return; }
L_00172FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172F88u | kUnwind; return; } goto L_00172F88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00172FB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00172FCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 48u);  if (t) { goto L_00172FCC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00172FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00172FF0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 24u)));  if (t) { goto L_0017300C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00173070; } }
L_0017300C:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00173020; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00173070; } }
L_00173020:
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 28u)));  goto L_00173034; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00173070; } }
L_00173034:
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 48u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] - 48u);  goto L_0017305C; }
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - 48u);
    c.budget -= 2;
L_0017305C:
    set32(c.r[3], c.r[4].w[0] + 48u);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00173070; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00173070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00173080:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 48u);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001730BCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001730BCu) [[unlikely]] return; }
L_001730BC:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001730D8u); set32(c.r[16], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001730D8u) [[unlikely]] return; }
L_001730D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001730E8u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001730E8u) [[unlikely]] return; }
L_001730E8:
    set32(c.r[2], c.r[20].w[0] + 48u);
    set32(c.r[3], c.r[19].w[0] + 48u);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 6;
L_00173100:
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[19].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 20u), c.r[20].w[0]);  goto L_0017312C; }
    st32((c.r[2].w[0] + 20u), c.r[20].w[0]);
    c.budget -= 1;
L_0017312C:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  goto L_00173140; }
    st32((c.r[2].w[0] + 16u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 2;
L_00173140:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00173150; }
    st32((c.r[2].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 2;
L_00173150:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), c.r[19].w[0]);  goto L_0017315C; }
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    c.budget -= 1;
L_0017315C:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00173174; }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
L_00173174:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  goto L_00173188; }
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0017318C; } }
L_00173188:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_0017318C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0017319C; } }
    st32((c.r[2].w[0] + 8u), c.r[20].w[0]);
    c.budget -= 1;
L_0017319C:
    st32((c.r[17].w[0] + 28u), c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[20].w[0] + 8u), 0u);
    set32(c.r[4], c.r[20].w[0] + 48u);
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001731DCu); st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 275u, depth + 1u); else { c.pc = 0x001726A0u; return; } if (c.pc != 0x001731DCu) [[unlikely]] return; }
L_001731DC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00173200:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173248u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00173248u) [[unlikely]] return; }
L_00173248:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00173264; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C480000u);
    c.r[2].d[0] = c.r[2].d[0] | 23113ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001732A0; } }
L_00173264:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173274u); set32(c.r[4], c.r[4].w[0] - 16992u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00173274u) [[unlikely]] return; }
L_00173274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017327Cu);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x0017327Cu) [[unlikely]] return; }
L_0017327C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173284u); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x00173284u) [[unlikely]] return; }
L_00173284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173274u | kUnwind; return; } goto L_00173274; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00173298u); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00173298u) [[unlikely]] return; }
L_00173298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173274u | kUnwind; return; } goto L_00173274; } }
L_001732A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00173384; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00173384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001732C4; } }
L_001732BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 2;
L_001732C4:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001732BCu | kUnwind; return; } goto L_001732BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017337C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001732E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 16u)));  goto L_0017337C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173300u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 341u, depth + 1u); else { c.pc = 0x00172FF0u; return; } if (c.pc != 0x00173300u) [[unlikely]] return; }
L_00173300:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[16].d[0];  if (t) { goto L_00173378; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], 0u + 5u);  goto L_00173330; }
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00173324u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00173324u) [[unlikely]] return; }
L_00173324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00173330; } }
    set32(c.r[19], 0u + 5u);
    c.budget -= 1;
L_00173330:
    c.r[2].d[0] = c.r[19].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] & 2ull;  goto L_00173370; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017334Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 342u, depth + 1u); else { c.pc = 0x00173080u; return; } if (c.pc != 0x0017334Cu) [[unlikely]] return; }
L_0017334C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_00173368; } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[22].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00173368u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00173368u) [[unlikely]] return; }
L_00173368:
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].d[0] & 2ull;
    c.budget -= 2;
L_00173370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00173384; } }
L_00173378:
    set32(c.r[16], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0017337C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001732E4u | kUnwind; return; } goto L_001732E4; }
L_00173384:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_00173398; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173394u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00173394u) [[unlikely]] return; }
L_00173394:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00173398:
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
L_001733D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[20].w[0] + c.r[19].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173404u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 13u, depth + 1u); else { c.pc = 0x00120230u; return; } if (c.pc != 0x00173404u) [[unlikely]] return; }
L_00173404:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + 48u);  goto L_00173418; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173460; } }
L_00173418:
    set32(c.r[17], c.r[2].w[0] + c.r[19].w[0]);
    mmi::divu(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x21550000u);  goto L_00173434; }
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x21550000u);
    c.budget -= 2;
L_00173434:
    st32((c.r[17].w[0] - 44u), c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173440u); c.r[4].d[0] = c.r[2].d[0] | 21317ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x00173440u) [[unlikely]] return; }
    goto L_00173440;
L_0017343C:
    c.r[4].d[0] = c.r[2].d[0] | 21317ull;
    c.budget -= 1;
L_00173440:
    st32((c.r[17].w[0] - 48u), c.r[2].w[0]);
    st32((c.r[17].w[0] - 24u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] - 20u), c.r[20].w[0]);
    st32((c.r[17].w[0] - 32u), c.r[16].w[0]);
    st64((c.r[17].w[0] - 16u), 0ull);
    st32((c.r[17].w[0] - 8u), 0u);
    st32((c.r[17].w[0] - 4u), 0u);
    c.budget -= 8;
L_00173460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00173480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001734A0; } }
    set32(c.r[18], c.r[31].w[0] - 8u);
    c.budget -= 1;
L_001734A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001734DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] - 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] - 48u);  if (t) { goto L_001734C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001734BCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 275u, depth + 1u); else { c.pc = 0x001726A0u; return; } if (c.pc != 0x001734BCu) [[unlikely]] return; }
L_001734BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0017354C; } }
L_001734C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x21550000u);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001734D4u); c.r[4].d[0] = c.r[2].d[0] | 21317ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x001734D4u) [[unlikely]] return; }
L_001734D4:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  goto L_0017351C; }
L_001734DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001734ECu); set32(c.r[4], c.r[4].w[0] - 16864u);  if (depth < kMaxDepth) unit_0014(c, 173u, depth + 1u); else { c.pc = 0x00171630u; return; } if (c.pc != 0x001734ECu) [[unlikely]] return; }
L_001734EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001734F4u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x001734F4u) [[unlikely]] return; }
L_001734F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001734FCu); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x001734FCu) [[unlikely]] return; }
L_001734FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001734ECu | kUnwind; return; } goto L_001734EC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00173510u); set32(c.r[4], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00173510u) [[unlikely]] return; }
L_00173510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001734ECu | kUnwind; return; } goto L_001734EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_0017351C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x46520000u);  goto L_00173534; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_00173548; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46520000u);
    c.budget -= 1;
L_00173534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017353Cu); c.r[4].d[0] = c.r[2].d[0] | 17733ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x0017353Cu) [[unlikely]] return; }
L_0017353C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173548u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00120280u; return; } if (c.pc != 0x00173548u) [[unlikely]] return; }
L_00173548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0017354C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00173560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[9], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[8].d[0] = c.r[2].d[0] | 16706ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47450000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 9360u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 21321ull;
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 23;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001735E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001735C8u); set32(c.r[5], c.r[5].w[0] - 16768u);  if (depth < kMaxDepth) unit_0014(c, 118u, depth + 1u); else { c.pc = 0x00170F70u; return; } if (c.pc != 0x001735C8u) [[unlikely]] return; }
L_001735C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00173788; } }
L_001735E0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { st32((c.r[17].w[0] + 20u), c.r[5].w[0]);  goto L_001735F4; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[17].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 3;
L_001735F4:
    st32((c.r[17].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    mmi::divu(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017367C; } }
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);  goto L_00173664; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017364Cu); set32(c.r[5], c.r[5].w[0] - 16768u);  if (depth < kMaxDepth) unit_0014(c, 118u, depth + 1u); else { c.pc = 0x00170F70u; return; } if (c.pc != 0x0017364Cu) [[unlikely]] return; }
L_0017364C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00173788; } }
L_00173664:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
L_0017367C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00173734; }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173698u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00173698u) [[unlikely]] return; }
L_00173698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_001736CC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001736B4u); set32(c.r[6], c.r[6].w[0] - 16752u);  if (depth < kMaxDepth) unit_0014(c, 129u, depth + 1u); else { c.pc = 0x001710A0u; return; } if (c.pc != 0x001736B4u) [[unlikely]] return; }
L_001736B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00173788; } }
L_001736CC:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[16].w[0] - 1u);  if (t) { goto L_00173704; } }
L_001736D8:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
L_00173704:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[7].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001736D8u | kUnwind; return; } goto L_001736D8; }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 12u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
L_00173734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017373Cu);  if (depth < kMaxDepth) unit_0014(c, 386u, depth + 1u); else { c.pc = 0x00173860u; return; } if (c.pc != 0x0017373Cu) [[unlikely]] return; }
L_0017373C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), 0u);  goto L_0017375C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00173788; } }
L_0017375C:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
L_00173788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001737A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017383C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 9360u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  goto L_001737F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001737E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001737E0u) [[unlikely]] return; }
L_001737E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00173804; } }
L_001737E8:
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001737F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001737F4u) [[unlikely]] return; }
L_001737F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001737F8:
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001737E8u | kUnwind; return; } goto L_001737E8; } }
L_00173804:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00173828; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_00173828:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00173840; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017383Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0017383Cu) [[unlikely]] return; }
L_0017383C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00173840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00173860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 36u)));  goto L_00173888; }
    set32(c.r[4], 0u + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173880u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00173880u) [[unlikely]] return; }
L_00173880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0017389C; } }
L_00173888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00173898; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_00173898:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0017389C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001738B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[19].w[0] + 44u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001738E8; } }
L_001738D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001738F4; } }
    set32(c.r[18], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_001738E8:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001738D4u | kUnwind; return; } goto L_001738D4; } }
L_001738F4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00173904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173A84; } }
L_00173904:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;  goto L_0017392C; }
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0017392C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 32u)));  goto L_0017397C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_0017394C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
L_0017394C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[18].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00173970; } }
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 1;
L_00173970:
    st32((c.r[19].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_00173A80; } }
L_0017397C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 36u)));  goto L_00173998; }
    set32(c.r[4], 0u + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173990u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00173990u) [[unlikely]] return; }
L_00173990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001739A8; } }
L_00173998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001739A8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_001739A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_001739B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173A84; } }
L_001739B8:
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_001739D0; }
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
L_001739D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[18].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00173A08; } }
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00173A08:
    st32((c.r[2].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00173A30; } }
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_00173A30:
    st32((c.r[19].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[6], c.r[19].w[0] + 44u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_00173A60; } }
L_00173A44:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  goto L_00173A70; }
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[3].w[0] + 16u);
    c.budget -= 3;
L_00173A60:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00173A44u | kUnwind; return; } goto L_00173A44; }
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 1;
L_00173A70:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[6].w[0]), c.r[16].w[0]);  goto L_00173A80; }
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    st32((c.r[6].w[0]), c.r[16].w[0]);
    c.budget -= 2;
L_00173A80:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_00173A84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00173AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00173AD0; } }
L_00173AC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00173AE0; } }
    set32(c.r[17], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00173AD0:
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173AC0u | kUnwind; return; } goto L_00173AC0; } }
L_00173AE0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_00173B00; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173AF8u); set32(c.r[5], c.r[5].w[0] - 16744u);  if (depth < kMaxDepth) unit_0014(c, 118u, depth + 1u); else { c.pc = 0x00170F70u; return; } if (c.pc != 0x00173AF8u) [[unlikely]] return; }
L_00173AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((0u), 0u);  if (t) { goto L_00173CB8; } }
L_00173B00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_00173B28; }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
L_00173B28:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  goto L_00173B3C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00173B40; } }
L_00173B3C:
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 1;
L_00173B40:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  goto L_00173BD8; }
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00173BD4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 12u)));  goto L_00173B78; }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
L_00173B78:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  goto L_00173B8C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00173B90; } }
L_00173B8C:
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 1;
L_00173B90:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00173BA0; } }
    st32((c.r[3].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 1;
L_00173BA0:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_00173BCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173BC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00173BC4u) [[unlikely]] return; }
L_00173BC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00173BD4; } }
L_00173BCC:
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 2;
L_00173BD4:
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_00173BD8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[6], c.r[18].w[0] + 44u);  goto L_00173C74; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00173C70; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_00173C0C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
L_00173C0C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_00173C20; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00173C24; } }
L_00173C20:
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 1;
L_00173C24:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00173C34; } }
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 1;
L_00173C34:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_00173C3C:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_00173C64; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173C5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00173C5Cu) [[unlikely]] return; }
L_00173C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00173C70; } }
L_00173C64:
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[17].w[0]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00173C70:
    set32(c.r[6], c.r[18].w[0] + 44u);
    c.budget -= 1;
L_00173C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_00173C98; } }
L_00173C7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  goto L_00173CA8; }
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[3].w[0] + 16u);
    c.budget -= 3;
L_00173C98:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00173C7Cu | kUnwind; return; } goto L_00173C7C; }
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 1;
L_00173CA8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[6].w[0]), c.r[17].w[0]);  goto L_00173CB8; }
    st32((c.r[3].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[6].w[0]), c.r[17].w[0]);
    c.budget -= 2;
L_00173CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00173CD0:
    c.f[12] = fp::cvt_w_s(c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.f[12]);  c.pc = t; return; }
L_00173CE0:
    c.f[12] = fp::cvt_w_s(c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], c.f[12]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[3].d[0] | 65535ull;  if (t) { goto L_00173D04; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00173D0C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00173D04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u);  c.pc = t; return; }
L_00173D0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_00173D20:
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::cvt_s_w(c.f[0]);  c.pc = t; return; }
L_00173D30:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; c.f[0] = c.r[4].w[0];  if (t) { goto L_00173D40; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::cvt_s_w(c.f[0]);  c.pc = t; return; }
L_00173D40:
    set32(c.r[4], c.r[4].w[0] >> 1);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);  c.pc = t; return; }
L_00173D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[28].w[0] - 31268u), c.r[4].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173D74u); set32(c.r[4], c.r[28].w[0] - 31264u);  if (depth < kMaxDepth) unit_0008(c, 26u, depth + 1u); else { c.pc = 0x00140640u; return; } if (c.pc != 0x00173D74u) [[unlikely]] return; }
L_00173D74:
    set32(c.r[4], ld32((c.r[28].w[0] - 31268u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 31264u)));  goto L_00173DA8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 31264u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173DA0u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x00173DA0u) [[unlikely]] return; }
L_00173DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31260u), c.r[2].w[0]);  if (t) { goto L_00173DC4; } }
L_00173DA8:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173DC0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00173DC0u) [[unlikely]] return; }
L_00173DC0:
    st32((c.r[28].w[0] - 31260u), c.r[2].w[0]);
    c.budget -= 1;
L_00173DC4:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 31264u)));  goto L_00173DDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173F0C; } }
L_00173DDC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173DF8u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00173DF8u) [[unlikely]] return; }
L_00173DF8:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 30u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00173E74; } }
L_00173E0C:
    set32(c.r[3], ld32((c.r[28].w[0] - 31260u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] - c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 144u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31260u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 148u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31260u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 152u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31260u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 156u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31260u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 160u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 31260u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31260u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 164u), c.r[4].w[0]);
    c.budget -= 26;
L_00173E74:
    set32(c.r[3], ld32((c.r[28].w[0] - 31264u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], c.r[2].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00173E0Cu | kUnwind; return; } goto L_00173E0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173E8Cu); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00173E8Cu) [[unlikely]] return; }
L_00173E8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 31256u), c.r[2].w[0]);  goto L_00173EA8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173EA4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0015(c, 62u, depth + 1u); else { c.pc = 0x00174730u; return; } if (c.pc != 0x00173EA4u) [[unlikely]] return; }
L_00173EA4:
    st32((c.r[28].w[0] - 31256u), c.r[2].w[0]);
    c.budget -= 1;
L_00173EA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 100u);  goto L_00173EB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173F0C; } }
L_00173EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173EC0u); st32((c.r[28].w[0] - 31252u), 0u);  if (depth < kMaxDepth) unit_0015(c, 168u, depth + 1u); else { c.pc = 0x00175630u; return; } if (c.pc != 0x00173EC0u) [[unlikely]] return; }
L_00173EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173EC8u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00173EC8u) [[unlikely]] return; }
L_00173EC8:
    st32((c.r[28].w[0] - 31244u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173ED4u); set32(c.r[4], 0u + 184u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00173ED4u) [[unlikely]] return; }
L_00173ED4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 31248u), c.r[2].w[0]);  goto L_00173EF0; }
    set32(c.r[5], ld32((c.r[28].w[0] - 31244u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173EECu); set32(c.r[6], 0u + 4096u);  if (depth < kMaxDepth) unit_0015(c, 30u, depth + 1u); else { c.pc = 0x00174320u; return; } if (c.pc != 0x00173EECu) [[unlikely]] return; }
L_00173EEC:
    st32((c.r[28].w[0] - 31248u), c.r[2].w[0]);
    c.budget -= 1;
L_00173EF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_00173F00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173F0C; } }
L_00173F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173F08u);  if (depth < kMaxDepth) unit_0015(c, 157u, depth + 1u); else { c.pc = 0x00175500u; return; } if (c.pc != 0x00173F08u) [[unlikely]] return; }
L_00173F08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00173F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00173F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31248u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31248u)));  goto L_00173F74; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00173F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173F48u);  if (depth < kMaxDepth) unit_0015(c, 130u, depth + 1u); else { c.pc = 0x001751B0u; return; } if (c.pc != 0x00173F48u) [[unlikely]] return; }
L_00173F48:
    set32(c.r[2], ld32((c.r[28].w[0] - 31252u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31256u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 31252u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00173F68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00173F68u) [[unlikely]] return; }
L_00173F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173F70u); set32(c.r[4], ld32((c.r[28].w[0] - 31248u)));  if (depth < kMaxDepth) unit_0015(c, 149u, depth + 1u); else { c.pc = 0x00175440u; return; } if (c.pc != 0x00173F70u) [[unlikely]] return; }
L_00173F70:
    set32(c.r[4], ld32((c.r[28].w[0] - 31248u)));
    c.budget -= 1;
L_00173F74:
    st32((c.r[28].w[0] - 31264u), 0u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 31252u), 0u);  if (t) { goto L_00173F9C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 31248u), 0u);  goto L_00173F9C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00173F98u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00173F98u) [[unlikely]] return; }
L_00173F98:
    st32((c.r[28].w[0] - 31248u), 0u);
    c.budget -= 1;
L_00173F9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 31256u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31244u)));  goto L_00173FC8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 31256u), 0u);  goto L_00173FC4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00173FC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00173FC0u) [[unlikely]] return; }
L_00173FC0:
    st32((c.r[28].w[0] - 31256u), 0u);
    c.budget -= 1;
L_00173FC4:
    set32(c.r[4], ld32((c.r[28].w[0] - 31244u)));
    c.budget -= 1;
L_00173FC8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31268u)));  goto L_00173FE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173FD8u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00173FD8u) [[unlikely]] return; }
L_00173FD8:
    st32((c.r[28].w[0] - 31244u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 31268u)));
    c.budget -= 2;
L_00173FE0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31260u)));  [[clang::musttail]] return unit_0015(c, 2u, depth); }
    set32(c.r[5], ld32((c.r[28].w[0] - 31260u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { st32((c.r[28].w[0] - 31268u), 0u);  [[clang::musttail]] return unit_0015(c, 4u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173FFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00173FFCu) [[unlikely]] return; }
L_00173FFC:
    st32((c.r[28].w[0] - 31260u), 0u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0015(c, 1u, depth);
}

}
