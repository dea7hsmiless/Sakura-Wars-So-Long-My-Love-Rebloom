#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52,
    0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0,
    121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 358,
    0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361,
    0, 362, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368,
    0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370,
    0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0,
};

void unit_005A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00288000;
    case 2u: goto L_00288020;
    case 3u: goto L_00288044;
    case 4u: goto L_00288048;
    case 5u: goto L_00288060;
    case 6u: goto L_002880E8;
    case 7u: goto L_002880F4;
    case 8u: goto L_00288114;
    case 9u: goto L_00288180;
    case 10u: goto L_00288190;
    case 11u: goto L_0028819C;
    case 12u: goto L_002881AC;
    case 13u: goto L_002881B4;
    case 14u: goto L_002881C0;
    case 15u: goto L_002881D8;
    case 16u: goto L_00288204;
    case 17u: goto L_00288218;
    case 18u: goto L_00288220;
    case 19u: goto L_0028822C;
    case 20u: goto L_00288244;
    case 21u: goto L_0028825C;
    case 22u: goto L_0028826C;
    case 23u: goto L_00288278;
    case 24u: goto L_00288288;
    case 25u: goto L_002882C8;
    case 26u: goto L_002882E0;
    case 27u: goto L_002882F0;
    case 28u: goto L_002882FC;
    case 29u: goto L_00288308;
    case 30u: goto L_00288334;
    case 31u: goto L_0028833C;
    case 32u: goto L_0028834C;
    case 33u: goto L_00288360;
    case 34u: goto L_002883A8;
    case 35u: goto L_002883B0;
    case 36u: goto L_002883E8;
    case 37u: goto L_002883F8;
    case 38u: goto L_00288404;
    case 39u: goto L_00288428;
    case 40u: goto L_00288434;
    case 41u: goto L_00288478;
    case 42u: goto L_00288480;
    case 43u: goto L_0028848C;
    case 44u: goto L_002884A4;
    case 45u: goto L_002884D0;
    case 46u: goto L_002884D8;
    case 47u: goto L_002884E4;
    case 48u: goto L_002884FC;
    case 49u: goto L_0028853C;
    case 50u: goto L_00288560;
    case 51u: goto L_00288570;
    case 52u: goto L_0028857C;
    case 53u: goto L_0028858C;
    case 54u: goto L_00288594;
    case 55u: goto L_002885A4;
    case 56u: goto L_002885B8;
    case 57u: goto L_002885C0;
    case 58u: goto L_002885C8;
    case 59u: goto L_002885D4;
    case 60u: goto L_002885EC;
    case 61u: goto L_00288618;
    case 62u: goto L_00288628;
    case 63u: goto L_00288634;
    case 64u: goto L_0028864C;
    case 65u: goto L_0028865C;
    case 66u: goto L_00288668;
    case 67u: goto L_002886A4;
    case 68u: goto L_002886B4;
    case 69u: goto L_002886C8;
    case 70u: goto L_002886E0;
    case 71u: goto L_00288708;
    case 72u: goto L_0028871C;
    case 73u: goto L_00288724;
    case 74u: goto L_00288734;
    case 75u: goto L_00288764;
    case 76u: goto L_00288774;
    case 77u: goto L_002887D0;
    case 78u: goto L_002887E0;
    case 79u: goto L_00288814;
    case 80u: goto L_00288848;
    case 81u: goto L_00288874;
    case 82u: goto L_002888AC;
    case 83u: goto L_002888D4;
    case 84u: goto L_002888E8;
    case 85u: goto L_002888F4;
    case 86u: goto L_00288904;
    case 87u: goto L_00288920;
    case 88u: goto L_00288948;
    case 89u: goto L_0028895C;
    case 90u: goto L_00288970;
    case 91u: goto L_002889A0;
    case 92u: goto L_00288A20;
    case 93u: goto L_00288A60;
    case 94u: goto L_00288A70;
    case 95u: goto L_00288A9C;
    case 96u: goto L_00288AAC;
    case 97u: goto L_00288AFC;
    case 98u: goto L_00288B10;
    case 99u: goto L_00288B24;
    case 100u: goto L_00288B34;
    case 101u: goto L_00288B3C;
    case 102u: goto L_00288C40;
    case 103u: goto L_00288C70;
    case 104u: goto L_00288D28;
    case 105u: goto L_00288D38;
    case 106u: goto L_00288D60;
    case 107u: goto L_00288D98;
    case 108u: goto L_00288DAC;
    case 109u: goto L_00288DC0;
    case 110u: goto L_00288DEC;
    case 111u: goto L_00288E14;
    case 112u: goto L_00288E44;
    case 113u: goto L_00288E50;
    case 114u: goto L_00288EA4;
    case 115u: goto L_00288EF0;
    case 116u: goto L_00288F00;
    case 117u: goto L_00288F0C;
    case 118u: goto L_00288F4C;
    case 119u: goto L_00288F64;
    case 120u: goto L_00288F74;
    case 121u: goto L_00288F80;
    case 122u: goto L_00288F8C;
    case 123u: goto L_00288FA0;
    case 124u: goto L_0028901C;
    case 125u: goto L_0028902C;
    case 126u: goto L_0028903C;
    case 127u: goto L_00289058;
    case 128u: goto L_00289068;
    case 129u: goto L_00289074;
    case 130u: goto L_00289088;
    case 131u: goto L_002890A4;
    case 132u: goto L_002890E4;
    case 133u: goto L_002890F0;
    case 134u: goto L_00289100;
    case 135u: goto L_00289134;
    case 136u: goto L_00289164;
    case 137u: goto L_00289178;
    case 138u: goto L_002891A0;
    case 139u: goto L_002891B4;
    case 140u: goto L_002891C0;
    case 141u: goto L_00289204;
    case 142u: goto L_00289240;
    case 143u: goto L_00289294;
    case 144u: goto L_002892AC;
    case 145u: goto L_002892C0;
    case 146u: goto L_002892FC;
    case 147u: goto L_0028930C;
    case 148u: goto L_0028932C;
    case 149u: goto L_00289338;
    case 150u: goto L_0028935C;
    case 151u: goto L_00289368;
    case 152u: goto L_00289374;
    case 153u: goto L_002893A4;
    case 154u: goto L_002893B4;
    case 155u: goto L_002893C4;
    case 156u: goto L_002893D8;
    case 157u: goto L_002893E8;
    case 158u: goto L_002893FC;
    case 159u: goto L_00289408;
    case 160u: goto L_00289490;
    case 161u: goto L_002894E0;
    case 162u: goto L_00289520;
    case 163u: goto L_00289558;
    case 164u: goto L_00289564;
    case 165u: goto L_00289580;
    case 166u: goto L_002895C0;
    case 167u: goto L_002895C8;
    case 168u: goto L_002895F0;
    case 169u: goto L_002895FC;
    case 170u: goto L_00289634;
    case 171u: goto L_00289650;
    case 172u: goto L_0028966C;
    case 173u: goto L_0028969C;
    case 174u: goto L_002896B8;
    case 175u: goto L_002896D0;
    case 176u: goto L_00289720;
    case 177u: goto L_00289750;
    case 178u: goto L_0028976C;
    case 179u: goto L_0028978C;
    case 180u: goto L_002897F0;
    case 181u: goto L_0028980C;
    case 182u: goto L_00289830;
    case 183u: goto L_00289890;
    case 184u: goto L_002898B0;
    case 185u: goto L_002898D8;
    case 186u: goto L_00289910;
    case 187u: goto L_00289920;
    case 188u: goto L_00289954;
    case 189u: goto L_00289968;
    case 190u: goto L_002899D4;
    case 191u: goto L_00289A00;
    case 192u: goto L_00289A44;
    case 193u: goto L_00289A70;
    case 194u: goto L_00289A80;
    case 195u: goto L_00289AC0;
    case 196u: goto L_00289AD0;
    case 197u: goto L_00289AE0;
    case 198u: goto L_00289B28;
    case 199u: goto L_00289B40;
    case 200u: goto L_00289B8C;
    case 201u: goto L_00289BC4;
    case 202u: goto L_00289BD0;
    case 203u: goto L_00289BEC;
    case 204u: goto L_00289BFC;
    case 205u: goto L_00289C14;
    case 206u: goto L_00289C30;
    case 207u: goto L_00289C64;
    case 208u: goto L_00289C80;
    case 209u: goto L_00289C90;
    case 210u: goto L_00289C9C;
    case 211u: goto L_00289CB0;
    case 212u: goto L_00289CF0;
    case 213u: goto L_00289CFC;
    case 214u: goto L_00289D08;
    case 215u: goto L_00289D2C;
    case 216u: goto L_00289D54;
    case 217u: goto L_00289D7C;
    case 218u: goto L_00289DA4;
    case 219u: goto L_00289DB4;
    case 220u: goto L_00289DBC;
    case 221u: goto L_00289DD8;
    case 222u: goto L_00289DF4;
    case 223u: goto L_00289E00;
    case 224u: goto L_00289E08;
    case 225u: goto L_00289E24;
    case 226u: goto L_00289E54;
    case 227u: goto L_00289E70;
    case 228u: goto L_00289E98;
    case 229u: goto L_00289EAC;
    case 230u: goto L_00289F50;
    case 231u: goto L_00289F98;
    case 232u: goto L_00289FC8;
    case 233u: goto L_00289FF4;
    case 234u: goto L_0028A020;
    case 235u: goto L_0028A04C;
    case 236u: goto L_0028A078;
    case 237u: goto L_0028A0A0;
    case 238u: goto L_0028A0C8;
    case 239u: goto L_0028A110;
    case 240u: goto L_0028A124;
    case 241u: goto L_0028A138;
    case 242u: goto L_0028A168;
    case 243u: goto L_0028A190;
    case 244u: goto L_0028A19C;
    case 245u: goto L_0028A1D0;
    case 246u: goto L_0028A218;
    case 247u: goto L_0028A224;
    case 248u: goto L_0028A230;
    case 249u: goto L_0028A238;
    case 250u: goto L_0028A33C;
    case 251u: goto L_0028A350;
    case 252u: goto L_0028A384;
    case 253u: goto L_0028A3A4;
    case 254u: goto L_0028A3D0;
    case 255u: goto L_0028A3E4;
    case 256u: goto L_0028A410;
    case 257u: goto L_0028A434;
    case 258u: goto L_0028A484;
    case 259u: goto L_0028A494;
    case 260u: goto L_0028A4A4;
    case 261u: goto L_0028A4B4;
    case 262u: goto L_0028A4C4;
    case 263u: goto L_0028A4E0;
    case 264u: goto L_0028A4E8;
    case 265u: goto L_0028A4F8;
    case 266u: goto L_0028A510;
    case 267u: goto L_0028A518;
    case 268u: goto L_0028A5D0;
    case 269u: goto L_0028A640;
    case 270u: goto L_0028A6C8;
    case 271u: goto L_0028A6F4;
    case 272u: goto L_0028A720;
    case 273u: goto L_0028A780;
    case 274u: goto L_0028A7AC;
    case 275u: goto L_0028A81C;
    case 276u: goto L_0028A898;
    case 277u: goto L_0028A96C;
    case 278u: goto L_0028AA34;
    case 279u: goto L_0028AAA4;
    case 280u: goto L_0028AB74;
    case 281u: goto L_0028ABE4;
    case 282u: goto L_0028AE60;
    case 283u: goto L_0028AE80;
    case 284u: goto L_0028AEA0;
    case 285u: goto L_0028AEAC;
    case 286u: goto L_0028AEBC;
    case 287u: goto L_0028AEC8;
    case 288u: goto L_0028AF00;
    case 289u: goto L_0028AF08;
    case 290u: goto L_0028AF40;
    case 291u: goto L_0028AFA8;
    case 292u: goto L_0028AFB4;
    case 293u: goto L_0028AFE8;
    case 294u: goto L_0028B000;
    case 295u: goto L_0028B024;
    case 296u: goto L_0028B03C;
    case 297u: goto L_0028B060;
    case 298u: goto L_0028B0AC;
    case 299u: goto L_0028B0D4;
    case 300u: goto L_0028B0F4;
    case 301u: goto L_0028B120;
    case 302u: goto L_0028B13C;
    case 303u: goto L_0028B14C;
    case 304u: goto L_0028B15C;
    case 305u: goto L_0028B184;
    case 306u: goto L_0028B1C8;
    case 307u: goto L_0028B1E4;
    case 308u: goto L_0028B1F4;
    case 309u: goto L_0028B200;
    case 310u: goto L_0028B228;
    case 311u: goto L_0028B25C;
    case 312u: goto L_0028B280;
    case 313u: goto L_0028B330;
    case 314u: goto L_0028B3A0;
    case 315u: goto L_0028B3C0;
    case 316u: goto L_0028B3FC;
    case 317u: goto L_0028B43C;
    case 318u: goto L_0028B458;
    case 319u: goto L_0028B470;
    case 320u: goto L_0028B4B4;
    case 321u: goto L_0028B4D4;
    case 322u: goto L_0028B4F8;
    case 323u: goto L_0028B508;
    case 324u: goto L_0028B534;
    case 325u: goto L_0028B560;
    case 326u: goto L_0028B580;
    case 327u: goto L_0028B5B0;
    case 328u: goto L_0028B5F0;
    case 329u: goto L_0028B600;
    case 330u: goto L_0028B630;
    case 331u: goto L_0028B67C;
    case 332u: goto L_0028B698;
    case 333u: goto L_0028B6A8;
    case 334u: goto L_0028B6C0;
    case 335u: goto L_0028B6D0;
    case 336u: goto L_0028B70C;
    case 337u: goto L_0028B734;
    case 338u: goto L_0028B760;
    case 339u: goto L_0028B780;
    case 340u: goto L_0028B790;
    case 341u: goto L_0028B7B0;
    case 342u: goto L_0028B7CC;
    case 343u: goto L_0028B840;
    case 344u: goto L_0028B8A0;
    case 345u: goto L_0028B930;
    case 346u: goto L_0028B944;
    case 347u: goto L_0028B95C;
    case 348u: goto L_0028B98C;
    case 349u: goto L_0028B9A8;
    case 350u: goto L_0028B9C0;
    case 351u: goto L_0028B9F4;
    case 352u: goto L_0028BA04;
    case 353u: goto L_0028BA38;
    case 354u: goto L_0028BA48;
    case 355u: goto L_0028BA50;
    case 356u: goto L_0028BA60;
    case 357u: goto L_0028BA68;
    case 358u: goto L_0028BA7C;
    case 359u: goto L_0028BAA0;
    case 360u: goto L_0028BAEC;
    case 361u: goto L_0028BAFC;
    case 362u: goto L_0028BB04;
    case 363u: goto L_0028BB14;
    case 364u: goto L_0028BB1C;
    case 365u: goto L_0028BB30;
    case 366u: goto L_0028BB70;
    case 367u: goto L_0028BBEC;
    case 368u: goto L_0028BBFC;
    case 369u: goto L_0028BC04;
    case 370u: goto L_0028BC7C;
    case 371u: goto L_0028BC8C;
    case 372u: goto L_0028BC94;
    case 373u: goto L_0028BCFC;
    case 374u: goto L_0028BD24;
    case 375u: goto L_0028BD5C;
    case 376u: goto L_0028BD68;
    case 377u: goto L_0028BDCC;
    case 378u: goto L_0028BDE4;
    case 379u: goto L_0028BDF4;
    case 380u: goto L_0028BE10;
    case 381u: goto L_0028BE38;
    case 382u: goto L_0028BE60;
    case 383u: goto L_0028BE6C;
    case 384u: goto L_0028BEBC;
    case 385u: goto L_0028BEF8;
    case 386u: goto L_0028BF34;
    case 387u: goto L_0028BF60;
    case 388u: goto L_0028BF70;
    case 389u: goto L_0028BFA0;
    case 390u: goto L_0028BFB8;
    case 391u: goto L_0028BFD4;
    case 392u: goto L_0028BFF4;
    default: bad_entry(c, 0x00288000u); return;
    }
L_00288000:
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    st32((c.r[29].w[0] + 160u), c.f[5]);
    st32((c.r[29].w[0] + 164u), c.f[4]);
    st32((c.r[29].w[0] + 168u), c.f[3]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288020u); st32((c.r[29].w[0] + 184u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 263u, depth + 1u); else { c.pc = 0x0016EEF0u; return; } if (c.pc != 0x00288020u) [[unlikely]] return; }
L_00288020:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00288044; }
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00288040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288044; } }
L_00288040:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00288044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00288048:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00288060:
    set32(c.r[29], c.r[29].w[0] - 544u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 14;
    if (c.r[3].d[0] != c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00288C44; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1100u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  goto L_002886AC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 1104u)));  goto L_002880D4; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002880D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002880D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_002880D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1104u)));
    c.budget -= 1;
L_002880D4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_002880FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002880E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002880E8u) [[unlikely]] return; }
L_002880E8:
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002880F4u); set32(c.r[5], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002880F4u) [[unlikely]] return; }
L_002880F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_002880FC:
    set32(c.r[2], ld32((c.r[2].w[0] + 3312u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 164u)));  goto L_002885F4; }
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288114u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00288114u) [[unlikely]] return; }
L_00288114:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00288280; }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3312u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 148u)));  goto L_00288160; }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_002881E4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002881E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_00288160:
    set32(c.r[2], 0u + 1100u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 1008u);  goto L_002881A4; }
    set32(c.r[17], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00288188; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288180u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288180u) [[unlikely]] return; }
L_00288180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 352u);  if (t) { goto L_00288194; } }
L_00288188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288190u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288190u) [[unlikely]] return; }
L_00288190:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_00288194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028819Cu); set32(c.r[4], c.r[16].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0028819Cu) [[unlikely]] return; }
L_0028819C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_002881A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002881ACu);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002881ACu) [[unlikely]] return; }
L_002881AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002881B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002881B4u) [[unlikely]] return; }
L_002881B4:
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002881C0u); set32(c.r[5], c.r[16].w[0] + 736u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002881C0u) [[unlikely]] return; }
L_002881C0:
    set32(c.r[6], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[16].w[0] + 1008u);
    set32(c.r[7], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002881D8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002881D8u) [[unlikely]] return; }
L_002881D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_002881E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_002881E4:
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 1008u);  goto L_002881FC; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 1320u)));  goto L_0028824C; }
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.budget -= 1;
L_002881FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288204u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00288204u) [[unlikely]] return; }
L_00288204:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3312u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288218u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x00288218u) [[unlikely]] return; }
L_00288218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288220u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288220u) [[unlikely]] return; }
L_00288220:
    set32(c.r[5], c.r[17].w[0] + 736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028822Cu); set32(c.r[4], c.r[16].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x0028822Cu) [[unlikely]] return; }
L_0028822C:
    set32(c.r[6], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[4], c.r[16].w[0] + 1008u);
    set32(c.r[7], ld32((c.r[29].w[0] + 532u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 536u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288244u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x00288244u) [[unlikely]] return; }
L_00288244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_0028824C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00288264; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028825Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028825Cu) [[unlikely]] return; }
L_0028825C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 352u);  if (t) { goto L_00288270; } }
L_00288264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028826Cu);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028826Cu) [[unlikely]] return; }
L_0028826C:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_00288270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288278u); set32(c.r[4], c.r[16].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00288278u) [[unlikely]] return; }
L_00288278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_00288280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288288u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00288288u) [[unlikely]] return; }
L_00288288:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_00288314; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1104u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00288310; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1072u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288310; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002882C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002882C8u) [[unlikely]] return; }
L_002882C8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002882E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002882E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002882E0u) [[unlikely]] return; }
L_002882E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 272u);  if (t) { goto L_002882F4; } }
L_002882E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002882F0u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002882F0u) [[unlikely]] return; }
L_002882F0:
    set32(c.r[5], c.r[2].w[0] + 208u);
    c.budget -= 1;
L_002882F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002882FCu); set32(c.r[4], c.r[16].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002882FCu) [[unlikely]] return; }
L_002882FC:
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288308u); set32(c.r[5], c.r[16].w[0] + 1280u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x00288308u) [[unlikely]] return; }
L_00288308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_00288310:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_00288314:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00288320; }
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 1;
L_00288320:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 512u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288334u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 266u, depth + 1u); else { c.pc = 0x002660D0u; return; } if (c.pc != 0x00288334u) [[unlikely]] return; }
L_00288334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028833Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028833Cu) [[unlikely]] return; }
L_0028833C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028834Cu); set32(c.r[6], c.r[17].w[0] + 736u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0028834Cu) [[unlikely]] return; }
L_0028834C:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288360u); st128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00288360u) [[unlikely]] return; }
L_00288360:
    c.f[0] = ld32((c.r[29].w[0] + 496u));
    c.f[2] = ld32((c.r[29].w[0] + 500u));
    c.f[1] = ld32((c.r[29].w[0] + 504u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 508u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 336u), c.f[3]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    st32((c.r[29].w[0] + 348u), c.f[0]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    c.f[12] = ld32((c.r[29].w[0] + 480u));
    c.f[13] = ld32((c.r[29].w[0] + 484u));
    c.f[14] = ld32((c.r[29].w[0] + 488u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002883A8u); set32(c.r[4], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_003A(c, 294u, depth + 1u); else { c.pc = 0x0020AC90u; return; } if (c.pc != 0x002883A8u) [[unlikely]] return; }
L_002883A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002883B0u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002883B0u) [[unlikely]] return; }
L_002883B0:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  goto L_00288410; }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028840C; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002883F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002883E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002883E8u) [[unlikely]] return; }
L_002883E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 352u);  if (t) { goto L_002883FC; } }
L_002883F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002883F8u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002883F8u) [[unlikely]] return; }
L_002883F8:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_002883FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288404u); set32(c.r[4], c.r[16].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00288404u) [[unlikely]] return; }
L_00288404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_0028840C:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_00288410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_0028843C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288428u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288428u) [[unlikely]] return; }
L_00288428:
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288434u); set32(c.r[5], c.r[16].w[0] + 1200u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00288434u) [[unlikely]] return; }
L_00288434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_0028843C:
    set32(c.r[2], ld32((c.r[2].w[0] + 3312u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[16].w[0] + 1008u);  goto L_00288470; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_002884B0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002884AC; } }
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.budget -= 1;
L_00288470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288478u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00288478u) [[unlikely]] return; }
L_00288478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288480u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288480u) [[unlikely]] return; }
L_00288480:
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028848Cu); set32(c.r[5], c.r[16].w[0] + 736u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x0028848Cu) [[unlikely]] return; }
L_0028848C:
    set32(c.r[6], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[4], c.r[16].w[0] + 1008u);
    set32(c.r[7], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 472u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002884A4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002884A4u) [[unlikely]] return; }
L_002884A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_002884AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_002884B0:
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 1008u);  goto L_002884C8; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));  goto L_00288544; }
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.budget -= 1;
L_002884C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002884D0u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002884D0u) [[unlikely]] return; }
L_002884D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002884D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002884D8u) [[unlikely]] return; }
L_002884D8:
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002884E4u); set32(c.r[5], c.r[17].w[0] + 736u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002884E4u) [[unlikely]] return; }
L_002884E4:
    set32(c.r[6], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[4], c.r[16].w[0] + 1008u);
    set32(c.r[7], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 472u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002884FCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002884FCu) [[unlikely]] return; }
L_002884FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.f[0] = ld32((c.r[3].w[0] + 16632u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 720u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 16624u));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 240u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16636u)));
    st32((c.r[29].w[0] + 248u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028853Cu); st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0028853Cu) [[unlikely]] return; }
L_0028853C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_00288544:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00288584; }
    set32(c.r[17], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00288568; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288560u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288560u) [[unlikely]] return; }
L_00288560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 352u);  if (t) { goto L_00288574; } }
L_00288568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288570u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288570u) [[unlikely]] return; }
L_00288570:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_00288574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028857Cu); set32(c.r[4], c.r[16].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0028857Cu) [[unlikely]] return; }
L_0028857C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_00288584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028858Cu);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028858Cu) [[unlikely]] return; }
L_0028858C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288594u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288594u) [[unlikely]] return; }
L_00288594:
    set32(c.r[5], c.r[17].w[0] + 736u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002885A4u); set32(c.r[6], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002885A4u) [[unlikely]] return; }
L_002885A4:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 448u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002885B8u); st128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x002885B8u) [[unlikely]] return; }
L_002885B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002885C0u); set32(c.r[4], c.r[16].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002885C0u) [[unlikely]] return; }
L_002885C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002885C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002885C8u) [[unlikely]] return; }
L_002885C8:
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002885D4u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002885D4u) [[unlikely]] return; }
L_002885D4:
    set32(c.r[6], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[4], c.r[16].w[0] + 1008u);
    set32(c.r[7], ld32((c.r[29].w[0] + 436u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 440u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002885ECu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002885ECu) [[unlikely]] return; }
L_002885EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_002885F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 1320u)));  goto L_0028863C; }
    set32(c.r[17], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00288620; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288618u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288618u) [[unlikely]] return; }
L_00288618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 352u);  if (t) { goto L_0028862C; } }
L_00288620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288628u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288628u) [[unlikely]] return; }
L_00288628:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_0028862C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288634u); set32(c.r[4], c.r[16].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00288634u) [[unlikely]] return; }
L_00288634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_0028863C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00288654; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028864Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028864Cu) [[unlikely]] return; }
L_0028864C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 352u);  if (t) { goto L_00288660; } }
L_00288654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028865Cu);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028865Cu) [[unlikely]] return; }
L_0028865C:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_00288660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288668u); set32(c.r[4], c.r[16].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00288668u) [[unlikely]] return; }
L_00288668:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.f[0] = ld32((c.r[3].w[0] + 16632u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 1084u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 16624u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    st32((c.r[29].w[0] + 216u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 208u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16636u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002886A4u); st32((c.r[29].w[0] + 220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002886A4u) [[unlikely]] return; }
L_002886A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288C40; } }
L_002886AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002886B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x002886B4u) [[unlikely]] return; }
L_002886B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  goto L_00288700; }
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002886C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x002886C8u) [[unlikely]] return; }
L_002886C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002886E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 255u, depth + 1u); else { c.pc = 0x00292250u; return; } if (c.pc != 0x002886E0u) [[unlikely]] return; }
L_002886E0:
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 200u);
    st32((c.r[3].w[0] + 13360u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 8;
L_00288700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x00288708u) [[unlikely]] return; }
L_00288708:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00288C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028871Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028871Cu) [[unlikely]] return; }
L_0028871C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288724u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288724u) [[unlikely]] return; }
L_00288724:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[16].w[0] + 736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288734u); set32(c.r[6], c.r[17].w[0] + 736u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00288734u) [[unlikely]] return; }
L_00288734:
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[29].w[0] + 188u));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[2].w[0] + 13344u), c.f[0]);
    st32((c.r[2].w[0] + 13348u), c.f[3]);
    st32((c.r[2].w[0] + 13352u), c.f[2]);
    st32((c.r[2].w[0] + 13356u), c.f[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288764u); set32(c.r[4], c.r[2].w[0] + 13344u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x00288764u) [[unlikely]] return; }
L_00288764:
    c.f[21] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288774u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00288774u) [[unlikely]] return; }
L_00288774:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00288794; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 13472u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0] + 8u));  if (t) { goto L_0028879C; } }
L_00288794:
    set32(c.r[2], ld32((c.r[2].w[0] + 13472u)));
    c.f[20] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 2;
L_0028879C:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_002887B8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 13280u), c.r[3].w[0]);  if (t) { goto L_002887C0; } }
L_002887B8:
    c.f[22] = c.f[20];
    st32((c.r[2].w[0] + 13280u), 0u);
    c.budget -= 2;
L_002887C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], c.r[2].w[0] + 13344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002887D0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002887D0u) [[unlikely]] return; }
L_002887D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002887E0u); set32(c.r[18], c.r[2].w[0] + 13296u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002887E0u) [[unlikely]] return; }
L_002887E0:
    c.f[0] = ld32((c.r[17].w[0] + 736u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.f[22];
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 740u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 744u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 748u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288814u); set32(c.r[5], c.r[2].w[0] + 13344u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x00288814u) [[unlikely]] return; }
L_00288814:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 304u), c.f[2]);
    st32((c.r[29].w[0] + 308u), c.f[1]);
    st32((c.r[29].w[0] + 316u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288848u); set32(c.r[5], c.r[2].w[0] + 13296u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x00288848u) [[unlikely]] return; }
L_00288848:
    c.f[3] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 172u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[2].w[0] + 13312u), c.f[0]);
    st32((c.r[2].w[0] + 13316u), c.f[3]);
    st32((c.r[2].w[0] + 13320u), c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288874u); st32((c.r[2].w[0] + 13324u), c.f[1]);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00288874u) [[unlikely]] return; }
L_00288874:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00288894; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 13472u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 16u));  if (t) { goto L_0028889C; } }
L_00288894:
    set32(c.r[2], ld32((c.r[2].w[0] + 13472u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 2;
L_0028889C:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002888ACu); st32((c.r[2].w[0] + 13328u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002888ACu) [[unlikely]] return; }
L_002888AC:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00288C40; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[19], c.r[3].w[0] + 13376u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002888D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002888D4u) [[unlikely]] return; }
L_002888D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[17].w[0] + 736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002888E8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x002888E8u) [[unlikely]] return; }
L_002888E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002888F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002888F4u) [[unlikely]] return; }
L_002888F4:
    set32(c.r[17], c.r[17].w[0] + 736u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288904u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00288904u) [[unlikely]] return; }
L_00288904:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00288918; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_00288928; } }
L_00288918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288920u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00288920u) [[unlikely]] return; }
L_00288920:
    c.f[20] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 2;
L_00288928:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288948u); st32((c.r[2].w[0] + 13504u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00288948u) [[unlikely]] return; }
L_00288948:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028895Cu); st128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0028895Cu) [[unlikely]] return; }
L_0028895C:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = ld32((c.r[2].w[0] + 13504u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288970u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x00288970u) [[unlikely]] return; }
L_00288970:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[6], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002889A0u); st32((c.r[29].w[0] + 284u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002889A0u) [[unlikely]] return; }
L_002889A0:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002889DC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002889DC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.f[21] = ld32((c.r[2].w[0] + 144u));  if (t) { goto L_00288A0C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00288A10; } }
L_00288A0C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00288A10:
    set32(c.r[5], c.r[2].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288A20u); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0017(c, 52u, depth + 1u); else { c.pc = 0x0017C710u; return; } if (c.pc != 0x00288A20u) [[unlikely]] return; }
L_00288A20:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.f[1] = ld32((c.r[29].w[0] + 368u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    c.f[3] = ld32((c.r[29].w[0] + 372u));
    c.f[2] = ld32((c.r[29].w[0] + 420u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 376u));
    c.f[0] = ld32((c.r[29].w[0] + 424u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 368u), c.f[4]);
    st32((c.r[29].w[0] + 372u), c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288A60u); st32((c.r[29].w[0] + 376u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00288A60u) [[unlikely]] return; }
L_00288A60:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288A70u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00288A70u) [[unlikely]] return; }
L_00288A70:
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 408u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[29].w[0] + 400u), c.f[2]);
    st32((c.r[29].w[0] + 404u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288A9Cu); st32((c.r[29].w[0] + 412u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00288A9Cu) [[unlikely]] return; }
L_00288A9C:
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288AACu); set32(c.r[6], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x00288AACu) [[unlikely]] return; }
L_00288AAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.f[1] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 400u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[21]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[3].w[0] + 13508u), c.f[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.f[1] = ld32((c.r[2].w[0] + 13508u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 13512u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288AFCu); set32(c.r[4], c.r[2].w[0] + 13520u);  if (depth < kMaxDepth) unit_001C(c, 4u, depth + 1u); else { c.pc = 0x001900A0u; return; } if (c.pc != 0x00288AFCu) [[unlikely]] return; }
L_00288AFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288B10u); set32(c.r[4], c.r[2].w[0] + 13520u);  if (depth < kMaxDepth) unit_001C(c, 4u, depth + 1u); else { c.pc = 0x001900A0u; return; } if (c.pc != 0x00288B10u) [[unlikely]] return; }
L_00288B10:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[29].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288B24u); set32(c.r[4], c.r[2].w[0] + 13520u);  if (depth < kMaxDepth) unit_001C(c, 4u, depth + 1u); else { c.pc = 0x001900A0u; return; } if (c.pc != 0x00288B24u) [[unlikely]] return; }
L_00288B24:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288B34u); set32(c.r[4], c.r[2].w[0] + 13520u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x00288B34u) [[unlikely]] return; }
L_00288B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288B3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00288B3Cu) [[unlikely]] return; }
L_00288B3C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00288B60; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 13472u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[5] = ld32((c.r[2].w[0] + 16u));  if (t) { goto L_00288B6C; } }
L_00288B60:
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 13472u)));
    c.f[5] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 3;
L_00288B6C:
    c.f[4] = ld32((c.r[3].w[0] + 13504u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[3].w[0] + 13512u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = c.f[5] ^ fp::kSign;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.f[4] ^ fp::kSign;
    set32(c.r[7], 0u + 8u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[19].w[0] + 4u), c.f[5]);
    st32((c.r[19].w[0] + 8u), 0u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    st32((c.r[19].w[0] + 20u), c.f[5]);
    st32((c.r[19].w[0] + 24u), 0u);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    st32((c.r[19].w[0] + 36u), c.f[1]);
    st32((c.r[19].w[0] + 40u), 0u);
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 48u), c.f[2]);
    st32((c.r[19].w[0] + 52u), c.f[1]);
    st32((c.r[19].w[0] + 56u), 0u);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[19].w[0] + 64u), c.f[0]);
    st32((c.r[19].w[0] + 68u), c.f[5]);
    st32((c.r[19].w[0] + 72u), c.f[20]);
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[19].w[0] + 80u), c.f[0]);
    st32((c.r[19].w[0] + 84u), c.f[5]);
    st32((c.r[19].w[0] + 88u), c.f[20]);
    st32((c.r[19].w[0] + 92u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[19].w[0] + 96u), c.f[0]);
    st32((c.r[19].w[0] + 100u), c.f[1]);
    st32((c.r[19].w[0] + 104u), c.f[20]);
    st32((c.r[19].w[0] + 108u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[19].w[0] + 112u), c.f[0]);
    st32((c.r[19].w[0] + 116u), c.f[1]);
    st32((c.r[19].w[0] + 120u), c.f[20]);
    st32((c.r[19].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288C40u); set32(c.r[5], c.r[2].w[0] + 13520u);  if (depth < kMaxDepth) unit_001B(c, 230u, depth + 1u); else { c.pc = 0x0018FAE0u; return; } if (c.pc != 0x00288C40u) [[unlikely]] return; }
L_00288C40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00288C44:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 544u);  c.pc = t; return; }
L_00288C70:
    set32(c.r[29], c.r[29].w[0] - 752u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[21] = ld32((c.r[29].w[0] + 736u));
    c.f[22] = ld32((c.r[29].w[0] + 740u));
    c.f[23] = ld32((c.r[29].w[0] + 744u));
    c.f[24] = ld32((c.r[29].w[0] + 748u));
    c.budget -= 26;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_00288D28; } }
    c.f[21] = ld32((c.r[20].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[22] = ld32((c.r[20].w[0] + 196u));
    c.f[23] = ld32((c.r[20].w[0] + 200u));
    c.f[24] = ld32((c.r[20].w[0] + 204u));
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[20].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[20].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[20].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[20].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288D28u); st32((c.r[20].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x00288D28u) [[unlikely]] return; }
L_00288D28:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288D38u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288D38u) [[unlikely]] return; }
L_00288D38:
    c.f[0] = ld32((c.r[20].w[0] + 736u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 624u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 740u));
    st32((c.r[29].w[0] + 628u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 744u));
    st32((c.r[29].w[0] + 632u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 748u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288D60u); st32((c.r[29].w[0] + 636u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00288D60u) [[unlikely]] return; }
L_00288D60:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_00288D78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 628u), 0u);  if (t) { goto L_00288DC0; } }
L_00288D78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00288D84; }
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 1;
L_00288D84:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 720u);
    set32(c.r[7], c.r[29].w[0] + 704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288D98u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 266u, depth + 1u); else { c.pc = 0x002660D0u; return; } if (c.pc != 0x00288D98u) [[unlikely]] return; }
L_00288D98:
    set32(c.r[4], c.r[29].w[0] + 640u);
    set32(c.r[5], c.r[29].w[0] + 720u);
    set32(c.r[6], c.r[29].w[0] + 704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288DACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 176u, depth + 1u); else { c.pc = 0x002C2280u; return; } if (c.pc != 0x00288DACu) [[unlikely]] return; }
L_00288DAC:
    set32(c.r[6], c.r[29].w[0] + 624u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288DC0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x00288DC0u) [[unlikely]] return; }
L_00288DC0:
    set32(c.r[3], ld32((c.r[20].w[0] + 1100u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0] + 16u)));  goto L_00288DDC; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[19].d[0];  if (t) { goto L_00289454; } }
    set32(c.r[25], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 1;
L_00288DDC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288DECu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288DECu) [[unlikely]] return; }
L_00288DEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289454; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1104u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00288E0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_00289454; } }
L_00288E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288E14u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00288E14u) [[unlikely]] return; }
L_00288E14:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00288EE8; }
    c.f[1] = ld32((c.r[20].w[0] + 1088u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[20].w[0] + 1092u));  goto L_00288E88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288E44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288E44u) [[unlikely]] return; }
L_00288E44:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288E50u); set32(c.r[21], c.r[19].w[0] + 688u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288E50u) [[unlikely]] return; }
L_00288E50:
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    c.f[3] = ld32((c.r[21].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = c.f[0];  goto L_00288E64; }
L_00288E64:
    c.f[2] = ld32((c.r[21].w[0] + 32u));
    c.f[1] = ld32((c.r[20].w[0] + 196u));
    c.f[0] = ld32((c.r[20].w[0] + 1088u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00289454; } }
    c.f[1] = ld32((c.r[20].w[0] + 1092u));
    c.budget -= 1;
L_00288E88:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00288EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288EA4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288EA4u) [[unlikely]] return; }
L_00288EA4:
    c.f[0] = ld32((c.r[19].w[0] + 708u));
    c.f[3] = ld32((c.r[19].w[0] + 692u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[19].w[0] + 688u);  if (t) { goto L_00288EC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[2].w[0] + 32u));  if (t) { goto L_00288EC8; } }
L_00288EC0:
    c.f[3] = c.f[0];
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.budget -= 2;
L_00288EC8:
    c.f[1] = ld32((c.r[20].w[0] + 196u));
    c.f[0] = ld32((c.r[20].w[0] + 1092u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00289454; } }
L_00288EE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00288EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288EF0u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288EF0u) [[unlikely]] return; }
L_00288EF0:
    ld128((c.r[19].w[0] + 736u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288F00u); st128((c.r[29].w[0] + 576u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00288F00u) [[unlikely]] return; }
L_00288F00:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288F0Cu); set32(c.r[21], c.r[19].w[0] + 688u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00288F0Cu) [[unlikely]] return; }
L_00288F0C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 164u)));  goto L_00288FB4; }
    set32(c.r[3], ld32((c.r[20].w[0] + 1104u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00288FB0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1072u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288FB0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288F4Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00288F4Cu) [[unlikely]] return; }
L_00288F4C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00288F6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288F64u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00288F64u) [[unlikely]] return; }
L_00288F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 272u);  if (t) { goto L_00288F78; } }
L_00288F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288F74u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00288F74u) [[unlikely]] return; }
L_00288F74:
    set32(c.r[5], c.r[2].w[0] + 208u);
    c.budget -= 1;
L_00288F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288F80u); set32(c.r[4], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00288F80u) [[unlikely]] return; }
L_00288F80:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288F8Cu); set32(c.r[5], c.r[20].w[0] + 1280u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x00288F8Cu) [[unlikely]] return; }
L_00288F8C:
    set32(c.r[2], ld32((c.r[20].w[0] + 1072u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288FA0u); set32(c.r[6], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_0059(c, 441u, depth + 1u); else { c.pc = 0x00287D90u; return; } if (c.pc != 0x00288FA0u) [[unlikely]] return; }
L_00288FA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[22], 0u + 1u);  goto L_00289454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289454; } }
L_00288FB0:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.budget -= 1;
L_00288FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0028909C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00289098; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1072u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289098; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289098; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 1320u)));  goto L_00289048; }
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[2], 0u + 1013u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00289044; } }
    set32(c.r[17], ld32((c.r[20].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00289024; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028901Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028901Cu) [[unlikely]] return; }
L_0028901C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 352u);  if (t) { goto L_00289030; } }
L_00289024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028902Cu);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028902Cu) [[unlikely]] return; }
L_0028902C:
    set32(c.r[5], c.r[20].w[0] + 352u);
    c.budget -= 1;
L_00289030:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028903Cu); set32(c.r[4], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0028903Cu) [[unlikely]] return; }
L_0028903C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 1072u)));  if (t) { goto L_00289078; } }
L_00289044:
    set32(c.r[16], ld32((c.r[20].w[0] + 1320u)));
    c.budget -= 1;
L_00289048:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00289060; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289058u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00289058u) [[unlikely]] return; }
L_00289058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[16].w[0] + 352u);  if (t) { goto L_0028906C; } }
L_00289060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289068u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00289068u) [[unlikely]] return; }
L_00289068:
    set32(c.r[5], c.r[20].w[0] + 352u);
    c.budget -= 1;
L_0028906C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289074u); set32(c.r[4], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00289074u) [[unlikely]] return; }
L_00289074:
    set32(c.r[2], ld32((c.r[20].w[0] + 1072u)));
    c.budget -= 1;
L_00289078:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289088u); set32(c.r[6], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0059(c, 441u, depth + 1u); else { c.pc = 0x00287D90u; return; } if (c.pc != 0x00289088u) [[unlikely]] return; }
L_00289088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00289450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289454; } }
L_00289098:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0028909C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002890A4u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002890A4u) [[unlikely]] return; }
L_002890A4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002890DC; }
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002891FC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002891F8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002890DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002890E4u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002890E4u) [[unlikely]] return; }
L_002890E4:
    c.f[20] = ld32((c.r[19].w[0] + 720u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002890F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002890F0u) [[unlikely]] return; }
L_002890F0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[19].w[0] + 736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289100u); set32(c.r[6], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00289100u) [[unlikely]] return; }
L_00289100:
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    set32(c.r[5], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289134u); st32((c.r[29].w[0] + 284u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x00289134u) [[unlikely]] return; }
L_00289134:
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[6], c.r[29].w[0] + 624u);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[29].w[0] + 288u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289164u); st32((c.r[29].w[0] + 300u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x00289164u) [[unlikely]] return; }
L_00289164:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289178u); st32((c.r[29].w[0] + 436u), 0u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00289178u) [[unlikely]] return; }
L_00289178:
    ld128((c.r[19].w[0] + 752u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 592u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[29].w[0] + 624u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[2]);
    ld128((c.r[19].w[0] + 768u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 596u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002891A0u); st32((c.r[29].w[0] + 612u), 0u);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x002891A0u) [[unlikely]] return; }
L_002891A0:
    c.f[25] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002891B4u); set32(c.r[6], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x002891B4u) [[unlikely]] return; }
L_002891B4:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002891C0u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002891C0u) [[unlikely]] return; }
L_002891C0:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[25], c.f[20]);
    c.f[1] = ld32((c.r[20].w[0] + 1084u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00289454; } }
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[20].w[0] + 1080u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00289454; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00289450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[25]);  if (t) { goto L_00289450; } }
L_002891F8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002891FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289204u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00289204u) [[unlikely]] return; }
L_00289204:
    c.f[0] = ld32((c.r[19].w[0] + 736u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[29].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 740u));
    st32((c.r[29].w[0] + 404u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 744u));
    st32((c.r[29].w[0] + 408u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 748u));
    st32((c.r[29].w[0] + 412u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028929C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289240u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00289240u) [[unlikely]] return; }
L_00289240:
    c.f[0] = ld32((c.r[20].w[0] + 1392u));
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1396u));
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1400u));
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1404u));
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1264u));
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1268u));
    st32((c.r[29].w[0] + 388u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1272u));
    st32((c.r[29].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1276u));
    st32((c.r[29].w[0] + 396u), c.f[0]);
    c.f[20] = ld32((c.r[21].w[0] + 32u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289294u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 52u, depth + 1u); else { c.pc = 0x0017C710u; return; } if (c.pc != 0x00289294u) [[unlikely]] return; }
L_00289294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[25] = c.f[0];  if (t) { goto L_00289330; } }
L_0028929C:
    set32(c.r[5], c.r[29].w[0] + 640u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002892ACu); set32(c.r[7], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x002892ACu) [[unlikely]] return; }
L_002892AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 640u);
    set32(c.r[6], c.r[21].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002892C0u); set32(c.r[7], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x002892C0u) [[unlikely]] return; }
L_002892C0:
    c.f[1] = ld32((c.r[29].w[0] + 608u));
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.f[0] = ld32((c.r[29].w[0] + 592u));
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.f[3] = ld32((c.r[29].w[0] + 612u));
    c.f[2] = ld32((c.r[29].w[0] + 596u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 616u));
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 608u), c.f[4]);
    st32((c.r[29].w[0] + 612u), c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002892FCu); st32((c.r[29].w[0] + 616u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002892FCu) [[unlikely]] return; }
L_002892FC:
    c.f[20] = ld32((c.r[21].w[0] + 32u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028930Cu); c.f[25] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 45u, depth + 1u); else { c.pc = 0x0015C500u; return; } if (c.pc != 0x0028930Cu) [[unlikely]] return; }
L_0028930C:
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[25]);
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], c.r[29].w[0] + 624u);
    set32(c.r[6], c.r[29].w[0] + 592u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028932Cu); c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x0028932Cu) [[unlikely]] return; }
L_0028932C:
    c.f[25] = c.f[0];
    c.budget -= 1;
L_00289330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289338u); set32(c.r[4], c.r[20].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x00289338u) [[unlikely]] return; }
L_00289338:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.f[1] = fp::ee::sub(c.fcr31, c.f[25], c.f[20]);  goto L_00289420; }
    set32(c.r[3], ld32((c.r[20].w[0] + 1304u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00289394; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028935Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028935Cu) [[unlikely]] return; }
L_0028935C:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289368u); set32(c.r[5], c.r[20].w[0] + 1392u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00289368u) [[unlikely]] return; }
L_00289368:
    c.f[26] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289374u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 30u, depth + 1u); else { c.pc = 0x0028C670u; return; } if (c.pc != 0x00289374u) [[unlikely]] return; }
L_00289374:
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[26], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028941C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289454; } }
L_00289394:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028941C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002893A4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002893A4u) [[unlikely]] return; }
L_002893A4:
    set32(c.r[6], c.r[2].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002893B4u); set32(c.r[5], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x002893B4u) [[unlikely]] return; }
L_002893B4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[20].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002893C4u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002893C4u) [[unlikely]] return; }
L_002893C4:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002893D8u); st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002893D8u) [[unlikely]] return; }
L_002893D8:
    set32(c.r[6], c.r[19].w[0] + 1280u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002893E8u); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002893E8u) [[unlikely]] return; }
L_002893E8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002893FCu); st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002893FCu) [[unlikely]] return; }
L_002893FC:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289408u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x00289408u) [[unlikely]] return; }
L_00289408:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00289454; } }
L_0028941C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[25], c.f[20]);
    c.budget -= 1;
L_00289420:
    c.f[0] = ld32((c.r[20].w[0] + 1084u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00289454; } }
    c.f[1] = fp::ee::add(c.fcr31, c.f[25], c.f[20]);
    c.f[0] = ld32((c.r[20].w[0] + 1080u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00289454; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00289450; } }
    st32((c.r[17].w[0]), c.f[25]);
    c.budget -= 1;
L_00289450:
    set32(c.r[22], 0u + 1u);
    c.budget -= 1;
L_00289454:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[22].d[0] + 0ull;  goto L_00289494; }
    st32((c.r[20].w[0] + 192u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[20].w[0] + 196u), c.f[22]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 200u), c.f[23]);
    st32((c.r[20].w[0] + 204u), c.f[24]);
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289490u); st32((c.r[20].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x00289490u) [[unlikely]] return; }
L_00289490:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_00289494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 752u);  c.pc = t; return; }
L_002894E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[2].d[0] = c.r[2].d[0] | 16706ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289520u); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00289520u) [[unlikely]] return; }
L_00289520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 23920u);
    set32(c.r[3], c.r[3].w[0] + 23932u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x524D0000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21843ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[6], 0u + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289558u); st32((c.r[28].w[0] - 30328u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00289558u) [[unlikely]] return; }
L_00289558:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289564u); set32(c.r[4], c.r[4].w[0] - 2624u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00289564u) [[unlikely]] return; }
L_00289564:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00289580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00289634; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23920u);
    set32(c.r[2], c.r[2].w[0] + 23932u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  if (t) { goto L_002895CC; } }
L_002895C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002895C8u); set32(c.r[18], ld32((c.r[4].w[0] + 28u)));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002895C8u) [[unlikely]] return; }
L_002895C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002895CC:
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002895C0u | kUnwind; return; } goto L_002895C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[28].w[0] - 30328u), 0u);
    set32(c.r[4], c.r[4].w[0] - 2592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002895F0u); st32((c.r[17].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002895F0u) [[unlikely]] return; }
L_002895F0:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002895FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002895FCu) [[unlikely]] return; }
L_002895FC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00289620; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_00289620:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00289638; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289634u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00289634u) [[unlikely]] return; }
L_00289634:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00289638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00289650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028972C; } }
L_0028966C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  goto L_0028972C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00289728; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028969Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x0028969Cu) [[unlikely]] return; }
L_0028969C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 28u)));  goto L_002896C4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 1188u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002896B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002896B8u) [[unlikely]] return; }
L_002896B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289728; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_002896C4:
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00289704; } }
L_002896D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[6], ld32((c.r[6].w[0] + 28u)));  goto L_00289704; }
    set32(c.r[4], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00289700; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_00289700; }
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 1;
L_00289700:
    set32(c.r[6], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 1;
L_00289704:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[5], ld32((c.r[6].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002896D0u | kUnwind; return; } goto L_002896D0; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00289724; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289720u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 183u, depth + 1u); else { c.pc = 0x00289890u; return; } if (c.pc != 0x00289720u) [[unlikely]] return; }
L_00289720:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00289724:
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 1;
L_00289728:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_0028972C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.f[1] = ld32((c.r[16].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028966Cu | kUnwind; return; } goto L_0028966C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00289750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 68u)));  if (t) { goto L_002897CC; } }
L_0028976C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_00289794; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00289784; } }
    st32((c.r[17].w[0] + 68u), c.r[16].w[0]);
    c.budget -= 1;
L_00289784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028978Cu);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0028978Cu) [[unlikely]] return; }
L_0028978C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002897CC; } }
L_00289794:
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 80u));  goto L_002897BC; }
    c.f[1] = 0u;
    c.budget -= 1;
L_002897BC:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_002897CC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028976Cu | kUnwind; return; } goto L_0028976C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002897F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 40u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00289810; } }
L_0028980C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00289810:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028980Cu | kUnwind; return; } goto L_0028980C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289830u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00289830u) [[unlikely]] return; }
L_00289830:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00289890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002898B0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x002898B0u) [[unlikely]] return; }
L_002898B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002898F8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 1180u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  goto L_002898E0; }
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002898D8u); set32(c.r[6], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0057(c, 194u, depth + 1u); else { c.pc = 0x0027E130u; return; } if (c.pc != 0x002898D8u) [[unlikely]] return; }
L_002898D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002898F4; } }
L_002898E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 1188u)));
    st32((c.r[3].w[0] + 84u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1188u)));
    st32((c.r[3].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 5;
L_002898F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002898F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00289910:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289580u | kUnwind; return; } goto L_00289580; }
L_00289920:
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
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289954u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00289954u) [[unlikely]] return; }
L_00289954:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00289960; } }
    set32(c.r[5], c.r[19].w[0] + 52u);
    c.budget -= 1;
L_00289960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289968u); set32(c.r[4], c.r[20].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00289968u) [[unlikely]] return; }
L_00289968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 23952u);
    set32(c.r[3], c.r[3].w[0] + 24008u);
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42530000u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21843ull;
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 76u), c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[20].w[0] + 80u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16640u);
    st32((c.r[20].w[0] + 84u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 88u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 72u), 0u);
    st32((c.r[20].w[0] + 92u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 23;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_002899D8; }
    set32(c.r[5], ld32((c.r[19].w[0] + 144u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002899D4u); set32(c.r[4], c.r[4].w[0] - 2208u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002899D4u) [[unlikely]] return; }
L_002899D4:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002899D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00289A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 16640u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 12;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_00289A48; }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289A44u); set32(c.r[4], c.r[4].w[0] - 2160u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00289A44u) [[unlikely]] return; }
L_00289A44:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00289A48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00289A70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289A80:
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 80u));  goto L_00289AA8; }
    c.f[1] = 0u;
    c.budget -= 1;
L_00289AA8:
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 92u), c.f[0]);  c.pc = t; return; }
L_00289AC0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E0F0u | kUnwind; return; } [[clang::musttail]] return unit_0057(c, 192u, depth); }
L_00289AD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A110u | kUnwind; return; } [[clang::musttail]] return unit_0052(c, 174u, depth); }
L_00289AE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00289B30; } }
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_00289B34; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 11152u)));
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289B28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 66u, depth + 1u); else { c.pc = 0x002C4950u; return; } if (c.pc != 0x00289B28u) [[unlikely]] return; }
L_00289B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00289C18; } }
L_00289B30:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00289B34:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289B40u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00289B40u) [[unlikely]] return; }
L_00289B40:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00289B54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_00289B68; } }
L_00289B54:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_00289B68; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 3;
L_00289B68:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00289B8C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00289B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289B8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00289B8Cu) [[unlikely]] return; }
L_00289B8C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 132u)));  goto L_00289BA4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_00289BEC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 132u)));
    c.budget -= 1;
L_00289BA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00289BC8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00289BC4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289BC4u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 366u, depth + 1u); else { c.pc = 0x002A3780u; return; } if (c.pc != 0x00289BC4u) [[unlikely]] return; }
L_00289BC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00289BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289BD0u);  if (depth < kMaxDepth) unit_005A(c, 256u, depth + 1u); else { c.pc = 0x0028A410u; return; } if (c.pc != 0x00289BD0u) [[unlikely]] return; }
L_00289BD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[17].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289BECu); st16((c.r[17].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x00289BECu) [[unlikely]] return; }
L_00289BEC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00289C14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289BFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00289BFCu) [[unlikely]] return; }
L_00289BFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289C14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289C14u); st32((c.r[2].w[0] + 30160u), 0u);  if (depth < kMaxDepth) unit_0063(c, 48u, depth + 1u); else { c.pc = 0x002AC590u; return; } if (c.pc != 0x00289C14u) [[unlikely]] return; }
L_00289C14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00289C18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00289C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1308u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1316u)));  goto L_00289C68; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289C64u); set32(c.r[4], ld32((c.r[16].w[0] + 1308u)));  if (depth < kMaxDepth) unit_0061(c, 118u, depth + 1u); else { c.pc = 0x002A54C0u; return; } if (c.pc != 0x00289C64u) [[unlikely]] return; }
L_00289C64:
    set32(c.r[4], ld32((c.r[16].w[0] + 1316u)));
    c.budget -= 1;
L_00289C68:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00289C88; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289C80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289C80u) [[unlikely]] return; }
L_00289C80:
    st32((c.r[16].w[0] + 1316u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00289C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289C90u); set32(c.r[5], 0u + 10200u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00289C90u) [[unlikely]] return; }
L_00289C90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289C9Cu); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00289C9Cu) [[unlikely]] return; }
L_00289C9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289CB0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00289CB0u) [[unlikely]] return; }
L_00289CB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00289CE0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00289CDC; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  goto L_00289CE0; }
L_00289CDC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00289CE0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 580u)));  goto L_00289CF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289CF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 13u, depth + 1u); else { c.pc = 0x002A8120u; return; } if (c.pc != 0x00289CF0u) [[unlikely]] return; }
L_00289CF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 1;
L_00289CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289CFCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003A(c, 320u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x00289CFCu) [[unlikely]] return; }
L_00289CFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289D08u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003A(c, 326u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x00289D08u) [[unlikely]] return; }
L_00289D08:
    set32(c.r[4], ld32((c.r[16].w[0] + 588u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 592u)));  goto L_00289D34; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 588u), 0u);  goto L_00289D30; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289D2Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289D2Cu) [[unlikely]] return; }
L_00289D2C:
    st32((c.r[16].w[0] + 588u), 0u);
    c.budget -= 1;
L_00289D30:
    set32(c.r[4], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 1;
L_00289D34:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 600u)));  goto L_00289D5C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 592u), 0u);  goto L_00289D58; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289D54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289D54u) [[unlikely]] return; }
L_00289D54:
    st32((c.r[16].w[0] + 592u), 0u);
    c.budget -= 1;
L_00289D58:
    set32(c.r[4], ld32((c.r[16].w[0] + 600u)));
    c.budget -= 1;
L_00289D5C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 604u)));  goto L_00289D84; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 600u), 0u);  goto L_00289D80; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289D7Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289D7Cu) [[unlikely]] return; }
L_00289D7C:
    st32((c.r[16].w[0] + 600u), 0u);
    c.budget -= 1;
L_00289D80:
    set32(c.r[4], ld32((c.r[16].w[0] + 604u)));
    c.budget -= 1;
L_00289D84:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00289DAC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 604u), 0u);  goto L_00289DA8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289DA4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289DA4u) [[unlikely]] return; }
L_00289DA4:
    st32((c.r[16].w[0] + 604u), 0u);
    c.budget -= 1;
L_00289DA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00289DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289DB4u);  if (depth < kMaxDepth) unit_006A(c, 77u, depth + 1u); else { c.pc = 0x002C8C40u; return; } if (c.pc != 0x00289DB4u) [[unlikely]] return; }
L_00289DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289DBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 249u, depth + 1u); else { c.pc = 0x002F3A40u; return; } if (c.pc != 0x00289DBCu) [[unlikely]] return; }
L_00289DBC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1408u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_00289DE0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289DD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289DD8u) [[unlikely]] return; }
L_00289DD8:
    st32((c.r[16].w[0] + 1408u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 2;
L_00289DE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00289DEC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00289DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289DF4u); set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  if (depth < kMaxDepth) unit_0068(c, 215u, depth + 1u); else { c.pc = 0x002C2780u; return; } if (c.pc != 0x00289DF4u) [[unlikely]] return; }
L_00289DF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289E00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x00289E00u) [[unlikely]] return; }
L_00289E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289E08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x00289E08u) [[unlikely]] return; }
L_00289E08:
    st32((c.r[16].w[0] + 1072u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_00289E30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289E24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 227u, depth + 1u); else { c.pc = 0x00289E70u; return; } if (c.pc != 0x00289E24u) [[unlikely]] return; }
L_00289E24:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 160u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
L_00289E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 144u)));  if (t) { goto L_00289E40; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 2;
L_00289E40:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289E54u); set32(c.r[5], 0u + 9u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289E54u) [[unlikely]] return; }
L_00289E54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00289E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289E98u); set32(c.r[5], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x00291E60u; return; } if (c.pc != 0x00289E98u) [[unlikely]] return; }
L_00289E98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 138u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289EACu); set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 8u, depth + 1u); else { c.pc = 0x0028C0A0u; return; } if (c.pc != 0x00289EACu) [[unlikely]] return; }
L_00289EAC:
    set32(c.r[3], c.r[17].w[0] + c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 124u)));
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] + 468u);
    set32(c.r[2], ld32((c.r[2].w[0] + 468u)));
    set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 15;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_00289EE8; }
L_00289EE8:
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00289F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 132u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00289F84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028A090; }
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 52u);  goto L_00289F90; }
L_00289F84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A090; } }
L_00289F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289F98u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x00289F98u) [[unlikely]] return; }
L_00289F98:
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0028A090; }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 148u)));  goto L_00289FD4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull | 50002ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289FC8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00289FC8u) [[unlikely]] return; }
L_00289FC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028A090; }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_00289FD4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 148u)));  goto L_0028A000; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull | 50003ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289FF4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00289FF4u) [[unlikely]] return; }
L_00289FF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A080; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_0028A000:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 148u)));  goto L_0028A02C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull | 50004ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A020u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028A020u) [[unlikely]] return; }
L_0028A020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A080; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_0028A02C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 148u)));  goto L_0028A058; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull | 50005ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A04Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028A04Cu) [[unlikely]] return; }
L_0028A04C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028A080; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_0028A058:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028A08C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull | 50006ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A078u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028A078u) [[unlikely]] return; }
L_0028A078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028A08C; } }
L_0028A080:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A090; } }
L_0028A08C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028A090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028A0A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A0C8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0028A0C8u) [[unlikely]] return; }
L_0028A0C8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0028A11C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028A118; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[16].w[0]));  goto L_0028A0F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 1140u));  if (t) { goto L_0028A38C; } }
    c.f[3] = ld32((c.r[16].w[0]));
    c.budget -= 1;
L_0028A0F8:
    c.f[2] = ld32((c.r[17].w[0] + 208u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 216u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A110u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x0028A110u) [[unlikely]] return; }
L_0028A110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0028A388; } }
L_0028A118:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028A11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A124u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0028A124u) [[unlikely]] return; }
L_0028A124:
    set32(c.r[18], c.r[2].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A138u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0028A138u) [[unlikely]] return; }
L_0028A138:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[5], c.r[17].w[0] + 208u);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A168u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0028A168u) [[unlikely]] return; }
L_0028A168:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A190u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0028A190u) [[unlikely]] return; }
L_0028A190:
    c.f[12] = ld32((c.r[2].w[0] + 176u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A19Cu); set32(c.r[18], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0028A19Cu) [[unlikely]] return; }
L_0028A19C:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = ld32((c.r[18].w[0] + 20u));  goto L_0028A1C8; }
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 208u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_0028A20C; } }
    c.f[12] = ld32((c.r[18].w[0] + 20u));
    c.budget -= 1;
L_0028A1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A1D0u);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0028A1D0u) [[unlikely]] return; }
L_0028A1D0:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 136u), 0u);  goto L_0028A1FC; }
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 212u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_0028A20C; } }
    st32((c.r[29].w[0] + 136u), 0u);
    c.budget -= 1;
L_0028A1FC:
    st32((c.r[29].w[0] + 120u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 216u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_0028A20C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A218u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0028A218u) [[unlikely]] return; }
L_0028A218:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A224u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0028A224u) [[unlikely]] return; }
L_0028A224:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A230u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x0028A230u) [[unlikely]] return; }
L_0028A230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A238u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 134u, depth + 1u); else { c.pc = 0x00137278u; return; } if (c.pc != 0x0028A238u) [[unlikely]] return; }
L_0028A238:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 7;
    if (c.r[4].sd[0] < 0) { c.r[3].d[0] = c.r[4].d[0] & 65535ull;  goto L_0028A264; }
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0028A270; } }
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 1;
L_0028A264:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 3;
L_0028A270:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;  goto L_0028A28C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  if (t) { goto L_0028A298; } }
    c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;
    c.budget -= 1;
L_0028A28C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0028A298; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0028A298:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0028A2EC; } }
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];  goto L_0028A2B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];  if (t) { goto L_0028A2BC; } }
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 1;
L_0028A2B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_0028A2BC:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;  goto L_0028A2D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_0028A2E4; } }
    c.r[1].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;
    c.budget -= 1;
L_0028A2D8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0028A334; } }
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0028A2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A334; } }
L_0028A2EC:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];  goto L_0028A300; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];  if (t) { goto L_0028A308; } }
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 1;
L_0028A300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_0028A308:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;  goto L_0028A324; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  if (t) { goto L_0028A330; } }
    c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;
    c.budget -= 1;
L_0028A324:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u - c.r[3].w[0]);  goto L_0028A334; }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0028A330:
    set32(c.r[4], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0028A334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A33Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0028A33Cu) [[unlikely]] return; }
L_0028A33C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A350u); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 30u, depth + 1u); else { c.pc = 0x0028C670u; return; } if (c.pc != 0x0028A350u) [[unlikely]] return; }
L_0028A350:
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[28].w[0] - 32184u));
    c.f[13] = c.f[21];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A384u);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x0028A384u) [[unlikely]] return; }
L_0028A384:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0028A388:
    c.f[0] = ld32((c.r[17].w[0] + 1140u));
    c.budget -= 1;
L_0028A38C:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A3A4u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0028A3A4u) [[unlikely]] return; }
L_0028A3A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0028A3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A3E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 237u, depth + 1u); else { c.pc = 0x0028A0A0u; return; } if (c.pc != 0x0028A3E4u) [[unlikely]] return; }
L_0028A3E4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028A410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A434u); set32(c.r[4], ld32((c.r[4].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028A434u) [[unlikely]] return; }
L_0028A434:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 16u)));  goto L_0028A4D4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028A4D0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 148u)));  goto L_0028A47C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028A4D0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_0028A47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A484u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 233u, depth + 1u); else { c.pc = 0x00292020u; return; } if (c.pc != 0x0028A484u) [[unlikely]] return; }
L_0028A484:
    st16((c.r[17].w[0] + 108u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A494u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 242u, depth + 1u); else { c.pc = 0x00292100u; return; } if (c.pc != 0x0028A494u) [[unlikely]] return; }
L_0028A494:
    st16((c.r[17].w[0] + 112u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 238u, depth + 1u); else { c.pc = 0x00292090u; return; } if (c.pc != 0x0028A4A4u) [[unlikely]] return; }
L_0028A4A4:
    st16((c.r[17].w[0] + 114u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 246u, depth + 1u); else { c.pc = 0x00292170u; return; } if (c.pc != 0x0028A4B4u) [[unlikely]] return; }
L_0028A4B4:
    st16((c.r[17].w[0] + 118u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 229u, depth + 1u); else { c.pc = 0x00291FB0u; return; } if (c.pc != 0x0028A4C4u) [[unlikely]] return; }
L_0028A4C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 126u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[17].w[0] + 120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0028A4D0:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_0028A4D4:
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A4E0u) [[unlikely]] return; }
L_0028A4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 5u, depth + 1u); else { c.pc = 0x00288060u; return; } if (c.pc != 0x0028A4E8u) [[unlikely]] return; }
L_0028A4E8:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A4F8u) [[unlikely]] return; }
L_0028A4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028A510:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_0028A518:
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 608u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 1100u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 16;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[3].w[0] + 804u);  if (t) { goto L_0028AC58; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_0028AB20; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_0028A6B8; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { st32((c.r[21].w[0] + 1104u), 0u);  goto L_0028A580; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028AC9C; } }
L_0028A580:
    c.r[20].d[0] = c.r[17].d[0] & 1ull;
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[19].d[0] = c.r[17].d[0] & 2ull;
    c.r[18].d[0] = c.r[17].d[0] & 4ull;
    c.r[22].d[0] = c.r[17].d[0] & 8ull;
    c.r[23].d[0] = c.r[17].d[0] & 16ull;
    st32((c.r[21].w[0] + 1080u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[21].w[0] + 1084u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[21].w[0] + 1088u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[21].w[0] + 1092u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[30].d[0] = c.r[17].d[0] & 32ull;  if (t) { goto L_0028A5C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028A620; } }
L_0028A5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A5D0u); set32(c.r[5], 0u + 41u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028A5D0u) [[unlikely]] return; }
L_0028A5D0:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028A5F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028A600; } }
L_0028A5F0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0028A600:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028A620; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0028A618; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028A618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A620; } }
L_0028A620:
    st32((c.r[21].w[0] + 1072u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0028A638; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028A690; } }
L_0028A638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A640u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028A640u) [[unlikely]] return; }
L_0028A640:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028A660; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028A670; } }
L_0028A660:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0028A670:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028A690; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0028A688; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028A688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A690; } }
L_0028A690:
    st32((c.r[21].w[0] + 1076u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st32((c.r[21].w[0] + 1096u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 140u)));
    set32(c.r[4], c.r[4].w[0] + 160u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1256u), c.r[4].w[0]);  if (t) { goto L_0028AC9C; } }
L_0028A6B8:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A6C8u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A6C8u) [[unlikely]] return; }
L_0028A6C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[21].w[0] + 16u)));  goto L_0028A6DC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1104u), c.r[3].w[0]);  if (t) { goto L_0028A738; } }
L_0028A6DC:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A6F4u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A6F4u) [[unlikely]] return; }
L_0028A6F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[21].w[0] + 16u)));  goto L_0028A708; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1104u), c.r[3].w[0]);  if (t) { goto L_0028A738; } }
L_0028A708:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A720u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A720u) [[unlikely]] return; }
L_0028A720:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_0028A734; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1104u), c.r[3].w[0]);  if (t) { goto L_0028A738; } }
L_0028A734:
    st32((c.r[21].w[0] + 1104u), c.r[3].w[0]);
    c.budget -= 1;
L_0028A738:
    set32(c.r[4], ld32((c.r[21].w[0] + 1104u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_0028A90C; }
    st32((c.r[21].w[0] + 1080u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[21].w[0] + 1084u), c.r[2].w[0]);
    set32(c.r[20], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[21].w[0] + 1088u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 1092u), c.r[2].w[0]);
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].d[0] = c.r[20].d[0] + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A780u); c.r[30].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0028A780u) [[unlikely]] return; }
L_0028A780:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 580u)));  goto L_0028A804; }
    set32(c.r[3], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0028A7A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028A7FC; } }
L_0028A7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A7ACu); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028A7ACu) [[unlikely]] return; }
L_0028A7AC:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028A7CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028A7DC; } }
L_0028A7CC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0028A7DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028A7FC; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0028A7F4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028A7F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A7FC; } }
L_0028A7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1072u), c.r[3].w[0]);  if (t) { goto L_0028A87C; } }
L_0028A804:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0028A814; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028A878; } }
L_0028A814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A81Cu); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028A81Cu) [[unlikely]] return; }
L_0028A81C:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028A83C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028A84C; } }
L_0028A83C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0028A84C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028A878; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0028A86C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028A870; } }
L_0028A86C:
    set32(c.r[3], c.r[3].w[0] + 40u);
    c.budget -= 1;
L_0028A870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A878; } }
L_0028A878:
    st32((c.r[21].w[0] + 1072u), c.r[3].w[0]);
    c.budget -= 1;
L_0028A87C:
    set32(c.r[3], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0028A890; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028A8E8; } }
L_0028A890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A898u); set32(c.r[5], 0u + 46u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028A898u) [[unlikely]] return; }
L_0028A898:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028A8B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028A8C8; } }
L_0028A8B8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0028A8C8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028A8E8; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0028A8E0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028A8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A8E8; } }
L_0028A8E8:
    st32((c.r[21].w[0] + 1076u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st32((c.r[21].w[0] + 1096u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 140u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1256u), 0u);  if (t) { goto L_0028AC9C; } }
L_0028A90C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 16u));  goto L_0028A9E4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[20], 0u + 1u);
    c.r[4].d[0] = c.r[3].d[0] | 34464ull;
    st32((c.r[21].w[0] + 1080u), 0u);
    c.f[0] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].d[0] = c.r[20].d[0] + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 1084u), c.f[0]);
    st32((c.r[21].w[0] + 1088u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 1092u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_0028A960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028A9C8; } }
L_0028A960:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A96Cu); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028A96Cu) [[unlikely]] return; }
L_0028A96C:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028A98C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028A99C; } }
L_0028A98C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0028A99C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028A9C8; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0028A9BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028A9C0; } }
L_0028A9BC:
    set32(c.r[3], c.r[3].w[0] + 40u);
    c.budget -= 1;
L_0028A9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028A9C8; } }
L_0028A9C8:
    st32((c.r[21].w[0] + 1072u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    st32((c.r[21].w[0] + 1076u), 0u);
    st32((c.r[21].w[0] + 1096u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 140u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1256u), 0u);  if (t) { goto L_0028AC9C; } }
L_0028A9E4:
    c.r[20].d[0] = c.r[17].d[0] & 64ull;
    c.r[19].d[0] = c.r[17].d[0] & 128ull;
    c.r[18].d[0] = c.r[17].d[0] & 256ull;
    c.r[22].d[0] = c.r[17].d[0] & 512ull;
    c.r[23].d[0] = c.r[17].d[0] & 1024ull;
    st32((c.r[21].w[0] + 1080u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[21].w[0] + 1084u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[21].w[0] + 1088u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[21].w[0] + 1092u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[30].d[0] = c.r[17].d[0] & 2048ull;  if (t) { goto L_0028AA28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028AA84; } }
L_0028AA28:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AA34u); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028AA34u) [[unlikely]] return; }
L_0028AA34:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028AA54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028AA64; } }
L_0028AA54:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0028AA64:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028AA84; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0028AA7C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028AA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028AA84; } }
L_0028AA84:
    st32((c.r[21].w[0] + 1072u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0028AA9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028AAF4; } }
L_0028AA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AAA4u); set32(c.r[5], 0u + 43u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028AAA4u) [[unlikely]] return; }
L_0028AAA4:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028AAC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028AAD4; } }
L_0028AAC4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0028AAD4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028AAF4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0028AAEC; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028AAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028AAF4; } }
L_0028AAF4:
    st32((c.r[21].w[0] + 1076u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] >> 4);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st32((c.r[21].w[0] + 1096u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 140u)));
    set32(c.r[4], c.r[4].w[0] + 400u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1256u), c.r[4].w[0]);  if (t) { goto L_0028AC9C; } }
L_0028AB20:
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[21].w[0] + 1104u), c.r[3].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 1080u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[21].w[0] + 1084u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[21].w[0] + 1088u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[21].w[0] + 1092u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_0028AB6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028ABC4; } }
L_0028AB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AB74u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028AB74u) [[unlikely]] return; }
L_0028AB74:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028AB94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028ABA4; } }
L_0028AB94:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0028ABA4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028ABC4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0028ABBC; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028ABBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028ABC4; } }
L_0028ABC4:
    st32((c.r[21].w[0] + 1072u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0028ABDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028AC34; } }
L_0028ABDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ABE4u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028ABE4u) [[unlikely]] return; }
L_0028ABE4:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028AC04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028AC14; } }
L_0028AC04:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0028AC14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028AC34; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0028AC2C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028AC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028AC34; } }
L_0028AC34:
    st32((c.r[21].w[0] + 1076u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st32((c.r[21].w[0] + 1096u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 140u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1256u), 0u);  if (t) { goto L_0028AC9C; } }
L_0028AC58:
    set32(c.r[3], 0u + 5u);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[21].w[0] + 1104u), c.r[3].w[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[21].w[0] + 1072u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 1076u), 0u);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 608u)));
    c.r[23].d[0] = 0ull + 0ull;
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] >> 20);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st32((c.r[21].w[0] + 1096u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 140u)));
    st32((c.r[3].w[0] + 1256u), 0u);
    c.budget -= 17;
L_0028AC9C:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 164u)));  goto L_0028ACB8; }
    set32(c.r[4], ld32((c.r[21].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_0028ACC8; } }
L_0028ACB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[21].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 4;
L_0028ACC8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 164u)));  goto L_0028ACE4; }
    set32(c.r[4], ld32((c.r[21].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_0028ACF4; } }
L_0028ACE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[21].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 4;
L_0028ACF4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 164u)));  goto L_0028AD10; }
    set32(c.r[4], ld32((c.r[21].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_0028AD1C; } }
L_0028AD10:
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[21].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 3;
L_0028AD1C:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 164u)));  goto L_0028AD38; }
    set32(c.r[4], ld32((c.r[21].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_0028AD48; } }
L_0028AD38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[21].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 4;
L_0028AD48:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 164u)));  goto L_0028AD64; }
    set32(c.r[4], ld32((c.r[21].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_0028AD74; } }
L_0028AD64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[21].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 4;
L_0028AD74:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 164u)));  goto L_0028AD90; }
    set32(c.r[4], ld32((c.r[21].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_0028ADA0; } }
L_0028AD90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[21].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 4;
L_0028ADA0:
    set32(c.r[3], ld32((c.r[21].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 140u)));  goto L_0028ADF8; }
    set32(c.r[4], ld32((c.r[21].w[0] + 1096u)));
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 4ull;  goto L_0028ADD8; }
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[21].w[0] + 1096u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1096u), c.r[3].w[0]);  if (t) { goto L_0028ADF4; } }
L_0028ADD8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028ADF4; } }
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[21].w[0] + 1096u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[21].w[0] + 1096u), c.r[3].w[0]);
    c.budget -= 5;
L_0028ADF4:
    set32(c.r[3], ld32((c.r[21].w[0] + 140u)));
    c.budget -= 1;
L_0028ADF8:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[21].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_0028AE2C; }
    set32(c.r[4], ld32((c.r[21].w[0] + 1104u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 140u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    st32((c.r[3].w[0] + 1252u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 8;
L_0028AE2C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0028AE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AE80u); set32(c.r[4], ld32((c.r[4].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028AE80u) [[unlikely]] return; }
L_0028AE80:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 120u)));  goto L_0028AEB4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AEA0u); set32(c.r[5], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 253u, depth + 1u); else { c.pc = 0x00292200u; return; } if (c.pc != 0x0028AEA0u) [[unlikely]] return; }
L_0028AEA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AEACu); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0028AEACu) [[unlikely]] return; }
L_0028AEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0028AEC0; } }
L_0028AEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AEBCu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0028AEBCu) [[unlikely]] return; }
L_0028AEBC:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0028AEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AEC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0028AEC8u) [[unlikely]] return; }
L_0028AEC8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_0028AEDC; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028AEDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 2024u));
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 1140u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AF00u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_006A(c, 58u, depth + 1u); else { c.pc = 0x002C8900u; return; } if (c.pc != 0x0028AF00u) [[unlikely]] return; }
L_0028AF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AF08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x0028AF08u) [[unlikely]] return; }
L_0028AF08:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[20]);
    st32((c.r[16].w[0] + 1136u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028AF40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028AFA8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  goto L_0028AF9C; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028AF98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028AF98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028AFAC; } }
L_0028AF98:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0028AF9C:
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AFA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028AFA8u) [[unlikely]] return; }
L_0028AFA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028AFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AFB4u);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0028AFB4u) [[unlikely]] return; }
L_0028AFB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028AFE0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1188u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0028B260; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B25C; } }
L_0028AFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AFE8u);  if (depth < kMaxDepth) unit_0052(c, 139u, depth + 1u); else { c.pc = 0x00269B20u; return; } if (c.pc != 0x0028AFE8u) [[unlikely]] return; }
L_0028AFE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  goto L_0028B030; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B000u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B000u) [[unlikely]] return; }
L_0028B000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B02C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B024u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0028B024u) [[unlikely]] return; }
L_0028B024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B25C; } }
L_0028B02C:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0028B030:
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B03Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B03Cu) [[unlikely]] return; }
L_0028B03C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1100u)));  goto L_0028B06C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B060u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0028B060u) [[unlikely]] return; }
L_0028B060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B25C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1100u)));
    c.budget -= 1;
L_0028B06C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_0028B0E0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028B0A4; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028B0A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028B0A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028B244; } }
L_0028B0A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028B0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B0ACu);  if (depth < kMaxDepth) unit_0059(c, 408u, depth + 1u); else { c.pc = 0x002877B0u; return; } if (c.pc != 0x0028B0ACu) [[unlikely]] return; }
L_0028B0AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0028B240; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B0D4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0028B0D4u) [[unlikely]] return; }
L_0028B0D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B25C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_0028B0E0:
    set32(c.r[2], ld32((c.r[2].w[0] + 13280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B0F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0028B0F4u) [[unlikely]] return; }
L_0028B0F4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_0028B1A8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 452u);  if (t) { goto L_0028B190; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 1;
L_0028B120:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B13Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B13Cu) [[unlikely]] return; }
L_0028B13C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0028B190; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B14Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028B14Cu) [[unlikely]] return; }
L_0028B14C:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], c.r[20].w[0] + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B15Cu); set32(c.r[4], c.r[2].w[0] + 13296u);  if (depth < kMaxDepth) unit_0016(c, 254u, depth + 1u); else { c.pc = 0x0017B7B0u; return; } if (c.pc != 0x0028B15Cu) [[unlikely]] return; }
L_0028B15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B18C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], ld32((c.r[2].w[0] + 13264u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 13268u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B184u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0028B184u) [[unlikely]] return; }
L_0028B184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B25C; } }
L_0028B18C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0028B190:
    c.r[2].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028B120u | kUnwind; return; } goto L_0028B120; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B240; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_0028B1A8:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[20], c.r[2].w[0] + 13376u);
    set32(c.r[2], c.r[3].w[0] + 112u);
    set32(c.r[18], ld32((c.r[3].w[0] + 960u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 452u);  if (t) { goto L_0028B234; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 1;
L_0028B1C8:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B1E4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B1E4u) [[unlikely]] return; }
L_0028B1E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0028B234; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B1F4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028B1F4u) [[unlikely]] return; }
L_0028B1F4:
    set32(c.r[5], c.r[21].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B200u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 21u, depth + 1u); else { c.pc = 0x0017C2C0u; return; } if (c.pc != 0x0028B200u) [[unlikely]] return; }
L_0028B200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B230; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], ld32((c.r[2].w[0] + 13264u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 13268u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B228u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0028B228u) [[unlikely]] return; }
L_0028B228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B25C; } }
L_0028B230:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0028B234:
    c.r[2].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028B1C8u | kUnwind; return; } goto L_0028B1C8; }
L_0028B240:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028B244:
    set32(c.r[5], 0u + 6u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B25Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0028B25Cu) [[unlikely]] return; }
L_0028B25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0028B260:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0028B280:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 124u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[7].d[0] + 0ull;  goto L_0028B2A0; }
L_0028B2A0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[7].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] - c.r[3].w[0]);  goto L_0028B2D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 122u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0028B308; } }
L_0028B2D4:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[7].d[0] + 0ull;  goto L_0028B2F4; }
L_0028B2F4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[7].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0028B308:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 122u)));
    set32(c.r[5], 0u + 84u);
    st16((c.r[4].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00288000u < 16384u) { entry = entries_005A[(t - 0x00288000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0028B330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 84u)));  goto L_0028B350; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028B3B4; } }
L_0028B350:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 172u)));  goto L_0028B368; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028B3B4; } }
L_0028B368:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B388; } }
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028B3B4; } }
L_0028B388:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028B3B4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B3A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B3A0u) [[unlikely]] return; }
L_0028B3A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B3B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028B3B4; } }
L_0028B3B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028B3B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028B3C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028B418; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[18].w[0] + 816u);
    set32(c.r[7], ld32((c.r[18].w[0] + 1296u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B3FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 405u, depth + 1u); else { c.pc = 0x00267750u; return; } if (c.pc != 0x0028B3FCu) [[unlikely]] return; }
L_0028B3FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_0028B420; }
    set32(c.r[3], ld32((c.r[18].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_0028B41C; } }
L_0028B418:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0028B41C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0028B420:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0028B42C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 1;
L_0028B42C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0028B54C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B43Cu); set32(c.r[5], ld32((c.r[18].w[0] + 1296u)));  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x0028B43Cu) [[unlikely]] return; }
L_0028B43C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028B548; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 180u)));  goto L_0028B520; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B458u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0028B458u) [[unlikely]] return; }
L_0028B458:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 180u)));  goto L_0028B498; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B470u); set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028B470u) [[unlikely]] return; }
L_0028B470:
    c.r[3].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028B494; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028B548; } }
L_0028B494:
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    c.budget -= 1;
L_0028B498:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0] + 16u)));  goto L_0028B4EC; }
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B4B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B4B4u) [[unlikely]] return; }
L_0028B4B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B548; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 816u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B4D4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 29u, depth + 1u); else { c.pc = 0x002F0860u; return; } if (c.pc != 0x0028B4D4u) [[unlikely]] return; }
L_0028B4D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 976u), c.r[16].w[0]);  if (t) { goto L_0028B548; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_0028B548; } }
L_0028B4EC:
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B4F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B4F8u) [[unlikely]] return; }
L_0028B4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B508u); set32(c.r[4], c.r[18].w[0] + 816u);  if (depth < kMaxDepth) unit_0051(c, 319u, depth + 1u); else { c.pc = 0x00266B90u; return; } if (c.pc != 0x0028B508u) [[unlikely]] return; }
L_0028B508:
    st32((c.r[18].w[0] + 976u), 0u);
    set32(c.r[3], 0u - 33u);
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_0028B548; } }
L_0028B520:
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028B548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B534u); set32(c.r[4], c.r[18].w[0] + 816u);  if (depth < kMaxDepth) unit_0051(c, 319u, depth + 1u); else { c.pc = 0x00266B90u; return; } if (c.pc != 0x0028B534u) [[unlikely]] return; }
L_0028B534:
    st32((c.r[18].w[0] + 976u), 0u);
    set32(c.r[3], 0u - 33u);
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 5;
L_0028B548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0028B54C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028B560:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0028B580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028B5C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[16].w[0] + 816u);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B5B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 406u, depth + 1u); else { c.pc = 0x00267770u; return; } if (c.pc != 0x0028B5B0u) [[unlikely]] return; }
L_0028B5B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 4;
L_0028B5C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0028B618; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0028B5E0; }
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 1;
L_0028B5E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028B614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B5F0u); set32(c.r[5], ld32((c.r[16].w[0] + 1296u)));  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x0028B5F0u) [[unlikely]] return; }
L_0028B5F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028B614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B600u); set32(c.r[4], c.r[16].w[0] + 816u);  if (depth < kMaxDepth) unit_0051(c, 319u, depth + 1u); else { c.pc = 0x00266B90u; return; } if (c.pc != 0x0028B600u) [[unlikely]] return; }
L_0028B600:
    st32((c.r[16].w[0] + 976u), 0u);
    set32(c.r[3], 0u - 33u);
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 5;
L_0028B614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028B618:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028B630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028B6A0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 140u)));  goto L_0028B684; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 140u)));  goto L_0028B668; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028B6C4; } }
L_0028B668:
    set32(c.r[6], 0u + 1584u);
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    set32(c.r[4], c.r[3].w[0] + 1264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B67Cu); set32(c.r[5], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0028B67Cu) [[unlikely]] return; }
L_0028B67C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B6C0; } }
L_0028B684:
    set32(c.r[6], 0u + 1584u);
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    set32(c.r[4], c.r[3].w[0] + 1264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B698u); set32(c.r[5], c.r[2].w[0] + 400u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0028B698u) [[unlikely]] return; }
L_0028B698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028B6C0; } }
L_0028B6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B6A8u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0028B6A8u) [[unlikely]] return; }
L_0028B6A8:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028B6C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B6C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 369u, depth + 1u); else { c.pc = 0x002934C0u; return; } if (c.pc != 0x0028B6C0u) [[unlikely]] return; }
L_0028B6C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028B6C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028B6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 516u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028B744; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0028B704; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 508u), c.r[2].w[0]);  if (t) { goto L_0028B720; } }
L_0028B704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B70Cu);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x0028B70Cu) [[unlikely]] return; }
L_0028B70C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 508u), c.f[0]);
    c.budget -= 5;
L_0028B720:
    c.f[0] = ld32((c.r[16].w[0] + 508u));
    st32((c.r[16].w[0] + 512u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 512u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B734u); set32(c.r[4], ld32((c.r[16].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 188u, depth + 1u); else { c.pc = 0x00159500u; return; } if (c.pc != 0x0028B734u) [[unlikely]] return; }
L_0028B734:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 4;
L_0028B744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028B760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 496u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B780u); set32(c.r[4], ld32((c.r[4].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x0028B780u) [[unlikely]] return; }
L_0028B780:
    st32((c.r[16].w[0] + 504u), 0u);
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B790u); set32(c.r[4], ld32((c.r[16].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 151u, depth + 1u); else { c.pc = 0x00158EE0u; return; } if (c.pc != 0x0028B790u) [[unlikely]] return; }
L_0028B790:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028B7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B7CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B7CCu) [[unlikely]] return; }
L_0028B7CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));  goto L_0028B7DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028B830; } }
L_0028B7DC:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[3].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    c.r[6].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[5], c.r[5].w[0] >> 4);
    c.budget -= 16;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[5].d[0] & 15ull;  if (t) { goto L_0028B830; } }
    set32(c.r[3], c.r[4].w[0] >> 4);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0028B830; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028B830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028B840:
    set32(c.r[3], ld32((c.r[4].w[0] + 1296u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 1296u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[3].w[0] + 176u);
    set32(c.r[4], c.r[5].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & 15ull;
    c.r[4].d[0] = c.r[6].d[0] & 15ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028B898; } }
    set32(c.r[4], c.r[6].w[0] >> 4);
    set32(c.r[3], c.r[5].w[0] >> 4);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0028B898; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028B898:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028B8A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0028B8F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0028B8DC; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0028B8DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028B8F8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 4;
L_0028B8F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028B8F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 1100u), c.r[17].w[0]);  if (t) { goto L_0028B930; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 140u)));
    st32((c.r[2].w[0] + 13268u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 140u)));
    st32((c.r[2].w[0] + 13360u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 140u)));
    st32((c.r[2].w[0] + 13264u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0028B928; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0028B928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B930u);  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00290450u; return; } if (c.pc != 0x0028B930u) [[unlikely]] return; }
L_0028B930:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0028B9FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B944u); set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028B944u) [[unlikely]] return; }
L_0028B944:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B95Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0028B95Cu) [[unlikely]] return; }
L_0028B95C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], 0u + 13u);  goto L_0028B970; }
    set32(c.r[6], 0u + 12u);
    c.budget -= 1;
L_0028B970:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 10200u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B98Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x0028B98Cu) [[unlikely]] return; }
L_0028B98C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0028B9C0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B9A8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0028B9A8u) [[unlikely]] return; }
L_0028B9A8:
    set32(c.r[25], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B9C0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B9C0u) [[unlikely]] return; }
L_0028B9C0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[25], ld32((c.r[18].w[0] + 16u)));  goto L_0028BA3C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028B9D8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0028B9D8:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B9F4u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0028B9F4u) [[unlikely]] return; }
L_0028B9F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028BA38; } }
L_0028B9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BA04u); set32(c.r[5], 0u + 600u);  if (depth < kMaxDepth) unit_0062(c, 78u, depth + 1u); else { c.pc = 0x002A8A10u; return; } if (c.pc != 0x0028BA04u) [[unlikely]] return; }
L_0028BA04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028BA38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028BA1C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0028BA1C:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BA38u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0028BA38u) [[unlikely]] return; }
L_0028BA38:
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_0028BA3C:
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BA48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028BA48u) [[unlikely]] return; }
L_0028BA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BA50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 5u, depth + 1u); else { c.pc = 0x00288060u; return; } if (c.pc != 0x0028BA50u) [[unlikely]] return; }
L_0028BA50:
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BA60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028BA60u) [[unlikely]] return; }
L_0028BA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BA68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 408u, depth + 1u); else { c.pc = 0x002877B0u; return; } if (c.pc != 0x0028BA68u) [[unlikely]] return; }
L_0028BA68:
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BA7Cu); set32(c.r[5], 0u + 30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028BA7Cu) [[unlikely]] return; }
L_0028BA7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028BAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 1100u), c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028BAEC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    st32((c.r[2].w[0] + 13268u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    st32((c.r[2].w[0] + 13360u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    st32((c.r[2].w[0] + 13264u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0028BAE4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0028BAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BAECu);  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00290450u; return; } if (c.pc != 0x0028BAECu) [[unlikely]] return; }
L_0028BAEC:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BAFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028BAFCu) [[unlikely]] return; }
L_0028BAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 5u, depth + 1u); else { c.pc = 0x00288060u; return; } if (c.pc != 0x0028BB04u) [[unlikely]] return; }
L_0028BB04:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028BB14u) [[unlikely]] return; }
L_0028BB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 408u, depth + 1u); else { c.pc = 0x002877B0u; return; } if (c.pc != 0x0028BB1Cu) [[unlikely]] return; }
L_0028BB1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028BB30:
    set32(c.r[29], c.r[29].w[0] - 512u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[1] = ld32((c.r[4].w[0] + 1148u));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], c.r[2].w[0] + 76u);  if (t) { goto L_0028BBCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB70u); set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028BB70u) [[unlikely]] return; }
L_0028BB70:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 164u)));  goto L_0028BB9C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[3] = ld32((c.r[16].w[0] + 76u));  goto L_0028BB94; }
    c.f[3] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 1;
L_0028BB94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[19].w[0] + 1152u));  if (t) { goto L_0028BBB4; } }
L_0028BB9C:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[3] = ld32((c.r[16].w[0] + 84u));  goto L_0028BBB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[16].w[0] + 88u));  if (t) { goto L_0028BBB0; } }
L_0028BBB0:
    c.f[1] = ld32((c.r[19].w[0] + 1152u));
    c.budget -= 1;
L_0028BBB4:
    c.f[2] = ld32((c.r[19].w[0] + 1148u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[19].w[0] + 1152u), c.f[0]);
    c.budget -= 6;
L_0028BBCC:
    c.f[12] = ld32((c.r[19].w[0] + 1148u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028BBF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BBECu); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x0028BBECu) [[unlikely]] return; }
L_0028BBEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_0028BBFC; } }
L_0028BBF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BBFCu);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x0028BBFCu) [[unlikely]] return; }
L_0028BBFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BC04u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0028BC04u) [[unlikely]] return; }
L_0028BC04:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 108u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 110u)));
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_0028BC30; }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0028BC30:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_0028BC58; }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[3].d[0] + 0ull;  goto L_0028BC50; }
L_0028BC50:
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 2;
L_0028BC58:
    st16((c.r[19].w[0] + 110u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = 0u;
    st32((c.r[19].w[0] + 1148u), 0u);
    c.f[12] = ld32((c.r[19].w[0] + 1152u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028BC84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BC7Cu); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x0028BC7Cu) [[unlikely]] return; }
L_0028BC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_0028BC8C; } }
L_0028BC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BC8Cu);  if (depth < kMaxDepth) unit_0005(c, 128u, depth + 1u); else { c.pc = 0x00137090u; return; } if (c.pc != 0x0028BC8Cu) [[unlikely]] return; }
L_0028BC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BC94u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0028BC94u) [[unlikely]] return; }
L_0028BC94:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 114u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 116u)));
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_0028BCC0; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028BCC0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_0028BCEC; }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0028BCE4; } }
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028BCE4:
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 2;
L_0028BCEC:
    st16((c.r[19].w[0] + 116u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 1152u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BCFCu); set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x0028BCFCu) [[unlikely]] return; }
L_0028BCFC:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 1312u)));  goto L_0028BDD0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 2112u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00288000u < 16384u) { entry = entries_005A[(t - 0x00288000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0028BD24:
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 88u), c.r[7].w[0]);
    set32(c.r[5], 0u + 99u);
    st32((c.r[29].w[0] + 96u), c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 104u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BD5Cu); st32((c.r[29].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_0061(c, 3u, depth + 1u); else { c.pc = 0x002A4040u; return; } if (c.pc != 0x0028BD5Cu) [[unlikely]] return; }
L_0028BD5C:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_0028BDC0; } }
L_0028BD68:
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[19].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0028BDC0; }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 114u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = c.r[6].d[0] + 0ull;  goto L_0028BD8C; }
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028BD8C:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = c.r[4].d[0] + 0ull;  goto L_0028BDB8; }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0028BDB0; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028BDB0:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 2;
L_0028BDB8:
    st16((c.r[5].w[0] + 116u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_0028BDC0:
    c.r[3].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028BD68u | kUnwind; return; } goto L_0028BD68; }
L_0028BDCC:
    set32(c.r[4], ld32((c.r[19].w[0] + 1312u)));
    c.budget -= 1;
L_0028BDD0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0028BDF8; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 110u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BDE4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 338u, depth + 1u); else { c.pc = 0x002865D0u; return; } if (c.pc != 0x0028BDE4u) [[unlikely]] return; }
L_0028BDE4:
    set32(c.r[4], ld32((c.r[19].w[0] + 1312u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BDF4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 342u, depth + 1u); else { c.pc = 0x00286760u; return; } if (c.pc != 0x0028BDF4u) [[unlikely]] return; }
L_0028BDF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0028BDF8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 512u);  c.pc = t; return; }
L_0028BE10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BE38u); c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028BE38u) [[unlikely]] return; }
L_0028BE38:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0028BF38; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[18], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 1100u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BE60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 416u, depth + 1u); else { c.pc = 0x002A3FE0u; return; } if (c.pc != 0x0028BE60u) [[unlikely]] return; }
L_0028BE60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0028BEFC; } }
L_0028BE6C:
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[4].d[0]) { set32(c.r[2], c.r[19].w[0] << 2);  goto L_0028BEC4; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[6].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0028BEFC; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  goto L_0028BE90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028BEF8; } }
L_0028BE90:
    set32(c.r[3], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028BEF8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[4].d[0];  if (t) { goto L_0028BEF8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BEBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x0028BEBCu) [[unlikely]] return; }
L_0028BEBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028BEF8; } }
L_0028BEC4:
    set32(c.r[3], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028BEF8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0028BEF8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BEF8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x0028BEF8u) [[unlikely]] return; }
L_0028BEF8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0028BEFC:
    c.r[2].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028BE6Cu | kUnwind; return; } goto L_0028BE6C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0028BF20; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 24u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
L_0028BF20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0028BF2C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0028BF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BF34u);  if (depth < kMaxDepth) unit_005B(c, 313u, depth + 1u); else { c.pc = 0x0028F230u; return; } if (c.pc != 0x0028BF34u) [[unlikely]] return; }
L_0028BF34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0028BF38:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0028BF60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BF70u); set32(c.r[4], ld32((c.r[4].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028BF70u) [[unlikely]] return; }
L_0028BF70:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028BF88; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 2;
L_0028BF88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028BFA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BFB8u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0028BFB8u) [[unlikely]] return; }
L_0028BFB8:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_0028BFCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
L_0028BFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BFD4u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028BFD4u) [[unlikely]] return; }
L_0028BFD4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028BFEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
L_0028BFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BFF4u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x0028BFF4u) [[unlikely]] return; }
L_0028BFF4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    [[clang::musttail]] return unit_005B(c, 1u, depth);
}

}
