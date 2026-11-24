#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0,
    23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33,
    0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0,
    0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231,
    0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278,
    0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351,
    0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396,
    0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0,
    410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0,
};

void unit_003A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00208000;
    case 2u: goto L_00208020;
    case 3u: goto L_00208030;
    case 4u: goto L_0020806C;
    case 5u: goto L_00208084;
    case 6u: goto L_0020809C;
    case 7u: goto L_002080C4;
    case 8u: goto L_002080E4;
    case 9u: goto L_002080F4;
    case 10u: goto L_0020810C;
    case 11u: goto L_00208130;
    case 12u: goto L_00208168;
    case 13u: goto L_00208190;
    case 14u: goto L_002081B0;
    case 15u: goto L_002081C4;
    case 16u: goto L_00208218;
    case 17u: goto L_00208220;
    case 18u: goto L_0020823C;
    case 19u: goto L_00208248;
    case 20u: goto L_00208258;
    case 21u: goto L_00208268;
    case 22u: goto L_00208278;
    case 23u: goto L_00208280;
    case 24u: goto L_00208290;
    case 25u: goto L_002082D0;
    case 26u: goto L_002082F0;
    case 27u: goto L_00208300;
    case 28u: goto L_00208318;
    case 29u: goto L_00208324;
    case 30u: goto L_00208330;
    case 31u: goto L_00208354;
    case 32u: goto L_0020836C;
    case 33u: goto L_0020837C;
    case 34u: goto L_00208384;
    case 35u: goto L_00208394;
    case 36u: goto L_002083D4;
    case 37u: goto L_002083F4;
    case 38u: goto L_002083FC;
    case 39u: goto L_00208430;
    case 40u: goto L_00208458;
    case 41u: goto L_00208460;
    case 42u: goto L_00208470;
    case 43u: goto L_00208488;
    case 44u: goto L_00208494;
    case 45u: goto L_002084A0;
    case 46u: goto L_002084C4;
    case 47u: goto L_002084E0;
    case 48u: goto L_002084E8;
    case 49u: goto L_00208540;
    case 50u: goto L_00208558;
    case 51u: goto L_0020857C;
    case 52u: goto L_00208590;
    case 53u: goto L_002085C4;
    case 54u: goto L_002085DC;
    case 55u: goto L_002085F4;
    case 56u: goto L_00208610;
    case 57u: goto L_002086DC;
    case 58u: goto L_002086F0;
    case 59u: goto L_0020871C;
    case 60u: goto L_00208754;
    case 61u: goto L_00208770;
    case 62u: goto L_002087D0;
    case 63u: goto L_00208828;
    case 64u: goto L_00208860;
    case 65u: goto L_00208894;
    case 66u: goto L_00208918;
    case 67u: goto L_00208928;
    case 68u: goto L_00208938;
    case 69u: goto L_00208948;
    case 70u: goto L_00208958;
    case 71u: goto L_0020896C;
    case 72u: goto L_00208984;
    case 73u: goto L_002089C0;
    case 74u: goto L_002089D4;
    case 75u: goto L_002089DC;
    case 76u: goto L_002089E4;
    case 77u: goto L_002089EC;
    case 78u: goto L_002089F4;
    case 79u: goto L_002089FC;
    case 80u: goto L_00208A20;
    case 81u: goto L_00208A44;
    case 82u: goto L_00208A50;
    case 83u: goto L_00208A88;
    case 84u: goto L_00208AA0;
    case 85u: goto L_00208AB8;
    case 86u: goto L_00208AE0;
    case 87u: goto L_00208B04;
    case 88u: goto L_00208B10;
    case 89u: goto L_00208B48;
    case 90u: goto L_00208B60;
    case 91u: goto L_00208B78;
    case 92u: goto L_00208BA0;
    case 93u: goto L_00208BC4;
    case 94u: goto L_00208BD0;
    case 95u: goto L_00208C08;
    case 96u: goto L_00208C20;
    case 97u: goto L_00208C38;
    case 98u: goto L_00208C60;
    case 99u: goto L_00208C84;
    case 100u: goto L_00208CA8;
    case 101u: goto L_00208CC4;
    case 102u: goto L_00208CDC;
    case 103u: goto L_00208CF4;
    case 104u: goto L_00208D10;
    case 105u: goto L_00208D34;
    case 106u: goto L_00208D4C;
    case 107u: goto L_00208D64;
    case 108u: goto L_00208D7C;
    case 109u: goto L_00208DA0;
    case 110u: goto L_00208DC4;
    case 111u: goto L_00208DDC;
    case 112u: goto L_00208DF4;
    case 113u: goto L_00208E0C;
    case 114u: goto L_00208E30;
    case 115u: goto L_00208E58;
    case 116u: goto L_00208E70;
    case 117u: goto L_00208E84;
    case 118u: goto L_00208E98;
    case 119u: goto L_00208EB8;
    case 120u: goto L_00208ECC;
    case 121u: goto L_00208EE8;
    case 122u: goto L_00208F3C;
    case 123u: goto L_00208F50;
    case 124u: goto L_00208F94;
    case 125u: goto L_00208FE0;
    case 126u: goto L_00209008;
    case 127u: goto L_00209020;
    case 128u: goto L_00209034;
    case 129u: goto L_00209048;
    case 130u: goto L_00209068;
    case 131u: goto L_0020907C;
    case 132u: goto L_00209098;
    case 133u: goto L_002090EC;
    case 134u: goto L_00209100;
    case 135u: goto L_00209144;
    case 136u: goto L_00209190;
    case 137u: goto L_002091B8;
    case 138u: goto L_002091D0;
    case 139u: goto L_002091E4;
    case 140u: goto L_002091F8;
    case 141u: goto L_00209218;
    case 142u: goto L_0020922C;
    case 143u: goto L_00209248;
    case 144u: goto L_0020929C;
    case 145u: goto L_002092B0;
    case 146u: goto L_002092F4;
    case 147u: goto L_00209340;
    case 148u: goto L_00209368;
    case 149u: goto L_00209380;
    case 150u: goto L_00209394;
    case 151u: goto L_002093A8;
    case 152u: goto L_002093C8;
    case 153u: goto L_002093DC;
    case 154u: goto L_002093F8;
    case 155u: goto L_0020944C;
    case 156u: goto L_00209474;
    case 157u: goto L_002094B8;
    case 158u: goto L_00209510;
    case 159u: goto L_00209534;
    case 160u: goto L_0020954C;
    case 161u: goto L_00209560;
    case 162u: goto L_00209574;
    case 163u: goto L_00209588;
    case 164u: goto L_002095A8;
    case 165u: goto L_002095BC;
    case 166u: goto L_002095D8;
    case 167u: goto L_00209650;
    case 168u: goto L_002096A0;
    case 169u: goto L_002096C4;
    case 170u: goto L_002096DC;
    case 171u: goto L_002096F0;
    case 172u: goto L_00209704;
    case 173u: goto L_00209718;
    case 174u: goto L_00209738;
    case 175u: goto L_0020974C;
    case 176u: goto L_00209768;
    case 177u: goto L_002097E0;
    case 178u: goto L_00209830;
    case 179u: goto L_002098C4;
    case 180u: goto L_00209904;
    case 181u: goto L_0020990C;
    case 182u: goto L_00209914;
    case 183u: goto L_00209970;
    case 184u: goto L_00209990;
    case 185u: goto L_002099C0;
    case 186u: goto L_002099D8;
    case 187u: goto L_00209A00;
    case 188u: goto L_00209A1C;
    case 189u: goto L_00209A60;
    case 190u: goto L_00209A7C;
    case 191u: goto L_00209AC0;
    case 192u: goto L_00209B0C;
    case 193u: goto L_00209B28;
    case 194u: goto L_00209B34;
    case 195u: goto L_00209B3C;
    case 196u: goto L_00209B48;
    case 197u: goto L_00209B64;
    case 198u: goto L_00209B70;
    case 199u: goto L_00209B78;
    case 200u: goto L_00209B84;
    case 201u: goto L_00209BA0;
    case 202u: goto L_00209BAC;
    case 203u: goto L_00209BB4;
    case 204u: goto L_00209BC0;
    case 205u: goto L_00209BD4;
    case 206u: goto L_00209BE0;
    case 207u: goto L_00209BE8;
    case 208u: goto L_00209C40;
    case 209u: goto L_00209E20;
    case 210u: goto L_00209E64;
    case 211u: goto L_00209E9C;
    case 212u: goto L_00209EC0;
    case 213u: goto L_00209F18;
    case 214u: goto L_00209F48;
    case 215u: goto L_00209F78;
    case 216u: goto L_00209FA8;
    case 217u: goto L_00209FB8;
    case 218u: goto L_00209FE4;
    case 219u: goto L_00209FF0;
    case 220u: goto L_0020A008;
    case 221u: goto L_0020A014;
    case 222u: goto L_0020A030;
    case 223u: goto L_0020A07C;
    case 224u: goto L_0020A08C;
    case 225u: goto L_0020A09C;
    case 226u: goto L_0020A0A8;
    case 227u: goto L_0020A0B0;
    case 228u: goto L_0020A0D0;
    case 229u: goto L_0020A0E0;
    case 230u: goto L_0020A0F0;
    case 231u: goto L_0020A0FC;
    case 232u: goto L_0020A104;
    case 233u: goto L_0020A120;
    case 234u: goto L_0020A1D0;
    case 235u: goto L_0020A1F4;
    case 236u: goto L_0020A238;
    case 237u: goto L_0020A268;
    case 238u: goto L_0020A2B0;
    case 239u: goto L_0020A350;
    case 240u: goto L_0020A358;
    case 241u: goto L_0020A388;
    case 242u: goto L_0020A3A8;
    case 243u: goto L_0020A3D0;
    case 244u: goto L_0020A3F4;
    case 245u: goto L_0020A40C;
    case 246u: goto L_0020A41C;
    case 247u: goto L_0020A428;
    case 248u: goto L_0020A434;
    case 249u: goto L_0020A43C;
    case 250u: goto L_0020A448;
    case 251u: goto L_0020A470;
    case 252u: goto L_0020A488;
    case 253u: goto L_0020A4A8;
    case 254u: goto L_0020A4D0;
    case 255u: goto L_0020A4E0;
    case 256u: goto L_0020A4F8;
    case 257u: goto L_0020A520;
    case 258u: goto L_0020A54C;
    case 259u: goto L_0020A630;
    case 260u: goto L_0020A6C0;
    case 261u: goto L_0020A750;
    case 262u: goto L_0020A780;
    case 263u: goto L_0020A7E0;
    case 264u: goto L_0020A800;
    case 265u: goto L_0020A830;
    case 266u: goto L_0020A858;
    case 267u: goto L_0020A868;
    case 268u: goto L_0020A878;
    case 269u: goto L_0020A880;
    case 270u: goto L_0020A920;
    case 271u: goto L_0020A948;
    case 272u: goto L_0020A958;
    case 273u: goto L_0020A968;
    case 274u: goto L_0020A970;
    case 275u: goto L_0020AA30;
    case 276u: goto L_0020AA64;
    case 277u: goto L_0020AA70;
    case 278u: goto L_0020AA7C;
    case 279u: goto L_0020AA88;
    case 280u: goto L_0020AA98;
    case 281u: goto L_0020AAA0;
    case 282u: goto L_0020AAB0;
    case 283u: goto L_0020AAC0;
    case 284u: goto L_0020AB0C;
    case 285u: goto L_0020AB1C;
    case 286u: goto L_0020AB7C;
    case 287u: goto L_0020AB8C;
    case 288u: goto L_0020AB9C;
    case 289u: goto L_0020ABAC;
    case 290u: goto L_0020ABD0;
    case 291u: goto L_0020AC04;
    case 292u: goto L_0020AC14;
    case 293u: goto L_0020AC24;
    case 294u: goto L_0020AC90;
    case 295u: goto L_0020ACC0;
    case 296u: goto L_0020ACCC;
    case 297u: goto L_0020ACDC;
    case 298u: goto L_0020ACE8;
    case 299u: goto L_0020ACF4;
    case 300u: goto L_0020AD20;
    case 301u: goto L_0020AD80;
    case 302u: goto L_0020ADAC;
    case 303u: goto L_0020ADE4;
    case 304u: goto L_0020AE00;
    case 305u: goto L_0020AE78;
    case 306u: goto L_0020AE8C;
    case 307u: goto L_0020AED0;
    case 308u: goto L_0020AF00;
    case 309u: goto L_0020AF38;
    case 310u: goto L_0020AF50;
    case 311u: goto L_0020AF7C;
    case 312u: goto L_0020AFF0;
    case 313u: goto L_0020B010;
    case 314u: goto L_0020B034;
    case 315u: goto L_0020B058;
    case 316u: goto L_0020B070;
    case 317u: goto L_0020B090;
    case 318u: goto L_0020B0A4;
    case 319u: goto L_0020B0BC;
    case 320u: goto L_0020B250;
    case 321u: goto L_0020B25C;
    case 322u: goto L_0020B274;
    case 323u: goto L_0020B310;
    case 324u: goto L_0020B324;
    case 325u: goto L_0020B33C;
    case 326u: goto L_0020B3B0;
    case 327u: goto L_0020B3BC;
    case 328u: goto L_0020B3D4;
    case 329u: goto L_0020B440;
    case 330u: goto L_0020B480;
    case 331u: goto L_0020B490;
    case 332u: goto L_0020B4A0;
    case 333u: goto L_0020B4E0;
    case 334u: goto L_0020B4F0;
    case 335u: goto L_0020B4F8;
    case 336u: goto L_0020B510;
    case 337u: goto L_0020B530;
    case 338u: goto L_0020B56C;
    case 339u: goto L_0020B578;
    case 340u: goto L_0020B5AC;
    case 341u: goto L_0020B5B8;
    case 342u: goto L_0020B5D4;
    case 343u: goto L_0020B5E0;
    case 344u: goto L_0020B610;
    case 345u: goto L_0020B620;
    case 346u: goto L_0020B640;
    case 347u: goto L_0020B664;
    case 348u: goto L_0020B68C;
    case 349u: goto L_0020B6B0;
    case 350u: goto L_0020B6D4;
    case 351u: goto L_0020B6FC;
    case 352u: goto L_0020B720;
    case 353u: goto L_0020B734;
    case 354u: goto L_0020B754;
    case 355u: goto L_0020B790;
    case 356u: goto L_0020B7D4;
    case 357u: goto L_0020B7EC;
    case 358u: goto L_0020B810;
    case 359u: goto L_0020B81C;
    case 360u: goto L_0020B850;
    case 361u: goto L_0020B86C;
    case 362u: goto L_0020B87C;
    case 363u: goto L_0020B8B0;
    case 364u: goto L_0020B8E0;
    case 365u: goto L_0020B900;
    case 366u: goto L_0020B930;
    case 367u: goto L_0020B950;
    case 368u: goto L_0020B968;
    case 369u: goto L_0020B9B0;
    case 370u: goto L_0020B9C0;
    case 371u: goto L_0020B9E4;
    case 372u: goto L_0020B9F8;
    case 373u: goto L_0020BA30;
    case 374u: goto L_0020BA50;
    case 375u: goto L_0020BA64;
    case 376u: goto L_0020BA90;
    case 377u: goto L_0020BAB4;
    case 378u: goto L_0020BAF0;
    case 379u: goto L_0020BB10;
    case 380u: goto L_0020BB20;
    case 381u: goto L_0020BB30;
    case 382u: goto L_0020BB84;
    case 383u: goto L_0020BC38;
    case 384u: goto L_0020BC54;
    case 385u: goto L_0020BC70;
    case 386u: goto L_0020BC98;
    case 387u: goto L_0020BCA0;
    case 388u: goto L_0020BCA8;
    case 389u: goto L_0020BCB0;
    case 390u: goto L_0020BCB8;
    case 391u: goto L_0020BCD0;
    case 392u: goto L_0020BCEC;
    case 393u: goto L_0020BD00;
    case 394u: goto L_0020BD48;
    case 395u: goto L_0020BD6C;
    case 396u: goto L_0020BD7C;
    case 397u: goto L_0020BD8C;
    case 398u: goto L_0020BDB0;
    case 399u: goto L_0020BDDC;
    case 400u: goto L_0020BDE4;
    case 401u: goto L_0020BDEC;
    case 402u: goto L_0020BE20;
    case 403u: goto L_0020BE58;
    case 404u: goto L_0020BE70;
    case 405u: goto L_0020BE84;
    case 406u: goto L_0020BE8C;
    case 407u: goto L_0020BED0;
    case 408u: goto L_0020BEE0;
    case 409u: goto L_0020BEF8;
    case 410u: goto L_0020BF00;
    case 411u: goto L_0020BF60;
    case 412u: goto L_0020BFA0;
    case 413u: goto L_0020BFBC;
    case 414u: goto L_0020BFF0;
    default: bad_entry(c, 0x00208000u); return;
    }
L_00208000:
    st32((c.r[21].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 8;
L_00208020:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00208030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020810C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 16928u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_00208074; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020806Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x0020806Cu) [[unlikely]] return; }
L_0020806C:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 2;
L_00208074:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  goto L_0020808C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208084u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x00208084u) [[unlikely]] return; }
L_00208084:
    st32((c.r[17].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 2;
L_0020808C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  goto L_002080A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020809Cu);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x0020809Cu) [[unlikely]] return; }
L_0020809C:
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 2;
L_002080A4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_002080CC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 92u), 0u);  goto L_002080C8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002080C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002080C4u) [[unlikely]] return; }
L_002080C4:
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 1;
L_002080C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_002080CC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002080EC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002080E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002080E4u) [[unlikely]] return; }
L_002080E4:
    st32((c.r[17].w[0] + 88u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002080EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002080F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002080F4u) [[unlikely]] return; }
L_002080F4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00208110; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020810Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0020810Cu) [[unlikely]] return; }
L_0020810C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00208110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00208130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020857C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 28400u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00208000u < 16384u) { entry = entries_003A[(t - 0x00208000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00208168:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[16].w[0] + 104u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208190u); set32(c.r[5], c.r[5].w[0] + 28448u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00208190u) [[unlikely]] return; }
L_00208190:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_002081BC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002081B0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 272u, depth + 1u); else { c.pc = 0x00202B40u; return; } if (c.pc != 0x002081B0u) [[unlikely]] return; }
L_002081B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0020857C; } }
L_002081BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0020857C; } }
L_002081C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00208580; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_002081F8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0020857C; } }
L_002081F8:
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_00208210; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0020857C; } }
L_00208210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0020857C; } }
L_00208218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208220u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00208220u) [[unlikely]] return; }
L_00208220:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  goto L_00208240; }
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020823Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 87u, depth + 1u); else { c.pc = 0x001809E0u; return; } if (c.pc != 0x0020823Cu) [[unlikely]] return; }
L_0020823C:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_00208240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208248u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x00208248u) [[unlikely]] return; }
L_00208248:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_00208260; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208258u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 52u, depth + 1u); else { c.pc = 0x00208590u; return; } if (c.pc != 0x00208258u) [[unlikely]] return; }
L_00208258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020857C; } }
L_00208260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208268u);  if (depth < kMaxDepth) unit_0018(c, 108u, depth + 1u); else { c.pc = 0x00180D10u; return; } if (c.pc != 0x00208268u) [[unlikely]] return; }
L_00208268:
    set32(c.r[3], 0u + 600u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
L_00208278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208280u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x00208280u) [[unlikely]] return; }
L_00208280:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_00208298; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208290u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 52u, depth + 1u); else { c.pc = 0x00208590u; return; } if (c.pc != 0x00208290u) [[unlikely]] return; }
L_00208290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020857C; } }
L_00208298:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002082B0; }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_002082B0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 100u)));  goto L_002082D8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[16].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0020857C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002082D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 52u, depth + 1u); else { c.pc = 0x00208590u; return; } if (c.pc != 0x002082D0u) [[unlikely]] return; }
L_002082D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020857C; } }
L_002082D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002082E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_00208308; } }
L_002082E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002082F0u);  if (depth < kMaxDepth) unit_0018(c, 116u, depth + 1u); else { c.pc = 0x00180DD0u; return; } if (c.pc != 0x002082F0u) [[unlikely]] return; }
L_002082F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_00208308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208300u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 52u, depth + 1u); else { c.pc = 0x00208590u; return; } if (c.pc != 0x00208300u) [[unlikely]] return; }
L_00208300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020857C; } }
L_00208308:
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
L_00208318:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208324u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 231u, depth + 1u); else { c.pc = 0x00171DF0u; return; } if (c.pc != 0x00208324u) [[unlikely]] return; }
L_00208324:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208330u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x00208330u) [[unlikely]] return; }
L_00208330:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_0020835C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0020857C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208354u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 52u, depth + 1u); else { c.pc = 0x00208590u; return; } if (c.pc != 0x00208354u) [[unlikely]] return; }
L_00208354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020857C; } }
L_0020835C:
    set32(c.r[7], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020836Cu); set32(c.r[6], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x00180D40u; return; } if (c.pc != 0x0020836Cu) [[unlikely]] return; }
L_0020836C:
    set32(c.r[3], 0u + 600u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
L_0020837C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208384u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x00208384u) [[unlikely]] return; }
L_00208384:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 92u)));  goto L_0020839C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208394u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 52u, depth + 1u); else { c.pc = 0x00208590u; return; } if (c.pc != 0x00208394u) [[unlikely]] return; }
L_00208394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020857C; } }
L_0020839C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002083B4; }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_002083B4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 76u)));  goto L_002083DC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[16].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0020857C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002083D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 52u, depth + 1u); else { c.pc = 0x00208590u; return; } if (c.pc != 0x002083D4u) [[unlikely]] return; }
L_002083D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020857C; } }
L_002083DC:
    set32(c.r[8], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002083F4u); set32(c.r[7], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_0038(c, 263u, depth + 1u); else { c.pc = 0x002028B0u; return; } if (c.pc != 0x002083F4u) [[unlikely]] return; }
L_002083F4:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_002083FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020857C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_00208434; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208430u); set32(c.r[4], c.r[4].w[0] + 28454u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00208430u) [[unlikely]] return; }
L_00208430:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00208434:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], 0u + 10u);
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0020857C; } }
L_00208458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208460u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0038(c, 276u, depth + 1u); else { c.pc = 0x00202C80u; return; } if (c.pc != 0x00208460u) [[unlikely]] return; }
L_00208460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_00208478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208470u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 52u, depth + 1u); else { c.pc = 0x00208590u; return; } if (c.pc != 0x00208470u) [[unlikely]] return; }
L_00208470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020857C; } }
L_00208478:
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
L_00208488:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208494u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 231u, depth + 1u); else { c.pc = 0x00171DF0u; return; } if (c.pc != 0x00208494u) [[unlikely]] return; }
L_00208494:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002084A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x002084A0u) [[unlikely]] return; }
L_002084A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_002084CC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0020857C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002084C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 52u, depth + 1u); else { c.pc = 0x00208590u; return; } if (c.pc != 0x002084C4u) [[unlikely]] return; }
L_002084C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020857C; } }
L_002084CC:
    set32(c.r[7], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002084E0u); set32(c.r[6], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_0038(c, 267u, depth + 1u); else { c.pc = 0x002029A0u; return; } if (c.pc != 0x002084E0u) [[unlikely]] return; }
L_002084E0:
    set32(c.r[3], 0u + 9u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_002084E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020857C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_0020851C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0020857C; } }
L_0020851C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], 0u + 10u);
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0020857C; } }
L_00208540:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020857C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208558u); set32(c.r[4], c.r[4].w[0] + 28487u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00208558u) [[unlikely]] return; }
L_00208558:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 9;
L_0020857C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00208580:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00208590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_002085CC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), 0u);  goto L_002085C8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002085C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002085C4u) [[unlikely]] return; }
L_002085C4:
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 1;
L_002085C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_002085CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002085E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002085DCu);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x002085DCu) [[unlikely]] return; }
L_002085DC:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_002085E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002085F4u); set32(c.r[6], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002085F4u) [[unlikely]] return; }
L_002085F4:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00208610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[7].d[0] = c.r[2].d[0] | 16706ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x334F0000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 16984u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 21063ull;
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    c.budget -= 47;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[4].w[0] + 120u), 0u);  if (t) { goto L_002086D4; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002086E0; }
L_002086D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002086DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x00208770u; return; } if (c.pc != 0x002086DCu) [[unlikely]] return; }
L_002086DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002086E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002086F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00208754; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 16984u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020871Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 73u, depth + 1u); else { c.pc = 0x002089C0u; return; } if (c.pc != 0x0020871Cu) [[unlikely]] return; }
L_0020871C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00208740; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_00208740:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00208758; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208754u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00208754u) [[unlikely]] return; }
L_00208754:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00208758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00208770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002087D8; } }
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20275ull;
    set32(c.r[6], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[8].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00208840; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002087D0u);  if (depth < kMaxDepth) unit_003A(c, 64u, depth + 1u); else { c.pc = 0x00208860u; return; } if (c.pc != 0x002087D0u) [[unlikely]] return; }
L_002087D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020883C; } }
L_002087D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00208840; }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20275ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020883C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208828u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 64u, depth + 1u); else { c.pc = 0x00208860u; return; } if (c.pc != 0x00208828u) [[unlikely]] return; }
L_00208828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020883C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00208840; } }
L_0020883C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00208840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00208860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_00208988; } }
L_00208894:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x47330000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[4].d[0] | 17742ull;
    set32(c.r[6], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[5], c.r[8].w[0] >> 24);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00208960; } }
    c.r[3].d[0] = c.r[4].d[0] | 17746ull;
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00208950; }
    c.r[3].d[0] = c.r[4].d[0] | 21592ull;
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00208940; }
    c.r[3].d[0] = c.r[4].d[0] | 19791ull;
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00208930; }
    c.r[3].d[0] = c.r[4].d[0] | 19796ull;
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00208920; }
    c.r[3].d[0] = c.r[4].d[0] | 19780ull;
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00208910; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020896C; } }
L_00208910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208918u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 114u, depth + 1u); else { c.pc = 0x00208E30u; return; } if (c.pc != 0x00208918u) [[unlikely]] return; }
L_00208918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020896C; } }
L_00208920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208928u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 125u, depth + 1u); else { c.pc = 0x00208FE0u; return; } if (c.pc != 0x00208928u) [[unlikely]] return; }
L_00208928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020896C; } }
L_00208930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208938u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 136u, depth + 1u); else { c.pc = 0x00209190u; return; } if (c.pc != 0x00208938u) [[unlikely]] return; }
L_00208938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020896C; } }
L_00208940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208948u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 147u, depth + 1u); else { c.pc = 0x00209340u; return; } if (c.pc != 0x00208948u) [[unlikely]] return; }
L_00208948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020896C; } }
L_00208950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208958u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 158u, depth + 1u); else { c.pc = 0x00209510u; return; } if (c.pc != 0x00208958u) [[unlikely]] return; }
L_00208958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020896C; } }
L_00208960:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020896Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 168u, depth + 1u); else { c.pc = 0x002096A0u; return; } if (c.pc != 0x0020896Cu) [[unlikely]] return; }
L_0020896C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0020897C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002089A8; } }
L_0020897C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208984u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x00208984u) [[unlikely]] return; }
L_00208984:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00208988:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002089A8; }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208894u | kUnwind; return; } goto L_00208894; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002089A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002089C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002089D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 80u, depth + 1u); else { c.pc = 0x00208A20u; return; } if (c.pc != 0x002089D4u) [[unlikely]] return; }
L_002089D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002089DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x00208AE0u; return; } if (c.pc != 0x002089DCu) [[unlikely]] return; }
L_002089DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002089E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 92u, depth + 1u); else { c.pc = 0x00208BA0u; return; } if (c.pc != 0x002089E4u) [[unlikely]] return; }
L_002089E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002089ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 98u, depth + 1u); else { c.pc = 0x00208C60u; return; } if (c.pc != 0x002089ECu) [[unlikely]] return; }
L_002089EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002089F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 104u, depth + 1u); else { c.pc = 0x00208D10u; return; } if (c.pc != 0x002089F4u) [[unlikely]] return; }
L_002089F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002089FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 109u, depth + 1u); else { c.pc = 0x00208DA0u; return; } if (c.pc != 0x002089FCu) [[unlikely]] return; }
L_002089FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00208A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00208A8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00208A54; } }
L_00208A44:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00208A50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00208A50u) [[unlikely]] return; }
L_00208A50:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00208A54:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_00208A80; }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208A44u | kUnwind; return; } goto L_00208A44; }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00208A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208A88u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208A88u) [[unlikely]] return; }
L_00208A88:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_00208A8C:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  goto L_00208AA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208AA0u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208AA0u) [[unlikely]] return; }
L_00208AA0:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 2;
L_00208AA8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 20u), 0u);  goto L_00208AC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208AB8u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208AB8u) [[unlikely]] return; }
L_00208AB8:
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 2;
L_00208AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00208AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00208B4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00208B14; } }
L_00208B04:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00208B10u) [[unlikely]] return; }
L_00208B10:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00208B14:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  goto L_00208B40; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208B04u | kUnwind; return; } goto L_00208B04; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_00208B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B48u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208B48u) [[unlikely]] return; }
L_00208B48:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_00208B4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  goto L_00208B68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B60u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208B60u) [[unlikely]] return; }
L_00208B60:
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 2;
L_00208B68:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 36u), 0u);  goto L_00208B80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B78u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208B78u) [[unlikely]] return; }
L_00208B78:
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 2;
L_00208B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00208BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00208C0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00208BD4; } }
L_00208BC4:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00208BD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00208BD0u) [[unlikely]] return; }
L_00208BD0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00208BD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_00208C00; }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208BC4u | kUnwind; return; } goto L_00208BC4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_00208C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208C08u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208C08u) [[unlikely]] return; }
L_00208C08:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_00208C0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_00208C28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208C20u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208C20u) [[unlikely]] return; }
L_00208C20:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 2;
L_00208C28:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 52u), 0u);  goto L_00208C40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208C38u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208C38u) [[unlikely]] return; }
L_00208C38:
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 2;
L_00208C40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00208C60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00208CC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00208CAC; } }
L_00208C84:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00208CAC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00208CA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00208CA8u) [[unlikely]] return; }
L_00208CA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00208CAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208C84u | kUnwind; return; } goto L_00208C84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208CC4u); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208CC4u) [[unlikely]] return; }
L_00208CC4:
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 1;
L_00208CC8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  goto L_00208CE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208CDCu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208CDCu) [[unlikely]] return; }
L_00208CDC:
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 2;
L_00208CE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 68u), 0u);  goto L_00208CFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208CF4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208CF4u) [[unlikely]] return; }
L_00208CF4:
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 2;
L_00208CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00208D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  goto L_00208D3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208D34u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208D34u) [[unlikely]] return; }
L_00208D34:
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 2;
L_00208D3C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_00208D54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208D4Cu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208D4Cu) [[unlikely]] return; }
L_00208D4C:
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 2;
L_00208D54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  goto L_00208D6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208D64u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208D64u) [[unlikely]] return; }
L_00208D64:
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 2;
L_00208D6C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), 0u);  goto L_00208D84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208D7Cu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208D7Cu) [[unlikely]] return; }
L_00208D7C:
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 2;
L_00208D84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00208DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  goto L_00208DCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208DC4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208DC4u) [[unlikely]] return; }
L_00208DC4:
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 2;
L_00208DCC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_00208DE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208DDCu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208DDCu) [[unlikely]] return; }
L_00208DDC:
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 2;
L_00208DE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_00208DFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208DF4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208DF4u) [[unlikely]] return; }
L_00208DF4:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 2;
L_00208DFC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 104u), 0u);  goto L_00208E14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208E0Cu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00208E0Cu) [[unlikely]] return; }
L_00208E0C:
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_00208E14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00208E30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208E58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 109u, depth + 1u); else { c.pc = 0x00200FB0u; return; } if (c.pc != 0x00208E58u) [[unlikely]] return; }
L_00208E58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00208E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00208FC4; } }
L_00208E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208E70u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00208E70u) [[unlikely]] return; }
L_00208E70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00208FC0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208E84u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00208E84u) [[unlikely]] return; }
L_00208E84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00208FC0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208E98u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00208E98u) [[unlikely]] return; }
L_00208E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00208FC0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[17], c.r[16].w[0] + 16u);
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208EB8u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00208EB8u) [[unlikely]] return; }
L_00208EB8:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208ECCu); set32(c.r[5], c.r[17].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00208ECCu) [[unlikely]] return; }
L_00208ECC:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00208F98; } }
L_00208EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 19532ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 176u);  goto L_00208F34; }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_00208F88; } }
L_00208F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208F3Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00208F3Cu) [[unlikely]] return; }
L_00208F3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 24u)));  goto L_00208F54; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208F50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 248u, depth + 1u); else { c.pc = 0x00166140u; return; } if (c.pc != 0x00208F50u) [[unlikely]] return; }
L_00208F50:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_00208F54:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00208FC4; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00208FC0; } }
L_00208F88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208F94u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x00208F94u) [[unlikely]] return; }
L_00208F94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00208F98:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00208FC4; }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208EE8u | kUnwind; return; } goto L_00208EE8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00208FC4; } }
L_00208FC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00208FC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00208FE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209008u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 109u, depth + 1u); else { c.pc = 0x00200FB0u; return; } if (c.pc != 0x00209008u) [[unlikely]] return; }
L_00209008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_00209018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00209174; } }
L_00209018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209020u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00209020u) [[unlikely]] return; }
L_00209020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_00209170; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209034u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00209034u) [[unlikely]] return; }
L_00209034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_00209170; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209048u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00209048u) [[unlikely]] return; }
L_00209048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_00209170; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[17], c.r[16].w[0] + 16u);
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209068u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00209068u) [[unlikely]] return; }
L_00209068:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020907Cu); set32(c.r[5], c.r[17].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0020907Cu) [[unlikely]] return; }
L_0020907C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00209148; } }
L_00209098:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 19532ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 80u);  goto L_002090E4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_00209138; } }
L_002090E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002090ECu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002090ECu) [[unlikely]] return; }
L_002090EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 40u)));  goto L_00209104; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209100u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 278u, depth + 1u); else { c.pc = 0x00166630u; return; } if (c.pc != 0x00209100u) [[unlikely]] return; }
L_00209100:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 1;
L_00209104:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00209174; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00209170; } }
L_00209138:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209144u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x00209144u) [[unlikely]] return; }
L_00209144:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00209148:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00209174; }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00209098u | kUnwind; return; } goto L_00209098; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209174; } }
L_00209170:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00209174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00209190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002091B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 109u, depth + 1u); else { c.pc = 0x00200FB0u; return; } if (c.pc != 0x002091B8u) [[unlikely]] return; }
L_002091B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002091C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00209324; } }
L_002091C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002091D0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002091D0u) [[unlikely]] return; }
L_002091D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00209320; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002091E4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002091E4u) [[unlikely]] return; }
L_002091E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00209320; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002091F8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002091F8u) [[unlikely]] return; }
L_002091F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00209320; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[17], c.r[16].w[0] + 16u);
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209218u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00209218u) [[unlikely]] return; }
L_00209218:
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020922Cu); set32(c.r[5], c.r[17].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0020922Cu) [[unlikely]] return; }
L_0020922C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002092F8; } }
L_00209248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 19532ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 368u);  goto L_00209294; }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_002092E8; } }
L_00209294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020929Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0020929Cu) [[unlikely]] return; }
L_0020929C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  goto L_002092B4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002092B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 285u, depth + 1u); else { c.pc = 0x0016F1C0u; return; } if (c.pc != 0x002092B0u) [[unlikely]] return; }
L_002092B0:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_002092B4:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00209324; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00209320; } }
L_002092E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002092F4u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002092F4u) [[unlikely]] return; }
L_002092F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002092F8:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00209324; }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00209248u | kUnwind; return; } goto L_00209248; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209324; } }
L_00209320:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00209324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00209340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209368u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 109u, depth + 1u); else { c.pc = 0x00200FB0u; return; } if (c.pc != 0x00209368u) [[unlikely]] return; }
L_00209368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_00209378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002094E8; } }
L_00209378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209380u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00209380u) [[unlikely]] return; }
L_00209380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_002094E4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209394u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00209394u) [[unlikely]] return; }
L_00209394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_002094E4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002093A8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002093A8u) [[unlikely]] return; }
L_002093A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002094E4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[17], c.r[16].w[0] + 16u);
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002093C8u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002093C8u) [[unlikely]] return; }
L_002093C8:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002093DCu); set32(c.r[5], c.r[17].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002093DCu) [[unlikely]] return; }
L_002093DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002094BC; } }
L_002093F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 19532ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 80u);  goto L_00209444; }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_002094AC; } }
L_00209444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020944Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0020944Cu) [[unlikely]] return; }
L_0020944C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 72u)));  goto L_00209478; }
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[6], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209474u); c.r[6].d[0] = c.r[2].d[0] & 1ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x00209474u) [[unlikely]] return; }
L_00209474:
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 1;
L_00209478:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002094E8; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002094E4; } }
L_002094AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002094B8u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002094B8u) [[unlikely]] return; }
L_002094B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002094BC:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002094E8; }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002093F8u | kUnwind; return; } goto L_002093F8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002094E8; } }
L_002094E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002094E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00209510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209534u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 109u, depth + 1u); else { c.pc = 0x00200FB0u; return; } if (c.pc != 0x00209534u) [[unlikely]] return; }
L_00209534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_00209544; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00209680; } }
L_00209544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020954Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0020954Cu) [[unlikely]] return; }
L_0020954C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_0020967C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209560u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00209560u) [[unlikely]] return; }
L_00209560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0020967C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209574u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00209574u) [[unlikely]] return; }
L_00209574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_0020967C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209588u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00209588u) [[unlikely]] return; }
L_00209588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0020967C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[17], c.r[16].w[0] + 16u);
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002095A8u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002095A8u) [[unlikely]] return; }
L_002095A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002095BCu); set32(c.r[5], c.r[17].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002095BCu) [[unlikely]] return; }
L_002095BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00209654; } }
L_002095D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 19532ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 92u)));  goto L_00209630; }
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_00209648; } }
L_00209630:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_00209648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209650u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x00209650u) [[unlikely]] return; }
L_00209650:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00209654:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00209680; }
    c.r[2].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002095D8u | kUnwind; return; } goto L_002095D8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209680; } }
L_0020967C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00209680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002096A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 109u, depth + 1u); else { c.pc = 0x00200FB0u; return; } if (c.pc != 0x002096C4u) [[unlikely]] return; }
L_002096C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002096D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00209810; } }
L_002096D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096DCu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002096DCu) [[unlikely]] return; }
L_002096DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_0020980C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096F0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002096F0u) [[unlikely]] return; }
L_002096F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_0020980C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209704u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00209704u) [[unlikely]] return; }
L_00209704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_0020980C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209718u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00209718u) [[unlikely]] return; }
L_00209718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_0020980C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[17], c.r[16].w[0] + 16u);
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209738u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00209738u) [[unlikely]] return; }
L_00209738:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020974Cu); set32(c.r[5], c.r[17].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0020974Cu) [[unlikely]] return; }
L_0020974C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002097E4; } }
L_00209768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 19532ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 112u)));  goto L_002097C0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_002097D8; } }
L_002097C0:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_002097D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002097E0u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002097E0u) [[unlikely]] return; }
L_002097E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002097E4:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00209810; }
    c.r[2].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00209768u | kUnwind; return; } goto L_00209768; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209810; } }
L_0020980C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00209810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00209830:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[17].w[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_00209950; } }
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20545ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00209954; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_002098B4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00209950; } }
L_002098B4:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002098D8; } }
L_002098C4:
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
L_002098D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002098C4u | kUnwind; return; } goto L_002098C4; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 14u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 256u);  goto L_0020994C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00209934; } }
L_00209904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020990Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 185u, depth + 1u); else { c.pc = 0x002099C0u; return; } if (c.pc != 0x0020990Cu) [[unlikely]] return; }
L_0020990C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_00209928; } }
L_00209914:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
L_00209928:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00209914u | kUnwind; return; } goto L_00209914; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00209934:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00209904u | kUnwind; return; } goto L_00209904; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 1;
L_0020994C:
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00209950:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00209954:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00209970:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00209980; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_00209980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00209990:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002099B8; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002099B8; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_002099B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002099C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002099D8u); set32(c.r[16], c.r[16].w[0] + 28560u);  if (depth < kMaxDepth) unit_003A(c, 184u, depth + 1u); else { c.pc = 0x00209990u; return; } if (c.pc != 0x002099D8u) [[unlikely]] return; }
L_002099D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002099F0; }
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002099F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00209A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209A1Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 184u, depth + 1u); else { c.pc = 0x00209990u; return; } if (c.pc != 0x00209A1Cu) [[unlikely]] return; }
L_00209A1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00209A48; }
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00209A44; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00209A44:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00209A48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00209A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209A7Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_003A(c, 184u, depth + 1u); else { c.pc = 0x00209990u; return; } if (c.pc != 0x00209A7Cu) [[unlikely]] return; }
L_00209A7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = c.f[20];  goto L_00209AA8; }
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00209AA4; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[20] = ld32((c.r[2].w[0]));
    c.budget -= 3;
L_00209AA4:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_00209AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00209AC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[2].w[0];
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[12] = c.f[21];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B0Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00209B0Cu) [[unlikely]] return; }
L_00209B0C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] >> 16);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[16].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B28u); set32(c.r[4], c.r[2].w[0] - c.r[18].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00209B28u) [[unlikely]] return; }
L_00209B28:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B34u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x00209B34u) [[unlikely]] return; }
L_00209B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B3Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00209B3Cu) [[unlikely]] return; }
L_00209B3C:
    set32(c.r[20], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B48u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00209B48u) [[unlikely]] return; }
L_00209B48:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] >> 24);
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[16].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B64u); set32(c.r[4], c.r[2].w[0] - c.r[19].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00209B64u) [[unlikely]] return; }
L_00209B64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B70u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x00209B70u) [[unlikely]] return; }
L_00209B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B78u); c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00209B78u) [[unlikely]] return; }
L_00209B78:
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B84u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00209B84u) [[unlikely]] return; }
L_00209B84:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] >> 8);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[16].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209BA0u); set32(c.r[4], c.r[2].w[0] - c.r[18].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00209BA0u) [[unlikely]] return; }
L_00209BA0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209BACu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x00209BACu) [[unlikely]] return; }
L_00209BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209BB4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00209BB4u) [[unlikely]] return; }
L_00209BB4:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209BC0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00209BC0u) [[unlikely]] return; }
L_00209BC0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209BD4u); set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00209BD4u) [[unlikely]] return; }
L_00209BD4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209BE0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x00209BE0u) [[unlikely]] return; }
L_00209BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209BE8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00209BE8u) [[unlikely]] return; }
L_00209BE8:
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[4], c.r[2].w[0] << 24);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[2].w[0] << 16);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00209C40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 17000u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434C0000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 21831ull;
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[11], 0u + 1u);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[7], 0u + 2u);
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32668u));
    st32((c.r[4].w[0] + 36u), c.r[11].w[0]);
    set32(c.r[5], 0u + 10922u);
    st32((c.r[4].w[0] + 40u), 0u);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 44u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 32u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[9].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    st32((c.r[4].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    st32((c.r[4].w[0] + 92u), c.f[0]);
    st32((c.r[4].w[0] + 96u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 104u), c.f[1]);
    st32((c.r[4].w[0] + 108u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 124u), c.r[9].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    st32((c.r[4].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    st32((c.r[4].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    st32((c.r[4].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 124u));
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    st32((c.r[4].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    st32((c.r[4].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    st32((c.r[4].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    st32((c.r[4].w[0] + 156u), c.f[0]);
    st32((c.r[4].w[0] + 160u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 168u), c.f[1]);
    st32((c.r[4].w[0] + 172u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 176u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 180u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 184u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 188u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 192u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 196u), c.f[1]);
    st32((c.r[4].w[0] + 200u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 204u), 0u);
    st32((c.r[4].w[0] + 208u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 212u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 216u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 220u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 224u), c.f[1]);
    st32((c.r[4].w[0] + 228u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 232u), 0u);
    st32((c.r[4].w[0] + 236u), 0u);
    st32((c.r[4].w[0] + 244u), 0u);
    st32((c.r[4].w[0] + 248u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 252u), 0u);
    st32((c.r[4].w[0] + 264u), 0u);
    st32((c.r[4].w[0] + 260u), 0u);
    st32((c.r[4].w[0] + 256u), 0u);
    st32((c.r[4].w[0] + 268u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    st32((c.r[4].w[0] + 276u), 0u);
    st32((c.r[4].w[0] + 272u), 0u);
    st32((c.r[4].w[0] + 284u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 288u), 0u);
    st32((c.r[4].w[0] + 292u), 0u);
    st32((c.r[4].w[0] + 312u), 0u);
    st32((c.r[4].w[0] + 308u), 0u);
    st32((c.r[4].w[0] + 304u), 0u);
    st32((c.r[4].w[0] + 316u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 328u), 0u);
    st32((c.r[4].w[0] + 324u), 0u);
    c.budget -= 117;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 320u), 0u);  c.pc = t; return; }
L_00209E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00209E9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 17000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00209E64; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00209E64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00209E64u) [[unlikely]] return; }
L_00209E64:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00209E88; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_00209E88:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00209EA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209E9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00209E9Cu) [[unlikely]] return; }
L_00209E9C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00209EA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00209EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020A014; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_00209FBC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209FB0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 172u)));  goto L_00209F20; }
    set32(c.r[7], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 100u);
    set32(c.r[8], c.r[16].w[0] + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209F18u); set32(c.r[9], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_003A(c, 233u, depth + 1u); else { c.pc = 0x0020A120u; return; } if (c.pc != 0x00209F18u) [[unlikely]] return; }
L_00209F18:
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 2;
L_00209F20:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 200u)));  goto L_00209F50; }
    set32(c.r[7], ld32((c.r[16].w[0] + 160u)));
    c.f[12] = ld32((c.r[16].w[0] + 168u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 112u);
    set32(c.r[6], c.r[16].w[0] + 164u);
    set32(c.r[8], c.r[16].w[0] + 128u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209F48u); set32(c.r[9], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_003A(c, 233u, depth + 1u); else { c.pc = 0x0020A120u; return; } if (c.pc != 0x00209F48u) [[unlikely]] return; }
L_00209F48:
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 2;
L_00209F50:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 228u)));  goto L_00209F80; }
    set32(c.r[7], ld32((c.r[16].w[0] + 188u)));
    c.f[12] = ld32((c.r[16].w[0] + 196u));
    set32(c.r[8], ld32((c.r[16].w[0] + 180u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[5], c.r[16].w[0] + 176u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209F78u); set32(c.r[6], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_003A(c, 238u, depth + 1u); else { c.pc = 0x0020A2B0u; return; } if (c.pc != 0x00209F78u) [[unlikely]] return; }
L_00209F78:
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 2;
L_00209F80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209FB8; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 216u)));
    c.f[12] = ld32((c.r[16].w[0] + 224u));
    set32(c.r[8], ld32((c.r[16].w[0] + 208u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[5], c.r[16].w[0] + 204u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209FA8u); set32(c.r[6], c.r[16].w[0] + 220u);  if (depth < kMaxDepth) unit_003A(c, 238u, depth + 1u); else { c.pc = 0x0020A2B0u; return; } if (c.pc != 0x00209FA8u) [[unlikely]] return; }
L_00209FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_00209FB8; } }
L_00209FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209FB8u);  if (depth < kMaxDepth) unit_003A(c, 243u, depth + 1u); else { c.pc = 0x0020A3D0u; return; } if (c.pc != 0x00209FB8u) [[unlikely]] return; }
L_00209FB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_00209FBC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0020A018; }
    set32(c.r[2], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_00209FF8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[16].w[0] + 256u);
    set32(c.r[7], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209FE4u); set32(c.r[6], c.r[16].w[0] + 272u);  if (depth < kMaxDepth) unit_000D(c, 323u, depth + 1u); else { c.pc = 0x001571C0u; return; } if (c.pc != 0x00209FE4u) [[unlikely]] return; }
L_00209FE4:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209FF0u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_000F(c, 41u, depth + 1u); else { c.pc = 0x0015C410u; return; } if (c.pc != 0x00209FF0u) [[unlikely]] return; }
L_00209FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A014; } }
L_00209FF8:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[7], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A008u); set32(c.r[6], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 323u, depth + 1u); else { c.pc = 0x001571C0u; return; } if (c.pc != 0x0020A008u) [[unlikely]] return; }
L_0020A008:
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A014u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_000F(c, 41u, depth + 1u); else { c.pc = 0x0015C410u; return; } if (c.pc != 0x0020A014u) [[unlikely]] return; }
L_0020A014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0020A018:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020A030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020A104; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[29].w[0] + 44u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A07Cu); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0020A07Cu) [[unlikely]] return; }
L_0020A07C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0020A0B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A08Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0020A08Cu) [[unlikely]] return; }
L_0020A08C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A09Cu); set32(c.r[6], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0020A09Cu) [[unlikely]] return; }
L_0020A09C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A0A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 37u, depth + 1u); else { c.pc = 0x0016C820u; return; } if (c.pc != 0x0020A0A8u) [[unlikely]] return; }
L_0020A0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A0B0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0020A0B0u) [[unlikely]] return; }
L_0020A0B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0020A0B4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0020A108; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A0D0u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0020A0D0u) [[unlikely]] return; }
L_0020A0D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020A104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A0E0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0020A0E0u) [[unlikely]] return; }
L_0020A0E0:
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A0F0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0020A0F0u) [[unlikely]] return; }
L_0020A0F0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A0FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 37u, depth + 1u); else { c.pc = 0x0016C820u; return; } if (c.pc != 0x0020A0FCu) [[unlikely]] return; }
L_0020A0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A104u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0020A104u) [[unlikely]] return; }
L_0020A104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0020A108:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020A120:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.f[2] = ld32((c.r[6].w[0]));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[4].w[0] + 28u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0]), c.f[1]);  if (t) { goto L_0020A178; } }
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0020A178:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[3].w[0]));  goto L_0020A1D8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[2].d[0]) { c.f[12] = ld32((c.r[3].w[0]));  goto L_0020A1C0; }
    c.f[0] = ld32((c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[16], 0u + 1u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0020A288; } }
L_0020A1C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A1D0u); c.r[6].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 157u, depth + 1u); else { c.pc = 0x0018EB60u; return; } if (c.pc != 0x0020A1D0u) [[unlikely]] return; }
L_0020A1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0020A28C; } }
L_0020A1D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A1F4u); c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0020A1F4u) [[unlikely]] return; }
L_0020A1F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[4] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 128u), c.f[4]);
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[20]);
    st32((c.r[29].w[0] + 132u), c.f[3]);
    st32((c.r[29].w[0] + 136u), c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A238u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0020A238u) [[unlikely]] return; }
L_0020A238:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A268u); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0020A268u) [[unlikely]] return; }
L_0020A268:
    c.f[3] = ld32((c.r[29].w[0] + 116u));
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 124u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[3]);
    st32((c.r[18].w[0] + 8u), c.f[2]);
    st32((c.r[18].w[0] + 12u), c.f[1]);
    c.budget -= 8;
L_0020A288:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0020A28C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0020A2B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 28u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0]), c.f[1]);  if (t) { goto L_0020A304; } }
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0020A304:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[6].w[0]));  goto L_0020A374; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] & 65535ull;  goto L_0020A330; }
    st32((c.r[18].w[0]), c.r[9].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0020A3B0; } }
L_0020A330:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[9].d[0] & 65535ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[20] = ld32((c.r[6].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A350u); set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0020A350u) [[unlikely]] return; }
L_0020A350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A358u); c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0020A358u) [[unlikely]] return; }
L_0020A358:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0020A3B0; } }
L_0020A374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[9].w[0] - c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A388u); c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0020A388u) [[unlikely]] return; }
L_0020A388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A3A8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0020A3A8u) [[unlikely]] return; }
L_0020A3A8:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0020A3B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020A3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 232u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0020A514; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A3F4u); c.f[12] = ld32((c.r[16].w[0] + 244u));  if (depth < kMaxDepth) unit_0011(c, 338u, depth + 1u); else { c.pc = 0x00166DB0u; return; } if (c.pc != 0x0020A3F4u) [[unlikely]] return; }
L_0020A3F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_0020A414; }
    set32(c.r[5], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A40Cu); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_000D(c, 373u, depth + 1u); else { c.pc = 0x001576E0u; return; } if (c.pc != 0x0020A40Cu) [[unlikely]] return; }
L_0020A40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0020A420; } }
L_0020A414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A41Cu); set32(c.r[5], ld32((c.r[16].w[0] + 232u)));  if (depth < kMaxDepth) unit_000D(c, 366u, depth + 1u); else { c.pc = 0x00157610u; return; } if (c.pc != 0x0020A41Cu) [[unlikely]] return; }
L_0020A41C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0020A420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A428u); set32(c.r[5], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x0020A428u) [[unlikely]] return; }
L_0020A428:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A434u); set32(c.r[5], c.r[16].w[0] + 272u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x0020A434u) [[unlikely]] return; }
L_0020A434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A43Cu); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_000D(c, 333u, depth + 1u); else { c.pc = 0x00157300u; return; } if (c.pc != 0x0020A43Cu) [[unlikely]] return; }
L_0020A43C:
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A448u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_000F(c, 43u, depth + 1u); else { c.pc = 0x0015C480u; return; } if (c.pc != 0x0020A448u) [[unlikely]] return; }
L_0020A448:
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 248u));
    c.f[0] = ld32((c.r[16].w[0] + 244u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 244u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 252u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0020A498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A470u); set32(c.r[4], ld32((c.r[16].w[0] + 232u)));  if (depth < kMaxDepth) unit_0011(c, 340u, depth + 1u); else { c.pc = 0x00166DD0u; return; } if (c.pc != 0x0020A470u) [[unlikely]] return; }
L_0020A470:
    c.f[1] = ld32((c.r[16].w[0] + 244u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020A510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A488u); set32(c.r[4], ld32((c.r[16].w[0] + 232u)));  if (depth < kMaxDepth) unit_0011(c, 340u, depth + 1u); else { c.pc = 0x00166DD0u; return; } if (c.pc != 0x0020A488u) [[unlikely]] return; }
L_0020A488:
    c.f[1] = ld32((c.r[16].w[0] + 244u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 244u), c.f[0]);  if (t) { goto L_0020A510; } }
L_0020A498:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 232u)));  goto L_0020A4D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A4A8u); set32(c.r[4], ld32((c.r[16].w[0] + 232u)));  if (depth < kMaxDepth) unit_0011(c, 340u, depth + 1u); else { c.pc = 0x00166DD0u; return; } if (c.pc != 0x0020A4A8u) [[unlikely]] return; }
L_0020A4A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 244u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020A510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A4D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 257u, depth + 1u); else { c.pc = 0x0020A520u; return; } if (c.pc != 0x0020A4D0u) [[unlikely]] return; }
L_0020A4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A510; } }
L_0020A4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A4E0u);  if (depth < kMaxDepth) unit_0011(c, 340u, depth + 1u); else { c.pc = 0x00166DD0u; return; } if (c.pc != 0x0020A4E0u) [[unlikely]] return; }
L_0020A4E0:
    c.f[1] = ld32((c.r[16].w[0] + 244u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020A510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A4F8u); set32(c.r[4], ld32((c.r[16].w[0] + 232u)));  if (depth < kMaxDepth) unit_0011(c, 340u, depth + 1u); else { c.pc = 0x00166DD0u; return; } if (c.pc != 0x0020A4F8u) [[unlikely]] return; }
L_0020A4F8:
    c.f[1] = ld32((c.r[16].w[0] + 244u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 244u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 252u), c.r[3].w[0]);
    c.budget -= 6;
L_0020A510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0020A514:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020A520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 232u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 236u)));  goto L_0020A554; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A54Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020A54Cu) [[unlikely]] return; }
L_0020A54C:
    st32((c.r[16].w[0] + 232u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 2;
L_0020A554:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0020A624; }
    st32((c.r[16].w[0] + 236u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[16].w[0] + 256u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 260u));
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 264u));
    st32((c.r[16].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 268u));
    st32((c.r[16].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 272u));
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 276u));
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 280u));
    st32((c.r[16].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 284u));
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 156u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    st32((c.r[16].w[0] + 184u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 176u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 292u)));
    st32((c.r[16].w[0] + 212u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 204u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 220u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 192u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 228u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 200u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 50;
L_0020A624:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020A630:
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[4].w[0] + 48u));  goto L_0020A670; }
    c.f[1] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020A66C; } }
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020A6B4; } }
L_0020A66C:
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.budget -= 1;
L_0020A670:
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    st32((c.r[4].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 92u), c.f[0]);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    c.budget -= 17;
L_0020A6B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020A6C0:
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[4].w[0] + 112u));  goto L_0020A700; }
    c.f[1] = ld32((c.r[4].w[0] + 148u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020A6FC; } }
    c.f[1] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020A744; } }
L_0020A6FC:
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.budget -= 1;
L_0020A700:
    st32((c.r[4].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    st32((c.r[4].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    st32((c.r[4].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 124u));
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 156u), c.f[0]);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 172u), 0u);
    c.budget -= 17;
L_0020A744:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020A750:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A780u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 345u, depth + 1u); else { c.pc = 0x001B6230u; return; } if (c.pc != 0x0020A780u) [[unlikely]] return; }
L_0020A780:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54430000u);
    set32(c.r[3], c.r[3].w[0] + 17024u);
    c.r[2].d[0] = c.r[2].d[0] | 19783ull;
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 32u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 40u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020A7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A800u); set32(c.r[4], ld32((c.r[4].w[0] + 32u)));  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0020A800u) [[unlikely]] return; }
L_0020A800:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020A830:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 72u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A858u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_000F(c, 47u, depth + 1u); else { c.pc = 0x0015C530u; return; } if (c.pc != 0x0020A858u) [[unlikely]] return; }
L_0020A858:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A868u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0015C560u; return; } if (c.pc != 0x0020A868u) [[unlikely]] return; }
L_0020A868:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A878u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0015C590u; return; } if (c.pc != 0x0020A878u) [[unlikely]] return; }
L_0020A878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A880u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 45u, depth + 1u); else { c.pc = 0x0015C500u; return; } if (c.pc != 0x0020A880u) [[unlikely]] return; }
L_0020A880:
    c.f[2] = ld32((c.r[29].w[0] + 76u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[29].w[0] + 72u));
    c.f[3] = ld32((c.r[29].w[0] + 64u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[29].w[0] + 76u), c.f[5]);
    st32((c.r[29].w[0] + 72u), c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 36u), c.f[0]);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 40;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020A920:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 72u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A948u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_000F(c, 47u, depth + 1u); else { c.pc = 0x0015C530u; return; } if (c.pc != 0x0020A948u) [[unlikely]] return; }
L_0020A948:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A958u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0015C560u; return; } if (c.pc != 0x0020A958u) [[unlikely]] return; }
L_0020A958:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A968u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0015C590u; return; } if (c.pc != 0x0020A968u) [[unlikely]] return; }
L_0020A968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A970u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 45u, depth + 1u); else { c.pc = 0x0015C500u; return; } if (c.pc != 0x0020A970u) [[unlikely]] return; }
L_0020A970:
    c.f[3] = ld32((c.r[29].w[0] + 76u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[4].w[0];
    c.f[5] = ld32((c.r[29].w[0] + 72u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[3] = ld32((c.r[29].w[0] + 60u));
    c.f[4] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[3]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 76u), c.f[6]);
    st32((c.r[29].w[0] + 72u), c.f[4]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 44u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 45;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020AA30:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AA64u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000D(c, 361u, depth + 1u); else { c.pc = 0x001575A0u; return; } if (c.pc != 0x0020AA64u) [[unlikely]] return; }
L_0020AA64:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AA70u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x0020AA70u) [[unlikely]] return; }
L_0020AA70:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AA7Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 265u, depth + 1u); else { c.pc = 0x0020A830u; return; } if (c.pc != 0x0020AA7Cu) [[unlikely]] return; }
L_0020AA7C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AA88u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 270u, depth + 1u); else { c.pc = 0x0020A920u; return; } if (c.pc != 0x0020AA88u) [[unlikely]] return; }
L_0020AA88:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 380u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AA98u); set32(c.r[6], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0015C5C0u; return; } if (c.pc != 0x0020AA98u) [[unlikely]] return; }
L_0020AA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AAA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0020AAA0u) [[unlikely]] return; }
L_0020AAA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AAB0u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0020AAB0u) [[unlikely]] return; }
L_0020AAB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AAC0u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0020AAC0u) [[unlikely]] return; }
L_0020AAC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[4] = ld32((c.r[2].w[0] + 6192u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[3].w[0] + 6196u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 380u));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 6204u));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[29].w[0] + 96u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 100u), c.f[3]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 108u), c.f[2]);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AB0Cu); st32((c.r[29].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x0020AB0Cu) [[unlikely]] return; }
L_0020AB0C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AB1Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0020AB1Cu) [[unlikely]] return; }
L_0020AB1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 6192u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 6196u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 6204u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 380u));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AB7Cu); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x0020AB7Cu) [[unlikely]] return; }
L_0020AB7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AB8Cu); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0020AB8Cu) [[unlikely]] return; }
L_0020AB8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AB9Cu); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0020AB9Cu) [[unlikely]] return; }
L_0020AB9C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ABACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0020ABACu) [[unlikely]] return; }
L_0020ABAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_0020ABD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020ABF4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 2;
L_0020ABF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AC04u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_000F(c, 38u, depth + 1u); else { c.pc = 0x0015C3D0u; return; } if (c.pc != 0x0020AC04u) [[unlikely]] return; }
L_0020AC04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AC14u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0015C5C0u; return; } if (c.pc != 0x0020AC14u) [[unlikely]] return; }
L_0020AC14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AC24u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0015C560u; return; } if (c.pc != 0x0020AC24u) [[unlikely]] return; }
L_0020AC24:
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020AC90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = c.f[14];
    c.f[21] = c.f[13];
    c.f[22] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACC0u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x0020ACC0u) [[unlikely]] return; }
L_0020ACC0:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACCCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0020ACCCu) [[unlikely]] return; }
L_0020ACCC:
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACDCu); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[22]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x0020ACDCu) [[unlikely]] return; }
L_0020ACDC:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACE8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x0020ACE8u) [[unlikely]] return; }
L_0020ACE8:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACF4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0020ACF4u) [[unlikely]] return; }
L_0020ACF4:
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020AD20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[5], c.r[5].w[0] + 17040u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C440000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 19783ull;
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_0020AD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020ADE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 17040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADACu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 313u, depth + 1u); else { c.pc = 0x0020B010u; return; } if (c.pc != 0x0020ADACu) [[unlikely]] return; }
L_0020ADAC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0020ADD0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_0020ADD0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0020ADE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0020ADE4u) [[unlikely]] return; }
L_0020ADE4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0020ADE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020AE00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020AE28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020AFF4; } }
L_0020AE28:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D440000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 19529ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0020AFE8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AE78u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0020AE78u) [[unlikely]] return; }
L_0020AE78:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AE8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0020AE8Cu) [[unlikely]] return; }
L_0020AE8C:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 16u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0020AEE4; } }
L_0020AED0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 5;
L_0020AEE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 12u));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020AED0u | kUnwind; return; } goto L_0020AED0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0020AF14; } }
L_0020AF00:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 5;
L_0020AF14:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020AF00u | kUnwind; return; } goto L_0020AF00; }
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { st32((c.r[17].w[0] + 28u), c.r[16].w[0]);  goto L_0020AF5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AF38u); set32(c.r[4], c.r[3].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0020AF38u) [[unlikely]] return; }
L_0020AF38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0020AFE4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AF50u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0020AF50u) [[unlikely]] return; }
L_0020AF50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0020AFE4; } }
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 1;
L_0020AF5C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0020AFC8; } }
L_0020AF7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 9u));  goto L_0020AFA0; }
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 7;
L_0020AFA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 12u);  goto L_0020AFC4; }
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 7;
L_0020AFC4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0020AFC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020AF7Cu | kUnwind; return; } goto L_0020AF7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020AFF4; } }
L_0020AFE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020AFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AFF0u);  if (depth < kMaxDepth) unit_003A(c, 313u, depth + 1u); else { c.pc = 0x0020B010u; return; } if (c.pc != 0x0020AFF0u) [[unlikely]] return; }
L_0020AFF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020AFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020B010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_0020B03C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B034u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0020B034u) [[unlikely]] return; }
L_0020B034:
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 2;
L_0020B03C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_0020B078; }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  goto L_0020B060; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B058u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0020B058u) [[unlikely]] return; }
L_0020B058:
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 2;
L_0020B060:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0020B074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B070u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0020B070u) [[unlikely]] return; }
L_0020B070:
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 1;
L_0020B074:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_0020B078:
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020B090:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0020B23C; } }
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0020B214; } }
L_0020B0A4:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);  if (t) { goto L_0020B200; } }
L_0020B0BC:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[11], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[11], c.r[11].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 7;
    if (c.r[8].d[0] != c.r[11].d[0]) { c.r[11].d[0] = ld8((c.r[3].w[0] + 33u));  goto L_0020B11C; }
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[13].sd[0] < 0;  if (t) { goto L_0020B118; } }
    set32(c.r[12], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[12].d[0] == 0ull) { c.r[11].d[0] = 0ull + 0ull;  goto L_0020B114; }
    set32(c.r[11], ld32((c.r[6].w[0] + 20u)));
    c.r[11].d[0] = c.r[13].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[11].d[0] != 0ull) { set32(c.r[11], c.r[13].w[0] << 2);  goto L_0020B10C; }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B114; } }
L_0020B10C:
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0])));
    c.budget -= 2;
L_0020B114:
    st32((c.r[3].w[0]), c.r[11].w[0]);
    c.budget -= 1;
L_0020B118:
    c.r[11].d[0] = ld8((c.r[3].w[0] + 33u));
    c.budget -= 1;
L_0020B11C:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[11].d[0]) { c.r[11].d[0] = ld8((c.r[3].w[0] + 34u));  goto L_0020B168; }
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 37u)));
    c.budget -= 3;
    { const bool t = c.r[13].sd[0] < 0;  if (t) { goto L_0020B164; } }
    set32(c.r[12], ld32((c.r[6].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[12].d[0] == 0ull) { c.r[11].d[0] = 0ull + 0ull;  goto L_0020B160; }
    set32(c.r[11], ld32((c.r[6].w[0] + 36u)));
    c.r[11].d[0] = c.r[13].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[11].d[0] != 0ull) { set32(c.r[11], c.r[13].w[0] << 2);  goto L_0020B158; }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B160; } }
L_0020B158:
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0])));
    c.budget -= 2;
L_0020B160:
    st32((c.r[3].w[0] + 4u), c.r[11].w[0]);
    c.budget -= 1;
L_0020B164:
    c.r[11].d[0] = ld8((c.r[3].w[0] + 34u));
    c.budget -= 1;
L_0020B168:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[11].d[0]) { c.r[11].d[0] = ld8((c.r[3].w[0] + 35u));  goto L_0020B1B4; }
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[13].sd[0] < 0;  if (t) { goto L_0020B1B0; } }
    set32(c.r[12], ld32((c.r[6].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[12].d[0] == 0ull) { c.r[11].d[0] = 0ull + 0ull;  goto L_0020B1AC; }
    set32(c.r[11], ld32((c.r[6].w[0] + 52u)));
    c.r[11].d[0] = c.r[13].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[11].d[0] != 0ull) { set32(c.r[11], c.r[13].w[0] << 2);  goto L_0020B1A4; }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B1AC; } }
L_0020B1A4:
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0])));
    c.budget -= 2;
L_0020B1AC:
    st32((c.r[3].w[0] + 8u), c.r[11].w[0]);
    c.budget -= 1;
L_0020B1B0:
    c.r[11].d[0] = ld8((c.r[3].w[0] + 35u));
    c.budget -= 1;
L_0020B1B4:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[11].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_0020B200; }
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[13].sd[0] < 0;  if (t) { goto L_0020B1FC; } }
    set32(c.r[12], ld32((c.r[6].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[12].d[0] == 0ull) { c.r[11].d[0] = 0ull + 0ull;  goto L_0020B1F8; }
    set32(c.r[11], ld32((c.r[6].w[0] + 68u)));
    c.r[11].d[0] = c.r[13].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[11].d[0] != 0ull) { set32(c.r[11], c.r[13].w[0] << 2);  goto L_0020B1F0; }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B1F8; } }
L_0020B1F0:
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0])));
    c.budget -= 2;
L_0020B1F8:
    st32((c.r[3].w[0] + 12u), c.r[11].w[0]);
    c.budget -= 1;
L_0020B1FC:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0020B200:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 8u));
    c.r[3].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[11], c.r[9].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B0BCu | kUnwind; return; } goto L_0020B0BC; }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_0020B214:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[10].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], c.r[10].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B0A4u | kUnwind; return; } goto L_0020B0A4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 5;
L_0020B23C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020B250:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0020B2DC; } }
L_0020B25C:
    set32(c.r[7], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_0020B2C8; } }
L_0020B274:
    set32(c.r[7], ld32((c.r[9].w[0])));
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 32u));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[7].d[0]) { c.r[7].d[0] = ld8((c.r[8].w[0] + 33u));  goto L_0020B298; }
    st32((c.r[8].w[0]), 0u);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 33u));
    c.budget -= 2;
L_0020B298:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[7].d[0]) { c.r[7].d[0] = ld8((c.r[8].w[0] + 34u));  goto L_0020B2A8; }
    st32((c.r[8].w[0] + 4u), 0u);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 34u));
    c.budget -= 2;
L_0020B2A8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[7].d[0]) { c.r[7].d[0] = ld8((c.r[8].w[0] + 35u));  goto L_0020B2B8; }
    st32((c.r[8].w[0] + 8u), 0u);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 35u));
    c.budget -= 2;
L_0020B2B8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[7].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_0020B2C8; }
    st32((c.r[8].w[0] + 12u), 0u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 2;
L_0020B2C8:
    c.r[7].d[0] = ld8((c.r[9].w[0] + 8u));
    c.r[7].d[0] = c.r[10].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[7].d[0] != 0ull) { set32(c.r[8], c.r[10].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B274u | kUnwind; return; } goto L_0020B274; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0020B2DC:
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 8u)));
    c.r[7].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[7].d[0] != 0ull) { set32(c.r[8], c.r[6].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B25Cu | kUnwind; return; } goto L_0020B25C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), 0u);  c.pc = t; return; }
L_0020B310:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0020B3A8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0020B380; } }
L_0020B324:
    set32(c.r[7], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_0020B36C; } }
L_0020B33C:
    set32(c.r[7], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 8u));
    c.budget -= 7;
    if (c.r[10].d[0] != c.r[7].d[0]) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_0020B36C; }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_0020B368; } }
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_0020B368:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_0020B36C:
    c.r[7].d[0] = ld8((c.r[9].w[0] + 9u));
    c.r[7].d[0] = c.r[11].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[7].d[0] != 0ull) { set32(c.r[8], c.r[11].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B33Cu | kUnwind; return; } goto L_0020B33C; }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0020B380:
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 8u)));
    c.r[7].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[7].d[0] != 0ull) { set32(c.r[8], c.r[3].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B324u | kUnwind; return; } goto L_0020B324; }
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 5;
L_0020B3A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020B3B0:
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0020B40C; } }
L_0020B3BC:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_0020B3F8; } }
L_0020B3D4:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 7;
    if (c.r[8].d[0] != c.r[3].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_0020B3F8; }
    st32((c.r[6].w[0]), 0u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0020B3F8:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 9u));
    c.r[3].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[9].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B3D4u | kUnwind; return; } goto L_0020B3D4; }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_0020B40C:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[10].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[10].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B3BCu | kUnwind; return; } goto L_0020B3BC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), 0u);  c.pc = t; return; }
L_0020B440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0020B488; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = ld32((c.r[4].w[0]));  goto L_0020B478; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_0020B490; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020B490; } }
L_0020B478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B480u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0020B480u) [[unlikely]] return; }
L_0020B480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0020B494; } }
L_0020B488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B490u);  if (depth < kMaxDepth) unit_0008(c, 176u, depth + 1u); else { c.pc = 0x00142110u; return; } if (c.pc != 0x0020B490u) [[unlikely]] return; }
L_0020B490:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0020B494:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020B4A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0020B4E8; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[4].w[0]));  goto L_0020B504; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0020B4D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B500; } }
L_0020B4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B4E0u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0020B4E0u) [[unlikely]] return; }
L_0020B4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0020B508; } }
L_0020B4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B4F0u);  if (depth < kMaxDepth) unit_0008(c, 174u, depth + 1u); else { c.pc = 0x001420F8u; return; } if (c.pc != 0x0020B4F0u) [[unlikely]] return; }
L_0020B4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B4F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 94u, depth + 1u); else { c.pc = 0x0014EB28u; return; } if (c.pc != 0x0020B4F8u) [[unlikely]] return; }
L_0020B4F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B504; } }
L_0020B500:
    c.f[0] = 0u;
    c.budget -= 1;
L_0020B504:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0020B508:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020B510:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0020B524; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_0020B524:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020B530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020B564; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0020B594; }
L_0020B564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B56Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x0020B56Cu) [[unlikely]] return; }
L_0020B56C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B578u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x0020B578u) [[unlikely]] return; }
L_0020B578:
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020B5F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0020B5F4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0020B594:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0020B5C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020B5C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B5ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 336u, depth + 1u); else { c.pc = 0x0020B510u; return; } if (c.pc != 0x0020B5ACu) [[unlikely]] return; }
L_0020B5AC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B5B8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x0020B5B8u) [[unlikely]] return; }
L_0020B5B8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0020B5F0; } }
L_0020B5C4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0020B5F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B5D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x0020B5D4u) [[unlikely]] return; }
L_0020B5D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B5E0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x0020B5E0u) [[unlikely]] return; }
L_0020B5E0:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0020B5F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020B5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0020B5F4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020B610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B620u);  if (depth < kMaxDepth) unit_003A(c, 337u, depth + 1u); else { c.pc = 0x0020B530u; return; } if (c.pc != 0x0020B620u) [[unlikely]] return; }
L_0020B620:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020B640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020B678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B664u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x0020B664u) [[unlikely]] return; }
L_0020B664:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_0020B69C; } }
L_0020B678:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0020B69C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B68Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x0020B68Cu) [[unlikely]] return; }
L_0020B68C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_0020B69C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020B6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020B6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B6D4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x0020B6D4u) [[unlikely]] return; }
L_0020B6D4:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_0020B70C; } }
L_0020B6E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0020B70C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B6FCu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x0020B6FCu) [[unlikely]] return; }
L_0020B6FC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_0020B70C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020B720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B734u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0020B734u) [[unlikely]] return; }
L_0020B734:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52470000u);
    set32(c.r[3], c.r[3].w[0] + 17088u);
    c.r[2].d[0] = c.r[2].d[0] | 20551ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B754u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 358u, depth + 1u); else { c.pc = 0x0020B810u; return; } if (c.pc != 0x0020B754u) [[unlikely]] return; }
L_0020B754:
    set32(c.r[2], ld32((c.r[28].w[0] - 30480u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0020B768; }
    st32((c.r[28].w[0] - 30480u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_0020B768:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020B790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020B7EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 17088u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30480u)));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0020B7CC; }
    st32((c.r[28].w[0] - 30480u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0020B7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B7D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0020B7D4u) [[unlikely]] return; }
L_0020B7D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020B7F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B7ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0020B7ECu) [[unlikely]] return; }
L_0020B7EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020B7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020B810:
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 3;
L_0020B81C:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 68u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B81Cu | kUnwind; return; } goto L_0020B81C; } }
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), 0u);  c.pc = t; return; }
L_0020B850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B86Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 369u, depth + 1u); else { c.pc = 0x0020B9B0u; return; } if (c.pc != 0x0020B86Cu) [[unlikely]] return; }
L_0020B86C:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 68u)));  if (t) { goto L_0020B88C; } }
L_0020B87C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 320u)));  goto L_0020B88C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0020B89C; } }
L_0020B88C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B87Cu | kUnwind; return; } goto L_0020B87C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_0020B89C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020B8B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], c.r[2].w[0] + 1u);  goto L_0020B8D0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_0020B8D4; } }
L_0020B8D0:
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 1;
L_0020B8D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020B8E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 316u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B900u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 369u, depth + 1u); else { c.pc = 0x0020B9B0u; return; } if (c.pc != 0x0020B900u) [[unlikely]] return; }
L_0020B900:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    st32((c.r[16].w[0] + 320u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020B930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 316u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B950u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 369u, depth + 1u); else { c.pc = 0x0020B9B0u; return; } if (c.pc != 0x0020B950u) [[unlikely]] return; }
L_0020B950:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 68u);
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0020B990; } }
L_0020B968:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[16].d[0]) { c.r[5].d[0] = c.r[3].d[0] + 0ull;  goto L_0020B98C; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 320u)));  goto L_0020B984; }
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_0020B998; } }
L_0020B984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 320u), c.r[3].w[0]);  if (t) { goto L_0020B998; } }
L_0020B98C:
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 1;
L_0020B990:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B968u | kUnwind; return; } goto L_0020B968; } }
L_0020B998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020B9B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] & 15ull;  c.pc = t; return; }
L_0020B9C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B9E4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 380u, depth + 1u); else { c.pc = 0x0020BB20u; return; } if (c.pc != 0x0020B9E4u) [[unlikely]] return; }
L_0020B9E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 52u)));  goto L_0020BA00; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B9F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x0020B9F8u) [[unlikely]] return; }
L_0020B9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0020BA34; } }
L_0020BA00:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { st32((c.r[18].w[0] + 52u), c.r[17].w[0]);  goto L_0020BA20; }
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0020BA1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020BA30; } }
L_0020BA1C:
    st32((c.r[18].w[0] + 52u), c.r[17].w[0]);
    c.budget -= 1;
L_0020BA20:
    st32((c.r[18].w[0] + 56u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA30u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x0020BA30u) [[unlikely]] return; }
L_0020BA30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0020BA34:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020BA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 380u, depth + 1u); else { c.pc = 0x0020BB20u; return; } if (c.pc != 0x0020BA64u) [[unlikely]] return; }
L_0020BA64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0020BA80; }
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
L_0020BA80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020BA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 2180u)));
    c.r[3].d[0] = c.r[7].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 2);  goto L_0020BABC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BAB4u); set32(c.r[4], c.r[4].w[0] + 28608u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0020BAB4u) [[unlikely]] return; }
L_0020BAB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0020BAE4; } }
L_0020BABC:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 132u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2180u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 1156u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2180u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 2180u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
L_0020BAE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020BAF0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
    { st32((c.r[4].w[0] + 56u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D590u | kUnwind; return; } [[clang::musttail]] return unit_0013(c, 107u, depth); }
L_0020BB10:
    c.budget -= 2;
    { st32((c.r[4].w[0] + 60u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D670u | kUnwind; return; } [[clang::musttail]] return unit_0013(c, 111u, depth); }
L_0020BB20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 60u)));  c.pc = t; return; }
L_0020BB30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] - c.r[5].w[0]);
    set32(c.r[8], c.r[18].w[0] + 132u);
    set32(c.r[7], c.r[18].w[0] + 1156u);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0020BB68; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0020BB68:
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0020BBE8; } }
L_0020BB84:
    set32(c.r[14], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[14].w[0])));
    c.r[1].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[10], c.r[6].w[0] << 2);  goto L_0020BBA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0020BBE8; } }
L_0020BBA0:
    set32(c.r[13], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[13].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[12], c.r[8].w[0] + c.r[11].w[0]);  goto L_0020BBBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0020BBE8; } }
L_0020BBBC:
    set32(c.r[10], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[12].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[9], ld32((c.r[10].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[12].w[0]), c.r[9].w[0]);
    st32((c.r[10].w[0]), c.r[11].w[0]);
    set32(c.r[10], ld32((c.r[14].w[0])));
    set32(c.r[9], ld32((c.r[13].w[0])));
    st32((c.r[14].w[0]), c.r[9].w[0]);
    st32((c.r[13].w[0]), c.r[10].w[0]);
    c.budget -= 11;
L_0020BBE8:
    c.r[9].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[9].d[0] != 0ull) { set32(c.r[11], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020BB84u | kUnwind; return; } goto L_0020BB84; }
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[6].d[0]) { c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;  goto L_0020BC28; }
    set32(c.r[8], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[8].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0020BC58; }
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] - 1u);  goto L_0020BC24; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020BC24:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0020BC28:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  goto L_0020BC3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BC38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 381u, depth + 1u); else { c.pc = 0x0020BB30u; return; } if (c.pc != 0x0020BC38u) [[unlikely]] return; }
L_0020BC38:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0020BC3C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020BC54; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BC54u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 381u, depth + 1u); else { c.pc = 0x0020BB30u; return; } if (c.pc != 0x0020BC54u) [[unlikely]] return; }
L_0020BC54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0020BC58:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020BC70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2180u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020BCEC; } }
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BC98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 381u, depth + 1u); else { c.pc = 0x0020BB30u; return; } if (c.pc != 0x0020BC98u) [[unlikely]] return; }
L_0020BC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BCA0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0020BCA0u) [[unlikely]] return; }
L_0020BCA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BCA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0020BCA8u) [[unlikely]] return; }
L_0020BCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BCB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 378u, depth + 1u); else { c.pc = 0x0020BAF0u; return; } if (c.pc != 0x0020BCB0u) [[unlikely]] return; }
L_0020BCB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0020BCD4; } }
L_0020BCB8:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BCD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020BCD0u) [[unlikely]] return; }
L_0020BCD0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0020BCD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 2180u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020BCB8u | kUnwind; return; } goto L_0020BCB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BCECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 379u, depth + 1u); else { c.pc = 0x0020BB10u; return; } if (c.pc != 0x0020BCECu) [[unlikely]] return; }
L_0020BCEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020BD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 17056u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BD48u); st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 404u, depth + 1u); else { c.pc = 0x0020BE70u; return; } if (c.pc != 0x0020BD48u) [[unlikely]] return; }
L_0020BD48:
    st32((c.r[16].w[0] + 300u), 0u);
    st32((c.r[16].w[0] + 304u), 0u);
    st32((c.r[16].w[0] + 308u), 0u);
    st32((c.r[16].w[0] + 312u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30480u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_0020BD84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BD6Cu);  if (depth < kMaxDepth) unit_003A(c, 363u, depth + 1u); else { c.pc = 0x0020B8B0u; return; } if (c.pc != 0x0020BD6Cu) [[unlikely]] return; }
L_0020BD6C:
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30480u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BD7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 364u, depth + 1u); else { c.pc = 0x0020B8E0u; return; } if (c.pc != 0x0020BD7Cu) [[unlikely]] return; }
L_0020BD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 296u), 0u);  if (t) { goto L_0020BD94; } }
L_0020BD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BD8Cu); set32(c.r[4], c.r[4].w[0] + 28623u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0020BD8Cu) [[unlikely]] return; }
L_0020BD8C:
    st32((c.r[16].w[0] + 316u), 0u);
    st32((c.r[16].w[0] + 296u), 0u);
    c.budget -= 2;
L_0020BD94:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020BDB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020BE58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 17056u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BDDCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 407u, depth + 1u); else { c.pc = 0x0020BED0u; return; } if (c.pc != 0x0020BDDCu) [[unlikely]] return; }
L_0020BDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BDE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 54u, depth + 1u); else { c.pc = 0x0020C700u; return; } if (c.pc != 0x0020BDE4u) [[unlikely]] return; }
L_0020BDE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 304u)));  if (t) { goto L_0020BDF4; } }
L_0020BDEC:
    st32((c.r[2].w[0] + 300u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 312u)));
    c.budget -= 2;
L_0020BDF4:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020BDECu | kUnwind; return; } goto L_0020BDEC; } }
    st32((c.r[17].w[0] + 304u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30480u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0020BE20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 366u, depth + 1u); else { c.pc = 0x0020B930u; return; } if (c.pc != 0x0020BE20u) [[unlikely]] return; }
L_0020BE20:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0020BE44; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_0020BE44:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020BE5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0020BE58u) [[unlikely]] return; }
L_0020BE58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020BE5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020BE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 408u, depth + 1u); else { c.pc = 0x0020BEE0u; return; } if (c.pc != 0x0020BE84u) [[unlikely]] return; }
L_0020BE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE8Cu);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x0020BE8Cu) [[unlikely]] return; }
L_0020BE8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    set32(c.r[4], 0u + 127u);
    st32((c.r[16].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 284u), c.r[4].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 288u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 276u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020BED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020BEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BEF8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0020BEF8u) [[unlikely]] return; }
L_0020BEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF00u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0020BF00u) [[unlikely]] return; }
L_0020BF00:
    st32((c.r[16].w[0] + 216u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 212u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 208u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 220u), c.r[5].w[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[16].w[0] + 232u), 0u);
    st32((c.r[16].w[0] + 228u), 0u);
    st32((c.r[16].w[0] + 224u), 0u);
    st32((c.r[16].w[0] + 236u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 248u), 0u);
    st32((c.r[16].w[0] + 244u), 0u);
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 252u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 248u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 244u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 240u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 264u), 0u);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 256u), 0u);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 268u), c.r[3].w[0]);  if (t) { goto L_0020BF70; } }
L_0020BF60:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0] + 160u), c.r[4].w[0]);
    c.budget -= 4;
L_0020BF70:
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020BF60u | kUnwind; return; } goto L_0020BF60; } }
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020BFA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BFBCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 54u, depth + 1u); else { c.pc = 0x0020C700u; return; } if (c.pc != 0x0020BFBCu) [[unlikely]] return; }
L_0020BFBC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0020BFE0; }
    st32((c.r[17].w[0] + 300u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 312u), c.r[3].w[0]);  if (t) { goto L_0020BFD8; } }
    st32((c.r[3].w[0] + 308u), c.r[17].w[0]);
    c.budget -= 1;
L_0020BFD8:
    st32((c.r[16].w[0] + 304u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_0020BFE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020BFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    [[clang::musttail]] return unit_003B(c, 1u, depth);
}

}
