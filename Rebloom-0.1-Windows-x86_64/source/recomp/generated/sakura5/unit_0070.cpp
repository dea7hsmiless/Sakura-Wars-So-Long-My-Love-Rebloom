#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0070[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 9, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0,
    105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0,
    172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0,
    181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0,
    0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0,
    0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282,
    0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0,
    322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0,
    330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0,
    0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 372,
    0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377,
    0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383,
    0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387,
    0, 388, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395,
    0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0,
    0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0,
};

void unit_0070(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E0000;
    case 2u: goto L_002E0008;
    case 3u: goto L_002E002C;
    case 4u: goto L_002E0040;
    case 5u: goto L_002E0078;
    case 6u: goto L_002E0090;
    case 7u: goto L_002E0098;
    case 8u: goto L_002E00A0;
    case 9u: goto L_002E00AC;
    case 10u: goto L_002E00B8;
    case 11u: goto L_002E00C0;
    case 12u: goto L_002E00C8;
    case 13u: goto L_002E00DC;
    case 14u: goto L_002E00EC;
    case 15u: goto L_002E0114;
    case 16u: goto L_002E0138;
    case 17u: goto L_002E0160;
    case 18u: goto L_002E0184;
    case 19u: goto L_002E01AC;
    case 20u: goto L_002E01B4;
    case 21u: goto L_002E01BC;
    case 22u: goto L_002E01C8;
    case 23u: goto L_002E01D8;
    case 24u: goto L_002E0230;
    case 25u: goto L_002E02A0;
    case 26u: goto L_002E02E0;
    case 27u: goto L_002E02EC;
    case 28u: goto L_002E0304;
    case 29u: goto L_002E0320;
    case 30u: goto L_002E0330;
    case 31u: goto L_002E0340;
    case 32u: goto L_002E0530;
    case 33u: goto L_002E0540;
    case 34u: goto L_002E0550;
    case 35u: goto L_002E0560;
    case 36u: goto L_002E0570;
    case 37u: goto L_002E0580;
    case 38u: goto L_002E0590;
    case 39u: goto L_002E05A0;
    case 40u: goto L_002E05B0;
    case 41u: goto L_002E05C0;
    case 42u: goto L_002E05D0;
    case 43u: goto L_002E05E0;
    case 44u: goto L_002E05F0;
    case 45u: goto L_002E0600;
    case 46u: goto L_002E0610;
    case 47u: goto L_002E0620;
    case 48u: goto L_002E0630;
    case 49u: goto L_002E0640;
    case 50u: goto L_002E0650;
    case 51u: goto L_002E0660;
    case 52u: goto L_002E068C;
    case 53u: goto L_002E069C;
    case 54u: goto L_002E06AC;
    case 55u: goto L_002E06BC;
    case 56u: goto L_002E06CC;
    case 57u: goto L_002E06DC;
    case 58u: goto L_002E06EC;
    case 59u: goto L_002E06FC;
    case 60u: goto L_002E070C;
    case 61u: goto L_002E0754;
    case 62u: goto L_002E0764;
    case 63u: goto L_002E0788;
    case 64u: goto L_002E07A0;
    case 65u: goto L_002E0840;
    case 66u: goto L_002E0850;
    case 67u: goto L_002E087C;
    case 68u: goto L_002E0888;
    case 69u: goto L_002E08A0;
    case 70u: goto L_002E08B8;
    case 71u: goto L_002E08C8;
    case 72u: goto L_002E08D0;
    case 73u: goto L_002E08E0;
    case 74u: goto L_002E0900;
    case 75u: goto L_002E0920;
    case 76u: goto L_002E09A0;
    case 77u: goto L_002E09B0;
    case 78u: goto L_002E09D0;
    case 79u: goto L_002E09D8;
    case 80u: goto L_002E09E4;
    case 81u: goto L_002E0A00;
    case 82u: goto L_002E0A10;
    case 83u: goto L_002E0A20;
    case 84u: goto L_002E0A40;
    case 85u: goto L_002E0A54;
    case 86u: goto L_002E0A70;
    case 87u: goto L_002E0A90;
    case 88u: goto L_002E0B24;
    case 89u: goto L_002E0C10;
    case 90u: goto L_002E0C28;
    case 91u: goto L_002E0C50;
    case 92u: goto L_002E0C68;
    case 93u: goto L_002E0CEC;
    case 94u: goto L_002E0E00;
    case 95u: goto L_002E0E28;
    case 96u: goto L_002E0EA0;
    case 97u: goto L_002E0EB0;
    case 98u: goto L_002E0EC0;
    case 99u: goto L_002E0EE8;
    case 100u: goto L_002E0EF8;
    case 101u: goto L_002E0F24;
    case 102u: goto L_002E0F3C;
    case 103u: goto L_002E0F60;
    case 104u: goto L_002E0F70;
    case 105u: goto L_002E0F80;
    case 106u: goto L_002E0F8C;
    case 107u: goto L_002E0F98;
    case 108u: goto L_002E0FA4;
    case 109u: goto L_002E10A0;
    case 110u: goto L_002E10B0;
    case 111u: goto L_002E10C0;
    case 112u: goto L_002E1168;
    case 113u: goto L_002E1174;
    case 114u: goto L_002E1190;
    case 115u: goto L_002E11AC;
    case 116u: goto L_002E11B8;
    case 117u: goto L_002E11D0;
    case 118u: goto L_002E1284;
    case 119u: goto L_002E1290;
    case 120u: goto L_002E12A0;
    case 121u: goto L_002E12BC;
    case 122u: goto L_002E12C8;
    case 123u: goto L_002E12E0;
    case 124u: goto L_002E130C;
    case 125u: goto L_002E1350;
    case 126u: goto L_002E1390;
    case 127u: goto L_002E13C8;
    case 128u: goto L_002E13E0;
    case 129u: goto L_002E13EC;
    case 130u: goto L_002E1410;
    case 131u: goto L_002E1430;
    case 132u: goto L_002E1490;
    case 133u: goto L_002E1498;
    case 134u: goto L_002E14A0;
    case 135u: goto L_002E14C0;
    case 136u: goto L_002E14D0;
    case 137u: goto L_002E1510;
    case 138u: goto L_002E151C;
    case 139u: goto L_002E1534;
    case 140u: goto L_002E1550;
    case 141u: goto L_002E1560;
    case 142u: goto L_002E1570;
    case 143u: goto L_002E1584;
    case 144u: goto L_002E15B0;
    case 145u: goto L_002E15E0;
    case 146u: goto L_002E15F8;
    case 147u: goto L_002E1610;
    case 148u: goto L_002E1650;
    case 149u: goto L_002E165C;
    case 150u: goto L_002E1680;
    case 151u: goto L_002E169C;
    case 152u: goto L_002E16D0;
    case 153u: goto L_002E170C;
    case 154u: goto L_002E172C;
    case 155u: goto L_002E1744;
    case 156u: goto L_002E1754;
    case 157u: goto L_002E1780;
    case 158u: goto L_002E1790;
    case 159u: goto L_002E17BC;
    case 160u: goto L_002E17CC;
    case 161u: goto L_002E17F8;
    case 162u: goto L_002E1804;
    case 163u: goto L_002E181C;
    case 164u: goto L_002E1834;
    case 165u: goto L_002E184C;
    case 166u: goto L_002E186C;
    case 167u: goto L_002E1894;
    case 168u: goto L_002E18A8;
    case 169u: goto L_002E18B0;
    case 170u: goto L_002E18DC;
    case 171u: goto L_002E18F4;
    case 172u: goto L_002E1900;
    case 173u: goto L_002E190C;
    case 174u: goto L_002E1920;
    case 175u: goto L_002E1938;
    case 176u: goto L_002E1944;
    case 177u: goto L_002E1950;
    case 178u: goto L_002E195C;
    case 179u: goto L_002E1968;
    case 180u: goto L_002E1974;
    case 181u: goto L_002E1980;
    case 182u: goto L_002E1990;
    case 183u: goto L_002E19C0;
    case 184u: goto L_002E19D4;
    case 185u: goto L_002E1A10;
    case 186u: goto L_002E1A4C;
    case 187u: goto L_002E1A64;
    case 188u: goto L_002E1A7C;
    case 189u: goto L_002E1A8C;
    case 190u: goto L_002E1AA4;
    case 191u: goto L_002E1AC0;
    case 192u: goto L_002E1AF8;
    case 193u: goto L_002E1B04;
    case 194u: goto L_002E1B24;
    case 195u: goto L_002E1B40;
    case 196u: goto L_002E1B70;
    case 197u: goto L_002E1BA8;
    case 198u: goto L_002E1BC8;
    case 199u: goto L_002E1BF0;
    case 200u: goto L_002E1C00;
    case 201u: goto L_002E1C1C;
    case 202u: goto L_002E1C34;
    case 203u: goto L_002E1C4C;
    case 204u: goto L_002E1C64;
    case 205u: goto L_002E1C70;
    case 206u: goto L_002E1CA0;
    case 207u: goto L_002E1CB0;
    case 208u: goto L_002E1CCC;
    case 209u: goto L_002E1CE4;
    case 210u: goto L_002E1CFC;
    case 211u: goto L_002E1D14;
    case 212u: goto L_002E1D20;
    case 213u: goto L_002E1D2C;
    case 214u: goto L_002E1D38;
    case 215u: goto L_002E1D44;
    case 216u: goto L_002E1D50;
    case 217u: goto L_002E1D5C;
    case 218u: goto L_002E1D68;
    case 219u: goto L_002E1D98;
    case 220u: goto L_002E1DA8;
    case 221u: goto L_002E1DC4;
    case 222u: goto L_002E1DDC;
    case 223u: goto L_002E1DF4;
    case 224u: goto L_002E1E0C;
    case 225u: goto L_002E1E18;
    case 226u: goto L_002E1E3C;
    case 227u: goto L_002E1E60;
    case 228u: goto L_002E20E0;
    case 229u: goto L_002E20F0;
    case 230u: goto L_002E2128;
    case 231u: goto L_002E2180;
    case 232u: goto L_002E21B0;
    case 233u: goto L_002E242C;
    case 234u: goto L_002E2438;
    case 235u: goto L_002E2440;
    case 236u: goto L_002E2454;
    case 237u: goto L_002E2470;
    case 238u: goto L_002E2478;
    case 239u: goto L_002E248C;
    case 240u: goto L_002E24B0;
    case 241u: goto L_002E2500;
    case 242u: goto L_002E2528;
    case 243u: goto L_002E2554;
    case 244u: goto L_002E2584;
    case 245u: goto L_002E25B0;
    case 246u: goto L_002E25E0;
    case 247u: goto L_002E25F8;
    case 248u: goto L_002E264C;
    case 249u: goto L_002E265C;
    case 250u: goto L_002E2674;
    case 251u: goto L_002E26AC;
    case 252u: goto L_002E2714;
    case 253u: goto L_002E2730;
    case 254u: goto L_002E2758;
    case 255u: goto L_002E27A0;
    case 256u: goto L_002E27E0;
    case 257u: goto L_002E2810;
    case 258u: goto L_002E2818;
    case 259u: goto L_002E2854;
    case 260u: goto L_002E2864;
    case 261u: goto L_002E2880;
    case 262u: goto L_002E28BC;
    case 263u: goto L_002E2920;
    case 264u: goto L_002E2930;
    case 265u: goto L_002E2950;
    case 266u: goto L_002E2964;
    case 267u: goto L_002E2978;
    case 268u: goto L_002E29C4;
    case 269u: goto L_002E2A00;
    case 270u: goto L_002E2A30;
    case 271u: goto L_002E2A38;
    case 272u: goto L_002E2A98;
    case 273u: goto L_002E2AA8;
    case 274u: goto L_002E2AC4;
    case 275u: goto L_002E2B00;
    case 276u: goto L_002E2B64;
    case 277u: goto L_002E2B74;
    case 278u: goto L_002E2B90;
    case 279u: goto L_002E2BB8;
    case 280u: goto L_002E2C04;
    case 281u: goto L_002E2C40;
    case 282u: goto L_002E2C7C;
    case 283u: goto L_002E2C84;
    case 284u: goto L_002E2CD0;
    case 285u: goto L_002E2CE0;
    case 286u: goto L_002E2CFC;
    case 287u: goto L_002E2D38;
    case 288u: goto L_002E2D80;
    case 289u: goto L_002E2DC8;
    case 290u: goto L_002E2E00;
    case 291u: goto L_002E2E64;
    case 292u: goto L_002E2E70;
    case 293u: goto L_002E2F04;
    case 294u: goto L_002E2F10;
    case 295u: goto L_002E2F40;
    case 296u: goto L_002E2F88;
    case 297u: goto L_002E2F9C;
    case 298u: goto L_002E2FA8;
    case 299u: goto L_002E2FD8;
    case 300u: goto L_002E2FE4;
    case 301u: goto L_002E3010;
    case 302u: goto L_002E3048;
    case 303u: goto L_002E306C;
    case 304u: goto L_002E3080;
    case 305u: goto L_002E30B4;
    case 306u: goto L_002E3110;
    case 307u: goto L_002E3120;
    case 308u: goto L_002E3140;
    case 309u: goto L_002E314C;
    case 310u: goto L_002E3180;
    case 311u: goto L_002E31B4;
    case 312u: goto L_002E31C8;
    case 313u: goto L_002E31D4;
    case 314u: goto L_002E3200;
    case 315u: goto L_002E3234;
    case 316u: goto L_002E3248;
    case 317u: goto L_002E3254;
    case 318u: goto L_002E3280;
    case 319u: goto L_002E32D0;
    case 320u: goto L_002E32E0;
    case 321u: goto L_002E32F0;
    case 322u: goto L_002E3300;
    case 323u: goto L_002E3310;
    case 324u: goto L_002E3320;
    case 325u: goto L_002E3334;
    case 326u: goto L_002E333C;
    case 327u: goto L_002E3350;
    case 328u: goto L_002E3364;
    case 329u: goto L_002E336C;
    case 330u: goto L_002E3380;
    case 331u: goto L_002E3390;
    case 332u: goto L_002E33A0;
    case 333u: goto L_002E3410;
    case 334u: goto L_002E3418;
    case 335u: goto L_002E3438;
    case 336u: goto L_002E3444;
    case 337u: goto L_002E3458;
    case 338u: goto L_002E3470;
    case 339u: goto L_002E3490;
    case 340u: goto L_002E34D0;
    case 341u: goto L_002E34DC;
    case 342u: goto L_002E34F4;
    case 343u: goto L_002E3510;
    case 344u: goto L_002E3520;
    case 345u: goto L_002E3530;
    case 346u: goto L_002E3550;
    case 347u: goto L_002E355C;
    case 348u: goto L_002E359C;
    case 349u: goto L_002E35A8;
    case 350u: goto L_002E35D4;
    case 351u: goto L_002E35FC;
    case 352u: goto L_002E366C;
    case 353u: goto L_002E3688;
    case 354u: goto L_002E3694;
    case 355u: goto L_002E36A8;
    case 356u: goto L_002E36C4;
    case 357u: goto L_002E36CC;
    case 358u: goto L_002E36D4;
    case 359u: goto L_002E36E0;
    case 360u: goto L_002E3710;
    case 361u: goto L_002E372C;
    case 362u: goto L_002E3750;
    case 363u: goto L_002E3790;
    case 364u: goto L_002E37B0;
    case 365u: goto L_002E37E0;
    case 366u: goto L_002E38B0;
    case 367u: goto L_002E38E0;
    case 368u: goto L_002E3928;
    case 369u: goto L_002E3990;
    case 370u: goto L_002E39E0;
    case 371u: goto L_002E39EC;
    case 372u: goto L_002E39FC;
    case 373u: goto L_002E3A18;
    case 374u: goto L_002E3A24;
    case 375u: goto L_002E3A60;
    case 376u: goto L_002E3A6C;
    case 377u: goto L_002E3A7C;
    case 378u: goto L_002E3A88;
    case 379u: goto L_002E3AA0;
    case 380u: goto L_002E3AAC;
    case 381u: goto L_002E3ABC;
    case 382u: goto L_002E3ACC;
    case 383u: goto L_002E3AFC;
    case 384u: goto L_002E3B08;
    case 385u: goto L_002E3B30;
    case 386u: goto L_002E3B54;
    case 387u: goto L_002E3B7C;
    case 388u: goto L_002E3B84;
    case 389u: goto L_002E3B8C;
    case 390u: goto L_002E3B98;
    case 391u: goto L_002E3BB0;
    case 392u: goto L_002E3BD8;
    case 393u: goto L_002E3C00;
    case 394u: goto L_002E3C6C;
    case 395u: goto L_002E3C7C;
    case 396u: goto L_002E3C94;
    case 397u: goto L_002E3CAC;
    case 398u: goto L_002E3D24;
    case 399u: goto L_002E3D40;
    case 400u: goto L_002E3D68;
    case 401u: goto L_002E3D88;
    case 402u: goto L_002E3D94;
    case 403u: goto L_002E3DE4;
    case 404u: goto L_002E3E58;
    case 405u: goto L_002E3E80;
    case 406u: goto L_002E3EA0;
    case 407u: goto L_002E3ECC;
    case 408u: goto L_002E3F28;
    case 409u: goto L_002E3F34;
    case 410u: goto L_002E3FD0;
    case 411u: goto L_002E3FE0;
    case 412u: goto L_002E3FF8;
    default: bad_entry(c, 0x002E0000u); return;
    }
L_002E0000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0008u); c.f[12] = ld32((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0013(c, 152u, depth + 1u); else { c.pc = 0x0016DC00u; return; } if (c.pc != 0x002E0008u) [[unlikely]] return; }
L_002E0008:
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002E001C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002E001C:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 4;
L_002E002C:
    c.f[14] = ld32((c.r[3].w[0] + 8u));
    c.f[15] = c.r[2].w[0];
    c.f[16] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0040u); c.f[12] = ld32((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0013(c, 152u, depth + 1u); else { c.pc = 0x0016DC00u; return; } if (c.pc != 0x002E0040u) [[unlikely]] return; }
L_002E0040:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002E0054; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002E0054:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[15] = c.r[2].w[0];
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.f[14] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0078u); c.f[16] = c.f[15];  if (depth < kMaxDepth) unit_0013(c, 152u, depth + 1u); else { c.pc = 0x0016DC00u; return; } if (c.pc != 0x002E0078u) [[unlikely]] return; }
L_002E0078:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFF8Cu | kUnwind; return; } [[clang::musttail]] return unit_006F(c, 516u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0090u);  if (depth < kMaxDepth) unit_0013(c, 150u, depth + 1u); else { c.pc = 0x0016DBE0u; return; } if (c.pc != 0x002E0090u) [[unlikely]] return; }
L_002E0090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0098u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x002E0098u) [[unlikely]] return; }
L_002E0098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00A0u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x002E00A0u) [[unlikely]] return; }
L_002E00A0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00ACu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x002E00ACu) [[unlikely]] return; }
L_002E00AC:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 118u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x002E00B8u) [[unlikely]] return; }
L_002E00B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00C0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x002E00C0u) [[unlikely]] return; }
L_002E00C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00C8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 148u, depth + 1u); else { c.pc = 0x0016DBC0u; return; } if (c.pc != 0x002E00C8u) [[unlikely]] return; }
L_002E00C8:
    c.f[0] = c.f[22] ^ fp::kSign;
    c.r[21].d[0] = 0ull + 0ull;
    c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[26]);
    c.f[27] = fp::ee::add(c.fcr31, c.f[22], c.f[26]);
    c.f[28] = c.f[26] ^ fp::kSign;
    c.budget -= 5;
L_002E00DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00ECu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x002E00ECu) [[unlikely]] return; }
L_002E00EC:
    c.f[22] = fp::ee::mul(c.fcr31, c.f[24], c.f[20]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[15] = 0u;
    c.f[13] = c.f[26];
    c.f[14] = c.f[23];
    c.f[12] = c.f[22];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0114u); c.f[16] = c.f[15];  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0016DC10u; return; } if (c.pc != 0x002E0114u) [[unlikely]] return; }
L_002E0114:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[16] = c.r[2].w[0];
    c.f[13] = c.f[28];
    c.f[15] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0138u); c.f[14] = c.f[23];  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0016DC10u; return; } if (c.pc != 0x002E0138u) [[unlikely]] return; }
L_002E0138:
    c.f[22] = fp::ee::mul(c.fcr31, c.f[24], c.f[27]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = c.f[26];
    c.f[14] = c.f[23];
    c.f[15] = c.r[2].w[0];
    c.f[16] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0160u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0016DC10u; return; } if (c.pc != 0x002E0160u) [[unlikely]] return; }
L_002E0160:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = c.r[2].w[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.f[13] = c.f[28];
    c.f[14] = c.f[23];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0184u); c.f[16] = c.f[15];  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0016DC10u; return; } if (c.pc != 0x002E0184u) [[unlikely]] return; }
L_002E0184:
    c.f[1] = ld32((c.r[20].w[0] + 88u));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.f[0] = ld32((c.r[28].w[0] - 32064u));
    c.r[2].d[0] = c.r[21].sd[0] < 15ll ? 1ull : 0ull;
    c.f[23] = fp::ee::sub(c.fcr31, c.f[23], c.f[25]);
    c.f[24] = fp::ee::add(c.fcr31, c.f[24], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E00DCu | kUnwind; return; } goto L_002E00DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01ACu);  if (depth < kMaxDepth) unit_0013(c, 150u, depth + 1u); else { c.pc = 0x0016DBE0u; return; } if (c.pc != 0x002E01ACu) [[unlikely]] return; }
L_002E01AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01B4u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x002E01B4u) [[unlikely]] return; }
L_002E01B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01BCu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x002E01BCu) [[unlikely]] return; }
L_002E01BC:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E01C8u) [[unlikely]] return; }
L_002E01C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[23].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002E01D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
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
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002E0230:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 13392u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E0298; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[6].w[0] + 80u));  goto L_002E0268; }
    c.f[3] = 0u;
    c.budget -= 1;
L_002E0268:
    c.f[0] = ld32((c.r[4].w[0] + 320u));
    c.f[2] = ld32((c.r[28].w[0] - 32080u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[4].w[0] + 320u), c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E0298; } }
    st32((c.r[4].w[0] + 320u), c.f[1]);
    c.budget -= 1;
L_002E0298:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E02A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E0304; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28592u);
    set32(c.r[2], c.r[2].w[0] + 28648u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002E02E0u) [[unlikely]] return; }
L_002E02E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002E02ECu) [[unlikely]] return; }
L_002E02EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002E0308; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0304u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002E0304u) [[unlikely]] return; }
L_002E0304:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E0308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0320:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E02A0u | kUnwind; return; } goto L_002E02A0; }
L_002E0330:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF860u | kUnwind; return; } [[clang::musttail]] return unit_006F(c, 464u, depth); }
L_002E0340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 120u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002E077C; } }
    set32(c.r[3], 0u + 121u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 260u)));  goto L_002E0780; }
    set32(c.r[3], 0u + 119u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 96u)));  goto L_002E076C; }
    set32(c.r[3], 0u + 111u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E075C; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E074C; } }
    set32(c.r[3], 0u + 110u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_002E073C; }
    set32(c.r[3], 0u + 108u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_002E072C; }
    set32(c.r[3], 0u + 109u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002E0720; }
    set32(c.r[3], 0u + 107u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002E0714; }
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0704; } }
    set32(c.r[3], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E06F4; } }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E06E4; } }
    set32(c.r[3], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E06D4; } }
    set32(c.r[3], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E06C4; } }
    set32(c.r[3], 0u + 95u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E06B4; } }
    set32(c.r[3], 0u + 94u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E06A4; } }
    set32(c.r[3], 0u + 93u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0694; } }
    set32(c.r[3], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0684; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_002E0674; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002E0668; }
    set32(c.r[3], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0658; } }
    set32(c.r[3], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0648; } }
    set32(c.r[3], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0638; } }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0628; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0618; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0608; } }
    set32(c.r[3], 0u + 90u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 8u);  goto L_002E05F8; }
    set32(c.r[3], 0u + 89u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 7u);  goto L_002E05E8; }
    set32(c.r[3], 0u + 88u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 6u);  goto L_002E05D8; }
    set32(c.r[3], 0u + 87u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E05C8; } }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E05B8; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E05A8; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0598; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0588; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0578; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0568; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0558; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0548; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0538; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002E0528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002E078C; } }
L_002E0528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0530u);  if (depth < kMaxDepth) unit_0070(c, 64u, depth + 1u); else { c.pc = 0x002E07A0u; return; } if (c.pc != 0x002E0530u) [[unlikely]] return; }
L_002E0530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0540u);  if (depth < kMaxDepth) unit_0070(c, 65u, depth + 1u); else { c.pc = 0x002E0840u; return; } if (c.pc != 0x002E0540u) [[unlikely]] return; }
L_002E0540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0550u);  if (depth < kMaxDepth) unit_0070(c, 66u, depth + 1u); else { c.pc = 0x002E0850u; return; } if (c.pc != 0x002E0550u) [[unlikely]] return; }
L_002E0550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0560u);  if (depth < kMaxDepth) unit_0070(c, 69u, depth + 1u); else { c.pc = 0x002E08A0u; return; } if (c.pc != 0x002E0560u) [[unlikely]] return; }
L_002E0560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0570u);  if (depth < kMaxDepth) unit_0070(c, 73u, depth + 1u); else { c.pc = 0x002E08E0u; return; } if (c.pc != 0x002E0570u) [[unlikely]] return; }
L_002E0570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0580u);  if (depth < kMaxDepth) unit_0070(c, 74u, depth + 1u); else { c.pc = 0x002E0900u; return; } if (c.pc != 0x002E0580u) [[unlikely]] return; }
L_002E0580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0590u);  if (depth < kMaxDepth) unit_0070(c, 76u, depth + 1u); else { c.pc = 0x002E09A0u; return; } if (c.pc != 0x002E0590u) [[unlikely]] return; }
L_002E0590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05A0u);  if (depth < kMaxDepth) unit_0070(c, 81u, depth + 1u); else { c.pc = 0x002E0A00u; return; } if (c.pc != 0x002E05A0u) [[unlikely]] return; }
L_002E05A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E05A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05B0u);  if (depth < kMaxDepth) unit_0070(c, 82u, depth + 1u); else { c.pc = 0x002E0A10u; return; } if (c.pc != 0x002E05B0u) [[unlikely]] return; }
L_002E05B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E05B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05C0u);  if (depth < kMaxDepth) unit_0070(c, 87u, depth + 1u); else { c.pc = 0x002E0A90u; return; } if (c.pc != 0x002E05C0u) [[unlikely]] return; }
L_002E05C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E05C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05D0u);  if (depth < kMaxDepth) unit_0070(c, 89u, depth + 1u); else { c.pc = 0x002E0C10u; return; } if (c.pc != 0x002E05D0u) [[unlikely]] return; }
L_002E05D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E05D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05E0u); st32((c.r[4].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 320u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002E05E0u) [[unlikely]] return; }
L_002E05E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E05E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05F0u); st32((c.r[4].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 320u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002E05F0u) [[unlikely]] return; }
L_002E05F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E05F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0600u); st32((c.r[4].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 320u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002E0600u) [[unlikely]] return; }
L_002E0600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0610u);  if (depth < kMaxDepth) unit_0070(c, 83u, depth + 1u); else { c.pc = 0x002E0A20u; return; } if (c.pc != 0x002E0610u) [[unlikely]] return; }
L_002E0610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0620u);  if (depth < kMaxDepth) unit_0070(c, 84u, depth + 1u); else { c.pc = 0x002E0A40u; return; } if (c.pc != 0x002E0620u) [[unlikely]] return; }
L_002E0620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0630u);  if (depth < kMaxDepth) unit_0070(c, 91u, depth + 1u); else { c.pc = 0x002E0C50u; return; } if (c.pc != 0x002E0630u) [[unlikely]] return; }
L_002E0630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0640u);  if (depth < kMaxDepth) unit_0070(c, 94u, depth + 1u); else { c.pc = 0x002E0E00u; return; } if (c.pc != 0x002E0640u) [[unlikely]] return; }
L_002E0640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0650u);  if (depth < kMaxDepth) unit_0070(c, 109u, depth + 1u); else { c.pc = 0x002E10A0u; return; } if (c.pc != 0x002E0650u) [[unlikely]] return; }
L_002E0650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0660u);  if (depth < kMaxDepth) unit_0070(c, 110u, depth + 1u); else { c.pc = 0x002E10B0u; return; } if (c.pc != 0x002E0660u) [[unlikely]] return; }
L_002E0660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0668:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002E0788; } }
L_002E0674:
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002E0788; } }
L_002E0684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E068Cu);  if (depth < kMaxDepth) unit_0070(c, 111u, depth + 1u); else { c.pc = 0x002E10C0u; return; } if (c.pc != 0x002E068Cu) [[unlikely]] return; }
L_002E068C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E069Cu);  if (depth < kMaxDepth) unit_0070(c, 114u, depth + 1u); else { c.pc = 0x002E1190u; return; } if (c.pc != 0x002E069Cu) [[unlikely]] return; }
L_002E069C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E06A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06ACu);  if (depth < kMaxDepth) unit_0070(c, 117u, depth + 1u); else { c.pc = 0x002E11D0u; return; } if (c.pc != 0x002E06ACu) [[unlikely]] return; }
L_002E06AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E06B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06BCu);  if (depth < kMaxDepth) unit_0070(c, 120u, depth + 1u); else { c.pc = 0x002E12A0u; return; } if (c.pc != 0x002E06BCu) [[unlikely]] return; }
L_002E06BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E06C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06CCu);  if (depth < kMaxDepth) unit_0070(c, 77u, depth + 1u); else { c.pc = 0x002E09B0u; return; } if (c.pc != 0x002E06CCu) [[unlikely]] return; }
L_002E06CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E06D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06DCu);  if (depth < kMaxDepth) unit_0070(c, 123u, depth + 1u); else { c.pc = 0x002E12E0u; return; } if (c.pc != 0x002E06DCu) [[unlikely]] return; }
L_002E06DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E06E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06ECu);  if (depth < kMaxDepth) unit_0070(c, 125u, depth + 1u); else { c.pc = 0x002E1350u; return; } if (c.pc != 0x002E06ECu) [[unlikely]] return; }
L_002E06EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E06F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06FCu);  if (depth < kMaxDepth) unit_0070(c, 126u, depth + 1u); else { c.pc = 0x002E1390u; return; } if (c.pc != 0x002E06FCu) [[unlikely]] return; }
L_002E06FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E070Cu);  if (depth < kMaxDepth) unit_0070(c, 130u, depth + 1u); else { c.pc = 0x002E1410u; return; } if (c.pc != 0x002E070Cu) [[unlikely]] return; }
L_002E070C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E0714:
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002E0788; } }
L_002E0720:
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002E0788; } }
L_002E072C:
    set32(c.r[3], 0u - 257u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002E0788; } }
L_002E073C:
    set32(c.r[3], 0u - 513u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002E0788; } }
L_002E074C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0754u);  if (depth < kMaxDepth) unit_0070(c, 135u, depth + 1u); else { c.pc = 0x002E14C0u; return; } if (c.pc != 0x002E0754u) [[unlikely]] return; }
L_002E0754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E075C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0764u);  if (depth < kMaxDepth) unit_0070(c, 131u, depth + 1u); else { c.pc = 0x002E1430u; return; } if (c.pc != 0x002E0764u) [[unlikely]] return; }
L_002E0764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0788; } }
L_002E076C:
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 260u), c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002E0788; } }
L_002E077C:
    set32(c.r[2], ld32((c.r[4].w[0] + 260u)));
    c.budget -= 1;
L_002E0780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0788u); st32((c.r[4].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0070(c, 131u, depth + 1u); else { c.pc = 0x002E1430u; return; } if (c.pc != 0x002E0788u) [[unlikely]] return; }
L_002E0788:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002E078C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E07A0:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 80u)));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002E07E4; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
L_002E07E4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002E07F0; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_002E07F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E0834; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 560u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[7].w[0] + 112u);  if (t) { goto L_002E080C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002E0810; } }
L_002E080C:
    set32(c.r[3], ld32((c.r[6].w[0] + 52u)));
    c.budget -= 1;
L_002E0810:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E0834; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 52u)));  goto L_002E0824; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0824:
    set32(c.r[3], ld32((c.r[3].w[0] + 244u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 4;
L_002E0834:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0840:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_002E0850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002E0880; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E087Cu); set32(c.r[5], c.r[5].w[0] + 11056u);  if (depth < kMaxDepth) unit_000D(c, 334u, depth + 1u); else { c.pc = 0x00157310u; return; } if (c.pc != 0x002E087Cu) [[unlikely]] return; }
L_002E087C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E0880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002E0888u) [[unlikely]] return; }
L_002E0888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E08A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E08B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002E08B8u) [[unlikely]] return; }
L_002E08B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E08C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002E08C8u) [[unlikely]] return; }
L_002E08C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E08D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002E08D0u) [[unlikely]] return; }
L_002E08D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E08E0:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_002E0900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0920u); st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 132u, depth + 1u); else { c.pc = 0x002D9DE0u; return; } if (c.pc != 0x002E0920u) [[unlikely]] return; }
L_002E0920:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002E0954; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
L_002E0954:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_002E0964; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0964:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002E0980; }
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
L_002E0980:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E09A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6FF0u | kUnwind; return; } [[clang::musttail]] return unit_006D(c, 266u, depth); }
L_002E09B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E09D0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002E09D0u) [[unlikely]] return; }
L_002E09D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E09D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 222u, depth + 1u); else { c.pc = 0x002D69A0u; return; } if (c.pc != 0x002E09D8u) [[unlikely]] return; }
L_002E09D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E09E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002E09E4u) [[unlikely]] return; }
L_002E09E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0A20:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 6;
    { st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6790u | kUnwind; return; } [[clang::musttail]] return unit_006D(c, 220u, depth); }
L_002E0A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0A54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 221u, depth + 1u); else { c.pc = 0x002D6860u; return; } if (c.pc != 0x002E0A54u) [[unlikely]] return; }
L_002E0A54:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 65u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0A70u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002E0A70u) [[unlikely]] return; }
L_002E0A70:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 4097u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E0A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E0AD4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002E0AD8; } }
L_002E0AD4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0AD8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002E0AE4; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_002E0AE4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002E0BFC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B24u); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_006E(c, 5u, depth + 1u); else { c.pc = 0x002D8110u; return; } if (c.pc != 0x002E0B24u) [[unlikely]] return; }
L_002E0B24:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[3].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[3].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[3].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[3].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[3].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[3].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[3].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[3].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[3].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[3].w[0] + 76u), c.f[0]);
    st32((c.r[3].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[3].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[3].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[3].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[3].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[3].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[3].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[3].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[3].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[3].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[3].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[3].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[3].w[0] + 140u), c.f[0]);
    st32((c.r[3].w[0] + 172u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 54;
L_002E0BFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E0C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C28u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002E0C28u) [[unlikely]] return; }
L_002E0C28:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    st32((c.r[16].w[0] + 260u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E0C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C68u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002E0C68u) [[unlikely]] return; }
L_002E0C68:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E0CC0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002E0CC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E0CCC; }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002E0CCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002E0CE4; }
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_002E0CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CECu);  if (depth < kMaxDepth) unit_006D(c, 222u, depth + 1u); else { c.pc = 0x002D69A0u; return; } if (c.pc != 0x002E0CECu) [[unlikely]] return; }
L_002E0CEC:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 232u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[5].w[0] + 144u);  goto L_002E0D00; }
    set32(c.r[4], c.r[5].w[0] + 272u);
    c.budget -= 1;
L_002E0D00:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[5].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[5].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[5].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0] + 140u), c.f[0]);
    st32((c.r[5].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 232u)));
    c.budget -= 30;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[5].w[0] + 80u);  goto L_002E0D7C; }
    set32(c.r[4], c.r[5].w[0] + 256u);
    c.budget -= 1;
L_002E0D7C:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[5].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[5].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0] + 76u), c.f[0]);
    st32((c.r[5].w[0] + 108u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E0E00:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E28u); st32((c.r[4].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002E0E28u) [[unlikely]] return; }
L_002E0E28:
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[17].w[0] + 96u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 1104u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002E107C; }
    set32(c.r[2], ld32((c.r[5].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[16], c.r[2].w[0] + 896u);
    set32(c.r[2], ld32((c.r[3].w[0] + 232u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 144u);  goto L_002E0E64; }
    set32(c.r[2], c.r[3].w[0] + 272u);
    c.budget -= 1;
L_002E0E64:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[17].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 236u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[18], ld32((c.r[19].w[0] + 1320u)));
    c.budget -= 13;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002E0EA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0EA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002E0EA0u) [[unlikely]] return; }
L_002E0EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[18].w[0] + 352u);  if (t) { goto L_002E0EB4; } }
L_002E0EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0EB0u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002E0EB0u) [[unlikely]] return; }
L_002E0EB0:
    set32(c.r[5], c.r[19].w[0] + 352u);
    c.budget -= 1;
L_002E0EB4:
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0EC0u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002E0EC0u) [[unlikely]] return; }
L_002E0EC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 232u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 144u);  goto L_002E0ED4; }
    set32(c.r[5], c.r[3].w[0] + 272u);
    c.budget -= 1;
L_002E0ED4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] + 80u);  goto L_002E0EE0; }
    set32(c.r[4], c.r[3].w[0] + 256u);
    c.budget -= 1;
L_002E0EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0EE8u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002E0EE8u) [[unlikely]] return; }
L_002E0EE8:
    st32((c.r[17].w[0] + 208u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0EF8u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002E0EF8u) [[unlikely]] return; }
L_002E0EF8:
    st32((c.r[17].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 232u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 144u);  goto L_002E0F10; }
    set32(c.r[6], c.r[3].w[0] + 272u);
    c.budget -= 1;
L_002E0F10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 80u);  goto L_002E0F1C; }
    set32(c.r[5], c.r[3].w[0] + 256u);
    c.budget -= 1;
L_002E0F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F24u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002E0F24u) [[unlikely]] return; }
L_002E0F24:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F3Cu); st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002E0F3Cu) [[unlikely]] return; }
L_002E0F3C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[3]);
    set32(c.r[18], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002E0F68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002E0F60u) [[unlikely]] return; }
L_002E0F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[16].w[0] + 352u);  if (t) { goto L_002E0F74; } }
L_002E0F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F70u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002E0F70u) [[unlikely]] return; }
L_002E0F70:
    set32(c.r[5], c.r[18].w[0] + 352u);
    c.budget -= 1;
L_002E0F74:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F80u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x002E0F80u) [[unlikely]] return; }
L_002E0F80:
    set32(c.r[4], c.r[17].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F8Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x002E0F8Cu) [[unlikely]] return; }
L_002E0F8C:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F98u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x002E0F98u) [[unlikely]] return; }
L_002E0F98:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0FA4u); set32(c.r[4], ld32((c.r[2].w[0] + 116u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002E0FA4u) [[unlikely]] return; }
L_002E0FA4:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 180u)));  goto L_002E1028; }
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].sd[0] < 0) { c.r[4].d[0] = c.r[3].d[0] & 65535ull;  goto L_002E0FD4; }
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull | 65535ull;  if (t) { goto L_002E0FE0; } }
L_002E0FD4:
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 3;
L_002E0FE0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002E0FF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_002E1004; } }
L_002E0FF8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E1004; } }
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_002E1004:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_002E101C; }
    set32(c.r[3], c.r[4].w[0] - 32768u);
    set32(c.r[3], c.r[3].w[0] - 32768u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 196u), c.r[3].w[0]);  if (t) { goto L_002E1078; } }
L_002E101C:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 196u), c.r[3].w[0]);  if (t) { goto L_002E1078; } }
L_002E1028:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { c.r[4].d[0] = c.r[3].d[0] & 65535ull;  goto L_002E1044; }
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull | 65535ull;  if (t) { goto L_002E1050; } }
L_002E1044:
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 3;
L_002E1050:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002E1068; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_002E1074; } }
L_002E1068:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st32((c.r[17].w[0] + 196u), c.r[4].w[0]);  goto L_002E1078; }
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_002E1074:
    st32((c.r[17].w[0] + 196u), c.r[4].w[0]);
    c.budget -= 1;
L_002E1078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002E107C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002E10A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E10B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E10C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    st32((c.r[4].w[0] + 328u), c.f[0]);
    st32((c.r[4].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E10F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[2].w[0] + 140u)));  if (t) { goto L_002E10FC; } }
L_002E10F8:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E10FC:
    c.f[0] = ld32((c.r[7].w[0] + 176u));
    set32(c.r[6], 0u + 1u);
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[7].w[0] + 120u), 0u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[7].w[0] + 124u), 0u);
    st32((c.r[7].w[0] + 128u), 0u);
    st32((c.r[7].w[0] + 132u), 0u);
    st32((c.r[7].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 136u), c.f[0]);
    st32((c.r[7].w[0] + 140u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 128u), c.f[1]);
    st32((c.r[7].w[0] + 132u), 0u);
    c.f[0] = ld32((c.r[7].w[0] + 180u));
    st32((c.r[7].w[0] + 144u), 0u);
    st32((c.r[7].w[0] + 148u), 0u);
    st32((c.r[7].w[0] + 152u), 0u);
    st32((c.r[7].w[0] + 156u), 0u);
    st32((c.r[7].w[0] + 144u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 160u), c.f[0]);
    st32((c.r[7].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 152u), c.f[1]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1168u); st32((c.r[7].w[0] + 156u), 0u);  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002E1168u) [[unlikely]] return; }
L_002E1168:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1174u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002E1174u) [[unlikely]] return; }
L_002E1174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002E11ACu) [[unlikely]] return; }
L_002E11AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11B8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002E11B8u) [[unlikely]] return; }
L_002E11B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E11D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1025u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E1208; } }
    c.f[0] = ld32((c.r[16].w[0] + 328u));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.budget -= 2;
L_002E1208:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002E1218; }
    set32(c.r[3], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 1;
L_002E1218:
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 176u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[28].w[0] - 32272u));
    set32(c.r[5], 0u + 10u);
    st32((c.r[3].w[0] + 120u), 0u);
    st32((c.r[3].w[0] + 124u), 0u);
    st32((c.r[3].w[0] + 128u), 0u);
    st32((c.r[3].w[0] + 132u), 0u);
    st32((c.r[3].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 136u), c.f[0]);
    st32((c.r[3].w[0] + 140u), c.f[1]);
    st32((c.r[3].w[0] + 128u), c.f[2]);
    st32((c.r[3].w[0] + 132u), 0u);
    c.f[1] = ld32((c.r[3].w[0] + 172u));
    c.f[0] = ld32((c.r[3].w[0] + 180u));
    st32((c.r[3].w[0] + 144u), 0u);
    st32((c.r[3].w[0] + 148u), 0u);
    st32((c.r[3].w[0] + 152u), 0u);
    st32((c.r[3].w[0] + 156u), 0u);
    st32((c.r[3].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 160u), c.f[0]);
    st32((c.r[3].w[0] + 164u), c.f[1]);
    st32((c.r[3].w[0] + 152u), c.f[2]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1284u); st32((c.r[3].w[0] + 156u), 0u);  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002E1284u) [[unlikely]] return; }
L_002E1284:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1290u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002E1290u) [[unlikely]] return; }
L_002E1290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E12A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002E12BCu) [[unlikely]] return; }
L_002E12BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12C8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x002E12C8u) [[unlikely]] return; }
L_002E12C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E12E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E130Cu); st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 283u, depth + 1u); else { c.pc = 0x002663E0u; return; } if (c.pc != 0x002E130Cu) [[unlikely]] return; }
L_002E130C:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[16].w[0] + 312u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    st32((c.r[16].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 244u)));
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1350:
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 304u)));
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 308u)));
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 312u)));
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 316u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 124u), c.r[3].w[0]);  c.pc = t; return; }
L_002E1390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E13C8u) [[unlikely]] return; }
L_002E13C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_002E13E4; }
    set32(c.r[5], ld32((c.r[17].w[0] + 1296u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x002E13E0u) [[unlikely]] return; }
L_002E13E0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002E13E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13ECu);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002E13ECu) [[unlikely]] return; }
L_002E13EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 244u)));
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1410:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_002E1430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E1454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002E1458; } }
L_002E1454:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E1458:
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 544u)));  goto L_002E146C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E1488; } }
L_002E146C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 912u)));  goto L_002E147C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E1488; } }
L_002E147C:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 516u)));
    c.budget -= 3;
L_002E1488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1490u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x002E1490u) [[unlikely]] return; }
L_002E1490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1498u); set32(c.r[4], ld32((c.r[17].w[0] + 144u)));  if (depth < kMaxDepth) unit_0051(c, 290u, depth + 1u); else { c.pc = 0x00266540u; return; } if (c.pc != 0x002E1498u) [[unlikely]] return; }
L_002E1498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 132u, depth + 1u); else { c.pc = 0x002D9DE0u; return; } if (c.pc != 0x002E14A0u) [[unlikely]] return; }
L_002E14A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E14C0:
    c.budget -= 2;
    { set32(c.r[4], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00266750u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 301u, depth); }
L_002E14D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E1534; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28672u);
    set32(c.r[2], c.r[2].w[0] + 28728u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002E1510u) [[unlikely]] return; }
L_002E1510:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E151Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002E151Cu) [[unlikely]] return; }
L_002E151C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002E1538; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1534u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002E1534u) [[unlikely]] return; }
L_002E1534:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E1538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1550:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E14D0u | kUnwind; return; } goto L_002E14D0; }
L_002E1560:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0340u | kUnwind; return; } goto L_002E0340; }
L_002E1570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1584u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 65u, depth + 1u); else { c.pc = 0x00290B70u; return; } if (c.pc != 0x002E1584u) [[unlikely]] return; }
L_002E1584:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 28752u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E15B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E15F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 28752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E15E0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 67u, depth + 1u); else { c.pc = 0x00290BE0u; return; } if (c.pc != 0x002E15E0u) [[unlikely]] return; }
L_002E15E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002E15FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E15F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002E15F8u) [[unlikely]] return; }
L_002E15F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E15FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1610:
    set32(c.r[29], c.r[29].w[0] - 128u);
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
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1650u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x002E1650u) [[unlikely]] return; }
L_002E1650:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E165Cu); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001A8E80u; return; } if (c.pc != 0x002E165Cu) [[unlikely]] return; }
L_002E165C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1690; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1680u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0070(c, 152u, depth + 1u); else { c.pc = 0x002E16D0u; return; } if (c.pc != 0x002E1680u) [[unlikely]] return; }
L_002E1680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E16A0; } }
L_002E1690:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E169Cu); set32(c.r[4], c.r[4].w[0] + 28192u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002E169Cu) [[unlikely]] return; }
L_002E169C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E16A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002E16D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E170Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E170Cu) [[unlikely]] return; }
L_002E170C:
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E172Cu); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E172Cu) [[unlikely]] return; }
L_002E172C:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1744u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x002E1744u) [[unlikely]] return; }
L_002E1744:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1754u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 80u, depth + 1u); else { c.pc = 0x00290D90u; return; } if (c.pc != 0x002E1754u) [[unlikely]] return; }
L_002E1754:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 1);  goto L_002E176C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E1774; } }
L_002E176C:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002E1774:
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1780u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x002E1780u) [[unlikely]] return; }
L_002E1780:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1790u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 80u, depth + 1u); else { c.pc = 0x00290D90u; return; } if (c.pc != 0x002E1790u) [[unlikely]] return; }
L_002E1790:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 5);  goto L_002E17A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E17B0; } }
L_002E17A8:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002E17B0:
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17BCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x002E17BCu) [[unlikely]] return; }
L_002E17BC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17CCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 80u, depth + 1u); else { c.pc = 0x00290D90u; return; } if (c.pc != 0x002E17CCu) [[unlikely]] return; }
L_002E17CC:
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 3);  goto L_002E17E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E17EC; } }
L_002E17E4:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002E17EC:
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17F8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002E17F8u) [[unlikely]] return; }
L_002E17F8:
    st32((c.r[20].w[0] + 96u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1804u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1804u) [[unlikely]] return; }
L_002E1804:
    st16((c.r[20].w[0] + 100u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E181Cu); st32((c.r[20].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E181Cu) [[unlikely]] return; }
L_002E181C:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1834u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1834u) [[unlikely]] return; }
L_002E1834:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E184Cu); st32((c.r[20].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E184Cu) [[unlikely]] return; }
L_002E184C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002E1858; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002E1858:
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E186Cu); st32((c.r[20].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E186Cu) [[unlikely]] return; }
L_002E186C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002E1878; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_002E1878:
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1894u); st32((c.r[20].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E1894u) [[unlikely]] return; }
L_002E1894:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002E18A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18B0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E18B0u) [[unlikely]] return; }
L_002E18B0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E18A8u | kUnwind; return; } goto L_002E18A8; } }
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E18DCu) [[unlikely]] return; }
L_002E18DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18F4u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002E18F4u) [[unlikely]] return; }
L_002E18F4:
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1900u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002E1900u) [[unlikely]] return; }
L_002E1900:
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E190Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E190Cu) [[unlikely]] return; }
L_002E190C:
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1920u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E1920u) [[unlikely]] return; }
L_002E1920:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1938u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1938u) [[unlikely]] return; }
L_002E1938:
    st32((c.r[20].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1944u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1944u) [[unlikely]] return; }
L_002E1944:
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1950u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1950u) [[unlikely]] return; }
L_002E1950:
    st32((c.r[20].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E195Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002E195Cu) [[unlikely]] return; }
L_002E195C:
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1968u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1968u) [[unlikely]] return; }
L_002E1968:
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1974u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1974u) [[unlikely]] return; }
L_002E1974:
    st32((c.r[20].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1980u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1980u) [[unlikely]] return; }
L_002E1980:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1990u); set32(c.r[4], c.r[4].w[0] + 28240u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002E1990u) [[unlikely]] return; }
L_002E1990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002E19C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 65u, depth + 1u); else { c.pc = 0x00290B70u; return; } if (c.pc != 0x002E19D4u) [[unlikely]] return; }
L_002E19D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 28768u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E1AA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 28768u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_002E1A54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A4Cu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002E1A4Cu) [[unlikely]] return; }
L_002E1A4C:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 2;
L_002E1A54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  goto L_002E1A6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A64u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002E1A64u) [[unlikely]] return; }
L_002E1A64:
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 2;
L_002E1A6C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002E1A84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A7Cu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002E1A7Cu) [[unlikely]] return; }
L_002E1A7C:
    st32((c.r[17].w[0] + 44u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002E1A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 67u, depth + 1u); else { c.pc = 0x00290BE0u; return; } if (c.pc != 0x002E1A8Cu) [[unlikely]] return; }
L_002E1A8C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002E1AA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002E1AA4u) [[unlikely]] return; }
L_002E1AA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E1AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1AC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AF8u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x002E1AF8u) [[unlikely]] return; }
L_002E1AF8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B04u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001A8E80u; return; } if (c.pc != 0x002E1B04u) [[unlikely]] return; }
L_002E1B04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1B34; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B24u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0070(c, 196u, depth + 1u); else { c.pc = 0x002E1B70u; return; } if (c.pc != 0x002E1B24u) [[unlikely]] return; }
L_002E1B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1B34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E1B44; } }
L_002E1B34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B40u); set32(c.r[4], c.r[4].w[0] + 28288u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002E1B40u) [[unlikely]] return; }
L_002E1B40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E1B44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002E1B70:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BA8u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E1BA8u) [[unlikely]] return; }
L_002E1BA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BC8u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E1BC8u) [[unlikely]] return; }
L_002E1BC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BF0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002E1BF0u) [[unlikely]] return; }
L_002E1BF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_002E1C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C00u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002E1C00u) [[unlikely]] return; }
L_002E1C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_002E1C0C; } }
L_002E1C08:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_002E1C0C:
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E1C1Cu) [[unlikely]] return; }
L_002E1C1C:
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002E1C78; } }
L_002E1C34:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C4Cu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E1C4Cu) [[unlikely]] return; }
L_002E1C4C:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C64u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1C64u) [[unlikely]] return; }
L_002E1C64:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1C70u) [[unlikely]] return; }
L_002E1C70:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_002E1C78:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1C34u | kUnwind; return; } goto L_002E1C34; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CA0u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002E1CA0u) [[unlikely]] return; }
L_002E1CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_002E1CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CB0u); set32(c.r[4], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002E1CB0u) [[unlikely]] return; }
L_002E1CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E1CBC; } }
L_002E1CB8:
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 1;
L_002E1CBC:
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CCCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E1CCCu) [[unlikely]] return; }
L_002E1CCC:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002E1D70; } }
L_002E1CE4:
    set32(c.r[3], c.r[17].w[0] << 5);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CFCu); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E1CFCu) [[unlikely]] return; }
L_002E1CFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D14u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002E1D14u) [[unlikely]] return; }
L_002E1D14:
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002E1D20u) [[unlikely]] return; }
L_002E1D20:
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002E1D2Cu) [[unlikely]] return; }
L_002E1D2C:
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002E1D38u) [[unlikely]] return; }
L_002E1D38:
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002E1D44u) [[unlikely]] return; }
L_002E1D44:
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1D50u) [[unlikely]] return; }
L_002E1D50:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1D5Cu) [[unlikely]] return; }
L_002E1D5C:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1D68u) [[unlikely]] return; }
L_002E1D68:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002E1D70:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1CE4u | kUnwind; return; } goto L_002E1CE4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D98u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002E1D98u) [[unlikely]] return; }
L_002E1D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_002E1DB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DA8u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002E1DA8u) [[unlikely]] return; }
L_002E1DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_002E1DB4; } }
L_002E1DB0:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_002E1DB4:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E1DC4u) [[unlikely]] return; }
L_002E1DC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002E1E20; } }
L_002E1DDC:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DF4u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002E1DF4u) [[unlikely]] return; }
L_002E1DF4:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E0Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1E0Cu) [[unlikely]] return; }
L_002E1E0C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002E1E18u) [[unlikely]] return; }
L_002E1E18:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002E1E20:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1DDCu | kUnwind; return; } goto L_002E1DDC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E3Cu); set32(c.r[4], c.r[4].w[0] + 28336u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002E1E3Cu) [[unlikely]] return; }
L_002E1E3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002E1E60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    st32((c.r[5].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[5].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[5].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[5].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[5].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    st32((c.r[5].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    st32((c.r[5].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    st32((c.r[5].w[0] + 160u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 108u)));
    st16((c.r[5].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 110u)));
    st16((c.r[5].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 112u)));
    st16((c.r[5].w[0] + 168u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 114u)));
    st16((c.r[5].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 116u)));
    st16((c.r[5].w[0] + 172u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 118u)));
    st16((c.r[5].w[0] + 174u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 120u)));
    st16((c.r[5].w[0] + 176u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 122u)));
    st16((c.r[5].w[0] + 178u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 124u)));
    st16((c.r[5].w[0] + 180u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));
    st16((c.r[5].w[0] + 182u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 128u)));
    st16((c.r[5].w[0] + 184u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 130u)));
    st16((c.r[5].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 132u)));
    st16((c.r[5].w[0] + 188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 134u)));
    st16((c.r[5].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 136u)));
    st16((c.r[5].w[0] + 192u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 138u)));
    st16((c.r[5].w[0] + 194u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    st32((c.r[5].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    st32((c.r[5].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    st32((c.r[5].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    st32((c.r[5].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    st32((c.r[5].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    st32((c.r[5].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    st32((c.r[5].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 184u)));
    st32((c.r[5].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    st32((c.r[5].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    st32((c.r[5].w[0] + 232u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 196u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 200u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 216u));
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 220u));
    st32((c.r[5].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 240u)));
    st32((c.r[5].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 244u)));
    st32((c.r[5].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 248u)));
    st32((c.r[5].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 252u)));
    st32((c.r[5].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 256u)));
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 260u)));
    st32((c.r[5].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    st32((c.r[5].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 268u)));
    st32((c.r[5].w[0] + 92u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[5].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[5].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 296u));
    st32((c.r[5].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 300u));
    st32((c.r[5].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 304u));
    st32((c.r[5].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 308u));
    st32((c.r[5].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 312u));
    st32((c.r[5].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    st32((c.r[5].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    st32((c.r[5].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 436u));
    st32((c.r[5].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 440u));
    st32((c.r[5].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 444u));
    st32((c.r[5].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 448u));
    st32((c.r[5].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 452u));
    st32((c.r[5].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 456u));
    st32((c.r[5].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 460u));
    st32((c.r[5].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1100u)));
    st32((c.r[5].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1296u)));
    st32((c.r[5].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1300u)));
    st32((c.r[5].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1304u)));
    st32((c.r[5].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1376u)));
    st32((c.r[5].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1380u)));
    st32((c.r[5].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 420u)));
    c.budget -= 157;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 272u);  if (t) { goto L_002E20E4; } }
    set32(c.r[4], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E20E0u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002E20E0u) [[unlikely]] return; }
L_002E20E0:
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_002E20E4:
    st32((c.r[17].w[0] + 236u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 416u)));  if (t) { goto L_002E2114; } }
L_002E20F0:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 236u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
L_002E2114:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E20F0u | kUnwind; return; } goto L_002E20F0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 532u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 240u), 0u);  if (t) { goto L_002E214C; } }
L_002E2128:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
L_002E214C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2128u | kUnwind; return; } goto L_002E2128; }
    set32(c.r[3], c.r[16].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E2180:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21B0u); c.r[17].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E21B0u) [[unlikely]] return; }
L_002E21B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[19].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 132u)));
    st32((c.r[19].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    st32((c.r[19].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    st32((c.r[19].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 144u)));
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 148u)));
    st32((c.r[19].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    st32((c.r[19].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 156u)));
    st32((c.r[19].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 160u)));
    st32((c.r[19].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    st16((c.r[19].w[0] + 108u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    st16((c.r[19].w[0] + 110u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 168u)));
    st16((c.r[19].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 170u)));
    st16((c.r[19].w[0] + 114u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 172u)));
    st16((c.r[19].w[0] + 116u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 174u)));
    st16((c.r[19].w[0] + 118u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 176u)));
    st16((c.r[19].w[0] + 120u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 178u)));
    st16((c.r[19].w[0] + 122u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 180u)));
    st16((c.r[19].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 182u)));
    st16((c.r[19].w[0] + 126u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 184u)));
    st16((c.r[19].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 186u)));
    st16((c.r[19].w[0] + 130u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 188u)));
    st16((c.r[19].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 190u)));
    st16((c.r[19].w[0] + 134u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 192u)));
    st16((c.r[19].w[0] + 136u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 194u)));
    st16((c.r[19].w[0] + 138u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 196u)));
    st32((c.r[19].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 200u)));
    st32((c.r[19].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 204u)));
    st32((c.r[19].w[0] + 156u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 208u)));
    st32((c.r[19].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    st32((c.r[19].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 216u)));
    st32((c.r[19].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 220u)));
    st32((c.r[19].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 224u)));
    st32((c.r[19].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 228u)));
    st32((c.r[19].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 232u)));
    st32((c.r[19].w[0] + 160u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[19].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[19].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[19].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[19].w[0] + 204u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[19].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[19].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[19].w[0] + 220u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    st32((c.r[19].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    st32((c.r[19].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    st32((c.r[19].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    st32((c.r[19].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    st32((c.r[19].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[19].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[19].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    st32((c.r[19].w[0] + 268u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    st32((c.r[19].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    st32((c.r[19].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    st32((c.r[19].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 108u));
    st32((c.r[19].w[0] + 300u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    st32((c.r[19].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    st32((c.r[19].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    st32((c.r[19].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 124u));
    st32((c.r[19].w[0] + 316u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[19].w[0] + 176u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[19].w[0] + 432u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[19].w[0] + 436u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[19].w[0] + 440u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[19].w[0] + 444u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    st32((c.r[19].w[0] + 448u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[19].w[0] + 452u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[19].w[0] + 456u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[19].w[0] + 460u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 244u)));
    st32((c.r[19].w[0] + 1100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    st32((c.r[19].w[0] + 1296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 252u)));
    st32((c.r[19].w[0] + 1300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[19].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 260u)));
    st32((c.r[19].w[0] + 1376u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 264u)));
    st32((c.r[19].w[0] + 1380u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 420u)));
    c.budget -= 156;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 272u);  if (t) { goto L_002E2430; } }
    set32(c.r[5], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E242Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002E242Cu) [[unlikely]] return; }
L_002E242C:
    set32(c.r[17], c.r[17].w[0] + 64u);
    c.budget -= 1;
L_002E2430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2438u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002D5D30u; return; } if (c.pc != 0x002E2438u) [[unlikely]] return; }
L_002E2438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E2458; } }
L_002E2440:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2454u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002E2454u) [[unlikely]] return; }
L_002E2454:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002E2458:
    set32(c.r[2], ld32((c.r[18].w[0] + 236u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2440u | kUnwind; return; } goto L_002E2440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2470u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 170u, depth + 1u); else { c.pc = 0x002D5E40u; return; } if (c.pc != 0x002E2470u) [[unlikely]] return; }
L_002E2470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E2490; } }
L_002E2478:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E248Cu); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x002E248Cu) [[unlikely]] return; }
L_002E248C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002E2490:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2478u | kUnwind; return; } goto L_002E2478; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E24B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E24B0u) [[unlikely]] return; }
L_002E24B0:
    set32(c.r[5], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[3], c.r[17].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[19].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[19].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E2500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E2564; } }
L_002E2528:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002E2564; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 84u)));  goto L_002E2558; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2554u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2554u) [[unlikely]] return; }
L_002E2554:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 1;
L_002E2558:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_002E2564:
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2528u | kUnwind; return; } goto L_002E2528; }
L_002E2574:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2584u); set32(c.r[6], 0u + 52u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002E2584u) [[unlikely]] return; }
L_002E2584:
    st32((c.r[28].w[0] - 30264u), 0u);
    st32((c.r[28].w[0] - 30308u), 0u);
    st32((c.r[28].w[0] - 30304u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E25B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2714; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E25E0u);  if (depth < kMaxDepth) unit_0070(c, 241u, depth + 1u); else { c.pc = 0x002E2500u; return; } if (c.pc != 0x002E25E0u) [[unlikely]] return; }
L_002E25E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002E2718; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E26FC; } }
L_002E25F8:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[4].w[0] >> 24);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002E26FC; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E26F8; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E26F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 516u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E26F8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E264Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 96u, depth + 1u); else { c.pc = 0x003C4EF0u; return; } if (c.pc != 0x002E264Cu) [[unlikely]] return; }
L_002E264C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E26F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E265Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002E265Cu) [[unlikely]] return; }
L_002E265C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 84u)));  goto L_002E2678; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2674u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x002E2674u) [[unlikely]] return; }
L_002E2674:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 1;
L_002E2678:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E26F8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E26ACu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x002E26ACu) [[unlikely]] return; }
L_002E26AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E26F8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E26F8; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E26F8; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 6;
L_002E26F8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E26FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E25F8u | kUnwind; return; } goto L_002E25F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2714u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 256u, depth + 1u); else { c.pc = 0x002E27E0u; return; } if (c.pc != 0x002E2714u) [[unlikely]] return; }
L_002E2714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002E2718:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E2730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E27C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E27B0; } }
L_002E2758:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002E27B0; }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E27AC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 84u)));  goto L_002E27A4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E27A0u) [[unlikely]] return; }
L_002E27A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 1;
L_002E27A4:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 2;
L_002E27AC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E27B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2758u | kUnwind; return; } goto L_002E2758; }
L_002E27C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E27E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2810u);  if (depth < kMaxDepth) unit_0070(c, 253u, depth + 1u); else { c.pc = 0x002E2730u; return; } if (c.pc != 0x002E2810u) [[unlikely]] return; }
L_002E2810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E28C0; } }
L_002E2818:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002E28C0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E28BC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2854u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 96u, depth + 1u); else { c.pc = 0x003C4EF0u; return; } if (c.pc != 0x002E2854u) [[unlikely]] return; }
L_002E2854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E28BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2864u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002E2864u) [[unlikely]] return; }
L_002E2864:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 84u)));  goto L_002E2888; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2880u);  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x002E2880u) [[unlikely]] return; }
L_002E2880:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 2;
L_002E2888:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E28BC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E28BCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x002E28BCu) [[unlikely]] return; }
L_002E28BC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E28C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2818u | kUnwind; return; } goto L_002E2818; }
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[28].w[0] - 30264u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 168u)));
    st32((c.r[28].w[0] - 30308u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 172u)));
    st32((c.r[28].w[0] - 30304u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], ld32((c.r[6].w[0] + 512u)));  if (t) { goto L_002E2930; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002E2934; }
    set32(c.r[3], ld32((c.r[6].w[0] + 516u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002E2928; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2920u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0052(c, 86u, depth + 1u); else { c.pc = 0x00268C70u; return; } if (c.pc != 0x002E2920u) [[unlikely]] return; }
L_002E2920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2930; } }
L_002E2928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2930u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0052(c, 86u, depth + 1u); else { c.pc = 0x00268C70u; return; } if (c.pc != 0x002E2930u) [[unlikely]] return; }
L_002E2930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002E2934:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E2950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
L_002E2964:
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E29E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E29D4; } }
L_002E2978:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002E29D4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E29D0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 84u)));  goto L_002E29C8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E29C4u) [[unlikely]] return; }
L_002E29C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 1;
L_002E29C8:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 2;
L_002E29D0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E29D4:
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2978u | kUnwind; return; } goto L_002E2978; }
L_002E29E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E2A00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2B74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A30u);  if (depth < kMaxDepth) unit_0070(c, 265u, depth + 1u); else { c.pc = 0x002E2950u; return; } if (c.pc != 0x002E2A30u) [[unlikely]] return; }
L_002E2A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E2B04; } }
L_002E2A38:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[6].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002E2B04; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 516u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E2B00; } }
    set32(c.r[3], c.r[6].w[0] >> 16);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  goto L_002E2A90; }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E2B00; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002E2A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A98u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 96u, depth + 1u); else { c.pc = 0x003C4EF0u; return; } if (c.pc != 0x002E2A98u) [[unlikely]] return; }
L_002E2A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2AA8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002E2AA8u) [[unlikely]] return; }
L_002E2AA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 84u)));  goto L_002E2ACC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2AC4u);  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x002E2AC4u) [[unlikely]] return; }
L_002E2AC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 2;
L_002E2ACC:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E2B00; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B00u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x002E2B00u) [[unlikely]] return; }
L_002E2B00:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E2B04:
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2A38u | kUnwind; return; } goto L_002E2A38; }
    set32(c.r[4], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[28].w[0] - 30264u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    st32((c.r[28].w[0] - 30308u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 184u)));
    st32((c.r[28].w[0] - 30304u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], ld32((c.r[6].w[0] + 512u)));  if (t) { goto L_002E2B74; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002E2B78; }
    set32(c.r[3], ld32((c.r[6].w[0] + 516u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002E2B6C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0052(c, 86u, depth + 1u); else { c.pc = 0x00268C70u; return; } if (c.pc != 0x002E2B64u) [[unlikely]] return; }
L_002E2B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2B74; } }
L_002E2B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B74u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0052(c, 86u, depth + 1u); else { c.pc = 0x00268C70u; return; } if (c.pc != 0x002E2B74u) [[unlikely]] return; }
L_002E2B74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002E2B78:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E2B90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2C24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E2C14; } }
L_002E2BB8:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002E2C14; }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E2C10; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 84u)));  goto L_002E2C08; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2C04u) [[unlikely]] return; }
L_002E2C04:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 1;
L_002E2C08:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 2;
L_002E2C10:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E2C14:
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2BB8u | kUnwind; return; } goto L_002E2BB8; }
L_002E2C24:
    st32((c.r[18].w[0] + 200u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E2C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2D60; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002E2D64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C7Cu);  if (depth < kMaxDepth) unit_0070(c, 278u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x002E2C7Cu) [[unlikely]] return; }
L_002E2C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E2D50; } }
L_002E2C84:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[5].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002E2D50; }
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  goto L_002E2CC8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E2D4C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002E2CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CD0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 96u, depth + 1u); else { c.pc = 0x003C4EF0u; return; } if (c.pc != 0x002E2CD0u) [[unlikely]] return; }
L_002E2CD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CE0u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002E2CE0u) [[unlikely]] return; }
L_002E2CE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 84u)));  goto L_002E2D04; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CFCu);  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x002E2CFCu) [[unlikely]] return; }
L_002E2CFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 2;
L_002E2D04:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E2D4C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D38u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x002E2D38u) [[unlikely]] return; }
L_002E2D38:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 200u), c.r[3].w[0]);  if (t) { goto L_002E2D60; } }
L_002E2D4C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E2D50:
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2C84u | kUnwind; return; } goto L_002E2C84; }
L_002E2D60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002E2D64:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E2D80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2F20; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[3].w[0] + 74u));  if (t) { goto L_002E2E64; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  goto L_002E2E68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E2DC8u) [[unlikely]] return; }
L_002E2DC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[3], 0u + 5500u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002E2E08; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
L_002E2E00:
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002E2E08:
    set32(c.r[4], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[5].w[0] + 440u));
    c.f[2] = ld32((c.r[5].w[0] + 436u));
    c.f[1] = ld32((c.r[5].w[0] + 432u));
    c.f[0] = ld32((c.r[5].w[0] + 444u));
    st32((c.r[4].w[0] + 204u), c.f[0]);
    st32((c.r[4].w[0] + 192u), c.f[1]);
    st32((c.r[4].w[0] + 196u), c.f[2]);
    st32((c.r[4].w[0] + 200u), c.f[3]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 20;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[4].w[0] + 80u));  goto L_002E2E5C; }
    c.f[12] = 0u;
    c.budget -= 1;
L_002E2E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2E64u); set32(c.r[4], ld32((c.r[18].w[0] + 204u)));  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x002E2E64u) [[unlikely]] return; }
L_002E2E64:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_002E2E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2E70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E2E70u) [[unlikely]] return; }
L_002E2E70:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[4], 0u + 6000u);
    set32(c.r[2], 0u + 3u);
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 188u)));  goto L_002E2E90; }
    set32(c.r[4], ld32((c.r[18].w[0] + 208u)));
    c.budget -= 1;
L_002E2E90:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  goto L_002E2F08; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], ld32((c.r[18].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[5].w[0] + 2488u));
    c.f[2] = ld32((c.r[5].w[0] + 2484u));
    c.f[1] = ld32((c.r[5].w[0] + 2480u));
    c.f[0] = ld32((c.r[5].w[0] + 2492u));
    st32((c.r[4].w[0] + 204u), c.f[0]);
    st32((c.r[4].w[0] + 192u), c.f[1]);
    st32((c.r[4].w[0] + 196u), c.f[2]);
    st32((c.r[4].w[0] + 200u), c.f[3]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 24;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[5].w[0] + 80u));  goto L_002E2EFC; }
    c.f[12] = 0u;
    c.budget -= 1;
L_002E2EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F04u);  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x002E2F04u) [[unlikely]] return; }
L_002E2F04:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_002E2F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E2F10u) [[unlikely]] return; }
L_002E2F10:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002E2F20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E2F40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2FF4; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[3].w[0] + 74u));  if (t) { goto L_002E2F9C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  goto L_002E2FA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E2F88u) [[unlikely]] return; }
L_002E2F88:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[3], 0u + 5500u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F9Cu); set32(c.r[4], ld32((c.r[18].w[0] + 204u)));  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x002E2F9Cu) [[unlikely]] return; }
L_002E2F9C:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_002E2FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E2FA8u) [[unlikely]] return; }
L_002E2FA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[4], 0u + 6000u);
    set32(c.r[2], 0u + 3u);
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 188u)));  goto L_002E2FC8; }
    set32(c.r[4], ld32((c.r[18].w[0] + 208u)));
    c.budget -= 1;
L_002E2FC8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  goto L_002E2FDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FD8u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x002E2FD8u) [[unlikely]] return; }
L_002E2FD8:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_002E2FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E2FE4u) [[unlikely]] return; }
L_002E2FE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002E2FF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E3010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E306C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  goto L_002E304C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E3048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3048u);  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x002E3048u) [[unlikely]] return; }
L_002E3048:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_002E304C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  goto L_002E305C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 1;
L_002E305C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002E3070; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E306Cu);  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x002E306Cu) [[unlikely]] return; }
L_002E306C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002E3070:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E315C; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E30B4u) [[unlikely]] return; }
L_002E30B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], 0u + 5000u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002E30F4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002E30F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 200u)));  if (t) { goto L_002E3104; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 272u);  if (t) { goto L_002E3108; } }
L_002E3104:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E3108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3110u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002E3110u) [[unlikely]] return; }
L_002E3110:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
L_002E3120:
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[4].w[0] + 80u));  goto L_002E3138; }
    c.f[12] = 0u;
    c.budget -= 1;
L_002E3138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3140u); set32(c.r[4], ld32((c.r[17].w[0] + 200u)));  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x002E3140u) [[unlikely]] return; }
L_002E3140:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E314Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E314Cu) [[unlikely]] return; }
L_002E314C:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002E315C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E3180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E31E4; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[17].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E31B4u) [[unlikely]] return; }
L_002E31B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], 0u + 5000u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31C8u); set32(c.r[4], ld32((c.r[16].w[0] + 200u)));  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x002E31C8u) [[unlikely]] return; }
L_002E31C8:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E31D4u) [[unlikely]] return; }
L_002E31D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002E31E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E3200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E3264; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[17].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3234u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E3234u) [[unlikely]] return; }
L_002E3234:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], 0u + 5000u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3248u); set32(c.r[4], ld32((c.r[16].w[0] + 200u)));  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x002E3248u) [[unlikely]] return; }
L_002E3248:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002E3254u) [[unlikely]] return; }
L_002E3254:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002E3264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E3280:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002E3308; } }
    set32(c.r[3], 0u + 123u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E32F8; } }
    set32(c.r[3], 0u + 122u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E32E8; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E32D8; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E32C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002E3314; } }
L_002E32C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32D0u);  if (depth < kMaxDepth) unit_0070(c, 324u, depth + 1u); else { c.pc = 0x002E3320u; return; } if (c.pc != 0x002E32D0u) [[unlikely]] return; }
L_002E32D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3310; } }
L_002E32D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32E0u);  if (depth < kMaxDepth) unit_0070(c, 327u, depth + 1u); else { c.pc = 0x002E3350u; return; } if (c.pc != 0x002E32E0u) [[unlikely]] return; }
L_002E32E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3310; } }
L_002E32E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32F0u);  if (depth < kMaxDepth) unit_0070(c, 330u, depth + 1u); else { c.pc = 0x002E3380u; return; } if (c.pc != 0x002E32F0u) [[unlikely]] return; }
L_002E32F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3310; } }
L_002E32F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3300u);  if (depth < kMaxDepth) unit_0070(c, 331u, depth + 1u); else { c.pc = 0x002E3390u; return; } if (c.pc != 0x002E3300u) [[unlikely]] return; }
L_002E3300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3310; } }
L_002E3308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3310u);  if (depth < kMaxDepth) unit_0070(c, 332u, depth + 1u); else { c.pc = 0x002E33A0u; return; } if (c.pc != 0x002E3310u) [[unlikely]] return; }
L_002E3310:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002E3314:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E3320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3334u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 253u, depth + 1u); else { c.pc = 0x002E2730u; return; } if (c.pc != 0x002E3334u) [[unlikely]] return; }
L_002E3334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E333Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 269u, depth + 1u); else { c.pc = 0x002E2A00u; return; } if (c.pc != 0x002E333Cu) [[unlikely]] return; }
L_002E333C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3364u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 265u, depth + 1u); else { c.pc = 0x002E2950u; return; } if (c.pc != 0x002E3364u) [[unlikely]] return; }
L_002E3364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E336Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 256u, depth + 1u); else { c.pc = 0x002E27E0u; return; } if (c.pc != 0x002E336Cu) [[unlikely]] return; }
L_002E336C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3380:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2C40u | kUnwind; return; } goto L_002E2C40; }
L_002E3390:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2B90u | kUnwind; return; } goto L_002E2B90; }
L_002E33A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E33E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002E33EC; } }
L_002E33E8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E33EC:
    set32(c.r[3], ld32((c.r[3].w[0] + 428u)));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_002E3418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3410u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 278u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x002E3410u) [[unlikely]] return; }
L_002E3410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3418u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 281u, depth + 1u); else { c.pc = 0x002E2C40u; return; } if (c.pc != 0x002E3418u) [[unlikely]] return; }
L_002E3418:
    set32(c.r[3], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 240u)));  goto L_002E345C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002E343C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3438u);  if (depth < kMaxDepth) unit_0073(c, 280u, depth + 1u); else { c.pc = 0x002EF010u; return; } if (c.pc != 0x002E3438u) [[unlikely]] return; }
L_002E3438:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E343C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3444u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 95u, depth + 1u); else { c.pc = 0x00268E80u; return; } if (c.pc != 0x002E3444u) [[unlikely]] return; }
L_002E3444:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 220u), c.r[2].w[0]);  if (t) { goto L_002E3458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3458u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 274u, depth + 1u); else { c.pc = 0x002EEF10u; return; } if (c.pc != 0x002E3458u) [[unlikely]] return; }
L_002E3458:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 1;
L_002E345C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002E3478; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3470u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x002E3470u) [[unlikely]] return; }
L_002E3470:
    st32((c.r[16].w[0] + 236u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_002E3478:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E3490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E34F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28784u);
    set32(c.r[2], c.r[2].w[0] + 28840u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002E34D0u) [[unlikely]] return; }
L_002E34D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002E34DCu) [[unlikely]] return; }
L_002E34DC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002E34F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002E34F4u) [[unlikely]] return; }
L_002E34F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E34F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E3510:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3490u | kUnwind; return; } goto L_002E3490; }
L_002E3520:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3280u | kUnwind; return; } goto L_002E3280; }
L_002E3530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3550u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002E3550u) [[unlikely]] return; }
L_002E3550:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E355Cu); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002E355Cu) [[unlikely]] return; }
L_002E355C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28864u);
    set32(c.r[2], c.r[2].w[0] + 28920u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 80u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    st32((c.r[17].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E359Cu); st32((c.r[17].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x002E359Cu) [[unlikely]] return; }
L_002E359C:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35A8u); set32(c.r[4], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x002E35A8u) [[unlikely]] return; }
L_002E35A8:
    st32((c.r[17].w[0] + 232u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 120u), 0u);
    set32(c.r[4], c.r[17].w[0] + 144u);
    st32((c.r[17].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 112u), 0u);
    st32((c.r[17].w[0] + 136u), 0u);
    st32((c.r[17].w[0] + 132u), 0u);
    st32((c.r[17].w[0] + 128u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35D4u); st32((c.r[17].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002E35D4u) [[unlikely]] return; }
L_002E35D4:
    st32((c.r[17].w[0] + 212u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0] + 216u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 220u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 28400u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_002E3618; } }
L_002E35FC:
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002E3618; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 216u), c.r[3].w[0]);  if (t) { goto L_002E3624; } }
L_002E3618:
    c.r[2].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E35FCu | kUnwind; return; } goto L_002E35FC; }
L_002E3624:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[17].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 1940u);  if (t) { goto L_002E36CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28736u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E0000u < 16384u) { entry = entries_0070[(t - 0x002E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E366C:
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[17].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[17].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 248u), c.f[0]);  if (t) { goto L_002E36CC; } }
L_002E3688:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 248u), c.f[0]);  if (t) { goto L_002E36CC; } }
L_002E3694:
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[17].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 248u), c.f[0]);  if (t) { goto L_002E36CC; } }
L_002E36A8:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[17].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[17].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 248u), c.f[0]);  if (t) { goto L_002E36CC; } }
L_002E36C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 2;
L_002E36CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E36D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 73u, depth + 1u); else { c.pc = 0x002E47D0u; return; } if (c.pc != 0x002E36D4u) [[unlikely]] return; }
L_002E36D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E36E0u); set32(c.r[4], c.r[4].w[0] + 28688u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002E36E0u) [[unlikely]] return; }
L_002E36E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E3710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E372Cu); set32(c.r[4], c.r[4].w[0] + 28784u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002E372Cu) [[unlikely]] return; }
L_002E372C:
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_002E3758; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 212u), 0u);  goto L_002E3754; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3750u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E3750u) [[unlikely]] return; }
L_002E3750:
    st32((c.r[16].w[0] + 212u), 0u);
    c.budget -= 1;
L_002E3754:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002E3758:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3790:
    set32(c.r[5], ld32((c.r[4].w[0] + 232u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 232u), c.r[3].w[0]);  c.pc = t; return; }
L_002E37B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], 0u - 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 232u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E37E0u); st32((c.r[4].w[0] + 232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0071(c, 75u, depth + 1u); else { c.pc = 0x002E4880u; return; } if (c.pc != 0x002E37E0u) [[unlikely]] return; }
L_002E37E0:
    set32(c.r[4], ld32((c.r[18].w[0] + 232u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002E3B0C; }
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002E380C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));  if (t) { goto L_002E385C; } }
L_002E380C:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E383C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002E383C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E3848; }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002E3848:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[18].w[0] + 248u));  goto L_002E3858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[18].w[0] + 244u));  if (t) { goto L_002E3858; } }
L_002E3858:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_002E385C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[4].w[0] + 80u));  goto L_002E3880; }
    c.f[0] = 0u;
    c.budget -= 1;
L_002E3880:
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_002E38A4; }
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_002E38A4:
    set32(c.r[5], c.r[18].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E38B0u); set32(c.r[6], c.r[18].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002E38B0u) [[unlikely]] return; }
L_002E38B0:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E38E0u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002E38E0u) [[unlikely]] return; }
L_002E38E0:
    c.f[1] = ld32((c.r[18].w[0] + 80u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[5], 0u + 1u);
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[6], 0u + 7001u);
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3928u); st32((c.r[18].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x002E3928u) [[unlikely]] return; }
L_002E3928:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E395C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002E395C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E3968; }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002E3968:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 144u);  goto L_002E3A64; }
    set32(c.r[2], ld32((c.r[18].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3990u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x002E3990u) [[unlikely]] return; }
L_002E3990:
    set32(c.r[16], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002E39D8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30248u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E39B8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 368u)));
    c.budget -= 1;
L_002E39B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E39D4; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002E39D4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30248u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 368u)));  if (t) { goto L_002E39D4; } }
L_002E39D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E39D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39E0u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002E39E0u) [[unlikely]] return; }
L_002E39E0:
    set32(c.r[5], c.r[17].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39ECu); set32(c.r[4], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002E39ECu) [[unlikely]] return; }
L_002E39EC:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39FCu); set32(c.r[5], c.r[18].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002E39FCu) [[unlikely]] return; }
L_002E39FC:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E3A60; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A18u); set32(c.r[6], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002E3A18u) [[unlikely]] return; }
L_002E3A18:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A24u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002E3A24u) [[unlikely]] return; }
L_002E3A24:
    c.f[3] = ld32((c.r[28].w[0] - 32164u));
    set32(c.r[6], c.r[16].w[0] + 224u);
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A60u); st32((c.r[29].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002E3A60u) [[unlikely]] return; }
L_002E3A60:
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.budget -= 1;
L_002E3A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A6Cu);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002E3A6Cu) [[unlikely]] return; }
L_002E3A6C:
    set32(c.r[4], c.r[18].w[0] + 144u);
    set32(c.r[6], c.r[18].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A7Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002E3A7Cu) [[unlikely]] return; }
L_002E3A7C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A88u); set32(c.r[5], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0071(c, 21u, depth + 1u); else { c.pc = 0x002E4200u; return; } if (c.pc != 0x002E3A88u) [[unlikely]] return; }
L_002E3A88:
    set32(c.r[6], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], c.r[18].w[0] + 144u);
    set32(c.r[7], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3AA0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002E3AA0u) [[unlikely]] return; }
L_002E3AA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3AACu); set32(c.r[5], c.r[18].w[0] + 128u);  if (depth < kMaxDepth) unit_0071(c, 37u, depth + 1u); else { c.pc = 0x002E4380u; return; } if (c.pc != 0x002E3AACu) [[unlikely]] return; }
L_002E3AAC:
    set32(c.r[4], c.r[18].w[0] + 144u);
    set32(c.r[6], c.r[18].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3ABCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x002E3ABCu) [[unlikely]] return; }
L_002E3ABC:
    set32(c.r[2], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[5], c.r[18].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3ACCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002E3ACCu) [[unlikely]] return; }
L_002E3ACC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[4].w[0] + 80u));  goto L_002E3AF4; }
    c.f[12] = 0u;
    c.budget -= 1;
L_002E3AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3AFCu); set32(c.r[4], ld32((c.r[18].w[0] + 212u)));  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x002E3AFCu) [[unlikely]] return; }
L_002E3AFC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B08u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x002E3B08u) [[unlikely]] return; }
L_002E3B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002E3B0C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002E3B30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 232u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B54u); st32((c.r[4].w[0] + 232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0071(c, 75u, depth + 1u); else { c.pc = 0x002E4880u; return; } if (c.pc != 0x002E3B54u) [[unlikely]] return; }
L_002E3B54:
    set32(c.r[3], ld32((c.r[16].w[0] + 232u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002E3B9C; }
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 7001u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B7Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x002E3B7Cu) [[unlikely]] return; }
L_002E3B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B84u); set32(c.r[4], ld32((c.r[16].w[0] + 212u)));  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x002E3B84u) [[unlikely]] return; }
L_002E3B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B8Cu); set32(c.r[4], ld32((c.r[16].w[0] + 212u)));  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x002E3B8Cu) [[unlikely]] return; }
L_002E3B8C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x002E3B98u) [[unlikely]] return; }
L_002E3B98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002E3B9C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E3BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 11u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E3BD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002E3BE8; } }
L_002E3BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3BD8u);  if (depth < kMaxDepth) unit_0071(c, 73u, depth + 1u); else { c.pc = 0x002E47D0u; return; } if (c.pc != 0x002E3BD8u) [[unlikely]] return; }
L_002E3BD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 232u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[16].w[0] + 232u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_002E3BE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3C00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 10;
    { const bool t = c.r[17].sd[0] < 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002E3E80; } }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 212u)));  goto L_002E3C4C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_002E3C48; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 228u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002E3E84; }
L_002E3C48:
    set32(c.r[4], ld32((c.r[18].w[0] + 212u)));
    c.budget -= 1;
L_002E3C4C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 272u);  goto L_002E3C74; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 212u), 0u);  goto L_002E3C70; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3C6Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E3C6Cu) [[unlikely]] return; }
L_002E3C6C:
    st32((c.r[18].w[0] + 212u), 0u);
    c.budget -= 1;
L_002E3C70:
    set32(c.r[4], 0u + 272u);
    c.budget -= 1;
L_002E3C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3C7Cu);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002E3C7Cu) [[unlikely]] return; }
L_002E3C7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 212u), c.r[2].w[0]);  goto L_002E3C98; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3C94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x002E3C94u) [[unlikely]] return; }
L_002E3C94:
    st32((c.r[18].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 1;
L_002E3C98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002E3CC0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3CACu); set32(c.r[4], c.r[4].w[0] + 28832u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002E3CACu) [[unlikely]] return; }
L_002E3CAC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002E3E80; } }
L_002E3CC0:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E3CF0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002E3CF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E3CFC; }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002E3CFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], 0u + 1u);  goto L_002E3D08; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E3D08:
    st32((c.r[18].w[0] + 220u), c.r[6].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 212u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 208u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D24u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x002E3D24u) [[unlikely]] return; }
L_002E3D24:
    st32((c.r[18].w[0] + 224u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D40u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E3D40u) [[unlikely]] return; }
L_002E3D40:
    set32(c.r[4], ld32((c.r[18].w[0] + 224u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002E3D5C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E3E60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002E3D5C:
    set32(c.r[5], ld32((c.r[18].w[0] + 236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D68u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E3D68u) [[unlikely]] return; }
L_002E3D68:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[16].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));  goto L_002E3D80; }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_002E3DD8; } }
L_002E3D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D88u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002E3D88u) [[unlikely]] return; }
L_002E3D88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D94u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002E3D94u) [[unlikely]] return; }
L_002E3D94:
    c.f[20] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E3DBC; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002E3DBC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E3DD4; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002E3DD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002E3DD8:
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3DE4u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002E3DE4u) [[unlikely]] return; }
L_002E3DE4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32676u));  goto L_002E3E20; }
    c.f[0] = ld32((c.r[28].w[0] - 32676u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 32264u));  goto L_002E3E0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 4u);  if (t) { goto L_002E3E44; } }
L_002E3E0C:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[7].d[0] = 0ull + 0ull;  goto L_002E3E44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_002E3E44; } }
L_002E3E20:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 32264u));  goto L_002E3E34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 4u);  if (t) { goto L_002E3E44; } }
L_002E3E34:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[7], 0u + 1u);  goto L_002E3E44; }
    set32(c.r[7], 0u + 3u);
    c.budget -= 1;
L_002E3E44:
    st32((c.r[18].w[0] + 228u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3E58u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x002E3E58u) [[unlikely]] return; }
L_002E3E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3E80; } }
L_002E3E60:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_002E3E80; } }
    st32((c.r[18].w[0] + 228u), c.r[16].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 224u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3E80u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x002E3E80u) [[unlikely]] return; }
L_002E3E80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002E3E84:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E3EA0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 236u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3ECCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E3ECCu) [[unlikely]] return; }
L_002E3ECC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  [[clang::musttail]] return unit_0071(c, 20u, depth); }
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002E3F08; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
L_002E3F08:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002E3F14; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_002E3F14:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], ld32((c.r[6].w[0] + 116u)));  goto L_002E3FA4; }
    set32(c.r[5], ld32((c.r[19].w[0] + 236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F28u); set32(c.r[4], c.r[6].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E3F28u) [[unlikely]] return; }
L_002E3F28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002E3F34u) [[unlikely]] return; }
L_002E3F34:
    c.f[4] = ld32((c.r[16].w[0] + 696u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[16].w[0] + 712u));
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 708u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[16].w[0] + 692u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_002E3F68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 32u));  if (t) { goto L_002E3F70; } }
L_002E3F68:
    c.f[3] = c.f[0];
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.budget -= 2;
L_002E3F70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 96u), c.f[0]);
    st32((c.r[19].w[0] + 100u), c.f[3]);
    st32((c.r[19].w[0] + 104u), c.f[4]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0071(c, 19u, depth); } }
L_002E3FA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 164u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] + 112u);  if (t) { goto L_002E3FC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 1100u)));  goto L_002E3FE8; }
L_002E3FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3FD0u); set32(c.r[5], ld32((c.r[19].w[0] + 236u)));  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E3FD0u) [[unlikely]] return; }
L_002E3FD0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3FE0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 57u, depth + 1u); else { c.pc = 0x002E4670u; return; } if (c.pc != 0x002E3FE0u) [[unlikely]] return; }
L_002E3FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 19u, depth); } }
L_002E3FE8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 3312u)));  [[clang::musttail]] return unit_0071(c, 3u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3FF8u); set32(c.r[5], ld32((c.r[19].w[0] + 236u)));  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002E3FF8u) [[unlikely]] return; }
L_002E3FF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 96u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0071(c, 1u, depth);
}

}
