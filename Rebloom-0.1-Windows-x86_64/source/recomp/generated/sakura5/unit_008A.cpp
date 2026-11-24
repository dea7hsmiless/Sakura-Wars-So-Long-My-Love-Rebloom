#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008A[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 22, 23, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42,
    0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0,
    0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80,
    0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0,
    0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0,
    0, 256, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 261, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0,
    0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 306, 307, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0,
    0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 331, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0,
    0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376,
    0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0,
    0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0,
    0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 420, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428,
};

void unit_008A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00348000;
    case 2u: goto L_00348004;
    case 3u: goto L_00348054;
    case 4u: goto L_00348070;
    case 5u: goto L_00348084;
    case 6u: goto L_00348100;
    case 7u: goto L_003481F8;
    case 8u: goto L_00348210;
    case 9u: goto L_00348288;
    case 10u: goto L_00348294;
    case 11u: goto L_003482AC;
    case 12u: goto L_003482D0;
    case 13u: goto L_0034832C;
    case 14u: goto L_00348338;
    case 15u: goto L_00348344;
    case 16u: goto L_0034835C;
    case 17u: goto L_00348380;
    case 18u: goto L_00348390;
    case 19u: goto L_003483A0;
    case 20u: goto L_003483D0;
    case 21u: goto L_003483F0;
    case 22u: goto L_00348410;
    case 23u: goto L_00348414;
    case 24u: goto L_00348418;
    case 25u: goto L_00348424;
    case 26u: goto L_00348470;
    case 27u: goto L_003484C0;
    case 28u: goto L_003484E0;
    case 29u: goto L_003484F0;
    case 30u: goto L_00348518;
    case 31u: goto L_00348520;
    case 32u: goto L_0034853C;
    case 33u: goto L_00348550;
    case 34u: goto L_00348580;
    case 35u: goto L_00348598;
    case 36u: goto L_003485A4;
    case 37u: goto L_003485C0;
    case 38u: goto L_003485D4;
    case 39u: goto L_00348600;
    case 40u: goto L_0034865C;
    case 41u: goto L_0034866C;
    case 42u: goto L_0034867C;
    case 43u: goto L_0034868C;
    case 44u: goto L_0034869C;
    case 45u: goto L_003486AC;
    case 46u: goto L_003486C0;
    case 47u: goto L_003486F4;
    case 48u: goto L_00348708;
    case 49u: goto L_00348754;
    case 50u: goto L_00348764;
    case 51u: goto L_00348774;
    case 52u: goto L_00348784;
    case 53u: goto L_00348794;
    case 54u: goto L_003487B0;
    case 55u: goto L_00348854;
    case 56u: goto L_00348870;
    case 57u: goto L_0034887C;
    case 58u: goto L_00348890;
    case 59u: goto L_003488C0;
    case 60u: goto L_003488FC;
    case 61u: goto L_00348910;
    case 62u: goto L_0034897C;
    case 63u: goto L_00348990;
    case 64u: goto L_00348B30;
    case 65u: goto L_00348B5C;
    case 66u: goto L_00348BBC;
    case 67u: goto L_00348BE0;
    case 68u: goto L_00348BEC;
    case 69u: goto L_00348BF8;
    case 70u: goto L_00348C20;
    case 71u: goto L_00348C3C;
    case 72u: goto L_00348CD4;
    case 73u: goto L_00348CF0;
    case 74u: goto L_00348D30;
    case 75u: goto L_00348D3C;
    case 76u: goto L_00348D54;
    case 77u: goto L_00348D70;
    case 78u: goto L_00348DD4;
    case 79u: goto L_00348DF0;
    case 80u: goto L_00348DFC;
    case 81u: goto L_00348E08;
    case 82u: goto L_00348E1C;
    case 83u: goto L_00348E28;
    case 84u: goto L_00348E30;
    case 85u: goto L_00348E3C;
    case 86u: goto L_00348E58;
    case 87u: goto L_00348EB8;
    case 88u: goto L_00348ED0;
    case 89u: goto L_00348EE4;
    case 90u: goto L_00348EF0;
    case 91u: goto L_00348F10;
    case 92u: goto L_00348F20;
    case 93u: goto L_00348F34;
    case 94u: goto L_00348F3C;
    case 95u: goto L_00348F48;
    case 96u: goto L_00348F68;
    case 97u: goto L_00348FB4;
    case 98u: goto L_00348FD0;
    case 99u: goto L_00348FF8;
    case 100u: goto L_00349028;
    case 101u: goto L_00349060;
    case 102u: goto L_0034906C;
    case 103u: goto L_0034907C;
    case 104u: goto L_00349098;
    case 105u: goto L_003490AC;
    case 106u: goto L_003490E4;
    case 107u: goto L_003490F0;
    case 108u: goto L_003490F8;
    case 109u: goto L_00349128;
    case 110u: goto L_0034913C;
    case 111u: goto L_00349168;
    case 112u: goto L_00349194;
    case 113u: goto L_003491A4;
    case 114u: goto L_003491D0;
    case 115u: goto L_00349210;
    case 116u: goto L_00349228;
    case 117u: goto L_00349230;
    case 118u: goto L_0034924C;
    case 119u: goto L_003492AC;
    case 120u: goto L_003492B8;
    case 121u: goto L_003492D8;
    case 122u: goto L_003492EC;
    case 123u: goto L_003492F4;
    case 124u: goto L_00349308;
    case 125u: goto L_00349324;
    case 126u: goto L_00349334;
    case 127u: goto L_00349390;
    case 128u: goto L_003493E0;
    case 129u: goto L_00349444;
    case 130u: goto L_00349474;
    case 131u: goto L_0034949C;
    case 132u: goto L_003494E8;
    case 133u: goto L_003494F4;
    case 134u: goto L_00349548;
    case 135u: goto L_00349574;
    case 136u: goto L_00349588;
    case 137u: goto L_003495A0;
    case 138u: goto L_003495E0;
    case 139u: goto L_003495F4;
    case 140u: goto L_00349630;
    case 141u: goto L_00349654;
    case 142u: goto L_00349668;
    case 143u: goto L_0034968C;
    case 144u: goto L_003496A0;
    case 145u: goto L_003496BC;
    case 146u: goto L_00349710;
    case 147u: goto L_00349730;
    case 148u: goto L_00349774;
    case 149u: goto L_003497CC;
    case 150u: goto L_00349810;
    case 151u: goto L_00349830;
    case 152u: goto L_00349890;
    case 153u: goto L_003498B0;
    case 154u: goto L_0034991C;
    case 155u: goto L_00349930;
    case 156u: goto L_0034993C;
    case 157u: goto L_00349948;
    case 158u: goto L_00349970;
    case 159u: goto L_00349988;
    case 160u: goto L_0034999C;
    case 161u: goto L_003499D0;
    case 162u: goto L_00349A48;
    case 163u: goto L_00349A54;
    case 164u: goto L_00349A6C;
    case 165u: goto L_00349A90;
    case 166u: goto L_00349AEC;
    case 167u: goto L_00349AF8;
    case 168u: goto L_00349B04;
    case 169u: goto L_00349B1C;
    case 170u: goto L_00349B40;
    case 171u: goto L_00349B9C;
    case 172u: goto L_00349BA8;
    case 173u: goto L_00349BC0;
    case 174u: goto L_00349BE0;
    case 175u: goto L_00349C00;
    case 176u: goto L_00349C20;
    case 177u: goto L_00349C40;
    case 178u: goto L_00349C60;
    case 179u: goto L_00349C70;
    case 180u: goto L_00349C90;
    case 181u: goto L_00349CA0;
    case 182u: goto L_00349CB0;
    case 183u: goto L_00349CC0;
    case 184u: goto L_00349CD0;
    case 185u: goto L_00349CD8;
    case 186u: goto L_00349CE0;
    case 187u: goto L_00349CF0;
    case 188u: goto L_00349D20;
    case 189u: goto L_00349D40;
    case 190u: goto L_00349D60;
    case 191u: goto L_00349D9C;
    case 192u: goto L_00349DBC;
    case 193u: goto L_00349DD8;
    case 194u: goto L_00349DF0;
    case 195u: goto L_00349E00;
    case 196u: goto L_00349E24;
    case 197u: goto L_00349E4C;
    case 198u: goto L_00349E64;
    case 199u: goto L_00349E74;
    case 200u: goto L_00349F00;
    case 201u: goto L_00349F20;
    case 202u: goto L_00349F2C;
    case 203u: goto L_00349F48;
    case 204u: goto L_00349F54;
    case 205u: goto L_00349F70;
    case 206u: goto L_00349F84;
    case 207u: goto L_00349FA8;
    case 208u: goto L_00349FC0;
    case 209u: goto L_0034A01C;
    case 210u: goto L_0034A03C;
    case 211u: goto L_0034A050;
    case 212u: goto L_0034A070;
    case 213u: goto L_0034A080;
    case 214u: goto L_0034A0A0;
    case 215u: goto L_0034A0D0;
    case 216u: goto L_0034A0EC;
    case 217u: goto L_0034A124;
    case 218u: goto L_0034A134;
    case 219u: goto L_0034A154;
    case 220u: goto L_0034A180;
    case 221u: goto L_0034A1A0;
    case 222u: goto L_0034A1E8;
    case 223u: goto L_0034A210;
    case 224u: goto L_0034A22C;
    case 225u: goto L_0034A23C;
    case 226u: goto L_0034A268;
    case 227u: goto L_0034A288;
    case 228u: goto L_0034A2E8;
    case 229u: goto L_0034A2FC;
    case 230u: goto L_0034A32C;
    case 231u: goto L_0034A33C;
    case 232u: goto L_0034A35C;
    case 233u: goto L_0034A36C;
    case 234u: goto L_0034A388;
    case 235u: goto L_0034A3D0;
    case 236u: goto L_0034A3E8;
    case 237u: goto L_0034A418;
    case 238u: goto L_0034A434;
    case 239u: goto L_0034A464;
    case 240u: goto L_0034A488;
    case 241u: goto L_0034A4A4;
    case 242u: goto L_0034A4B8;
    case 243u: goto L_0034A4C0;
    case 244u: goto L_0034A4D0;
    case 245u: goto L_0034A4DC;
    case 246u: goto L_0034A4F8;
    case 247u: goto L_0034A518;
    case 248u: goto L_0034A560;
    case 249u: goto L_0034A57C;
    case 250u: goto L_0034A598;
    case 251u: goto L_0034A5B4;
    case 252u: goto L_0034A5C8;
    case 253u: goto L_0034A5D8;
    case 254u: goto L_0034A5EC;
    case 255u: goto L_0034A5F4;
    case 256u: goto L_0034A604;
    case 257u: goto L_0034A60C;
    case 258u: goto L_0034A624;
    case 259u: goto L_0034A660;
    case 260u: goto L_0034A66C;
    case 261u: goto L_0034A674;
    case 262u: goto L_0034A680;
    case 263u: goto L_0034A6B0;
    case 264u: goto L_0034A6C0;
    case 265u: goto L_0034A6E0;
    case 266u: goto L_0034A6F0;
    case 267u: goto L_0034A704;
    case 268u: goto L_0034A740;
    case 269u: goto L_0034A76C;
    case 270u: goto L_0034A778;
    case 271u: goto L_0034A798;
    case 272u: goto L_0034A7A0;
    case 273u: goto L_0034A7B0;
    case 274u: goto L_0034A7BC;
    case 275u: goto L_0034A7D8;
    case 276u: goto L_0034A7E4;
    case 277u: goto L_0034A810;
    case 278u: goto L_0034A874;
    case 279u: goto L_0034A89C;
    case 280u: goto L_0034A8F4;
    case 281u: goto L_0034A91C;
    case 282u: goto L_0034A93C;
    case 283u: goto L_0034A96C;
    case 284u: goto L_0034A984;
    case 285u: goto L_0034A9E8;
    case 286u: goto L_0034AA30;
    case 287u: goto L_0034AA4C;
    case 288u: goto L_0034AA84;
    case 289u: goto L_0034AAA0;
    case 290u: goto L_0034AAB0;
    case 291u: goto L_0034AAEC;
    case 292u: goto L_0034AB10;
    case 293u: goto L_0034AB38;
    case 294u: goto L_0034AB64;
    case 295u: goto L_0034AB80;
    case 296u: goto L_0034ABBC;
    case 297u: goto L_0034ABD8;
    case 298u: goto L_0034ABEC;
    case 299u: goto L_0034AC00;
    case 300u: goto L_0034AC78;
    case 301u: goto L_0034AC84;
    case 302u: goto L_0034AC9C;
    case 303u: goto L_0034ACC0;
    case 304u: goto L_0034AD38;
    case 305u: goto L_0034AD44;
    case 306u: goto L_0034AD58;
    case 307u: goto L_0034AD5C;
    case 308u: goto L_0034AD80;
    case 309u: goto L_0034ADF8;
    case 310u: goto L_0034AE04;
    case 311u: goto L_0034AE1C;
    case 312u: goto L_0034AE40;
    case 313u: goto L_0034AE9C;
    case 314u: goto L_0034AEA8;
    case 315u: goto L_0034AEB4;
    case 316u: goto L_0034AECC;
    case 317u: goto L_0034AEF0;
    case 318u: goto L_0034AF0C;
    case 319u: goto L_0034AF14;
    case 320u: goto L_0034AF30;
    case 321u: goto L_0034AF40;
    case 322u: goto L_0034AF50;
    case 323u: goto L_0034AF60;
    case 324u: goto L_0034AF70;
    case 325u: goto L_0034AF80;
    case 326u: goto L_0034AFB0;
    case 327u: goto L_0034AFD0;
    case 328u: goto L_0034AFF0;
    case 329u: goto L_0034B004;
    case 330u: goto L_0034B070;
    case 331u: goto L_0034B088;
    case 332u: goto L_0034B090;
    case 333u: goto L_0034B0A0;
    case 334u: goto L_0034B0B4;
    case 335u: goto L_0034B108;
    case 336u: goto L_0034B13C;
    case 337u: goto L_0034B144;
    case 338u: goto L_0034B170;
    case 339u: goto L_0034B18C;
    case 340u: goto L_0034B1F0;
    case 341u: goto L_0034B220;
    case 342u: goto L_0034B27C;
    case 343u: goto L_0034B288;
    case 344u: goto L_0034B294;
    case 345u: goto L_0034B2AC;
    case 346u: goto L_0034B2D0;
    case 347u: goto L_0034B2E0;
    case 348u: goto L_0034B2F0;
    case 349u: goto L_0034B320;
    case 350u: goto L_0034B340;
    case 351u: goto L_0034B360;
    case 352u: goto L_0034B374;
    case 353u: goto L_0034B39C;
    case 354u: goto L_0034B3B0;
    case 355u: goto L_0034B44C;
    case 356u: goto L_0034B46C;
    case 357u: goto L_0034B480;
    case 358u: goto L_0034B4A0;
    case 359u: goto L_0034B4D0;
    case 360u: goto L_0034B4EC;
    case 361u: goto L_0034B500;
    case 362u: goto L_0034B530;
    case 363u: goto L_0034B544;
    case 364u: goto L_0034B570;
    case 365u: goto L_0034B59C;
    case 366u: goto L_0034B600;
    case 367u: goto L_0034B65C;
    case 368u: goto L_0034B6B0;
    case 369u: goto L_0034B6B8;
    case 370u: goto L_0034B6E4;
    case 371u: goto L_0034B6F8;
    case 372u: goto L_0034B704;
    case 373u: goto L_0034B750;
    case 374u: goto L_0034B760;
    case 375u: goto L_0034B768;
    case 376u: goto L_0034B7FC;
    case 377u: goto L_0034B804;
    case 378u: goto L_0034B824;
    case 379u: goto L_0034B83C;
    case 380u: goto L_0034B860;
    case 381u: goto L_0034B874;
    case 382u: goto L_0034B8B8;
    case 383u: goto L_0034B8F0;
    case 384u: goto L_0034B968;
    case 385u: goto L_0034B974;
    case 386u: goto L_0034B98C;
    case 387u: goto L_0034B9B0;
    case 388u: goto L_0034B9D4;
    case 389u: goto L_0034B9F0;
    case 390u: goto L_0034BA04;
    case 391u: goto L_0034BA10;
    case 392u: goto L_0034BA20;
    case 393u: goto L_0034BA40;
    case 394u: goto L_0034BA64;
    case 395u: goto L_0034BAA4;
    case 396u: goto L_0034BAC0;
    case 397u: goto L_0034BB10;
    case 398u: goto L_0034BB30;
    case 399u: goto L_0034BB9C;
    case 400u: goto L_0034BBB0;
    case 401u: goto L_0034BBC0;
    case 402u: goto L_0034BBCC;
    case 403u: goto L_0034BBEC;
    case 404u: goto L_0034BC08;
    case 405u: goto L_0034BC28;
    case 406u: goto L_0034BC34;
    case 407u: goto L_0034BC3C;
    case 408u: goto L_0034BC60;
    case 409u: goto L_0034BCE0;
    case 410u: goto L_0034BD54;
    case 411u: goto L_0034BDB0;
    case 412u: goto L_0034BDC4;
    case 413u: goto L_0034BDD4;
    case 414u: goto L_0034BE10;
    case 415u: goto L_0034BE28;
    case 416u: goto L_0034BE30;
    case 417u: goto L_0034BE40;
    case 418u: goto L_0034BE64;
    case 419u: goto L_0034BE70;
    case 420u: goto L_0034BE78;
    case 421u: goto L_0034BE90;
    case 422u: goto L_0034BECC;
    case 423u: goto L_0034BF2C;
    case 424u: goto L_0034BF40;
    case 425u: goto L_0034BF48;
    case 426u: goto L_0034BF90;
    case 427u: goto L_0034BFF0;
    case 428u: goto L_0034BFFC;
    default: bad_entry(c, 0x00348000u); return;
    }
L_00348000:
    c.f[0] = ld32((c.r[16].w[0] + 1428u));
    c.budget -= 1;
L_00348004:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0034804C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 80u));  goto L_0034803C; }
L_0034803C:
    c.f[0] = ld32((c.r[16].w[0] + 1428u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1428u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_0034804C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348054u);  if (depth < kMaxDepth) unit_0057(c, 175u, depth + 1u); else { c.pc = 0x0027DB10u; return; } if (c.pc != 0x00348054u) [[unlikely]] return; }
L_00348054:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00348070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348084u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x00348084u) [[unlikely]] return; }
L_00348084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 1408u);
    set32(c.r[3], c.r[3].w[0] + 1464u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], 0u + 20003u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 13;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003480E4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003480E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003480E8; } }
L_003480E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003480E4:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 1;
L_003480E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00348100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003481F0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_00348128; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003481FC; } }
L_00348128:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[4] = 0u;
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.f[2] = ld32((c.r[4].w[0] + 120u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 460u), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 18;
    if (c.r[3].d[0] == 0ull) { c.f[4] = ld32((c.r[6].w[0] + 80u));  goto L_00348170; }
L_00348170:
    c.f[2] = ld32((c.r[4].w[0] + 120u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[28].w[0] - 32180u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 120u), c.f[1]);  if (t) { goto L_003481AC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 3;
L_003481AC:
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003481CC; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_003481CC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[4].w[0] + 120u), c.f[1]);  goto L_003481F8; }
    c.f[1] = c.f[0];
    st32((c.r[4].w[0] + 120u), c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003481F8; } }
L_003481F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003481F8u);  if (depth < kMaxDepth) unit_0054(c, 312u, depth + 1u); else { c.pc = 0x00272910u; return; } if (c.pc != 0x003481F8u) [[unlikely]] return; }
L_003481F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003481FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00348210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003482AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 1408u);
    set32(c.r[2], c.r[2].w[0] + 1464u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00348294; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00348294; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348288u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00348288u) [[unlikely]] return; }
L_00348288:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348294u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00348294u) [[unlikely]] return; }
L_00348294:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003482B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003482ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003482ACu) [[unlikely]] return; }
L_003482AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003482B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003482D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034835C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 1504u);
    set32(c.r[2], c.r[2].w[0] + 1560u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00348344; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034832Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0034832Cu) [[unlikely]] return; }
L_0034832C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348338u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00348338u) [[unlikely]] return; }
L_00348338:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348344u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00348344u) [[unlikely]] return; }
L_00348344:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00348360; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034835Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034835Cu) [[unlikely]] return; }
L_0034835C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00348360:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348380:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003482D0u | kUnwind; return; } goto L_003482D0; }
L_00348390:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00348210u | kUnwind; return; } goto L_00348210; }
L_003483A0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003483D0u); set32(c.r[4], 0u + 1472u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003483D0u) [[unlikely]] return; }
L_003483D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003483F4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003483F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 22u, depth + 1u); else { c.pc = 0x00348410u; return; } if (c.pc != 0x003483F0u) [[unlikely]] return; }
L_003483F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003483F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00348410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 1;
L_00348414:
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 1;
L_00348418:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348424u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00348424u) [[unlikely]] return; }
L_00348424:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 1888u);
    set32(c.r[2], c.r[2].w[0] + 1944u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1424u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1448u), 0u);
    st32((c.r[16].w[0] + 1444u), 0u);
    st32((c.r[16].w[0] + 1440u), 0u);
    st32((c.r[16].w[0] + 1452u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1456u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00348470:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 21u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003484E8; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 140u);  goto L_003484B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003484F8; } }
    set32(c.r[4], 0u + 140u);
    c.budget -= 1;
L_003484B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003484C0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003484C0u) [[unlikely]] return; }
L_003484C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003484FC; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003484E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 138u, depth + 1u); else { c.pc = 0x003495E0u; return; } if (c.pc != 0x003484E0u) [[unlikely]] return; }
L_003484E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003484F8; } }
L_003484E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003484F0u); set32(c.r[5], 0u + 11200u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x003484F0u) [[unlikely]] return; }
L_003484F0:
    st32((c.r[19].w[0] + 1456u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003484F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003484FC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00348518:
    c.budget -= 2;
L_00348520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034853Cu); set32(c.r[4], 0u + 660u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034853Cu) [[unlikely]] return; }
L_0034853C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00348568; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348550u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 8u, depth + 1u); else { c.pc = 0x002AC0E0u; return; } if (c.pc != 0x00348550u) [[unlikely]] return; }
L_00348550:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2128u);
    set32(c.r[2], c.r[2].w[0] + 2184u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
L_00348568:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 11200u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348598u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00348598u) [[unlikely]] return; }
L_00348598:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003485A4u); st32((c.r[16].w[0] + 1456u), 0u);  if (depth < kMaxDepth) unit_0057(c, 85u, depth + 1u); else { c.pc = 0x0027CCC0u; return; } if (c.pc != 0x003485A4u) [[unlikely]] return; }
L_003485A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003485C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003485D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x003485D4u) [[unlikely]] return; }
L_003485D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], 0u + 10014u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0034879C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + 2916u);  if (t) { goto L_00348618; } }
L_00348600:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[16].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00348618; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_00348624; } }
L_00348618:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00348600u | kUnwind; return; } goto L_00348600; }
L_00348624:
    set32(c.r[4], ld32((c.r[16].w[0] + 1424u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00348714; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003486D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00348650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00348798; } }
L_00348650:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00348798; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034865C:
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 71u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034866Cu); st32((c.r[16].w[0] + 1424u), 0u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034866Cu) [[unlikely]] return; }
L_0034866C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034867Cu); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034867Cu) [[unlikely]] return; }
L_0034867C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034868Cu); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034868Cu) [[unlikely]] return; }
L_0034868C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034869Cu); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034869Cu) [[unlikely]] return; }
L_0034869C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003486ACu); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x003486ACu) [[unlikely]] return; }
L_003486AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003486C0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x003486C0u) [[unlikely]] return; }
L_003486C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1424u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1424u), c.r[3].w[0]);  if (t) { goto L_00348798; } }
L_003486D0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00348798; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00348798; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003486F4u); set32(c.r[6], 0u + 72u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x003486F4u) [[unlikely]] return; }
L_003486F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348708u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00348708u) [[unlikely]] return; }
L_00348708:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1424u), c.r[3].w[0]);  if (t) { goto L_00348798; } }
L_00348714:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034865Cu | kUnwind; return; } goto L_0034865C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 176u)));  goto L_00348734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0034873C; } }
L_00348734:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_0034873C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00348798; } }
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348754u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00348754u) [[unlikely]] return; }
L_00348754:
    set32(c.r[5], 0u + 9u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348764u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00348764u) [[unlikely]] return; }
L_00348764:
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348774u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00348774u) [[unlikely]] return; }
L_00348774:
    set32(c.r[5], 0u + 8u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348784u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00348784u) [[unlikely]] return; }
L_00348784:
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348794u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00348794u) [[unlikely]] return; }
L_00348794:
    st32((c.r[16].w[0] + 1424u), 0u);
    c.budget -= 1;
L_00348798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0034879C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003487B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034885C; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 1456u)));  goto L_00348844; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 148u)));  goto L_003487F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00348874; } }
L_003487F0:
    set32(c.r[2], 0u + 10013u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 10014u);  goto L_0034881C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00348870; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00348870; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 580u), 0u);  if (t) { goto L_00348870; } }
L_0034881C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00348870; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00348870; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00348870; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 576u), 0u);  if (t) { goto L_00348870; } }
L_00348844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00348870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348854u); set32(c.r[5], 0u + 11200u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00348854u) [[unlikely]] return; }
L_00348854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00348870; } }
L_0034885C:
    set32(c.r[2], ld32((c.r[17].w[0] + 1456u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00348870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348870u);  if (depth < kMaxDepth) unit_008A(c, 64u, depth + 1u); else { c.pc = 0x00348B30u; return; } if (c.pc != 0x00348870u) [[unlikely]] return; }
L_00348870:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00348874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034887Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x0034887Cu) [[unlikely]] return; }
L_0034887C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348890:
    c.f[0] = ld32((c.r[4].w[0] + 1440u));
    set32(c.r[2], 0u + 32u);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1444u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1448u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1452u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1456u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_003488C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 1440u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 1444u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 1448u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 1452u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0] + 1456u), c.r[2].w[0]);  if (t) { goto L_003488FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003488FCu);  if (depth < kMaxDepth) unit_008A(c, 64u, depth + 1u); else { c.pc = 0x00348B30u; return; } if (c.pc != 0x003488FCu) [[unlikely]] return; }
L_003488FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00348910:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 10013u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.f[21] = ld32((c.r[29].w[0] + 84u));
    c.f[22] = ld32((c.r[29].w[0] + 88u));
    c.f[23] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[20] = ld32((c.r[29].w[0] + 80u));  if (t) { goto L_00348A40; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00348964; }
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 1;
L_00348964:
    set32(c.r[17], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[5], 0u + 1100u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034897Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0034897Cu) [[unlikely]] return; }
L_0034897C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 48u), c.f[20]);  goto L_003489A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348990u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00348990u) [[unlikely]] return; }
L_00348990:
    c.f[20] = ld32((c.r[18].w[0] + 1392u));
    c.f[21] = ld32((c.r[18].w[0] + 1396u));
    c.f[22] = ld32((c.r[18].w[0] + 1400u));
    c.f[23] = ld32((c.r[18].w[0] + 1404u));
    st32((c.r[17].w[0] + 48u), c.f[20]);
    c.budget -= 5;
L_003489A4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 52u), c.f[21]);
    st32((c.r[17].w[0] + 56u), c.f[22]);
    st32((c.r[17].w[0] + 60u), c.f[23]);
    st32((c.r[17].w[0] + 80u), c.f[20]);
    st32((c.r[17].w[0] + 84u), c.f[21]);
    st32((c.r[17].w[0] + 88u), c.f[22]);
    st32((c.r[17].w[0] + 92u), c.f[23]);
    st32((c.r[17].w[0] + 64u), c.f[20]);
    st32((c.r[17].w[0] + 68u), c.f[21]);
    st32((c.r[17].w[0] + 72u), c.f[22]);
    st32((c.r[17].w[0] + 76u), c.f[23]);
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1440u));
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1444u));
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1448u));
    st32((c.r[17].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1452u));
    st32((c.r[17].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1440u));
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1444u));
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1448u));
    st32((c.r[17].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1452u));
    st32((c.r[17].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1440u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1444u));
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1448u));
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1452u));
    st32((c.r[17].w[0] + 140u), c.f[0]);
    c.budget -= 39;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_00348B04; } }
L_00348A40:
    set32(c.r[3], 0u + 10014u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00348B08; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00348A5C; }
    set32(c.r[3], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 1;
L_00348A5C:
    set32(c.r[6], ld32((c.r[3].w[0] + 80u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x442A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0] + 48u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[6].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 56u), 0u);
    st32((c.r[6].w[0] + 60u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 80u), 0u);
    st32((c.r[6].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 88u), 0u);
    st32((c.r[6].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 64u), 0u);
    st32((c.r[6].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 72u), 0u);
    st32((c.r[6].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 108u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1440u));
    st32((c.r[6].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1444u));
    st32((c.r[6].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1448u));
    st32((c.r[6].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1452u));
    st32((c.r[6].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1440u));
    st32((c.r[6].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1444u));
    st32((c.r[6].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1448u));
    st32((c.r[6].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1452u));
    st32((c.r[6].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1440u));
    st32((c.r[6].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1444u));
    st32((c.r[6].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1448u));
    st32((c.r[6].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1452u));
    st32((c.r[6].w[0] + 140u), c.f[0]);
    st32((c.r[6].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 42;
L_00348B04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00348B08:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00348B30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00348B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00348BAC; } }
L_00348B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B5Cu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00348B5Cu) [[unlikely]] return; }
L_00348B5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00348B7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00348B8C; } }
L_00348B7C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00348B8C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00348BAC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00348BA4; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00348BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00348BAC; } }
L_00348BAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 11200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348BBCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00348BBCu) [[unlikely]] return; }
L_00348BBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { ld128((c.r[16].w[0] + 1440u) & ~15u, c.r[2]);  goto L_00348BD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00348C08; } }
L_00348BD0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348BE0u); st32((c.r[29].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00348BE0u) [[unlikely]] return; }
L_00348BE0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348BECu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x00348BECu) [[unlikely]] return; }
L_00348BEC:
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348BF8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00348BF8u) [[unlikely]] return; }
L_00348BF8:
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 4;
L_00348C08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00348C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348C3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x00348C3Cu) [[unlikely]] return; }
L_00348C3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 1840u);
    set32(c.r[3], c.r[3].w[0] + 1852u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474B0000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16718ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[2], 0u + 10013u);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 16;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 10014u);  goto L_00348CA0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00348CC8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00348CC8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 580u), c.r[3].w[0]);  if (t) { goto L_00348CC8; } }
L_00348CA0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00348CC8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00348CC8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00348CC8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 576u), c.r[3].w[0]);
    c.budget -= 3;
L_00348CC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348CD4u); set32(c.r[4], c.r[4].w[0] - 16784u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00348CD4u) [[unlikely]] return; }
L_00348CD4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00348CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00348D54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 1840u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 1852u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 16752u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348D30u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00348D30u) [[unlikely]] return; }
L_00348D30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348D3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x00348D3Cu) [[unlikely]] return; }
L_00348D3C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00348D58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348D54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00348D54u) [[unlikely]] return; }
L_00348D54:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00348D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348D70:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 44u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00349354; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 16720u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00348000u < 16384u) { entry = entries_008A[(t - 0x00348000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00348DD4:
    set32(c.r[3], ld32((c.r[19].w[0] + 1456u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00348DEC; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00349354; } }
L_00348DEC:
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_00348DF0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348DFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 416u, depth + 1u); else { c.pc = 0x002A3FE0u; return; } if (c.pc != 0x00348DFCu) [[unlikely]] return; }
L_00348DFC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00348E94; } }
L_00348E08:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[21], c.r[2].w[0] + 160u);
    set32(c.r[16], ld32((c.r[21].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348E1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00348E1Cu) [[unlikely]] return; }
L_00348E1C:
    set32(c.r[22], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348E28u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00348E28u) [[unlikely]] return; }
L_00348E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348E30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00348E30u) [[unlikely]] return; }
L_00348E30:
    set32(c.r[23], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348E3Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00348E3Cu) [[unlikely]] return; }
L_00348E3C:
    c.f[3] = ld32((c.r[23].w[0] + 736u));
    c.f[2] = ld32((c.r[16].w[0] + 736u));
    c.f[1] = ld32((c.r[22].w[0] + 744u));
    c.f[0] = ld32((c.r[16].w[0] + 744u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348E58u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x00348E58u) [[unlikely]] return; }
L_00348E58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00348E94; }
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00348E84; }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_00348E84:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
L_00348E94:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00348E08u | kUnwind; return; } goto L_00348E08; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00349020; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348EB8u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00348EB8u) [[unlikely]] return; }
L_00348EB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348ED0u); c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00348ED0u) [[unlikely]] return; }
L_00348ED0:
    c.f[20] = c.f[0];
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348EE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x00348EE4u) [[unlikely]] return; }
L_00348EE4:
    c.f[21] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348EF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x00348EF0u) [[unlikely]] return; }
L_00348EF0:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[19].w[0] + 1440u), c.f[0]);
    st32((c.r[19].w[0] + 1444u), 0u);
    st32((c.r[19].w[0] + 1448u), c.f[21]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F10u); st32((c.r[19].w[0] + 1452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 128u, depth + 1u); else { c.pc = 0x003493E0u; return; } if (c.pc != 0x00348F10u) [[unlikely]] return; }
L_00348F10:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_00349064; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0034900C; } }
L_00348F20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[21] = c.r[2].w[0];
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00348F84; } }
L_00348F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x00348F3Cu) [[unlikely]] return; }
L_00348F3C:
    c.f[22] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 8u, depth + 1u); else { c.pc = 0x00184140u; return; } if (c.pc != 0x00348F48u) [[unlikely]] return; }
L_00348F48:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[19].w[0] + 1440u), c.f[0]);
    st32((c.r[19].w[0] + 1444u), 0u);
    st32((c.r[19].w[0] + 1448u), c.f[22]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F68u); st32((c.r[19].w[0] + 1452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 128u, depth + 1u); else { c.pc = 0x003493E0u; return; } if (c.pc != 0x00348F68u) [[unlikely]] return; }
L_00348F68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  goto L_00348F78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00348F9C; } }
L_00348F78:
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 3;
L_00348F84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00348F34u | kUnwind; return; } goto L_00348F34; } }
L_00348F9C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00349060; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FB4u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00348FB4u) [[unlikely]] return; }
L_00348FB4:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FD0u); c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00348FD0u) [[unlikely]] return; }
L_00348FD0:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0034900C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FF8u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00348FF8u) [[unlikely]] return; }
L_00348FF8:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
L_0034900C:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[0] = fp::cvt_w_s(c.f[20]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00348F20u | kUnwind; return; } goto L_00348F20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349060; } }
L_00349020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349028u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00349028u) [[unlikely]] return; }
L_00349028:
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.f[0] = ld32((c.r[2].w[0] + 192u));
    st32((c.r[19].w[0] + 1440u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 196u));
    st32((c.r[19].w[0] + 1444u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 200u));
    st32((c.r[19].w[0] + 1448u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 204u));
    st32((c.r[19].w[0] + 1452u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349060u); st32((c.r[19].w[0] + 1444u), 0u);  if (depth < kMaxDepth) unit_008A(c, 128u, depth + 1u); else { c.pc = 0x003493E0u; return; } if (c.pc != 0x00349060u) [[unlikely]] return; }
L_00349060:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_00349064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034906Cu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0034906Cu) [[unlikely]] return; }
L_0034906C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034907Cu); st32((c.r[19].w[0] + 1456u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 64u, depth + 1u); else { c.pc = 0x00348B30u; return; } if (c.pc != 0x0034907Cu) [[unlikely]] return; }
L_0034907C:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349098u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00349098u) [[unlikely]] return; }
L_00349098:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1100u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003490ACu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003490ACu) [[unlikely]] return; }
L_003490AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  goto L_003490C4; }
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.budget -= 4;
L_003490C4:
    set32(c.r[5], 0u + 25u);
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003490E4u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003490E4u) [[unlikely]] return; }
L_003490E4:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
L_003490F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003490F8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 61u, depth + 1u); else { c.pc = 0x00348910u; return; } if (c.pc != 0x003490F8u) [[unlikely]] return; }
L_003490F8:
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_00349358; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00349120; }
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 1;
L_00349120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349128u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 288u, depth + 1u); else { c.pc = 0x00266500u; return; } if (c.pc != 0x00349128u) [[unlikely]] return; }
L_00349128:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[20].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 5;
L_0034913C:
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00349354; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1100u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349168u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00349168u) [[unlikely]] return; }
L_00349168:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_00349184; }
    set32(c.r[4], ld32((c.r[2].w[0] + 176u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 5;
L_00349184:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00349354; } }
L_00349194:
    st32((c.r[19].w[0] + 1456u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003491A4u); set32(c.r[5], 0u + 11200u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x003491A4u) [[unlikely]] return; }
L_003491A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 3024u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[2].w[0] + 112u);
    set32(c.r[16], c.r[2].w[0] + 2912u);
    set32(c.r[21], c.r[2].w[0] + 2916u);
    set32(c.r[22], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[2].w[0] + 452u);  if (t) { goto L_00349294; } }
L_003491D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    set32(c.r[3], c.r[23].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 10;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00349294; }
    set32(c.r[3], ld32((c.r[2].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00349290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349210u); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00349210u) [[unlikely]] return; }
L_00349210:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349228u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00349228u) [[unlikely]] return; }
L_00349228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349230u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00349230u) [[unlikely]] return; }
L_00349230:
    c.f[3] = ld32((c.r[19].w[0] + 1440u));
    c.f[2] = ld32((c.r[17].w[0] + 736u));
    c.f[1] = ld32((c.r[19].w[0] + 1448u));
    c.f[0] = ld32((c.r[17].w[0] + 744u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034924Cu); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x0034924Cu) [[unlikely]] return; }
L_0034924C:
    c.f[2] = ld32((c.r[17].w[0] + 720u));
    c.f[1] = ld32((c.r[28].w[0] - 32088u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00349290; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 11;
L_00349290:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00349294:
    c.r[2].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003491D0u | kUnwind; return; } goto L_003491D0; }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003492ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0074(c, 253u, depth + 1u); else { c.pc = 0x002F3B20u; return; } if (c.pc != 0x003492ACu) [[unlikely]] return; }
L_003492AC:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
L_003492B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 52u)));  goto L_00349300; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003492D8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003492D8u) [[unlikely]] return; }
L_003492D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003492FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003492ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 265u, depth + 1u); else { c.pc = 0x002F3E60u; return; } if (c.pc != 0x003492ECu) [[unlikely]] return; }
L_003492EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003492F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 274u, depth + 1u); else { c.pc = 0x002F3F90u; return; } if (c.pc != 0x003492F4u) [[unlikely]] return; }
L_003492F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349354; } }
L_003492FC:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 1;
L_00349300:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_00349308:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[6], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 14u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349324u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00349324u) [[unlikely]] return; }
L_00349324:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00349354; } }
L_00349334:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00349354; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00349354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00349358:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00349390:
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003493D8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 80u));  goto L_003493CC; }
L_003493CC:
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.budget -= 3;
L_003493D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003493E0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    set32(c.r[5], c.r[5].w[0] + 11056u);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 352u), 0u);
    st32((c.r[29].w[0] + 336u), 0u);
    st32((c.r[29].w[0] + 340u), 0u);
    st32((c.r[29].w[0] + 344u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349444u); st32((c.r[29].w[0] + 348u), 0u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x00349444u) [[unlikely]] return; }
L_00349444:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[5], c.r[16].w[0] + 1440u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349474u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x00349474u) [[unlikely]] return; }
L_00349474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[24] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[25] = ld32((c.r[29].w[0] + 116u));
    c.f[26] = ld32((c.r[29].w[0] + 120u));
    c.f[27] = ld32((c.r[29].w[0] + 124u));
    c.f[12] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034949Cu); set32(c.r[5], c.r[5].w[0] + 11056u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0034949Cu) [[unlikely]] return; }
L_0034949C:
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[3], 0u - 9u);
    c.f[22] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[2], 0u - 17u);
    set32(c.r[7], ld32((c.r[6].w[0] + 96u)));
    c.f[23] = ld32((c.r[29].w[0] + 108u));
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], ld32((c.r[7].w[0] + 280u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[7].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 280u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003494E8u); st32((c.r[6].w[0] + 280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x003494E8u) [[unlikely]] return; }
L_003494E8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003494F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x003494F4u) [[unlikely]] return; }
L_003494F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 322u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 144u)));
    st16((c.r[29].w[0] + 320u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_00349514; } }
    st16((c.r[29].w[0] + 322u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00349514:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 144u), c.f[24]);
    st32((c.r[29].w[0] + 148u), c.f[25]);
    st32((c.r[29].w[0] + 152u), c.f[26]);
    st32((c.r[29].w[0] + 156u), c.f[27]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    st32((c.r[29].w[0] + 164u), c.f[21]);
    st32((c.r[29].w[0] + 168u), c.f[22]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349548u); st32((c.r[29].w[0] + 172u), c.f[23]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x00349548u) [[unlikely]] return; }
L_00349548:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1296u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00349564; } }
    set32(c.r[7], c.r[4].w[0] + 80u);
    c.budget -= 1;
L_00349564:
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[8], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349574u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 393u, depth + 1u); else { c.pc = 0x00267530u; return; } if (c.pc != 0x00349574u) [[unlikely]] return; }
L_00349574:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[2].w[0] + 4u));  goto L_00349590; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349588u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x00349588u) [[unlikely]] return; }
L_00349588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003495A4; } }
L_00349590:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003495A0u); st32((c.r[16].w[0] + 1444u), c.f[0]);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x003495A0u) [[unlikely]] return; }
L_003495A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003495A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_003495E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003495F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x003495F4u) [[unlikely]] return; }
L_003495F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    set32(c.r[3], c.r[3].w[0] + 1800u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 136u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00349654u); set32(c.r[5], 0u + 26u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00349654u) [[unlikely]] return; }
L_00349654:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1100u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349668u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00349668u) [[unlikely]] return; }
L_00349668:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00349684; }
    set32(c.r[4], ld32((c.r[2].w[0] + 176u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_00349684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034968Cu);  if (depth < kMaxDepth) unit_0053(c, 67u, depth + 1u); else { c.pc = 0x0026C980u; return; } if (c.pc != 0x0034968Cu) [[unlikely]] return; }
L_0034968C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003496A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003496BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x003496BCu) [[unlikely]] return; }
L_003496BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_00349980; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[16], ld32((c.r[18].w[0] + 76u)));  goto L_00349804; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[18].w[0] + 100u));  goto L_003497DC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u - 1u);  goto L_00349708; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[4].w[0] + 1u);  goto L_00349700; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003499B4; } }
L_00349700:
    st32((c.r[18].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[17], 0u - 1u);
    c.budget -= 2;
L_00349708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003497A4; } }
L_00349710:
    set32(c.r[5], 0u + 10013u);
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 10014u);  goto L_0034975C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349730u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 348u, depth + 1u); else { c.pc = 0x002A33F0u; return; } if (c.pc != 0x00349730u) [[unlikely]] return; }
L_00349730:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003497A4; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0034974C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 111u);  if (t) { goto L_003497B0; } }
L_0034974C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[17], 0u + 333u);  goto L_003497B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 222u);  if (t) { goto L_003497B0; } }
L_0034975C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003497B0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349774u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 348u, depth + 1u); else { c.pc = 0x002A33F0u; return; } if (c.pc != 0x00349774u) [[unlikely]] return; }
L_00349774:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003497A0; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00349790; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 444u);  if (t) { goto L_003497B0; } }
L_00349790:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[17], 0u + 666u);  goto L_003497B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 555u);  if (t) { goto L_003497B0; } }
L_003497A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003497A4:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00349710u | kUnwind; return; } goto L_00349710; }
L_003497B0:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[3], ld32((c.r[18].w[0] + 136u)));  goto L_003497D0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003497CCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x003497CCu) [[unlikely]] return; }
L_003497CC:
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 1;
L_003497D0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 136u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.budget -= 3;
L_003497DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003499B0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 4;
L_00349804:
    set32(c.r[5], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349810u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00349810u) [[unlikely]] return; }
L_00349810:
    set32(c.r[17], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00349828; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00349880; } }
L_00349828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349830u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00349830u) [[unlikely]] return; }
L_00349830:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00349850; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00349860; } }
L_00349850:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00349860:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00349880; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00349878; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00349878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349880; } }
L_00349880:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[6], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349890u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00349890u) [[unlikely]] return; }
L_00349890:
    set32(c.r[17], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003498A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034990C; } }
L_003498A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003498B0u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003498B0u) [[unlikely]] return; }
L_003498B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003498D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003498E0; } }
L_003498D0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003498E0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0034990C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00349900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00349904; } }
L_00349900:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00349904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034990C; } }
L_0034990C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[6], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034991Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0034991Cu) [[unlikely]] return; }
L_0034991C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_00349958; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349930u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00349930u) [[unlikely]] return; }
L_00349930:
    set32(c.r[5], c.r[16].w[0] + 1440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034993Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x0034993Cu) [[unlikely]] return; }
L_0034993C:
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349948u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00349948u) [[unlikely]] return; }
L_00349948:
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[17].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 4;
L_00349958:
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00349970u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00349970u) [[unlikely]] return; }
L_00349970:
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 4;
L_00349980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349988u);  if (depth < kMaxDepth) unit_008A(c, 61u, depth + 1u); else { c.pc = 0x00348910u; return; } if (c.pc != 0x00349988u) [[unlikely]] return; }
L_00349988:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1100u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034999Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0034999Cu) [[unlikely]] return; }
L_0034999C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003499B0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 3;
L_003499B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003499B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003499D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00349A6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 1744u);
    set32(c.r[2], c.r[2].w[0] + 1800u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00349A54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00349A54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349A48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00349A48u) [[unlikely]] return; }
L_00349A48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349A54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00349A54u) [[unlikely]] return; }
L_00349A54:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00349A70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349A6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00349A6Cu) [[unlikely]] return; }
L_00349A6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00349A70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00349A90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00349B1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 1888u);
    set32(c.r[2], c.r[2].w[0] + 1944u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00349B04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349AECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x00349AECu) [[unlikely]] return; }
L_00349AEC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349AF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00349AF8u) [[unlikely]] return; }
L_00349AF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349B04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00349B04u) [[unlikely]] return; }
L_00349B04:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00349B20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349B1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00349B1Cu) [[unlikely]] return; }
L_00349B1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00349B20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00349B40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00349BC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2128u);
    set32(c.r[2], c.r[2].w[0] + 2184u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00349BA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349B9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00349B9Cu) [[unlikely]] return; }
L_00349B9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349BA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00349BA8u) [[unlikely]] return; }
L_00349BA8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00349BC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349BC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00349BC0u) [[unlikely]] return; }
L_00349BC0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00349BC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00349BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00349C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349C00u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00349C00u) [[unlikely]] return; }
L_00349C00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00349C30; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00349C14; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00349C14:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349C20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 70u, depth + 1u); else { c.pc = 0x00348C20u; return; } if (c.pc != 0x00349C20u) [[unlikely]] return; }
L_00349C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349C2C; } }
L_00349C28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00349C2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00349C30:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00349C58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00349C60; } }
L_00349C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349C60u);  if (depth < kMaxDepth) unit_0063(c, 207u, depth + 1u); else { c.pc = 0x002AE0E0u; return; } if (c.pc != 0x00349C60u) [[unlikely]] return; }
L_00349C60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00349C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00349C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00349C90; } }
L_00349C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349C90u);  if (depth < kMaxDepth) unit_0063(c, 214u, depth + 1u); else { c.pc = 0x002AE2C0u; return; } if (c.pc != 0x00349C90u) [[unlikely]] return; }
L_00349C90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00349CA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00349B40u | kUnwind; return; } goto L_00349B40; }
L_00349CB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00349A90u | kUnwind; return; } goto L_00349A90; }
L_00349CC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003487B0u | kUnwind; return; } goto L_003487B0; }
L_00349CD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00348CF0u | kUnwind; return; } goto L_00348CF0; }
L_00349CD8:
    c.budget -= 2;
L_00349CE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003499D0u | kUnwind; return; } goto L_003499D0; }
L_00349CF0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349D20u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00349D20u) [[unlikely]] return; }
L_00349D20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00349D44; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349D40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 205u, depth + 1u); else { c.pc = 0x00349F70u; return; } if (c.pc != 0x00349D40u) [[unlikely]] return; }
L_00349D40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00349D44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00349D60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 608u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349D9Cu); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x00349D9Cu) [[unlikely]] return; }
L_00349D9C:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_00349DB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_00349DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349DBCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00349DBCu) [[unlikely]] return; }
L_00349DBC:
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349DD8u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00349DD8u) [[unlikely]] return; }
L_00349DD8:
    set32(c.r[4], ld32((c.r[20].w[0] + 464u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349DF0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x00349DF0u) [[unlikely]] return; }
L_00349DF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E00u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00349E00u) [[unlikely]] return; }
L_00349E00:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 420u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 32084u));  goto L_00349E44; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E24u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00349E24u) [[unlikely]] return; }
L_00349E24:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[20].w[0] + 176u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[28].w[0] - 32084u));
    c.budget -= 8;
L_00349E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E4Cu);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00349E4Cu) [[unlikely]] return; }
L_00349E4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E64u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x00349E64u) [[unlikely]] return; }
L_00349E64:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E74u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00349E74u) [[unlikely]] return; }
L_00349E74:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));  goto L_00349E94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00349ED8; } }
L_00349E94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 80u));  goto L_00349EB8; }
    c.f[1] = 0u;
    c.budget -= 1;
L_00349EB8:
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_00349ED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00349ED8; } }
L_00349ED4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00349ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00349F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00349F20u) [[unlikely]] return; }
L_00349F20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F2Cu); set32(c.r[16], c.r[16].w[0] + 736u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00349F2Cu) [[unlikely]] return; }
L_00349F2C:
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 736u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 744u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F48u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x00349F48u) [[unlikely]] return; }
L_00349F48:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F54u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00349F54u) [[unlikely]] return; }
L_00349F54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00349F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00349F84u) [[unlikely]] return; }
L_00349F84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2512u);
    set32(c.r[2], c.r[2].w[0] + 2568u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349FA8u); st32((c.r[16].w[0] + 1424u), 0u);  if (depth < kMaxDepth) unit_005B(c, 95u, depth + 1u); else { c.pc = 0x0028D070u; return; } if (c.pc != 0x00349FA8u) [[unlikely]] return; }
L_00349FA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349FC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0034A078; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 136u);  goto L_0034A048; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 132u);  goto L_0034A014; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034A0AC; } }
    set32(c.r[4], 0u + 132u);
    c.budget -= 1;
L_0034A014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A01Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034A01Cu) [[unlikely]] return; }
L_0034A01C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0034A0B0; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A03Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 220u, depth + 1u); else { c.pc = 0x0034A180u; return; } if (c.pc != 0x0034A03Cu) [[unlikely]] return; }
L_0034A03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A0AC; } }
    set32(c.r[4], 0u + 136u);
    c.budget -= 1;
L_0034A048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A050u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034A050u) [[unlikely]] return; }
L_0034A050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A0AC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A070u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 266u, depth + 1u); else { c.pc = 0x0034A6F0u; return; } if (c.pc != 0x0034A070u) [[unlikely]] return; }
L_0034A070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A0AC; } }
L_0034A078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A080u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034A080u) [[unlikely]] return; }
L_0034A080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A0AC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A0A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 286u, depth + 1u); else { c.pc = 0x0034AA30u; return; } if (c.pc != 0x0034A0A0u) [[unlikely]] return; }
L_0034A0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A0AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034A0AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0034A0B0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034A0D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A0ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 243u, depth + 1u); else { c.pc = 0x0027ED10u; return; } if (c.pc != 0x0034A0ECu) [[unlikely]] return; }
L_0034A0EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0034A0FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034A164; } }
L_0034A0FC:
    set32(c.r[3], ld32((c.r[3].w[0] + 3424u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0034A10C; }
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_0034A10C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034A11C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0034A168; } }
L_0034A11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A124u);  if (depth < kMaxDepth) unit_008A(c, 200u, depth + 1u); else { c.pc = 0x00349F00u; return; } if (c.pc != 0x0034A124u) [[unlikely]] return; }
L_0034A124:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A134u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 200u, depth + 1u); else { c.pc = 0x00349F00u; return; } if (c.pc != 0x0034A134u) [[unlikely]] return; }
L_0034A134:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0034A144; } }
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0034A164; }
L_0034A144:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[2], 0u + 1u);  goto L_0034A164; }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0034A160; } }
L_0034A154:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A164; } }
L_0034A160:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0034A164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0034A168:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034A180:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A1A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0055(c, 148u, depth + 1u); else { c.pc = 0x00275380u; return; } if (c.pc != 0x0034A1A0u) [[unlikely]] return; }
L_0034A1A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2416u);
    set32(c.r[2], c.r[2].w[0] + 2472u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 112u), 0u);
    st32((c.r[18].w[0] + 116u), 0u);
    st32((c.r[18].w[0] + 120u), 0u);
    st32((c.r[18].w[0] + 124u), 0u);
    st32((c.r[18].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 15;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0034A1E0; }
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0034A1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A1E8u); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_008A(c, 200u, depth + 1u); else { c.pc = 0x00349F00u; return; } if (c.pc != 0x0034A1E8u) [[unlikely]] return; }
L_0034A1E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { set32(c.r[2], 0u + 8192u);  goto L_0034A200; }
    set32(c.r[2], 0u - 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_0034A204; } }
L_0034A200:
    st32((c.r[18].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_0034A204:
    set32(c.r[19], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A210u); c.f[12] = ld32((c.r[28].w[0] - 32688u));  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0034A210u) [[unlikely]] return; }
L_0034A210:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A22Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0034A22Cu) [[unlikely]] return; }
L_0034A22C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A23Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0034A23Cu) [[unlikely]] return; }
L_0034A23C:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0034A260; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_0034A388; } }
L_0034A260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A268u); set32(c.r[5], 0u + 10900u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0034A268u) [[unlikely]] return; }
L_0034A268:
    set32(c.r[16], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0034A280; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034A2D8; } }
L_0034A280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A288u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0034A288u) [[unlikely]] return; }
L_0034A288:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0034A2A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034A2B8; } }
L_0034A2A8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0034A2B8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0034A2D8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0034A2D0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034A2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A2D8; } }
L_0034A2D8:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[6], 0u + 10900u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A2E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0034A2E8u) [[unlikely]] return; }
L_0034A2E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A2FCu); set32(c.r[5], c.r[2].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0034A2FCu) [[unlikely]] return; }
L_0034A2FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] >= 0; st32((c.r[16].w[0] + 308u), c.r[2].w[0]);  if (t) { goto L_0034A344; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], 0u + 100u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A32Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A32Cu) [[unlikely]] return; }
L_0034A32C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A33Cu); set32(c.r[6], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034A33Cu) [[unlikely]] return; }
L_0034A33C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (t) { goto L_0034A370; } }
L_0034A344:
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], 0u + 101u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A35Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A35Cu) [[unlikely]] return; }
L_0034A35C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A36Cu); set32(c.r[6], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0034A36Cu) [[unlikely]] return; }
L_0034A36C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_0034A370:
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A388u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A388u) [[unlikely]] return; }
L_0034A388:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034A3D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A3E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x0034A3E8u) [[unlikely]] return; }
L_0034A3E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_0034A458; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_0034A408; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (t) { goto L_0034A480; } }
L_0034A408:
    set32(c.r[7], c.r[17].w[0] + 124u);
    set32(c.r[5], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A418u); set32(c.r[6], c.r[4].w[0] + 1424u);  if (depth < kMaxDepth) unit_008A(c, 190u, depth + 1u); else { c.pc = 0x00349D60u; return; } if (c.pc != 0x0034A418u) [[unlikely]] return; }
L_0034A418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A47C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A434u); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A434u) [[unlikely]] return; }
L_0034A434:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 128u), 0u);  if (t) { goto L_0034A47C; } }
L_0034A458:
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A464u); set32(c.r[4], c.r[2].w[0] + 2072u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x0034A464u) [[unlikely]] return; }
L_0034A464:
    c.f[1] = ld32((c.r[17].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034A47C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_0034A47C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0034A480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A488u); set32(c.r[5], 0u + 10900u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0034A488u) [[unlikely]] return; }
L_0034A488:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 16u)));  goto L_0034A4EC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4A4u); set32(c.r[5], c.r[2].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0034A4A4u) [[unlikely]] return; }
L_0034A4A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4B8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x00158FC0u; return; } if (c.pc != 0x0034A4B8u) [[unlikely]] return; }
L_0034A4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4C0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x0034A4C0u) [[unlikely]] return; }
L_0034A4C0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4D0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0034A4D0u) [[unlikely]] return; }
L_0034A4D0:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4DCu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0034A4DCu) [[unlikely]] return; }
L_0034A4DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
L_0034A4EC:
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A4F8u) [[unlikely]] return; }
L_0034A4F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_0034A514; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 5;
L_0034A514:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    c.budget -= 1;
L_0034A518:
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0034A538; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0034A538:
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0034A560:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A57Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0055(c, 183u, depth + 1u); else { c.pc = 0x00275980u; return; } if (c.pc != 0x0034A57Cu) [[unlikely]] return; }
L_0034A57C:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0034A694; }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A598u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A598u) [[unlikely]] return; }
L_0034A598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A690; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A5B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0034A5B4u) [[unlikely]] return; }
L_0034A5B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], 0u + 6000u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A5C8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0034A5C8u) [[unlikely]] return; }
L_0034A5C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A5D8u); set32(c.r[5], c.r[2].w[0] + 1008u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x0034A5D8u) [[unlikely]] return; }
L_0034A5D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A5ECu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x00158FC0u; return; } if (c.pc != 0x0034A5ECu) [[unlikely]] return; }
L_0034A5EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A5F4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0034A5F4u) [[unlikely]] return; }
L_0034A5F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A604u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0034A604u) [[unlikely]] return; }
L_0034A604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A60Cu); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0034A60Cu) [[unlikely]] return; }
L_0034A60C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 104u)));  goto L_0034A664; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A624u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0034A624u) [[unlikely]] return; }
L_0034A624:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 21056u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 21064u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 21068u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[29].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A660u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x0034A660u) [[unlikely]] return; }
L_0034A660:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 1;
L_0034A664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A66Cu);  if (depth < kMaxDepth) unit_000E(c, 216u, depth + 1u); else { c.pc = 0x00159970u; return; } if (c.pc != 0x0034A66Cu) [[unlikely]] return; }
L_0034A66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A674u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0034A674u) [[unlikely]] return; }
L_0034A674:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A680u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0034A680u) [[unlikely]] return; }
L_0034A680:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0034A690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0034A694:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0034A6B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0034A6C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0034A6E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A6E0u);  if (depth < kMaxDepth) unit_0055(c, 272u, depth + 1u); else { c.pc = 0x002768D0u; return; } if (c.pc != 0x0034A6E0u) [[unlikely]] return; }
L_0034A6E0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0034A6E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034A6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A704u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x0034A704u) [[unlikely]] return; }
L_0034A704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 2320u);
    set32(c.r[3], c.r[3].w[0] + 2376u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034A740:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 44u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034A7F0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A76Cu); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0034A76Cu) [[unlikely]] return; }
L_0034A76C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A778u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0034A778u) [[unlikely]] return; }
L_0034A778:
    set32(c.r[25], ld32((c.r[17].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | 34464ull;
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A798u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A798u) [[unlikely]] return; }
L_0034A798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A7A0u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0062(c, 76u, depth + 1u); else { c.pc = 0x002A89C0u; return; } if (c.pc != 0x0034A7A0u) [[unlikely]] return; }
L_0034A7A0:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A7B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0034A7B0u) [[unlikely]] return; }
L_0034A7B0:
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A7BCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0034A7BCu) [[unlikely]] return; }
L_0034A7BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 352u);  goto L_0034A7DC; }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A7D8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0034A7D8u) [[unlikely]] return; }
L_0034A7D8:
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.budget -= 1;
L_0034A7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A7E4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0034A7E4u) [[unlikely]] return; }
L_0034A7E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 3;
L_0034A7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0034A810:
    set32(c.r[29], c.r[29].w[0] - 144u);
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
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[21], ld32((c.r[5].w[0] + 3024u)));
    set32(c.r[4], c.r[5].w[0] + 112u);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[22], c.r[4].w[0] + 2916u);  if (t) { goto L_0034A85C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_0034A860; } }
L_0034A85C:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034A860:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_0034A9FC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00282740u; return; } if (c.pc != 0x0034A874u) [[unlikely]] return; }
L_0034A874:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], c.r[3].w[0] + 27u);
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0034A894; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0034A8EC; } }
L_0034A894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A89Cu);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0034A89Cu) [[unlikely]] return; }
L_0034A89C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0034A8BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0034A8CC; } }
L_0034A8BC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0034A8CC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0034A8EC; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[18], ld32((c.r[4].w[0] + 4u)));  goto L_0034A8E4; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034A8E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A8EC; } }
L_0034A8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0034A9EC; } }
L_0034A8F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.f[3] = ld32((c.r[2].w[0] + 192u));
    c.f[1] = ld32((c.r[2].w[0] + 200u));
    c.f[2] = ld32((c.r[16].w[0] + 192u));
    c.f[0] = ld32((c.r[16].w[0] + 200u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A91Cu); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x0034A91Cu) [[unlikely]] return; }
L_0034A91C:
    set32(c.r[8], ld32((c.r[20].w[0] + 96u)));
    c.f[20] = c.f[0];
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A93Cu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x0034A93Cu) [[unlikely]] return; }
L_0034A93C:
    c.f[13] = c.f[0];
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    set32(c.r[6], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.f[14] = 0u;
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[8], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A96Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0034A96Cu) [[unlikely]] return; }
L_0034A96C:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A984u); set32(c.r[6], c.r[2].w[0] + 10100u);  if (depth < kMaxDepth) unit_0061(c, 368u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x0034A984u) [[unlikely]] return; }
L_0034A984:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  goto L_0034A994; }
    st32((c.r[2].w[0] + 328u), c.f[20]);
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 2;
L_0034A994:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], c.r[4].w[0] + 15u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[3].w[0] + 608u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1024u)));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[3], c.r[4].w[0] + 1024u);  if (t) { goto L_0034A9E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0034A9D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_0034A9D4; } }
L_0034A9D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034A9D4:
    set32(c.r[4], ld32((c.r[2].w[0] + 76u)));
    c.f[12] = c.f[20];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A9E8u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0034A9E8u) [[unlikely]] return; }
L_0034A9E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0034A9EC:
    c.r[3].d[0] = c.r[17].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034A8F4u | kUnwind; return; } goto L_0034A8F4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0034A9FC:
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
L_0034AA30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 414u, depth + 1u); else { c.pc = 0x00273780u; return; } if (c.pc != 0x0034AA4Cu) [[unlikely]] return; }
L_0034AA4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2224u);
    set32(c.r[2], c.r[2].w[0] + 2280u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.f[12] = ld32((c.r[28].w[0] - 32688u));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 1424u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA84u); st32((c.r[16].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0034AA84u) [[unlikely]] return; }
L_0034AA84:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 1424u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AAA0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0034AAA0u) [[unlikely]] return; }
L_0034AAA0:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AAB0u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0034AAB0u) [[unlikely]] return; }
L_0034AAB0:
    c.f[1] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0034AAD4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_0034AAEC; } }
L_0034AAD4:
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AAECu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034AAECu) [[unlikely]] return; }
L_0034AAEC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034AB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0034AB5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AB38u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0034AB38u) [[unlikely]] return; }
L_0034AB38:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
L_0034AB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AB64u);  if (depth < kMaxDepth) unit_0054(c, 420u, depth + 1u); else { c.pc = 0x00273830u; return; } if (c.pc != 0x0034AB64u) [[unlikely]] return; }
L_0034AB64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034AB80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034ABE4; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0034ABAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0034ABF0; } }
L_0034ABAC:
    set32(c.r[7], c.r[16].w[0] + 112u);
    set32(c.r[5], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ABBCu); set32(c.r[6], c.r[4].w[0] + 1424u);  if (depth < kMaxDepth) unit_008A(c, 190u, depth + 1u); else { c.pc = 0x00349D60u; return; } if (c.pc != 0x0034ABBCu) [[unlikely]] return; }
L_0034ABBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034ABEC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ABD8u); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034ABD8u) [[unlikely]] return; }
L_0034ABD8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0034ABEC; } }
L_0034ABE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ABECu);  if (depth < kMaxDepth) unit_0054(c, 421u, depth + 1u); else { c.pc = 0x00273840u; return; } if (c.pc != 0x0034ABECu) [[unlikely]] return; }
L_0034ABEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0034ABF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034AC00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034AC9C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2224u);
    set32(c.r[2], c.r[2].w[0] + 2280u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034AC84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22352u);
    set32(c.r[2], c.r[2].w[0] + 22408u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034AC84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AC78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034AC78u) [[unlikely]] return; }
L_0034AC78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AC84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034AC84u) [[unlikely]] return; }
L_0034AC84:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034ACA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AC9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034AC9Cu) [[unlikely]] return; }
L_0034AC9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034ACA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034ACC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034AD5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2320u);
    set32(c.r[2], c.r[2].w[0] + 2376u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034AD44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034AD44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AD38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034AD38u) [[unlikely]] return; }
L_0034AD38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AD44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034AD44u) [[unlikely]] return; }
L_0034AD44:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034AD60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AD5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034AD5Cu) [[unlikely]] return; }
    goto L_0034AD5C;
L_0034AD58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034AD5C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034AD60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034AD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034AE1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2416u);
    set32(c.r[2], c.r[2].w[0] + 2472u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034AE04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22832u);
    set32(c.r[2], c.r[2].w[0] + 22888u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034AE04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ADF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034ADF8u) [[unlikely]] return; }
L_0034ADF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AE04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034AE04u) [[unlikely]] return; }
L_0034AE04:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034AE20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AE1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034AE1Cu) [[unlikely]] return; }
L_0034AE1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034AE20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034AE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034AECC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2512u);
    set32(c.r[2], c.r[2].w[0] + 2568u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034AEB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AE9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0034AE9Cu) [[unlikely]] return; }
L_0034AE9C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AEA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034AEA8u) [[unlikely]] return; }
L_0034AEA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AEB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034AEB4u) [[unlikely]] return; }
L_0034AEB4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0034AED0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AECCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034AECCu) [[unlikely]] return; }
L_0034AECC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034AED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034AEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AF0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034AF0Cu) [[unlikely]] return; }
L_0034AF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AF14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 376u, depth + 1u); else { c.pc = 0x00286FF0u; return; } if (c.pc != 0x0034AF14u) [[unlikely]] return; }
L_0034AF14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034AF30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AE40u | kUnwind; return; } goto L_0034AE40; }
L_0034AF40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AD80u | kUnwind; return; } goto L_0034AD80; }
L_0034AF50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034ACC0u | kUnwind; return; } goto L_0034ACC0; }
L_0034AF60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034A740u | kUnwind; return; } goto L_0034A740; }
L_0034AF70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AC00u | kUnwind; return; } goto L_0034AC00; }
L_0034AF80:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AFB0u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034AFB0u) [[unlikely]] return; }
L_0034AFB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0034AFD4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AFD0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 328u, depth + 1u); else { c.pc = 0x0034AFF0u; return; } if (c.pc != 0x0034AFD0u) [[unlikely]] return; }
L_0034AFD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0034AFD4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034AFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B004u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0034B004u) [[unlikely]] return; }
L_0034B004:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2752u);
    set32(c.r[2], c.r[2].w[0] + 2808u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1432u), 0u);
    st32((c.r[16].w[0] + 1436u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 69u);  goto L_0034B03C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0034B04C; } }
L_0034B03C:
    set32(c.r[2], 0u + 600u);
    st32((c.r[16].w[0] + 1424u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1428u), c.r[2].w[0]);  if (t) { goto L_0034B054; } }
L_0034B04C:
    st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1428u), 0u);
    c.budget -= 2;
L_0034B054:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034B070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B088u); set32(c.r[4], ld32((c.r[4].w[0] + 1424u)));  if (depth < kMaxDepth) unit_0068(c, 319u, depth + 1u); else { c.pc = 0x002C3790u; return; } if (c.pc != 0x0034B088u) [[unlikely]] return; }
L_0034B088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 85u, depth + 1u); else { c.pc = 0x0027CCC0u; return; } if (c.pc != 0x0034B090u) [[unlikely]] return; }
L_0034B090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034B0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B0B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x0034B0B4u) [[unlikely]] return; }
L_0034B0B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1424u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0034B15C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034B158; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1436u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034B158; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1432u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 1432u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1424u)));  goto L_0034B100; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0034B154; } }
L_0034B100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B108u);  if (depth < kMaxDepth) unit_0068(c, 321u, depth + 1u); else { c.pc = 0x002C37E0u; return; } if (c.pc != 0x0034B108u) [[unlikely]] return; }
L_0034B108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034B158; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1432u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1428u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034B158; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1424u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B13Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x0034B13Cu) [[unlikely]] return; }
L_0034B13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B144u); set32(c.r[4], 0u + 300u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0034B144u) [[unlikely]] return; }
L_0034B144:
    set32(c.r[3], c.r[2].w[0] + 600u);
    st32((c.r[16].w[0] + 1428u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1432u), 0u);  if (t) { goto L_0034B158; } }
L_0034B154:
    st32((c.r[16].w[0] + 1424u), c.r[3].w[0]);
    c.budget -= 1;
L_0034B158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0034B15C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034B170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B18Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x0034B18Cu) [[unlikely]] return; }
L_0034B18C:
    set32(c.r[3], 0u + 54u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 1436u), 0u);  goto L_0034B200; }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0034B1FC; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0034B1FC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0034B1FC; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 1424u)));  goto L_0034B1E8; }
    set32(c.r[3], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0034B1E4; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0034B1E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0034B204; } }
L_0034B1E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 1424u)));
    c.budget -= 1;
L_0034B1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B1F0u);  if (depth < kMaxDepth) unit_0068(c, 319u, depth + 1u); else { c.pc = 0x002C3790u; return; } if (c.pc != 0x0034B1F0u) [[unlikely]] return; }
L_0034B1F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1436u), c.r[3].w[0]);  if (t) { goto L_0034B200; } }
L_0034B1FC:
    st32((c.r[17].w[0] + 1436u), 0u);
    c.budget -= 1;
L_0034B200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0034B204:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034B220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034B2AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2752u);
    set32(c.r[2], c.r[2].w[0] + 2808u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034B294; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B27Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0034B27Cu) [[unlikely]] return; }
L_0034B27C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B288u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034B288u) [[unlikely]] return; }
L_0034B288:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B294u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034B294u) [[unlikely]] return; }
L_0034B294:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0034B2B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B2ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034B2ACu) [[unlikely]] return; }
L_0034B2AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034B2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034B2D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B220u | kUnwind; return; } goto L_0034B220; }
L_0034B2E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B170u | kUnwind; return; } goto L_0034B170; }
L_0034B2F0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B320u); set32(c.r[4], 0u + 1520u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034B320u) [[unlikely]] return; }
L_0034B320:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0034B344; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B340u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 351u, depth + 1u); else { c.pc = 0x0034B360u; return; } if (c.pc != 0x0034B340u) [[unlikely]] return; }
L_0034B340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0034B344:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034B360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0034B374u) [[unlikely]] return; }
L_0034B374:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[2], c.r[2].w[0] + 3432u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B39Cu); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0034B39Cu) [[unlikely]] return; }
L_0034B39C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034B3B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0034B3F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034B4AC; } }
L_0034B3F0:
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 148u)));  goto L_0034B408; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034B4AC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 1;
L_0034B408:
    set32(c.r[2], 0u + 10024u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 120u);  goto L_0034B478; }
    set32(c.r[2], 0u + 10017u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 116u);  goto L_0034B444; }
    set32(c.r[2], 0u + 10004u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034B440; } }
    set32(c.r[2], 0u + 10016u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034B440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B4A8; } }
L_0034B440:
    set32(c.r[4], 0u + 116u);
    c.budget -= 1;
L_0034B444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B44Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034B44Cu) [[unlikely]] return; }
L_0034B44C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0034B4B0; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B46Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 380u, depth + 1u); else { c.pc = 0x0034B860u; return; } if (c.pc != 0x0034B46Cu) [[unlikely]] return; }
L_0034B46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B4AC; } }
    set32(c.r[4], 0u + 120u);
    c.budget -= 1;
L_0034B478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B480u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034B480u) [[unlikely]] return; }
L_0034B480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B4AC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B4A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 411u, depth + 1u); else { c.pc = 0x0034BDB0u; return; } if (c.pc != 0x0034B4A0u) [[unlikely]] return; }
L_0034B4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B4AC; } }
L_0034B4A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034B4AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0034B4B0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034B4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B4ECu); set32(c.r[4], 0u + 660u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0034B4ECu) [[unlikely]] return; }
L_0034B4EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0034B518; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B500u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 8u, depth + 1u); else { c.pc = 0x002AC0E0u; return; } if (c.pc != 0x0034B500u) [[unlikely]] return; }
L_0034B500:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2992u);
    set32(c.r[2], c.r[2].w[0] + 3048u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
L_0034B518:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034B530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B544u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 249u, depth + 1u); else { c.pc = 0x002CEE10u; return; } if (c.pc != 0x0034B544u) [[unlikely]] return; }
L_0034B544:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3280u);
    set32(c.r[2], c.r[2].w[0] + 3336u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B570u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_008A(c, 366u, depth + 1u); else { c.pc = 0x0034B600u; return; } if (c.pc != 0x0034B570u) [[unlikely]] return; }
L_0034B570:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u + 10024u);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0034B5F0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B5EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B59Cu);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0034B59Cu) [[unlikely]] return; }
L_0034B59C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_0034B5D0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034B5EC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034B5EC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 584u), c.r[3].w[0]);  if (t) { goto L_0034B5EC; } }
L_0034B5D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034B5EC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034B5EC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 588u), c.r[3].w[0]);
    c.budget -= 3;
L_0034B5EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034B5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034B600:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 1424u);  if (t) { goto L_0034B640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_0034B644; } }
L_0034B640:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034B644:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[8], c.r[16].w[0] + 16u);
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[9], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B65Cu); set32(c.r[10], 0u - 1u);  if (depth < kMaxDepth) unit_005B(c, 291u, depth + 1u); else { c.pc = 0x0028ED50u; return; } if (c.pc != 0x0034B65Cu) [[unlikely]] return; }
L_0034B65C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.f[0] = ld32((c.r[16].w[0] + 16u));  goto L_0034B670; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034B840; } }
L_0034B670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[17].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B6B0u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x0034B6B0u) [[unlikely]] return; }
L_0034B6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B6B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0034B6B8u) [[unlikely]] return; }
L_0034B6B8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034B748; }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034B7F4; }
    set32(c.r[5], c.r[2].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B6E4u); set32(c.r[6], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0034B6E4u) [[unlikely]] return; }
L_0034B6E4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    c.f[13] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B6F8u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x0034B6F8u) [[unlikely]] return; }
L_0034B6F8:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B704u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0034B704u) [[unlikely]] return; }
L_0034B704:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[17].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[17].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    st32((c.r[17].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[17].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0034B7F0; } }
L_0034B748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B750u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0034B750u) [[unlikely]] return; }
L_0034B750:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B760u); set32(c.r[6], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_005C(c, 289u, depth + 1u); else { c.pc = 0x00292750u; return; } if (c.pc != 0x0034B760u) [[unlikely]] return; }
L_0034B760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B768u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0034B768u) [[unlikely]] return; }
L_0034B768:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 112u)));  goto L_0034B7B8; }
    c.f[1] = ld32((c.r[17].w[0] + 200u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034B7B4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_0034B7B4; } }
    set32(c.r[2], c.r[3].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 3;
L_0034B7B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_0034B7B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[17].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[17].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    st32((c.r[17].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[17].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 14;
L_0034B7F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034B7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B7FCu);  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x0034B7FCu) [[unlikely]] return; }
L_0034B7FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B804u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0034B804u) [[unlikely]] return; }
L_0034B804:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    st32((c.r[18].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B824u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 370u, depth + 1u); else { c.pc = 0x002934E0u; return; } if (c.pc != 0x0034B824u) [[unlikely]] return; }
L_0034B824:
    set32(c.r[7], ld32((c.r[18].w[0] + 108u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B83Cu); set32(c.r[4], c.r[4].w[0] - 16688u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0034B83Cu) [[unlikely]] return; }
L_0034B83C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0034B840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0034B860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B874u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 362u, depth + 1u); else { c.pc = 0x0034B530u; return; } if (c.pc != 0x0034B874u) [[unlikely]] return; }
L_0034B874:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3184u);
    set32(c.r[2], c.r[2].w[0] + 3240u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_0034B8C0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B8B8u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034B8B8u) [[unlikely]] return; }
L_0034B8B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  if (t) { goto L_0034B8C8; } }
L_0034B8C0:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 2;
L_0034B8C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034B8F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034B98C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3280u);
    set32(c.r[2], c.r[2].w[0] + 3336u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034B974; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28416u);
    set32(c.r[2], c.r[2].w[0] + 28472u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0034B974; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0034B968u) [[unlikely]] return; }
L_0034B968:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B974u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0034B974u) [[unlikely]] return; }
L_0034B974:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034B990; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B98Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0034B98Cu) [[unlikely]] return; }
L_0034B98C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034B990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034B9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B9D4u); set32(c.r[5], 0u + 26u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034B9D4u) [[unlikely]] return; }
L_0034B9D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0034BA08; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B9F0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0034B9F0u) [[unlikely]] return; }
L_0034B9F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BA04; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BA04u); set32(c.r[5], 0u + 11300u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0034BA04u) [[unlikely]] return; }
L_0034BA04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034BA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BA10u);  if (depth < kMaxDepth) unit_006B(c, 255u, depth + 1u); else { c.pc = 0x002CEEC0u; return; } if (c.pc != 0x0034BA10u) [[unlikely]] return; }
L_0034BA10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034BA20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BA40u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006B(c, 257u, depth + 1u); else { c.pc = 0x002CEEE0u; return; } if (c.pc != 0x0034BA40u) [[unlikely]] return; }
L_0034BA40:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0034BD8C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BA64u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0034BA64u) [[unlikely]] return; }
L_0034BA64:
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0034BD3C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0034BCD0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0034BC50; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0034BA9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  if (t) { goto L_0034BD58; } }
L_0034BA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BAA4u); set32(c.r[5], 0u + 66u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x0034BAA4u) [[unlikely]] return; }
L_0034BAA4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0034BB08; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0034BAE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BAC0u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0034BAC0u) [[unlikely]] return; }
L_0034BAC0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0034BAD4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BAE0; } }
L_0034BAD4:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0034BAE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034BD54; } }
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034BD54; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_0034BB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB10u); set32(c.r[5], 0u + 66u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0034BB10u) [[unlikely]] return; }
L_0034BB10:
    set32(c.r[16], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0034BB28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034BB8C; } }
L_0034BB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB30u); set32(c.r[5], 0u + 66u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0034BB30u) [[unlikely]] return; }
L_0034BB30:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0034BB50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034BB60; } }
L_0034BB50:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0034BB60:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0034BB8C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0034BB80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034BB84; } }
L_0034BB80:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0034BB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BB8C; } }
L_0034BB8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 11300u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB9Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0034BB9Cu) [[unlikely]] return; }
L_0034BB9C:
    set32(c.r[19], ld32((c.r[17].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0034BBB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BBB0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0034BBB0u) [[unlikely]] return; }
L_0034BBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[19].w[0] + 352u);  if (t) { goto L_0034BBC4; } }
L_0034BBB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BBC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0034BBC0u) [[unlikely]] return; }
L_0034BBC0:
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.budget -= 1;
L_0034BBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BBCCu); set32(c.r[4], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0034BBCCu) [[unlikely]] return; }
L_0034BBCC:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BBECu); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034BBECu) [[unlikely]] return; }
L_0034BBEC:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC08u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034BC08u) [[unlikely]] return; }
L_0034BC08:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], 0u + 2u);  goto L_0034BC2C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x0034BC28u) [[unlikely]] return; }
L_0034BC28:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_0034BC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC34u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x0034BC34u) [[unlikely]] return; }
L_0034BC34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC3Cu); set32(c.r[4], ld32((c.r[18].w[0] + 108u)));  if (depth < kMaxDepth) unit_0051(c, 290u, depth + 1u); else { c.pc = 0x00266540u; return; } if (c.pc != 0x0034BC3Cu) [[unlikely]] return; }
L_0034BC3C:
    st32((c.r[18].w[0] + 104u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0034BD54; } }
L_0034BC50:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0034BC80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC60u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0034BC60u) [[unlikely]] return; }
L_0034BC60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0034BC74; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BC80; } }
L_0034BC74:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0034BC80:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[18].w[0] + 104u));  goto L_0034BC94; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0034BD54; } }
L_0034BC94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034BD54; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 104u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0034BD54; } }
L_0034BCD0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0034BD00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BCE0u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0034BCE0u) [[unlikely]] return; }
L_0034BCE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0034BCF4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BD00; } }
L_0034BCF4:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0034BD00:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[18].w[0] + 104u));  goto L_0034BD14; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0034BD54; } }
L_0034BD14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034BD54; } }
    st32((c.r[18].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 4;
L_0034BD3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BD54u); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x0034BD54u) [[unlikely]] return; }
L_0034BD54:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0034BD58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0034BD7C; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0034BD7C:
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
L_0034BD8C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034BDB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BDC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 362u, depth + 1u); else { c.pc = 0x0034B530u; return; } if (c.pc != 0x0034BDC4u) [[unlikely]] return; }
L_0034BDC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 3088u);
    set32(c.r[2], c.r[2].w[0] + 3144u);
    c.budget -= 4;
L_0034BDD4:
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0034BDFC; }
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0034BDFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034BE10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BE28u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x0034BE28u) [[unlikely]] return; }
L_0034BE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BE30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 256u, depth + 1u); else { c.pc = 0x002CEED0u; return; } if (c.pc != 0x0034BE30u) [[unlikely]] return; }
L_0034BE30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034BE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BE64u); set32(c.r[5], 0u + 26u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034BE64u) [[unlikely]] return; }
L_0034BE64:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BE70u); set32(c.r[5], 0u + 11300u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0034BE70u) [[unlikely]] return; }
L_0034BE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BE78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 255u, depth + 1u); else { c.pc = 0x002CEEC0u; return; } if (c.pc != 0x0034BE78u) [[unlikely]] return; }
L_0034BE78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034BE90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  [[clang::musttail]] return unit_008B(c, 13u, depth); }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BECCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0034BECCu) [[unlikely]] return; }
L_0034BECC:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_008B(c, 8u, depth); } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  [[clang::musttail]] return unit_008B(c, 6u, depth); }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  [[clang::musttail]] return unit_008B(c, 4u, depth); }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[17].w[0] + 104u));  goto L_0034BF58; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_0034BF10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 116u)));  if (t) { [[clang::musttail]] return unit_008B(c, 10u, depth); } }
L_0034BF10:
    set32(c.r[5], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], 0u + 2u);  goto L_0034BF38; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BF2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x0034BF2Cu) [[unlikely]] return; }
L_0034BF2C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
L_0034BF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BF40u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x0034BF40u) [[unlikely]] return; }
L_0034BF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BF48u); set32(c.r[4], ld32((c.r[17].w[0] + 108u)));  if (depth < kMaxDepth) unit_0051(c, 290u, depth + 1u); else { c.pc = 0x00266540u; return; } if (c.pc != 0x0034BF48u) [[unlikely]] return; }
L_0034BF48:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
L_0034BF58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_008B(c, 9u, depth); } }
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0034BF88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034BFE0; } }
L_0034BF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BF90u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0034BF90u) [[unlikely]] return; }
L_0034BF90:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0034BFB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034BFC0; } }
L_0034BFB0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0034BFC0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0034BFE0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0034BFD8; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034BFD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BFE0; } }
L_0034BFE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 11300u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BFF0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0034BFF0u) [[unlikely]] return; }
L_0034BFF0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BFFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0034BFFCu) [[unlikely]] return; }
L_0034BFFC:
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.budget -= 1;
    [[clang::musttail]] return unit_008B(c, 1u, depth);
}

}
