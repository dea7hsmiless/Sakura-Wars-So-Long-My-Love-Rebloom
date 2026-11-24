#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0087[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0,
    55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208,
    0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0,
    0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 287, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0,
    0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0,
};

void unit_0087(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0033C000;
    case 2u: goto L_0033C010;
    case 3u: goto L_0033C02C;
    case 4u: goto L_0033C068;
    case 5u: goto L_0033C080;
    case 6u: goto L_0033C0A0;
    case 7u: goto L_0033C0E4;
    case 8u: goto L_0033C0F0;
    case 9u: goto L_0033C110;
    case 10u: goto L_0033C154;
    case 11u: goto L_0033C164;
    case 12u: goto L_0033C174;
    case 13u: goto L_0033C188;
    case 14u: goto L_0033C19C;
    case 15u: goto L_0033C1DC;
    case 16u: goto L_0033C1E8;
    case 17u: goto L_0033C1F4;
    case 18u: goto L_0033C20C;
    case 19u: goto L_0033C230;
    case 20u: goto L_0033C284;
    case 21u: goto L_0033C2A0;
    case 22u: goto L_0033C2B0;
    case 23u: goto L_0033C2C8;
    case 24u: goto L_0033C2D8;
    case 25u: goto L_0033C2E4;
    case 26u: goto L_0033C308;
    case 27u: goto L_0033C324;
    case 28u: goto L_0033C338;
    case 29u: goto L_0033C368;
    case 30u: goto L_0033C3A4;
    case 31u: goto L_0033C3D8;
    case 32u: goto L_0033C404;
    case 33u: goto L_0033C444;
    case 34u: goto L_0033C4B0;
    case 35u: goto L_0033C4C4;
    case 36u: goto L_0033C4D8;
    case 37u: goto L_0033C52C;
    case 38u: goto L_0033C538;
    case 39u: goto L_0033C568;
    case 40u: goto L_0033C590;
    case 41u: goto L_0033C5B0;
    case 42u: goto L_0033C5E0;
    case 43u: goto L_0033C610;
    case 44u: goto L_0033C61C;
    case 45u: goto L_0033C644;
    case 46u: goto L_0033C678;
    case 47u: goto L_0033C6B8;
    case 48u: goto L_0033C6F8;
    case 49u: goto L_0033C734;
    case 50u: goto L_0033C750;
    case 51u: goto L_0033C764;
    case 52u: goto L_0033C784;
    case 53u: goto L_0033C7E8;
    case 54u: goto L_0033C7F4;
    case 55u: goto L_0033C800;
    case 56u: goto L_0033C818;
    case 57u: goto L_0033C82C;
    case 58u: goto L_0033C890;
    case 59u: goto L_0033C89C;
    case 60u: goto L_0033C8A8;
    case 61u: goto L_0033C8C0;
    case 62u: goto L_0033C8D4;
    case 63u: goto L_0033C8F0;
    case 64u: goto L_0033C910;
    case 65u: goto L_0033C974;
    case 66u: goto L_0033C980;
    case 67u: goto L_0033C98C;
    case 68u: goto L_0033C9B4;
    case 69u: goto L_0033C9D0;
    case 70u: goto L_0033C9FC;
    case 71u: goto L_0033CA28;
    case 72u: goto L_0033CA50;
    case 73u: goto L_0033CA60;
    case 74u: goto L_0033CA70;
    case 75u: goto L_0033CA78;
    case 76u: goto L_0033CA8C;
    case 77u: goto L_0033CAA0;
    case 78u: goto L_0033CAB4;
    case 79u: goto L_0033CAC0;
    case 80u: goto L_0033CAE0;
    case 81u: goto L_0033CB50;
    case 82u: goto L_0033CBAC;
    case 83u: goto L_0033CBB8;
    case 84u: goto L_0033CBD0;
    case 85u: goto L_0033CBF0;
    case 86u: goto L_0033CC18;
    case 87u: goto L_0033CC38;
    case 88u: goto L_0033CC60;
    case 89u: goto L_0033CC88;
    case 90u: goto L_0033CCA0;
    case 91u: goto L_0033CD18;
    case 92u: goto L_0033CD24;
    case 93u: goto L_0033CD3C;
    case 94u: goto L_0033CD60;
    case 95u: goto L_0033CDBC;
    case 96u: goto L_0033CDC8;
    case 97u: goto L_0033CDD4;
    case 98u: goto L_0033CDEC;
    case 99u: goto L_0033CE10;
    case 100u: goto L_0033CE20;
    case 101u: goto L_0033CE30;
    case 102u: goto L_0033CE40;
    case 103u: goto L_0033CE50;
    case 104u: goto L_0033CE80;
    case 105u: goto L_0033CEA0;
    case 106u: goto L_0033CEC0;
    case 107u: goto L_0033CED4;
    case 108u: goto L_0033CF00;
    case 109u: goto L_0033CF1C;
    case 110u: goto L_0033CF30;
    case 111u: goto L_0033CF60;
    case 112u: goto L_0033CF7C;
    case 113u: goto L_0033CFA8;
    case 114u: goto L_0033CFC0;
    case 115u: goto L_0033D000;
    case 116u: goto L_0033D00C;
    case 117u: goto L_0033D024;
    case 118u: goto L_0033D040;
    case 119u: goto L_0033D0C4;
    case 120u: goto L_0033D0FC;
    case 121u: goto L_0033D13C;
    case 122u: goto L_0033D1A8;
    case 123u: goto L_0033D1BC;
    case 124u: goto L_0033D1D0;
    case 125u: goto L_0033D1E4;
    case 126u: goto L_0033D20C;
    case 127u: goto L_0033D218;
    case 128u: goto L_0033D248;
    case 129u: goto L_0033D278;
    case 130u: goto L_0033D294;
    case 131u: goto L_0033D2CC;
    case 132u: goto L_0033D308;
    case 133u: goto L_0033D314;
    case 134u: goto L_0033D328;
    case 135u: goto L_0033D33C;
    case 136u: goto L_0033D350;
    case 137u: goto L_0033D3F0;
    case 138u: goto L_0033D44C;
    case 139u: goto L_0033D458;
    case 140u: goto L_0033D470;
    case 141u: goto L_0033D490;
    case 142u: goto L_0033D4B0;
    case 143u: goto L_0033D4D0;
    case 144u: goto L_0033D4F0;
    case 145u: goto L_0033D510;
    case 146u: goto L_0033D520;
    case 147u: goto L_0033D540;
    case 148u: goto L_0033D550;
    case 149u: goto L_0033D5AC;
    case 150u: goto L_0033D5B8;
    case 151u: goto L_0033D5C4;
    case 152u: goto L_0033D5DC;
    case 153u: goto L_0033D600;
    case 154u: goto L_0033D610;
    case 155u: goto L_0033D620;
    case 156u: goto L_0033D630;
    case 157u: goto L_0033D660;
    case 158u: goto L_0033D680;
    case 159u: goto L_0033D6A0;
    case 160u: goto L_0033D6B4;
    case 161u: goto L_0033D6EC;
    case 162u: goto L_0033D750;
    case 163u: goto L_0033D774;
    case 164u: goto L_0033D7D8;
    case 165u: goto L_0033D7E8;
    case 166u: goto L_0033D800;
    case 167u: goto L_0033D81C;
    case 168u: goto L_0033D824;
    case 169u: goto L_0033D840;
    case 170u: goto L_0033D854;
    case 171u: goto L_0033D86C;
    case 172u: goto L_0033D880;
    case 173u: goto L_0033D88C;
    case 174u: goto L_0033D8A0;
    case 175u: goto L_0033D8F8;
    case 176u: goto L_0033D908;
    case 177u: goto L_0033D958;
    case 178u: goto L_0033D964;
    case 179u: goto L_0033D978;
    case 180u: goto L_0033D9C8;
    case 181u: goto L_0033D9D4;
    case 182u: goto L_0033DA00;
    case 183u: goto L_0033DA1C;
    case 184u: goto L_0033DA60;
    case 185u: goto L_0033DADC;
    case 186u: goto L_0033DB30;
    case 187u: goto L_0033DB50;
    case 188u: goto L_0033DBAC;
    case 189u: goto L_0033DBB8;
    case 190u: goto L_0033DBC4;
    case 191u: goto L_0033DBDC;
    case 192u: goto L_0033DC00;
    case 193u: goto L_0033DC10;
    case 194u: goto L_0033DC20;
    case 195u: goto L_0033DC50;
    case 196u: goto L_0033DC70;
    case 197u: goto L_0033DC90;
    case 198u: goto L_0033DCBC;
    case 199u: goto L_0033DCD4;
    case 200u: goto L_0033DCE8;
    case 201u: goto L_0033DD08;
    case 202u: goto L_0033DD48;
    case 203u: goto L_0033DD60;
    case 204u: goto L_0033DD74;
    case 205u: goto L_0033DDBC;
    case 206u: goto L_0033DDCC;
    case 207u: goto L_0033DDE0;
    case 208u: goto L_0033DDFC;
    case 209u: goto L_0033DE04;
    case 210u: goto L_0033DE20;
    case 211u: goto L_0033DE98;
    case 212u: goto L_0033DF0C;
    case 213u: goto L_0033DF34;
    case 214u: goto L_0033DFA8;
    case 215u: goto L_0033DFC8;
    case 216u: goto L_0033DFDC;
    case 217u: goto L_0033DFE8;
    case 218u: goto L_0033E004;
    case 219u: goto L_0033E01C;
    case 220u: goto L_0033E03C;
    case 221u: goto L_0033E05C;
    case 222u: goto L_0033E090;
    case 223u: goto L_0033E0AC;
    case 224u: goto L_0033E0C4;
    case 225u: goto L_0033E0E0;
    case 226u: goto L_0033E104;
    case 227u: goto L_0033E124;
    case 228u: goto L_0033E144;
    case 229u: goto L_0033E164;
    case 230u: goto L_0033E184;
    case 231u: goto L_0033E1A4;
    case 232u: goto L_0033E1BC;
    case 233u: goto L_0033E1D0;
    case 234u: goto L_0033E1E4;
    case 235u: goto L_0033E220;
    case 236u: goto L_0033E248;
    case 237u: goto L_0033E270;
    case 238u: goto L_0033E298;
    case 239u: goto L_0033E2C0;
    case 240u: goto L_0033E2E8;
    case 241u: goto L_0033E320;
    case 242u: goto L_0033E3B0;
    case 243u: goto L_0033E3CC;
    case 244u: goto L_0033E3EC;
    case 245u: goto L_0033E45C;
    case 246u: goto L_0033E468;
    case 247u: goto L_0033E474;
    case 248u: goto L_0033E490;
    case 249u: goto L_0033E4A8;
    case 250u: goto L_0033E4C0;
    case 251u: goto L_0033E4E0;
    case 252u: goto L_0033E504;
    case 253u: goto L_0033E548;
    case 254u: goto L_0033E558;
    case 255u: goto L_0033E570;
    case 256u: goto L_0033E588;
    case 257u: goto L_0033E5A4;
    case 258u: goto L_0033E5BC;
    case 259u: goto L_0033E5D0;
    case 260u: goto L_0033E5F8;
    case 261u: goto L_0033E650;
    case 262u: goto L_0033E6C8;
    case 263u: goto L_0033E6D4;
    case 264u: goto L_0033E6EC;
    case 265u: goto L_0033E710;
    case 266u: goto L_0033E76C;
    case 267u: goto L_0033E778;
    case 268u: goto L_0033E784;
    case 269u: goto L_0033E79C;
    case 270u: goto L_0033E7C0;
    case 271u: goto L_0033E7D0;
    case 272u: goto L_0033E7E0;
    case 273u: goto L_0033E7F0;
    case 274u: goto L_0033E820;
    case 275u: goto L_0033E840;
    case 276u: goto L_0033E860;
    case 277u: goto L_0033E874;
    case 278u: goto L_0033E8A4;
    case 279u: goto L_0033E8B4;
    case 280u: goto L_0033E8C4;
    case 281u: goto L_0033E980;
    case 282u: goto L_0033E9B4;
    case 283u: goto L_0033E9C4;
    case 284u: goto L_0033E9EC;
    case 285u: goto L_0033EA30;
    case 286u: goto L_0033EA58;
    case 287u: goto L_0033EA8C;
    case 288u: goto L_0033EA94;
    case 289u: goto L_0033EA9C;
    case 290u: goto L_0033EAA4;
    case 291u: goto L_0033EAC4;
    case 292u: goto L_0033EADC;
    case 293u: goto L_0033EBAC;
    case 294u: goto L_0033EBF8;
    case 295u: goto L_0033EC08;
    case 296u: goto L_0033EC40;
    case 297u: goto L_0033EC60;
    case 298u: goto L_0033EC9C;
    case 299u: goto L_0033ECF8;
    case 300u: goto L_0033ED04;
    case 301u: goto L_0033ED0C;
    case 302u: goto L_0033ED14;
    case 303u: goto L_0033EDCC;
    case 304u: goto L_0033EDE8;
    case 305u: goto L_0033EE48;
    case 306u: goto L_0033EE60;
    case 307u: goto L_0033EE98;
    case 308u: goto L_0033EED4;
    case 309u: goto L_0033EEF4;
    case 310u: goto L_0033EF38;
    case 311u: goto L_0033EF60;
    case 312u: goto L_0033EF74;
    case 313u: goto L_0033EFA0;
    case 314u: goto L_0033EFC4;
    case 315u: goto L_0033EFE4;
    case 316u: goto L_0033F040;
    case 317u: goto L_0033F058;
    case 318u: goto L_0033F06C;
    case 319u: goto L_0033F0C0;
    case 320u: goto L_0033F0E0;
    case 321u: goto L_0033F10C;
    case 322u: goto L_0033F14C;
    case 323u: goto L_0033F164;
    case 324u: goto L_0033F230;
    case 325u: goto L_0033F23C;
    case 326u: goto L_0033F24C;
    case 327u: goto L_0033F260;
    case 328u: goto L_0033F27C;
    case 329u: goto L_0033F31C;
    case 330u: goto L_0033F3E0;
    case 331u: goto L_0033F3FC;
    case 332u: goto L_0033F410;
    case 333u: goto L_0033F424;
    case 334u: goto L_0033F440;
    case 335u: goto L_0033F480;
    case 336u: goto L_0033F49C;
    case 337u: goto L_0033F4BC;
    case 338u: goto L_0033F4E8;
    case 339u: goto L_0033F510;
    case 340u: goto L_0033F54C;
    case 341u: goto L_0033F56C;
    case 342u: goto L_0033F590;
    case 343u: goto L_0033F5EC;
    case 344u: goto L_0033F5F8;
    case 345u: goto L_0033F604;
    case 346u: goto L_0033F61C;
    case 347u: goto L_0033F640;
    case 348u: goto L_0033F650;
    case 349u: goto L_0033F660;
    case 350u: goto L_0033F690;
    case 351u: goto L_0033F6B0;
    case 352u: goto L_0033F6D0;
    case 353u: goto L_0033F6E4;
    case 354u: goto L_0033F708;
    case 355u: goto L_0033F740;
    case 356u: goto L_0033F75C;
    case 357u: goto L_0033F770;
    case 358u: goto L_0033F7A0;
    case 359u: goto L_0033F7BC;
    case 360u: goto L_0033F7F8;
    case 361u: goto L_0033F810;
    case 362u: goto L_0033F858;
    case 363u: goto L_0033F864;
    case 364u: goto L_0033F870;
    case 365u: goto L_0033F888;
    case 366u: goto L_0033F8A0;
    case 367u: goto L_0033F938;
    case 368u: goto L_0033F9B0;
    case 369u: goto L_0033FA10;
    case 370u: goto L_0033FA34;
    case 371u: goto L_0033FAA0;
    case 372u: goto L_0033FACC;
    case 373u: goto L_0033FAE4;
    case 374u: goto L_0033FB00;
    case 375u: goto L_0033FB4C;
    case 376u: goto L_0033FB5C;
    case 377u: goto L_0033FB6C;
    case 378u: goto L_0033FB84;
    case 379u: goto L_0033FBC0;
    case 380u: goto L_0033FBD8;
    case 381u: goto L_0033FBE4;
    case 382u: goto L_0033FBF4;
    case 383u: goto L_0033FC80;
    case 384u: goto L_0033FD58;
    case 385u: goto L_0033FDE4;
    case 386u: goto L_0033FDEC;
    case 387u: goto L_0033FE20;
    case 388u: goto L_0033FF48;
    case 389u: goto L_0033FF98;
    case 390u: goto L_0033FFD8;
    case 391u: goto L_0033FFE8;
    default: bad_entry(c, 0x0033C000u); return;
    }
L_0033C000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033C010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C02Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x0033C02Cu) [[unlikely]] return; }
L_0033C02C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 4304u);
    set32(c.r[2], c.r[2].w[0] - 4292u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 10010u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C068u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033C068u) [[unlikely]] return; }
L_0033C068:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0033C07C; }
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_0033C07C:
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 1;
L_0033C080:
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    set32(c.r[5], 0u + 10010u);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C0A0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033C0A0u) [[unlikely]] return; }
L_0033C0A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_0033C0B8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C080u | kUnwind; return; } goto L_0033C080; } }
L_0033C0B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 608u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1596u);  if (t) { goto L_0033C0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  if (t) { goto L_0033C0D4; } }
L_0033C0D0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C0D4:
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.f[12] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C0E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 367u, depth + 1u); else { c.pc = 0x002C3F00u; return; } if (c.pc != 0x0033C0E4u) [[unlikely]] return; }
L_0033C0E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C0F0u); set32(c.r[4], c.r[4].w[0] - 18192u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0033C0F0u) [[unlikely]] return; }
L_0033C0F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033C110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033C20C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 4304u);
    set32(c.r[3], c.r[3].w[0] - 4292u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C154u); c.r[5].d[0] = c.r[2].d[0] | 3393ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0033C154u) [[unlikely]] return; }
L_0033C154:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C164u); c.r[5].d[0] = c.r[2].d[0] | 3394ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0033C164u) [[unlikely]] return; }
L_0033C164:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C174u); c.r[5].d[0] = c.r[2].d[0] | 3395ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0033C174u) [[unlikely]] return; }
L_0033C174:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C188u); set32(c.r[5], 0u + 26u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C188u) [[unlikely]] return; }
L_0033C188:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C19Cu); set32(c.r[5], 0u + 27u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C19Cu) [[unlikely]] return; }
L_0033C19C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0033C1AC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 1;
L_0033C1AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C1DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 1596u);  if (t) { goto L_0033C1D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  if (t) { goto L_0033C1D4; } }
L_0033C1D0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C1DCu); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0069(c, 18u, depth + 1u); else { c.pc = 0x002C41C0u; return; } if (c.pc != 0x0033C1DCu) [[unlikely]] return; }
L_0033C1DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C1E8u); set32(c.r[4], c.r[4].w[0] - 18160u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0033C1E8u) [[unlikely]] return; }
L_0033C1E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C1F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x0033C1F4u) [[unlikely]] return; }
L_0033C1F4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0033C210; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C20Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0033C20Cu) [[unlikely]] return; }
L_0033C20C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033C210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033C230:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033CAF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 18128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_0087[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033C284:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C2A0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0033C2A0u) [[unlikely]] return; }
L_0033C2A0:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C2B0u); c.r[5].d[0] = c.r[2].d[0] | 3392ull;  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0033C2B0u) [[unlikely]] return; }
L_0033C2B0:
    set32(c.r[18], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033C2D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C2C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033C2C8u) [[unlikely]] return; }
L_0033C2C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 352u);  if (t) { goto L_0033C2DC; } }
L_0033C2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C2D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033C2D8u) [[unlikely]] return; }
L_0033C2D8:
    set32(c.r[5], c.r[18].w[0] + 352u);
    c.budget -= 1;
L_0033C2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C2E4u); set32(c.r[4], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0033C2E4u) [[unlikely]] return; }
L_0033C2E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], 0u + 1000u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C308u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C308u) [[unlikely]] return; }
L_0033C308:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C324u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C324u) [[unlikely]] return; }
L_0033C324:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    st32((c.r[20].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 5;
L_0033C338:
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[20].w[0] + 56u));  goto L_0033C3B8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0033C388; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C368u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0033C368u) [[unlikely]] return; }
L_0033C368:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0033C37C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C388; } }
L_0033C37C:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0033C388:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033C3B4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C3A4u); set32(c.r[5], 0u + 26u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C3A4u) [[unlikely]] return; }
L_0033C3A4:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0033CAF0; } }
L_0033C3B4:
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.budget -= 1;
L_0033C3B8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_0033CAF4; }
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_0033C3D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 3024u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[3].w[0] + 112u);
    set32(c.r[18], c.r[3].w[0] + 2912u);
    set32(c.r[17], c.r[3].w[0] + 2916u);
    set32(c.r[21], ld32((c.r[4].w[0] + 960u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[3].w[0] + 452u);  if (t) { goto L_0033C484; } }
L_0033C404:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 10;
    if (c.r[3].d[0] == c.r[16].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0033C484; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033C480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C444u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0033C444u) [[unlikely]] return; }
L_0033C444:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033C480; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 11;
L_0033C480:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0033C484:
    c.r[3].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C404u | kUnwind; return; } goto L_0033C404; }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_0033C4A8; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0033CAF0; } }
L_0033C4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C4B0u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0033C4B0u) [[unlikely]] return; }
L_0033C4B0:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C4C4u); set32(c.r[5], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C4C4u) [[unlikely]] return; }
L_0033C4C4:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C4D8u); set32(c.r[5], 0u + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C4D8u) [[unlikely]] return; }
L_0033C4D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0033C4E8; }
    set32(c.r[19], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0033C4E8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0033C580; }
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0033C508; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0033C508:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], c.r[2].w[0] << 3);  goto L_0033C518; }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_0033C518:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C52Cu); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x0033C52Cu) [[unlikely]] return; }
L_0033C52C:
    c.f[20] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0033C56C; } }
L_0033C538:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.f[13] = c.f[20];
    c.f[14] = c.f[12];
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C568u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0033C568u) [[unlikely]] return; }
L_0033C568:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0033C56C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C538u | kUnwind; return; } goto L_0033C538; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0033C580:
    set32(c.r[5], 0u + 7000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C590u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033C590u) [[unlikely]] return; }
L_0033C590:
    set32(c.r[4], ld32((c.r[2].w[0] + 176u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 56u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 8;
L_0033C5B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0033C5C0; }
    set32(c.r[16], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_0033C5C0:
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[20].w[0] + 56u));  goto L_0033C6D0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0033C600; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C5E0u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0033C5E0u) [[unlikely]] return; }
L_0033C5E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0033C5F4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C600; } }
L_0033C5F4:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0033C600:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033C6CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 64u)));  if (t) { goto L_0033C654; } }
L_0033C610:
    set32(c.r[5], 0u + 10010u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C61Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033C61Cu) [[unlikely]] return; }
L_0033C61C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 64u)));  goto L_0033C648; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033C644; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 144u)));
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C644u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 257u, depth + 1u); else { c.pc = 0x00282630u; return; } if (c.pc != 0x0033C644u) [[unlikely]] return; }
L_0033C644:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 1;
L_0033C648:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
L_0033C654:
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C610u | kUnwind; return; } goto L_0033C610; }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C678u); set32(c.r[5], 0u + 27u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C678u) [[unlikely]] return; }
L_0033C678:
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0033C688; }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 1;
L_0033C688:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[20].w[0] + 56u), 0u);  goto L_0033C6BC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 1596u);  if (t) { goto L_0033C6AC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  if (t) { goto L_0033C6B0; } }
L_0033C6AC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C6B8u); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0069(c, 18u, depth + 1u); else { c.pc = 0x002C41C0u; return; } if (c.pc != 0x0033C6B8u) [[unlikely]] return; }
L_0033C6B8:
    st32((c.r[20].w[0] + 56u), 0u);
    c.budget -= 1;
L_0033C6BC:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0033CAF0; } }
L_0033C6CC:
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.budget -= 1;
L_0033C6D0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033CAF0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 10010u);
    set32(c.r[6], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C6F8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033C6F8u) [[unlikely]] return; }
L_0033C6F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0033C714; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0033CAF0; } }
L_0033C714:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 64u)));  goto L_0033C738; }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 144u)));
    c.f[12] = 0u;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C734u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 257u, depth + 1u); else { c.pc = 0x00282630u; return; } if (c.pc != 0x0033C734u) [[unlikely]] return; }
L_0033C734:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 1;
L_0033C738:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_0033C8C8; }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C750u); c.r[5].d[0] = c.r[2].d[0] | 3392ull;  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0033C750u) [[unlikely]] return; }
L_0033C750:
    set32(c.r[25], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C764u); set32(c.r[5], 0u + 1000u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C764u) [[unlikely]] return; }
L_0033C764:
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0033C77C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033C7D4; } }
L_0033C77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C784u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0033C784u) [[unlikely]] return; }
L_0033C784:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0033C7A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033C7B4; } }
L_0033C7A4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0033C7B4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0033C7D4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0033C7CC; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C7D4; } }
L_0033C7D4:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[6].d[0] = c.r[2].d[0] | 3393ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C7E8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0033C7E8u) [[unlikely]] return; }
L_0033C7E8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C7F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033C7F4u) [[unlikely]] return; }
L_0033C7F4:
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C800u); set32(c.r[5], c.r[17].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0033C800u) [[unlikely]] return; }
L_0033C800:
    set32(c.r[2], ld32((c.r[18].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[18].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0033C824; }
    goto L_0033C81C;
L_0033C818:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033C81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033C87C; } }
L_0033C824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C82Cu); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0033C82Cu) [[unlikely]] return; }
L_0033C82C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0033C84C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033C85C; } }
L_0033C84C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0033C85C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0033C87C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0033C874; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C87C; } }
L_0033C87C:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[6].d[0] = c.r[2].d[0] | 3394ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C890u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0033C890u) [[unlikely]] return; }
L_0033C890:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C89Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033C89Cu) [[unlikely]] return; }
L_0033C89C:
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C8A8u); set32(c.r[4], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0033C8A8u) [[unlikely]] return; }
L_0033C8A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C8C0u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x0033C8C0u) [[unlikely]] return; }
L_0033C8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[18].w[0] + 36u)));  if (t) { goto L_0033C99C; } }
L_0033C8C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C8D4u); c.r[5].d[0] = c.r[2].d[0] | 3393ull;  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0033C8D4u) [[unlikely]] return; }
L_0033C8D4:
    set32(c.r[25], ld32((c.r[2].w[0] + 36u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C8F0u); set32(c.r[5], c.r[2].w[0] + 989u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C8F0u) [[unlikely]] return; }
L_0033C8F0:
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0033C908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033C960; } }
L_0033C908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C910u); set32(c.r[5], 0u + 70u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0033C910u) [[unlikely]] return; }
L_0033C910:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0033C930; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033C940; } }
L_0033C930:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0033C940:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0033C960; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0033C958; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C960; } }
L_0033C960:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[6].d[0] = c.r[2].d[0] | 3395ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C974u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0033C974u) [[unlikely]] return; }
L_0033C974:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C980u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033C980u) [[unlikely]] return; }
L_0033C980:
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C98Cu); set32(c.r[4], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0033C98Cu) [[unlikely]] return; }
L_0033C98C:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 4;
L_0033C99C:
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C9B4u); set32(c.r[5], c.r[2].w[0] + 990u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C9B4u) [[unlikely]] return; }
L_0033C9B4:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], 0u + 27u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C9D0u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C9D0u) [[unlikely]] return; }
L_0033C9D0:
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);  goto L_0033CA14; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C9FCu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0033C9FCu) [[unlikely]] return; }
L_0033C9FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 56u), c.f[0]);  if (t) { goto L_0033CAF0; } }
L_0033CA14:
    st32((c.r[20].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0033CAF0; } }
L_0033CA28:
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033CAF0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CA50u); c.r[5].d[0] = c.r[2].d[0] | 3393ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0033CA50u) [[unlikely]] return; }
L_0033CA50:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CA60u); c.r[5].d[0] = c.r[2].d[0] | 3394ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0033CA60u) [[unlikely]] return; }
L_0033CA60:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CA70u); c.r[5].d[0] = c.r[2].d[0] | 3395ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0033CA70u) [[unlikely]] return; }
L_0033CA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CA78u); set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x0033CA78u) [[unlikely]] return; }
L_0033CA78:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CA8Cu); set32(c.r[5], 0u + 17u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CA8Cu) [[unlikely]] return; }
L_0033CA8C:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CAA0u); set32(c.r[5], 0u + 13u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CAA0u) [[unlikely]] return; }
L_0033CAA0:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CAB4u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CAB4u) [[unlikely]] return; }
L_0033CAB4:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_0033CAC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033CAF0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_0033CAE0:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0033CAF0:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0033CAF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0033CB18; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0033CB18:
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0033CB50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033CBD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 4256u);
    set32(c.r[2], c.r[2].w[0] - 4200u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0033CBB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CBACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0033CBACu) [[unlikely]] return; }
L_0033CBAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CBB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0033CBB8u) [[unlikely]] return; }
L_0033CBB8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0033CBD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CBD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0033CBD0u) [[unlikely]] return; }
L_0033CBD0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033CBD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033CBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033CC10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033CC44; } }
L_0033CC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CC18u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0033CC18u) [[unlikely]] return; }
L_0033CC18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0033CC48; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033CC2C; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0033CC2C:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CC38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 2u, depth + 1u); else { c.pc = 0x0033C010u; return; } if (c.pc != 0x0033CC38u) [[unlikely]] return; }
L_0033CC38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CC44; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033CC44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0033CC48:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033CC60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0033CC78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CC80; } }
L_0033CC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033CC88; } }
L_0033CC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CC88u);  if (depth < kMaxDepth) unit_0063(c, 214u, depth + 1u); else { c.pc = 0x002AE2C0u; return; } if (c.pc != 0x0033CC88u) [[unlikely]] return; }
L_0033CC88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033CCA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033CD3C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 4160u);
    set32(c.r[2], c.r[2].w[0] - 4104u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0033CD24; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28416u);
    set32(c.r[2], c.r[2].w[0] + 28472u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0033CD24; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CD18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0033CD18u) [[unlikely]] return; }
L_0033CD18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CD24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0033CD24u) [[unlikely]] return; }
L_0033CD24:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0033CD40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CD3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0033CD3Cu) [[unlikely]] return; }
L_0033CD3C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033CD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033CD60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033CDEC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 4064u);
    set32(c.r[2], c.r[2].w[0] - 4008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0033CDD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CDBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0033CDBCu) [[unlikely]] return; }
L_0033CDBC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CDC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0033CDC8u) [[unlikely]] return; }
L_0033CDC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CDD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0033CDD4u) [[unlikely]] return; }
L_0033CDD4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0033CDF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CDECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0033CDECu) [[unlikely]] return; }
L_0033CDEC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033CDF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033CE10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CD60u | kUnwind; return; } goto L_0033CD60; }
L_0033CE20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CCA0u | kUnwind; return; } goto L_0033CCA0; }
L_0033CE30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CB50u | kUnwind; return; } goto L_0033CB50; }
L_0033CE40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C110u | kUnwind; return; } goto L_0033C110; }
L_0033CE50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CE80u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0033CE80u) [[unlikely]] return; }
L_0033CE80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0033CEA4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CEA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 106u, depth + 1u); else { c.pc = 0x0033CEC0u; return; } if (c.pc != 0x0033CEA0u) [[unlikely]] return; }
L_0033CEA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0033CEA4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033CEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CED4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0033CED4u) [[unlikely]] return; }
L_0033CED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 3680u);
    set32(c.r[3], c.r[3].w[0] - 3624u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033CF00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CF1Cu); set32(c.r[4], 0u + 660u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0033CF1Cu) [[unlikely]] return; }
L_0033CF1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033CF48; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CF30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 8u, depth + 1u); else { c.pc = 0x002AC0E0u; return; } if (c.pc != 0x0033CF30u) [[unlikely]] return; }
L_0033CF30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 3776u);
    set32(c.r[2], c.r[2].w[0] - 3720u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
L_0033CF48:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033CF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CF7Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x0033CF7Cu) [[unlikely]] return; }
L_0033CF7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 3824u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 3812u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 18096u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CFA8u); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0033CFA8u) [[unlikely]] return; }
L_0033CFA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033CFC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033D024; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 3824u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 3812u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 18064u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D000u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0033D000u) [[unlikely]] return; }
L_0033D000:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D00Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x0033D00Cu) [[unlikely]] return; }
L_0033D00C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0033D028; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D024u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0033D024u) [[unlikely]] return; }
L_0033D024:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033D028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033D040:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 15;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_0033D380; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_0033D360; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_0033D28C; }
    set32(c.r[8], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[8].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0033D0D4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_0033D0B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  if (t) { goto L_0033D390; } }
L_0033D0B0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D0C4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0033D0C4u) [[unlikely]] return; }
L_0033D0C4:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_0033D0D4:
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 3024u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[3].w[0] + 112u);
    set32(c.r[18], c.r[3].w[0] + 2912u);
    set32(c.r[17], c.r[3].w[0] + 2916u);
    set32(c.r[21], ld32((c.r[4].w[0] + 960u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[3].w[0] + 452u);  if (t) { goto L_0033D17C; } }
L_0033D0FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 10;
    if (c.r[3].d[0] == c.r[16].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0033D17C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 1296u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033D178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D13Cu); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0033D13Cu) [[unlikely]] return; }
L_0033D13C:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033D178; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 11;
L_0033D178:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0033D17C:
    c.r[3].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D0FCu | kUnwind; return; } goto L_0033D0FC; }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_0033D1A0; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0033D38C; } }
L_0033D1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D1A8u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0033D1A8u) [[unlikely]] return; }
L_0033D1A8:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], 0u + 67u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D1BCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0033D1BCu) [[unlikely]] return; }
L_0033D1BC:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D1D0u); set32(c.r[5], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D1D0u) [[unlikely]] return; }
L_0033D1D0:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D1E4u); set32(c.r[5], 0u + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D1E4u) [[unlikely]] return; }
L_0033D1E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0033D1F4; }
    set32(c.r[19], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_0033D1F4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_0033D3C4; }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D20Cu); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x0033D20Cu) [[unlikely]] return; }
L_0033D20C:
    c.f[20] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0033D24C; } }
L_0033D218:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.f[13] = c.f[20];
    c.f[14] = c.f[12];
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D248u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0033D248u) [[unlikely]] return; }
L_0033D248:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0033D24C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D218u | kUnwind; return; } goto L_0033D218; }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D278u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D278u) [[unlikely]] return; }
L_0033D278:
    st32((c.r[20].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 5;
L_0033D28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D294u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x0033D294u) [[unlikely]] return; }
L_0033D294:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_0033D2F8; }
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033D38C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0033D2EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D2CCu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0033D2CCu) [[unlikely]] return; }
L_0033D2CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0033D2E0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D2EC; } }
L_0033D2E0:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0033D2EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033D38C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_0033D2F8:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D308u); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D308u) [[unlikely]] return; }
L_0033D308:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D314u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0033D314u) [[unlikely]] return; }
L_0033D314:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D328u); set32(c.r[5], 0u + 17u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D328u) [[unlikely]] return; }
L_0033D328:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D33Cu); set32(c.r[5], 0u + 13u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D33Cu) [[unlikely]] return; }
L_0033D33C:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D350u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D350u) [[unlikely]] return; }
L_0033D350:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_0033D360:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033D38C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 4;
L_0033D380:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0033D38C:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0033D390:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0033D3B4; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0033D3B4:
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 4;
L_0033D3C4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0033D3F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033D470; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 3776u);
    set32(c.r[2], c.r[2].w[0] - 3720u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0033D458; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D44Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0033D44Cu) [[unlikely]] return; }
L_0033D44C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D458u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0033D458u) [[unlikely]] return; }
L_0033D458:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0033D474; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D470u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0033D470u) [[unlikely]] return; }
L_0033D470:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033D474:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033D490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033D4D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D4B0u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0033D4B0u) [[unlikely]] return; }
L_0033D4B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0033D4E0; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033D4C4; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0033D4C4:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D4D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 111u, depth + 1u); else { c.pc = 0x0033CF60u; return; } if (c.pc != 0x0033D4D0u) [[unlikely]] return; }
L_0033D4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D4DC; } }
L_0033D4D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033D4DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0033D4E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033D4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0033D508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033D510; } }
L_0033D508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D510u);  if (depth < kMaxDepth) unit_0063(c, 207u, depth + 1u); else { c.pc = 0x002AE0E0u; return; } if (c.pc != 0x0033D510u) [[unlikely]] return; }
L_0033D510:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033D520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0033D538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033D540; } }
L_0033D538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D540u);  if (depth < kMaxDepth) unit_0063(c, 214u, depth + 1u); else { c.pc = 0x002AE2C0u; return; } if (c.pc != 0x0033D540u) [[unlikely]] return; }
L_0033D540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033D550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033D5DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 3680u);
    set32(c.r[2], c.r[2].w[0] - 3624u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0033D5C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D5ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0033D5ACu) [[unlikely]] return; }
L_0033D5AC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D5B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0033D5B8u) [[unlikely]] return; }
L_0033D5B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D5C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0033D5C4u) [[unlikely]] return; }
L_0033D5C4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0033D5E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D5DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0033D5DCu) [[unlikely]] return; }
L_0033D5DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033D5E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033D600:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D550u | kUnwind; return; } goto L_0033D550; }
L_0033D610:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D3F0u | kUnwind; return; } goto L_0033D3F0; }
L_0033D620:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CFC0u | kUnwind; return; } goto L_0033CFC0; }
L_0033D630:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D660u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0033D660u) [[unlikely]] return; }
L_0033D660:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0033D684; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D680u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 159u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x0033D680u) [[unlikely]] return; }
L_0033D680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0033D684:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033D6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D6B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0033D6B4u) [[unlikely]] return; }
L_0033D6B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 3440u);
    set32(c.r[2], c.r[2].w[0] - 3384u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1424u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0033D6E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033D73C; } }
L_0033D6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D6ECu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0033D6ECu) [[unlikely]] return; }
L_0033D6EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0033D70C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033D71C; } }
L_0033D70C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0033D71C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0033D73C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0033D734; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033D734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D73C; } }
L_0033D73C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 34464ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D750u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0033D750u) [[unlikely]] return; }
L_0033D750:
    set32(c.r[3], 0u + 3000u);
    st32((c.r[2].w[0] + 348u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0033D76C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033D7C4; } }
L_0033D76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D774u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0033D774u) [[unlikely]] return; }
L_0033D774:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0033D794; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033D7A4; } }
L_0033D794:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0033D7A4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0033D7C4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0033D7BC; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033D7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D7C4; } }
L_0033D7C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 34464ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D7D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0033D7D8u) [[unlikely]] return; }
L_0033D7D8:
    set32(c.r[3], 0u + 3000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D7E8u); st32((c.r[2].w[0] + 348u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0087(c, 174u, depth + 1u); else { c.pc = 0x0033D8A0u; return; } if (c.pc != 0x0033D7E8u) [[unlikely]] return; }
L_0033D7E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033D800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 34464ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D81Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0033D81Cu) [[unlikely]] return; }
L_0033D81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D824u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 85u, depth + 1u); else { c.pc = 0x0027CCC0u; return; } if (c.pc != 0x0033D824u) [[unlikely]] return; }
L_0033D824:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033D840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D854u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0033DA60u; return; } if (c.pc != 0x0033D854u) [[unlikely]] return; }
L_0033D854:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_0033D874; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D86Cu); c.r[5].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_0062(c, 66u, depth + 1u); else { c.pc = 0x002A8800u; return; } if (c.pc != 0x0033D86Cu) [[unlikely]] return; }
L_0033D86C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033D884; } }
L_0033D874:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D880u); c.r[5].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_0062(c, 64u, depth + 1u); else { c.pc = 0x002A87C0u; return; } if (c.pc != 0x0033D880u) [[unlikely]] return; }
L_0033D880:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033D884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D88Cu);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x0033D88Cu) [[unlikely]] return; }
L_0033D88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033D8A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 1296u)));  if (t) { goto L_0033D8E8; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0033D8EC; } }
L_0033D8E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033D8EC:
    set32(c.r[16], c.r[2].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D8F8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0033D8F8u) [[unlikely]] return; }
L_0033D8F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D908u); c.r[5].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0033D908u) [[unlikely]] return; }
L_0033D908:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0033D9E4; }
    c.f[2] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = 0u;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[28].w[0] - 32668u));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D958u); st32((c.r[29].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x0033D958u) [[unlikely]] return; }
L_0033D958:
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D964u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0033D964u) [[unlikely]] return; }
L_0033D964:
    set32(c.r[2], ld32((c.r[18].w[0] + 308u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D978u); st32((c.r[18].w[0] + 308u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 76u, depth + 1u); else { c.pc = 0x002A89C0u; return; } if (c.pc != 0x0033D978u) [[unlikely]] return; }
L_0033D978:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0033D9E0; } }
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = 0u;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[28].w[0] - 32668u));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D9C8u); st32((c.r[29].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x0033D9C8u) [[unlikely]] return; }
L_0033D9C8:
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D9D4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0033D9D4u) [[unlikely]] return; }
L_0033D9D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 3;
L_0033D9E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0033D9E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0033DA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DA1Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x0033DA1Cu) [[unlikely]] return; }
L_0033DA1C:
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 1424u), 0u);  goto L_0033DA40; }
    set32(c.r[3], 0u + 73u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_0033DA3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033DA44; } }
L_0033DA3C:
    st32((c.r[17].w[0] + 1424u), c.r[3].w[0]);
    c.budget -= 1;
L_0033DA40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033DA44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033DA60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1424u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0033DA7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033DB40; } }
L_0033DA7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0033DA88; }
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0033DA88:
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0033DAA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033DB40; } }
L_0033DAA8:
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 116u)));  goto L_0033DABC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033DB40; } }
L_0033DABC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0033DB40; }
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[2], 0u + 7000u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 7014u);  goto L_0033DB08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DADCu);  if (depth < kMaxDepth) unit_005B(c, 99u, depth + 1u); else { c.pc = 0x0028D0D0u; return; } if (c.pc != 0x0033DADCu) [[unlikely]] return; }
L_0033DADC:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0033DB40; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033DAFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DB3C; } }
L_0033DAFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DB40; } }
L_0033DB08:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033DB3C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1180u)));
    set32(c.r[2], 0u + 26u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033DB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033DB40; } }
L_0033DB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB30u);  if (depth < kMaxDepth) unit_005B(c, 99u, depth + 1u); else { c.pc = 0x0028D0D0u; return; } if (c.pc != 0x0033DB30u) [[unlikely]] return; }
L_0033DB30:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0033DB40; }
L_0033DB3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0033DB40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033DB50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033DBDC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 3440u);
    set32(c.r[2], c.r[2].w[0] - 3384u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0033DBC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DBACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0033DBACu) [[unlikely]] return; }
L_0033DBAC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DBB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0033DBB8u) [[unlikely]] return; }
L_0033DBB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DBC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0033DBC4u) [[unlikely]] return; }
L_0033DBC4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0033DBE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DBDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0033DBDCu) [[unlikely]] return; }
L_0033DBDC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033DBE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033DC00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DB50u | kUnwind; return; } goto L_0033DB50; }
L_0033DC10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DA00u | kUnwind; return; } goto L_0033DA00; }
L_0033DC20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DC50u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0033DC50u) [[unlikely]] return; }
L_0033DC50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0033DC74; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DC70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 203u, depth + 1u); else { c.pc = 0x0033DD60u; return; } if (c.pc != 0x0033DC70u) [[unlikely]] return; }
L_0033DC70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0033DC74:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033DC90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 7000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DCBCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033DCBCu) [[unlikely]] return; }
L_0033DCBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0033DD4C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DCD4u); c.r[5].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0033DCD4u) [[unlikely]] return; }
L_0033DCD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033DD48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0033DD0C; } }
L_0033DCE8:
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18032u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD08u); set32(c.r[4], c.r[16].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DD08u) [[unlikely]] return; }
L_0033DD08:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0033DD0C:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DCE8u | kUnwind; return; } goto L_0033DCE8; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0033DD48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18036u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD48u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DD48u) [[unlikely]] return; }
L_0033DD48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0033DD4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033DD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0033DD74u) [[unlikely]] return; }
L_0033DD74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 3104u);
    set32(c.r[2], c.r[2].w[0] - 3048u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] - 7007u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0033DDD0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 18000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_0087[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033DDBC:
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DDCCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 250u, depth + 1u); else { c.pc = 0x00159FB0u; return; } if (c.pc != 0x0033DDCCu) [[unlikely]] return; }
L_0033DDCC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033DDD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033DDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 34464ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DDFCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0033DDFCu) [[unlikely]] return; }
L_0033DDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DE04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 85u, depth + 1u); else { c.pc = 0x0027CCC0u; return; } if (c.pc != 0x0033DE04u) [[unlikely]] return; }
L_0033DE04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033DE20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0033DE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033E068; } }
L_0033DE68:
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] - 7007u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 21u);  goto L_0033E020; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 17968u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_0087[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033DE98:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[20].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_0033E010; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033E00C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_0033DF00; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0033DEFC; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0033DEFC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0033DEFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0033DFFC; } }
L_0033DEFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0033DF00:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DF0Cu); c.r[5].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0033DF0Cu) [[unlikely]] return; }
L_0033DF0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E01C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0033DF2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033DF94; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0033DF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DF34u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0033DF34u) [[unlikely]] return; }
L_0033DF34:
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0033DF58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033DF68; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_0033DF58:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0033DF68:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0033DF94; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0033DF88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033DF88; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_0033DF88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DF94; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033DF94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 34464ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DFA8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0033DFA8u) [[unlikely]] return; }
L_0033DFA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033E01C; } }
    set32(c.r[21], ld32((c.r[20].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0033DFD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DFC8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033DFC8u) [[unlikely]] return; }
L_0033DFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[21].w[0] + 352u);  if (t) { goto L_0033DFE0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0033DFD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DFDCu);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033DFDCu) [[unlikely]] return; }
L_0033DFDC:
    set32(c.r[5], c.r[20].w[0] + 352u);
    c.budget -= 1;
L_0033DFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DFE8u); set32(c.r[4], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0033DFE8u) [[unlikely]] return; }
L_0033DFE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 308u), c.r[2].w[0]);  if (t) { goto L_0033E01C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0033DFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E004u); c.r[5].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0033E004u) [[unlikely]] return; }
L_0033E004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E01C; } }
L_0033E00C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0033E010:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E01Cu); c.r[5].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0033E01Cu) [[unlikely]] return; }
L_0033E01C:
    set32(c.r[2], 0u + 21u);
    c.budget -= 1;
L_0033E020:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 132u);  goto L_0033E034; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033E068; } }
    set32(c.r[4], 0u + 132u);
    c.budget -= 1;
L_0033E034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E03Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0033E03Cu) [[unlikely]] return; }
L_0033E03C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0033E06C; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E05Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 233u, depth + 1u); else { c.pc = 0x0033E1D0u; return; } if (c.pc != 0x0033E05Cu) [[unlikely]] return; }
L_0033E05C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E068; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033E068:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0033E06C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0033E090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E0ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x0033E0ACu) [[unlikely]] return; }
L_0033E0AC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0033E0BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033E0C8; } }
L_0033E0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E0C4u);  if (depth < kMaxDepth) unit_0087(c, 225u, depth + 1u); else { c.pc = 0x0033E0E0u; return; } if (c.pc != 0x0033E0C4u) [[unlikely]] return; }
L_0033E0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033E0C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033E0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 7007u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E104u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E104u) [[unlikely]] return; }
L_0033E104:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0033E114; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_0033E114:
    set32(c.r[5], 0u + 7008u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E124u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E124u) [[unlikely]] return; }
L_0033E124:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0033E134; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_0033E134:
    set32(c.r[5], 0u + 7009u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E144u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E144u) [[unlikely]] return; }
L_0033E144:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0033E154; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_0033E154:
    set32(c.r[5], 0u + 7010u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E164u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E164u) [[unlikely]] return; }
L_0033E164:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0033E174; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_0033E174:
    set32(c.r[5], 0u + 7011u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E184u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E184u) [[unlikely]] return; }
L_0033E184:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0033E194; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_0033E194:
    set32(c.r[5], 0u + 7012u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E1A4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E1A4u) [[unlikely]] return; }
L_0033E1A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0033E1B4; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0033E1B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E1BCu);  if (depth < kMaxDepth) unit_0087(c, 197u, depth + 1u); else { c.pc = 0x0033DC90u; return; } if (c.pc != 0x0033E1BCu) [[unlikely]] return; }
L_0033E1BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033E1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E1E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x0033E1E4u) [[unlikely]] return; }
L_0033E1E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 3200u);
    set32(c.r[2], c.r[2].w[0] - 3144u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 7007u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E220u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E220u) [[unlikely]] return; }
L_0033E220:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0033E238; }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_0033E238:
    set32(c.r[5], 0u + 7008u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E248u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E248u) [[unlikely]] return; }
L_0033E248:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0033E260; }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_0033E260:
    set32(c.r[5], 0u + 7009u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E270u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E270u) [[unlikely]] return; }
L_0033E270:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0033E288; }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_0033E288:
    set32(c.r[5], 0u + 7010u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E298u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E298u) [[unlikely]] return; }
L_0033E298:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0033E2B0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_0033E2B0:
    set32(c.r[5], 0u + 7011u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E2C0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E2C0u) [[unlikely]] return; }
L_0033E2C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0033E2D8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_0033E2D8:
    set32(c.r[5], 0u + 7012u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E2E8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E2E8u) [[unlikely]] return; }
L_0033E2E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 124u)));  goto L_0033E300; }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 4;
L_0033E300:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033E320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033E51C; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[6].d[0]) { c.f[1] = ld32((c.r[18].w[0] + 120u));  goto L_0033E4E8; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 96u)));  goto L_0033E360; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0033E568; } }
L_0033E360:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0033E4D8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0033E3BC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 176u)));  goto L_0033E398; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E3A0; } }
L_0033E398:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_0033E3A0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 128u)));  goto L_0033E574; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3B0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x0033E3B0u) [[unlikely]] return; }
L_0033E3B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E570; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0033E3BC:
    set32(c.r[5], 0u + 7000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3CCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E3CCu) [[unlikely]] return; }
L_0033E3CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0033E3E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033E448; } }
L_0033E3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3ECu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0033E3ECu) [[unlikely]] return; }
L_0033E3EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0033E40C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033E41C; } }
L_0033E40C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0033E41C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0033E448; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0033E43C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033E440; } }
L_0033E43C:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0033E440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E448; } }
L_0033E448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 44464ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E45Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0033E45Cu) [[unlikely]] return; }
L_0033E45C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E468u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033E468u) [[unlikely]] return; }
L_0033E468:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E474u); set32(c.r[5], c.r[17].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0033E474u) [[unlikely]] return; }
L_0033E474:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[2].d[0] | 34464ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E490u); st32((c.r[16].w[0] + 308u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0033E490u) [[unlikely]] return; }
L_0033E490:
    set32(c.r[25], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[5], 0u + 1000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E4A8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E4A8u) [[unlikely]] return; }
L_0033E4A8:
    c.f[12] = 0u;
    set32(c.r[4], 0u + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E4C0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x0033E4C0u) [[unlikely]] return; }
L_0033E4C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[18].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_0033E570; } }
L_0033E4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E4E0u);  if (depth < kMaxDepth) unit_0054(c, 312u, depth + 1u); else { c.pc = 0x00272910u; return; } if (c.pc != 0x0033E4E0u) [[unlikely]] return; }
L_0033E4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E570; } }
L_0033E4E8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E504u); set32(c.r[4], ld32((c.r[18].w[0] + 124u)));  if (depth < kMaxDepth) unit_0087(c, 197u, depth + 1u); else { c.pc = 0x0033DC90u; return; } if (c.pc != 0x0033E504u) [[unlikely]] return; }
L_0033E504:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    st32((c.r[18].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_0033E570; } }
L_0033E51C:
    c.f[1] = ld32((c.r[18].w[0] + 120u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E570; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 7000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E548u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E548u) [[unlikely]] return; }
L_0033E548:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E558u); c.r[5].d[0] = c.r[2].d[0] | 44464ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0033E558u) [[unlikely]] return; }
L_0033E558:
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_0033E568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E570u);  if (depth < kMaxDepth) unit_0054(c, 312u, depth + 1u); else { c.pc = 0x00272910u; return; } if (c.pc != 0x0033E570u) [[unlikely]] return; }
L_0033E570:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 1;
L_0033E574:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_0033E5FC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E588u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0033E588u) [[unlikely]] return; }
L_0033E588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E5F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 7000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E5A4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0033E5A4u) [[unlikely]] return; }
L_0033E5A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033E5F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E5BCu); c.r[5].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0033E5BCu) [[unlikely]] return; }
L_0033E5BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E5D0u); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x0033E5D0u) [[unlikely]] return; }
L_0033E5D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033E5F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0033E5F8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E5F8u); set32(c.r[4], c.r[16].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E5F8u) [[unlikely]] return; }
L_0033E5F8:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0033E5FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0033E620; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0033E620:
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 120u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033E650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033E6EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 3200u);
    set32(c.r[2], c.r[2].w[0] - 3144u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0033E6D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0033E6D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0033E6C8u) [[unlikely]] return; }
L_0033E6C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0033E6D4u) [[unlikely]] return; }
L_0033E6D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0033E6F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0033E6ECu) [[unlikely]] return; }
L_0033E6EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033E6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033E710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033E79C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 3104u);
    set32(c.r[2], c.r[2].w[0] - 3048u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0033E784; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E76Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0033E76Cu) [[unlikely]] return; }
L_0033E76C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0033E778u) [[unlikely]] return; }
L_0033E778:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E784u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0033E784u) [[unlikely]] return; }
L_0033E784:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0033E7A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E79Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0033E79Cu) [[unlikely]] return; }
L_0033E79C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033E7A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033E7C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E710u | kUnwind; return; } goto L_0033E710; }
L_0033E7D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E090u | kUnwind; return; } goto L_0033E090; }
L_0033E7E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E650u | kUnwind; return; } goto L_0033E650; }
L_0033E7F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E820u); set32(c.r[4], 0u + 1472u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0033E820u) [[unlikely]] return; }
L_0033E820:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0033E844; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E840u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0033E860u; return; } if (c.pc != 0x0033E840u) [[unlikely]] return; }
L_0033E840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0033E844:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033E860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E874u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0033E874u) [[unlikely]] return; }
L_0033E874:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 2864u);
    set32(c.r[3], c.r[3].w[0] - 2808u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1424u), 0u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1428u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E8A4u); st32((c.r[16].w[0] + 1432u), 0u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0033E8A4u) [[unlikely]] return; }
L_0033E8A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E8B4u); st32((c.r[16].w[0] + 1436u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0033E8B4u) [[unlikely]] return; }
L_0033E8B4:
    st32((c.r[16].w[0] + 1440u), c.f[0]);
    set32(c.r[4], 0u + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E8C4u); st32((c.r[16].w[0] + 1448u), 0u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0033E8C4u) [[unlikely]] return; }
L_0033E8C4:
    st32((c.r[16].w[0] + 1456u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1444u), 0u);
    set32(c.r[2], 0u + 20062u);
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 64u);  goto L_0033E920; }
    set32(c.r[2], 0u + 20061u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  goto L_0033E918; }
    set32(c.r[2], 0u + 20060u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 16u);  goto L_0033E910; }
    set32(c.r[2], 0u + 20059u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 8u);  goto L_0033E908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_0033E928; } }
L_0033E908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1452u), c.r[2].w[0]);  if (t) { goto L_0033E92C; } }
L_0033E910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1452u), c.r[2].w[0]);  if (t) { goto L_0033E92C; } }
L_0033E918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1452u), c.r[2].w[0]);  if (t) { goto L_0033E92C; } }
L_0033E920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1452u), c.r[2].w[0]);  if (t) { goto L_0033E92C; } }
L_0033E928:
    st32((c.r[16].w[0] + 1452u), c.r[2].w[0]);
    c.budget -= 1;
L_0033E92C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_0033E94C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E948; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 580u), 0u);
    c.budget -= 2;
L_0033E948:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 1;
L_0033E94C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0033E968; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E964; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 584u), 0u);
    c.budget -= 2;
L_0033E964:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033E968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033E980:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E9B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0033E9B4u) [[unlikely]] return; }
L_0033E9B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E9C4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0033E9C4u) [[unlikely]] return; }
L_0033E9C4:
    set32(c.r[3], 0u + 10000u);
    st32((c.r[20].w[0] + 1448u), 0u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + 112u);
    set32(c.r[17], ld32((c.r[4].w[0] + 960u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + 452u);  if (t) { goto L_0033EB3C; } }
L_0033E9EC:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0033EB3C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[3], 0u + 500u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033EB38; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1296u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033EB38; } }
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    c.f[0] = ld32((c.r[18].w[0] + 192u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA30u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0033EA30u) [[unlikely]] return; }
L_0033EA30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033EB38; } }
    c.f[1] = ld32((c.r[20].w[0] + 200u));
    c.f[0] = ld32((c.r[18].w[0] + 200u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA58u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0033EA58u) [[unlikely]] return; }
L_0033EA58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033EB38; } }
    c.f[1] = ld32((c.r[18].w[0] + 196u));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033EB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA8Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033EA8Cu) [[unlikely]] return; }
L_0033EA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA94u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033EA94u) [[unlikely]] return; }
L_0033EA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033EA9Cu) [[unlikely]] return; }
L_0033EA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EAA4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033EAA4u) [[unlikely]] return; }
L_0033EAA4:
    c.f[3] = ld32((c.r[20].w[0] + 672u));
    c.f[2] = ld32((c.r[18].w[0] + 672u));
    c.f[1] = ld32((c.r[20].w[0] + 680u));
    c.f[0] = ld32((c.r[18].w[0] + 680u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[21] = ld32((c.r[18].w[0] + 656u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EAC4u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x0033EAC4u) [[unlikely]] return; }
L_0033EAC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[18].d[0]; c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[21]);  if (t) { goto L_0033EB04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EADCu); set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0033EADCu) [[unlikely]] return; }
L_0033EADC:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033EB04; } }
    c.f[0] = ld32((c.r[20].w[0] + 656u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033EB04; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[20].w[0] + 1448u), c.r[3].w[0]);
    c.budget -= 2;
L_0033EB04:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033EB38; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[21];  if (t) { goto L_0033EB38; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1448u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033EB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0033EB48; } }
L_0033EB38:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0033EB3C:
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E9ECu | kUnwind; return; } goto L_0033E9EC; }
L_0033EB48:
    c.f[0] = ld32((c.r[20].w[0] + 656u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033EB64; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[20].w[0] + 1432u));  if (t) { goto L_0033EB94; } }
L_0033EB64:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0200000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 1432u));
    c.budget -= 12;
L_0033EB94:
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0033EC10; }
    set32(c.r[4], ld32((c.r[20].w[0] + 464u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EBACu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x0033EBACu) [[unlikely]] return; }
L_0033EBAC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.f[3] = ld32((c.r[2].w[0] + 20976u));
    c.f[4] = ld32((c.r[20].w[0] + 1432u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 20980u));
    st32((c.r[29].w[0] + 112u), c.f[3]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[20], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 20984u));
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20988u));
    st32((c.r[29].w[0] + 120u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EBF8u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0033EBF8u) [[unlikely]] return; }
L_0033EBF8:
    set32(c.r[4], ld32((c.r[20].w[0] + 464u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EC08u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 166u, depth + 1u); else { c.pc = 0x001590F0u; return; } if (c.pc != 0x0033EC08u) [[unlikely]] return; }
L_0033EC08:
    st32((c.r[20].w[0] + 1432u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 2;
L_0033EC10:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0033EC40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EC60u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x0033EC60u) [[unlikely]] return; }
L_0033EC60:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0033F0C4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 1424u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033F0C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 17936u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_0087[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033EC9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 1448u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033F0C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 1432u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033F0C0; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[17].w[0] + 1428u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0033ECFC; }
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[6], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 72u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ECF8u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0033ECF8u) [[unlikely]] return; }
L_0033ECF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033ECFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ED04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0033ED04u) [[unlikely]] return; }
L_0033ED04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ED0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x0033ED0Cu) [[unlikely]] return; }
L_0033ED0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ED14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x0033ED14u) [[unlikely]] return; }
L_0033ED14:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], 0u + 20062u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));  goto L_0033ED54; }
    set32(c.r[3], 0u + 20061u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033ED50; } }
    set32(c.r[3], 0u + 20060u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033ED50; } }
    set32(c.r[3], 0u + 20059u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033ED50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_0033EDB8; } }
L_0033ED50:
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_0033ED54:
    set32(c.r[5], ld32((c.r[17].w[0] + 1452u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 584u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[4].w[0] + 584u);  if (t) { goto L_0033EDAC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 588u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30280u)));  goto L_0033ED84; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1424u), c.r[3].w[0]);  if (t) { goto L_0033EDAC; } }
L_0033ED84:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0033EDA4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_0033EDA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0033EDA0; } }
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0033EDA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0033EDA4:
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 2;
L_0033EDAC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1424u), c.r[3].w[0]);  if (t) { goto L_0033F0C0; } }
L_0033EDB8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1424u), c.r[3].w[0]);  if (t) { goto L_0033F0C0; } }
L_0033EDCC:
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0033EDE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033EE38; } }
L_0033EDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EDE8u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0033EDE8u) [[unlikely]] return; }
L_0033EDE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0033EE08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033EE18; } }
L_0033EE08:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0033EE18:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0033EE38; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0033EE30; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033EE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EE38; } }
L_0033EE38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 20000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EE48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0033EE48u) [[unlikely]] return; }
L_0033EE48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033F0C0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EE60u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0033EE60u) [[unlikely]] return; }
L_0033EE60:
    st32((c.r[17].w[0] + 1444u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 1424u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 172u)));  goto L_0033EE9C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[6], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 53u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EE98u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0033EE98u) [[unlikely]] return; }
L_0033EE98:
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 1;
L_0033EE9C:
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 16u)));  goto L_0033EF64; }
    set32(c.r[3], ld32((c.r[16].w[0] + 608u)));
    set32(c.r[18], c.r[17].w[0] + 192u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 1296u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + 688u);  if (t) { goto L_0033EEC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_0033EECC; } }
L_0033EEC8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033EECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EED4u);  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x0033EED4u) [[unlikely]] return; }
L_0033EED4:
    c.f[12] = ld32((c.r[28].w[0] - 32164u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EEF4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 343u, depth + 1u); else { c.pc = 0x002EFCD0u; return; } if (c.pc != 0x0033EEF4u) [[unlikely]] return; }
L_0033EEF4:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF38u); st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x0033EF38u) [[unlikely]] return; }
L_0033EF38:
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 196u));
    st32((c.r[16].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 200u));
    st32((c.r[16].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 204u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF60u); st32((c.r[16].w[0] + 236u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x0033EF60u) [[unlikely]] return; }
L_0033EF60:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_0033EF64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF74u); set32(c.r[5], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EF74u) [[unlikely]] return; }
L_0033EF74:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0033EF84; }
    set32(c.r[18], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0033EF84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EFA0u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x0033EFA0u) [[unlikely]] return; }
L_0033EFA0:
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.f[12] = 0u;
    set32(c.r[6], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EFC4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0033EFC4u) [[unlikely]] return; }
L_0033EFC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1444u)));  goto L_0033EFE8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 60u), 0u);
    c.budget -= 2;
L_0033EFE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 1444u)));
    c.budget -= 1;
L_0033EFE8:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 1444u), c.r[4].w[0]);  if (t) { goto L_0033F004; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 3;
L_0033F004:
    set32(c.r[3], ld32((c.r[17].w[0] + 1444u)));
    c.r[1].d[0] = c.r[3].sd[0] < 56ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0033F0C0; } }
    set32(c.r[2], 0u + 5u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 1424u), c.r[2].w[0]);
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F040u); st32((c.r[2].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0033F040u) [[unlikely]] return; }
L_0033F040:
    st32((c.r[17].w[0] + 1444u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F058u); set32(c.r[5], 0u + 13u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033F058u) [[unlikely]] return; }
L_0033F058:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F06Cu); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033F06Cu) [[unlikely]] return; }
L_0033F06C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033F0C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 584u)));
    set32(c.r[6], c.r[3].w[0] + 584u);
    c.r[3].d[0] = c.r[5].d[0] & 256ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 6u);  goto L_0033F0BC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0033F0B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 256u);  if (t) { goto L_0033F0B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0033F0B8; } }
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0033F0B8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_0033F0BC:
    st32((c.r[17].w[0] + 1424u), c.r[3].w[0]);
    c.budget -= 1;
L_0033F0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0033F0C4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033F0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 360u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1456u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F10Cu);  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x0033F10Cu) [[unlikely]] return; }
L_0033F10C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1428u)));
    c.f[2] = ld32((c.r[28].w[0] - 32676u));
    c.f[3] = ld32((c.r[28].w[0] - 32696u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);  if (t) { goto L_0033F1D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 17904u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_0087[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033F14C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 460u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 448u), c.f[0]);
    st32((c.r[16].w[0] + 452u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 456u), c.f[0]);  if (t) { goto L_0033F1D8; } }
L_0033F164:
    c.f[2] = ld32((c.r[16].w[0] + 448u));
    c.f[1] = ld32((c.r[28].w[0] - 32600u));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[16].w[0] + 452u));  goto L_0033F188; }
    c.f[4] = c.f[0];
    c.f[2] = ld32((c.r[16].w[0] + 452u));
    c.budget -= 2;
L_0033F188:
    c.f[1] = ld32((c.r[28].w[0] - 32600u));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[16].w[0] + 456u));  goto L_0033F1A8; }
    c.f[3] = c.f[0];
    c.f[2] = ld32((c.r[16].w[0] + 456u));
    c.budget -= 2;
L_0033F1A8:
    c.f[1] = ld32((c.r[28].w[0] - 32600u));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0033F1C8; }
    c.f[1] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0033F1C8:
    st32((c.r[16].w[0] + 460u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 448u), c.f[4]);
    st32((c.r[16].w[0] + 452u), c.f[3]);
    st32((c.r[16].w[0] + 456u), c.f[1]);
    c.budget -= 4;
L_0033F1D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1424u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033F1F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1456u), 0u);  if (t) { goto L_0033F224; } }
L_0033F1F0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 1456u)));  goto L_0033F208; }
    set32(c.r[2], ld32((c.r[16].w[0] + 1456u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1456u), c.r[2].w[0]);  if (t) { goto L_0033F210; } }
L_0033F208:
    set32(c.r[2], c.r[2].w[0] + 5u);
    st32((c.r[16].w[0] + 1456u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F210:
    set32(c.r[2], ld32((c.r[16].w[0] + 1456u)));
    c.r[2].d[0] = c.r[2].sd[0] < 180ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0033F228; }
    st32((c.r[16].w[0] + 1456u), 0u);
    c.budget -= 1;
L_0033F224:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033F228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F230u);  if (depth < kMaxDepth) unit_0057(c, 181u, depth + 1u); else { c.pc = 0x0027DC70u; return; } if (c.pc != 0x0033F230u) [[unlikely]] return; }
L_0033F230:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F23Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0033F23Cu) [[unlikely]] return; }
L_0033F23C:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F24Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0033F24Cu) [[unlikely]] return; }
L_0033F24C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F27Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x0033F27Cu) [[unlikely]] return; }
L_0033F27C:
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 1424u)));  goto L_0033F2D4; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_0033F29C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033F3CC; } }
L_0033F29C:
    set32(c.r[5], ld32((c.r[3].w[0] + 584u)));
    set32(c.r[6], c.r[3].w[0] + 584u);
    c.r[3].d[0] = c.r[5].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033F3C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0033F3C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] - 256u);  if (t) { goto L_0033F3C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0033F3C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_0033F3C8; } }
L_0033F2D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F3C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 3u);
    set32(c.r[12], 0u + 4u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[14], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + 112u);
    set32(c.r[7], 0u + 20062u);
    set32(c.r[3], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[4], c.r[4].w[0] + 452u);
    set32(c.r[8], 0u + 20061u);
    set32(c.r[9], 0u + 20060u);
    set32(c.r[10], 0u + 20059u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[24], 0u + 20044u);  if (t) { goto L_0033F3BC; } }
L_0033F31C:
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[25], ld32((c.r[6].w[0])));
    set32(c.r[6], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[24].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0033F3BC; }
    set32(c.r[6], ld32((c.r[25].w[0] + 164u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[15].d[0];
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0033F3B8; } }
    set32(c.r[6], ld32((c.r[25].w[0] + 1296u)));
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[14].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 148u)));  goto L_0033F3A8; }
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[13].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 148u)));  goto L_0033F394; }
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[12].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 148u)));  goto L_0033F380; }
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[11].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 148u)));  goto L_0033F36C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F3B8; } }
L_0033F36C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[10].d[0];  if (t) { goto L_0033F3B8; } }
    st32((c.r[16].w[0] + 1428u), c.r[14].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1424u), c.r[14].w[0]);  if (t) { goto L_0033F3B8; } }
L_0033F380:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[9].d[0];  if (t) { goto L_0033F3B8; } }
    st32((c.r[16].w[0] + 1428u), c.r[13].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1424u), c.r[14].w[0]);  if (t) { goto L_0033F3B8; } }
L_0033F394:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_0033F3B8; } }
    st32((c.r[16].w[0] + 1428u), c.r[11].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1424u), c.r[14].w[0]);  if (t) { goto L_0033F3B8; } }
L_0033F3A8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_0033F3B8; } }
    st32((c.r[16].w[0] + 1428u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 1424u), c.r[14].w[0]);
    c.budget -= 2;
L_0033F3B8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0033F3BC:
    c.r[6].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F31Cu | kUnwind; return; } goto L_0033F31C; }
L_0033F3C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033F3CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033F3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F3FCu); set32(c.r[5], c.r[2].w[0] + 1424u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0033F3FCu) [[unlikely]] return; }
L_0033F3FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033F410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 1424u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F424u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0033F424u) [[unlikely]] return; }
L_0033F424:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033F440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033F4FC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0033F470; }
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 1;
L_0033F470:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0033F500; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F480u); set32(c.r[5], ld32((c.r[16].w[0] + 1296u)));  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x0033F480u) [[unlikely]] return; }
L_0033F480:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0033F4FC; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F49Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033F49Cu) [[unlikely]] return; }
L_0033F49C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0033F4D4; }
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 816u);
    set32(c.r[8], 0u + 8192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F4BCu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 29u, depth + 1u); else { c.pc = 0x002F0860u; return; } if (c.pc != 0x0033F4BCu) [[unlikely]] return; }
L_0033F4BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 976u), c.r[17].w[0]);  if (t) { goto L_0033F4FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_0033F4FC; } }
L_0033F4D4:
    set32(c.r[5], c.r[16].w[0] + 816u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F4E8u); set32(c.r[8], 0u + 8192u);  if (depth < kMaxDepth) unit_0074(c, 29u, depth + 1u); else { c.pc = 0x002F0860u; return; } if (c.pc != 0x0033F4E8u) [[unlikely]] return; }
L_0033F4E8:
    st32((c.r[16].w[0] + 976u), 0u);
    set32(c.r[3], 0u - 33u);
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 5;
L_0033F4FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033F500:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033F510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033F580; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0033F53C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 1;
L_0033F53C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0033F584; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F54Cu); set32(c.r[5], ld32((c.r[16].w[0] + 1296u)));  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x0033F54Cu) [[unlikely]] return; }
L_0033F54C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033F580; } }
    set32(c.r[5], c.r[16].w[0] + 816u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F56Cu); set32(c.r[8], 0u + 8192u);  if (depth < kMaxDepth) unit_0074(c, 29u, depth + 1u); else { c.pc = 0x002F0860u; return; } if (c.pc != 0x0033F56Cu) [[unlikely]] return; }
L_0033F56C:
    st32((c.r[16].w[0] + 976u), 0u);
    set32(c.r[3], 0u - 33u);
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 5;
L_0033F580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0033F584:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033F61C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 2864u);
    set32(c.r[2], c.r[2].w[0] - 2808u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0033F604; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F5ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0033F5ECu) [[unlikely]] return; }
L_0033F5EC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F5F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0033F5F8u) [[unlikely]] return; }
L_0033F5F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F604u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0033F604u) [[unlikely]] return; }
L_0033F604:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0033F620; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F61Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0033F61Cu) [[unlikely]] return; }
L_0033F61C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033F620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033F640:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F590u | kUnwind; return; } goto L_0033F590; }
L_0033F650:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F260u | kUnwind; return; } goto L_0033F260; }
L_0033F660:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F690u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0033F690u) [[unlikely]] return; }
L_0033F690:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0033F6B4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F6B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 352u, depth + 1u); else { c.pc = 0x0033F6D0u; return; } if (c.pc != 0x0033F6B0u) [[unlikely]] return; }
L_0033F6B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0033F6B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033F6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F6E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0033F6E4u) [[unlikely]] return; }
L_0033F6E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 2480u);
    set32(c.r[2], c.r[2].w[0] - 2424u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F708u); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x0033F708u) [[unlikely]] return; }
L_0033F708:
    st32((c.r[16].w[0] + 1424u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[0] = ld32((c.r[16].w[0] + 1424u));
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1428u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F75Cu); set32(c.r[4], 0u + 660u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0033F75Cu) [[unlikely]] return; }
L_0033F75C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033F788; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F770u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 8u, depth + 1u); else { c.pc = 0x002AC0E0u; return; } if (c.pc != 0x0033F770u) [[unlikely]] return; }
L_0033F770:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 2576u);
    set32(c.r[2], c.r[2].w[0] - 2520u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
L_0033F788:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033F7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F7BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x0033F7BCu) [[unlikely]] return; }
L_0033F7BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 2624u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 2612u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53510000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 14157ull;
    set32(c.r[4], c.r[4].w[0] - 17872u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F7F8u); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0033F7F8u) [[unlikely]] return; }
L_0033F7F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033F888; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 2624u);
    set32(c.r[2], c.r[2].w[0] - 2612u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F858u); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033F858u) [[unlikely]] return; }
L_0033F858:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F864u); set32(c.r[4], c.r[4].w[0] - 17840u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0033F864u) [[unlikely]] return; }
L_0033F864:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F870u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x0033F870u) [[unlikely]] return; }
L_0033F870:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0033F88C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F888u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0033F888u) [[unlikely]] return; }
L_0033F888:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033F88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033F8A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[19], ld32((c.r[6].w[0] + 960u)));
    set32(c.r[5], c.r[6].w[0] + 112u);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[5].w[0] + 452u);  if (t) { [[clang::musttail]] return unit_0088(c, 20u, depth); } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[20].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0088(c, 17u, depth); }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0088(c, 11u, depth); }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  goto L_0033FB08; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 44u)));  goto L_0033F91C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { [[clang::musttail]] return unit_0088(c, 24u, depth); } }
L_0033F91C:
    set32(c.r[3], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0033F930; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033F988; } }
L_0033F930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F938u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0033F938u) [[unlikely]] return; }
L_0033F938:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0033F958; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0033F968; } }
L_0033F958:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0033F968:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0033F988; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_0033F980; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033F980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F988; } }
L_0033F988:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0088(c, 23u, depth); } }
    set32(c.r[17], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0033F9A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033FA00; } }
L_0033F9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F9B0u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0033F9B0u) [[unlikely]] return; }
L_0033F9B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0033F9D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033F9E0; } }
L_0033F9D0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0033F9E0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0033FA00; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0033F9F8; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033F9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FA00; } }
L_0033FA00:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[6], 0u + 20000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FA10u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0033FA10u) [[unlikely]] return; }
L_0033FA10:
    set32(c.r[18], ld32((c.r[16].w[0] + 44u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0033FA2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033FA90; } }
L_0033FA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FA34u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0033FA34u) [[unlikely]] return; }
L_0033FA34:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0033FA54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033FA64; } }
L_0033FA54:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0033FA64:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0033FA90; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0033FA84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033FA88; } }
L_0033FA84:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0033FA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FA90; } }
L_0033FA90:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[6], 0u + 20000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FAA0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0033FAA0u) [[unlikely]] return; }
L_0033FAA0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0088(c, 23u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0088(c, 23u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FACCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0033FACCu) [[unlikely]] return; }
L_0033FACC:
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FAE4u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0033FAE4u) [[unlikely]] return; }
L_0033FAE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FB00u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033FB00u) [[unlikely]] return; }
L_0033FB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0088(c, 23u, depth); } }
L_0033FB08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[4].w[0] + 20992u));
    c.f[1] = ld32((c.r[3].w[0] + 20996u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[4].w[0] + 21000u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 21004u));
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 152u), c.f[2]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = c.r[4].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 1428u));
    c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 17;
L_0033FB4C:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0033FEF4; } }
L_0033FB5C:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FB6Cu); set32(c.r[4], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0033FB6Cu) [[unlikely]] return; }
L_0033FB6C:
    c.r[3].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0033FEF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FB84u); set32(c.r[4], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0033FB84u) [[unlikely]] return; }
L_0033FB84:
    c.r[3].d[0] = c.r[2].d[0] ^ 5ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033FEF0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033FEF0; } }
    set32(c.r[3], 0u + 1100u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033FEF0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FBC0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 34u, depth + 1u); else { c.pc = 0x00340520u; return; } if (c.pc != 0x0033FBC0u) [[unlikely]] return; }
L_0033FBC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033FEF0; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FBD8u); set32(c.r[6], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0033FBD8u) [[unlikely]] return; }
L_0033FBD8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FBE4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0033FBE4u) [[unlikely]] return; }
L_0033FBE4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FBF4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0033FBF4u) [[unlikely]] return; }
L_0033FBF4:
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 164u), c.f[4]);
    c.f[3] = ld32((c.r[20].w[0] + 200u));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.f[2] = ld32((c.r[20].w[0] + 192u));
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.f[22] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);  if (t) { goto L_0033FD04; } }
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 196u));
    c.f[20] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[20].w[0] + 192u), c.f[1]);
    st32((c.r[20].w[0] + 196u), c.f[2]);
    st32((c.r[20].w[0] + 200u), c.f[0]);
    st32((c.r[20].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FC80u); st32((c.r[20].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0088(c, 25u, depth + 1u); else { c.pc = 0x003403D0u; return; } if (c.pc != 0x0033FC80u) [[unlikely]] return; }
L_0033FC80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0033FDDC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] | 4928ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033FDD8; } }
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[20].w[0] + 196u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[4] = ld32((c.r[20].w[0] + 200u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    c.f[3] = 0u;
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 192u), c.f[0]);
    st32((c.r[20].w[0] + 196u), c.f[2]);
    st32((c.r[20].w[0] + 200u), c.f[3]);
    st32((c.r[20].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0033FDD8; } }
L_0033FD04:
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 196u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[20].w[0] + 192u), c.f[0]);
    st32((c.r[20].w[0] + 196u), c.f[1]);
    st32((c.r[20].w[0] + 200u), c.f[2]);
    st32((c.r[20].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FD58u); st32((c.r[20].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0088(c, 25u, depth + 1u); else { c.pc = 0x003403D0u; return; } if (c.pc != 0x0033FD58u) [[unlikely]] return; }
L_0033FD58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FDD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] | 4928ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033FDD8; } }
    c.f[2] = ld32((c.r[20].w[0] + 196u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    c.f[4] = ld32((c.r[20].w[0] + 200u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = 0u;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 192u), c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[20].w[0] + 196u), c.f[2]);
    st32((c.r[20].w[0] + 200u), c.f[3]);
    st32((c.r[20].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[20].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 22;
L_0033FDD8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0033FDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FDE4u);  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x0033FDE4u) [[unlikely]] return; }
L_0033FDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FDECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0033FDECu) [[unlikely]] return; }
L_0033FDEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033FEF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[3].d[0] | 4928ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033FEF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE20u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x0033FE20u) [[unlikely]] return; }
L_0033FE20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43910000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[20].w[0] + 196u));  goto L_0033FEA0; }
    c.f[0] = ld32((c.r[20].w[0] + 200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.f[4] = 0u;
    c.f[6] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[2]);
    c.f[0] = ld32((c.r[20].w[0] + 192u));
    c.f[3] = ld32((c.r[20].w[0] + 196u));
    c.f[2] = ld32((c.r[28].w[0] - 32124u));
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[1]);
    st32((c.r[20].w[0] + 192u), c.f[0]);
    st32((c.r[20].w[0] + 196u), c.f[2]);
    st32((c.r[20].w[0] + 200u), c.f[5]);
    st32((c.r[20].w[0] + 204u), c.f[20]);
    set32(c.r[4], ld32((c.r[20].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_0033FEF0; } }
L_0033FEA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    c.f[4] = ld32((c.r[20].w[0] + 200u));
    c.f[3] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 192u), c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[20].w[0] + 196u), c.f[2]);
    st32((c.r[20].w[0] + 200u), c.f[3]);
    st32((c.r[20].w[0] + 204u), c.f[20]);
    set32(c.r[4], ld32((c.r[20].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[20].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 20;
L_0033FEF0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0033FEF4:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033FB5Cu | kUnwind; return; } goto L_0033FB5C; }
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_0033FF7C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 584u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033FF78; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0033FF68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FF48u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0033FF48u) [[unlikely]] return; }
L_0033FF48:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0033FF5C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF68; } }
L_0033FF5C:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0033FF68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033FF78; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_0033FF78:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_0033FF7C:
    c.r[1].d[0] = c.r[3].sd[0] < 181ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  goto L_0033FFC8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], 0u + 20000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FF98u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x0033FF98u) [[unlikely]] return; }
L_0033FF98:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_0033FFBC; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033FFB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 584u), c.r[4].w[0]);
    c.budget -= 3;
L_0033FFB8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0033FFBC:
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), 0u);  if (t) { [[clang::musttail]] return unit_0088(c, 23u, depth); } }
L_0033FFC8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0088(c, 23u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033FB4Cu | kUnwind; return; } goto L_0033FB4C; } }
L_0033FFD8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FFE8u); set32(c.r[4], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0033FFE8u) [[unlikely]] return; }
L_0033FFE8:
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  [[clang::musttail]] return unit_0088(c, 11u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340000u); set32(c.r[4], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00340000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0088(c, 1u, depth);
}

}
