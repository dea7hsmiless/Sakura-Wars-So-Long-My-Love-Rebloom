#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003B[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0020C000;
    case 2u: goto L_0020C008;
    case 3u: goto L_0020C028;
    case 4u: goto L_0020C030;
    case 5u: goto L_0020C040;
    case 6u: goto L_0020C064;
    case 7u: goto L_0020C08C;
    case 8u: goto L_0020C0A4;
    case 9u: goto L_0020C0AC;
    case 10u: goto L_0020C0B4;
    case 11u: goto L_0020C0DC;
    case 12u: goto L_0020C0F8;
    case 13u: goto L_0020C114;
    case 14u: goto L_0020C13C;
    case 15u: goto L_0020C144;
    case 16u: goto L_0020C150;
    case 17u: goto L_0020C170;
    case 18u: goto L_0020C1DC;
    case 19u: goto L_0020C1E4;
    case 20u: goto L_0020C1FC;
    case 21u: goto L_0020C208;
    case 22u: goto L_0020C238;
    case 23u: goto L_0020C26C;
    case 24u: goto L_0020C2B0;
    case 25u: goto L_0020C2C0;
    case 26u: goto L_0020C2D0;
    case 27u: goto L_0020C398;
    case 28u: goto L_0020C3A8;
    case 29u: goto L_0020C3F0;
    case 30u: goto L_0020C400;
    case 31u: goto L_0020C41C;
    case 32u: goto L_0020C424;
    case 33u: goto L_0020C434;
    case 34u: goto L_0020C43C;
    case 35u: goto L_0020C454;
    case 36u: goto L_0020C460;
    case 37u: goto L_0020C478;
    case 38u: goto L_0020C4CC;
    case 39u: goto L_0020C4F4;
    case 40u: goto L_0020C510;
    case 41u: goto L_0020C538;
    case 42u: goto L_0020C55C;
    case 43u: goto L_0020C57C;
    case 44u: goto L_0020C5A4;
    case 45u: goto L_0020C5CC;
    case 46u: goto L_0020C5E4;
    case 47u: goto L_0020C620;
    case 48u: goto L_0020C638;
    case 49u: goto L_0020C648;
    case 50u: goto L_0020C658;
    case 51u: goto L_0020C67C;
    case 52u: goto L_0020C68C;
    case 53u: goto L_0020C6F0;
    case 54u: goto L_0020C700;
    case 55u: goto L_0020C760;
    case 56u: goto L_0020C770;
    case 57u: goto L_0020C79C;
    case 58u: goto L_0020C868;
    case 59u: goto L_0020C880;
    case 60u: goto L_0020C898;
    case 61u: goto L_0020C8C0;
    case 62u: goto L_0020C8D0;
    case 63u: goto L_0020C8E0;
    case 64u: goto L_0020C8F0;
    case 65u: goto L_0020C900;
    case 66u: goto L_0020C918;
    case 67u: goto L_0020C92C;
    case 68u: goto L_0020C940;
    case 69u: goto L_0020C950;
    case 70u: goto L_0020C97C;
    case 71u: goto L_0020C99C;
    case 72u: goto L_0020C9A4;
    case 73u: goto L_0020C9CC;
    case 74u: goto L_0020CA00;
    case 75u: goto L_0020CA24;
    case 76u: goto L_0020CA44;
    case 77u: goto L_0020CA68;
    case 78u: goto L_0020CAC0;
    case 79u: goto L_0020CAF4;
    case 80u: goto L_0020CB00;
    case 81u: goto L_0020CB20;
    case 82u: goto L_0020CB58;
    case 83u: goto L_0020CB70;
    case 84u: goto L_0020CB9C;
    case 85u: goto L_0020CBA8;
    case 86u: goto L_0020CBC0;
    case 87u: goto L_0020CBE0;
    case 88u: goto L_0020CC10;
    case 89u: goto L_0020CC3C;
    case 90u: goto L_0020CC5C;
    case 91u: goto L_0020CC7C;
    case 92u: goto L_0020CC8C;
    case 93u: goto L_0020CCC0;
    case 94u: goto L_0020CD2C;
    case 95u: goto L_0020CD3C;
    case 96u: goto L_0020CD5C;
    case 97u: goto L_0020CD68;
    case 98u: goto L_0020CDB0;
    case 99u: goto L_0020CDCC;
    case 100u: goto L_0020CDE8;
    case 101u: goto L_0020CDF8;
    case 102u: goto L_0020CE9C;
    case 103u: goto L_0020CEAC;
    case 104u: goto L_0020CEBC;
    case 105u: goto L_0020CEDC;
    case 106u: goto L_0020CEF0;
    case 107u: goto L_0020CF38;
    case 108u: goto L_0020CF48;
    case 109u: goto L_0020CF58;
    case 110u: goto L_0020CF68;
    case 111u: goto L_0020CF80;
    case 112u: goto L_0020CF94;
    case 113u: goto L_0020CFDC;
    case 114u: goto L_0020CFF0;
    case 115u: goto L_0020D028;
    case 116u: goto L_0020D03C;
    case 117u: goto L_0020D058;
    case 118u: goto L_0020D080;
    case 119u: goto L_0020D0AC;
    case 120u: goto L_0020D0C0;
    case 121u: goto L_0020D0E8;
    case 122u: goto L_0020D0F0;
    case 123u: goto L_0020D120;
    case 124u: goto L_0020D150;
    case 125u: goto L_0020D1A0;
    case 126u: goto L_0020D1BC;
    case 127u: goto L_0020D200;
    case 128u: goto L_0020D214;
    case 129u: goto L_0020D230;
    case 130u: goto L_0020D260;
    case 131u: goto L_0020D278;
    case 132u: goto L_0020D290;
    case 133u: goto L_0020D2CC;
    case 134u: goto L_0020D2EC;
    case 135u: goto L_0020D304;
    case 136u: goto L_0020D320;
    case 137u: goto L_0020D358;
    case 138u: goto L_0020D370;
    case 139u: goto L_0020D384;
    case 140u: goto L_0020D390;
    case 141u: goto L_0020D3A0;
    case 142u: goto L_0020D3C0;
    case 143u: goto L_0020D3DC;
    case 144u: goto L_0020D3F0;
    case 145u: goto L_0020D458;
    case 146u: goto L_0020D47C;
    case 147u: goto L_0020D4B0;
    case 148u: goto L_0020D4E0;
    case 149u: goto L_0020D4EC;
    case 150u: goto L_0020D4FC;
    case 151u: goto L_0020D510;
    case 152u: goto L_0020D530;
    case 153u: goto L_0020D550;
    case 154u: goto L_0020D574;
    case 155u: goto L_0020D590;
    case 156u: goto L_0020D600;
    case 157u: goto L_0020D610;
    case 158u: goto L_0020D658;
    case 159u: goto L_0020D664;
    case 160u: goto L_0020D784;
    case 161u: goto L_0020D7A0;
    case 162u: goto L_0020D7A8;
    case 163u: goto L_0020D7B8;
    case 164u: goto L_0020D7C0;
    case 165u: goto L_0020D7D4;
    case 166u: goto L_0020D7F0;
    case 167u: goto L_0020D808;
    case 168u: goto L_0020D814;
    case 169u: goto L_0020D824;
    case 170u: goto L_0020D840;
    case 171u: goto L_0020D858;
    case 172u: goto L_0020D864;
    case 173u: goto L_0020D888;
    case 174u: goto L_0020D8B0;
    case 175u: goto L_0020D8DC;
    case 176u: goto L_0020D8FC;
    case 177u: goto L_0020D918;
    case 178u: goto L_0020D930;
    case 179u: goto L_0020D95C;
    case 180u: goto L_0020D990;
    case 181u: goto L_0020D9A0;
    case 182u: goto L_0020D9B8;
    case 183u: goto L_0020D9C8;
    case 184u: goto L_0020DA20;
    case 185u: goto L_0020DA44;
    case 186u: goto L_0020DA5C;
    case 187u: goto L_0020DA6C;
    case 188u: goto L_0020DA78;
    case 189u: goto L_0020DAA4;
    case 190u: goto L_0020DB90;
    case 191u: goto L_0020DBD0;
    case 192u: goto L_0020DBE8;
    case 193u: goto L_0020DBF4;
    case 194u: goto L_0020DC0C;
    case 195u: goto L_0020DC30;
    case 196u: goto L_0020DC4C;
    case 197u: goto L_0020DC90;
    case 198u: goto L_0020DCE0;
    case 199u: goto L_0020DD1C;
    case 200u: goto L_0020DD24;
    case 201u: goto L_0020DD2C;
    case 202u: goto L_0020DD40;
    case 203u: goto L_0020DD50;
    case 204u: goto L_0020DD58;
    case 205u: goto L_0020DD80;
    case 206u: goto L_0020DDAC;
    case 207u: goto L_0020DDC0;
    case 208u: goto L_0020DDE4;
    case 209u: goto L_0020DDF0;
    case 210u: goto L_0020DE08;
    case 211u: goto L_0020DE9C;
    case 212u: goto L_0020DEF0;
    case 213u: goto L_0020DF80;
    case 214u: goto L_0020DFB0;
    case 215u: goto L_0020DFB8;
    case 216u: goto L_0020DFF0;
    case 217u: goto L_0020E0DC;
    case 218u: goto L_0020E0F0;
    case 219u: goto L_0020E110;
    case 220u: goto L_0020E164;
    case 221u: goto L_0020E180;
    case 222u: goto L_0020E1A4;
    case 223u: goto L_0020E1BC;
    case 224u: goto L_0020E1D4;
    case 225u: goto L_0020E1E8;
    case 226u: goto L_0020E218;
    case 227u: goto L_0020E250;
    case 228u: goto L_0020E270;
    case 229u: goto L_0020E2B8;
    case 230u: goto L_0020E2D4;
    case 231u: goto L_0020E2F8;
    case 232u: goto L_0020E310;
    case 233u: goto L_0020E330;
    case 234u: goto L_0020E348;
    case 235u: goto L_0020E354;
    case 236u: goto L_0020E390;
    case 237u: goto L_0020E420;
    case 238u: goto L_0020E44C;
    case 239u: goto L_0020E490;
    case 240u: goto L_0020E55C;
    case 241u: goto L_0020E57C;
    case 242u: goto L_0020E608;
    case 243u: goto L_0020E618;
    case 244u: goto L_0020E624;
    case 245u: goto L_0020E63C;
    case 246u: goto L_0020E6A0;
    case 247u: goto L_0020E6B0;
    case 248u: goto L_0020E740;
    case 249u: goto L_0020E7A0;
    case 250u: goto L_0020E7B8;
    case 251u: goto L_0020E7C4;
    case 252u: goto L_0020E7DC;
    case 253u: goto L_0020E7FC;
    case 254u: goto L_0020E80C;
    case 255u: goto L_0020E828;
    case 256u: goto L_0020E848;
    case 257u: goto L_0020E858;
    case 258u: goto L_0020E860;
    case 259u: goto L_0020E870;
    case 260u: goto L_0020E890;
    case 261u: goto L_0020E8E8;
    case 262u: goto L_0020E924;
    case 263u: goto L_0020E968;
    case 264u: goto L_0020E9C8;
    case 265u: goto L_0020E9E4;
    case 266u: goto L_0020EB2C;
    case 267u: goto L_0020EB3C;
    case 268u: goto L_0020EB50;
    case 269u: goto L_0020EB60;
    case 270u: goto L_0020EB78;
    case 271u: goto L_0020EBAC;
    case 272u: goto L_0020EC8C;
    case 273u: goto L_0020EC9C;
    case 274u: goto L_0020ECD4;
    case 275u: goto L_0020EDB8;
    case 276u: goto L_0020EE08;
    case 277u: goto L_0020EEA8;
    case 278u: goto L_0020EF80;
    case 279u: goto L_0020EF90;
    case 280u: goto L_0020EFD0;
    case 281u: goto L_0020F280;
    case 282u: goto L_0020F2B4;
    case 283u: goto L_0020F2B8;
    case 284u: goto L_0020F2E8;
    case 285u: goto L_0020F318;
    case 286u: goto L_0020F348;
    case 287u: goto L_0020F360;
    case 288u: goto L_0020F39C;
    case 289u: goto L_0020F480;
    case 290u: goto L_0020F49C;
    case 291u: goto L_0020F4CC;
    case 292u: goto L_0020F4E4;
    case 293u: goto L_0020F508;
    case 294u: goto L_0020F514;
    case 295u: goto L_0020F5D0;
    case 296u: goto L_0020F638;
    case 297u: goto L_0020F66C;
    case 298u: goto L_0020F6AC;
    case 299u: goto L_0020F6E0;
    case 300u: goto L_0020F780;
    case 301u: goto L_0020F7E8;
    case 302u: goto L_0020F81C;
    case 303u: goto L_0020F8BC;
    case 304u: goto L_0020F8D0;
    case 305u: goto L_0020F8F8;
    case 306u: goto L_0020F914;
    case 307u: goto L_0020F93C;
    case 308u: goto L_0020F950;
    case 309u: goto L_0020F994;
    case 310u: goto L_0020FA70;
    case 311u: goto L_0020FB6C;
    case 312u: goto L_0020FBEC;
    case 313u: goto L_0020FC18;
    case 314u: goto L_0020FC40;
    case 315u: goto L_0020FC54;
    case 316u: goto L_0020FC5C;
    case 317u: goto L_0020FC80;
    case 318u: goto L_0020FCD0;
    case 319u: goto L_0020FD10;
    case 320u: goto L_0020FD30;
    case 321u: goto L_0020FDC0;
    case 322u: goto L_0020FEB0;
    case 323u: goto L_0020FF04;
    case 324u: goto L_0020FF98;
    default: bad_entry(c, 0x0020C000u); return;
    }
L_0020C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C008u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0020C008u) [[unlikely]] return; }
L_0020C008:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 28576u);
    set32(c.r[8], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C028u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 17u, depth + 1u); else { c.pc = 0x0020C170u; return; } if (c.pc != 0x0020C028u) [[unlikely]] return; }
L_0020C028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C030u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0020C030u) [[unlikely]] return; }
L_0020C030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020C040:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C064u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0020C064u) [[unlikely]] return; }
L_0020C064:
    set32(c.r[2], ld32((c.r[28].w[0] - 30480u)));
    set32(c.r[5], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 28592u);
    set32(c.r[8], 0u + 3u);
    st32((c.r[2].w[0] + 2180u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C08Cu); c.r[9].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 17u, depth + 1u); else { c.pc = 0x0020C170u; return; } if (c.pc != 0x0020C08Cu) [[unlikely]] return; }
L_0020C08C:
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 292u)));  goto L_0020C0B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C0A4u);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0020C0A4u) [[unlikely]] return; }
L_0020C0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C0ACu); set32(c.r[4], ld32((c.r[17].w[0] + 280u)));  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0020C0ACu) [[unlikely]] return; }
L_0020C0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C0B4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0020C0B4u) [[unlikely]] return; }
L_0020C0B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 1;
L_0020C0B8:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30480u)));  goto L_0020C0F0; }
    set32(c.r[19], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 284u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 352u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C0DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0020C0DCu) [[unlikely]] return; }
L_0020C0DC:
    set32(c.r[2], ld32((c.r[19].w[0] + 352u)));
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30480u)));
    c.budget -= 5;
L_0020C0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C0F8u);  if (depth < kMaxDepth) unit_003A(c, 385u, depth + 1u); else { c.pc = 0x0020BC70u; return; } if (c.pc != 0x0020C0F8u) [[unlikely]] return; }
L_0020C0F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 292u)));  goto L_0020C128; }
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C114u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0020C114u) [[unlikely]] return; }
L_0020C114:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 5;
L_0020C128:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_0020C148; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C13Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0020C13Cu) [[unlikely]] return; }
L_0020C13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C144u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0020C144u) [[unlikely]] return; }
L_0020C144:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_0020C148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C150u);  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0020C150u) [[unlikely]] return; }
L_0020C150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020C170:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020C1C8; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020C1C8:
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 292u)));  goto L_0020C1E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C1DCu);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0020C1DCu) [[unlikely]] return; }
L_0020C1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C1E4u); set32(c.r[4], ld32((c.r[17].w[0] + 280u)));  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0020C1E4u) [[unlikely]] return; }
L_0020C1E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 1;
L_0020C1E8:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));  if (t) { goto L_0020C210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C1FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x0020C1FCu) [[unlikely]] return; }
L_0020C1FC:
    set32(c.r[19], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C208u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0020C208u) [[unlikely]] return; }
L_0020C208:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 2;
L_0020C210:
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 292u)));  goto L_0020C24C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 74u));
    st32((c.r[17].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 284u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C238u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0020C238u) [[unlikely]] return; }
L_0020C238:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 5;
L_0020C24C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 300u)));  goto L_0020C280; }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C26Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020C26Cu) [[unlikely]] return; }
L_0020C26C:
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[2].d[0] = c.r[2].d[0] >> 33;
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    c.budget -= 5;
L_0020C280:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 32u);  goto L_0020C390; }
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020C38C; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 32u);  goto L_0020C2B8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C2B0u); set32(c.r[6], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0020C2B0u) [[unlikely]] return; }
L_0020C2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0020C2C4; } }
L_0020C2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C2C0u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0020C2C0u) [[unlikely]] return; }
L_0020C2C0:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020C2C4:
    set32(c.r[3], 0u - 256u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], c.r[8].w[0] << 2);
    c.budget -= 3;
L_0020C2D0:
    set32(c.r[4], c.r[22].w[0] + c.r[5].w[0]);
    set32(c.r[13], ld32((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[13].d[0] == c.r[7].d[0]) { set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);  goto L_0020C36C; }
    set32(c.r[6], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[10], c.r[13].w[0] >> 16);
    set32(c.r[5], ld32((c.r[6].w[0] + 160u)));
    set32(c.r[9], c.r[13].w[0] >> 8);
    c.r[12].d[0] = c.r[10].d[0] & 255ull;
    c.r[11].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[4], c.r[13].w[0] >> 24);
    c.r[9].d[0] = c.r[13].d[0] & 255ull;
    set32(c.r[10], c.r[5].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[13].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[10], c.r[5].w[0] >> 16);
    mmi::mult(c, 0, c.r[4].w[0], c.r[13].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    mmi::mult(c, 1, c.r[12].w[0], c.r[10].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    set32(c.r[10], c.r[5].w[0] >> 8);
    set32(c.r[12], c.r[12].w[0] + 255u);
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    mmi::mult(c, 0, c.r[11].w[0], c.r[10].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 255u);
    mmi::mult(c, 1, c.r[9].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[12], c.r[12].w[0] >> 8);
    set32(c.r[9], c.r[12].w[0] << 16);
    set32(c.r[11], c.r[4].w[0] >> 8);
    set32(c.r[4], c.r[5].w[0] + 255u);
    set32(c.r[5], c.r[11].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] >> 8);
    c.r[9].d[0] = c.r[5].d[0] | c.r[9].d[0];
    set32(c.r[5], c.r[10].w[0] + 255u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[9].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 35;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 176u), c.r[4].w[0]);  if (t) { goto L_0020C374; } }
L_0020C36C:
    set32(c.r[4], ld32((c.r[5].w[0] + 160u)));
    st32((c.r[5].w[0] + 176u), c.r[4].w[0]);
    c.budget -= 2;
L_0020C374:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C2D0u | kUnwind; return; } goto L_0020C2D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 292u)));  if (t) { goto L_0020C3B4; } }
L_0020C38C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_0020C390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C398u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0020C398u) [[unlikely]] return; }
L_0020C398:
    set32(c.r[4], c.r[17].w[0] + 176u);
    set32(c.r[5], c.r[17].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C3A8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0020C3A8u) [[unlikely]] return; }
L_0020C3A8:
    set32(c.r[3], ld32((c.r[17].w[0] + 192u)));
    st32((c.r[17].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 3;
L_0020C3B4:
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 196u), c.r[23].w[0]);  goto L_0020C3C8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 192u)));
    st32((c.r[17].w[0] + 196u), c.r[3].w[0]);
    c.budget -= 2;
L_0020C3C8:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[19], ld32((c.r[17].w[0] + 304u)));  goto L_0020C458; }
    set32(c.r[3], ld32((c.r[17].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020C408; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0020C454; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C3F0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x0020C3F0u) [[unlikely]] return; }
L_0020C3F0:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C400u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020C400u) [[unlikely]] return; }
L_0020C400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020C454; } }
L_0020C408:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 352u)));  goto L_0020C444; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C41Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x0020C41Cu) [[unlikely]] return; }
L_0020C41C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C424u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x0020C424u) [[unlikely]] return; }
L_0020C424:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020C434u) [[unlikely]] return; }
L_0020C434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C43Cu);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x0020C43Cu) [[unlikely]] return; }
L_0020C43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020C454; } }
L_0020C444:
    set32(c.r[4], ld32((c.r[28].w[0] - 30480u)));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C454u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 376u, depth + 1u); else { c.pc = 0x0020BA90u; return; } if (c.pc != 0x0020C454u) [[unlikely]] return; }
L_0020C454:
    set32(c.r[19], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 1;
L_0020C458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0020C490; } }
L_0020C460:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 272u)));  goto L_0020C480; }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C478u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020C478u) [[unlikely]] return; }
L_0020C478:
    st32((c.r[19].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 272u)));
    c.budget -= 2;
L_0020C480:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { set32(c.r[19], ld32((c.r[19].w[0] + 312u)));  goto L_0020C490; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], ld32((c.r[19].w[0] + 312u)));
    c.budget -= 2;
L_0020C490:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 276u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C460u | kUnwind; return; } goto L_0020C460; }
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], 0u - 16u);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 304u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    set32(c.r[4], c.r[4].w[0] + 15u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[29].w[0]);  if (t) { goto L_0020C4FC; } }
L_0020C4CC:
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { set32(c.r[19], ld32((c.r[19].w[0] + 312u)));  goto L_0020C4FC; }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C4F4u); set32(c.r[5], c.r[22].w[0] + c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020C4F4u) [[unlikely]] return; }
L_0020C4F4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], ld32((c.r[19].w[0] + 312u)));
    c.budget -= 2;
L_0020C4FC:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 272u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C4CCu | kUnwind; return; } goto L_0020C4CC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0020C580; } }
L_0020C510:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[8], ld32((c.r[17].w[0] + 196u)));  goto L_0020C564; }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[30].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[7], c.r[30].w[0] + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C538u); set32(c.r[5], c.r[22].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 56u, depth + 1u); else { c.pc = 0x0020C770u; return; } if (c.pc != 0x0020C538u) [[unlikely]] return; }
L_0020C538:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 312u)));  goto L_0020C580; }
    set32(c.r[8], ld32((c.r[17].w[0] + 196u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[30].w[0] + 176u);
    set32(c.r[7], c.r[30].w[0] + 160u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C55Cu); c.r[9].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 17u, depth + 1u); else { c.pc = 0x0020C170u; return; } if (c.pc != 0x0020C55Cu) [[unlikely]] return; }
L_0020C55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_0020C57C; } }
L_0020C564:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 32u);
    set32(c.r[7], c.r[17].w[0] + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C57Cu); c.r[9].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 17u, depth + 1u); else { c.pc = 0x0020C170u; return; } if (c.pc != 0x0020C57Cu) [[unlikely]] return; }
L_0020C57C:
    set32(c.r[18], ld32((c.r[18].w[0] + 312u)));
    c.budget -= 1;
L_0020C580:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 272u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C510u | kUnwind; return; } goto L_0020C510; }
    set32(c.r[3], ld32((c.r[17].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 292u)));  goto L_0020C5B8; }
    set32(c.r[18], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C5A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0020C5A4u) [[unlikely]] return; }
L_0020C5A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 5;
L_0020C5B8:
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 292u)));  goto L_0020C5D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C5CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x0020C5CCu) [[unlikely]] return; }
L_0020C5CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 1;
L_0020C5D0:
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020C5E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C5E4u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0020C5E4u) [[unlikely]] return; }
L_0020C5E4:
    set32(c.r[29], c.r[30].w[0] + 0u);
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0020C620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C638u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0020C638u) [[unlikely]] return; }
L_0020C638:
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[6], c.r[16].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C648u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0020C648u) [[unlikely]] return; }
L_0020C648:
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[6], c.r[16].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C658u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0020C658u) [[unlikely]] return; }
L_0020C658:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 96u);  goto L_0020C680; }
    set32(c.r[6], ld32((c.r[16].w[0] + 256u)));
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[7], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C67Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x0020C67Cu) [[unlikely]] return; }
L_0020C67C:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 1;
L_0020C680:
    set32(c.r[6], c.r[16].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C68Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x0020C68Cu) [[unlikely]] return; }
L_0020C68C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.f[2] = ld32((c.r[2].w[0] + 6208u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[16].w[0] + 232u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[4] = ld32((c.r[16].w[0] + 228u));
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 6212u));
    c.f[3] = ld32((c.r[16].w[0] + 224u));
    c.f[5] = c.f[0] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 6216u));
    set32(c.r[2], ld32((c.r[2].w[0] + 6220u)));
    st32((c.r[29].w[0] + 32u), c.f[2]);
    c.f[2] = c.f[3] ^ fp::kSign;
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.f[4] = c.f[4] ^ fp::kSign;
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[4]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C6F0u); st32((c.r[29].w[0] + 40u), c.f[5]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0020C6F0u) [[unlikely]] return; }
L_0020C6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020C700:
    set32(c.r[3], ld32((c.r[4].w[0] + 300u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 308u)));  goto L_0020C728; }
    set32(c.r[5], c.r[3].w[0] + 304u);
    set32(c.r[3], ld32((c.r[3].w[0] + 304u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0020C724; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 312u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0020C724:
    set32(c.r[5], ld32((c.r[4].w[0] + 308u)));
    c.budget -= 1;
L_0020C728:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 312u)));  goto L_0020C73C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 312u)));
    st32((c.r[5].w[0] + 312u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 312u)));
    c.budget -= 3;
L_0020C73C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 308u), 0u);  goto L_0020C750; }
    set32(c.r[3], ld32((c.r[4].w[0] + 308u)));
    st32((c.r[5].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 308u), 0u);
    c.budget -= 3;
L_0020C750:
    st32((c.r[4].w[0] + 312u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 300u), 0u);  c.pc = t; return; }
L_0020C760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020C770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020C78C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020C86C; } }
L_0020C78C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u - 256u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[14], ld32((c.r[8].w[0] + 64u)));
    c.budget -= 4;
L_0020C79C:
    c.budget -= 2;
    if (c.r[14].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_0020C838; }
    set32(c.r[2], c.r[14].w[0] >> 24);
    set32(c.r[12], c.r[14].w[0] >> 16);
    set32(c.r[9], c.r[5].w[0] << 2);
    c.r[15].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[10], c.r[14].w[0] >> 8);
    c.r[13].d[0] = c.r[12].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[12].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    c.r[10].d[0] = c.r[14].d[0] & 255ull;
    set32(c.r[14], c.r[2].w[0] >> 24);
    c.r[24].d[0] = c.r[14].d[0] & 255ull;
    set32(c.r[14], c.r[2].w[0] >> 16);
    c.r[14].d[0] = c.r[14].d[0] & 255ull;
    mmi::mult(c, 1, c.r[14].w[0], c.r[13].w[0]);
    c.r[14].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[24].w[0], c.r[15].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[13], c.r[2].w[0] >> 8);
    set32(c.r[14], c.r[14].w[0] + 255u);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    mmi::mult(c, 1, c.r[2].w[0], c.r[10].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[14], c.r[14].w[0] >> 8);
    mmi::mult(c, 0, c.r[13].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 255u);
    set32(c.r[10], c.r[14].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] >> 8);
    set32(c.r[13], c.r[15].w[0] + 255u);
    set32(c.r[13], c.r[13].w[0] >> 8);
    set32(c.r[13], c.r[13].w[0] << 24);
    c.r[13].d[0] = c.r[13].d[0] | c.r[10].d[0];
    set32(c.r[10], c.r[12].w[0] + 255u);
    c.r[10].d[0] = c.r[10].d[0] & c.r[11].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[13].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    c.budget -= 37;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0]), c.r[2].w[0]);  if (t) { goto L_0020C848; } }
L_0020C838:
    set32(c.r[9], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] + 176u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[9].w[0]);
    c.budget -= 4;
L_0020C848:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[14], ld32((c.r[8].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C79Cu | kUnwind; return; } goto L_0020C79C; }
    set32(c.r[5], c.r[4].w[0] + 32u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C868u); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0020C868u) [[unlikely]] return; }
L_0020C868:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0020C86C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020C880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C898u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x0020C898u) [[unlikely]] return; }
L_0020C898:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020C8C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_0020C8D0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30480u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B9C0u | kUnwind; return; } [[clang::musttail]] return unit_003A(c, 370u, depth); }
L_0020C8E0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30480u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020BA50u | kUnwind; return; } [[clang::musttail]] return unit_003A(c, 374u, depth); }
L_0020C8F0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30480u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020BB20u | kUnwind; return; } [[clang::musttail]] return unit_003A(c, 380u, depth); }
L_0020C900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C918u); set32(c.r[4], 0u + 2184u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0020C918u) [[unlikely]] return; }
L_0020C918:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0020C930; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C92Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 352u, depth + 1u); else { c.pc = 0x0020B720u; return; } if (c.pc != 0x0020C92Cu) [[unlikely]] return; }
L_0020C92C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0020C930:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020C940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30480u)));  c.pc = t; return; }
L_0020C950:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C97Cu); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0020C97Cu) [[unlikely]] return; }
L_0020C97C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52500000u);
    set32(c.r[3], c.r[3].w[0] + 17216u);
    c.r[2].d[0] = c.r[2].d[0] | 21325ull;
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C99Cu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x0020CBE0u; return; } if (c.pc != 0x0020C99Cu) [[unlikely]] return; }
L_0020C99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C9A4u); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0020C9A4u) [[unlikely]] return; }
L_0020C9A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 52u), c.r[2].w[0]);  goto L_0020C9D0; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C9CCu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0020C9CCu) [[unlikely]] return; }
L_0020C9CC:
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0020C9D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020CA00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CA24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0020CA24u) [[unlikely]] return; }
L_0020CA24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52500000u);
    set32(c.r[3], c.r[3].w[0] + 17216u);
    c.r[2].d[0] = c.r[2].d[0] | 21325ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CA44u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x0020CBE0u; return; } if (c.pc != 0x0020CA44u) [[unlikely]] return; }
L_0020CA44:
    st32((c.r[16].w[0] + 56u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 60u), c.r[17].w[0]);  if (t) { goto L_0020CA58; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], 0u - 1u);  goto L_0020CA80; }
L_0020CA58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CA68u); set32(c.r[5], c.r[5].w[0] + 28720u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0020CA68u) [[unlikely]] return; }
L_0020CA68:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0020CAA0; } }
L_0020CA80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
L_0020CAA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020CAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020CB04; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0020CB08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CAF4u);  if (depth < kMaxDepth) unit_0013(c, 393u, depth + 1u); else { c.pc = 0x0016FF80u; return; } if (c.pc != 0x0020CAF4u) [[unlikely]] return; }
L_0020CAF4:
    c.f[12] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CB00u); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0014(c, 7u, depth + 1u); else { c.pc = 0x001700C0u; return; } if (c.pc != 0x0020CB00u) [[unlikely]] return; }
L_0020CB00:
    st32((c.r[17].w[0] + 84u), c.r[16].w[0]);
    c.budget -= 1;
L_0020CB04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0020CB08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020CB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020CB5C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0020CB60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CB58u);  if (depth < kMaxDepth) unit_0014(c, 7u, depth + 1u); else { c.pc = 0x001700C0u; return; } if (c.pc != 0x0020CB58u) [[unlikely]] return; }
L_0020CB58:
    st32((c.r[16].w[0] + 88u), c.f[20]);
    c.budget -= 1;
L_0020CB5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0020CB60:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020CB70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020CBC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 17216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CB9Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 88u, depth + 1u); else { c.pc = 0x0020CC10u; return; } if (c.pc != 0x0020CB9Cu) [[unlikely]] return; }
L_0020CB9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CBA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0020CBA8u) [[unlikely]] return; }
L_0020CBA8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020CBC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CBC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0020CBC0u) [[unlikely]] return; }
L_0020CBC0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020CBC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020CBE0:
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), 0u);  c.pc = t; return; }
L_0020CC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0020CC44; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CC3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020CC3Cu) [[unlikely]] return; }
L_0020CC3C:
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_0020CC44:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_0020CC64; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CC5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020CC5Cu) [[unlikely]] return; }
L_0020CC5C:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 2;
L_0020CC64:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 80u)));  goto L_0020CC94; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CC7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020CC7Cu) [[unlikely]] return; }
L_0020CC7C:
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020CC94; } }
L_0020CC8C:
    st32((c.r[3].w[0] + 336u), 0u);
    set32(c.r[3], ld32((c.r[3].w[0] + 368u)));
    c.budget -= 2;
L_0020CC94:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020CC8Cu | kUnwind; return; } goto L_0020CC8C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020CCC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0020D0B0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 68u)));  goto L_0020CD00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020D0AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_0020CD00:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0020CD30; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 28656u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0020C000u < 16384u) { entry = entries_003B[(t - 0x0020C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0020CD2C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0020CD30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CD3Cu); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 88u, depth + 1u); else { c.pc = 0x0020CC10u; return; } if (c.pc != 0x0020CD3Cu) [[unlikely]] return; }
L_0020CD3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0020D0AC; } }
L_0020CD5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_0020CDFC; }
L_0020CD68:
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020D0AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020CDA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[6].w[0] + 72u)));  goto L_0020CDBC; }
L_0020CDA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CDB0u); set32(c.r[5], c.r[5].w[0] + 28733u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0020CDB0u) [[unlikely]] return; }
L_0020CDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020CD2Cu | kUnwind; return; } goto L_0020CD2C; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 72u)));
    c.budget -= 1;
L_0020CDBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CDCCu); c.r[5].d[0] = c.r[2].d[0] | 20562ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0020CDCCu) [[unlikely]] return; }
L_0020CDCC:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[5].d[0] = c.r[2].d[0] | 17752ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CDE8u); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0020CDE8u) [[unlikely]] return; }
L_0020CDE8:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
L_0020CDF8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0020CDFC:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0020CE8C; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0020CE8C; } }
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20562ull;
    set32(c.r[3], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[3].d[0] & c.r[8].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020CE8C; } }
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[2].d[0] = c.r[2].d[0] | 17752ull;
    set32(c.r[3], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[3].d[0] & c.r[8].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020CEA4; } }
L_0020CE8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CE9Cu); set32(c.r[5], c.r[5].w[0] + 28748u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0020CE9Cu) [[unlikely]] return; }
L_0020CE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020CD2Cu | kUnwind; return; } goto L_0020CD2C; } }
L_0020CEA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CEACu);  if (depth < kMaxDepth) unit_0039(c, 171u, depth + 1u); else { c.pc = 0x00205E80u; return; } if (c.pc != 0x0020CEACu) [[unlikely]] return; }
L_0020CEAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 4u);  goto L_0020CF5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CEBCu); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0020CEBCu) [[unlikely]] return; }
L_0020CEBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), c.r[4].w[0]);  goto L_0020CEE4; }
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CEDCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 139u, depth + 1u); else { c.pc = 0x00205870u; return; } if (c.pc != 0x0020CEDCu) [[unlikely]] return; }
L_0020CEDC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.budget -= 2;
L_0020CEE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 3;
L_0020CEF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020D0AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020CF28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020CF40; } }
L_0020CF28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CF38u); set32(c.r[5], c.r[5].w[0] + 28760u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0020CF38u) [[unlikely]] return; }
L_0020CF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020CD2Cu | kUnwind; return; } goto L_0020CD2C; } }
L_0020CF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CF48u);  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x0020CF48u) [[unlikely]] return; }
L_0020CF48:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
L_0020CF58:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0020CF5C:
    set32(c.r[4], 0u + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CF68u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0020CF68u) [[unlikely]] return; }
L_0020CF68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), c.r[4].w[0]);  goto L_0020CF88; }
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CF80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 118u, depth + 1u); else { c.pc = 0x002113E0u; return; } if (c.pc != 0x0020CF80u) [[unlikely]] return; }
L_0020CF80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 2;
L_0020CF88:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 3;
L_0020CF94:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020D0AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020CFCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 128u);  goto L_0020CFE8; }
L_0020CFCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CFDCu); set32(c.r[5], c.r[5].w[0] + 28770u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0020CFDCu) [[unlikely]] return; }
L_0020CFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020CD2Cu | kUnwind; return; } goto L_0020CD2C; } }
    set32(c.r[4], 0u + 128u);
    c.budget -= 1;
L_0020CFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CFF0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0020CFF0u) [[unlikely]] return; }
L_0020CFF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), c.r[4].w[0]);  goto L_0020D030; }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0020D020; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[5].w[0] + 60u)));  if (t) { goto L_0020D020; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020D020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D028u); set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0013(c, 380u, depth + 1u); else { c.pc = 0x0016FE10u; return; } if (c.pc != 0x0020D028u) [[unlikely]] return; }
L_0020D028:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 72u), c.r[4].w[0]);
    c.budget -= 2;
L_0020D030:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 3;
L_0020D03C:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_0020D060; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D058u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020D058u) [[unlikely]] return; }
L_0020D058:
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 2;
L_0020D060:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0020D088; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), 0u);  goto L_0020D084; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D080u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020D080u) [[unlikely]] return; }
L_0020D080:
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_0020D084:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0020D088:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 9;
L_0020D0AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0020D0B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020D0C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0020D108; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 80u)));  if (t) { goto L_0020D0F4; } }
L_0020D0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D0F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 155u, depth + 1u); else { c.pc = 0x0020D590u; return; } if (c.pc != 0x0020D0F0u) [[unlikely]] return; }
L_0020D0F0:
    set32(c.r[16], ld32((c.r[16].w[0] + 368u)));
    c.budget -= 1;
L_0020D0F4:
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020D0E8u | kUnwind; return; } goto L_0020D0E8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0020D108:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020D120:
    st32((c.r[5].w[0] + 364u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[5].w[0] + 368u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 80u), c.r[5].w[0]);  goto L_0020D140; }
    st32((c.r[3].w[0] + 364u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    c.budget -= 2;
L_0020D140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020D150:
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 364u)));  goto L_0020D170; }
    set32(c.r[3], ld32((c.r[5].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0020D194; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 364u), 0u);  if (t) { goto L_0020D194; } }
L_0020D170:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 368u)));  goto L_0020D184; }
    set32(c.r[3], ld32((c.r[5].w[0] + 368u)));
    st32((c.r[4].w[0] + 368u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 368u)));
    c.budget -= 3;
L_0020D184:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[5].w[0] + 364u), 0u);  goto L_0020D198; }
    set32(c.r[3], ld32((c.r[5].w[0] + 364u)));
    st32((c.r[4].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 2;
L_0020D194:
    st32((c.r[5].w[0] + 364u), 0u);
    c.budget -= 1;
L_0020D198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 368u), 0u);  c.pc = t; return; }
L_0020D1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D1BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 393u, depth + 1u); else { c.pc = 0x0020BD00u; return; } if (c.pc != 0x0020D1BCu) [[unlikely]] return; }
L_0020D1BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 17184u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[17].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 17152u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 336u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 348u), c.r[2].w[0]);
    st16((c.r[17].w[0] + 360u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 364u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D200u); st32((c.r[17].w[0] + 368u), 0u);  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x0020D200u) [[unlikely]] return; }
L_0020D200:
    c.f[0] = ld32((c.r[17].w[0] + 352u));
    st32((c.r[17].w[0] + 344u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 336u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D214u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 123u, depth + 1u); else { c.pc = 0x0020D120u; return; } if (c.pc != 0x0020D214u) [[unlikely]] return; }
L_0020D214:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020D230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020D278; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D260u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 398u, depth + 1u); else { c.pc = 0x0020BDB0u; return; } if (c.pc != 0x0020D260u) [[unlikely]] return; }
L_0020D260:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020D27C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D278u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0020D278u) [[unlikely]] return; }
L_0020D278:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020D27C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020D290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020D304; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 17152u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 336u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0020D2CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D2CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 124u, depth + 1u); else { c.pc = 0x0020D150u; return; } if (c.pc != 0x0020D2CCu) [[unlikely]] return; }
L_0020D2CC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0020D2F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17184u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D2ECu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 398u, depth + 1u); else { c.pc = 0x0020BDB0u; return; } if (c.pc != 0x0020D2ECu) [[unlikely]] return; }
L_0020D2EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0020D2F0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020D308; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D304u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0020D304u) [[unlikely]] return; }
L_0020D304:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020D308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020D320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020D348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020D3A8; } }
L_0020D348:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0020D364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D358u); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0013(c, 391u, depth + 1u); else { c.pc = 0x0016FF50u; return; } if (c.pc != 0x0020D358u) [[unlikely]] return; }
L_0020D358:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 340u), c.r[16].w[0]);  goto L_0020D378; }
L_0020D364:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D370u); set32(c.r[4], c.r[4].w[0] + 28790u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0020D370u) [[unlikely]] return; }
L_0020D370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020D3A8; } }
L_0020D378:
    set32(c.r[4], ld32((c.r[17].w[0] + 336u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D384u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 78u, depth + 1u); else { c.pc = 0x0020CAC0u; return; } if (c.pc != 0x0020D384u) [[unlikely]] return; }
L_0020D384:
    set32(c.r[2], ld32((c.r[17].w[0] + 336u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D390u); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0013(c, 395u, depth + 1u); else { c.pc = 0x0016FFC0u; return; } if (c.pc != 0x0020D390u) [[unlikely]] return; }
L_0020D390:
    st32((c.r[17].w[0] + 352u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 336u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D3A0u); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0014(c, 3u, depth + 1u); else { c.pc = 0x00170040u; return; } if (c.pc != 0x0020D3A0u) [[unlikely]] return; }
L_0020D3A0:
    st32((c.r[17].w[0] + 356u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0020D3A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020D3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0020D3DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D3DCu); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0013(c, 391u, depth + 1u); else { c.pc = 0x0016FF50u; return; } if (c.pc != 0x0020D3DCu) [[unlikely]] return; }
L_0020D3DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020D3F0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[4].w[0] + 352u));  goto L_0020D434; }
    c.f[0] = ld32((c.r[4].w[0] + 356u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = ld32((c.r[4].w[0] + 352u));  if (t) { goto L_0020D414; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0020D414:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[4].w[0] + 344u), c.f[12]);  goto L_0020D49C; }
    c.f[12] = c.f[1];
    st32((c.r[4].w[0] + 344u), c.f[12]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020D49C; } }
    c.f[1] = ld32((c.r[4].w[0] + 352u));
    c.budget -= 1;
L_0020D434:
    c.f[2] = ld32((c.r[4].w[0] + 356u));
    c.f[0] = 0u;
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020D45C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 344u), c.f[2]);  if (t) { goto L_0020D49C; } }
L_0020D458:
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[3]);
    c.budget -= 1;
L_0020D45C:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020D458u | kUnwind; return; } goto L_0020D458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020D480; } }
L_0020D47C:
    c.f[12] = fp::ee::sub(c.fcr31, c.f[12], c.f[3]);
    c.budget -= 1;
L_0020D480:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020D47Cu | kUnwind; return; } goto L_0020D47C; } }
    st32((c.r[4].w[0] + 344u), c.f[12]);
    c.budget -= 1;
L_0020D49C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020D4B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020D4D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020D4FC; } }
L_0020D4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D4E0u); set32(c.r[5], ld32((c.r[17].w[0] + 340u)));  if (depth < kMaxDepth) unit_003B(c, 78u, depth + 1u); else { c.pc = 0x0020CAC0u; return; } if (c.pc != 0x0020D4E0u) [[unlikely]] return; }
L_0020D4E0:
    c.f[12] = ld32((c.r[17].w[0] + 344u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D4ECu); set32(c.r[4], ld32((c.r[17].w[0] + 336u)));  if (depth < kMaxDepth) unit_003B(c, 81u, depth + 1u); else { c.pc = 0x0020CB20u; return; } if (c.pc != 0x0020D4ECu) [[unlikely]] return; }
L_0020D4EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 336u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D4FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 8u, depth + 1u); else { c.pc = 0x001700D0u; return; } if (c.pc != 0x0020D4FCu) [[unlikely]] return; }
L_0020D4FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020D510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020D538; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 340u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D530u); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0014(c, 15u, depth + 1u); else { c.pc = 0x001701B0u; return; } if (c.pc != 0x0020D530u) [[unlikely]] return; }
L_0020D530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0020D540; } }
L_0020D538:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0020D540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020D550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020D57C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 340u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D574u); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0014(c, 14u, depth + 1u); else { c.pc = 0x00170180u; return; } if (c.pc != 0x0020D574u) [[unlikely]] return; }
L_0020D574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0020D584; } }
L_0020D57C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0020D584:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020D590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0020D604; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.f[4] = ld32((c.r[4].w[0] + 348u));  if (t) { goto L_0020D5C4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0020D5E0; } }
L_0020D5C4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_0020D5E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.f[1] = ld32((c.r[4].w[0] + 344u));
    c.f[0] = 0u;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D600u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x0020D600u) [[unlikely]] return; }
L_0020D600:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0020D604:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020D610:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0020D88C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020D888; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 340u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D658u); set32(c.r[17], ld32((c.r[4].w[0] + 72u)));  if (depth < kMaxDepth) unit_003B(c, 78u, depth + 1u); else { c.pc = 0x0020CAC0u; return; } if (c.pc != 0x0020D658u) [[unlikely]] return; }
L_0020D658:
    c.f[12] = ld32((c.r[18].w[0] + 344u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D664u); set32(c.r[4], ld32((c.r[18].w[0] + 336u)));  if (depth < kMaxDepth) unit_003B(c, 81u, depth + 1u); else { c.pc = 0x0020CB20u; return; } if (c.pc != 0x0020D664u) [[unlikely]] return; }
L_0020D664:
    set32(c.r[16], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld16((c.r[18].w[0] + 360u));  goto L_0020D788; }
    set32(c.r[2], c.r[16].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0020D690; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0020D6A8; } }
L_0020D690:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_0020D6A8:
    c.f[0] = ld32((c.r[28].w[0] - 32704u));
    set32(c.r[2], c.r[16].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 92u), c.f[0]);  if (t) { goto L_0020D6CC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0020D6E8; } }
L_0020D6CC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0020D6E8:
    c.f[0] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[2], c.r[16].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_0020D70C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0020D728; } }
L_0020D70C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0020D728:
    c.f[0] = ld32((c.r[28].w[0] - 32700u));
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 84u), c.f[0]);  if (t) { goto L_0020D748; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0020D764; } }
L_0020D748:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0020D764:
    c.f[0] = ld32((c.r[28].w[0] - 32700u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D784u); st32((c.r[17].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001D(c, 234u, depth + 1u); else { c.pc = 0x00196630u; return; } if (c.pc != 0x0020D784u) [[unlikely]] return; }
L_0020D784:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 360u));
    c.budget -= 1;
L_0020D788:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0020D81C; }
    set32(c.r[19], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D7A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x0020D7A0u) [[unlikely]] return; }
L_0020D7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D7A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0020D7A8u) [[unlikely]] return; }
L_0020D7A8:
    set32(c.r[4], ld32((c.r[19].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D7B8u); c.r[6].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0020D7B8u) [[unlikely]] return; }
L_0020D7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D7C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0020D7C0u) [[unlikely]] return; }
L_0020D7C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 352u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D7D4u); st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_003B(c, 64u, depth + 1u); else { c.pc = 0x0020C8F0u; return; } if (c.pc != 0x0020D7D4u) [[unlikely]] return; }
L_0020D7D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020D7F8; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D7F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 145u, depth + 1u); else { c.pc = 0x0016DB20u; return; } if (c.pc != 0x0020D7F0u) [[unlikely]] return; }
L_0020D7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0020D80C; } }
L_0020D7F8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D808u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 142u, depth + 1u); else { c.pc = 0x0016DA90u; return; } if (c.pc != 0x0020D808u) [[unlikely]] return; }
L_0020D808:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0020D80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D814u);  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x0020D814u) [[unlikely]] return; }
L_0020D814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0020D85C; } }
L_0020D81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D824u);  if (depth < kMaxDepth) unit_003B(c, 64u, depth + 1u); else { c.pc = 0x0020C8F0u; return; } if (c.pc != 0x0020D824u) [[unlikely]] return; }
L_0020D824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020D848; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D840u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 145u, depth + 1u); else { c.pc = 0x0016DB20u; return; } if (c.pc != 0x0020D840u) [[unlikely]] return; }
L_0020D840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020D858; } }
L_0020D848:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D858u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 142u, depth + 1u); else { c.pc = 0x0016DA90u; return; } if (c.pc != 0x0020D858u) [[unlikely]] return; }
L_0020D858:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0020D85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D864u);  if (depth < kMaxDepth) unit_003B(c, 63u, depth + 1u); else { c.pc = 0x0020C8E0u; return; } if (c.pc != 0x0020D864u) [[unlikely]] return; }
L_0020D864:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0020D888; } }
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[17].w[0] + 96u);
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D888u); set32(c.r[5], c.r[5].w[0] + 28704u);  if (depth < kMaxDepth) unit_001D(c, 234u, depth + 1u); else { c.pc = 0x00196630u; return; } if (c.pc != 0x0020D888u) [[unlikely]] return; }
L_0020D888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0020D88C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020D8B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].sd[0] < 0; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020D8E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D8DCu);  if (depth < kMaxDepth) unit_003B(c, 151u, depth + 1u); else { c.pc = 0x0020D510u; return; } if (c.pc != 0x0020D8DCu) [[unlikely]] return; }
L_0020D8DC:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0020D8F4; }
L_0020D8E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0020D918; } }
L_0020D8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D8FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 147u, depth + 1u); else { c.pc = 0x0020D4B0u; return; } if (c.pc != 0x0020D8FCu) [[unlikely]] return; }
L_0020D8FC:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D918u); st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 213u, depth + 1u); else { c.pc = 0x0019E620u; return; } if (c.pc != 0x0020D918u) [[unlikely]] return; }
L_0020D918:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020D930:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D95Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0020D95Cu) [[unlikely]] return; }
L_0020D95C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 17328u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30476u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x4D580000u);  goto L_0020D97C; }
    st32((c.r[28].w[0] - 30476u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D580000u);
    c.budget -= 2;
L_0020D97C:
    set32(c.r[4], 0u + 8u);
    c.r[2].d[0] = c.r[2].d[0] | 21575ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D990u); st32((c.r[16].w[0] + 5648u), 0u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x0020D990u) [[unlikely]] return; }
L_0020D990:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53460000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D9A0u); c.r[4].d[0] = c.r[2].d[0] | 20052ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x0020D9A0u) [[unlikely]] return; }
L_0020D9A0:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 8u);  goto L_0020D9C0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D9B8u); set32(c.r[5], c.r[5].w[0] + 29025u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0020D9B8u) [[unlikely]] return; }
L_0020D9B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_0020DB48; } }
L_0020D9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D9C8u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x0020D9C8u) [[unlikely]] return; }
L_0020D9C8:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48460000u);
    c.r[4].d[0] = c.r[3].d[0] | 20562ull;
    set32(c.r[21], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DA20u); set32(c.r[22], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x0020DA20u) [[unlikely]] return; }
L_0020DA20:
    c.budget -= 2;
    if (c.r[22].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0020DA30; }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_0020DA30:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DA44u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 379u, depth + 1u); else { c.pc = 0x001673C0u; return; } if (c.pc != 0x0020DA44u) [[unlikely]] return; }
L_0020DA44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020DA64; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DA5Cu); set32(c.r[5], c.r[5].w[0] + 29048u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0020DA5Cu) [[unlikely]] return; }
L_0020DA5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020DB44; } }
L_0020DA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DA6Cu);  if (depth < kMaxDepth) unit_0011(c, 384u, depth + 1u); else { c.pc = 0x001674B0u; return; } if (c.pc != 0x0020DA6Cu) [[unlikely]] return; }
L_0020DA6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DA78u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0011(c, 445u, depth + 1u); else { c.pc = 0x00167F10u; return; } if (c.pc != 0x0020DA78u) [[unlikely]] return; }
L_0020DA78:
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[2], c.r[16].w[0] + 96u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 5552u);
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 5636u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 5632u), 0u);
    st32((c.r[16].w[0] + 5628u), 0u);
    st16((c.r[16].w[0] + 5626u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
L_0020DAA4:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] - 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 52u);
    set32(c.r[3], c.r[2].w[0] << 2);
    st32((c.r[5].w[0] + 92u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < 125ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 52u);
    st32((c.r[5].w[0] + 88u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 84u), 0u);
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[5].w[0] + 82u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020DAA4u | kUnwind; return; } goto L_0020DAA4; } }
    set32(c.r[2], c.r[16].w[0] + 52u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[16].w[0] + 5644u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 5640u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0020DB64; } }
L_0020DB44:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0020DB48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
L_0020DB64:
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
L_0020DB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020DC0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 17328u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 5640u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30476u)));  goto L_0020DBD4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DBD0u); set32(c.r[5], c.r[5].w[0] + 29073u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0020DBD0u) [[unlikely]] return; }
L_0020DBD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30476u)));
    c.budget -= 1;
L_0020DBD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0020DBE0; } }
    st32((c.r[28].w[0] - 30476u), 0u);
    c.budget -= 1;
L_0020DBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DBE8u);  if (depth < kMaxDepth) unit_0011(c, 382u, depth + 1u); else { c.pc = 0x00167470u; return; } if (c.pc != 0x0020DBE8u) [[unlikely]] return; }
L_0020DBE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DBF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0020DBF4u) [[unlikely]] return; }
L_0020DBF4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0020DC10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DC0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0020DC0Cu) [[unlikely]] return; }
L_0020DC0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0020DC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020DC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DC4Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 197u, depth + 1u); else { c.pc = 0x0020DC90u; return; } if (c.pc != 0x0020DC4Cu) [[unlikely]] return; }
L_0020DC4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 5648u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[16].w[0] + 92u), c.r[3].w[0]);  goto L_0020DC68; }
    st32((c.r[17].w[0] + 5648u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_0020DC74; } }
L_0020DC68:
    set32(c.r[3], ld32((c.r[17].w[0] + 5648u)));
    st32((c.r[3].w[0] + 88u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 5648u), c.r[16].w[0]);
    c.budget -= 3;
L_0020DC74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020DC90:
    set32(c.r[3], ld32((c.r[4].w[0] + 5648u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 88u)));  goto L_0020DCB0; }
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 5648u), c.r[3].w[0]);  if (t) { goto L_0020DCD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 88u), 0u);  if (t) { goto L_0020DCD4; } }
L_0020DCB0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 92u)));  goto L_0020DCC4; }
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 92u)));
    c.budget -= 3;
L_0020DCC4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[5].w[0] + 92u), 0u);  goto L_0020DCD8; }
    set32(c.r[3], ld32((c.r[5].w[0] + 88u)));
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 2;
L_0020DCD4:
    st32((c.r[5].w[0] + 92u), 0u);
    c.budget -= 1;
L_0020DCD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 88u), 0u);  c.pc = t; return; }
L_0020DCE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 5648u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020DD5C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0020DD30; } }
L_0020DD1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 21u, depth + 1u); else { c.pc = 0x002102D0u; return; } if (c.pc != 0x0020DD24u) [[unlikely]] return; }
L_0020DD24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 38u, depth + 1u); else { c.pc = 0x002107C0u; return; } if (c.pc != 0x0020DD2Cu) [[unlikely]] return; }
L_0020DD2C:
    set32(c.r[16], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_0020DD30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020DD1Cu | kUnwind; return; } goto L_0020DD1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD40u);  if (depth < kMaxDepth) unit_0011(c, 385u, depth + 1u); else { c.pc = 0x001674C0u; return; } if (c.pc != 0x0020DD40u) [[unlikely]] return; }
L_0020DD40:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0020DD6C; } }
L_0020DD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 38u, depth + 1u); else { c.pc = 0x002107C0u; return; } if (c.pc != 0x0020DD58u) [[unlikely]] return; }
L_0020DD58:
    set32(c.r[16], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_0020DD5C:
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020DD50u | kUnwind; return; } goto L_0020DD50; } }
L_0020DD6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020DD80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0020DDB0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u - 16385u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DDACu); st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 387u, depth + 1u); else { c.pc = 0x00167500u; return; } if (c.pc != 0x0020DDACu) [[unlikely]] return; }
L_0020DDAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0020DDB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020DDC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DDE4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003B(c, 214u, depth + 1u); else { c.pc = 0x0020DFB0u; return; } if (c.pc != 0x0020DDE4u) [[unlikely]] return; }
L_0020DDE4:
    set32(c.r[17], ld32((c.r[19].w[0] + 5640u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0020DE40; } }
L_0020DDF0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[17], ld32((c.r[17].w[0] + 36u)));  goto L_0020DE40; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DE08u); set32(c.r[6], 0u + 28u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x0020DE08u) [[unlikely]] return; }
L_0020DE08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020DE3C; } }
    set32(c.r[2], c.r[19].w[0] + 52u);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[2], 0u + 44u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0020DECC; } }
L_0020DE3C:
    set32(c.r[17], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_0020DE40:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020DDF0u | kUnwind; return; } goto L_0020DDF0; }
    set32(c.r[17], ld32((c.r[19].w[0] + 5644u)));
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_0020DE5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020DECC; } }
L_0020DE5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_0020DE6C; }
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 2;
L_0020DE6C:
    st32((c.r[19].w[0] + 5644u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 5640u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 5640u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0020DE8C; }
    st32((c.r[2].w[0] + 40u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0020DE8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DE9Cu); st32((c.r[19].w[0] + 5640u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0020DE9Cu) [[unlikely]] return; }
L_0020DE9C:
    set32(c.r[2], c.r[19].w[0] + 52u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[2], 0u + 44u);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[16].w[0]));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    st16((c.r[17].w[0] + 30u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 12;
L_0020DECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020DEF0:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 84u)));
    set32(c.r[6], c.r[5].w[0] + 52u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[5].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0020DF78; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 36u)));  goto L_0020DF3C; }
    set32(c.r[3], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_0020DF40; } }
L_0020DF3C:
    st32((c.r[4].w[0] + 5640u), c.r[3].w[0]);
    c.budget -= 1;
L_0020DF40:
    set32(c.r[5], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { st32((c.r[6].w[0] + 40u), 0u);  goto L_0020DF58; }
    set32(c.r[3], ld32((c.r[6].w[0] + 40u)));
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 40u), 0u);
    c.budget -= 3;
L_0020DF58:
    set32(c.r[3], ld32((c.r[4].w[0] + 5644u)));
    st32((c.r[6].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 5644u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 5644u), c.r[6].w[0]);  goto L_0020DF74; }
    st32((c.r[3].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 5644u), c.r[6].w[0]);
    c.budget -= 2;
L_0020DF74:
    st16((c.r[6].w[0] + 30u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0020DF78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020DF80:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 52u);  c.pc = t; return; }
L_0020DFB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0020DFB8:
    set32(c.r[4], c.r[6].w[0] << 1);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020DFB8u | kUnwind; return; } goto L_0020DFB8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020DFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[11], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 17312u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x44200000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    st32((c.r[4].w[0] + 12u), c.r[11].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 144u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 124u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 128u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 73u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 74u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 59;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E0DCu); st32((c.r[4].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_003B(c, 228u, depth + 1u); else { c.pc = 0x0020E270u; return; } if (c.pc != 0x0020E0DCu) [[unlikely]] return; }
L_0020E0DC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x54580000u);  goto L_0020E0F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E0F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 195u, depth + 1u); else { c.pc = 0x0020DC30u; return; } if (c.pc != 0x0020E0F0u) [[unlikely]] return; }
L_0020E0F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x54580000u);
    c.budget -= 1;
L_0020E0F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 17748ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020E110:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0020E250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 17312u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 24u)));  goto L_0020E1AC; }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[16].d[0] = c.lo.d[0];  if (t) { goto L_0020E184; } }
L_0020E164:
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 5;
    if (c.r[5].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0020E184; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E180u); set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));  if (depth < kMaxDepth) unit_003B(c, 212u, depth + 1u); else { c.pc = 0x0020DEF0u; return; } if (c.pc != 0x0020E180u) [[unlikely]] return; }
L_0020E180:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0020E184:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020E164u | kUnwind; return; } goto L_0020E164; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0020E1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E1A4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0020E1A4u) [[unlikely]] return; }
L_0020E1A4:
    st32((c.r[19].w[0] + 20u), 0u);
    c.budget -= 1;
L_0020E1A8:
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_0020E1AC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));  goto L_0020E1C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E1BCu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0020E1BCu) [[unlikely]] return; }
L_0020E1BC:
    st32((c.r[19].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));
    c.budget -= 2;
L_0020E1C4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 104u)));  goto L_0020E1D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E1D4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 197u, depth + 1u); else { c.pc = 0x0020DC90u; return; } if (c.pc != 0x0020E1D4u) [[unlikely]] return; }
L_0020E1D4:
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 1;
L_0020E1D8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 144u);  goto L_0020E1EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E1E8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 66u, depth + 1u); else { c.pc = 0x00210D70u; return; } if (c.pc != 0x0020E1E8u) [[unlikely]] return; }
L_0020E1E8:
    set32(c.r[2], c.r[19].w[0] + 144u);
    c.budget -= 1;
L_0020E1EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020E218; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0020E218; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0020E218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E218u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0020E218u) [[unlikely]] return; }
L_0020E218:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_0020E23C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 7;
L_0020E23C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0020E254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E250u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0020E250u) [[unlikely]] return; }
L_0020E250:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0020E254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020E270:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020E2FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[17].d[0] = c.lo.d[0];  if (t) { goto L_0020E2D8; } }
L_0020E2B8:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 5;
    if (c.r[5].sd[0] < 0) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0020E2D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E2D4u); set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));  if (depth < kMaxDepth) unit_003B(c, 212u, depth + 1u); else { c.pc = 0x0020DEF0u; return; } if (c.pc != 0x0020E2D4u) [[unlikely]] return; }
L_0020E2D4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0020E2D8:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020E2B8u | kUnwind; return; } goto L_0020E2B8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_0020E300; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E2F8u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0020E2F8u) [[unlikely]] return; }
L_0020E2F8:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_0020E2FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0020E300:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), c.r[20].w[0]);  goto L_0020E318; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E310u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0020E310u) [[unlikely]] return; }
L_0020E310:
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), c.r[20].w[0]);
    c.budget -= 2;
L_0020E318:
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E330u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0020E330u) [[unlikely]] return; }
L_0020E330:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E348u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0020E348u) [[unlikely]] return; }
L_0020E348:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0020E3D4; } }
L_0020E354:
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[17], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E390u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_003C(c, 18u, depth + 1u); else { c.pc = 0x00210260u; return; } if (c.pc != 0x0020E390u) [[unlikely]] return; }
L_0020E390:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], 0u + 10u);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 17;
L_0020E3D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020E354u | kUnwind; return; } goto L_0020E354; }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020E420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020E47C; } }
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E44Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 12u, depth + 1u); else { c.pc = 0x00210140u; return; } if (c.pc != 0x0020E44Cu) [[unlikely]] return; }
L_0020E44C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st16((c.r[3].w[0] + 18u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 12;
L_0020E47C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020E490:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020E4DC; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0020E4DC:
    c.budget -= 2;
    if (c.r[19].sd[0] >= 0) { set32(c.r[4], ld32((c.r[20].w[0] + 32u)));  goto L_0020E4EC; }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 2;
L_0020E4EC:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020E4FC; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0020E4FC:
    c.budget -= 2;
    if (c.r[6].sd[0] >= 0) { set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);  goto L_0020E50C; }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    c.budget -= 2;
L_0020E50C:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020E51C; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0020E51C:
    c.budget -= 2;
    if (c.r[7].sd[0] >= 0) { set32(c.r[3], c.r[4].w[0] - c.r[6].w[0]);  goto L_0020E52C; }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] - c.r[6].w[0]);
    c.budget -= 2;
L_0020E52C:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020E53C; } }
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0020E53C:
    c.budget -= 2;
    if (c.r[8].sd[0] >= 0) { set32(c.r[3], c.r[6].w[0] + c.r[8].w[0]);  goto L_0020E54C; }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[8].w[0]);
    c.budget -= 2;
L_0020E54C:
    set32(c.r[30], c.r[19].w[0] + c.r[7].w[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0020E660; } }
L_0020E55C:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);  if (t) { goto L_0020E650; } }
L_0020E57C:
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0020E5A4; } }
    c.r[1].d[0] = c.r[4].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020E5A4; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0020E5A4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[3].d[0] = c.r[4].sd[0] < 129ll ? 1ull : 0ull;  goto L_0020E5B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020E5EC; } }
L_0020E5B4:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020E5C4; } }
    c.r[3].d[0] = c.r[4].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020E5C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020E5E0; } }
    c.r[3].d[0] = c.r[4].sd[0] < 224ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020E5E0; } }
    c.r[3].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020E5E0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 3u);  goto L_0020E5EC; }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0020E5EC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0020E650; }
    set32(c.r[22], c.r[5].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E608u); set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));  if (depth < kMaxDepth) unit_003B(c, 213u, depth + 1u); else { c.pc = 0x0020DF80u; return; } if (c.pc != 0x0020E608u) [[unlikely]] return; }
L_0020E608:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E618u); set32(c.r[6], 0u + 28u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0020E618u) [[unlikely]] return; }
L_0020E618:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E624u); set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));  if (depth < kMaxDepth) unit_003B(c, 212u, depth + 1u); else { c.pc = 0x0020DEF0u; return; } if (c.pc != 0x0020E624u) [[unlikely]] return; }
L_0020E624:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { st32((c.r[29].w[0] + 204u), c.r[21].w[0]);  goto L_0020E630; }
    st32((c.r[29].w[0] + 216u), c.r[21].w[0]);
    c.budget -= 1;
L_0020E630:
    set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E63Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_003B(c, 207u, depth + 1u); else { c.pc = 0x0020DDC0u; return; } if (c.pc != 0x0020E63Cu) [[unlikely]] return; }
L_0020E63C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0020E64C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0020E64C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0020E650:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020E57Cu | kUnwind; return; } goto L_0020E57C; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0020E660:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020E55Cu | kUnwind; return; } goto L_0020E55C; }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0020E6A0:
    set32(c.r[5], ld32((c.r[4].w[0] + 132u)));
    c.f[0] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0020E6D4; } }
L_0020E6B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
L_0020E6D4:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020E6B0u | kUnwind; return; } goto L_0020E6B0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0020E70C; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_0020E730; } }
L_0020E70C:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_0020E730; } }
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] - 20u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
L_0020E730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020E740:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020E870; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], c.r[3].w[0] << 2);  goto L_0020E788; }
    set32(c.r[17], c.r[2].w[0] << 2);
    c.budget -= 1;
L_0020E788:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0020E7AC; }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E7A0u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0020E7A0u) [[unlikely]] return; }
L_0020E7A0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0020E7B0; } }
L_0020E7AC:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020E7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E7B8u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x0020E7B8u) [[unlikely]] return; }
L_0020E7B8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E7C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x0020E7C4u) [[unlikely]] return; }
L_0020E7C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E7DCu); set32(c.r[8], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_003B(c, 260u, depth + 1u); else { c.pc = 0x0020E890u; return; } if (c.pc != 0x0020E7DCu) [[unlikely]] return; }
L_0020E7DC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] <= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0020E810; }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0020E80C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E7FCu);  if (depth < kMaxDepth) unit_0013(c, 120u, depth + 1u); else { c.pc = 0x0016D820u; return; } if (c.pc != 0x0020E7FCu) [[unlikely]] return; }
L_0020E7FC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E80Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 134u, depth + 1u); else { c.pc = 0x0016D9B0u; return; } if (c.pc != 0x0020E80Cu) [[unlikely]] return; }
L_0020E80C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0020E810:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 108u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E828u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_003B(c, 260u, depth + 1u); else { c.pc = 0x0020E890u; return; } if (c.pc != 0x0020E828u) [[unlikely]] return; }
L_0020E828:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0020E858; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0020E858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E848u);  if (depth < kMaxDepth) unit_0013(c, 120u, depth + 1u); else { c.pc = 0x0016D820u; return; } if (c.pc != 0x0020E848u) [[unlikely]] return; }
L_0020E848:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E858u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 134u, depth + 1u); else { c.pc = 0x0016D9B0u; return; } if (c.pc != 0x0020E858u) [[unlikely]] return; }
L_0020E858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E860u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x0020E860u) [[unlikely]] return; }
L_0020E860:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0020E874; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E870u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0020E870u) [[unlikely]] return; }
L_0020E870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0020E874:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0020E890:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 300u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 296u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E8E8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 384u, depth + 1u); else { c.pc = 0x001674B0u; return; } if (c.pc != 0x0020E8E8u) [[unlikely]] return; }
L_0020E8E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 24u)));  goto L_0020E8F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020EF38; } }
L_0020E8F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[21] = ld32((c.r[20].w[0] + 148u));  goto L_0020E908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020EF38; } }
L_0020E908:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.f[23] = 0u;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[23];  if (t) { goto L_0020EF24; } }
L_0020E924:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[4], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0020E948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[24] = ld32((c.r[20].w[0] + 48u));  if (t) { goto L_0020E94C; } }
L_0020E948:
    c.f[24] = ld32((c.r[20].w[0] + 44u));
    c.budget -= 1;
L_0020E94C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.f[0] = 0u;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));  goto L_0020E96C; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E968u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 322u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0020E968u) [[unlikely]] return; }
L_0020E968:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    c.budget -= 1;
L_0020E96C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[23] = fp::ee::sub(c.fcr31, c.f[24], c.f[0]);  goto L_0020E9BC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = fp::ee::sub(c.fcr31, c.f[24], c.f[0]);  goto L_0020E9A0; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020E994; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0020E9C0; } }
L_0020E994:
    c.f[23] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020E9BC; } }
L_0020E9A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[23] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
L_0020E9BC:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020E9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 28u)));  if (t) { goto L_0020EF04; } }
L_0020E9C8:
    set32(c.r[3], c.r[22].w[0] << 1);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] < 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0020E9E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E9E4u); set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));  if (depth < kMaxDepth) unit_003B(c, 213u, depth + 1u); else { c.pc = 0x0020DF80u; return; } if (c.pc != 0x0020E9E4u) [[unlikely]] return; }
L_0020E9E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0020E9E8:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0020EA08; } }
    c.r[1].d[0] = c.r[2].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020EA08; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0020EA08:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = c.r[2].sd[0] < 129ll ? 1ull : 0ull;  goto L_0020EA18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 256u), 0u);  if (t) { goto L_0020EA5C; } }
L_0020EA18:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020EA28; } }
    c.r[3].d[0] = c.r[2].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020EA28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020EA44; } }
    c.r[3].d[0] = c.r[2].sd[0] < 224ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020EA44; } }
    c.r[3].d[0] = c.r[2].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020EA44:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 3u);  goto L_0020EA58; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 256u), c.r[3].w[0]);  if (t) { goto L_0020EA5C; } }
L_0020EA58:
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    c.budget -= 1;
L_0020EA5C:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0020EA70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[23] = ld32((c.r[17].w[0] + 4u));  if (t) { goto L_0020EEFC; } }
L_0020EA70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0020EF38; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[18].w[0] + 4u));  goto L_0020EF14; }
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_0020EF00; }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], 0u + 255u);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 256u)));  goto L_0020EB10; }
    c.f[1] = ld32((c.r[20].w[0] + 152u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[1].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020EAE0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 1;
L_0020EAE0:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { c.r[3].d[0] = c.r[4].d[0] & 2048ull;  goto L_0020EAF0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 2;
L_0020EAF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 272u), c.r[5].w[0]);  if (t) { goto L_0020EB04; } }
    set32(c.r[3], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 3;
L_0020EB04:
    c.f[0] = ld32((c.r[20].w[0] + 156u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 3;
L_0020EB10:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_0020EEBC; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 8);  goto L_0020EB44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB2Cu); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0011(c, 384u, depth + 1u); else { c.pc = 0x001674B0u; return; } if (c.pc != 0x0020EB2Cu) [[unlikely]] return; }
L_0020EB2C:
    c.r[6].d[0] = c.r[16].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB3Cu); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0012(c, 55u, depth + 1u); else { c.pc = 0x00168F70u; return; } if (c.pc != 0x0020EB3Cu) [[unlikely]] return; }
L_0020EB3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020EB60; } }
L_0020EB44:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB50u); c.r[16].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0011(c, 384u, depth + 1u); else { c.pc = 0x001674B0u; return; } if (c.pc != 0x0020EB50u) [[unlikely]] return; }
L_0020EB50:
    c.r[6].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB60u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0012(c, 56u, depth + 1u); else { c.pc = 0x00169150u; return; } if (c.pc != 0x0020EB60u) [[unlikely]] return; }
L_0020EB60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 296u)));  goto L_0020EB80; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB78u); set32(c.r[4], c.r[4].w[0] + 29089u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0020EB78u) [[unlikely]] return; }
L_0020EB78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020EEB8; } }
L_0020EB80:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020EB98; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0020EBB4; } }
L_0020EB98:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_0020EBB8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EBACu); set32(c.r[4], c.r[4].w[0] + 29116u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0020EBACu) [[unlikely]] return; }
L_0020EBAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0020EF38; } }
L_0020EBB4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_0020EBB8:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[17].w[0]));  goto L_0020EBC8; }
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 1;
L_0020EBC8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[18].w[0] + 8u));  goto L_0020EC24; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[18].w[0] + 8u));  goto L_0020EC00; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020EBF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 17u));  if (t) { goto L_0020EC2C; } }
L_0020EBF4:
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020EC28; } }
L_0020EC00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020EC28; } }
L_0020EC24:
    c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 1;
L_0020EC28:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 17u));
    c.budget -= 1;
L_0020EC2C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 300u)));  goto L_0020EDEC; }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 28832u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] >> 24);
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 40;
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 255u);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_0020EDDC; } }
L_0020EC8C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_0020EDCC; } }
L_0020EC9C:
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0020EDCC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[3], c.r[19].w[0] + 4u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_0020ECDC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ECD4u); set32(c.r[4], c.r[4].w[0] + 29149u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0020ECD4u) [[unlikely]] return; }
L_0020ECD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0020EF38; } }
L_0020ECDC:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[23].w[0] - 1u);  goto L_0020ED44; }
    set32(c.r[2], c.r[23].w[0] - 1u);
    c.f[0] = c.r[2].w[0];
    c.f[4] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.f[2] = ld32((c.r[20].w[0] + 44u));
    c.f[5] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[22]);
    c.f[3] = 0u;
    c.f[6] = ld32((c.r[17].w[0] + 20u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[6]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[20]);
    c.f[12] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[23]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[6]);  if (t) { goto L_0020ED90; } }
L_0020ED44:
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[5] = ld32((c.r[17].w[0] + 20u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[23]);
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[5]);
    c.f[13] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 19;
L_0020ED90:
    c.f[14] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.f[16] = ld32((c.r[29].w[0] + 304u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[15] = ld32((c.r[17].w[0]));
    c.f[17] = ld32((c.r[29].w[0] + 308u));
    c.f[18] = ld32((c.r[29].w[0] + 312u));
    c.f[19] = ld32((c.r[29].w[0] + 316u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EDB8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 280u, depth + 1u); else { c.pc = 0x0020EFD0u; return; } if (c.pc != 0x0020EDB8u) [[unlikely]] return; }
L_0020EDB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020EDC8; } }
    set32(c.r[21], c.r[21].w[0] + 96u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 2;
L_0020EDC8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020EDCC:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020EC9Cu | kUnwind; return; } goto L_0020EC9C; }
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_0020EDDC:
    c.r[2].d[0] = c.r[23].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020EC8Cu | kUnwind; return; } goto L_0020EC8C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 1;
L_0020EDEC:
    set32(c.r[3], c.r[19].w[0] + 4u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_0020EE10; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EE08u); set32(c.r[4], c.r[4].w[0] + 29149u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0020EE08u) [[unlikely]] return; }
L_0020EE08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0020EF38; } }
L_0020EE10:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[20].w[0] + 40u));  goto L_0020EE44; }
    c.f[3] = ld32((c.r[20].w[0] + 36u));
    c.f[2] = ld32((c.r[20].w[0] + 44u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[22]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[20]);
    c.f[12] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[13] = fp::ee::add(c.fcr31, c.f[0], c.f[23]);  if (t) { goto L_0020EE54; } }
L_0020EE44:
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[1], c.f[23]);
    c.f[13] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 4;
L_0020EE54:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.f[16] = ld32((c.r[29].w[0] + 304u));
    c.f[14] = ld32((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[17] = ld32((c.r[29].w[0] + 308u));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] >> 24);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 40;
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.f[18] = ld32((c.r[29].w[0] + 312u));
    c.f[19] = ld32((c.r[29].w[0] + 316u));
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.f[15] = ld32((c.r[17].w[0]));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 255u);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 24);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EEA8u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_003B(c, 280u, depth + 1u); else { c.pc = 0x0020EFD0u; return; } if (c.pc != 0x0020EEA8u) [[unlikely]] return; }
L_0020EEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020EEB8; } }
    set32(c.r[21], c.r[21].w[0] + 96u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 2;
L_0020EEB8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_0020EEBC:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 4u));  goto L_0020EEDC; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[23] = fp::ee::add(c.fcr31, c.f[23], c.f[0]);  if (t) { goto L_0020EEE8; } }
L_0020EEDC:
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[23] = fp::ee::add(c.fcr31, c.f[23], c.f[0]);
    c.budget -= 3;
L_0020EEE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0020EEFC; } }
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0020EEFC:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0020EF00:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_0020EF04:
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020E9C8u | kUnwind; return; } goto L_0020E9C8; }
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 1;
L_0020EF14:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 4;
L_0020EF24:
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.r[2].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[30].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020E924u | kUnwind; return; } goto L_0020E924; }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0020EF38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_0020EF80:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0020EF90:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020EFC8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30476u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_0020EFBC; }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
L_0020EFBC:
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0020EFC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020EFD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_0020F06C; }
    set32(c.r[7], c.r[6].w[0] >> 24);
    set32(c.r[3], c.r[2].w[0] >> 24);
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] >> 16);
    set32(c.r[9], c.r[9].w[0] + 255u);
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] >> 16);
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[6].w[0] >> 8);
    mmi::mult(c, 1, c.r[8].w[0], c.r[7].w[0]);
    c.r[8].d[0] = c.lo.d[1];
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[8].w[0] + 255u);
    set32(c.r[8], c.r[9].w[0] >> 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    set32(c.r[8], c.r[8].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[9].d[0] = c.r[8].d[0] | c.r[3].d[0];
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[7], 0u - 256u);
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[8].w[0] + 255u);
    set32(c.r[2], c.r[2].w[0] + 255u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 33;
L_0020F06C:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 120u));  goto L_0020F0EC; }
    st32((c.r[5].w[0]), c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[5].w[0] + 4u), c.f[13]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[13], c.f[15]);
    st32((c.r[5].w[0] + 12u), c.f[16]);
    st32((c.r[5].w[0] + 16u), c.f[17]);
    st32((c.r[5].w[0] + 20u), c.r[6].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[14]);
    st32((c.r[5].w[0] + 24u), c.f[12]);
    st32((c.r[5].w[0] + 28u), c.f[1]);
    st32((c.r[5].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 36u), c.f[16]);
    st32((c.r[5].w[0] + 40u), c.f[19]);
    st32((c.r[5].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 48u), c.f[0]);
    st32((c.r[5].w[0] + 52u), c.f[13]);
    st32((c.r[5].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 60u), c.f[18]);
    st32((c.r[5].w[0] + 64u), c.f[17]);
    st32((c.r[5].w[0] + 68u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 72u), c.f[0]);
    st32((c.r[5].w[0] + 76u), c.f[1]);
    st32((c.r[5].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 84u), c.f[18]);
    st32((c.r[5].w[0] + 88u), c.f[19]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 92u), c.r[6].w[0]);  if (t) { goto L_0020F26C; } }
L_0020F0EC:
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[20] = ld32((c.r[4].w[0] + 36u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);
    c.f[10] = ld32((c.r[4].w[0] + 124u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[12], c.f[1]);
    c.f[13] = fp::ee::add(c.fcr31, c.f[20], c.f[10]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[13]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_0020F26C; }
    c.f[11] = ld32((c.r[4].w[0] + 40u));
    c.f[9] = ld32((c.r[4].w[0] + 128u));
    c.f[12] = fp::ee::add(c.fcr31, c.f[11], c.f[9]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020F148; } }
    c.f[7] = fp::ee::add(c.fcr31, c.f[2], c.f[14]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020F148; } }
    c.f[8] = fp::ee::add(c.fcr31, c.f[5], c.f[15]);
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[11]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020F154; } }
L_0020F148:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020F26C; } }
L_0020F154:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[20]));
    c.f[4] = c.f[16];
    c.f[3] = c.f[17];
    c.f[1] = c.f[14];
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[15];  if (t) { goto L_0020F188; } }
    c.f[6] = fp::ee::sub(c.fcr31, c.f[20], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[18], c.f[16]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[6]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[14]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[16], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[14], c.f[6]);
    c.f[2] = c.f[20];
    c.budget -= 7;
L_0020F188:
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020F1B0; } }
    c.f[6] = fp::ee::sub(c.fcr31, c.f[11], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[19], c.f[17]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[6]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[15]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[17], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[6]);
    c.f[5] = c.f[11];
    c.budget -= 7;
L_0020F1B0:
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020F1D8; } }
    c.f[6] = fp::ee::add(c.fcr31, c.f[20], c.f[10]);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[18], c.f[16]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[7]);
    c.f[6] = fp::ee::div(c.fcr31, c.f[6], c.f[14]);
    c.f[18] = fp::ee::sub(c.fcr31, c.f[18], c.f[6]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[7]);
    c.budget -= 7;
L_0020F1D8:
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[12]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[5].w[0]), c.f[2]);  goto L_0020F204; }
    c.f[6] = fp::ee::add(c.fcr31, c.f[11], c.f[9]);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[8], c.f[6]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[19], c.f[17]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[7]);
    c.f[6] = fp::ee::div(c.fcr31, c.f[6], c.f[15]);
    c.f[19] = fp::ee::sub(c.fcr31, c.f[19], c.f[6]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[7]);
    st32((c.r[5].w[0]), c.f[2]);
    c.budget -= 8;
L_0020F204:
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0] + 4u), c.f[5]);
    st32((c.r[5].w[0] + 8u), 0u);
    c.f[6] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    st32((c.r[5].w[0] + 12u), c.f[4]);
    st32((c.r[5].w[0] + 16u), c.f[3]);
    st32((c.r[5].w[0] + 20u), c.r[6].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[5].w[0] + 24u), c.f[2]);
    st32((c.r[5].w[0] + 28u), c.f[6]);
    st32((c.r[5].w[0] + 32u), 0u);
    st32((c.r[5].w[0] + 36u), c.f[4]);
    st32((c.r[5].w[0] + 40u), c.f[19]);
    st32((c.r[5].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 48u), c.f[0]);
    st32((c.r[5].w[0] + 52u), c.f[5]);
    st32((c.r[5].w[0] + 56u), 0u);
    st32((c.r[5].w[0] + 60u), c.f[18]);
    st32((c.r[5].w[0] + 64u), c.f[3]);
    st32((c.r[5].w[0] + 68u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 72u), c.f[0]);
    st32((c.r[5].w[0] + 76u), c.f[6]);
    st32((c.r[5].w[0] + 80u), 0u);
    st32((c.r[5].w[0] + 84u), c.f[18]);
    st32((c.r[5].w[0] + 88u), c.f[19]);
    st32((c.r[5].w[0] + 92u), c.r[6].w[0]);
    c.budget -= 26;
L_0020F26C:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020F280:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30476u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020F2B0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0020F2B0:
    st32((c.r[29].w[0] + 156u), c.r[5].w[0]);
    c.budget -= 1;
L_0020F2B4:
    set32(c.r[6], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 1;
L_0020F2B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[18], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F2E8u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 17u, depth + 1u); else { c.pc = 0x00210240u; return; } if (c.pc != 0x0020F2E8u) [[unlikely]] return; }
L_0020F2E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 156u)));  goto L_0020F324; }
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], 0u + 10u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020F320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F318u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 39u, depth + 1u); else { c.pc = 0x00210830u; return; } if (c.pc != 0x0020F318u) [[unlikely]] return; }
L_0020F318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 132u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B8u | kUnwind; return; } goto L_0020F2B8; } }
L_0020F320:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_0020F324:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 10u);  goto L_0020F350; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F348u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 12u, depth + 1u); else { c.pc = 0x00210140u; return; } if (c.pc != 0x0020F348u) [[unlikely]] return; }
L_0020F348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_0020FC1C; } }
L_0020F350:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0020F370; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F360u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 39u, depth + 1u); else { c.pc = 0x00210830u; return; } if (c.pc != 0x0020F360u) [[unlikely]] return; }
L_0020F360:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F370:
    c.r[4].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = c.r[2].d[0] & 255ull;  goto L_0020F95C; }
    set32(c.r[5], 0u + 47u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 64u);  goto L_0020F3B0; }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0020F3AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F39Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 39u, depth + 1u); else { c.pc = 0x00210830u; return; } if (c.pc != 0x0020F39Cu) [[unlikely]] return; }
L_0020F39C:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F3AC:
    set32(c.r[5], 0u + 64u);
    c.budget -= 1;
L_0020F3B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0020F958; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[4], 0u + 76u);
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 7;
    if (c.r[2].d[0] == c.r[4].d[0]) { c.r[4].d[0] = c.r[3].d[0] << 32;  goto L_0020F83C; }
    set32(c.r[4], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0020F838; } }
    set32(c.r[4], 0u + 68u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { c.r[4].d[0] = c.r[3].d[0] << 32;  goto L_0020F700; }
    set32(c.r[4], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0020F6FC; } }
    set32(c.r[4], 0u + 70u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { c.r[4].d[0] = c.r[3].d[0] << 32;  goto L_0020F520; }
    set32(c.r[4], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0020F51C; } }
    set32(c.r[4], 0u + 84u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { c.r[2].d[0] = c.r[3].d[0] << 32;  goto L_0020F4B0; }
    set32(c.r[4], 0u + 116u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0020F4AC; } }
    set32(c.r[4], 0u + 78u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0020F494; }
    set32(c.r[4], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0020F490; } }
    set32(c.r[4], 0u + 88u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0020F478; }
    set32(c.r[4], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0020F474; } }
    set32(c.r[4], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0020F958; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0020F958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F474:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020F478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F480u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x0020F480u) [[unlikely]] return; }
L_0020F480:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F490:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020F494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F49Cu);  if (depth < kMaxDepth) unit_003C(c, 39u, depth + 1u); else { c.pc = 0x00210830u; return; } if (c.pc != 0x0020F49Cu) [[unlikely]] return; }
L_0020F49C:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F4AC:
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_0020F4B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[29].w[0] + 152u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F4CCu); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 34u, depth + 1u); else { c.pc = 0x002106C0u; return; } if (c.pc != 0x0020F4CCu) [[unlikely]] return; }
L_0020F4CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F4E4u); set32(c.r[6], 0u + 28u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0020F4E4u) [[unlikely]] return; }
L_0020F4E4:
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[2], 0u + 9u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 7;
    if (c.r[5].sd[0] < 0) { set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));  goto L_0020F50C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F508u); set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));  if (depth < kMaxDepth) unit_003B(c, 212u, depth + 1u); else { c.pc = 0x0020DEF0u; return; } if (c.pc != 0x0020F508u) [[unlikely]] return; }
L_0020F508:
    set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));
    c.budget -= 1;
L_0020F50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F514u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003B(c, 207u, depth + 1u); else { c.pc = 0x0020DDC0u; return; } if (c.pc != 0x0020F514u) [[unlikely]] return; }
L_0020F514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0020FBEC; } }
L_0020F51C:
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_0020F520:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], 0u + 65u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_0020F6C4; }
    set32(c.r[3], 0u + 97u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0020F6C0; } }
    set32(c.r[3], 0u + 77u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_0020F690; }
    set32(c.r[3], 0u + 109u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0020F68C; } }
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_0020F650; }
    set32(c.r[3], 0u + 107u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0020F64C; } }
    set32(c.r[3], 0u + 83u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_0020F61C; }
    set32(c.r[3], 0u + 115u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0020F618; } }
    set32(c.r[3], 0u + 67u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_0020F5B4; }
    set32(c.r[3], 0u + 99u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0020F5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F5B0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0020F5B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[29].w[0] + 148u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F5D0u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 36u, depth + 1u); else { c.pc = 0x00210740u; return; } if (c.pc != 0x0020F5D0u) [[unlikely]] return; }
L_0020F5D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[3], c.r[5].w[0] >> 24);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], c.r[5].w[0] >> 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[5].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F618:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0020F61C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F638u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 34u, depth + 1u); else { c.pc = 0x002106C0u; return; } if (c.pc != 0x0020F638u) [[unlikely]] return; }
L_0020F638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F64C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0020F650:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[29].w[0] + 140u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F66Cu); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 34u, depth + 1u); else { c.pc = 0x002106C0u; return; } if (c.pc != 0x0020F66Cu) [[unlikely]] return; }
L_0020F66C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[17].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F68C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0020F690:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[29].w[0] + 136u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F6ACu); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 34u, depth + 1u); else { c.pc = 0x002106C0u; return; } if (c.pc != 0x0020F6ACu) [[unlikely]] return; }
L_0020F6AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F6C0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0020F6C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[29].w[0] + 132u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F6E0u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 34u, depth + 1u); else { c.pc = 0x002106C0u; return; } if (c.pc != 0x0020F6E0u) [[unlikely]] return; }
L_0020F6E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 73u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F6FC:
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_0020F700:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], 0u + 84u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_0020F800; }
    set32(c.r[3], 0u + 116u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0020F7FC; } }
    set32(c.r[3], 0u + 66u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_0020F7CC; }
    set32(c.r[3], 0u + 98u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0020F7C8; } }
    set32(c.r[3], 0u + 67u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_0020F764; }
    set32(c.r[3], 0u + 99u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0020F760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F760:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0020F764:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F780u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 36u, depth + 1u); else { c.pc = 0x00210740u; return; } if (c.pc != 0x0020F780u) [[unlikely]] return; }
L_0020F780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], c.r[5].w[0] >> 24);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], c.r[5].w[0] >> 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[5].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F7C8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0020F7CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[29].w[0] + 124u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F7E8u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 34u, depth + 1u); else { c.pc = 0x002106C0u; return; } if (c.pc != 0x0020F7E8u) [[unlikely]] return; }
L_0020F7E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F7FC:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0020F800:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[29].w[0] + 120u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F81Cu); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 34u, depth + 1u); else { c.pc = 0x002106C0u; return; } if (c.pc != 0x0020F81Cu) [[unlikely]] return; }
L_0020F81C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F838:
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_0020F83C:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], 0u + 76u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_0020F920; }
    set32(c.r[3], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0020F91C; } }
    set32(c.r[3], 0u + 84u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_0020F8DC; }
    set32(c.r[3], 0u + 116u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0020F8D8; } }
    set32(c.r[3], 0u + 77u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_0020F8A0; }
    set32(c.r[3], 0u + 109u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0020F89C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F89C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0020F8A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[29].w[0] + 116u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F8BCu); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 34u, depth + 1u); else { c.pc = 0x002106C0u; return; } if (c.pc != 0x0020F8BCu) [[unlikely]] return; }
L_0020F8BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F8D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 26u, depth + 1u); else { c.pc = 0x002104C0u; return; } if (c.pc != 0x0020F8D0u) [[unlikely]] return; }
L_0020F8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F8D8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0020F8DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F8F8u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 34u, depth + 1u); else { c.pc = 0x002106C0u; return; } if (c.pc != 0x0020F8F8u) [[unlikely]] return; }
L_0020F8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F914u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 27u, depth + 1u); else { c.pc = 0x002104F0u; return; } if (c.pc != 0x0020F914u) [[unlikely]] return; }
L_0020F914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F91C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0020F920:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[29].w[0] + 108u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F93Cu); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 34u, depth + 1u); else { c.pc = 0x002106C0u; return; } if (c.pc != 0x0020F93Cu) [[unlikely]] return; }
L_0020F93C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
    c.f[12] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F950u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 28u, depth + 1u); else { c.pc = 0x00210520u; return; } if (c.pc != 0x0020F950u) [[unlikely]] return; }
L_0020F950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020F958:
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020F95C:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0020F978; } }
    c.r[1].d[0] = c.r[6].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020F978; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0020F978:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[6].sd[0] < 129ll ? 1ull : 0ull;  goto L_0020FA00; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F994u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 12u, depth + 1u); else { c.pc = 0x00210140u; return; } if (c.pc != 0x0020F994u) [[unlikely]] return; }
L_0020F994:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 16u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 28832u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 72u));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 20u));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[18].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_0020FBEC; } }
L_0020FA00:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020FA10; } }
    c.r[2].d[0] = c.r[6].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020FA10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020FA2C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 224ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020FA2C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020FA2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_0020FA54; }
    c.r[2].d[0] = c.r[6].sd[0] < 160ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020FA48; } }
    c.r[2].d[0] = c.r[6].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020FA48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_0020FC1C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_0020FA54:
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].sd[0] < 129ll ? 1ull : 0ull;  goto L_0020FA78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FA70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 39u, depth + 1u); else { c.pc = 0x00210830u; return; } if (c.pc != 0x0020FA70u) [[unlikely]] return; }
L_0020FA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F2B4u | kUnwind; return; } goto L_0020F2B4; } }
L_0020FA78:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020FA88; } }
    c.r[2].d[0] = c.r[6].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020FA88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020FAA4; } }
    c.r[2].d[0] = c.r[6].sd[0] < 224ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020FAA4; } }
    c.r[2].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020FAA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[6].sd[0] < 160ll ? 1ull : 0ull;  goto L_0020FAC4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[19].d[0] = ld8((c.r[3].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_0020FB24; } }
L_0020FAC4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020FAD4; } }
    c.r[2].d[0] = c.r[6].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020FAD4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 31768u)));  goto L_0020FAE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0020FB08; } }
L_0020FAE4:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 320u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 319u)));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
L_0020FB08:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.r[19].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 7;
L_0020FB24:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = 0ull | 33439ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0020FB5C; } }
    c.r[1].d[0] = 0ull | 33687ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0020FB60; }
    set32(c.r[8], 0u + 1u);
    c.budget -= 1;
L_0020FB5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020FB60:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FB6Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 12u, depth + 1u); else { c.pc = 0x00210140u; return; } if (c.pc != 0x0020FB6Cu) [[unlikely]] return; }
L_0020FB6C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 14u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], c.r[10].w[0] + 28832u);
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = ld8((c.r[17].w[0] + 72u));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 18u));
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[18].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[9].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FBECu); st32((c.r[17].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 12u, depth + 1u); else { c.pc = 0x00210140u; return; } if (c.pc != 0x0020FBECu) [[unlikely]] return; }
L_0020FBEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FC18u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 12u, depth + 1u); else { c.pc = 0x00210140u; return; } if (c.pc != 0x0020FC18u) [[unlikely]] return; }
L_0020FC18:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_0020FC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0020FC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020FC60; } }
L_0020FC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FC5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 281u, depth + 1u); else { c.pc = 0x0020F280u; return; } if (c.pc != 0x0020FC5Cu) [[unlikely]] return; }
L_0020FC5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0020FC60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FC54u | kUnwind; return; } goto L_0020FC54; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020FC80:
    c.f[0] = 0u;
    st32((c.r[4].w[0] + 148u), 0u);
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    st32((c.r[4].w[0] + 152u), c.f[12]);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 156u), c.f[13]);  if (t) { goto L_0020FC9C; } }
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.budget -= 1;
L_0020FC9C:
    c.f[1] = ld32((c.r[4].w[0] + 152u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020FCC0; } }
    st32((c.r[4].w[0] + 152u), c.f[0]);
    st32((c.r[4].w[0] + 148u), c.f[0]);
    c.budget -= 2;
L_0020FCC0:
    c.budget -= 2;
    {  goto L_0020FCD0; }
L_0020FCD0:
    st32((c.r[4].w[0] + 148u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0020FCF4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0020FD04; } }
L_0020FCF4:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u - 2049u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0020FD04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020FD10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FD30u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0011(c, 384u, depth + 1u); else { c.pc = 0x001674B0u; return; } if (c.pc != 0x0020FD30u) [[unlikely]] return; }
L_0020FD30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[3].d[0] = c.r[17].d[0] & 255ull;  goto L_0020FD48; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0020FE94; } }
L_0020FD48:
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0020FD64; } }
    c.r[1].d[0] = c.r[3].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020FD64; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0020FD64:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;  goto L_0020FD74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020FDAC; } }
L_0020FD74:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020FD84; } }
    c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020FD84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020FDA0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020FDA0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020FDA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_0020FDAC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0020FDAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 3552u));  goto L_0020FE24; }
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FDC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x00168A50u; return; } if (c.pc != 0x0020FDC0u) [[unlikely]] return; }
L_0020FDC0:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0020FDD4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0020FDEC; } }
L_0020FDD4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_0020FDEC:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 3554u));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0020FE04; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0020FE1C; } }
L_0020FE04:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_0020FE1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020FE84; } }
L_0020FE24:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0020FE38; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0020FE50; } }
L_0020FE38:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_0020FE50:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 3554u));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0020FE68; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0020FE80; } }
L_0020FE68:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_0020FE80:
    c.budget -= 1;
L_0020FE84:
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
L_0020FE94:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020FEB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[23] = 0u;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[23];
    c.f[21] = c.f[23];
    c.budget -= 21;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[23];  if (t) { goto L_0020FFD8; } }
L_0020FF04:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_0020FFEC; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020FFE8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020FF38; } }
    c.r[2].d[0] = c.r[3].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020FF38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;  goto L_0020FF48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020FF80; } }
L_0020FF48:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020FF58; } }
    c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020FF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020FF74; } }
    c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020FF74; } }
    c.r[2].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_0020FF74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 3u);  goto L_0020FF80; }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0020FF80:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0020FFD8; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FF98u); set32(c.r[4], ld32((c.r[28].w[0] - 30476u)));  if (depth < kMaxDepth) unit_003B(c, 213u, depth + 1u); else { c.pc = 0x0020DF80u; return; } if (c.pc != 0x0020FF98u) [[unlikely]] return; }
L_0020FF98:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[21];  if (t) { goto L_0020FFB4; } }
    c.f[22] = ld32((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = ld32((c.r[2].w[0] + 8u));  if (t) { goto L_0020FFBC; } }
L_0020FFB4:
    c.f[21] = ld32((c.r[2].w[0] + 8u));
    c.f[22] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 2;
L_0020FFBC:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[22]);
    set32(c.r[2], 0u + 1u);
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.f[23] = fp::ee::add(c.fcr31, c.f[23], c.f[0]);  if (t) { goto L_0020FFD4; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0020FFD4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0020FFD8:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FF04u | kUnwind; return; } goto L_0020FF04; }
L_0020FFE8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_0020FFEC:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[23] = fp::ee::sub(c.fcr31, c.f[23], c.f[21]);  if (t) { [[clang::musttail]] return unit_003C(c, 10u, depth); } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.f[0] = c.f[23];  [[clang::musttail]] return unit_003C(c, 11u, depth); }
    [[clang::musttail]] return unit_003C(c, 1u, depth);
}

}
