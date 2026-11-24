#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BF[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18,
    0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33,
    0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 87, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0,
    0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 248, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291,
    0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310,
    0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0,
    0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 370,
    0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0,
    0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393,
    0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0,
};

void unit_00BF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0041C000;
    case 2u: goto L_0041C004;
    case 3u: goto L_0041C00C;
    case 4u: goto L_0041C044;
    case 5u: goto L_0041C04C;
    case 6u: goto L_0041C054;
    case 7u: goto L_0041C0B8;
    case 8u: goto L_0041C0F0;
    case 9u: goto L_0041C124;
    case 10u: goto L_0041C130;
    case 11u: goto L_0041C148;
    case 12u: goto L_0041C164;
    case 13u: goto L_0041C178;
    case 14u: goto L_0041C18C;
    case 15u: goto L_0041C1C4;
    case 16u: goto L_0041C1D8;
    case 17u: goto L_0041C1E8;
    case 18u: goto L_0041C1FC;
    case 19u: goto L_0041C20C;
    case 20u: goto L_0041C220;
    case 21u: goto L_0041C230;
    case 22u: goto L_0041C244;
    case 23u: goto L_0041C24C;
    case 24u: goto L_0041C280;
    case 25u: goto L_0041C29C;
    case 26u: goto L_0041C2BC;
    case 27u: goto L_0041C30C;
    case 28u: goto L_0041C320;
    case 29u: goto L_0041C334;
    case 30u: goto L_0041C348;
    case 31u: goto L_0041C358;
    case 32u: goto L_0041C36C;
    case 33u: goto L_0041C37C;
    case 34u: goto L_0041C390;
    case 35u: goto L_0041C3A0;
    case 36u: goto L_0041C3B4;
    case 37u: goto L_0041C3C4;
    case 38u: goto L_0041C3D8;
    case 39u: goto L_0041C3F8;
    case 40u: goto L_0041C40C;
    case 41u: goto L_0041C428;
    case 42u: goto L_0041C44C;
    case 43u: goto L_0041C458;
    case 44u: goto L_0041C46C;
    case 45u: goto L_0041C4A8;
    case 46u: goto L_0041C4C0;
    case 47u: goto L_0041C4D8;
    case 48u: goto L_0041C4F4;
    case 49u: goto L_0041C50C;
    case 50u: goto L_0041C528;
    case 51u: goto L_0041C560;
    case 52u: goto L_0041C57C;
    case 53u: goto L_0041C584;
    case 54u: goto L_0041C5C8;
    case 55u: goto L_0041C5F0;
    case 56u: goto L_0041C610;
    case 57u: goto L_0041C62C;
    case 58u: goto L_0041C634;
    case 59u: goto L_0041C668;
    case 60u: goto L_0041C684;
    case 61u: goto L_0041C6A4;
    case 62u: goto L_0041C6E8;
    case 63u: goto L_0041C700;
    case 64u: goto L_0041C718;
    case 65u: goto L_0041C73C;
    case 66u: goto L_0041C758;
    case 67u: goto L_0041C76C;
    case 68u: goto L_0041C774;
    case 69u: goto L_0041C7A4;
    case 70u: goto L_0041C7BC;
    case 71u: goto L_0041C7D8;
    case 72u: goto L_0041C7FC;
    case 73u: goto L_0041C814;
    case 74u: goto L_0041C828;
    case 75u: goto L_0041C848;
    case 76u: goto L_0041C860;
    case 77u: goto L_0041C874;
    case 78u: goto L_0041C8BC;
    case 79u: goto L_0041C8C4;
    case 80u: goto L_0041C8D4;
    case 81u: goto L_0041C8E8;
    case 82u: goto L_0041C908;
    case 83u: goto L_0041C928;
    case 84u: goto L_0041C95C;
    case 85u: goto L_0041C968;
    case 86u: goto L_0041C988;
    case 87u: goto L_0041C998;
    case 88u: goto L_0041C99C;
    case 89u: goto L_0041C9C0;
    case 90u: goto L_0041C9D0;
    case 91u: goto L_0041C9EC;
    case 92u: goto L_0041CA04;
    case 93u: goto L_0041CA30;
    case 94u: goto L_0041CA5C;
    case 95u: goto L_0041CA68;
    case 96u: goto L_0041CA80;
    case 97u: goto L_0041CAA0;
    case 98u: goto L_0041CAB8;
    case 99u: goto L_0041CAD8;
    case 100u: goto L_0041CB00;
    case 101u: goto L_0041CB20;
    case 102u: goto L_0041CB48;
    case 103u: goto L_0041CB64;
    case 104u: goto L_0041CB8C;
    case 105u: goto L_0041CBC4;
    case 106u: goto L_0041CBEC;
    case 107u: goto L_0041CC0C;
    case 108u: goto L_0041CC2C;
    case 109u: goto L_0041CC60;
    case 110u: goto L_0041CD04;
    case 111u: goto L_0041CD14;
    case 112u: goto L_0041CD50;
    case 113u: goto L_0041CD64;
    case 114u: goto L_0041CDBC;
    case 115u: goto L_0041CDEC;
    case 116u: goto L_0041CE08;
    case 117u: goto L_0041CE18;
    case 118u: goto L_0041CE50;
    case 119u: goto L_0041CE7C;
    case 120u: goto L_0041CED0;
    case 121u: goto L_0041CF04;
    case 122u: goto L_0041CF14;
    case 123u: goto L_0041CF24;
    case 124u: goto L_0041CF64;
    case 125u: goto L_0041CF74;
    case 126u: goto L_0041CF84;
    case 127u: goto L_0041CF94;
    case 128u: goto L_0041CFFC;
    case 129u: goto L_0041D008;
    case 130u: goto L_0041D030;
    case 131u: goto L_0041D03C;
    case 132u: goto L_0041D054;
    case 133u: goto L_0041D08C;
    case 134u: goto L_0041D0C0;
    case 135u: goto L_0041D0CC;
    case 136u: goto L_0041D0F4;
    case 137u: goto L_0041D110;
    case 138u: goto L_0041D134;
    case 139u: goto L_0041D154;
    case 140u: goto L_0041D164;
    case 141u: goto L_0041D180;
    case 142u: goto L_0041D1E4;
    case 143u: goto L_0041D1FC;
    case 144u: goto L_0041D22C;
    case 145u: goto L_0041D244;
    case 146u: goto L_0041D24C;
    case 147u: goto L_0041D268;
    case 148u: goto L_0041D278;
    case 149u: goto L_0041D2FC;
    case 150u: goto L_0041D484;
    case 151u: goto L_0041D4A4;
    case 152u: goto L_0041D4C4;
    case 153u: goto L_0041D500;
    case 154u: goto L_0041D520;
    case 155u: goto L_0041D540;
    case 156u: goto L_0041D560;
    case 157u: goto L_0041D6E4;
    case 158u: goto L_0041D704;
    case 159u: goto L_0041D724;
    case 160u: goto L_0041D794;
    case 161u: goto L_0041D7E0;
    case 162u: goto L_0041D800;
    case 163u: goto L_0041D810;
    case 164u: goto L_0041D824;
    case 165u: goto L_0041D890;
    case 166u: goto L_0041D8E4;
    case 167u: goto L_0041D8F4;
    case 168u: goto L_0041D924;
    case 169u: goto L_0041D9B0;
    case 170u: goto L_0041D9E0;
    case 171u: goto L_0041D9F8;
    case 172u: goto L_0041DA10;
    case 173u: goto L_0041DA24;
    case 174u: goto L_0041DA40;
    case 175u: goto L_0041DA50;
    case 176u: goto L_0041DA60;
    case 177u: goto L_0041DAB8;
    case 178u: goto L_0041DAE4;
    case 179u: goto L_0041DB08;
    case 180u: goto L_0041DB60;
    case 181u: goto L_0041DBA0;
    case 182u: goto L_0041DBB8;
    case 183u: goto L_0041DBD0;
    case 184u: goto L_0041DD30;
    case 185u: goto L_0041DD40;
    case 186u: goto L_0041DD5C;
    case 187u: goto L_0041DD74;
    case 188u: goto L_0041DD94;
    case 189u: goto L_0041DDAC;
    case 190u: goto L_0041DDE8;
    case 191u: goto L_0041DE00;
    case 192u: goto L_0041DE48;
    case 193u: goto L_0041DE58;
    case 194u: goto L_0041DE78;
    case 195u: goto L_0041DEDC;
    case 196u: goto L_0041DEFC;
    case 197u: goto L_0041DF0C;
    case 198u: goto L_0041DF24;
    case 199u: goto L_0041DFB4;
    case 200u: goto L_0041DFC8;
    case 201u: goto L_0041DFE0;
    case 202u: goto L_0041E018;
    case 203u: goto L_0041E038;
    case 204u: goto L_0041E050;
    case 205u: goto L_0041E08C;
    case 206u: goto L_0041E0A4;
    case 207u: goto L_0041E0B4;
    case 208u: goto L_0041E0F4;
    case 209u: goto L_0041E10C;
    case 210u: goto L_0041E12C;
    case 211u: goto L_0041E144;
    case 212u: goto L_0041E164;
    case 213u: goto L_0041E17C;
    case 214u: goto L_0041E1A0;
    case 215u: goto L_0041E1B8;
    case 216u: goto L_0041E1D4;
    case 217u: goto L_0041E204;
    case 218u: goto L_0041E230;
    case 219u: goto L_0041E278;
    case 220u: goto L_0041E29C;
    case 221u: goto L_0041E2B4;
    case 222u: goto L_0041E2C8;
    case 223u: goto L_0041E2E0;
    case 224u: goto L_0041E348;
    case 225u: goto L_0041E360;
    case 226u: goto L_0041E374;
    case 227u: goto L_0041E38C;
    case 228u: goto L_0041E39C;
    case 229u: goto L_0041E3D8;
    case 230u: goto L_0041E3F0;
    case 231u: goto L_0041E404;
    case 232u: goto L_0041E41C;
    case 233u: goto L_0041E42C;
    case 234u: goto L_0041E438;
    case 235u: goto L_0041E448;
    case 236u: goto L_0041E460;
    case 237u: goto L_0041E474;
    case 238u: goto L_0041E48C;
    case 239u: goto L_0041E4A0;
    case 240u: goto L_0041E4B0;
    case 241u: goto L_0041E504;
    case 242u: goto L_0041E50C;
    case 243u: goto L_0041E524;
    case 244u: goto L_0041E53C;
    case 245u: goto L_0041E544;
    case 246u: goto L_0041E55C;
    case 247u: goto L_0041E56C;
    case 248u: goto L_0041E574;
    case 249u: goto L_0041E590;
    case 250u: goto L_0041E5A0;
    case 251u: goto L_0041E5B0;
    case 252u: goto L_0041E600;
    case 253u: goto L_0041E618;
    case 254u: goto L_0041E630;
    case 255u: goto L_0041E644;
    case 256u: goto L_0041E65C;
    case 257u: goto L_0041E66C;
    case 258u: goto L_0041E6C0;
    case 259u: goto L_0041E7A8;
    case 260u: goto L_0041E7B8;
    case 261u: goto L_0041E7D4;
    case 262u: goto L_0041E7EC;
    case 263u: goto L_0041E7FC;
    case 264u: goto L_0041E83C;
    case 265u: goto L_0041E854;
    case 266u: goto L_0041E864;
    case 267u: goto L_0041E8B0;
    case 268u: goto L_0041E8C0;
    case 269u: goto L_0041E8E0;
    case 270u: goto L_0041E944;
    case 271u: goto L_0041E964;
    case 272u: goto L_0041E974;
    case 273u: goto L_0041E98C;
    case 274u: goto L_0041EA1C;
    case 275u: goto L_0041EA30;
    case 276u: goto L_0041EA48;
    case 277u: goto L_0041EA80;
    case 278u: goto L_0041EAA0;
    case 279u: goto L_0041EAB8;
    case 280u: goto L_0041EB10;
    case 281u: goto L_0041EB24;
    case 282u: goto L_0041EB3C;
    case 283u: goto L_0041EB74;
    case 284u: goto L_0041EBC0;
    case 285u: goto L_0041EC14;
    case 286u: goto L_0041EC1C;
    case 287u: goto L_0041EC34;
    case 288u: goto L_0041EC4C;
    case 289u: goto L_0041EC54;
    case 290u: goto L_0041EC6C;
    case 291u: goto L_0041EC7C;
    case 292u: goto L_0041EC84;
    case 293u: goto L_0041ECA0;
    case 294u: goto L_0041ECB0;
    case 295u: goto L_0041ED00;
    case 296u: goto L_0041ED18;
    case 297u: goto L_0041ED30;
    case 298u: goto L_0041ED5C;
    case 299u: goto L_0041EDE0;
    case 300u: goto L_0041F00C;
    case 301u: goto L_0041F020;
    case 302u: goto L_0041F038;
    case 303u: goto L_0041F048;
    case 304u: goto L_0041F060;
    case 305u: goto L_0041F08C;
    case 306u: goto L_0041F09C;
    case 307u: goto L_0041F0B4;
    case 308u: goto L_0041F0C4;
    case 309u: goto L_0041F0DC;
    case 310u: goto L_0041F0FC;
    case 311u: goto L_0041F114;
    case 312u: goto L_0041F19C;
    case 313u: goto L_0041F1B4;
    case 314u: goto L_0041F230;
    case 315u: goto L_0041F248;
    case 316u: goto L_0041F2E8;
    case 317u: goto L_0041F300;
    case 318u: goto L_0041F388;
    case 319u: goto L_0041F39C;
    case 320u: goto L_0041F3B8;
    case 321u: goto L_0041F414;
    case 322u: goto L_0041F42C;
    case 323u: goto L_0041F464;
    case 324u: goto L_0041F47C;
    case 325u: goto L_0041F494;
    case 326u: goto L_0041F51C;
    case 327u: goto L_0041F534;
    case 328u: goto L_0041F56C;
    case 329u: goto L_0041F584;
    case 330u: goto L_0041F5BC;
    case 331u: goto L_0041F5D4;
    case 332u: goto L_0041F66C;
    case 333u: goto L_0041F684;
    case 334u: goto L_0041F708;
    case 335u: goto L_0041F718;
    case 336u: goto L_0041F74C;
    case 337u: goto L_0041F764;
    case 338u: goto L_0041F7C4;
    case 339u: goto L_0041F7DC;
    case 340u: goto L_0041F810;
    case 341u: goto L_0041F828;
    case 342u: goto L_0041F85C;
    case 343u: goto L_0041F86C;
    case 344u: goto L_0041F8A0;
    case 345u: goto L_0041F8B8;
    case 346u: goto L_0041F918;
    case 347u: goto L_0041F930;
    case 348u: goto L_0041F964;
    case 349u: goto L_0041F97C;
    case 350u: goto L_0041F9B8;
    case 351u: goto L_0041F9D0;
    case 352u: goto L_0041FA30;
    case 353u: goto L_0041FA48;
    case 354u: goto L_0041FAA8;
    case 355u: goto L_0041FAC0;
    case 356u: goto L_0041FB14;
    case 357u: goto L_0041FB44;
    case 358u: goto L_0041FB80;
    case 359u: goto L_0041FBB0;
    case 360u: goto L_0041FBF0;
    case 361u: goto L_0041FC34;
    case 362u: goto L_0041FC44;
    case 363u: goto L_0041FC54;
    case 364u: goto L_0041FC6C;
    case 365u: goto L_0041FC78;
    case 366u: goto L_0041FC98;
    case 367u: goto L_0041FCB0;
    case 368u: goto L_0041FCDC;
    case 369u: goto L_0041FCE8;
    case 370u: goto L_0041FCFC;
    case 371u: goto L_0041FD08;
    case 372u: goto L_0041FD18;
    case 373u: goto L_0041FD30;
    case 374u: goto L_0041FD40;
    case 375u: goto L_0041FD54;
    case 376u: goto L_0041FD70;
    case 377u: goto L_0041FD98;
    case 378u: goto L_0041FDA8;
    case 379u: goto L_0041FDC0;
    case 380u: goto L_0041FDCC;
    case 381u: goto L_0041FDE0;
    case 382u: goto L_0041FDEC;
    case 383u: goto L_0041FE00;
    case 384u: goto L_0041FEDC;
    case 385u: goto L_0041FEEC;
    case 386u: goto L_0041FF08;
    case 387u: goto L_0041FF10;
    case 388u: goto L_0041FF28;
    case 389u: goto L_0041FF38;
    case 390u: goto L_0041FF50;
    case 391u: goto L_0041FF5C;
    case 392u: goto L_0041FF6C;
    case 393u: goto L_0041FF7C;
    case 394u: goto L_0041FF8C;
    case 395u: goto L_0041FFA4;
    case 396u: goto L_0041FFB8;
    case 397u: goto L_0041FFD4;
    case 398u: goto L_0041FFEC;
    default: bad_entry(c, 0x0041C000u); return;
    }
L_0041C000:
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 1;
L_0041C004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C00Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x0041C00Cu) [[unlikely]] return; }
L_0041C00C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_0041C034; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0041C998; } }
L_0041C034:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C044u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x00180D40u; return; } if (c.pc != 0x0041C044u) [[unlikely]] return; }
L_0041C044:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0041C04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C054u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0041C054u) [[unlikely]] return; }
L_0041C054:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_0041C078; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0041C998; } }
L_0041C078:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0041C090; }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_0041C090:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041C998; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  goto L_0041C0C0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), 0u);  goto L_0041C0BC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C0B8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C0B8u) [[unlikely]] return; }
L_0041C0B8:
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_0041C0BC:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0041C0C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], 0u + 4u);
    c.r[6].d[0] = c.r[6].d[0] << 33;
    c.r[6].d[0] = c.r[6].d[0] >> 33;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 12;
L_0041C0F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041C998; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = 0ull | 40004ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C124u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x0041C124u) [[unlikely]] return; }
L_0041C124:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C130u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x0041C130u) [[unlikely]] return; }
L_0041C130:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 30u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C148u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C148u) [[unlikely]] return; }
L_0041C148:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C164u); set32(c.r[5], c.r[2].w[0] + 51u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C164u) [[unlikely]] return; }
L_0041C164:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], 0u + 2u);  goto L_0041C1B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C178u);  if (depth < kMaxDepth) unit_00C1(c, 120u, depth + 1u); else { c.pc = 0x00424DD0u; return; } if (c.pc != 0x0041C178u) [[unlikely]] return; }
L_0041C178:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C18Cu);  if (depth < kMaxDepth) unit_00C1(c, 120u, depth + 1u); else { c.pc = 0x00424DD0u; return; } if (c.pc != 0x0041C18Cu) [[unlikely]] return; }
L_0041C18C:
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[5], 0u + 1u);  goto L_0041C1B8; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0041C1B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0041C1B8; } }
L_0041C1B4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0041C1B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C1C4u);  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0041C1C4u) [[unlikely]] return; }
L_0041C1C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C1D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0041C1D8u) [[unlikely]] return; }
L_0041C1D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C1E8u); set32(c.r[5], c.r[2].w[0] + 44u);  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0041C1E8u) [[unlikely]] return; }
L_0041C1E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C1FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0041C1FCu) [[unlikely]] return; }
L_0041C1FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C20Cu); set32(c.r[5], c.r[2].w[0] + 44u);  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0041C20Cu) [[unlikely]] return; }
L_0041C20C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 46u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C220u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0041C220u) [[unlikely]] return; }
L_0041C220:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C230u); set32(c.r[5], c.r[2].w[0] + 44u);  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0041C230u) [[unlikely]] return; }
L_0041C230:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C244u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0041C244u) [[unlikely]] return; }
L_0041C244:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[21].w[0] << 1);
    c.budget -= 2;
L_0041C24C:
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0041C414; }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[20], c.r[21].w[0] + 1u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C280u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C280u) [[unlikely]] return; }
L_0041C280:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[19], c.r[21].w[0] + 11u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C29Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C29Cu) [[unlikely]] return; }
L_0041C29C:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 136u)));  goto L_0041C2E8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[18].w[0] + 136u);  if (t) { goto L_0041C2D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C2BCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00C1(c, 65u, depth + 1u); else { c.pc = 0x004248A0u; return; } if (c.pc != 0x0041C2BCu) [[unlikely]] return; }
L_0041C2BC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0041C2D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0041C2F8; } }
L_0041C2D0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0041C2D4:
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { goto L_0041C2F8; } }
L_0041C2E8:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + 9u);
    c.budget -= 4;
L_0041C2F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[17], c.r[18].w[0] + 140u);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C30Cu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0041C30Cu) [[unlikely]] return; }
L_0041C30C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C320u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0041C320u) [[unlikely]] return; }
L_0041C320:
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[20], c.r[18].w[0] + 136u);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C334u); set32(c.r[5], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0041C334u) [[unlikely]] return; }
L_0041C334:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C348u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0041C348u) [[unlikely]] return; }
L_0041C348:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C358u); set32(c.r[5], c.r[2].w[0] + 41u);  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0041C358u) [[unlikely]] return; }
L_0041C358:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C36Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0041C36Cu) [[unlikely]] return; }
L_0041C36C:
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C37Cu); set32(c.r[5], c.r[2].w[0] + 44u);  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0041C37Cu) [[unlikely]] return; }
L_0041C37C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 31u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C390u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0041C390u) [[unlikely]] return; }
L_0041C390:
    set32(c.r[2], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C3A0u); set32(c.r[5], c.r[2].w[0] + 44u);  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0041C3A0u) [[unlikely]] return; }
L_0041C3A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 41u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C3B4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0041C3B4u) [[unlikely]] return; }
L_0041C3B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C3C4u); set32(c.r[5], c.r[2].w[0] + 44u);  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0041C3C4u) [[unlikely]] return; }
L_0041C3C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 51u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C3D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0041C3D8u) [[unlikely]] return; }
L_0041C3D8:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], 0u + 63u);  goto L_0041C3F0; }
    set32(c.r[5], 0u + 62u);
    c.budget -= 1;
L_0041C3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C3F8u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0041C3F8u) [[unlikely]] return; }
L_0041C3F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 101u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C40Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0041C40Cu) [[unlikely]] return; }
L_0041C40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_0041C42C; } }
L_0041C414:
    set32(c.r[5], c.r[21].w[0] + 21u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C428u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C428u) [[unlikely]] return; }
L_0041C428:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0041C42C:
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041C24Cu | kUnwind; return; } goto L_0041C24C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041C450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C44Cu);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x0041C44Cu) [[unlikely]] return; }
L_0041C44C:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_0041C450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C458u);  if (depth < kMaxDepth) unit_00C1(c, 135u, depth + 1u); else { c.pc = 0x00424F80u; return; } if (c.pc != 0x0041C458u) [[unlikely]] return; }
L_0041C458:
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], 0u + 165u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
L_0041C46C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 112u)));  goto L_0041C484; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0041C998; } }
L_0041C484:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = 0ull | 40009ull;  goto L_0041C49C; }
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), 0u);  if (t) { goto L_0041C998; } }
L_0041C49C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C4A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x0041C4A8u) [[unlikely]] return; }
L_0041C4A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], 0u + 31u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C4C0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C4C0u) [[unlikely]] return; }
L_0041C4C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C4D8u); set32(c.r[5], c.r[2].w[0] + 51u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C4D8u) [[unlikely]] return; }
L_0041C4D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C4F4u); set32(c.r[5], c.r[2].w[0] + 51u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C4F4u) [[unlikely]] return; }
L_0041C4F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[7], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C50Cu); set32(c.r[5], c.r[2].w[0] + 51u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C50Cu) [[unlikely]] return; }
L_0041C50C:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 60u);
    st32((c.r[16].w[0] + 108u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 7;
L_0041C528:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 100u)));  goto L_0041C540; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0041C998; } }
L_0041C540:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0041C568; }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], 0u + 98u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C560u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C560u) [[unlikely]] return; }
L_0041C560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_0041C580; } }
L_0041C568:
    set32(c.r[5], 0u + 99u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C57Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C57Cu) [[unlikely]] return; }
L_0041C57C:
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_0041C580:
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 1;
L_0041C584:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = ld64((c.r[3].w[0] + 96u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 100u)));  goto L_0041C5AC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 252u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 16ull;  goto L_0041C6CC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_0041C5AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041C6C8; } }
    c.r[4].d[0] = 0ull | 40005ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C5C8u); st32((c.r[16].w[0] + 252u), 0u);  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x0041C5C8u) [[unlikely]] return; }
L_0041C5C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 104u), 0u);  goto L_0041C5F8; }
    set32(c.r[6], 0u + 1u);
    st32((c.r[16].w[0] + 104u), c.r[6].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C5F0u); set32(c.r[5], c.r[2].w[0] + 51u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C5F0u) [[unlikely]] return; }
L_0041C5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 104u)));  if (t) { goto L_0041C614; } }
L_0041C5F8:
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C610u); set32(c.r[5], c.r[2].w[0] + 51u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C610u) [[unlikely]] return; }
L_0041C610:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 1;
L_0041C614:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C62Cu); set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C62Cu) [[unlikely]] return; }
L_0041C62C:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 2;
L_0041C634:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 104u)));  goto L_0041C68C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], c.r[17].w[0] + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C668u); set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C668u) [[unlikely]] return; }
L_0041C668:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], c.r[17].w[0] + 11u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C684u); set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C684u) [[unlikely]] return; }
L_0041C684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0041C6A8; } }
L_0041C68C:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], c.r[17].w[0] + 21u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C6A4u); set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C6A4u) [[unlikely]] return; }
L_0041C6A4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0041C6A8:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041C634u | kUnwind; return; } goto L_0041C634; }
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 32u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0041C998; } }
L_0041C6C8:
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 1;
L_0041C6CC:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041C998; } }
    c.r[4].d[0] = 0ull | 40005ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C6E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x0041C6E8u) [[unlikely]] return; }
L_0041C6E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C700u); set32(c.r[7], c.r[2].w[0] + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C700u) [[unlikely]] return; }
L_0041C700:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C718u); set32(c.r[7], c.r[2].w[0] + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C718u) [[unlikely]] return; }
L_0041C718:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 116u)));  goto L_0041C744; }
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C73Cu); set32(c.r[5], c.r[2].w[0] + 51u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C73Cu) [[unlikely]] return; }
L_0041C73C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (t) { goto L_0041C75C; } }
L_0041C744:
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[7], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C758u); set32(c.r[5], c.r[2].w[0] + 51u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C758u) [[unlikely]] return; }
L_0041C758:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_0041C75C:
    set32(c.r[5], 0u + 30u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C76Cu); set32(c.r[7], 0u + 23u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C76Cu) [[unlikely]] return; }
L_0041C76C:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 2;
L_0041C774:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 104u)));  goto L_0041C7C4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], c.r[17].w[0] + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C7A4u); set32(c.r[7], c.r[2].w[0] + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C7A4u) [[unlikely]] return; }
L_0041C7A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], c.r[17].w[0] + 11u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C7BCu); set32(c.r[7], c.r[2].w[0] + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C7BCu) [[unlikely]] return; }
L_0041C7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0041C7DC; } }
L_0041C7C4:
    set32(c.r[5], c.r[17].w[0] + 21u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C7D8u); set32(c.r[7], c.r[2].w[0] + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C7D8u) [[unlikely]] return; }
L_0041C7D8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0041C7DC:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041C774u | kUnwind; return; } goto L_0041C774; }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 41u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C7FCu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C7FCu) [[unlikely]] return; }
L_0041C7FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], 0u + 42u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C814u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C814u) [[unlikely]] return; }
L_0041C814:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 42u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C828u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C828u) [[unlikely]] return; }
L_0041C828:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0041C850; }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], 0u + 98u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C848u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C848u) [[unlikely]] return; }
L_0041C848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_0041C864; } }
L_0041C850:
    set32(c.r[5], 0u + 99u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C860u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041C860u) [[unlikely]] return; }
L_0041C860:
    set32(c.r[4], 0u + 8u);
    c.budget -= 1;
L_0041C864:
    set32(c.r[3], 0u + 30u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0041C998; } }
L_0041C874:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0041C88C; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0041C998; } }
L_0041C88C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C8BCu); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C8BCu) [[unlikely]] return; }
L_0041C8BC:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 2;
L_0041C8C4:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C8D4u); set32(c.r[5], c.r[17].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C8D4u) [[unlikely]] return; }
L_0041C8D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C8E8u); set32(c.r[5], c.r[17].w[0] + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C8E8u) [[unlikely]] return; }
L_0041C8E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041C8C4u | kUnwind; return; } goto L_0041C8C4; }
    set32(c.r[4], 0u + 9u);
    set32(c.r[3], 0u + 30u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_0041C908:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_0041C920; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0041C998; } }
L_0041C920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C928u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 486u, depth + 1u); else { c.pc = 0x0034FCB0u; return; } if (c.pc != 0x0041C928u) [[unlikely]] return; }
L_0041C928:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C95Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 487u, depth + 1u); else { c.pc = 0x0041BE30u; return; } if (c.pc != 0x0041C95Cu) [[unlikely]] return; }
L_0041C95C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0041C998; } }
L_0041C968:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041C998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C988u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x0041C988u) [[unlikely]] return; }
L_0041C988:
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 30u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_0041C998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0041C99C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0041C9C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041C9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C9ECu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0041C9ECu) [[unlikely]] return; }
L_0041C9EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15392u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CA04u); st32((c.r[17].w[0] + 56u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 97u, depth + 1u); else { c.pc = 0x0041CAA0u; return; } if (c.pc != 0x0041CA04u) [[unlikely]] return; }
L_0041CA04:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041CA30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041CA80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15392u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CA5Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 100u, depth + 1u); else { c.pc = 0x0041CB00u; return; } if (c.pc != 0x0041CA5Cu) [[unlikely]] return; }
L_0041CA5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CA68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0041CA68u) [[unlikely]] return; }
L_0041CA68:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0041CA84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CA80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0041CA80u) [[unlikely]] return; }
L_0041CA80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041CA84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041CAA0:
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    c.budget -= 6;
L_0041CAB8:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 76u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CAB8u | kUnwind; return; } goto L_0041CAB8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041CAD8:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 64u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CAD8u | kUnwind; return; } goto L_0041CAD8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041CB00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 8;
L_0041CB20:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 76u);  if (t) { goto L_0041CB4C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_0041CB4C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CB48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041CB48u) [[unlikely]] return; }
L_0041CB48:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0041CB4C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CB20u | kUnwind; return; } goto L_0041CB20; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 2;
L_0041CB64:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 64u);  if (t) { goto L_0041CB90; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_0041CB90; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CB8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041CB8Cu) [[unlikely]] return; }
L_0041CB8C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0041CB90:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CB64u | kUnwind; return; } goto L_0041CB64; }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0041CBCC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), 0u);  goto L_0041CBC8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CBC4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041CBC4u) [[unlikely]] return; }
L_0041CBC4:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_0041CBC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_0041CBCC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  goto L_0041CBF4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 120u), 0u);  goto L_0041CBF0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CBECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041CBECu) [[unlikely]] return; }
L_0041CBEC:
    st32((c.r[16].w[0] + 120u), 0u);
    c.budget -= 1;
L_0041CBF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_0041CBF4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_0041CC14; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CC0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041CC0Cu) [[unlikely]] return; }
L_0041CC0C:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 2;
L_0041CC14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0041CC34; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CC2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041CC2Cu) [[unlikely]] return; }
L_0041CC2C:
    st32((c.r[16].w[0] + 124u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_0041CC34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041CC60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 40u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041D784; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0041D570; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 30u);  goto L_0041D470; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 20u);  goto L_0041D450; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0041D30C; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 10u);  goto L_0041D2C0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  goto L_0041D198; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0041CEE4; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_0041CE8C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0041CD48; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0041CD08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0041D7C8; } }
L_0041CD04:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0041CD08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CD14u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 100u, depth + 1u); else { c.pc = 0x0041CB00u; return; } if (c.pc != 0x0041CD14u) [[unlikely]] return; }
L_0041CD14:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0041D7C4; } }
L_0041CD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CD50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0041CD50u) [[unlikely]] return; }
L_0041CD50:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CD64u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0041CD64u) [[unlikely]] return; }
L_0041CD64:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0041CD78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0041CD8C; } }
L_0041CD78:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0041CD8C; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_0041CD8C:
    set32(c.r[2], 0u + 100u);
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[1].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;  goto L_0041CDC0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0041CDBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CDBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0041CDBCu) [[unlikely]] return; }
L_0041CDBC:
    c.r[1].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 1;
L_0041CDC0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0041CDCC; } }
    set32(c.r[17], 0u + 8u);
    c.budget -= 1;
L_0041CDCC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { goto L_0041CDD8; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0041CDD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CDECu); set32(c.r[5], c.r[5].w[0] - 30672u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x0041CDECu) [[unlikely]] return; }
L_0041CDEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 360u);  goto L_0041CE10; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CE08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041CE08u) [[unlikely]] return; }
L_0041CE08:
    st32((c.r[16].w[0] + 124u), 0u);
    set32(c.r[4], 0u + 360u);
    c.budget -= 2;
L_0041CE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CE18u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041CE18u) [[unlikely]] return; }
L_0041CE18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 124u), c.r[4].w[0]);  goto L_0041CE58; }
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_0041CE34; }
    set32(c.r[7], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0041CE34:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 30640u);
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CE50u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0041CE50u) [[unlikely]] return; }
L_0041CE50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 124u), c.r[4].w[0]);
    c.budget -= 2;
L_0041CE58:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_0041CE80; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0041CE7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CE7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0041CE7Cu) [[unlikely]] return; }
L_0041CE7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_0041CE80:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
L_0041CE8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041D7C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041CEC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_0041CED8; }
L_0041CEC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CED0u); set32(c.r[5], c.r[5].w[0] - 30464u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0041CED0u) [[unlikely]] return; }
L_0041CED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CD04u | kUnwind; return; } goto L_0041CD04; } }
L_0041CED8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
L_0041CEE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 336u);  goto L_0041CF0C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 120u), 0u);  goto L_0041CF08; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CF04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041CF04u) [[unlikely]] return; }
L_0041CF04:
    st32((c.r[16].w[0] + 120u), 0u);
    c.budget -= 1;
L_0041CF08:
    set32(c.r[4], 0u + 336u);
    c.budget -= 1;
L_0041CF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CF14u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041CF14u) [[unlikely]] return; }
L_0041CF14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  goto L_0041CF28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CF24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 393u, depth + 1u); else { c.pc = 0x0020BD00u; return; } if (c.pc != 0x0041CF24u) [[unlikely]] return; }
L_0041CF24:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_0041CF28:
    set32(c.r[3], 0u + 3u);
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 352u);  goto L_0041CF6C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), 0u);  goto L_0041CF68; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CF64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041CF64u) [[unlikely]] return; }
L_0041CF64:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_0041CF68:
    set32(c.r[4], 0u + 352u);
    c.budget -= 1;
L_0041CF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CF74u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041CF74u) [[unlikely]] return; }
L_0041CF74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  goto L_0041CF88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CF84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 44u, depth + 1u); else { c.pc = 0x00210980u; return; } if (c.pc != 0x0041CF84u) [[unlikely]] return; }
L_0041CF84:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_0041CF88:
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CF94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x0041CF94u) [[unlikely]] return; }
L_0041CF94:
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 10100u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[2], ld32((c.r[5].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    st32((c.r[5].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    st32((c.r[5].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    st32((c.r[5].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    st32((c.r[5].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CFFCu); st32((c.r[3].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x0041CFFCu) [[unlikely]] return; }
L_0041CFFC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 3;
L_0041D008:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 76u);  if (t) { goto L_0041D034; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_0041D034; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D030u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D030u) [[unlikely]] return; }
L_0041D030:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0041D034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D03Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041D03Cu) [[unlikely]] return; }
L_0041D03C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_0041D058; }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D054u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x0041D054u) [[unlikely]] return; }
L_0041D054:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0041D058:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 30608u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D08Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x0041D08Cu) [[unlikely]] return; }
L_0041D08C:
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 30608u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D0C0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x0041D0C0u) [[unlikely]] return; }
L_0041D0C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D0CCu); set32(c.r[5], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_003C(c, 64u, depth + 1u); else { c.pc = 0x00210D10u; return; } if (c.pc != 0x0041D0CCu) [[unlikely]] return; }
L_0041D0CC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D008u | kUnwind; return; } goto L_0041D008; }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D0F4u); c.r[5].d[0] = c.r[2].d[0] | 17473ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0041D0F4u) [[unlikely]] return; }
L_0041D0F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D110u); c.r[5].d[0] = c.r[2].d[0] | 21075ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0041D110u) [[unlikely]] return; }
L_0041D110:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0041D124; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  goto L_0041D13C; }
L_0041D124:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D134u); set32(c.r[5], c.r[5].w[0] - 30448u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0041D134u) [[unlikely]] return; }
L_0041D134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CD04u | kUnwind; return; } goto L_0041CD04; } }
L_0041D13C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 432u);  goto L_0041D15C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D154u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D154u) [[unlikely]] return; }
L_0041D154:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[4], 0u + 432u);
    c.budget -= 2;
L_0041D15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D164u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041D164u) [[unlikely]] return; }
L_0041D164:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 60u), c.r[4].w[0]);  goto L_0041D188; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D180u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 284u, depth + 1u); else { c.pc = 0x00207340u; return; } if (c.pc != 0x0041D180u) [[unlikely]] return; }
L_0041D180:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 2;
L_0041D188:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0041D7C4; } }
L_0041D198:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041D7C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CD04u | kUnwind; return; } goto L_0041CD04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CD04u | kUnwind; return; } goto L_0041CD04; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D1E4u); c.r[5].d[0] = c.r[2].d[0] | 17752ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0041D1E4u) [[unlikely]] return; }
L_0041D1E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 60u)));  goto L_0041D204; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D1FCu); set32(c.r[5], c.r[5].w[0] - 30448u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0041D1FCu) [[unlikely]] return; }
L_0041D1FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CD04u | kUnwind; return; } goto L_0041CD04; } }
L_0041D204:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0041D21C; }
    set32(c.r[4], ld32((c.r[5].w[0] + 52u)));
    c.budget -= 1;
L_0041D21C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D22Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0041D22Cu) [[unlikely]] return; }
L_0041D22C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0041D24C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D244u); set32(c.r[5], c.r[5].w[0] - 30416u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0041D244u) [[unlikely]] return; }
L_0041D244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CD04u | kUnwind; return; } goto L_0041CD04; } }
L_0041D24C:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D268u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x00207BE0u; return; } if (c.pc != 0x0041D268u) [[unlikely]] return; }
L_0041D268:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D278u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x0041D278u) [[unlikely]] return; }
L_0041D278:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 30472u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 284u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | 4096ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 292u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D24Cu | kUnwind; return; } goto L_0041D24C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
L_0041D2C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] - 30608u);
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_0041D2FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D2FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041D2FCu) [[unlikely]] return; }
L_0041D2FC:
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
L_0041D30C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0041D328; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0041D340; } }
L_0041D328:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0041D340:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 27140u));
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);  if (t) { goto L_0041D3D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], 0u + 255u);  goto L_0041D3D4; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_0041D3C0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041D3D4; } }
L_0041D3C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_0041D3D4:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[4], c.r[3].w[0] << 24);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[5].w[0] + 160u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 172u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 30;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 128u), c.f[1]);  if (t) { goto L_0041D7C4; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_0041D450:
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30632u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041D7C4; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_0041D470:
    set32(c.r[4], 0u + 2u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D484u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0041D484u) [[unlikely]] return; }
L_0041D484:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 64u)));  goto L_0041D4A8; }
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D4A4u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041D4A4u) [[unlikely]] return; }
L_0041D4A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_0041D4A8:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[7], ld32((c.r[16].w[0] + 56u)));  goto L_0041D4C8; }
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D4C4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041D4C4u) [[unlikely]] return; }
L_0041D4C4:
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_0041D4C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], c.r[5].w[0] - 30607u);
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_0041D500; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D500u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041D500u) [[unlikely]] return; }
L_0041D500:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 68u)));  goto L_0041D524; }
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D520u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041D520u) [[unlikely]] return; }
L_0041D520:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_0041D524:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 68u)));  goto L_0041D544; }
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D540u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041D540u) [[unlikely]] return; }
L_0041D540:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_0041D544:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 128u), 0u);  goto L_0041D564; }
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D560u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041D560u) [[unlikely]] return; }
L_0041D560:
    st32((c.r[16].w[0] + 128u), 0u);
    c.budget -= 1;
L_0041D564:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_0041D570:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0041D58C; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0041D5A4; } }
L_0041D58C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0041D5A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 255u);
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);  if (t) { goto L_0041D640; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = 0ull + 0ull;  goto L_0041D640; }
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_0041D624; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_0041D63C; } }
L_0041D624:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 255u);
    c.budget -= 6;
L_0041D63C:
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_0041D640:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[4], c.r[3].w[0] << 24);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[5].w[0] + 160u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 172u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 29;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0041D724; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0041D724; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 64u)));  goto L_0041D6E8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D6E4u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D6E4u) [[unlikely]] return; }
L_0041D6E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_0041D6E8:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 64u)));  goto L_0041D708; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D704u); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D704u) [[unlikely]] return; }
L_0041D704:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_0041D708:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041D724; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D724u); set32(c.r[5], 0u + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D724u) [[unlikely]] return; }
L_0041D724:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0041D740; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0041D758; } }
L_0041D740:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 6;
L_0041D758:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = 0u;
    c.f[3] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 128u), c.f[1]);  if (t) { goto L_0041D7C4; } }
L_0041D784:
    set32(c.r[2], 0u + 40u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D794u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 100u, depth + 1u); else { c.pc = 0x0041CB00u; return; } if (c.pc != 0x0041D794u) [[unlikely]] return; }
L_0041D794:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 12;
L_0041D7C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0041D7C8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0041D7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0041D804; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D800u); set32(c.r[4], ld32((c.r[4].w[0] + 120u)));  if (depth < kMaxDepth) unit_003A(c, 414u, depth + 1u); else { c.pc = 0x0020BFF0u; return; } if (c.pc != 0x0041D800u) [[unlikely]] return; }
L_0041D800:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041D804:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041D810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D824u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0041D824u) [[unlikely]] return; }
L_0041D824:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    set32(c.r[3], c.r[3].w[0] + 15456u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041D890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0041D998; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  goto L_0041D944; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_0041D8CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041D994; } }
L_0041D8CC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 360u);  goto L_0041D8EC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D8E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D8E4u) [[unlikely]] return; }
L_0041D8E4:
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[4], 0u + 360u);
    c.budget -= 2;
L_0041D8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D8F4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041D8F4u) [[unlikely]] return; }
L_0041D8F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[4].w[0]);  goto L_0041D92C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 30392u);
    set32(c.r[7], c.r[7].w[0] - 30376u);
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D924u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0041D924u) [[unlikely]] return; }
L_0041D924:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 2;
L_0041D92C:
    c.r[3].d[0] = 0ull | 50630ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0041D994; } }
L_0041D944:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041D994; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 15;
L_0041D994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041D998:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041D9B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041D9F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D9E0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0041D9E0u) [[unlikely]] return; }
L_0041D9E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0041D9FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D9F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0041D9F8u) [[unlikely]] return; }
L_0041D9F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041D9FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041DA10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DA24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 441u, depth + 1u); else { c.pc = 0x004231B0u; return; } if (c.pc != 0x0041DA24u) [[unlikely]] return; }
L_0041DA24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15584u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DA40u); st32((c.r[16].w[0] + 120u), 0u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0041DA40u) [[unlikely]] return; }
L_0041DA40:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DA50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 305u, depth + 1u); else { c.pc = 0x004221B0u; return; } if (c.pc != 0x0041DA50u) [[unlikely]] return; }
L_0041DA50:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DA60u); set32(c.r[6], 0u + 184u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0041DA60u) [[unlikely]] return; }
L_0041DA60:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0041DA74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_0041DA88; } }
L_0041DA74:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0041DA88; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0041DA88:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 120u)));  goto L_0041DABC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0041DAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DAB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0041DAB8u) [[unlikely]] return; }
L_0041DAB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_0041DABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041DB08; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], 0u + 184u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DAE4u); st32((c.r[29].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0041DAE4u) [[unlikely]] return; }
L_0041DAE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041DB08; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0041DB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DB08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0041DB08u) [[unlikely]] return; }
L_0041DB08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 17880u));
    c.f[1] = ld32((c.r[3].w[0] + 17884u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 17888u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0041DB60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041DBB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0041DBA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DBA0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0041DBA0u) [[unlikely]] return; }
L_0041DBA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0041DBBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DBB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0041DBB8u) [[unlikely]] return; }
L_0041DBB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041DBBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041DBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1201u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041E1E4; } }
    set32(c.r[5], 0u + 1200u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E1CC; }
    set32(c.r[5], 0u + 1103u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E1B0; }
    set32(c.r[5], 0u + 1102u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E194; }
    set32(c.r[5], 0u + 1101u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041E174; }
    set32(c.r[5], 0u + 1100u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041E158; }
    set32(c.r[5], 0u + 1001u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E13C; }
    set32(c.r[5], 0u + 1000u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E120; }
    set32(c.r[5], 0u + 901u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E104; }
    set32(c.r[5], 0u + 900u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E0E8; }
    set32(c.r[5], 0u + 801u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E09C; }
    set32(c.r[5], 0u + 800u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E080; }
    set32(c.r[5], 0u + 601u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041E048; }
    set32(c.r[7], 0u + 600u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[7].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041E02C; }
    set32(c.r[5], 0u + 501u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041DFD8; }
    set32(c.r[6], 0u + 500u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041DFBC; }
    set32(c.r[5], 0u + 401u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 116u)));  goto L_0041DF3C; }
    set32(c.r[6], 0u + 400u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_0041DEE4; }
    set32(c.r[5], 0u + 301u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_0041DE90; }
    set32(c.r[5], 0u + 300u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_0041DE30; }
    set32(c.r[5], 0u + 701u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041DDF8; }
    set32(c.r[5], 0u + 700u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041DDDC; }
    set32(c.r[5], 0u + 201u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041DDA4; }
    set32(c.r[5], 0u + 200u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041DD88; }
    set32(c.r[5], 0u + 101u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041DD6C; }
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041DD50; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041DD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041E224; } }
L_0041DD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD30u);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x0041DD30u) [[unlikely]] return; }
L_0041DD30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041E220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD40u);  if (depth < kMaxDepth) unit_00C0(c, 358u, depth + 1u); else { c.pc = 0x004225F0u; return; } if (c.pc != 0x0041DD40u) [[unlikely]] return; }
L_0041DD40:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[3], 0u + 100u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041DD50:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD5Cu); set32(c.r[5], c.r[5].w[0] + 17896u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041DD5Cu) [[unlikely]] return; }
L_0041DD5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041DD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD74u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041DD74u) [[unlikely]] return; }
L_0041DD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041E220; } }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041DD88:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD94u); set32(c.r[6], 0u + 83u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041DD94u) [[unlikely]] return; }
L_0041DD94:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041DDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DDACu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041DDACu) [[unlikely]] return; }
L_0041DDAC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 700u);  goto L_0041DDD4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 300u);  goto L_0041DDCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041E220; } }
L_0041DDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041DDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041DDDC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DDE8u); set32(c.r[6], 0u + 86u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041DDE8u) [[unlikely]] return; }
L_0041DDE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041DDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DE00u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041DE00u) [[unlikely]] return; }
L_0041DE00:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_0041DE28; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1000u);  goto L_0041DE20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041E220; } }
L_0041DE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041DE28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041DE30:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 132u);  goto L_0041DE50; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DE48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041DE48u) [[unlikely]] return; }
L_0041DE48:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], 0u + 132u);
    c.budget -= 2;
L_0041DE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DE58u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041DE58u) [[unlikely]] return; }
L_0041DE58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), c.r[4].w[0]);  goto L_0041DE80; }
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DE78u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 297u, depth + 1u); else { c.pc = 0x0041ED30u; return; } if (c.pc != 0x0041DE78u) [[unlikely]] return; }
L_0041DE78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 2;
L_0041DE80:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041DE90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041E220; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 200u);  goto L_0041DEBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[6].w[0]);  if (t) { goto L_0041DEC0; } }
L_0041DEBC:
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_0041DEC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E220; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DEDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041DEDCu) [[unlikely]] return; }
L_0041DEDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), 0u);  if (t) { goto L_0041E220; } }
L_0041DEE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 120u);  goto L_0041DF04; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DEFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041DEFCu) [[unlikely]] return; }
L_0041DEFC:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], 0u + 120u);
    c.budget -= 2;
L_0041DF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF0Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041DF0Cu) [[unlikely]] return; }
L_0041DF0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), c.r[4].w[0]);  goto L_0041DF2C; }
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 417u, depth + 1u); else { c.pc = 0x00422D20u; return; } if (c.pc != 0x0041DF24u) [[unlikely]] return; }
L_0041DF24:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 2;
L_0041DF2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041DF3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041E220; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 300u);  goto L_0041DF94; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_0041DF88; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 76u), c.r[7].w[0]);  goto L_0041DF98; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 76u), c.r[6].w[0]);  goto L_0041DF98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041DF90; } }
L_0041DF88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041DF98; } }
L_0041DF90:
    set32(c.r[3], 0u + 300u);
    c.budget -= 1;
L_0041DF94:
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_0041DF98:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E220; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DFB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041DFB4u) [[unlikely]] return; }
L_0041DFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), 0u);  if (t) { goto L_0041E220; } }
L_0041DFBC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DFC8u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041DFC8u) [[unlikely]] return; }
L_0041DFC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041DFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DFE0u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041DFE0u) [[unlikely]] return; }
L_0041DFE0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 700u);  goto L_0041E008; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 600u);  goto L_0041E000; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041E010; } }
L_0041E000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E018u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x0041E018u) [[unlikely]] return; }
L_0041E018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041E220; } }
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E02C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E038u); set32(c.r[5], c.r[5].w[0] + 17912u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041E038u) [[unlikely]] return; }
L_0041E038:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E050u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041E050u) [[unlikely]] return; }
L_0041E050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041E220; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 800u);  goto L_0041E078; }
    set32(c.r[3], 0u + 900u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E080:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E08Cu); set32(c.r[6], 0u + 84u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E08Cu) [[unlikely]] return; }
L_0041E08C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E0A4u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E0A4u) [[unlikely]] return; }
L_0041E0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041E220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E0B4u); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E0B4u) [[unlikely]] return; }
L_0041E0B4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_0041E0E0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1000u);  goto L_0041E0D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041E0DC; } }
L_0041E0D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E0DC:
    set32(c.r[3], 0u + 200u);
    c.budget -= 1;
L_0041E0E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E0E8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E0F4u); set32(c.r[6], 0u + 34u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E0F4u) [[unlikely]] return; }
L_0041E0F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E10Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E10Cu) [[unlikely]] return; }
L_0041E10C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041E220; } }
    set32(c.r[3], 0u + 1100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E120:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E12Cu); set32(c.r[6], 0u + 85u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E12Cu) [[unlikely]] return; }
L_0041E12C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E144u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E144u) [[unlikely]] return; }
L_0041E144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041E220; } }
    set32(c.r[3], 0u + 1200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E158:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E164u); set32(c.r[5], c.r[5].w[0] + 17928u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041E164u) [[unlikely]] return; }
L_0041E164:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E17Cu);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041E17Cu) [[unlikely]] return; }
L_0041E17C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041E220; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E194:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E1A0u); set32(c.r[6], 0u + 35u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E1A0u) [[unlikely]] return; }
L_0041E1A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E1B8u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E1B8u) [[unlikely]] return; }
L_0041E1B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041E220; } }
    set32(c.r[3], 0u + 1200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E1D4u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x0041E1D4u) [[unlikely]] return; }
L_0041E1D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041E220; } }
L_0041E1E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041E220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E204u);  if (depth < kMaxDepth) unit_00BD(c, 402u, depth + 1u); else { c.pc = 0x00417700u; return; } if (c.pc != 0x0041E204u) [[unlikely]] return; }
L_0041E204:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
L_0041E220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041E224:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041E2AC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E290; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 120u)));  goto L_0041E268; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041E2CC; } }
L_0041E268:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 120u), c.r[5].w[0]);  goto L_0041E280; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E278u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041E278u) [[unlikely]] return; }
L_0041E278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041E2C8; } }
L_0041E280:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041E2C8; } }
L_0041E290:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E29Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E29Cu) [[unlikely]] return; }
L_0041E29C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041E2C8; } }
L_0041E2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E2B4u); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E2B4u) [[unlikely]] return; }
L_0041E2B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041E2C8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E2C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041E2C8u) [[unlikely]] return; }
L_0041E2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041E2CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E2E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 21u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E484; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041E440; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E414; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041E3D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E384; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041E4A4; } }
L_0041E340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E348u);  if (depth < kMaxDepth) unit_00C1(c, 219u, depth + 1u); else { c.pc = 0x00425580u; return; } if (c.pc != 0x0041E348u) [[unlikely]] return; }
L_0041E348:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E368; }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E360u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E360u) [[unlikely]] return; }
L_0041E360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 108u)));  if (t) { goto L_0041E378; } }
L_0041E368:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E374u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E374u) [[unlikely]] return; }
L_0041E374:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 1;
L_0041E378:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041E4A0; } }
L_0041E384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E38Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E38Cu) [[unlikely]] return; }
L_0041E38C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041E4A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E39Cu); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E39Cu) [[unlikely]] return; }
L_0041E39C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 20u);  goto L_0041E3C8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 10u);  goto L_0041E3BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041E3C4; } }
L_0041E3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041E4A0; } }
L_0041E3C4:
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_0041E3C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041E4A0; } }
L_0041E3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E3D8u);  if (depth < kMaxDepth) unit_00C1(c, 219u, depth + 1u); else { c.pc = 0x00425580u; return; } if (c.pc != 0x0041E3D8u) [[unlikely]] return; }
L_0041E3D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E3F8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E3F0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E3F0u) [[unlikely]] return; }
L_0041E3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 108u)));  if (t) { goto L_0041E408; } }
L_0041E3F8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E404u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E404u) [[unlikely]] return; }
L_0041E404:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 1;
L_0041E408:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041E4A0; } }
L_0041E414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E41Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E41Cu) [[unlikely]] return; }
L_0041E41C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041E4A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E42Cu);  if (depth < kMaxDepth) unit_00C1(c, 183u, depth + 1u); else { c.pc = 0x00425390u; return; } if (c.pc != 0x0041E42Cu) [[unlikely]] return; }
L_0041E42C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E438u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041E438u) [[unlikely]] return; }
L_0041E438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041E4A0; } }
L_0041E440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E448u);  if (depth < kMaxDepth) unit_00C1(c, 219u, depth + 1u); else { c.pc = 0x00425580u; return; } if (c.pc != 0x0041E448u) [[unlikely]] return; }
L_0041E448:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E468; }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E460u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E460u) [[unlikely]] return; }
L_0041E460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 108u)));  if (t) { goto L_0041E478; } }
L_0041E468:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E474u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E474u) [[unlikely]] return; }
L_0041E474:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 1;
L_0041E478:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041E4A0; } }
L_0041E484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E48Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E48Cu) [[unlikely]] return; }
L_0041E48C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041E4A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E4A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041E4A0u) [[unlikely]] return; }
L_0041E4A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041E4A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E4B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041E554; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041E534; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041E51C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E4F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041E594; } }
L_0041E4F8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E504u); set32(c.r[6], 0u + 33u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E504u) [[unlikely]] return; }
L_0041E504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E50Cu);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x001B5C70u; return; } if (c.pc != 0x0041E50Cu) [[unlikely]] return; }
L_0041E50C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041E590; } }
L_0041E51C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E524u);  if (depth < kMaxDepth) unit_00C0(c, 331u, depth + 1u); else { c.pc = 0x00422440u; return; } if (c.pc != 0x0041E524u) [[unlikely]] return; }
L_0041E524:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041E590; } }
L_0041E534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E53Cu);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0041E53Cu) [[unlikely]] return; }
L_0041E53C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E544u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 311u, depth + 1u); else { c.pc = 0x00422280u; return; } if (c.pc != 0x0041E544u) [[unlikely]] return; }
L_0041E544:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041E590; } }
L_0041E554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E55Cu);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x0041E55Cu) [[unlikely]] return; }
L_0041E55C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041E590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E56Cu);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x0041E56Cu) [[unlikely]] return; }
L_0041E56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E574u);  if (depth < kMaxDepth) unit_00C0(c, 304u, depth + 1u); else { c.pc = 0x004221A0u; return; } if (c.pc != 0x0041E574u) [[unlikely]] return; }
L_0041E574:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0041E588; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0041E588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E590u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041E590u) [[unlikely]] return; }
L_0041E590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041E594:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E5A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00C0(c, 448u, depth); }
L_0041E5B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041E618; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0041E600; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0041E600; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E600u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0041E600u) [[unlikely]] return; }
L_0041E600:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0041E61C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E618u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0041E618u) [[unlikely]] return; }
L_0041E618:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041E61C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041E630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 441u, depth + 1u); else { c.pc = 0x004231B0u; return; } if (c.pc != 0x0041E644u) [[unlikely]] return; }
L_0041E644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15648u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E65Cu); st32((c.r[16].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0041E65Cu) [[unlikely]] return; }
L_0041E65C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E66Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 305u, depth + 1u); else { c.pc = 0x004221B0u; return; } if (c.pc != 0x0041E66Cu) [[unlikely]] return; }
L_0041E66C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 17944u));
    c.f[1] = ld32((c.r[3].w[0] + 17948u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 17952u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 801u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041EB84; } }
    set32(c.r[3], 0u + 800u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041EB6C; }
    set32(c.r[3], 0u + 701u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041EB34; }
    set32(c.r[3], 0u + 700u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0041EAF0; }
    set32(c.r[3], 0u + 601u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041EAB0; }
    set32(c.r[7], 0u + 600u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[7].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041EA94; }
    set32(c.r[3], 0u + 501u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041EA40; }
    set32(c.r[6], 0u + 500u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041EA24; }
    set32(c.r[3], 0u + 401u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 116u)));  goto L_0041E9A4; }
    set32(c.r[5], 0u + 400u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_0041E94C; }
    set32(c.r[3], 0u + 301u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_0041E8F8; }
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_0041E898; }
    set32(c.r[3], 0u + 201u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E84C; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E830; }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E7E4; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041E7C8; }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0041E7A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041EBB0; } }
L_0041E7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E7A8u);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x0041E7A8u) [[unlikely]] return; }
L_0041E7A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041EBAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E7B8u);  if (depth < kMaxDepth) unit_00C0(c, 358u, depth + 1u); else { c.pc = 0x004225F0u; return; } if (c.pc != 0x0041E7B8u) [[unlikely]] return; }
L_0041E7B8:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[3], 0u + 100u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041E7C8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E7D4u); set32(c.r[6], 0u + 87u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E7D4u) [[unlikely]] return; }
L_0041E7D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041E7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E7ECu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E7ECu) [[unlikely]] return; }
L_0041E7EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041EBAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E7FCu); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E7FCu) [[unlikely]] return; }
L_0041E7FC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_0041E828; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 300u);  goto L_0041E81C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041E824; } }
L_0041E81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041E824:
    set32(c.r[3], 0u + 200u);
    c.budget -= 1;
L_0041E828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041E830:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E83Cu); set32(c.r[6], 0u + 88u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041E83Cu) [[unlikely]] return; }
L_0041E83C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041E84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E854u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E854u) [[unlikely]] return; }
L_0041E854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041EBAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E864u); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041E864u) [[unlikely]] return; }
L_0041E864:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 100u);  goto L_0041E890; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 800u);  goto L_0041E884; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041E88C; } }
L_0041E884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041E88C:
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
L_0041E890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041E898:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 132u);  goto L_0041E8B8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E8B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041E8B0u) [[unlikely]] return; }
L_0041E8B0:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], 0u + 132u);
    c.budget -= 2;
L_0041E8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E8C0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041E8C0u) [[unlikely]] return; }
L_0041E8C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), c.r[4].w[0]);  goto L_0041E8E8; }
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E8E0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 297u, depth + 1u); else { c.pc = 0x0041ED30u; return; } if (c.pc != 0x0041E8E0u) [[unlikely]] return; }
L_0041E8E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 2;
L_0041E8E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041E8F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041EBAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 100u);  goto L_0041E924; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[5].w[0]);  if (t) { goto L_0041E928; } }
L_0041E924:
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_0041E928:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041EBAC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E944u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041E944u) [[unlikely]] return; }
L_0041E944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), 0u);  if (t) { goto L_0041EBAC; } }
L_0041E94C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 120u);  goto L_0041E96C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E964u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041E964u) [[unlikely]] return; }
L_0041E964:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], 0u + 120u);
    c.budget -= 2;
L_0041E96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E974u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041E974u) [[unlikely]] return; }
L_0041E974:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), c.r[4].w[0]);  goto L_0041E994; }
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E98Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 417u, depth + 1u); else { c.pc = 0x00422D20u; return; } if (c.pc != 0x0041E98Cu) [[unlikely]] return; }
L_0041E98C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 2;
L_0041E994:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041E9A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041EBAC; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 300u);  goto L_0041E9FC; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 100u);  goto L_0041E9F0; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 76u), c.r[7].w[0]);  goto L_0041EA00; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 76u), c.r[6].w[0]);  goto L_0041EA00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041E9F8; } }
L_0041E9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EA00; } }
L_0041E9F8:
    set32(c.r[3], 0u + 300u);
    c.budget -= 1;
L_0041E9FC:
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_0041EA00:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041EBAC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EA1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041EA1Cu) [[unlikely]] return; }
L_0041EA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), 0u);  if (t) { goto L_0041EBAC; } }
L_0041EA24:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EA30u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041EA30u) [[unlikely]] return; }
L_0041EA30:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041EA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EA48u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041EA48u) [[unlikely]] return; }
L_0041EA48:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_0041EA70; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 600u);  goto L_0041EA68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041EA78; } }
L_0041EA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041EA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041EA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EA80u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x0041EA80u) [[unlikely]] return; }
L_0041EA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041EBAC; } }
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041EA94:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EAA0u); set32(c.r[5], c.r[5].w[0] + 17960u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041EAA0u) [[unlikely]] return; }
L_0041EAA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041EAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EAB8u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041EAB8u) [[unlikely]] return; }
L_0041EAB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041EBAC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 700u);  goto L_0041EAE8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 700u);
    c.budget -= 5;
L_0041EAE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041EAF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041EB18; }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EB10u); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041EB10u) [[unlikely]] return; }
L_0041EB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_0041EB28; } }
L_0041EB18:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EB24u); set32(c.r[6], 0u + 37u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041EB24u) [[unlikely]] return; }
L_0041EB24:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0041EB28:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041EB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EB3Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041EB3Cu) [[unlikely]] return; }
L_0041EB3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041EBAC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 100u);  goto L_0041EB64; }
    set32(c.r[3], 0u + 800u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041EB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041EB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EB74u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x0041EB74u) [[unlikely]] return; }
L_0041EB74:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041EBAC; } }
L_0041EB84:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041EBAC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0041EBAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041EBB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041EBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041EC64; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041EC44; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041EC2C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041EC08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041ECA4; } }
L_0041EC08:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC14u); set32(c.r[6], 0u + 33u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041EC14u) [[unlikely]] return; }
L_0041EC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC1Cu);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x001B5C70u; return; } if (c.pc != 0x0041EC1Cu) [[unlikely]] return; }
L_0041EC1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041ECA0; } }
L_0041EC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC34u);  if (depth < kMaxDepth) unit_00C0(c, 331u, depth + 1u); else { c.pc = 0x00422440u; return; } if (c.pc != 0x0041EC34u) [[unlikely]] return; }
L_0041EC34:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041ECA0; } }
L_0041EC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC4Cu);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0041EC4Cu) [[unlikely]] return; }
L_0041EC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 311u, depth + 1u); else { c.pc = 0x00422280u; return; } if (c.pc != 0x0041EC54u) [[unlikely]] return; }
L_0041EC54:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041ECA0; } }
L_0041EC64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC6Cu);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x0041EC6Cu) [[unlikely]] return; }
L_0041EC6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041ECA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC7Cu);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x0041EC7Cu) [[unlikely]] return; }
L_0041EC7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC84u);  if (depth < kMaxDepth) unit_00C0(c, 304u, depth + 1u); else { c.pc = 0x004221A0u; return; } if (c.pc != 0x0041EC84u) [[unlikely]] return; }
L_0041EC84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0041EC98; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0041EC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ECA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041ECA0u) [[unlikely]] return; }
L_0041ECA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041ECA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041ECB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041ED18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15648u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0041ED00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0041ED00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED00u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0041ED00u) [[unlikely]] return; }
L_0041ED00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0041ED1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0041ED18u) [[unlikely]] return; }
L_0041ED18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041ED1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041ED30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED5Cu); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 441u, depth + 1u); else { c.pc = 0x004231B0u; return; } if (c.pc != 0x0041ED5Cu) [[unlikely]] return; }
L_0041ED5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    set32(c.r[3], c.r[3].w[0] + 15712u);
    c.r[2].d[0] = c.r[2].d[0] | 19539ull;
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[19].w[0] + 112u), c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[19].w[0] + 116u), c.r[17].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[19].w[0] + 120u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 124u), 0u);
    st32((c.r[19].w[0] + 128u), 0u);
    c.f[2] = ld32((c.r[5].w[0] + 17976u));
    c.f[1] = ld32((c.r[4].w[0] + 17980u));
    c.f[0] = ld32((c.r[3].w[0] + 17984u));
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    st32((c.r[19].w[0] + 76u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041EDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2402u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[5], 0u + 2401u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 112u)));  goto L_0041FB90; }
    set32(c.r[5], 0u + 2400u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041FB74; }
    set32(c.r[5], 0u + 2302u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0041FBDC; }
    set32(c.r[5], 0u + 2301u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 112u)));  goto L_0041FB24; }
    set32(c.r[5], 0u + 2300u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041FB08; }
    set32(c.r[5], 0u + 2205u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041FAB8; }
    set32(c.r[5], 0u + 2204u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0041FA94; }
    set32(c.r[5], 0u + 2203u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041FA40; }
    set32(c.r[5], 0u + 2202u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0041FA1C; }
    set32(c.r[5], 0u + 2201u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041F9C8; }
    set32(c.r[5], 0u + 2200u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041F9A8; }
    set32(c.r[5], 0u + 2102u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041F8B0; }
    set32(c.r[5], 0u + 2101u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041F894; }
    set32(c.r[5], 0u + 2100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0041F854; } }
    set32(c.r[5], 0u + 2002u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041F75C; }
    set32(c.r[5], 0u + 2001u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041F740; }
    set32(c.r[5], 0u + 2000u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0041F700; } }
    set32(c.r[5], 0u + 1301u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041F67C; }
    set32(c.r[5], 0u + 1300u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041F660; }
    set32(c.r[5], 0u + 1201u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041F5CC; }
    set32(c.r[5], 0u + 1200u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041F5B0; }
    set32(c.r[5], 0u + 1101u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041F52C; }
    set32(c.r[5], 0u + 1100u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041F510; }
    set32(c.r[5], 0u + 1001u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041F48C; }
    set32(c.r[5], 0u + 1000u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041F470; }
    set32(c.r[5], 0u + 503u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 68u));  goto L_0041F3F8; }
    set32(c.r[5], 0u + 502u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041F3C8; }
    set32(c.r[5], 0u + 501u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041F3AC; }
    set32(c.r[5], 0u + 500u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 116u)));  goto L_0041F370; }
    set32(c.r[5], 0u + 403u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041F2F8; }
    set32(c.r[5], 0u + 402u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041F2DC; }
    set32(c.r[5], 0u + 401u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041F240; }
    set32(c.r[5], 0u + 400u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041F224; }
    set32(c.r[5], 0u + 301u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041F1AC; }
    set32(c.r[5], 0u + 300u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041F190; }
    set32(c.r[5], 0u + 201u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_0041F10C; }
    set32(c.r[5], 0u + 200u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041F0F0; }
    set32(c.r[5], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0041F0D4; } }
    set32(c.r[5], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0041F0AC; } }
    set32(c.r[5], 0u + 101u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041F070; }
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041F054; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0041F030; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_0041F004; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041FBD8; } }
L_0041F004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F00Cu); set32(c.r[5], c.r[5].w[0] - 30352u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0041F00Cu) [[unlikely]] return; }
L_0041F00C:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0041F024; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F020u);  if (depth < kMaxDepth) unit_00C0(c, 318u, depth + 1u); else { c.pc = 0x00422320u; return; } if (c.pc != 0x0041F020u) [[unlikely]] return; }
L_0041F020:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0041F024:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F038u);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x0041F038u) [[unlikely]] return; }
L_0041F038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F048u);  if (depth < kMaxDepth) unit_00C0(c, 328u, depth + 1u); else { c.pc = 0x00422410u; return; } if (c.pc != 0x0041F048u) [[unlikely]] return; }
L_0041F048:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F054:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F060u); set32(c.r[6], 0u + 41u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F060u) [[unlikely]] return; }
L_0041F060:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F08Cu);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x0041F08Cu) [[unlikely]] return; }
L_0041F08C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F09Cu);  if (depth < kMaxDepth) unit_00C1(c, 532u, depth + 1u); else { c.pc = 0x00426DB0u; return; } if (c.pc != 0x0041F09Cu) [[unlikely]] return; }
L_0041F09C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F0B4u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x0041F0B4u) [[unlikely]] return; }
L_0041F0B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F0C4u);  if (depth < kMaxDepth) unit_00C1(c, 536u, depth + 1u); else { c.pc = 0x00426E10u; return; } if (c.pc != 0x0041F0C4u) [[unlikely]] return; }
L_0041F0C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F0DCu);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x0041F0DCu) [[unlikely]] return; }
L_0041F0DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F0F0:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F0FCu); set32(c.r[5], c.r[5].w[0] + 17992u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041F0FCu) [[unlikely]] return; }
L_0041F0FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F10C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F114u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041F114u) [[unlikely]] return; }
L_0041F114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041F164; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041F164; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2000u);  goto L_0041F15C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 300u);  goto L_0041F154; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041F164; } }
L_0041F154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F164:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18008u));
    c.f[1] = ld32((c.r[4].w[0] + 18012u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18016u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F190:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F19Cu); set32(c.r[5], c.r[5].w[0] + 18024u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041F19Cu) [[unlikely]] return; }
L_0041F19C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F1B4u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041F1B4u) [[unlikely]] return; }
L_0041F1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041F1F8; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1000u);  goto L_0041F1F0; }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 400u);  goto L_0041F1E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041F1F8; } }
L_0041F1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F1F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F1F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18040u));
    c.f[1] = ld32((c.r[4].w[0] + 18044u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18048u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F224:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F230u); set32(c.r[5], c.r[5].w[0] + 18056u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041F230u) [[unlikely]] return; }
L_0041F230:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F248u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041F248u) [[unlikely]] return; }
L_0041F248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041F2B0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041F2B0; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2100u);  goto L_0041F2A8; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0041F29C; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 500u);  goto L_0041F294; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041F2B0; } }
L_0041F294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F29C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F2B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18072u));
    c.f[1] = ld32((c.r[4].w[0] + 18076u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18080u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F2DC:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F2E8u); set32(c.r[5], c.r[5].w[0] + 18088u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041F2E8u) [[unlikely]] return; }
L_0041F2E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F300u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041F300u) [[unlikely]] return; }
L_0041F300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041F344; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2000u);  goto L_0041F33C; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1300u);  goto L_0041F334; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041F344; } }
L_0041F334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F33C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F344:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18104u));
    c.f[1] = ld32((c.r[4].w[0] + 18108u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18112u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041F394; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F388u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F388u) [[unlikely]] return; }
L_0041F388:
    set32(c.r[3], 0u + 2200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F39Cu);  if (depth < kMaxDepth) unit_00C0(c, 334u, depth + 1u); else { c.pc = 0x00422470u; return; } if (c.pc != 0x0041F39Cu) [[unlikely]] return; }
L_0041F39C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F3AC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F3B8u); set32(c.r[6], 0u + 47u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F3B8u) [[unlikely]] return; }
L_0041F3B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F3C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F3F8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041F458; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F414u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x0041F414u) [[unlikely]] return; }
L_0041F414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F42Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F42Cu) [[unlikely]] return; }
L_0041F42C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18120u));
    c.f[1] = ld32((c.r[4].w[0] + 18124u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18128u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F458:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F464u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F464u) [[unlikely]] return; }
L_0041F464:
    set32(c.r[3], 0u + 2200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F470:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F47Cu); set32(c.r[5], c.r[5].w[0] + 18136u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041F47Cu) [[unlikely]] return; }
L_0041F47C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F494u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041F494u) [[unlikely]] return; }
L_0041F494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041F4E4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041F4E4; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2000u);  goto L_0041F4DC; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1100u);  goto L_0041F4D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041F4E4; } }
L_0041F4D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F4E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18152u));
    c.f[1] = ld32((c.r[4].w[0] + 18156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18160u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F510:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F51Cu); set32(c.r[6], 0u + 42u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F51Cu) [[unlikely]] return; }
L_0041F51C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F52C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F534u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041F534u) [[unlikely]] return; }
L_0041F534:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2100u);  goto L_0041F55C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1200u);  goto L_0041F554; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041F564; } }
L_0041F554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F56Cu);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x0041F56Cu) [[unlikely]] return; }
L_0041F56C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F584u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F584u) [[unlikely]] return; }
L_0041F584:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18168u));
    c.f[1] = ld32((c.r[4].w[0] + 18172u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18176u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F5B0:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F5BCu); set32(c.r[5], c.r[5].w[0] + 18184u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041F5BCu) [[unlikely]] return; }
L_0041F5BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F5D4u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041F5D4u) [[unlikely]] return; }
L_0041F5D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041F634; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041F634; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2100u);  goto L_0041F62C; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1300u);  goto L_0041F624; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041F620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041F634; } }
L_0041F620:
    set32(c.r[3], 0u + 1300u);
    c.budget -= 1;
L_0041F624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18200u));
    c.f[1] = ld32((c.r[4].w[0] + 18204u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18208u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F660:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F66Cu); set32(c.r[5], c.r[5].w[0] + 18216u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041F66Cu) [[unlikely]] return; }
L_0041F66C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F684u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041F684u) [[unlikely]] return; }
L_0041F684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041F6D4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0041F6D4; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2100u);  goto L_0041F6CC; }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2200u);  goto L_0041F6C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041F6D4; } }
L_0041F6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F6CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F6D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18232u));
    c.f[1] = ld32((c.r[4].w[0] + 18236u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18240u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F708u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x0041F708u) [[unlikely]] return; }
L_0041F708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F718u);  if (depth < kMaxDepth) unit_00C1(c, 553u, depth + 1u); else { c.pc = 0x00426FC0u; return; } if (c.pc != 0x0041F718u) [[unlikely]] return; }
L_0041F718:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0041F734; }
    set32(c.r[3], 0u + 2400u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F734:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F740:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F74Cu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F74Cu) [[unlikely]] return; }
L_0041F74C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F75C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F764u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041F764u) [[unlikely]] return; }
L_0041F764:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041F78C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2400u);  goto L_0041F784; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 128u)));  if (t) { goto L_0041F7B4; } }
L_0041F784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F78C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18248u));
    c.f[1] = ld32((c.r[4].w[0] + 18252u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18256u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F7B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041F808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F7C4u);  if (depth < kMaxDepth) unit_00C1(c, 573u, depth + 1u); else { c.pc = 0x00427210u; return; } if (c.pc != 0x0041F7C4u) [[unlikely]] return; }
L_0041F7C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F7DCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F7DCu) [[unlikely]] return; }
L_0041F7DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18264u));
    c.f[1] = ld32((c.r[4].w[0] + 18268u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18272u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F810u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x0041F810u) [[unlikely]] return; }
L_0041F810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F828u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F828u) [[unlikely]] return; }
L_0041F828:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18280u));
    c.f[1] = ld32((c.r[4].w[0] + 18284u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18288u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F85Cu);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x0041F85Cu) [[unlikely]] return; }
L_0041F85C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F86Cu);  if (depth < kMaxDepth) unit_00C1(c, 553u, depth + 1u); else { c.pc = 0x00426FC0u; return; } if (c.pc != 0x0041F86Cu) [[unlikely]] return; }
L_0041F86C:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0041F888; }
    set32(c.r[3], 0u + 2400u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F888:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F894:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F8A0u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F8A0u) [[unlikely]] return; }
L_0041F8A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F8B8u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041F8B8u) [[unlikely]] return; }
L_0041F8B8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041F8E0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2400u);  goto L_0041F8D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 128u)));  if (t) { goto L_0041F908; } }
L_0041F8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F8E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18296u));
    c.f[1] = ld32((c.r[4].w[0] + 18300u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18304u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041F95C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F918u);  if (depth < kMaxDepth) unit_00C1(c, 573u, depth + 1u); else { c.pc = 0x00427210u; return; } if (c.pc != 0x0041F918u) [[unlikely]] return; }
L_0041F918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F930u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F930u) [[unlikely]] return; }
L_0041F930:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18312u));
    c.f[1] = ld32((c.r[4].w[0] + 18316u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18320u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F95C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F964u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x0041F964u) [[unlikely]] return; }
L_0041F964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F97Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041F97Cu) [[unlikely]] return; }
L_0041F97C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18328u));
    c.f[1] = ld32((c.r[4].w[0] + 18332u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18336u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041F9A8:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F9B8u); st32((c.r[16].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041F9B8u) [[unlikely]] return; }
L_0041F9B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041F9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F9D0u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041F9D0u) [[unlikely]] return; }
L_0041F9D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0041FA10; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18360u));
    c.f[1] = ld32((c.r[4].w[0] + 18364u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18368u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041FA10:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041FA1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[5].w[0] + 18376u);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA30u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041FA30u) [[unlikely]] return; }
L_0041FA30:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041FA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA48u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041FA48u) [[unlikely]] return; }
L_0041FA48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0041FA88; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18392u));
    c.f[1] = ld32((c.r[4].w[0] + 18396u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18400u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041FA88:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041FA94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[5].w[0] + 18408u);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FAA8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x0041FAA8u) [[unlikely]] return; }
L_0041FAA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041FAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FAC0u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0041FAC0u) [[unlikely]] return; }
L_0041FAC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 2300u);  goto L_0041FB00; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18424u));
    c.f[1] = ld32((c.r[4].w[0] + 18428u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18432u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041FBD8; } }
L_0041FB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041FB08:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FB14u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041FB14u) [[unlikely]] return; }
L_0041FB14:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041FB24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FB44u); set32(c.r[5], c.r[5].w[0] - 30320u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0041FB44u) [[unlikely]] return; }
L_0041FB44:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041FB74:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FB80u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041FB80u) [[unlikely]] return; }
L_0041FB80:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041FBD8; } }
L_0041FB90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041FBD8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FBB0u); set32(c.r[5], c.r[5].w[0] - 30288u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0041FBB0u) [[unlikely]] return; }
L_0041FBB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 10;
L_0041FBD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041FBDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041FBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 101u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041FCA8; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041FC8C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041FC2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041FD58; } }
L_0041FC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC34u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x0041FC34u) [[unlikely]] return; }
L_0041FC34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FD54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC44u);  if (depth < kMaxDepth) unit_00C1(c, 553u, depth + 1u); else { c.pc = 0x00426FC0u; return; } if (c.pc != 0x0041FC44u) [[unlikely]] return; }
L_0041FC44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 100u);  goto L_0041FC84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC54u);  if (depth < kMaxDepth) unit_00C1(c, 551u, depth + 1u); else { c.pc = 0x00426F90u; return; } if (c.pc != 0x0041FC54u) [[unlikely]] return; }
L_0041FC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FC80; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC6Cu); set32(c.r[5], c.r[5].w[0] - 30256u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0041FC6Cu) [[unlikely]] return; }
L_0041FC6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC78u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041FC78u) [[unlikely]] return; }
L_0041FC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041FD54; } }
L_0041FC80:
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
L_0041FC84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041FD54; } }
L_0041FC8C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC98u); set32(c.r[6], 0u + 45u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041FC98u) [[unlikely]] return; }
L_0041FC98:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0041FD54; } }
L_0041FCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FCB0u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041FCB0u) [[unlikely]] return; }
L_0041FCB0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_0041FCF0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_0041FCD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041FD10; } }
L_0041FCD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FCDCu); set32(c.r[5], c.r[5].w[0] - 30240u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0041FCDCu) [[unlikely]] return; }
L_0041FCDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FCE8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041FCE8u) [[unlikely]] return; }
L_0041FCE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041FD54; } }
L_0041FCF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FCFCu); set32(c.r[5], c.r[5].w[0] - 30224u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0041FCFCu) [[unlikely]] return; }
L_0041FCFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD08u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041FD08u) [[unlikely]] return; }
L_0041FD08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041FD54; } }
L_0041FD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD18u);  if (depth < kMaxDepth) unit_00C1(c, 573u, depth + 1u); else { c.pc = 0x00427210u; return; } if (c.pc != 0x0041FD18u) [[unlikely]] return; }
L_0041FD18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041FD54; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD30u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041FD30u) [[unlikely]] return; }
L_0041FD30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD40u); set32(c.r[5], c.r[5].w[0] - 30192u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0041FD40u) [[unlikely]] return; }
L_0041FD40:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041FD54u) [[unlikely]] return; }
L_0041FD54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041FD58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041FD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041FD90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041FDF0; } }
L_0041FD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD98u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x0041FD98u) [[unlikely]] return; }
L_0041FD98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FDEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FDA8u);  if (depth < kMaxDepth) unit_00C1(c, 561u, depth + 1u); else { c.pc = 0x004270A0u; return; } if (c.pc != 0x0041FDA8u) [[unlikely]] return; }
L_0041FDA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_0041FDD4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FDC0u); set32(c.r[5], c.r[5].w[0] - 30160u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0041FDC0u) [[unlikely]] return; }
L_0041FDC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FDCCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041FDCCu) [[unlikely]] return; }
L_0041FDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041FDEC; } }
L_0041FDD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FDE0u); set32(c.r[5], c.r[5].w[0] - 30128u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0041FDE0u) [[unlikely]] return; }
L_0041FDE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FDECu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041FDECu) [[unlikely]] return; }
L_0041FDEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041FDF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041FE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 601u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00C0(c, 54u, depth); } }
    set32(c.r[3], 0u + 600u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  [[clang::musttail]] return unit_00C0(c, 52u, depth); }
    set32(c.r[3], 0u + 501u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  [[clang::musttail]] return unit_00C0(c, 44u, depth); }
    set32(c.r[3], 0u + 500u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  [[clang::musttail]] return unit_00C0(c, 42u, depth); }
    set32(c.r[3], 0u + 403u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00C0(c, 38u, depth); } }
    set32(c.r[3], 0u + 402u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00C0(c, 35u, depth); } }
    set32(c.r[3], 0u + 401u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  [[clang::musttail]] return unit_00C0(c, 34u, depth); }
    set32(c.r[3], 0u + 400u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  [[clang::musttail]] return unit_00C0(c, 31u, depth); }
    set32(c.r[3], 0u + 303u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  [[clang::musttail]] return unit_00C0(c, 23u, depth); }
    set32(c.r[3], 0u + 302u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  [[clang::musttail]] return unit_00C0(c, 21u, depth); }
    set32(c.r[3], 0u + 301u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  [[clang::musttail]] return unit_00C0(c, 13u, depth); }
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  [[clang::musttail]] return unit_00C0(c, 11u, depth); }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041FFE4; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0041FFC8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0041FF20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0041FED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_00C0(c, 59u, depth); } }
L_0041FED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FEDCu);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x0041FEDCu) [[unlikely]] return; }
L_0041FEDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00C0(c, 58u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FEECu);  if (depth < kMaxDepth) unit_00C1(c, 566u, depth + 1u); else { c.pc = 0x00427170u; return; } if (c.pc != 0x0041FEECu) [[unlikely]] return; }
L_0041FEEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041FF00; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00C0(c, 58u, depth); } }
L_0041FF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF08u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0041FF08u) [[unlikely]] return; }
L_0041FF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 312u, depth + 1u); else { c.pc = 0x00422290u; return; } if (c.pc != 0x0041FF10u) [[unlikely]] return; }
L_0041FF10:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00C0(c, 58u, depth); } }
L_0041FF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF28u);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x0041FF28u) [[unlikely]] return; }
L_0041FF28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00C0(c, 58u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF38u);  if (depth < kMaxDepth) unit_00C0(c, 304u, depth + 1u); else { c.pc = 0x004221A0u; return; } if (c.pc != 0x0041FF38u) [[unlikely]] return; }
L_0041FF38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FF64; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF50u); set32(c.r[5], c.r[5].w[0] - 30096u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0041FF50u) [[unlikely]] return; }
L_0041FF50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF5Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041FF5Cu) [[unlikely]] return; }
L_0041FF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00C0(c, 58u, depth); } }
L_0041FF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF6Cu);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x0041FF6Cu) [[unlikely]] return; }
L_0041FF6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00C0(c, 58u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF7Cu);  if (depth < kMaxDepth) unit_00C1(c, 553u, depth + 1u); else { c.pc = 0x00426FC0u; return; } if (c.pc != 0x0041FF7Cu) [[unlikely]] return; }
L_0041FF7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041FF94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF8Cu);  if (depth < kMaxDepth) unit_00C1(c, 551u, depth + 1u); else { c.pc = 0x00426F90u; return; } if (c.pc != 0x0041FF8Cu) [[unlikely]] return; }
L_0041FF8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 100u);  goto L_0041FFC0; }
L_0041FF94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FFA4u); set32(c.r[5], c.r[5].w[0] - 30064u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0041FFA4u) [[unlikely]] return; }
L_0041FFA4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FFB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0041FFB8u) [[unlikely]] return; }
L_0041FFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00C0(c, 58u, depth); } }
L_0041FFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00C0(c, 58u, depth); } }
L_0041FFC8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FFD4u); set32(c.r[6], 0u + 53u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0041FFD4u) [[unlikely]] return; }
L_0041FFD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00C0(c, 58u, depth); } }
L_0041FFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FFECu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041FFECu) [[unlikely]] return; }
L_0041FFEC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 300u);  [[clang::musttail]] return unit_00C0(c, 6u, depth); }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  [[clang::musttail]] return unit_00C0(c, 3u, depth); }
    [[clang::musttail]] return unit_00C0(c, 2u, depth);
}

}
