#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0038[4096] = {
    1, 0, 2, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 12, 13, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 24, 25, 26, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 31, 32, 33, 0, 0, 34, 0, 0,
    35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 52, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 119, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148,
    0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314,
    0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0,
    0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 389,
    0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0,
    0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0038(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00200000;
    case 2u: goto L_00200008;
    case 3u: goto L_00200014;
    case 4u: goto L_00200020;
    case 5u: goto L_00200028;
    case 6u: goto L_00200030;
    case 7u: goto L_00200040;
    case 8u: goto L_00200050;
    case 9u: goto L_0020005C;
    case 10u: goto L_0020006C;
    case 11u: goto L_00200078;
    case 12u: goto L_00200094;
    case 13u: goto L_00200098;
    case 14u: goto L_0020009C;
    case 15u: goto L_002000BC;
    case 16u: goto L_002000DC;
    case 17u: goto L_002000E0;
    case 18u: goto L_00200114;
    case 19u: goto L_0020011C;
    case 20u: goto L_00200120;
    case 21u: goto L_0020015C;
    case 22u: goto L_00200160;
    case 23u: goto L_00200180;
    case 24u: goto L_00200194;
    case 25u: goto L_00200198;
    case 26u: goto L_0020019C;
    case 27u: goto L_002001A0;
    case 28u: goto L_002001B0;
    case 29u: goto L_002001C0;
    case 30u: goto L_002001DC;
    case 31u: goto L_002001E0;
    case 32u: goto L_002001E4;
    case 33u: goto L_002001E8;
    case 34u: goto L_002001F4;
    case 35u: goto L_00200200;
    case 36u: goto L_00200214;
    case 37u: goto L_0020021C;
    case 38u: goto L_00200254;
    case 39u: goto L_00200264;
    case 40u: goto L_00200280;
    case 41u: goto L_00200290;
    case 42u: goto L_002002BC;
    case 43u: goto L_002002E0;
    case 44u: goto L_00200300;
    case 45u: goto L_00200324;
    case 46u: goto L_00200340;
    case 47u: goto L_00200348;
    case 48u: goto L_00200370;
    case 49u: goto L_00200390;
    case 50u: goto L_002003C0;
    case 51u: goto L_002003D8;
    case 52u: goto L_002003DC;
    case 53u: goto L_00200400;
    case 54u: goto L_00200428;
    case 55u: goto L_0020045C;
    case 56u: goto L_00200470;
    case 57u: goto L_00200490;
    case 58u: goto L_00200540;
    case 59u: goto L_002005B0;
    case 60u: goto L_002005D8;
    case 61u: goto L_002005F0;
    case 62u: goto L_00200610;
    case 63u: goto L_00200660;
    case 64u: goto L_002006AC;
    case 65u: goto L_002006D0;
    case 66u: goto L_002006DC;
    case 67u: goto L_00200700;
    case 68u: goto L_00200754;
    case 69u: goto L_00200780;
    case 70u: goto L_00200794;
    case 71u: goto L_002007B0;
    case 72u: goto L_00200854;
    case 73u: goto L_00200870;
    case 74u: goto L_0020089C;
    case 75u: goto L_002008A0;
    case 76u: goto L_002008D4;
    case 77u: goto L_002008F0;
    case 78u: goto L_00200918;
    case 79u: goto L_00200940;
    case 80u: goto L_00200964;
    case 81u: goto L_00200990;
    case 82u: goto L_002009B8;
    case 83u: goto L_002009D0;
    case 84u: goto L_002009E0;
    case 85u: goto L_00200A10;
    case 86u: goto L_00200A20;
    case 87u: goto L_00200A70;
    case 88u: goto L_00200A7C;
    case 89u: goto L_00200AC4;
    case 90u: goto L_00200ADC;
    case 91u: goto L_00200B9C;
    case 92u: goto L_00200BAC;
    case 93u: goto L_00200BBC;
    case 94u: goto L_00200BF4;
    case 95u: goto L_00200C04;
    case 96u: goto L_00200C54;
    case 97u: goto L_00200C64;
    case 98u: goto L_00200CD0;
    case 99u: goto L_00200D34;
    case 100u: goto L_00200D90;
    case 101u: goto L_00200DAC;
    case 102u: goto L_00200E00;
    case 103u: goto L_00200E40;
    case 104u: goto L_00200E70;
    case 105u: goto L_00200E84;
    case 106u: goto L_00200ED4;
    case 107u: goto L_00200F00;
    case 108u: goto L_00200F38;
    case 109u: goto L_00200FB0;
    case 110u: goto L_00200FDC;
    case 111u: goto L_00200FE4;
    case 112u: goto L_00201010;
    case 113u: goto L_00201020;
    case 114u: goto L_00201034;
    case 115u: goto L_00201060;
    case 116u: goto L_00201090;
    case 117u: goto L_002010D8;
    case 118u: goto L_002010E0;
    case 119u: goto L_002010E4;
    case 120u: goto L_00201108;
    case 121u: goto L_00201114;
    case 122u: goto L_0020112C;
    case 123u: goto L_00201150;
    case 124u: goto L_00201164;
    case 125u: goto L_0020118C;
    case 126u: goto L_002011A0;
    case 127u: goto L_002011B8;
    case 128u: goto L_002011C0;
    case 129u: goto L_002011C8;
    case 130u: goto L_002011DC;
    case 131u: goto L_002011F4;
    case 132u: goto L_00201208;
    case 133u: goto L_00201214;
    case 134u: goto L_00201228;
    case 135u: goto L_00201240;
    case 136u: goto L_00201260;
    case 137u: goto L_00201268;
    case 138u: goto L_00201270;
    case 139u: goto L_00201284;
    case 140u: goto L_0020129C;
    case 141u: goto L_002012B0;
    case 142u: goto L_002012BC;
    case 143u: goto L_002012D0;
    case 144u: goto L_002012E8;
    case 145u: goto L_00201300;
    case 146u: goto L_0020135C;
    case 147u: goto L_0020136C;
    case 148u: goto L_0020137C;
    case 149u: goto L_0020138C;
    case 150u: goto L_0020139C;
    case 151u: goto L_002013D0;
    case 152u: goto L_002013F8;
    case 153u: goto L_00201420;
    case 154u: goto L_0020147C;
    case 155u: goto L_0020148C;
    case 156u: goto L_002014A0;
    case 157u: goto L_002014C8;
    case 158u: goto L_0020155C;
    case 159u: goto L_002015BC;
    case 160u: goto L_002015C8;
    case 161u: goto L_002015D8;
    case 162u: goto L_00201620;
    case 163u: goto L_00201654;
    case 164u: goto L_0020165C;
    case 165u: goto L_00201678;
    case 166u: goto L_002016A8;
    case 167u: goto L_002016C4;
    case 168u: goto L_0020173C;
    case 169u: goto L_00201764;
    case 170u: goto L_00201774;
    case 171u: goto L_00201790;
    case 172u: goto L_002017C0;
    case 173u: goto L_002017D8;
    case 174u: goto L_002017F0;
    case 175u: goto L_0020184C;
    case 176u: goto L_00201860;
    case 177u: goto L_00201884;
    case 178u: goto L_002018A4;
    case 179u: goto L_002018E0;
    case 180u: goto L_00201964;
    case 181u: goto L_0020196C;
    case 182u: goto L_002019FC;
    case 183u: goto L_00201A64;
    case 184u: goto L_00201A84;
    case 185u: goto L_00201A98;
    case 186u: goto L_00201AB0;
    case 187u: goto L_00201ADC;
    case 188u: goto L_00201B44;
    case 189u: goto L_00201B78;
    case 190u: goto L_00201B98;
    case 191u: goto L_00201BB4;
    case 192u: goto L_00201BD0;
    case 193u: goto L_00201BEC;
    case 194u: goto L_00201BF8;
    case 195u: goto L_00201C20;
    case 196u: goto L_00201C3C;
    case 197u: goto L_00201C58;
    case 198u: goto L_00201C64;
    case 199u: goto L_00201C8C;
    case 200u: goto L_00201D04;
    case 201u: goto L_00201D2C;
    case 202u: goto L_00201D3C;
    case 203u: goto L_00201D70;
    case 204u: goto L_00201DB8;
    case 205u: goto L_00201DD0;
    case 206u: goto L_00201DE0;
    case 207u: goto L_00201DFC;
    case 208u: goto L_00201E2C;
    case 209u: goto L_00201E48;
    case 210u: goto L_00201ED0;
    case 211u: goto L_00201EF8;
    case 212u: goto L_00201F08;
    case 213u: goto L_00201F30;
    case 214u: goto L_00201FC8;
    case 215u: goto L_00201FEC;
    case 216u: goto L_00202000;
    case 217u: goto L_00202020;
    case 218u: goto L_00202030;
    case 219u: goto L_0020203C;
    case 220u: goto L_00202054;
    case 221u: goto L_002020C0;
    case 222u: goto L_002020D0;
    case 223u: goto L_002020EC;
    case 224u: goto L_00202140;
    case 225u: goto L_00202160;
    case 226u: goto L_002021B0;
    case 227u: goto L_002021CC;
    case 228u: goto L_0020224C;
    case 229u: goto L_0020225C;
    case 230u: goto L_00202290;
    case 231u: goto L_002022AC;
    case 232u: goto L_002022D0;
    case 233u: goto L_002022E0;
    case 234u: goto L_00202300;
    case 235u: goto L_00202330;
    case 236u: goto L_00202374;
    case 237u: goto L_002023A8;
    case 238u: goto L_002023E0;
    case 239u: goto L_00202420;
    case 240u: goto L_00202460;
    case 241u: goto L_002024D0;
    case 242u: goto L_002024F4;
    case 243u: goto L_0020253C;
    case 244u: goto L_00202580;
    case 245u: goto L_002025B0;
    case 246u: goto L_002025E0;
    case 247u: goto L_00202610;
    case 248u: goto L_00202640;
    case 249u: goto L_00202654;
    case 250u: goto L_00202680;
    case 251u: goto L_002026AC;
    case 252u: goto L_002026E0;
    case 253u: goto L_00202714;
    case 254u: goto L_00202740;
    case 255u: goto L_00202780;
    case 256u: goto L_00202794;
    case 257u: goto L_002027E0;
    case 258u: goto L_0020282C;
    case 259u: goto L_00202854;
    case 260u: goto L_0020286C;
    case 261u: goto L_00202878;
    case 262u: goto L_00202890;
    case 263u: goto L_002028B0;
    case 264u: goto L_00202920;
    case 265u: goto L_00202950;
    case 266u: goto L_0020297C;
    case 267u: goto L_002029A0;
    case 268u: goto L_00202A38;
    case 269u: goto L_00202A64;
    case 270u: goto L_00202A80;
    case 271u: goto L_00202B28;
    case 272u: goto L_00202B40;
    case 273u: goto L_00202BCC;
    case 274u: goto L_00202C08;
    case 275u: goto L_00202C68;
    case 276u: goto L_00202C80;
    case 277u: goto L_00202CA0;
    case 278u: goto L_00202CD0;
    case 279u: goto L_00202D00;
    case 280u: goto L_00202D18;
    case 281u: goto L_00202D2C;
    case 282u: goto L_00202D40;
    case 283u: goto L_00202D64;
    case 284u: goto L_00202D7C;
    case 285u: goto L_00202DF0;
    case 286u: goto L_00202E14;
    case 287u: goto L_00202E2C;
    case 288u: goto L_00202E64;
    case 289u: goto L_00202EA0;
    case 290u: goto L_00202EC0;
    case 291u: goto L_00202EE0;
    case 292u: goto L_00202EFC;
    case 293u: goto L_00202F44;
    case 294u: goto L_00202F60;
    case 295u: goto L_00202F7C;
    case 296u: goto L_00202F88;
    case 297u: goto L_00202FEC;
    case 298u: goto L_00203030;
    case 299u: goto L_0020306C;
    case 300u: goto L_00203090;
    case 301u: goto L_002030A4;
    case 302u: goto L_002030C0;
    case 303u: goto L_002030DC;
    case 304u: goto L_00203100;
    case 305u: goto L_00203114;
    case 306u: goto L_00203130;
    case 307u: goto L_00203148;
    case 308u: goto L_002031A0;
    case 309u: goto L_002031B8;
    case 310u: goto L_00203200;
    case 311u: goto L_0020322C;
    case 312u: goto L_00203238;
    case 313u: goto L_00203250;
    case 314u: goto L_0020327C;
    case 315u: goto L_00203288;
    case 316u: goto L_0020329C;
    case 317u: goto L_002032EC;
    case 318u: goto L_00203320;
    case 319u: goto L_00203340;
    case 320u: goto L_00203350;
    case 321u: goto L_00203370;
    case 322u: goto L_0020339C;
    case 323u: goto L_002033A8;
    case 324u: goto L_002033BC;
    case 325u: goto L_0020340C;
    case 326u: goto L_00203460;
    case 327u: goto L_00203470;
    case 328u: goto L_00203490;
    case 329u: goto L_002034B4;
    case 330u: goto L_002034C4;
    case 331u: goto L_002034E0;
    case 332u: goto L_00203524;
    case 333u: goto L_0020352C;
    case 334u: goto L_0020355C;
    case 335u: goto L_0020356C;
    case 336u: goto L_0020357C;
    case 337u: goto L_00203598;
    case 338u: goto L_002035A4;
    case 339u: goto L_002035B4;
    case 340u: goto L_0020361C;
    case 341u: goto L_00203630;
    case 342u: goto L_0020365C;
    case 343u: goto L_00203690;
    case 344u: goto L_002036A4;
    case 345u: goto L_002036C0;
    case 346u: goto L_002036E4;
    case 347u: goto L_00203704;
    case 348u: goto L_00203720;
    case 349u: goto L_0020373C;
    case 350u: goto L_00203770;
    case 351u: goto L_00203778;
    case 352u: goto L_00203784;
    case 353u: goto L_002037B0;
    case 354u: goto L_002037D8;
    case 355u: goto L_00203810;
    case 356u: goto L_0020383C;
    case 357u: goto L_00203870;
    case 358u: goto L_0020388C;
    case 359u: goto L_002038C0;
    case 360u: goto L_002038F0;
    case 361u: goto L_0020390C;
    case 362u: goto L_00203940;
    case 363u: goto L_0020395C;
    case 364u: goto L_00203990;
    case 365u: goto L_002039A0;
    case 366u: goto L_002039C0;
    case 367u: goto L_002039D0;
    case 368u: goto L_002039E0;
    case 369u: goto L_00203A10;
    case 370u: goto L_00203A20;
    case 371u: goto L_00203A2C;
    case 372u: goto L_00203A44;
    case 373u: goto L_00203A64;
    case 374u: goto L_00203A78;
    case 375u: goto L_00203A80;
    case 376u: goto L_00203AB0;
    case 377u: goto L_00203AD4;
    case 378u: goto L_00203AE4;
    case 379u: goto L_00203B00;
    case 380u: goto L_00203B14;
    case 381u: goto L_00203B6C;
    case 382u: goto L_00203B90;
    case 383u: goto L_00203BF8;
    case 384u: goto L_00203C08;
    case 385u: goto L_00203C34;
    case 386u: goto L_00203C48;
    case 387u: goto L_00203C60;
    case 388u: goto L_00203C74;
    case 389u: goto L_00203C7C;
    case 390u: goto L_00203C8C;
    case 391u: goto L_00203CAC;
    case 392u: goto L_00203CC4;
    case 393u: goto L_00203CD4;
    case 394u: goto L_00203CF4;
    case 395u: goto L_00203D20;
    case 396u: goto L_00203D78;
    case 397u: goto L_00203D88;
    case 398u: goto L_00203DB0;
    case 399u: goto L_00203DC4;
    case 400u: goto L_00203E00;
    case 401u: goto L_00203E20;
    case 402u: goto L_00203E84;
    case 403u: goto L_00203EA0;
    case 404u: goto L_00203ECC;
    case 405u: goto L_00203F04;
    case 406u: goto L_00203F20;
    case 407u: goto L_00203F3C;
    case 408u: goto L_00203FA0;
    case 409u: goto L_00203FC4;
    default: bad_entry(c, 0x00200000u); return;
    }
L_00200000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 2;
L_00200008:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200014u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00200014u) [[unlikely]] return; }
L_00200014:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200020u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 41u, depth + 1u); else { c.pc = 0x001FC510u; return; } if (c.pc != 0x00200020u) [[unlikely]] return; }
L_00200020:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_00200030; }
L_00200028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00200034; } }
L_00200030:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00200034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00200040:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
    c.pc = 0x00200044u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00200050:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 3;
L_0020005C:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020006Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x0020006Cu) [[unlikely]] return; }
L_0020006C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200078u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 44u, depth + 1u); else { c.pc = 0x001FC580u; return; } if (c.pc != 0x00200078u) [[unlikely]] return; }
L_00200078:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[29].w[0] + 60u), c.r[3].w[0]);  goto L_00200094; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 4;
L_00200094:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002000A0; }
    goto L_0020009C;
L_00200098:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020009C:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_002000A0:
    c.r[2].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 60u)));  goto L_00200124; }
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002000BCu); set32(c.r[6], 0u + 23u);  if (depth < kMaxDepth) unit_0021(c, 339u, depth + 1u); else { c.pc = 0x001A7C80u; return; } if (c.pc != 0x002000BCu) [[unlikely]] return; }
L_002000BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_002000E4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002000E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002000E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002000E0u) [[unlikely]] return; }
    goto L_002000E0;
L_002000DC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002000E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_002000E4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_002000FC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 4;
L_002000FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_00200120; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00200120; } }
L_00200114:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200120u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00200120u) [[unlikely]] return; }
    goto L_00200120;
L_0020011C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00200120:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_00200124:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_0020013C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0020013C:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00200164; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00200160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200160u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00200160u) [[unlikely]] return; }
    goto L_00200160;
L_0020015C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00200160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00200164:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00200180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200194u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00200194u) [[unlikely]] return; }
L_00200194:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00200198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002001A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 45u, depth + 1u); else { c.pc = 0x001FC590u; return; } if (c.pc != 0x002001A0u) [[unlikely]] return; }
    goto L_002001A0;
L_0020019C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002001A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002001B0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 36u);
    c.budget -= 4;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00182350u | kUnwind; return; } [[clang::musttail]] return unit_0018(c, 176u, depth); }
L_002001C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002001E0u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0038(c, 8u, depth + 1u); else { c.pc = 0x00200050u; return; } if (c.pc != 0x002001E0u) [[unlikely]] return; }
    goto L_002001E0;
L_002001DC:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 1;
L_002001E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002001E8u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002001E8u) [[unlikely]] return; }
    goto L_002001E8;
L_002001E4:
    c.budget -= 1;
L_002001E8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002001F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 45u, depth + 1u); else { c.pc = 0x001FC590u; return; } if (c.pc != 0x002001F4u) [[unlikely]] return; }
L_002001F4:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002002F4; } }
L_00200200:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_0020020C; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0020020C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200214u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x00200214u) [[unlikely]] return; }
L_00200214:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0020021C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  goto L_002002F0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_00200260; }
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00200328; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00200254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200254u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00200254u) [[unlikely]] return; }
L_00200254:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00200328; } }
L_00200260:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0020026C; }
    goto L_00200268;
L_00200264:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00200268:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_0020026C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002002EC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200280u); set32(c.r[4], c.r[4].w[0] + 27757u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00200280u) [[unlikely]] return; }
L_00200280:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00200294; } }
L_00200290:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00200294:
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00200290u | kUnwind; return; } goto L_00200290; } }
    set32(c.r[2], c.r[3].w[0] + 36u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002002BCu); set32(c.r[6], c.r[2].w[0] - c.r[5].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002002BCu) [[unlikely]] return; }
L_002002BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00200328; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002002E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002002E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002002E0u) [[unlikely]] return; }
L_002002E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00200328; } }
L_002002EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_002002F0:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002002F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00200200u | kUnwind; return; } goto L_00200200; }
L_00200300:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00200328; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00200324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200324u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00200324u) [[unlikely]] return; }
L_00200324:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00200328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00200340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0])));  if (t) { goto L_0020034C; } }
L_00200348:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0020034C:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00200348u | kUnwind; return; } goto L_00200348; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00200370:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_00200390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002003DC; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002003C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002003C0u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002003C0u) [[unlikely]] return; }
L_002003C0:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 2;
L_002003C8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002003E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002003DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002003DCu) [[unlikely]] return; }
    goto L_002003DC;
L_002003D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002003DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002003E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00200400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020042C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200428u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00200428u) [[unlikely]] return; }
L_00200428:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0020042C:
    c.budget -= 2;
    if (c.r[16].sd[0] > 0) { set32(c.r[2], c.r[16].w[0] + 7u);  goto L_00200440; }
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_00200470; } }
L_00200440:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_00200454; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00200454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020045Cu); st32((c.r[17].w[0] + 8u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0020045Cu) [[unlikely]] return; }
L_0020045C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200470u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00200470u) [[unlikely]] return; }
L_00200470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00200490:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0020052C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));  goto L_002004B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020052C; } }
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.budget -= 1;
L_002004B4:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { c.r[7].d[0] = c.r[5].d[0] & 7ull;  goto L_002004C8; }
    set32(c.r[3], c.r[5].w[0] + 7u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[7].d[0] = c.r[5].d[0] & 7ull;
    c.budget -= 3;
L_002004C8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002004DC; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002004DC; } }
    set32(c.r[7], c.r[7].w[0] - 8u);
    c.budget -= 1;
L_002004DC:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0020050C; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[7].w[0] & 31u));
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020052C; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_0020050C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[7].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0020052C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00200540:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002005A4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));  goto L_00200564; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002005A4; } }
L_00200564:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_00200578; }
    set32(c.r[2], c.r[5].w[0] + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_00200578:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; c.r[3].d[0] = c.r[5].d[0] & 7ull;  if (t) { goto L_00200594; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00200598; }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_00200594:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00200598:
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002005A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002005B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002005DC; }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002005D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002005D8u) [[unlikely]] return; }
L_002005D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002005DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002005F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_00200610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 16u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[16].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[1].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00200650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002006B0; } }
L_00200650:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200660u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00200660u) [[unlikely]] return; }
L_00200660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52410000u);
    set32(c.r[3], c.r[16].w[0] - 16u);
    c.r[4].d[0] = c.r[2].d[0] | 16979ull;
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002006ACu); set32(c.r[4], c.r[3].w[0] + 8u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002006ACu) [[unlikely]] return; }
L_002006AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002006B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002006D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 3;
L_002006DC:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00200704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200700u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00200700u) [[unlikely]] return; }
L_00200700:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00200704:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00200748; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16722ull;
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
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0020075C; }
L_00200748:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200754u); set32(c.r[4], c.r[4].w[0] + 27728u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00200754u) [[unlikely]] return; }
L_00200754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00200798; } }
L_0020075C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    if (c.r[2].sd[0] > 0) { st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  goto L_00200774; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00200798; } }
L_00200774:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200780u); st32((c.r[17].w[0] + 8u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00200780u) [[unlikely]] return; }
L_00200780:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 8u);
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200794u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00200794u) [[unlikely]] return; }
L_00200794:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00200798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002007B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].d[0] = c.r[2].d[0] | 16706ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46410000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[7].d[0] = c.r[2].d[0] | 21831ull;
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[6], c.r[6].w[0] + 16376u);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32668u));
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    set32(c.r[6], 0u + 2u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 24u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200854u); st32((c.r[4].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 98u, depth + 1u); else { c.pc = 0x00200CD0u; return; } if (c.pc != 0x00200854u) [[unlikely]] return; }
L_00200854:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00200870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002008D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 16376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020089Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 79u, depth + 1u); else { c.pc = 0x00200940u; return; } if (c.pc != 0x0020089Cu) [[unlikely]] return; }
L_0020089C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_002008C0; }
    goto L_002008A4;
L_002008A0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_002008A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_002008C0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002008D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002008D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002008D4u) [[unlikely]] return; }
L_002008D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002008D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002008F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00200910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00200930; } }
L_00200910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200918u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00200918u) [[unlikely]] return; }
L_00200918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00200928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00200930; } }
L_00200928:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00200930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00200940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), 0u);  goto L_0020096C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200964u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00200964u) [[unlikely]] return; }
L_00200964:
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 2;
L_0020096C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00200990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002009BC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002009B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002009B8u);  if (depth < kMaxDepth) unit_0038(c, 86u, depth + 1u); else { c.pc = 0x00200A20u; return; } if (c.pc != 0x002009B8u) [[unlikely]] return; }
L_002009B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002009BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002009D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00200A10; } }
    goto L_002009E4;
L_002009E0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002009E4:
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00200A14; }
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00200A10; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00200A10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200A10u); set32(c.r[5], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 154u, depth + 1u); else { c.pc = 0x00161600u; return; } if (c.pc != 0x00200A10u) [[unlikely]] return; }
L_00200A10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00200A14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00200A20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00200A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00200CA0; } }
L_00200A58:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 224u);  goto L_00200A74; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200A70u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x00200A70u) [[unlikely]] return; }
L_00200A70:
    set32(c.r[4], c.r[16].w[0] + 224u);
    c.budget -= 1;
L_00200A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200A7Cu); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00200A7Cu) [[unlikely]] return; }
L_00200A7C:
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.f[0] ^ fp::kSign;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = c.f[0];  goto L_00200AA0; }
L_00200AA0:
    st32((c.r[19].w[0] + 72u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[19].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], ld32((c.r[19].w[0] + 64u)));  goto L_00200AC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200AC4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 77u, depth + 1u); else { c.pc = 0x002008F0u; return; } if (c.pc != 0x00200AC4u) [[unlikely]] return; }
L_00200AC4:
    set32(c.r[8], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 1;
L_00200AC8:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { goto L_00200B6C; } }
L_00200ADC:
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 90u));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[6].d[0]) { c.f[0] = ld32((c.r[19].w[0] + 40u));  goto L_00200B50; }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[5].d[0]) { c.f[0] = ld32((c.r[19].w[0] + 40u));  goto L_00200B3C; }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[4].d[0]) { c.f[0] = ld32((c.r[19].w[0] + 40u));  goto L_00200B24; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[19].w[0] + 40u));  goto L_00200B14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + 1u);  if (t) { goto L_00200B64; } }
L_00200B14:
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 12u), c.f[0]);  if (t) { goto L_00200B60; } }
L_00200B24:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 12u), c.f[0]);  if (t) { goto L_00200B60; } }
L_00200B3C:
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 12u), c.f[0]);  if (t) { goto L_00200B60; } }
L_00200B50:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    st32((c.r[8].w[0] + 12u), c.f[0]);
    c.budget -= 4;
L_00200B60:
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00200B64:
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_00200B6C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 91u));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[19].w[0] + 36u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00200ADCu | kUnwind; return; } goto L_00200ADC; }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 88u));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[19].w[0] + 90u));
    set32(c.r[17], ld32((c.r[19].w[0] + 64u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00200C2C; } }
L_00200B9C:
    mmi::div(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200BACu); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x00200BACu) [[unlikely]] return; }
L_00200BAC:
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200BBCu); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x00200BBCu) [[unlikely]] return; }
L_00200BBC:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00200C1C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 90u));
    mmi::div(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200BF4u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x00200BF4u) [[unlikely]] return; }
L_00200BF4:
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200C04u); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x00200C04u) [[unlikely]] return; }
L_00200C04:
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 6;
L_00200C1C:
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
L_00200C2C:
    c.r[20].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0] + 90u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00200B9Cu | kUnwind; return; } goto L_00200B9C; }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 89u));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[19].w[0] + 90u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00200C8C; } }
L_00200C54:
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200C64u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x00200C64u) [[unlikely]] return; }
L_00200C64:
    c.f[2] = ld32((c.r[19].w[0] + 76u));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.f[3] = ld32((c.r[19].w[0] + 80u));
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 10;
L_00200C8C:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0] + 90u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00200C54u | kUnwind; return; } goto L_00200C54; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00200CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00200CD0:
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
    c.r[3].d[0] = ld8((c.r[4].w[0] + 88u));
    c.r[16].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[16].d[0]; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00200D28; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 89u));
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00200D2C; }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 90u));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00200D68; }
L_00200D28:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00200D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200D34u);  if (depth < kMaxDepth) unit_0038(c, 79u, depth + 1u); else { c.pc = 0x00200940u; return; } if (c.pc != 0x00200D34u) [[unlikely]] return; }
L_00200D34:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    st8((c.r[20].w[0] + 88u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st8((c.r[20].w[0] + 89u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[20].w[0] + 90u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[20].w[0] + 91u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 91u));
    st32((c.r[20].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 13;
L_00200D68:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00200D90:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[10], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_00200DE0; } }
L_00200DAC:
    set32(c.r[2], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_00200DE0; }
    set32(c.r[2], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00200DDC; } }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] - 1u);  goto L_00200DDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00200DF0; } }
L_00200DDC:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_00200DE0:
    c.r[2].d[0] = c.r[11].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], c.r[11].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00200DACu | kUnwind; return; } goto L_00200DAC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00200DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00200E00:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 20u)));  goto L_00200E18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00200E38; } }
L_00200E18:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00200E38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_00200E38; } }
L_00200E38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00200E40:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 24u)));  goto L_00200E58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00200E68; } }
L_00200E58:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00200E68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00200E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00200ED8; } }
L_00200E84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x454F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17987ull;
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
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00200EE4; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] - 1u);  goto L_00200ECC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00200EE4; } }
L_00200ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200ED4u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x00200ED4u) [[unlikely]] return; }
L_00200ED4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00200ED8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00200E84u | kUnwind; return; } goto L_00200E84; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00200EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00200F00:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 8u)));  goto L_00200F10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00200FA0; } }
L_00200F10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x454F0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17987ull;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 15u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];  if (t) { goto L_00200F6C; } }
L_00200F38:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_00200FA0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00200F60; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00200F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { goto L_00200F6C; } }
L_00200F60:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00200FA0; } }
L_00200F6C:
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[5].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[3], c.r[8].w[0] >> 8);
    c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[8].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00200F38u | kUnwind; return; } goto L_00200F38; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00200FA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00200FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00200FE8; } }
L_00200FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200FE4u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x00200FE4u) [[unlikely]] return; }
L_00200FE4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00200FE8:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00201008; }
    c.r[2].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00200FDCu | kUnwind; return; } goto L_00200FDC; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00201008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 2;
L_00201010:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00201020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201034u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00201034u) [[unlikely]] return; }
L_00201034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 16464u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30492u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 52u), 0u);  goto L_00201054; }
    st32((c.r[28].w[0] - 30492u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 2;
L_00201054:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 3;
L_00201060:
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00201090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020112C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 16464u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30492u)));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[17], ld32((c.r[16].w[0] + 64u)));  goto L_002010E8; }
    st32((c.r[28].w[0] - 30492u), 0u);
    set32(c.r[17], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002010E8; } }
L_002010D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002010E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x002010E4u) [[unlikely]] return; }
    goto L_002010E4;
L_002010E0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002010E4:
    set32(c.r[17], ld32((c.r[17].w[0] + 324u)));
    c.budget -= 1;
L_002010E8:
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002010D8u | kUnwind; return; } goto L_002010D8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0020110C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x00201108u) [[unlikely]] return; }
L_00201108:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0020110C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201114u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00201114u) [[unlikely]] return; }
L_00201114:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00201130; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020112Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0020112Cu) [[unlikely]] return; }
L_0020112C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00201130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00201150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_00201164:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  goto L_00201304; }
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00201300; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020118Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 241u, depth + 1u); else { c.pc = 0x002024D0u; return; } if (c.pc != 0x0020118Cu) [[unlikely]] return; }
L_0020118C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 64u)));  goto L_002011A8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002011A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 244u, depth + 1u); else { c.pc = 0x00202580u; return; } if (c.pc != 0x002011A0u) [[unlikely]] return; }
L_002011A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201300; } }
L_002011A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002011B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 241u, depth + 1u); else { c.pc = 0x002024D0u; return; } if (c.pc != 0x002011B8u) [[unlikely]] return; }
L_002011B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00201244; } }
L_002011C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002011C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 252u, depth + 1u); else { c.pc = 0x002026E0u; return; } if (c.pc != 0x002011C8u) [[unlikely]] return; }
L_002011C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 64u)));  goto L_002011E4; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002011DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 244u, depth + 1u); else { c.pc = 0x00202580u; return; } if (c.pc != 0x002011DCu) [[unlikely]] return; }
L_002011DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201300; } }
L_002011E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002011F4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 241u, depth + 1u); else { c.pc = 0x002024D0u; return; } if (c.pc != 0x002011F4u) [[unlikely]] return; }
L_002011F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 324u)));  goto L_00201230; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201208u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x00201208u) [[unlikely]] return; }
L_00201208:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201214u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 250u, depth + 1u); else { c.pc = 0x00202680u; return; } if (c.pc != 0x00201214u) [[unlikely]] return; }
L_00201214:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201228u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 241u, depth + 1u); else { c.pc = 0x002024D0u; return; } if (c.pc != 0x00201228u) [[unlikely]] return; }
L_00201228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00201244; } }
L_00201230:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201240u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 241u, depth + 1u); else { c.pc = 0x002024D0u; return; } if (c.pc != 0x00201240u) [[unlikely]] return; }
L_00201240:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00201244:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002011C0u | kUnwind; return; } goto L_002011C0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201260u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 241u, depth + 1u); else { c.pc = 0x002024D0u; return; } if (c.pc != 0x00201260u) [[unlikely]] return; }
L_00201260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002012EC; } }
L_00201268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201270u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 252u, depth + 1u); else { c.pc = 0x002026E0u; return; } if (c.pc != 0x00201270u) [[unlikely]] return; }
L_00201270:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 64u)));  goto L_0020128C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201284u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 244u, depth + 1u); else { c.pc = 0x00202580u; return; } if (c.pc != 0x00201284u) [[unlikely]] return; }
L_00201284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201300; } }
L_0020128C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020129Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 241u, depth + 1u); else { c.pc = 0x002024D0u; return; } if (c.pc != 0x0020129Cu) [[unlikely]] return; }
L_0020129C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 324u)));  goto L_002012D8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002012B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x002012B0u) [[unlikely]] return; }
L_002012B0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002012BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 250u, depth + 1u); else { c.pc = 0x00202680u; return; } if (c.pc != 0x002012BCu) [[unlikely]] return; }
L_002012BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002012D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 241u, depth + 1u); else { c.pc = 0x002024D0u; return; } if (c.pc != 0x002012D0u) [[unlikely]] return; }
L_002012D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002012EC; } }
L_002012D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002012E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 241u, depth + 1u); else { c.pc = 0x002024D0u; return; } if (c.pc != 0x002012E8u) [[unlikely]] return; }
L_002012E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002012EC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00201268u | kUnwind; return; } goto L_00201268; }
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201300u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 244u, depth + 1u); else { c.pc = 0x00202580u; return; } if (c.pc != 0x00201300u) [[unlikely]] return; }
L_00201300:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_00201304:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002013C0; }
    set32(c.r[4], ld32((c.r[5].w[0] + 316u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00201394; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00201384; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00201374; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00201364; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00201354; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (t) { goto L_002013A0; } }
L_00201354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020135Cu);  if (depth < kMaxDepth) unit_0038(c, 153u, depth + 1u); else { c.pc = 0x00201420u; return; } if (c.pc != 0x0020135Cu) [[unlikely]] return; }
L_0020135C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020139C; } }
L_00201364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020136Cu);  if (depth < kMaxDepth) unit_0038(c, 203u, depth + 1u); else { c.pc = 0x00201D70u; return; } if (c.pc != 0x0020136Cu) [[unlikely]] return; }
L_0020136C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020139C; } }
L_00201374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020137Cu);  if (depth < kMaxDepth) unit_0038(c, 213u, depth + 1u); else { c.pc = 0x00201F30u; return; } if (c.pc != 0x0020137Cu) [[unlikely]] return; }
L_0020137C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020139C; } }
L_00201384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020138Cu);  if (depth < kMaxDepth) unit_0038(c, 230u, depth + 1u); else { c.pc = 0x00202290u; return; } if (c.pc != 0x0020138Cu) [[unlikely]] return; }
L_0020138C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020139C; } }
L_00201394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020139Cu);  if (depth < kMaxDepth) unit_0038(c, 174u, depth + 1u); else { c.pc = 0x002017F0u; return; } if (c.pc != 0x0020139Cu) [[unlikely]] return; }
L_0020139C:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_002013A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002013BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00201164u | kUnwind; return; } goto L_00201164; } }
L_002013BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002013C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002013D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002013F8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002013F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002013F8u) [[unlikely]] return; }
L_002013F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00201408; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00201408:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00201420:
    set32(c.r[29], c.r[29].w[0] - 368u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[5].w[0] + 320u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002016DC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 60u)));  goto L_002014B8; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 52u)));  goto L_0020146C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00201778; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 1;
L_0020146C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00201484; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020147Cu);  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x0020147Cu) [[unlikely]] return; }
L_0020147C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201774; } }
L_00201484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020148Cu);  if (depth < kMaxDepth) unit_0038(c, 252u, depth + 1u); else { c.pc = 0x002026E0u; return; } if (c.pc != 0x0020148Cu) [[unlikely]] return; }
L_0020148C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 320u)));  goto L_002014AC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002014A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 247u, depth + 1u); else { c.pc = 0x00202610u; return; } if (c.pc != 0x002014A0u) [[unlikely]] return; }
L_002014A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201774; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 320u)));
    c.budget -= 1;
L_002014AC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
L_002014B8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_002014D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 52u)));  if (t) { goto L_0020152C; } }
L_002014C8:
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 2;
L_002014D0:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002014C8u | kUnwind; return; } goto L_002014C8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_00201504; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 280u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0020150C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00201504:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0020150C:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], c.r[5].w[0] + 280u);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] + 15u);  goto L_00201530; }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0020152C:
    set32(c.r[3], c.r[5].w[0] + 15u);
    c.budget -= 1;
L_00201530:
    set32(c.r[2], 0u - 16u);
    c.r[16].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[5], c.r[17].w[0] + 60u);
    set32(c.r[6], 0u + 256u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020155Cu); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0020155Cu) [[unlikely]] return; }
L_0020155C:
    set32(c.r[5], ld32((c.r[17].w[0] + 332u)));
    set32(c.r[2], c.r[16].w[0] + 280u);
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    if (c.r[3].sd[0] > 0) { set32(c.r[2], c.r[5].w[0] - c.r[3].w[0]);  goto L_00201594; }
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), 0u);  if (t) { goto L_00201600; } }
    set32(c.r[2], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_00201594:
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[16].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_00201600; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002015BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x002015BCu) [[unlikely]] return; }
L_002015BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201774; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002015C8:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002015D8u); set32(c.r[8], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0038(c, 235u, depth + 1u); else { c.pc = 0x00202330u; return; } if (c.pc != 0x002015D8u) [[unlikely]] return; }
L_002015D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 60u)));  goto L_00201610; }
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 60u), 0u);  goto L_00201600; }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00201600; } }
    st32((c.r[18].w[0] + 60u), 0u);
    c.budget -= 1;
L_00201600:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002015C8u | kUnwind; return; } goto L_002015C8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 1;
L_00201610:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00201628; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[16].w[0]);  if (t) { goto L_00201644; } }
L_00201620:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_00201628:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00201620u | kUnwind; return; } goto L_00201620; } }
    set32(c.r[2], c.r[16].w[0] - c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00201644:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201654u); set32(c.r[6], 0u + 280u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00201654u) [[unlikely]] return; }
L_00201654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020165Cu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0020165Cu) [[unlikely]] return; }
L_0020165C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 336u), c.r[4].w[0]);  goto L_00201680; }
    set32(c.r[6], ld32((c.r[17].w[0] + 328u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201678u); set32(c.r[5], c.r[16].w[0] + 280u);  if (depth < kMaxDepth) unit_003A(c, 261u, depth + 1u); else { c.pc = 0x0020A750u; return; } if (c.pc != 0x00201678u) [[unlikely]] return; }
L_00201678:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 336u), c.r[4].w[0]);
    c.budget -= 2;
L_00201680:
    set32(c.r[18], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 320u)));  goto L_002016D0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], 0u + 44u);
    set32(c.r[3], ld32((c.r[17].w[0] + 328u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[19], c.r[16].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002016A8u); set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002016A8u) [[unlikely]] return; }
L_002016A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 340u), c.r[4].w[0]);  goto L_002016CC; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002016C4u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 261u, depth + 1u); else { c.pc = 0x0020A750u; return; } if (c.pc != 0x002016C4u) [[unlikely]] return; }
L_002016C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 340u), c.r[4].w[0]);
    c.budget -= 2;
L_002016CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 320u)));
    c.budget -= 1;
L_002016D0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 320u), c.r[3].w[0]);  if (t) { goto L_00201774; } }
L_002016DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 336u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 340u)));  goto L_00201700; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00201774; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 340u)));
    c.budget -= 1;
L_00201700:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020171C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00201774; } }
L_0020171C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 340u)));  goto L_00201744; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 336u), 0u);  goto L_00201740; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020173Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020173Cu) [[unlikely]] return; }
L_0020173C:
    st32((c.r[17].w[0] + 336u), 0u);
    c.budget -= 1;
L_00201740:
    set32(c.r[4], ld32((c.r[17].w[0] + 340u)));
    c.budget -= 1;
L_00201744:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0020176C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 340u), 0u);  goto L_00201768; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00201764u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00201764u) [[unlikely]] return; }
L_00201764:
    st32((c.r[17].w[0] + 340u), 0u);
    c.budget -= 1;
L_00201768:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0020176C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201774u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 247u, depth + 1u); else { c.pc = 0x00202610u; return; } if (c.pc != 0x00201774u) [[unlikely]] return; }
L_00201774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00201778:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_00201790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002017D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002017C0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 347u, depth + 1u); else { c.pc = 0x001B62E0u; return; } if (c.pc != 0x002017C0u) [[unlikely]] return; }
L_002017C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002017DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002017D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002017D8u) [[unlikely]] return; }
L_002017D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002017DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002017F0:
    set32(c.r[29], c.r[29].w[0] - 416u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[5].w[0] + 320u)));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00201CA4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[19], ld32((c.r[21].w[0] + 60u)));  goto L_002018C4; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00201844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00201D40; } }
L_00201844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020184Cu);  if (depth < kMaxDepth) unit_0038(c, 252u, depth + 1u); else { c.pc = 0x002026E0u; return; } if (c.pc != 0x0020184Cu) [[unlikely]] return; }
L_0020184C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 320u)));  goto L_0020186C; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201860u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x00201860u) [[unlikely]] return; }
L_00201860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201D3C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 320u)));
    c.budget -= 1;
L_0020186C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002018C4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 1;
L_00201884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_002018AC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_002018AC; } }
    set32(c.r[4], c.r[19].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002018A4u); set32(c.r[5], c.r[20].w[0] + 60u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x002018A4u) [[unlikely]] return; }
L_002018A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002018CC; } }
L_002018AC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);  goto L_002018C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002018C4; } }
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002018C4:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00201884u | kUnwind; return; } goto L_00201884; }
L_002018CC:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 60u)));  goto L_002018EC; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002018E0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x002018E0u) [[unlikely]] return; }
L_002018E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201D3C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 1;
L_002018EC:
    set32(c.r[3], c.r[19].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00201900; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00201900:
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0020191C; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00201938; } }
L_0020191C:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00201938:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_00201974; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201964u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x00201964u) [[unlikely]] return; }
L_00201964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201D3C; } }
L_0020196C:
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 2;
L_00201974:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020196Cu | kUnwind; return; } goto L_0020196C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_002019A8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 280u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002019B0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_002019A8:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002019B0:
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[3], c.r[6].w[0] + 280u);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[6].w[0] + 15u);  goto L_002019D0; }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] + 15u);
    c.budget -= 2;
L_002019D0:
    set32(c.r[2], 0u - 16u);
    c.r[16].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[5], c.r[19].w[0] + 24u);
    set32(c.r[6], 0u + 256u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002019FCu); st32((c.r[29].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002019FCu) [[unlikely]] return; }
L_002019FC:
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] + 280u);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 11;
    if (c.r[3].sd[0] > 0) { set32(c.r[2], c.r[5].w[0] - c.r[3].w[0]);  goto L_00201A3C; }
    st32((c.r[29].w[0] + 132u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 136u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 140u), 0u);  if (t) { goto L_00201AA0; } }
    set32(c.r[2], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_00201A3C:
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[16].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 140u), c.r[3].w[0]);  if (t) { goto L_00201A6C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A64u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x00201A64u) [[unlikely]] return; }
L_00201A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201D3C; } }
L_00201A6C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A84u); set32(c.r[8], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0038(c, 235u, depth + 1u); else { c.pc = 0x00202330u; return; } if (c.pc != 0x00201A84u) [[unlikely]] return; }
L_00201A84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[21].w[0] + 60u)));  goto L_00201AA4; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A98u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x00201A98u) [[unlikely]] return; }
L_00201A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201D3C; } }
L_00201AA0:
    set32(c.r[18], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 1;
L_00201AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00201B28; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00201AB0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[18].w[0] + c.r[2].w[0]);  goto L_00201AC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00201AC4; } }
    set32(c.r[17], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00201AC4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201ADCu); set32(c.r[8], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0038(c, 235u, depth + 1u); else { c.pc = 0x00202330u; return; } if (c.pc != 0x00201ADCu) [[unlikely]] return; }
L_00201ADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00201AEC; } }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[19].d[0]) { c.r[22].d[0] = c.r[18].d[0] + 0ull;  goto L_00201B24; }
L_00201AEC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_00201B00; } }
    st32((c.r[21].w[0] + 60u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00201B28; } }
L_00201B00:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] - c.r[22].w[0]);  goto L_00201B14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), 0u);  if (t) { goto L_00201B18; } }
    set32(c.r[2], c.r[17].w[0] - c.r[22].w[0]);
    c.budget -= 1;
L_00201B14:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00201B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00201B28; } }
    c.r[22].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00201B24:
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00201B28:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00201AB0u | kUnwind; return; } goto L_00201AB0; }
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00201B4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 60u), c.r[16].w[0]);  if (t) { goto L_00201B68; } }
L_00201B44:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_00201B4C:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00201B44u | kUnwind; return; } goto L_00201B44; } }
    set32(c.r[2], c.r[16].w[0] - c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00201B68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201B78u); set32(c.r[6], 0u + 280u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00201B78u) [[unlikely]] return; }
L_00201B78:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_00201BC0; }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00201BBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201B98u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00201B98u) [[unlikely]] return; }
L_00201B98:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 336u), c.r[4].w[0]);  goto L_00201BBC; }
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[16].w[0] + 280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201BB4u); set32(c.r[6], c.r[19].w[0] + 280u);  if (depth < kMaxDepth) unit_003A(c, 261u, depth + 1u); else { c.pc = 0x0020A750u; return; } if (c.pc != 0x00201BB4u) [[unlikely]] return; }
L_00201BB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 336u), c.r[4].w[0]);
    c.budget -= 2;
L_00201BBC:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00201BC0:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  goto L_00201C2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201BD0u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00201BD0u) [[unlikely]] return; }
L_00201BD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 336u), c.r[2].w[0]);  goto L_00201BF0; }
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201BECu); set32(c.r[6], c.r[19].w[0] + 280u);  if (depth < kMaxDepth) unit_003A(c, 261u, depth + 1u); else { c.pc = 0x0020A750u; return; } if (c.pc != 0x00201BECu) [[unlikely]] return; }
L_00201BEC:
    st32((c.r[20].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 1;
L_00201BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201BF8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00201BF8u) [[unlikely]] return; }
L_00201BF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 340u), c.r[4].w[0]);  goto L_00201C28; }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[19].w[0] + 280u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201C20u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 261u, depth + 1u); else { c.pc = 0x0020A750u; return; } if (c.pc != 0x00201C20u) [[unlikely]] return; }
L_00201C20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 340u), c.r[4].w[0]);
    c.budget -= 2;
L_00201C28:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_00201C2C:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[20].w[0] + 320u)));  goto L_00201C98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201C3Cu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00201C3Cu) [[unlikely]] return; }
L_00201C3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 336u), c.r[2].w[0]);  goto L_00201C5C; }
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201C58u); set32(c.r[6], c.r[19].w[0] + 280u);  if (depth < kMaxDepth) unit_003A(c, 261u, depth + 1u); else { c.pc = 0x0020A750u; return; } if (c.pc != 0x00201C58u) [[unlikely]] return; }
L_00201C58:
    st32((c.r[20].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 1;
L_00201C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201C64u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00201C64u) [[unlikely]] return; }
L_00201C64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 340u), c.r[4].w[0]);  goto L_00201C94; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], c.r[16].w[0] + 280u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201C8Cu); set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003A(c, 261u, depth + 1u); else { c.pc = 0x0020A750u; return; } if (c.pc != 0x00201C8Cu) [[unlikely]] return; }
L_00201C8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 340u), c.r[4].w[0]);
    c.budget -= 2;
L_00201C94:
    set32(c.r[3], ld32((c.r[20].w[0] + 320u)));
    c.budget -= 1;
L_00201C98:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 320u), c.r[3].w[0]);  if (t) { goto L_00201D3C; } }
L_00201CA4:
    set32(c.r[4], ld32((c.r[20].w[0] + 336u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 340u)));  goto L_00201CC8; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00201D3C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 340u)));
    c.budget -= 1;
L_00201CC8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00201CE4; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00201D3C; } }
L_00201CE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 340u)));  goto L_00201D0C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 336u), 0u);  goto L_00201D08; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00201D04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00201D04u) [[unlikely]] return; }
L_00201D04:
    st32((c.r[20].w[0] + 336u), 0u);
    c.budget -= 1;
L_00201D08:
    set32(c.r[4], ld32((c.r[20].w[0] + 340u)));
    c.budget -= 1;
L_00201D0C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00201D34; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 340u), 0u);  goto L_00201D30; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00201D2Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00201D2Cu) [[unlikely]] return; }
L_00201D2C:
    st32((c.r[20].w[0] + 340u), 0u);
    c.budget -= 1;
L_00201D30:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00201D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201D3Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 247u, depth + 1u); else { c.pc = 0x00202610u; return; } if (c.pc != 0x00201D3Cu) [[unlikely]] return; }
L_00201D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00201D40:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00201D70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[5].w[0] + 320u)));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00201E70; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00201DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00201F0C; } }
L_00201DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201DB8u);  if (depth < kMaxDepth) unit_0038(c, 252u, depth + 1u); else { c.pc = 0x002026E0u; return; } if (c.pc != 0x00201DB8u) [[unlikely]] return; }
L_00201DB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  goto L_00201DD8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201DD0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x00201DD0u) [[unlikely]] return; }
L_00201DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201F08; } }
L_00201DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201DE0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00201DE0u) [[unlikely]] return; }
L_00201DE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 336u), c.r[4].w[0]);  goto L_00201E04; }
    set32(c.r[5], ld32((c.r[17].w[0] + 328u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201DFCu); set32(c.r[6], c.r[16].w[0] + 280u);  if (depth < kMaxDepth) unit_003A(c, 261u, depth + 1u); else { c.pc = 0x0020A750u; return; } if (c.pc != 0x00201DFCu) [[unlikely]] return; }
L_00201DFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 336u), c.r[4].w[0]);
    c.budget -= 2;
L_00201E04:
    set32(c.r[18], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00201E54; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], 0u + 44u);
    set32(c.r[5], ld32((c.r[17].w[0] + 328u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201E2Cu); set32(c.r[20], c.r[5].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00201E2Cu) [[unlikely]] return; }
L_00201E2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 340u), c.r[4].w[0]);  goto L_00201E50; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201E48u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 261u, depth + 1u); else { c.pc = 0x0020A750u; return; } if (c.pc != 0x00201E48u) [[unlikely]] return; }
L_00201E48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 340u), c.r[4].w[0]);
    c.budget -= 2;
L_00201E50:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00201E54:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 332u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 320u), c.r[3].w[0]);  if (t) { goto L_00201F08; } }
L_00201E70:
    set32(c.r[4], ld32((c.r[17].w[0] + 336u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 340u)));  goto L_00201E94; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00201F08; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 340u)));
    c.budget -= 1;
L_00201E94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00201EB0; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00201F08; } }
L_00201EB0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 340u)));  goto L_00201ED8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 336u), 0u);  goto L_00201ED4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00201ED0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00201ED0u) [[unlikely]] return; }
L_00201ED0:
    st32((c.r[17].w[0] + 336u), 0u);
    c.budget -= 1;
L_00201ED4:
    set32(c.r[4], ld32((c.r[17].w[0] + 340u)));
    c.budget -= 1;
L_00201ED8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00201F00; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 340u), 0u);  goto L_00201EFC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00201EF8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00201EF8u) [[unlikely]] return; }
L_00201EF8:
    st32((c.r[17].w[0] + 340u), 0u);
    c.budget -= 1;
L_00201EFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00201F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201F08u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 247u, depth + 1u); else { c.pc = 0x00202610u; return; } if (c.pc != 0x00201F08u) [[unlikely]] return; }
L_00201F08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00201F0C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00201F30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 11u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[5].w[0] + 320u)));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020220C; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_002020DC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 336u)));  goto L_00202084; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00202004; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[7], ld32((c.r[20].w[0] + 332u)));  goto L_00201F9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00202260; } }
L_00201F9C:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { st32((c.r[21].w[0] + 52u), 0u);  goto L_00201FB4; }
    set32(c.r[6], ld32((c.r[20].w[0] + 328u)));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 60u)));  goto L_00201FD0; }
    st32((c.r[21].w[0] + 52u), 0u);
    c.budget -= 1;
L_00201FB4:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[21].w[0] + 56u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201FC8u); st32((c.r[21].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0038(c, 247u, depth + 1u); else { c.pc = 0x00202610u; return; } if (c.pc != 0x00201FC8u) [[unlikely]] return; }
L_00201FC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020225C; } }
L_00201FD0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 56u)));  goto L_00201FF4; }
    st32((c.r[21].w[0] + 52u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 332u)));
    st32((c.r[21].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201FECu); st32((c.r[21].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0038(c, 247u, depth + 1u); else { c.pc = 0x00202610u; return; } if (c.pc != 0x00201FECu) [[unlikely]] return; }
L_00201FEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020225C; } }
L_00201FF4:
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002020D8; } }
L_00202000:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00202004:
    st32((c.r[20].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 328u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[21].w[0] + 60u)));  goto L_00202048; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202020u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00202020u) [[unlikely]] return; }
L_00202020:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 336u), c.r[4].w[0]);  goto L_00202044; }
    set32(c.r[6], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 1;
L_00202030:
    set32(c.r[7], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020203Cu); set32(c.r[5], ld32((c.r[20].w[0] + 328u)));  if (depth < kMaxDepth) unit_003A(c, 261u, depth + 1u); else { c.pc = 0x0020A750u; return; } if (c.pc != 0x0020203Cu) [[unlikely]] return; }
L_0020203C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 336u), c.r[4].w[0]);
    c.budget -= 2;
L_00202044:
    set32(c.r[5], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 1;
L_00202048:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 328u)));  goto L_00202068; }
    set32(c.r[4], ld32((c.r[20].w[0] + 328u)));
    c.budget -= 1;
L_00202054:
    set32(c.r[3], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 328u)));
    c.budget -= 5;
L_00202068:
    st32((c.r[21].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 332u)));
    st32((c.r[21].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 336u)));
    c.budget -= 7;
L_00202084:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002020A0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020225C; } }
L_002020A0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002020C8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 336u), 0u);  goto L_002020C4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002020C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002020C0u) [[unlikely]] return; }
L_002020C0:
    st32((c.r[20].w[0] + 336u), 0u);
    c.budget -= 1;
L_002020C4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002020C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002020D0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 247u, depth + 1u); else { c.pc = 0x00202610u; return; } if (c.pc != 0x002020D0u) [[unlikely]] return; }
L_002020D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020225C; } }
L_002020D8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_002020DC:
    st32((c.r[20].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002020F0; } }
L_002020EC:
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002020F0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002020ECu | kUnwind; return; } goto L_002020EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[22], ld32((c.r[20].w[0] + 332u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], ld32((c.r[21].w[0] + 52u)));  if (t) { goto L_00202124; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 280u);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00202124:
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0020213C; }
    set32(c.r[19], c.r[4].w[0] - c.r[22].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0020213C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00202140:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0020214C; }
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0020214C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202160u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 240u, depth + 1u); else { c.pc = 0x00202460u; return; } if (c.pc != 0x00202160u) [[unlikely]] return; }
L_00202160:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = c.r[16].d[0] + 0ull;  goto L_00202190; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00202178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 60u), c.r[17].w[0]);  if (t) { goto L_00202188; } }
L_00202178:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0]), 0u);  goto L_00202188; }
    set32(c.r[3], c.r[17].w[0] - c.r[18].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00202188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00202194; } }
L_00202190:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00202194:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00202140u | kUnwind; return; } goto L_00202140; }
    set32(c.r[3], ld32((c.r[20].w[0] + 328u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 60u)));  goto L_002021D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002021B0u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002021B0u) [[unlikely]] return; }
L_002021B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 336u), c.r[4].w[0]);  goto L_002021D4; }
    set32(c.r[5], ld32((c.r[20].w[0] + 328u)));
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002021CCu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 261u, depth + 1u); else { c.pc = 0x0020A750u; return; } if (c.pc != 0x002021CCu) [[unlikely]] return; }
L_002021CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 336u), c.r[4].w[0]);
    c.budget -= 2;
L_002021D4:
    set32(c.r[4], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 1;
L_002021D8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 328u)));  goto L_002021F4; }
    set32(c.r[3], ld32((c.r[20].w[0] + 328u)));
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 328u)));
    c.budget -= 5;
L_002021F4:
    st32((c.r[21].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 332u)));
    st32((c.r[21].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 320u), c.r[3].w[0]);
    c.budget -= 6;
L_0020220C:
    set32(c.r[4], ld32((c.r[20].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0020222C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020225C; } }
L_0020222C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00202254; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 336u), 0u);  goto L_00202250; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020224Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020224Cu) [[unlikely]] return; }
L_0020224C:
    st32((c.r[20].w[0] + 336u), 0u);
    c.budget -= 1;
L_00202250:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00202254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020225Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 247u, depth + 1u); else { c.pc = 0x00202610u; return; } if (c.pc != 0x0020225Cu) [[unlikely]] return; }
L_0020225C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00202260:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00202290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002022ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 252u, depth + 1u); else { c.pc = 0x002026E0u; return; } if (c.pc != 0x002022ACu) [[unlikely]] return; }
L_002022AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002022D8; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002022D0u); st32((c.r[16].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 247u, depth + 1u); else { c.pc = 0x00202610u; return; } if (c.pc != 0x002022D0u) [[unlikely]] return; }
L_002022D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002022E4; } }
L_002022D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002022E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 246u, depth + 1u); else { c.pc = 0x002025E0u; return; } if (c.pc != 0x002022E0u) [[unlikely]] return; }
L_002022E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002022E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00202300:
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.r[1].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_00202318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020231C; } }
L_00202318:
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0020231C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00202330:
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
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[6], c.r[3].w[0] + 280u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202374u); set32(c.r[8], c.r[2].w[0] + 280u);  if (depth < kMaxDepth) unit_0038(c, 234u, depth + 1u); else { c.pc = 0x00202300u; return; } if (c.pc != 0x00202374u) [[unlikely]] return; }
L_00202374:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_00202384; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00202434; } }
L_00202384:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_002023BC; }
    set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002023A8u); set32(c.r[8], c.r[2].w[0] + 280u);  if (depth < kMaxDepth) unit_0038(c, 234u, depth + 1u); else { c.pc = 0x00202300u; return; } if (c.pc != 0x002023A8u) [[unlikely]] return; }
L_002023A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002023B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00202434; } }
L_002023B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_002023BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  goto L_002023F4; }
    set32(c.r[7], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002023E0u); set32(c.r[6], c.r[2].w[0] + 280u);  if (depth < kMaxDepth) unit_0038(c, 234u, depth + 1u); else { c.pc = 0x00202300u; return; } if (c.pc != 0x002023E0u) [[unlikely]] return; }
L_002023E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002023F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00202434; } }
L_002023F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_002023F4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00202434; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00202430; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202420u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 234u, depth + 1u); else { c.pc = 0x00202300u; return; } if (c.pc != 0x00202420u) [[unlikely]] return; }
L_00202420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00202430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00202434; } }
L_00202430:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00202434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00202460:
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[3], c.r[7].w[0] + 280u);
    c.r[1].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00202480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002024C4; } }
L_00202480:
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 12u)));  goto L_00202494; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002024C4; } }
L_00202494:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);  goto L_002024A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002024C4; } }
L_002024A4:
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002024BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002024C4; } }
L_002024BC:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_002024C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002024D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00202550; } }
L_002024F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_00202504; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 324u)));  goto L_00202550; }
L_00202504:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_00202514; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0020255C; } }
L_00202514:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020254C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020254C; } }
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020253Cu); set32(c.r[5], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x0020253Cu) [[unlikely]] return; }
L_0020253C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020254C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0020255C; } }
L_0020254C:
    set32(c.r[16], ld32((c.r[16].w[0] + 324u)));
    c.budget -= 1;
L_00202550:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002024F4u | kUnwind; return; } goto L_002024F4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020255C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00202580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002025C0; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002025C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002025B0u);  if (depth < kMaxDepth) unit_0038(c, 250u, depth + 1u); else { c.pc = 0x00202680u; return; } if (c.pc != 0x002025B0u) [[unlikely]] return; }
L_002025B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[16].w[0]);
    c.budget -= 4;
L_002025C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002025C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002025E0:
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[6].d[0] = c.r[6].d[0] << 33;
    c.r[6].d[0] = c.r[6].d[0] >> 33;
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_00202610:
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[6].d[0] = c.r[6].d[0] << 33;
    c.r[6].d[0] = c.r[6].d[0] >> 33;
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_00202640:
    set32(c.r[6], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 324u)));  goto L_0020265C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  if (t) { goto L_00202674; } }
L_00202654:
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 324u)));
    c.budget -= 2;
L_0020265C:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00202654u | kUnwind; return; } goto L_00202654; } }
    st32((c.r[6].w[0] + 324u), c.r[5].w[0]);
    c.budget -= 1;
L_00202674:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00202680:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 64u)));  goto L_00202694; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002026D4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 1;
L_00202694:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002026C4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_002026CC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 324u)));
    c.budget -= 1;
L_002026AC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[3].d[0] = c.r[2].d[0] + 0ull;  goto L_002026C4; }
    set32(c.r[2], ld32((c.r[5].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 324u), c.r[2].w[0]);  if (t) { goto L_002026CC; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002026C4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 324u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002026ACu | kUnwind; return; } goto L_002026AC; }
L_002026CC:
    set32(c.r[2], ld32((c.r[5].w[0] + 324u)));
    st32((c.r[5].w[0] + 324u), 0u);
    c.budget -= 2;
L_002026D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002026E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00202700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00202760; } }
L_00202700:
    set32(c.r[16], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00202714; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00202760; } }
L_00202714:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_00202754; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00202750; } }
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202740u); set32(c.r[5], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x00202740u) [[unlikely]] return; }
L_00202740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00202750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00202760; } }
L_00202750:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00202754:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00202714u | kUnwind; return; } goto L_00202714; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00202760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00202780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202794u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00202794u) [[unlikely]] return; }
L_00202794:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 16400u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), 0u);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 316u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 320u), 0u);
    st32((c.r[16].w[0] + 324u), 0u);
    st32((c.r[16].w[0] + 328u), 0u);
    st32((c.r[16].w[0] + 332u), 0u);
    st32((c.r[16].w[0] + 336u), 0u);
    st32((c.r[16].w[0] + 340u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002027E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00202890; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 16400u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 336u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 340u)));  goto L_00202834; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 336u), 0u);  goto L_00202830; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020282Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020282Cu) [[unlikely]] return; }
L_0020282C:
    st32((c.r[17].w[0] + 336u), 0u);
    c.budget -= 1;
L_00202830:
    set32(c.r[4], ld32((c.r[17].w[0] + 340u)));
    c.budget -= 1;
L_00202834:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30492u)));  goto L_0020285C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 340u), 0u);  goto L_00202858; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00202854u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00202854u) [[unlikely]] return; }
L_00202854:
    st32((c.r[17].w[0] + 340u), 0u);
    c.budget -= 1;
L_00202858:
    set32(c.r[4], ld32((c.r[28].w[0] - 30492u)));
    c.budget -= 1;
L_0020285C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00202870; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020286Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 250u, depth + 1u); else { c.pc = 0x00202680u; return; } if (c.pc != 0x0020286Cu) [[unlikely]] return; }
L_0020286C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00202870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202878u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00202878u) [[unlikely]] return; }
L_00202878:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00202894; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202890u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00202890u) [[unlikely]] return; }
L_00202890:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00202894:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002028B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002028E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00202980; } }
L_002028E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30492u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_0020290C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00202980; } }
L_0020290C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
L_00202920:
    c.r[6].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 60u);
    st32((c.r[18].w[0] + 52u), c.r[8].w[0]);
    set32(c.r[6], 0u + 255u);
    st32((c.r[18].w[0] + 56u), c.r[9].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202950u); st8((c.r[18].w[0] + 315u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x00202950u) [[unlikely]] return; }
L_00202950:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 320u), 0u);
    st32((c.r[18].w[0] + 324u), 0u);
    st32((c.r[18].w[0] + 328u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 332u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 336u), 0u);
    st32((c.r[18].w[0] + 340u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30492u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020297Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 248u, depth + 1u); else { c.pc = 0x00202640u; return; } if (c.pc != 0x0020297Cu) [[unlikely]] return; }
L_0020297C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00202980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002029A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002029D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00202A68; } }
L_002029D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30492u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  goto L_002029F4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00202A68; } }
L_002029F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[9].d[0] = c.r[5].d[0] | c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[9].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[17].w[0] + 52u), c.r[7].w[0]);
    set32(c.r[6], 0u + 255u);
    st32((c.r[17].w[0] + 56u), c.r[8].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202A38u); st8((c.r[17].w[0] + 315u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x00202A38u) [[unlikely]] return; }
L_00202A38:
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 320u), 0u);
    st32((c.r[17].w[0] + 324u), 0u);
    st32((c.r[17].w[0] + 328u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 332u), 0u);
    st32((c.r[17].w[0] + 336u), 0u);
    st32((c.r[17].w[0] + 340u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30492u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202A64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 248u, depth + 1u); else { c.pc = 0x00202640u; return; } if (c.pc != 0x00202A64u) [[unlikely]] return; }
L_00202A64:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00202A68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00202A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30492u)));  goto L_00202AA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00202B2C; } }
L_00202AA4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], ld32((c.r[4].w[0] + 4u)));  goto L_00202AC4; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00202B2C; } }
L_00202AC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[7].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    st32((c.r[4].w[0] + 4u), c.r[8].w[0]);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[4].w[0] + 328u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 332u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 320u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[4].w[0] + 332u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 324u), 0u);
    st32((c.r[4].w[0] + 336u), 0u);
    st32((c.r[4].w[0] + 340u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202B28u); set32(c.r[4], ld32((c.r[28].w[0] - 30492u)));  if (depth < kMaxDepth) unit_0038(c, 248u, depth + 1u); else { c.pc = 0x00202640u; return; } if (c.pc != 0x00202B28u) [[unlikely]] return; }
L_00202B28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00202B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00202B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00202B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00202C6C; } }
L_00202B68:
    set32(c.r[2], ld32((c.r[28].w[0] - 30492u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], ld32((c.r[16].w[0] + 4u)));  goto L_00202B8C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00202C6C; } }
L_00202B8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[8].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[7].w[0]);
    set32(c.r[6], 0u + 255u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202BCCu); st8((c.r[16].w[0] + 315u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x00202BCCu) [[unlikely]] return; }
L_00202BCC:
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 320u), 0u);
    st32((c.r[16].w[0] + 324u), 0u);
    st32((c.r[16].w[0] + 328u), 0u);
    st32((c.r[16].w[0] + 332u), 0u);
    st32((c.r[16].w[0] + 336u), 0u);
    st32((c.r[16].w[0] + 340u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30492u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00202C60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202C08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 252u, depth + 1u); else { c.pc = 0x002026E0u; return; } if (c.pc != 0x00202C08u) [[unlikely]] return; }
L_00202C08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00202C40; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 332u), c.r[2].w[0]);  if (t) { goto L_00202C68; } }
L_00202C40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 332u), 0u);  if (t) { goto L_00202C68; } }
L_00202C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202C68u);  if (depth < kMaxDepth) unit_0038(c, 248u, depth + 1u); else { c.pc = 0x00202640u; return; } if (c.pc != 0x00202C68u) [[unlikely]] return; }
L_00202C68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00202C6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00202C80:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 332u)));  goto L_00202C98; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00202C98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00202CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00202CD0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30492u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00202CD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00202CD0u) [[unlikely]] return; }
L_00202CD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00202CE4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00202CE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00202D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202D18u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00202D18u) [[unlikely]] return; }
L_00202D18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00202D30; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202D2Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 113u, depth + 1u); else { c.pc = 0x00201020u; return; } if (c.pc != 0x00202D2Cu) [[unlikely]] return; }
L_00202D2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00202D30:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00202D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00202D54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00202DD8; } }
L_00202D54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x454F0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17987ull;
    set32(c.r[11], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
L_00202D64:
    c.r[1].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[10], ld32((c.r[4].w[0])));  goto L_00202D84; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202D7Cu); set32(c.r[4], c.r[4].w[0] + 27800u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00202D7Cu) [[unlikely]] return; }
L_00202D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00202DD8; } }
L_00202D84:
    set32(c.r[3], c.r[10].w[0] << 8);
    set32(c.r[8], c.r[10].w[0] << 24);
    c.r[7].d[0] = c.r[3].d[0] & c.r[9].d[0];
    set32(c.r[3], c.r[10].w[0] >> 8);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[7].d[0] = c.r[3].d[0] | c.r[7].d[0];
    set32(c.r[3], c.r[10].w[0] >> 24);
    c.r[8].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 11;
    if (c.r[8].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_00202DB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00202DD8; } }
L_00202DB8:
    set32(c.r[7], c.r[4].w[0] + c.r[11].w[0]);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], c.r[7].w[0] + c.r[3].w[0]);  if (t) { goto L_00202DCC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00202DD4; } }
L_00202DCC:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[2].d[0]) { set32(c.r[11], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00202D64u | kUnwind; return; } goto L_00202D64; }
L_00202DD4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00202DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00202DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00202E04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00202E94; } }
L_00202E04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x454F0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17987ull;
    set32(c.r[12], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
L_00202E14:
    c.r[1].d[0] = c.r[12].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[11], ld32((c.r[4].w[0])));  goto L_00202E34; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202E2Cu); set32(c.r[4], c.r[4].w[0] + 27800u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00202E2Cu) [[unlikely]] return; }
L_00202E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00202E94; } }
L_00202E34:
    set32(c.r[3], c.r[11].w[0] << 8);
    set32(c.r[9], c.r[11].w[0] << 24);
    c.r[8].d[0] = c.r[3].d[0] & c.r[10].d[0];
    set32(c.r[3], c.r[11].w[0] >> 8);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[8].d[0] = c.r[3].d[0] | c.r[8].d[0];
    set32(c.r[3], c.r[11].w[0] >> 24);
    c.r[9].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.budget -= 11;
    if (c.r[9].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_00202E74; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] - 1u);  goto L_00202E70; }
    goto L_00202E68;
L_00202E64:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_00202E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00202E94; } }
L_00202E70:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00202E74:
    set32(c.r[8], c.r[4].w[0] + c.r[12].w[0]);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], c.r[8].w[0] + c.r[3].w[0]);  if (t) { goto L_00202E88; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00202E90; } }
L_00202E88:
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[2].d[0]) { set32(c.r[12], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00202E14u | kUnwind; return; } goto L_00202E14; }
L_00202E90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00202E94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00202EA0:
    vu::apply(c.vu0, 8u, 2u, [&](int) { return c.vu0.r | fp::kOne; });
    c.vu0.vf[1] = c.r[4];
    c.r[2] = c.vu0.vf[2];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.vu0.r = c.vu0.vf[1].w[0] & 0x7FFFFFu;  c.pc = t; return; }
L_00202EC0:
    c.vu0.r = vu::rand_next(c.vu0.r); vu::apply(c.vu0, 8u, 1u, [&](int) { return c.vu0.r | fp::kOne; });
    vu::subbc4<1>(c.vu0, 8u, 1u, 1u, c.vu0.vf[0].w[3]);
    c.r[2] = c.vu0.vf[1];
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);  c.pc = t; return; }
L_00202EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202EFCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00202EFCu) [[unlikely]] return; }
L_00202EFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_00202F24; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_00202F3C; } }
L_00202F24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 6;
L_00202F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202F44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 294u, depth + 1u); else { c.pc = 0x00202F60u; return; } if (c.pc != 0x00202F44u) [[unlikely]] return; }
L_00202F44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00202F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00203050; } }
L_00202F7C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202F88u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00202F88u) [[unlikely]] return; }
L_00202F88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00202FC0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_00202FD8; } }
L_00202FC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 6;
L_00202FD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202FECu); st32((c.r[28].w[0] - 30488u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00202FECu) [[unlikely]] return; }
L_00202FEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00203024; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0020303C; } }
L_00203024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_00203030:
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 3;
L_0020303C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30488u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[28].w[0] - 30488u), c.r[2].w[0]);
    c.budget -= 5;
L_00203050:
    set32(c.r[2], ld32((c.r[28].w[0] - 30488u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00202F7Cu | kUnwind; return; } goto L_00202F7C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020306Cu); st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0038(c, 313u, depth + 1u); else { c.pc = 0x00203250u; return; } if (c.pc != 0x0020306Cu) [[unlikely]] return; }
L_0020306C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = 0ull | 59085ull;
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00203090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002030A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 313u, depth + 1u); else { c.pc = 0x00203250u; return; } if (c.pc != 0x002030A4u) [[unlikely]] return; }
L_002030A4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = 0ull | 59085ull;
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002030C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st32((c.r[29].w[0] + 44u), c.f[12]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002030DCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 313u, depth + 1u); else { c.pc = 0x00203250u; return; } if (c.pc != 0x002030DCu) [[unlikely]] return; }
L_002030DC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = 0ull | 61416ull;
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00203100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203114u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 313u, depth + 1u); else { c.pc = 0x00203250u; return; } if (c.pc != 0x00203114u) [[unlikely]] return; }
L_00203114:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 23023u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00203130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203148u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 321u, depth + 1u); else { c.pc = 0x00203370u; return; } if (c.pc != 0x00203148u) [[unlikely]] return; }
L_00203148:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[3].d[0] = 0ull | 59085ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_00203184; } }
    c.r[2].d[0] = 0ull | 61416ull;
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 44u));  goto L_00203170; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00203184; } }
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.budget -= 1;
L_00203170:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00203188; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00203184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00203188:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002031A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002031B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 321u, depth + 1u); else { c.pc = 0x00203370u; return; } if (c.pc != 0x002031B8u) [[unlikely]] return; }
L_002031B8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[3].d[0] = 0ull | 59085ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_002031DC; } }
    c.r[2].d[0] = 0ull | 61416ull;
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 44u));  goto L_002031EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002031E8; } }
L_002031DC:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002031EC; } }
L_002031E8:
    c.f[0] = 0u;
    c.budget -= 1;
L_002031EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00203200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == c.r[5].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00203240; }
    c.r[2].d[0] = ld16((c.r[5].w[0] + 4u));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020322Cu); set32(c.r[5], ld32((c.r[5].w[0])));  if (depth < kMaxDepth) unit_0038(c, 321u, depth + 1u); else { c.pc = 0x00203370u; return; } if (c.pc != 0x0020322Cu) [[unlikely]] return; }
L_0020322C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203238u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 313u, depth + 1u); else { c.pc = 0x00203250u; return; } if (c.pc != 0x00203238u) [[unlikely]] return; }
L_00203238:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00203240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00203250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30488u)));
    set32(c.r[3], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020327Cu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x0020327Cu) [[unlikely]] return; }
L_0020327C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203288u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 289u, depth + 1u); else { c.pc = 0x00202EA0u; return; } if (c.pc != 0x00203288u) [[unlikely]] return; }
L_00203288:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020329Cu);  if (depth < kMaxDepth) unit_0038(c, 290u, depth + 1u); else { c.pc = 0x00202EC0u; return; } if (c.pc != 0x0020329Cu) [[unlikely]] return; }
L_0020329C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_002032C4; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4F800000u);  if (t) { goto L_002032DC; } }
L_002032C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F800000u);
    c.budget -= 6;
L_002032DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002032ECu); c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_0038(c, 290u, depth + 1u); else { c.pc = 0x00202EC0u; return; } if (c.pc != 0x002032ECu) [[unlikely]] return; }
L_002032EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_00203314; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0020332C; } }
L_00203314:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_00203320:
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 3;
L_0020332C:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203340u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 289u, depth + 1u); else { c.pc = 0x00202EA0u; return; } if (c.pc != 0x00203340u) [[unlikely]] return; }
L_00203340:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00203354; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203350u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00203350u) [[unlikely]] return; }
L_00203350:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00203354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00203370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30488u)));
    set32(c.r[3], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020339Cu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x0020339Cu) [[unlikely]] return; }
L_0020339C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002033A8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 289u, depth + 1u); else { c.pc = 0x00202EA0u; return; } if (c.pc != 0x002033A8u) [[unlikely]] return; }
L_002033A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002033BCu);  if (depth < kMaxDepth) unit_0038(c, 290u, depth + 1u); else { c.pc = 0x00202EC0u; return; } if (c.pc != 0x002033BCu) [[unlikely]] return; }
L_002033BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_002033E4; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4F800000u);  if (t) { goto L_002033FC; } }
L_002033E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F800000u);
    c.budget -= 6;
L_002033FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020340Cu); c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_0038(c, 290u, depth + 1u); else { c.pc = 0x00202EC0u; return; } if (c.pc != 0x0020340Cu) [[unlikely]] return; }
L_0020340C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  goto L_00203434; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0020344C; } }
L_00203434:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 6;
L_0020344C:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203460u); set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 289u, depth + 1u); else { c.pc = 0x00202EA0u; return; } if (c.pc != 0x00203460u) [[unlikely]] return; }
L_00203460:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00203474; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203470u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00203470u) [[unlikely]] return; }
L_00203470:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00203474:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00203490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30488u)));
    st32((c.r[28].w[0] - 30488u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002034B4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 321u, depth + 1u); else { c.pc = 0x00203370u; return; } if (c.pc != 0x002034B4u) [[unlikely]] return; }
L_002034B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002034C4u); st32((c.r[28].w[0] - 30488u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0038(c, 313u, depth + 1u); else { c.pc = 0x00203250u; return; } if (c.pc != 0x002034C4u) [[unlikely]] return; }
L_002034C4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002034E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203524u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x00203524u) [[unlikely]] return; }
L_00203524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0020353C; } }
L_0020352C:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0020353C:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020352Cu | kUnwind; return; } goto L_0020352C; }
    c.budget -= 2;
    if (c.r[22].sd[0] <= 0) { set32(c.r[2], c.r[17].w[0] << 3);  goto L_00203574; }
    c.f[0] = c.r[22].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020355Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0020355Cu) [[unlikely]] return; }
L_0020355C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020356Cu);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0020356Cu) [[unlikely]] return; }
L_0020356C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] << 3);
    c.budget -= 2;
L_00203574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020357Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0020357Cu) [[unlikely]] return; }
L_0020357C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13968u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203598u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0008(c, 152u, depth + 1u); else { c.pc = 0x00141DA0u; return; } if (c.pc != 0x00203598u) [[unlikely]] return; }
L_00203598:
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002035A4u); set32(c.r[4], c.r[19].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002035A4u) [[unlikely]] return; }
L_002035A4:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[19].w[0]);  if (t) { goto L_00203608; } }
L_002035B4:
    set32(c.r[6], c.r[2].w[0] << 4);
    set32(c.r[7], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] << 3);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 21;
L_00203608:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002035B4u | kUnwind; return; } goto L_002035B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00203640; } }
L_0020361C:
    set32(c.r[16], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203630u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 366u, depth + 1u); else { c.pc = 0x002039C0u; return; } if (c.pc != 0x00203630u) [[unlikely]] return; }
L_00203630:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_00203640:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020361Cu | kUnwind; return; } goto L_0020361C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_00203660; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020365Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0020365Cu) [[unlikely]] return; }
L_0020365C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00203660:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00203690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002036A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 291u, depth + 1u); else { c.pc = 0x00202EE0u; return; } if (c.pc != 0x002036A4u) [[unlikely]] return; }
L_002036A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002036C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_002036EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002036E4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002036E4u) [[unlikely]] return; }
L_002036E4:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_002036EC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_0020370C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_00203708; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203704u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00203704u) [[unlikely]] return; }
L_00203704:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_00203708:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0020370C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00203720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020373Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 362u, depth + 1u); else { c.pc = 0x00203940u; return; } if (c.pc != 0x0020373Cu) [[unlikely]] return; }
L_0020373C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020375C; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0020375C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 12u)));  goto L_0020378C; }
L_0020375C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203770u); set32(c.r[4], c.r[4].w[0] + 27824u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00203770u) [[unlikely]] return; }
L_00203770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203778u); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0038(c, 291u, depth + 1u); else { c.pc = 0x00202EE0u; return; } if (c.pc != 0x00203778u) [[unlikely]] return; }
L_00203778:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203784u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 300u, depth + 1u); else { c.pc = 0x00203090u; return; } if (c.pc != 0x00203784u) [[unlikely]] return; }
L_00203784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 56u);  if (t) { goto L_00203794; } }
L_0020378C:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00203794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002037B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002037D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0038(c, 360u, depth + 1u); else { c.pc = 0x002038F0u; return; } if (c.pc != 0x002037D8u) [[unlikely]] return; }
L_002037D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002037FC; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_002037FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_00203818; }
L_002037FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203810u); set32(c.r[4], c.r[4].w[0] + 27824u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00203810u) [[unlikely]] return; }
L_00203810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00203850; } }
L_00203818:
    set32(c.r[4], c.r[18].w[0] << 3);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020383Cu); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 310u, depth + 1u); else { c.pc = 0x00203200u; return; } if (c.pc != 0x0020383Cu) [[unlikely]] return; }
L_0020383C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
L_00203850:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00203870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020388Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 362u, depth + 1u); else { c.pc = 0x00203940u; return; } if (c.pc != 0x0020388Cu) [[unlikely]] return; }
L_0020388C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002038AC; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_002038AC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 12u)));  goto L_002038C8; }
L_002038AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002038C0u); set32(c.r[4], c.r[4].w[0] + 27824u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002038C0u) [[unlikely]] return; }
L_002038C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29974u);  if (t) { goto L_002038D4; } }
L_002038C8:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 3;
L_002038D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002038F0:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00203904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00203934; } }
L_00203904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00203924; } }
L_0020390C:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00203924; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00203934; } }
L_00203924:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020390Cu | kUnwind; return; } goto L_0020390C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00203934:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00203940:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00203954; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00203984; } }
L_00203954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00203974; } }
L_0020395C:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00203974; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00203984; } }
L_00203974:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020395Cu | kUnwind; return; } goto L_0020395C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00203984:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00203990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002039A0u);  if (depth < kMaxDepth) unit_0038(c, 362u, depth + 1u); else { c.pc = 0x00203940u; return; } if (c.pc != 0x002039A0u) [[unlikely]] return; }
L_002039A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002039AC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_002039AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002039C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002039D0u);  if (depth < kMaxDepth) unit_0038(c, 360u, depth + 1u); else { c.pc = 0x002038F0u; return; } if (c.pc != 0x002039D0u) [[unlikely]] return; }
L_002039D0:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002039F4; } }
L_002039E0:
    set32(c.r[4], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_002039F4:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002039E0u | kUnwind; return; } goto L_002039E0; }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00203A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
L_00203A20:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203A2Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 362u, depth + 1u); else { c.pc = 0x00203940u; return; } if (c.pc != 0x00203A2Cu) [[unlikely]] return; }
L_00203A2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_00203A4C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203A44u); set32(c.r[4], c.r[4].w[0] + 27862u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00203A44u) [[unlikely]] return; }
L_00203A44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00203A6C; } }
L_00203A4C:
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], c.r[2].w[0] + 16u);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00203A64:
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 2;
L_00203A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
L_00203A78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00203A80:
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
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203AB0u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 369u, depth + 1u); else { c.pc = 0x00203A10u; return; } if (c.pc != 0x00203AB0u) [[unlikely]] return; }
L_00203AB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00203AC8; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00203ADC; }
L_00203AC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203AD4u); set32(c.r[4], c.r[4].w[0] + 27890u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00203AD4u) [[unlikely]] return; }
L_00203AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00203B70; } }
L_00203ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203AE4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 362u, depth + 1u); else { c.pc = 0x00203940u; return; } if (c.pc != 0x00203AE4u) [[unlikely]] return; }
L_00203AE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00203B08; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203B00u); set32(c.r[4], c.r[4].w[0] + 27862u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00203B00u) [[unlikely]] return; }
L_00203B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00203B70; } }
L_00203B08:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203B14u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00203B14u) [[unlikely]] return; }
L_00203B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52410000u);
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] | 17223ull;
    set32(c.r[3], c.r[17].w[0] - 16u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], c.r[18].w[0] + 16u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 16u);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 16u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30488u)));
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203B6Cu); set32(c.r[6], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00203B6Cu) [[unlikely]] return; }
L_00203B6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00203B70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00203B90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00203BEC; } }
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16722ull;
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
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[5].w[0] + 16u);  goto L_00203C00; }
L_00203BEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203BF8u); set32(c.r[4], c.r[4].w[0] + 27931u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00203BF8u) [[unlikely]] return; }
L_00203BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00203CFC; } }
L_00203C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203C08u); set32(c.r[5], ld32((c.r[5].w[0] + 16u)));  if (depth < kMaxDepth) unit_0038(c, 360u, depth + 1u); else { c.pc = 0x002038F0u; return; } if (c.pc != 0x00203C08u) [[unlikely]] return; }
L_00203C08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_00203C28; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_00203C3C; }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00203C28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203C34u); set32(c.r[4], c.r[4].w[0] + 27862u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00203C34u) [[unlikely]] return; }
L_00203C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00203CFC; } }
L_00203C3C:
    set32(c.r[6], c.r[3].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203C48u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00203C48u) [[unlikely]] return; }
L_00203C48:
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00203CD8; }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203C60u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 366u, depth + 1u); else { c.pc = 0x002039C0u; return; } if (c.pc != 0x00203C60u) [[unlikely]] return; }
L_00203C60:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00203CB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203C74u); set32(c.r[4], c.r[4].w[0] + 27963u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00203C74u) [[unlikely]] return; }
L_00203C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00203C90; } }
L_00203C7C:
    set32(c.r[3], c.r[17].w[0] << 3);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203C8Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0038(c, 300u, depth + 1u); else { c.pc = 0x00203090u; return; } if (c.pc != 0x00203C8Cu) [[unlikely]] return; }
L_00203C8C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00203C90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00203C7Cu | kUnwind; return; } goto L_00203C7C; }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203CACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 366u, depth + 1u); else { c.pc = 0x002039C0u; return; } if (c.pc != 0x00203CACu) [[unlikely]] return; }
L_00203CAC:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00203CFC; } }
L_00203CB8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00203CD8; } }
L_00203CC4:
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203CD4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0038(c, 328u, depth + 1u); else { c.pc = 0x00203490u; return; } if (c.pc != 0x00203CD4u) [[unlikely]] return; }
L_00203CD4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00203CD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00203CC4u | kUnwind; return; } goto L_00203CC4; }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203CF4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 366u, depth + 1u); else { c.pc = 0x002039C0u; return; } if (c.pc != 0x00203CF4u) [[unlikely]] return; }
L_00203CF4:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00203CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00203D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00203D6C; } }
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16722ull;
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
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], c.r[5].w[0] + 16u);  goto L_00203D80; }
L_00203D6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203D78u); set32(c.r[4], c.r[4].w[0] + 27931u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00203D78u) [[unlikely]] return; }
L_00203D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00203E0C; } }
L_00203D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203D88u); set32(c.r[5], ld32((c.r[5].w[0] + 16u)));  if (depth < kMaxDepth) unit_0038(c, 362u, depth + 1u); else { c.pc = 0x00203940u; return; } if (c.pc != 0x00203D88u) [[unlikely]] return; }
L_00203D88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  goto L_00203DA4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[3], c.r[16].w[0] + 16u);  goto L_00203DB8; }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00203DA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203DB0u); set32(c.r[4], c.r[4].w[0] + 27862u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00203DB0u) [[unlikely]] return; }
L_00203DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00203E0C; } }
L_00203DB8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00203DD4; } }
L_00203DC4:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00203DD4:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00203DC4u | kUnwind; return; } goto L_00203DC4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00203E0C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00203E08; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203E00u); set32(c.r[4], c.r[4].w[0] + 27963u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00203E00u) [[unlikely]] return; }
L_00203E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00203E0C; } }
L_00203E08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00203E0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00203E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[6].d[0] = c.r[2].d[0] | 16706ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x444F0000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 16520u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 17223ull;
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203E84u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00203E84u) [[unlikely]] return; }
L_00203E84:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00203EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00203F04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 16520u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203ECCu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 7u, depth + 1u); else { c.pc = 0x00204180u; return; } if (c.pc != 0x00203ECCu) [[unlikely]] return; }
L_00203ECC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00203EF0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_00203EF0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00203F08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203F04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00203F04u) [[unlikely]] return; }
L_00203F04:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00203F08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00203F20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203F3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 7u, depth + 1u); else { c.pc = 0x00204180u; return; } if (c.pc != 0x00203F3Cu) [[unlikely]] return; }
L_00203F3C:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20292ull;
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
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  [[clang::musttail]] return unit_0039(c, 4u, depth); }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] >> 6);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00203F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0039(c, 6u, depth); } }
L_00203F90:
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203FA0u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00203FA0u) [[unlikely]] return; }
L_00203FA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_0039(c, 3u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.f[2] = 0u;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
L_00203FC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[5].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 15;
    [[clang::musttail]] return unit_0039(c, 1u, depth);
}

}
