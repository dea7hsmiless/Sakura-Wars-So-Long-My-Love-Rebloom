#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007B[4096] = {
    1, 0, 2, 3, 0, 0, 0, 0, 4, 0, 5, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30,
    0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0,
    127, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143,
    0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 301,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303,
    0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0,
    325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0,
    0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0,
    366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0,
    376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0,
    0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0,
    0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0030C000;
    case 2u: goto L_0030C008;
    case 3u: goto L_0030C00C;
    case 4u: goto L_0030C020;
    case 5u: goto L_0030C028;
    case 6u: goto L_0030C02C;
    case 7u: goto L_0030C040;
    case 8u: goto L_0030C074;
    case 9u: goto L_0030C090;
    case 10u: goto L_0030C0A4;
    case 11u: goto L_0030C0AC;
    case 12u: goto L_0030C0BC;
    case 13u: goto L_0030C0D4;
    case 14u: goto L_0030C0F0;
    case 15u: goto L_0030C104;
    case 16u: goto L_0030C11C;
    case 17u: goto L_0030C144;
    case 18u: goto L_0030C15C;
    case 19u: goto L_0030C184;
    case 20u: goto L_0030C1A0;
    case 21u: goto L_0030C1D0;
    case 22u: goto L_0030C1F0;
    case 23u: goto L_0030C20C;
    case 24u: goto L_0030C220;
    case 25u: goto L_0030C234;
    case 26u: goto L_0030C280;
    case 27u: goto L_0030C2C4;
    case 28u: goto L_0030C2D4;
    case 29u: goto L_0030C2E8;
    case 30u: goto L_0030C2FC;
    case 31u: goto L_0030C30C;
    case 32u: goto L_0030C338;
    case 33u: goto L_0030C388;
    case 34u: goto L_0030C3A0;
    case 35u: goto L_0030C3CC;
    case 36u: goto L_0030C404;
    case 37u: goto L_0030C414;
    case 38u: goto L_0030C428;
    case 39u: goto L_0030C438;
    case 40u: goto L_0030C444;
    case 41u: goto L_0030C490;
    case 42u: goto L_0030C49C;
    case 43u: goto L_0030C4B0;
    case 44u: goto L_0030C4DC;
    case 45u: goto L_0030C504;
    case 46u: goto L_0030C520;
    case 47u: goto L_0030C560;
    case 48u: goto L_0030C56C;
    case 49u: goto L_0030C584;
    case 50u: goto L_0030C5A0;
    case 51u: goto L_0030C5B0;
    case 52u: goto L_0030C5E0;
    case 53u: goto L_0030C600;
    case 54u: goto L_0030C620;
    case 55u: goto L_0030C634;
    case 56u: goto L_0030C654;
    case 57u: goto L_0030C668;
    case 58u: goto L_0030C690;
    case 59u: goto L_0030C6E0;
    case 60u: goto L_0030C730;
    case 61u: goto L_0030C740;
    case 62u: goto L_0030C750;
    case 63u: goto L_0030C7A0;
    case 64u: goto L_0030C7B0;
    case 65u: goto L_0030C7C0;
    case 66u: goto L_0030C7E0;
    case 67u: goto L_0030C820;
    case 68u: goto L_0030C840;
    case 69u: goto L_0030C870;
    case 70u: goto L_0030C884;
    case 71u: goto L_0030C8C4;
    case 72u: goto L_0030C8E0;
    case 73u: goto L_0030C904;
    case 74u: goto L_0030C90C;
    case 75u: goto L_0030C920;
    case 76u: goto L_0030C998;
    case 77u: goto L_0030C9A4;
    case 78u: goto L_0030C9BC;
    case 79u: goto L_0030C9E0;
    case 80u: goto L_0030CA3C;
    case 81u: goto L_0030CA48;
    case 82u: goto L_0030CA54;
    case 83u: goto L_0030CA6C;
    case 84u: goto L_0030CA90;
    case 85u: goto L_0030CAA0;
    case 86u: goto L_0030CAB0;
    case 87u: goto L_0030CAE0;
    case 88u: goto L_0030CB00;
    case 89u: goto L_0030CB20;
    case 90u: goto L_0030CB34;
    case 91u: goto L_0030CB54;
    case 92u: goto L_0030CBA4;
    case 93u: goto L_0030CBB4;
    case 94u: goto L_0030CBFC;
    case 95u: goto L_0030CC30;
    case 96u: goto L_0030CD0C;
    case 97u: goto L_0030CD38;
    case 98u: goto L_0030CDA8;
    case 99u: goto L_0030CDC4;
    case 100u: goto L_0030CE0C;
    case 101u: goto L_0030CE1C;
    case 102u: goto L_0030CE2C;
    case 103u: goto L_0030CE34;
    case 104u: goto L_0030CE54;
    case 105u: goto L_0030CE58;
    case 106u: goto L_0030CE68;
    case 107u: goto L_0030CE88;
    case 108u: goto L_0030CEB0;
    case 109u: goto L_0030CEC4;
    case 110u: goto L_0030CF28;
    case 111u: goto L_0030CF54;
    case 112u: goto L_0030CFC4;
    case 113u: goto L_0030D008;
    case 114u: goto L_0030D01C;
    case 115u: goto L_0030D034;
    case 116u: goto L_0030D048;
    case 117u: goto L_0030D060;
    case 118u: goto L_0030D074;
    case 119u: goto L_0030D090;
    case 120u: goto L_0030D0A8;
    case 121u: goto L_0030D0EC;
    case 122u: goto L_0030D134;
    case 123u: goto L_0030D148;
    case 124u: goto L_0030D150;
    case 125u: goto L_0030D164;
    case 126u: goto L_0030D16C;
    case 127u: goto L_0030D180;
    case 128u: goto L_0030D188;
    case 129u: goto L_0030D19C;
    case 130u: goto L_0030D1A4;
    case 131u: goto L_0030D1B8;
    case 132u: goto L_0030D1C0;
    case 133u: goto L_0030D1D4;
    case 134u: goto L_0030D1DC;
    case 135u: goto L_0030D200;
    case 136u: goto L_0030D218;
    case 137u: goto L_0030D238;
    case 138u: goto L_0030D280;
    case 139u: goto L_0030D294;
    case 140u: goto L_0030D2A4;
    case 141u: goto L_0030D2B8;
    case 142u: goto L_0030D2E8;
    case 143u: goto L_0030D2FC;
    case 144u: goto L_0030D30C;
    case 145u: goto L_0030D320;
    case 146u: goto L_0030D350;
    case 147u: goto L_0030D364;
    case 148u: goto L_0030D374;
    case 149u: goto L_0030D388;
    case 150u: goto L_0030D3B8;
    case 151u: goto L_0030D3CC;
    case 152u: goto L_0030D3E0;
    case 153u: goto L_0030D404;
    case 154u: goto L_0030D450;
    case 155u: goto L_0030D4C0;
    case 156u: goto L_0030D53C;
    case 157u: goto L_0030D5AC;
    case 158u: goto L_0030D5E8;
    case 159u: goto L_0030D650;
    case 160u: goto L_0030D65C;
    case 161u: goto L_0030D68C;
    case 162u: goto L_0030D6A0;
    case 163u: goto L_0030D6AC;
    case 164u: goto L_0030D6D0;
    case 165u: goto L_0030D6E0;
    case 166u: goto L_0030D6EC;
    case 167u: goto L_0030D710;
    case 168u: goto L_0030D730;
    case 169u: goto L_0030D748;
    case 170u: goto L_0030D7F0;
    case 171u: goto L_0030D800;
    case 172u: goto L_0030D814;
    case 173u: goto L_0030D840;
    case 174u: goto L_0030D8CC;
    case 175u: goto L_0030D8E0;
    case 176u: goto L_0030D8F4;
    case 177u: goto L_0030D950;
    case 178u: goto L_0030D998;
    case 179u: goto L_0030D9AC;
    case 180u: goto L_0030D9C0;
    case 181u: goto L_0030DA0C;
    case 182u: goto L_0030DA34;
    case 183u: goto L_0030DA5C;
    case 184u: goto L_0030DA84;
    case 185u: goto L_0030DA9C;
    case 186u: goto L_0030DABC;
    case 187u: goto L_0030DB14;
    case 188u: goto L_0030DB20;
    case 189u: goto L_0030DB34;
    case 190u: goto L_0030DB48;
    case 191u: goto L_0030DBA8;
    case 192u: goto L_0030DC04;
    case 193u: goto L_0030DC30;
    case 194u: goto L_0030DC44;
    case 195u: goto L_0030DC80;
    case 196u: goto L_0030DC90;
    case 197u: goto L_0030DCA4;
    case 198u: goto L_0030DCB0;
    case 199u: goto L_0030DD04;
    case 200u: goto L_0030DD18;
    case 201u: goto L_0030DD2C;
    case 202u: goto L_0030DD40;
    case 203u: goto L_0030DD54;
    case 204u: goto L_0030DD68;
    case 205u: goto L_0030DE0C;
    case 206u: goto L_0030DE20;
    case 207u: goto L_0030DE34;
    case 208u: goto L_0030DE48;
    case 209u: goto L_0030DE5C;
    case 210u: goto L_0030DE70;
    case 211u: goto L_0030DE84;
    case 212u: goto L_0030DE98;
    case 213u: goto L_0030DEAC;
    case 214u: goto L_0030DEC0;
    case 215u: goto L_0030DED4;
    case 216u: goto L_0030DEE8;
    case 217u: goto L_0030DF00;
    case 218u: goto L_0030DF78;
    case 219u: goto L_0030DF84;
    case 220u: goto L_0030DF9C;
    case 221u: goto L_0030DFC0;
    case 222u: goto L_0030E038;
    case 223u: goto L_0030E044;
    case 224u: goto L_0030E05C;
    case 225u: goto L_0030E080;
    case 226u: goto L_0030E0DC;
    case 227u: goto L_0030E0E8;
    case 228u: goto L_0030E0F4;
    case 229u: goto L_0030E10C;
    case 230u: goto L_0030E130;
    case 231u: goto L_0030E140;
    case 232u: goto L_0030E150;
    case 233u: goto L_0030E160;
    case 234u: goto L_0030E170;
    case 235u: goto L_0030E1A0;
    case 236u: goto L_0030E1C0;
    case 237u: goto L_0030E1E0;
    case 238u: goto L_0030E1F4;
    case 239u: goto L_0030E230;
    case 240u: goto L_0030E250;
    case 241u: goto L_0030E28C;
    case 242u: goto L_0030E2B8;
    case 243u: goto L_0030E2C4;
    case 244u: goto L_0030E2D0;
    case 245u: goto L_0030E2E8;
    case 246u: goto L_0030E300;
    case 247u: goto L_0030E38C;
    case 248u: goto L_0030E3FC;
    case 249u: goto L_0030E414;
    case 250u: goto L_0030E430;
    case 251u: goto L_0030E440;
    case 252u: goto L_0030E460;
    case 253u: goto L_0030E4E0;
    case 254u: goto L_0030E4F4;
    case 255u: goto L_0030E520;
    case 256u: goto L_0030E580;
    case 257u: goto L_0030E610;
    case 258u: goto L_0030E688;
    case 259u: goto L_0030E694;
    case 260u: goto L_0030E6AC;
    case 261u: goto L_0030E6D0;
    case 262u: goto L_0030E6E0;
    case 263u: goto L_0030E6F0;
    case 264u: goto L_0030E700;
    case 265u: goto L_0030E730;
    case 266u: goto L_0030E750;
    case 267u: goto L_0030E770;
    case 268u: goto L_0030E784;
    case 269u: goto L_0030E7A4;
    case 270u: goto L_0030E7B8;
    case 271u: goto L_0030E7E0;
    case 272u: goto L_0030E820;
    case 273u: goto L_0030E840;
    case 274u: goto L_0030E870;
    case 275u: goto L_0030E8C0;
    case 276u: goto L_0030E910;
    case 277u: goto L_0030E920;
    case 278u: goto L_0030E930;
    case 279u: goto L_0030E980;
    case 280u: goto L_0030E990;
    case 281u: goto L_0030E9A0;
    case 282u: goto L_0030E9C0;
    case 283u: goto L_0030E9D8;
    case 284u: goto L_0030EA44;
    case 285u: goto L_0030EA84;
    case 286u: goto L_0030EAD0;
    case 287u: goto L_0030EB28;
    case 288u: goto L_0030EB3C;
    case 289u: goto L_0030EB80;
    case 290u: goto L_0030EBD0;
    case 291u: goto L_0030ECD0;
    case 292u: goto L_0030ED18;
    case 293u: goto L_0030ED88;
    case 294u: goto L_0030EDA8;
    case 295u: goto L_0030EDC8;
    case 296u: goto L_0030EE30;
    case 297u: goto L_0030EE3C;
    case 298u: goto L_0030EE60;
    case 299u: goto L_0030EED8;
    case 300u: goto L_0030EEE4;
    case 301u: goto L_0030EEFC;
    case 302u: goto L_0030EF20;
    case 303u: goto L_0030EF7C;
    case 304u: goto L_0030EF88;
    case 305u: goto L_0030EF94;
    case 306u: goto L_0030EFAC;
    case 307u: goto L_0030EFD0;
    case 308u: goto L_0030EFE0;
    case 309u: goto L_0030EFF0;
    case 310u: goto L_0030F000;
    case 311u: goto L_0030F030;
    case 312u: goto L_0030F050;
    case 313u: goto L_0030F070;
    case 314u: goto L_0030F084;
    case 315u: goto L_0030F0C0;
    case 316u: goto L_0030F110;
    case 317u: goto L_0030F130;
    case 318u: goto L_0030F140;
    case 319u: goto L_0030F160;
    case 320u: goto L_0030F190;
    case 321u: goto L_0030F1C4;
    case 322u: goto L_0030F1D4;
    case 323u: goto L_0030F1E4;
    case 324u: goto L_0030F1F0;
    case 325u: goto L_0030F200;
    case 326u: goto L_0030F214;
    case 327u: goto L_0030F250;
    case 328u: goto L_0030F274;
    case 329u: goto L_0030F2A4;
    case 330u: goto L_0030F2B4;
    case 331u: goto L_0030F2D0;
    case 332u: goto L_0030F364;
    case 333u: goto L_0030F374;
    case 334u: goto L_0030F384;
    case 335u: goto L_0030F3CC;
    case 336u: goto L_0030F410;
    case 337u: goto L_0030F420;
    case 338u: goto L_0030F440;
    case 339u: goto L_0030F450;
    case 340u: goto L_0030F468;
    case 341u: goto L_0030F514;
    case 342u: goto L_0030F554;
    case 343u: goto L_0030F5A0;
    case 344u: goto L_0030F6A0;
    case 345u: goto L_0030F6E8;
    case 346u: goto L_0030F758;
    case 347u: goto L_0030F778;
    case 348u: goto L_0030F798;
    case 349u: goto L_0030F800;
    case 350u: goto L_0030F80C;
    case 351u: goto L_0030F830;
    case 352u: goto L_0030F8A8;
    case 353u: goto L_0030F8B4;
    case 354u: goto L_0030F8CC;
    case 355u: goto L_0030F8F0;
    case 356u: goto L_0030F968;
    case 357u: goto L_0030F974;
    case 358u: goto L_0030F98C;
    case 359u: goto L_0030F9B0;
    case 360u: goto L_0030FA0C;
    case 361u: goto L_0030FA18;
    case 362u: goto L_0030FA24;
    case 363u: goto L_0030FA3C;
    case 364u: goto L_0030FA60;
    case 365u: goto L_0030FA70;
    case 366u: goto L_0030FA80;
    case 367u: goto L_0030FA90;
    case 368u: goto L_0030FAC0;
    case 369u: goto L_0030FAE0;
    case 370u: goto L_0030FB00;
    case 371u: goto L_0030FB14;
    case 372u: goto L_0030FB40;
    case 373u: goto L_0030FB58;
    case 374u: goto L_0030FB60;
    case 375u: goto L_0030FB68;
    case 376u: goto L_0030FB80;
    case 377u: goto L_0030FB9C;
    case 378u: goto L_0030FBB0;
    case 379u: goto L_0030FBE0;
    case 380u: goto L_0030FBF4;
    case 381u: goto L_0030FC4C;
    case 382u: goto L_0030FC6C;
    case 383u: goto L_0030FC78;
    case 384u: goto L_0030FC98;
    case 385u: goto L_0030FCA8;
    case 386u: goto L_0030FCC8;
    case 387u: goto L_0030FCDC;
    case 388u: goto L_0030FCE4;
    case 389u: goto L_0030FD00;
    case 390u: goto L_0030FD1C;
    case 391u: goto L_0030FD50;
    case 392u: goto L_0030FD70;
    case 393u: goto L_0030FDB0;
    case 394u: goto L_0030FDBC;
    case 395u: goto L_0030FDC8;
    case 396u: goto L_0030FDE0;
    case 397u: goto L_0030FE00;
    case 398u: goto L_0030FE54;
    case 399u: goto L_0030FE68;
    case 400u: goto L_0030FE84;
    case 401u: goto L_0030FE90;
    case 402u: goto L_0030FE9C;
    case 403u: goto L_0030FEAC;
    case 404u: goto L_0030FEC0;
    case 405u: goto L_0030FF08;
    case 406u: goto L_0030FF68;
    case 407u: goto L_0030FF88;
    case 408u: goto L_0030FFA8;
    default: bad_entry(c, 0x0030C000u); return;
    }
L_0030C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C008u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 428u, depth + 1u); else { c.pc = 0x00283F50u; return; } if (c.pc != 0x0030C008u) [[unlikely]] return; }
L_0030C008:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0030C00C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0030C028; } }
L_0030C020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C028u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x0030C028u) [[unlikely]] return; }
L_0030C028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0030C02C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030C040:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 288u)));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030C074; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 296u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C074u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030C074u) [[unlikely]] return; }
L_0030C074:
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0030C188; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C090u); set32(c.r[6], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0030C090u) [[unlikely]] return; }
L_0030C090:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C0A4u); st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x0030C0A4u) [[unlikely]] return; }
L_0030C0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C0ACu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0030C0ACu) [[unlikely]] return; }
L_0030C0AC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[16].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C0BCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0030C0BCu) [[unlikely]] return; }
L_0030C0BC:
    set32(c.r[6], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[7], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C0D4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x0030C0D4u) [[unlikely]] return; }
L_0030C0D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_0030C0F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C0F0u); set32(c.r[5], ld32((c.r[16].w[0] + 272u)));  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030C0F0u) [[unlikely]] return; }
L_0030C0F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_0030C0F4:
    set32(c.r[5], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C104u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030C104u) [[unlikely]] return; }
L_0030C104:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 284u)));  goto L_0030C12C; }
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C11Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0030C11Cu) [[unlikely]] return; }
L_0030C11C:
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[17].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 4;
L_0030C12C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 292u)));  goto L_0030C148; }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C144u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030C144u) [[unlikely]] return; }
L_0030C144:
    set32(c.r[5], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 1;
L_0030C148:
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  goto L_0030C160; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C15Cu); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x0030C15Cu) [[unlikely]] return; }
L_0030C15C:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_0030C160:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C184u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0030C184u) [[unlikely]] return; }
L_0030C184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0030C188:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0030C1A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 76u)));
    c.f[22] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C1D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0030C1D0u) [[unlikely]] return; }
L_0030C1D0:
    c.f[0] = ld32((c.r[16].w[0] + 720u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], ld32((c.r[17].w[0] + 76u)));  goto L_0030C1E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0030C1F8; } }
L_0030C1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C1F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0030C1F0u) [[unlikely]] return; }
L_0030C1F0:
    c.f[22] = ld32((c.r[16].w[0] + 720u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 2;
L_0030C1F8:
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C20Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0030C20Cu) [[unlikely]] return; }
L_0030C20C:
    c.f[1] = ld32((c.r[17].w[0] + 232u));
    c.f[12] = c.f[20];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C220u); c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0030C220u) [[unlikely]] return; }
L_0030C220:
    c.f[1] = ld32((c.r[17].w[0] + 228u));
    c.f[12] = c.f[20];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C234u); c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0030C234u) [[unlikely]] return; }
L_0030C234:
    c.f[1] = ld32((c.r[17].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[22]);
    st32((c.r[17].w[0] + 224u), c.f[0]);
    st32((c.r[17].w[0] + 228u), c.f[20]);
    st32((c.r[17].w[0] + 232u), c.f[21]);
    st32((c.r[17].w[0] + 236u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030C280:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 300u)));  goto L_0030C3D4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 320u)));  goto L_0030C2B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0030C4A0; } }
L_0030C2B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C49C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C2C4u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0030C2C4u) [[unlikely]] return; }
L_0030C2C4:
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[6], c.r[16].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C2D4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0030C2D4u) [[unlikely]] return; }
L_0030C2D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[6], ld32((c.r[2].w[0] + 244u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C2E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0030C2E8u) [[unlikely]] return; }
L_0030C2E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    c.f[12] = ld32((c.r[16].w[0] + 164u));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C2FCu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x0030C2FCu) [[unlikely]] return; }
L_0030C2FC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C30Cu); set32(c.r[6], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0030C30Cu) [[unlikely]] return; }
L_0030C30C:
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C338u); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x0030C338u) [[unlikely]] return; }
L_0030C338:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 192u);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    st32((c.r[16].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    st32((c.r[16].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    st32((c.r[16].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C388u); st32((c.r[16].w[0] + 220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0030C388u) [[unlikely]] return; }
L_0030C388:
    set32(c.r[6], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[7], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C3A0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x0030C3A0u) [[unlikely]] return; }
L_0030C3A0:
    c.f[0] = ld32((c.r[16].w[0] + 240u));
    set32(c.r[4], c.r[16].w[0] + 240u);
    set32(c.r[5], c.r[16].w[0] + 96u);
    st32((c.r[16].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 244u));
    st32((c.r[16].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 248u));
    st32((c.r[16].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 252u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C3CCu); st32((c.r[16].w[0] + 268u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x0030C3CCu) [[unlikely]] return; }
L_0030C3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C49C; } }
L_0030C3D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030C49C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 312u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 72u)));  goto L_0030C430; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C404u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0030C404u) [[unlikely]] return; }
L_0030C404:
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[6], c.r[16].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C414u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0030C414u) [[unlikely]] return; }
L_0030C414:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[6], ld32((c.r[2].w[0] + 244u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C428u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0030C428u) [[unlikely]] return; }
L_0030C428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 240u));  if (t) { goto L_0030C448; } }
L_0030C430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C438u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0030C438u) [[unlikely]] return; }
L_0030C438:
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C444u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0030C444u) [[unlikely]] return; }
L_0030C444:
    c.f[0] = ld32((c.r[16].w[0] + 240u));
    c.budget -= 1;
L_0030C448:
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[16].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 244u));
    st32((c.r[16].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 248u));
    st32((c.r[16].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 252u));
    st32((c.r[16].w[0] + 268u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 312u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C490u); set32(c.r[6], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x0030C490u) [[unlikely]] return; }
L_0030C490:
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C49Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x0030C49Cu) [[unlikely]] return; }
L_0030C49C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0030C4A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0030C4B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C4DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0030C4DCu) [[unlikely]] return; }
L_0030C4DC:
    c.f[0] = ld32((c.r[16].w[0] + 736u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 740u));
    st32((c.r[17].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 744u));
    st32((c.r[17].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 748u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C504u); st32((c.r[17].w[0] + 252u), c.f[0]);  if (depth < kMaxDepth) unit_007B(c, 7u, depth + 1u); else { c.pc = 0x0030C040u; return; } if (c.pc != 0x0030C504u) [[unlikely]] return; }
L_0030C504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030C520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030C584; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 25792u);
    set32(c.r[2], c.r[2].w[0] - 25736u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C560u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030C560u) [[unlikely]] return; }
L_0030C560:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C56Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030C56Cu) [[unlikely]] return; }
L_0030C56C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0030C588; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C584u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030C584u) [[unlikely]] return; }
L_0030C584:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030C588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030C5A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C520u | kUnwind; return; } goto L_0030C520; }
L_0030C5B0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C5E0u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030C5E0u) [[unlikely]] return; }
L_0030C5E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030C604; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C600u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 54u, depth + 1u); else { c.pc = 0x0030C620u; return; } if (c.pc != 0x0030C600u) [[unlikely]] return; }
L_0030C600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030C604:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030C620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C634u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0030C634u) [[unlikely]] return; }
L_0030C634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 25616u);
    set32(c.r[2], c.r[2].w[0] - 25560u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C654u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0030C654u) [[unlikely]] return; }
L_0030C654:
    st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C668u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0030C668u) [[unlikely]] return; }
L_0030C668:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1428u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030C690:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[4].w[0] + 80u));  goto L_0030C6CC; }
    c.f[2] = 0u;
    c.budget -= 1;
L_0030C6CC:
    c.f[1] = ld32((c.r[17].w[0] + 1428u));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C6E0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0030C6E0u) [[unlikely]] return; }
L_0030C6E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 1424u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 1424u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  goto L_0030C728; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_0030C75C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C758; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 1;
L_0030C728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C730u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x0030C730u) [[unlikely]] return; }
L_0030C730:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C740u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0030C740u) [[unlikely]] return; }
L_0030C740:
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C750u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 166u, depth + 1u); else { c.pc = 0x001590F0u; return; } if (c.pc != 0x0030C750u) [[unlikely]] return; }
L_0030C750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0030C7C4; } }
L_0030C758:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0030C75C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0030C780; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0030C780:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030C7C0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C7A0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x0030C7A0u) [[unlikely]] return; }
L_0030C7A0:
    set32(c.r[6], ld32((c.r[17].w[0] + 1424u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C7B0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0030C7B0u) [[unlikely]] return; }
L_0030C7B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C7C0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 166u, depth + 1u); else { c.pc = 0x001590F0u; return; } if (c.pc != 0x0030C7C0u) [[unlikely]] return; }
L_0030C7C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0030C7C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0030C7E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0030C818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030C84C; } }
L_0030C818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C820u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030C820u) [[unlikely]] return; }
L_0030C820:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030C850; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C840u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 69u, depth + 1u); else { c.pc = 0x0030C870u; return; } if (c.pc != 0x0030C840u) [[unlikely]] return; }
L_0030C840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C84C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030C84C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030C850:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030C870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C884u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 284u, depth + 1u); else { c.pc = 0x00276A70u; return; } if (c.pc != 0x0030C884u) [[unlikely]] return; }
L_0030C884:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 25712u);
    set32(c.r[2], c.r[2].w[0] - 25656u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C8C4u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030C8C4u) [[unlikely]] return; }
L_0030C8C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030C8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C904u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030C904u) [[unlikely]] return; }
L_0030C904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C90Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 295u, depth + 1u); else { c.pc = 0x00276BC0u; return; } if (c.pc != 0x0030C90Cu) [[unlikely]] return; }
L_0030C90C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030C920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030C9BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 25712u);
    set32(c.r[2], c.r[2].w[0] - 25656u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030C9A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22928u);
    set32(c.r[2], c.r[2].w[0] + 22984u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030C9A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C998u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030C998u) [[unlikely]] return; }
L_0030C998:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C9A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030C9A4u) [[unlikely]] return; }
L_0030C9A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0030C9C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C9BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030C9BCu) [[unlikely]] return; }
L_0030C9BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030C9C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030C9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030CA6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 25616u);
    set32(c.r[2], c.r[2].w[0] - 25560u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030CA54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CA3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030CA3Cu) [[unlikely]] return; }
L_0030CA3C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CA48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030CA48u) [[unlikely]] return; }
L_0030CA48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CA54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030CA54u) [[unlikely]] return; }
L_0030CA54:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0030CA70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CA6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030CA6Cu) [[unlikely]] return; }
L_0030CA6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030CA70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030CA90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C9E0u | kUnwind; return; } goto L_0030C9E0; }
L_0030CAA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C920u | kUnwind; return; } goto L_0030C920; }
L_0030CAB0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CAE0u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030CAE0u) [[unlikely]] return; }
L_0030CAE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030CB04; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CB00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 89u, depth + 1u); else { c.pc = 0x0030CB20u; return; } if (c.pc != 0x0030CB00u) [[unlikely]] return; }
L_0030CB00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030CB04:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030CB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CB34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0030CB34u) [[unlikely]] return; }
L_0030CB34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 25184u);
    set32(c.r[2], c.r[2].w[0] - 25128u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CB54u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 95u, depth + 1u); else { c.pc = 0x0028D070u; return; } if (c.pc != 0x0030CB54u) [[unlikely]] return; }
L_0030CB54:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1428u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  goto L_0030CC00; }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u + 1010u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].d[0] = c.r[4].d[0] + 0ull;  goto L_0030CBAC; }
    set32(c.r[2], 0u + 1009u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].d[0] = c.r[4].d[0] + 0ull;  goto L_0030CB9C; }
    set32(c.r[2], 0u + 1007u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030CBB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030CBB4; } }
L_0030CB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CBA4u); set32(c.r[6], 0u + 16384u);  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0030CBA4u) [[unlikely]] return; }
L_0030CBA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030CBB4; } }
L_0030CBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CBB4u); set32(c.r[6], 0u - 16384u);  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0030CBB4u) [[unlikely]] return; }
L_0030CBB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.f[1] = ld32((c.r[2].w[0] + 20336u));
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20340u));
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 20344u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 20348u));
    st32((c.r[29].w[0] + 40u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CBFCu); st32((c.r[29].w[0] + 44u), c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0030CBFCu) [[unlikely]] return; }
L_0030CBFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_0030CC00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030CC30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1424u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0030CCE4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0030CCE8; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_0030CCCC; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030CCC8; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030CCC8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030CCC8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030CCC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030CCDC; } }
L_0030CCC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0030CCCC:
    c.r[2].d[0] = c.r[2].d[0] | 33464ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_0030CCEC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030CCDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_0030CCEC; } }
L_0030CCE4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030CCE8:
    st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);
    c.budget -= 1;
L_0030CCEC:
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 21u);  goto L_0030CDC8; }
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));  goto L_0030CD10; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CD0Cu); set32(c.r[5], 0u + 11100u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030CD0Cu) [[unlikely]] return; }
L_0030CD0C:
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 1;
L_0030CD10:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0030CDC4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0030CD30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030CD98; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0030CD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CD38u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030CD38u) [[unlikely]] return; }
L_0030CD38:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030CD5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030CD6C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_0030CD5C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030CD6C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0030CD98; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0030CD8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030CD8C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_0030CD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030CD98; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030CD98:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 11100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CDA8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030CDA8u) [[unlikely]] return; }
L_0030CDA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030CDC4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CDC4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030CDC4u) [[unlikely]] return; }
L_0030CDC4:
    set32(c.r[2], 0u + 21u);
    c.budget -= 1;
L_0030CDC8:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 128u);  goto L_0030CE60; }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0030CE00; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { st32((c.r[19].w[0] + 1428u), 0u);  goto L_0030CE90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030CE90; } }
    st32((c.r[19].w[0] + 1428u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030CE90; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0030CE00:
    set32(c.r[5], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE0Cu); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x0030CE0Cu) [[unlikely]] return; }
L_0030CE0C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE1Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x0030CE1Cu) [[unlikely]] return; }
L_0030CE1C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE2Cu); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x0030CE2Cu) [[unlikely]] return; }
L_0030CE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE34u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030CE34u) [[unlikely]] return; }
L_0030CE34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030CE98; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 119u, depth + 1u); else { c.pc = 0x0030D090u; return; } if (c.pc != 0x0030CE54u) [[unlikely]] return; }
L_0030CE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030CE94; } }
    goto L_0030CE5C;
L_0030CE58:
    c.budget -= 1;
L_0030CE5C:
    set32(c.r[4], 0u + 128u);
    c.budget -= 1;
L_0030CE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE68u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030CE68u) [[unlikely]] return; }
L_0030CE68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030CE94; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 193u, depth + 1u); else { c.pc = 0x0030DC30u; return; } if (c.pc != 0x0030CE88u) [[unlikely]] return; }
L_0030CE88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030CE94; } }
L_0030CE90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030CE94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030CE98:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030CEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CEC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x0030CEC4u) [[unlikely]] return; }
L_0030CEC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0030D080; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[3].w[0] + 112u);
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0030D07C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1180u)));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030D07C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 2912u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030D07C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1428u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0030CF20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D07C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030CF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CF28u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0030CF28u) [[unlikely]] return; }
L_0030CF28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 148u)));  goto L_0030CFCC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0030CF4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030CFB4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030CF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CF54u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030CF54u) [[unlikely]] return; }
L_0030CF54:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030CF78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030CF88; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_0030CF78:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030CF88:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0030CFB4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0030CFA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030CFA8; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_0030CFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030CFB4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030CFB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFC4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030CFC4u) [[unlikely]] return; }
L_0030CFC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 2;
L_0030CFCC:
    set32(c.r[3], 0u + 1010u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1320u)));  goto L_0030D054; }
    set32(c.r[3], 0u + 1009u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1320u)));  goto L_0030D028; }
    set32(c.r[3], 0u + 1007u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1320u)));  goto L_0030CFFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0030D078; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 1;
L_0030CFFC:
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D008u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030D008u) [[unlikely]] return; }
L_0030D008:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 40u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D01Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030D01Cu) [[unlikely]] return; }
L_0030D01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D074; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 1;
L_0030D028:
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D034u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030D034u) [[unlikely]] return; }
L_0030D034:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 40u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D048u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030D048u) [[unlikely]] return; }
L_0030D048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D074; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 1;
L_0030D054:
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D060u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030D060u) [[unlikely]] return; }
L_0030D060:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 40u);
    set32(c.r[6], 0u + 30u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D074u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030D074u) [[unlikely]] return; }
L_0030D074:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0030D078:
    st32((c.r[16].w[0] + 1428u), c.r[3].w[0]);
    c.budget -= 1;
L_0030D07C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0030D080:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030D090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x0030D0A8u) [[unlikely]] return; }
L_0030D0A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 25280u);
    set32(c.r[2], c.r[2].w[0] - 25224u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 7u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D0ECu) [[unlikely]] return; }
L_0030D0EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[4].w[0] + 20352u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 20356u));
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[4].w[0] + 20360u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 20364u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[28].w[0] - 32120u));
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 60u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D134u); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0030D134u) [[unlikely]] return; }
L_0030D134:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D148u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D148u) [[unlikely]] return; }
L_0030D148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D150u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0030D150u) [[unlikely]] return; }
L_0030D150:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D164u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D164u) [[unlikely]] return; }
L_0030D164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D16Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0030D16Cu) [[unlikely]] return; }
L_0030D16C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D180u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D180u) [[unlikely]] return; }
L_0030D180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D188u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0030D188u) [[unlikely]] return; }
L_0030D188:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D19Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D19Cu) [[unlikely]] return; }
L_0030D19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D1A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0030D1A4u) [[unlikely]] return; }
L_0030D1A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D1B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D1B8u) [[unlikely]] return; }
L_0030D1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D1C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0030D1C0u) [[unlikely]] return; }
L_0030D1C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D1D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D1D4u) [[unlikely]] return; }
L_0030D1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D1DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0030D1DCu) [[unlikely]] return; }
L_0030D1DC:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 140u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030D200:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D218u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x0030D218u) [[unlikely]] return; }
L_0030D218:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D238u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D238u) [[unlikely]] return; }
L_0030D238:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[4].w[0] + 20352u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 20356u));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[4].w[0] + 20360u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 20364u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[28].w[0] - 32132u));
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 108u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D280u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0030D280u) [[unlikely]] return; }
L_0030D280:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D294u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D294u) [[unlikely]] return; }
L_0030D294:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D2A4u); set32(c.r[6], 0u + 15291u);  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x0030D2A4u) [[unlikely]] return; }
L_0030D2A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D2B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D2B8u) [[unlikely]] return; }
L_0030D2B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 20380u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D2E8u); st32((c.r[29].w[0] + 84u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0030D2E8u) [[unlikely]] return; }
L_0030D2E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D2FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D2FCu) [[unlikely]] return; }
L_0030D2FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D30Cu); set32(c.r[6], 0u + 15291u);  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x0030D30Cu) [[unlikely]] return; }
L_0030D30C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D320u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D320u) [[unlikely]] return; }
L_0030D320:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 20380u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D350u); st32((c.r[29].w[0] + 68u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0030D350u) [[unlikely]] return; }
L_0030D350:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D364u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D364u) [[unlikely]] return; }
L_0030D364:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D374u); set32(c.r[6], 0u + 15291u);  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x0030D374u) [[unlikely]] return; }
L_0030D374:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D388u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0030D388u) [[unlikely]] return; }
L_0030D388:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 20380u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D3B8u); st32((c.r[29].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0030D3B8u) [[unlikely]] return; }
L_0030D3B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0030D3D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D3CCu);  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x0030D3CCu) [[unlikely]] return; }
L_0030D3CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0030D3D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0030D3E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D404u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x0030D404u) [[unlikely]] return; }
L_0030D404:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u + 1010u);
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 580u)));  goto L_0030D524; }
    set32(c.r[2], 0u + 1009u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 580u)));  goto L_0030D4A8; }
    set32(c.r[2], 0u + 1007u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 580u)));  goto L_0030D438; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_0030D59C; } }
L_0030D438:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0030D448; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0030D4A0; } }
L_0030D448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D450u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030D450u) [[unlikely]] return; }
L_0030D450:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030D470; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030D480; } }
L_0030D470:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030D480:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0030D4A0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[18], ld32((c.r[3].w[0])));  goto L_0030D498; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030D498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D4A0; } }
L_0030D4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D598; } }
L_0030D4A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0030D4B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0030D51C; } }
L_0030D4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D4C0u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030D4C0u) [[unlikely]] return; }
L_0030D4C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030D4E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030D4F0; } }
L_0030D4E0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030D4F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0030D51C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0030D510; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0030D514; } }
L_0030D510:
    set32(c.r[18], c.r[2].w[0] + 40u);
    c.budget -= 1;
L_0030D514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D51C; } }
L_0030D51C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D598; } }
L_0030D524:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0030D534; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0030D598; } }
L_0030D534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D53Cu); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030D53Cu) [[unlikely]] return; }
L_0030D53C:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030D55C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030D56C; } }
L_0030D55C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030D56C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0030D598; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0030D58C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0030D590; } }
L_0030D58C:
    set32(c.r[18], c.r[2].w[0] + 80u);
    c.budget -= 1;
L_0030D590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D598; } }
L_0030D598:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0030D59C:
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D5ACu); set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x0030D5ACu) [[unlikely]] return; }
L_0030D5AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 80u));  goto L_0030D5D4; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0030D5D4:
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D5E8u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0011(c, 291u, depth + 1u); else { c.pc = 0x00166830u; return; } if (c.pc != 0x0030D5E8u) [[unlikely]] return; }
L_0030D5E8:
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030D5FC; } }
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 1;
L_0030D5FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    c.f[1] = ld32((c.r[3].w[0] + 20288u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[18], c.r[5].w[0] + 3028u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 20292u));
    st32((c.r[29].w[0] + 96u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 20296u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20300u));
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 420u)));
    c.budget -= 18;
    if (c.r[5].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0030D78C; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D650u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0030D650u) [[unlikely]] return; }
L_0030D650:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D78C; } }
L_0030D65C:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.f[0] = ld32((c.r[28].w[0] - 32664u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[17], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_0030D694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 22384u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D68Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0030D68Cu) [[unlikely]] return; }
L_0030D68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_0030D734; } }
L_0030D694:
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D6A0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x0030D6A0u) [[unlikely]] return; }
L_0030D6A0:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32736u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D6ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 36u, depth + 1u); else { c.pc = 0x00120450u; return; } if (c.pc != 0x0030D6ACu) [[unlikely]] return; }
L_0030D6AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = c.f[20];  goto L_0030D6D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 22288u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D6D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0030D6D0u) [[unlikely]] return; }
L_0030D6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D730; } }
L_0030D6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D6E0u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x0030D6E0u) [[unlikely]] return; }
L_0030D6E0:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D6ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 32u, depth + 1u); else { c.pc = 0x00120400u; return; } if (c.pc != 0x0030D6ECu) [[unlikely]] return; }
L_0030D6EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_0030D718; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 22192u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D710u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0030D710u) [[unlikely]] return; }
L_0030D710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D730; } }
L_0030D718:
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 22096u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D730u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0030D730u) [[unlikely]] return; }
L_0030D730:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0030D734:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D748u); set32(c.r[6], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0030D748u) [[unlikely]] return; }
L_0030D748:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[5].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[5].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[5].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[5].w[0] + 204u), c.f[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 17;
L_0030D78C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3024u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[29].w[0] + 104u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030D65Cu | kUnwind; return; } goto L_0030D65C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0030D820; }
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0030D81C; } }
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 140u), c.r[4].w[0]);  if (t) { goto L_0030D808; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0030D7F8; }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0030D7E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D81C; } }
L_0030D7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D7F0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x0030D7F0u) [[unlikely]] return; }
L_0030D7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D81C; } }
L_0030D7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D800u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x0030D800u) [[unlikely]] return; }
L_0030D800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D81C; } }
L_0030D808:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D814u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x0030D814u) [[unlikely]] return; }
L_0030D814:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 140u), c.r[3].w[0]);
    c.budget -= 2;
L_0030D81C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0030D820:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0030D840:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 13u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0030DB84; } }
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_0030D8FC; }
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_0030D890; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0030DC08; } }
L_0030D890:
    set32(c.r[3], 0u + 1010u);
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 40u);  goto L_0030D8E8; }
    set32(c.r[3], 0u + 1009u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 40u);  goto L_0030D8D4; }
    set32(c.r[3], 0u + 1007u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 40u);  goto L_0030D8C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DC04; } }
L_0030D8C0:
    set32(c.r[6], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D8CCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030D8CCu) [[unlikely]] return; }
L_0030D8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DC04; } }
L_0030D8D4:
    set32(c.r[6], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D8E0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030D8E0u) [[unlikely]] return; }
L_0030D8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DC04; } }
L_0030D8E8:
    set32(c.r[6], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D8F4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030D8F4u) [[unlikely]] return; }
L_0030D8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DC04; } }
L_0030D8FC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0030D908; }
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_0030D908:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DC04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[0] = ld32((c.r[2].w[0] + 20304u));
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[21], c.r[3].w[0] + 3028u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 20308u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20312u));
    st32((c.r[29].w[0] + 148u), c.f[1]);
    set32(c.r[2], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_0030D950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D950u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030D950u) [[unlikely]] return; }
L_0030D950:
    st32((c.r[20].w[0] + 136u), 0u);
    set32(c.r[2], 0u + 1010u);
    st32((c.r[20].w[0] + 140u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], 0u + 22u);  goto L_0030D9B4; }
    set32(c.r[2], 0u + 1009u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], 0u + 22u);  goto L_0030D9A0; }
    set32(c.r[2], 0u + 1007u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], 0u + 22u);  goto L_0030D98C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D9C0; } }
L_0030D98C:
    set32(c.r[6], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D998u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030D998u) [[unlikely]] return; }
L_0030D998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D9C0; } }
L_0030D9A0:
    set32(c.r[6], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D9ACu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030D9ACu) [[unlikely]] return; }
L_0030D9AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D9C0; } }
L_0030D9B4:
    set32(c.r[6], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D9C0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030D9C0u) [[unlikely]] return; }
L_0030D9C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 20320u));
    c.f[2] = ld32((c.r[2].w[0] + 20324u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 20328u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20332u));
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 16;
    if (c.r[5].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 136u));  goto L_0030DA10; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DA0Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0030DA0Cu) [[unlikely]] return; }
L_0030DA0C:
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 1;
L_0030DA10:
    c.f[0] = ld32((c.r[28].w[0] - 32664u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[29].w[0] + 128u));  goto L_0030DA3C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 110u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DA34u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030DA34u) [[unlikely]] return; }
L_0030DA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 76u)));  if (t) { goto L_0030DAA0; } }
L_0030DA3C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32124u));  goto L_0030DA64; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DA5Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030DA5Cu) [[unlikely]] return; }
L_0030DA5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DA9C; } }
L_0030DA64:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_0030DA8C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 130u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DA84u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030DA84u) [[unlikely]] return; }
L_0030DA84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DA9C; } }
L_0030DA8C:
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DA9Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030DA9Cu) [[unlikely]] return; }
L_0030DA9C:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0030DAA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0030DAB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0030DB0C; } }
L_0030DAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DABCu); set32(c.r[5], 0u + 27u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030DABCu) [[unlikely]] return; }
L_0030DABC:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030DADC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030DAEC; } }
L_0030DADC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0030DAEC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0030DB0C; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[19], ld32((c.r[4].w[0] + 4u)));  goto L_0030DB04; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030DB04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DB0C; } }
L_0030DB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0030DB68; } }
L_0030DB14:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0030DB20:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 10100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DB34u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030DB34u) [[unlikely]] return; }
L_0030DB34:
    set32(c.r[5], ld32((c.r[22].w[0] + 144u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DB48u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030DB48u) [[unlikely]] return; }
L_0030DB48:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 144u));
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 328u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030DB20u | kUnwind; return; } goto L_0030DB20; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0030DB68:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3024u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030DB14u | kUnwind; return; } goto L_0030DB14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DC04; } }
L_0030DB84:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0030DBA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030DBF8; } }
L_0030DBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DBA8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030DBA8u) [[unlikely]] return; }
L_0030DBA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030DBC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030DBD8; } }
L_0030DBC8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030DBD8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0030DBF8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0030DBF0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030DBF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DBF8; } }
L_0030DBF8:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC04u); set32(c.r[4], ld32((c.r[16].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x0030DC04u) [[unlikely]] return; }
L_0030DC04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0030DC08:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0030DC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x0030DC44u) [[unlikely]] return; }
L_0030DC44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 25376u);
    set32(c.r[3], c.r[3].w[0] - 25320u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030DC80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002727F0u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 300u, depth); }
L_0030DC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DCA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x0030DCA4u) [[unlikely]] return; }
L_0030DCA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DCB0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0030DCB0u) [[unlikely]] return; }
L_0030DCB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_0030DD74; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030DD70; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], 0u + 1010u);
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 4u);  goto L_0030DD48; }
    set32(c.r[3], 0u + 1009u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 4u);  goto L_0030DD20; }
    set32(c.r[3], 0u + 1007u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 4u);  goto L_0030DCF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0030DD6C; } }
L_0030DCF8:
    set32(c.r[6], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DD04u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030DD04u) [[unlikely]] return; }
L_0030DD04:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 110u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DD18u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030DD18u) [[unlikely]] return; }
L_0030DD18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DD68; } }
L_0030DD20:
    set32(c.r[6], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DD2Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030DD2Cu) [[unlikely]] return; }
L_0030DD2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DD40u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030DD40u) [[unlikely]] return; }
L_0030DD40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DD68; } }
L_0030DD48:
    set32(c.r[6], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DD54u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030DD54u) [[unlikely]] return; }
L_0030DD54:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 130u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DD68u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030DD68u) [[unlikely]] return; }
L_0030DD68:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0030DD6C:
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 1;
L_0030DD70:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0030DD74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0030DD98; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0030DD98:
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0030DEF4; }
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030DEF0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], 0u + 1010u);
    set32(c.r[4], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 1320u)));  goto L_0030DEA0; }
    set32(c.r[3], 0u + 1009u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 1320u)));  goto L_0030DE50; }
    set32(c.r[3], 0u + 1007u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 1320u)));  goto L_0030DE00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0030DEEC; } }
L_0030DE00:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DE0Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x0030DE0Cu) [[unlikely]] return; }
L_0030DE0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DE20u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x0030DE20u) [[unlikely]] return; }
L_0030DE20:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DE34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x0030DE34u) [[unlikely]] return; }
L_0030DE34:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DE48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x0030DE48u) [[unlikely]] return; }
L_0030DE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DEE8; } }
L_0030DE50:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DE5Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x0030DE5Cu) [[unlikely]] return; }
L_0030DE5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 18u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DE70u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x0030DE70u) [[unlikely]] return; }
L_0030DE70:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 17u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DE84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x0030DE84u) [[unlikely]] return; }
L_0030DE84:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DE98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x0030DE98u) [[unlikely]] return; }
L_0030DE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DEE8; } }
L_0030DEA0:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DEACu); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x0030DEACu) [[unlikely]] return; }
L_0030DEAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 24u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DEC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x0030DEC0u) [[unlikely]] return; }
L_0030DEC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 23u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DED4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x0030DED4u) [[unlikely]] return; }
L_0030DED4:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 25u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DEE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x0030DEE8u) [[unlikely]] return; }
L_0030DEE8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0030DEEC:
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 1;
L_0030DEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0030DEF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030DF00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030DF9C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 25376u);
    set32(c.r[2], c.r[2].w[0] - 25320u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030DF84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030DF84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DF78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030DF78u) [[unlikely]] return; }
L_0030DF78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DF84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030DF84u) [[unlikely]] return; }
L_0030DF84:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0030DFA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DF9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030DF9Cu) [[unlikely]] return; }
L_0030DF9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030DFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030DFC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030E05C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 25280u);
    set32(c.r[2], c.r[2].w[0] - 25224u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030E044; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030E044; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E038u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030E038u) [[unlikely]] return; }
L_0030E038:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E044u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030E044u) [[unlikely]] return; }
L_0030E044:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0030E060; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E05Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030E05Cu) [[unlikely]] return; }
L_0030E05C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030E060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030E080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030E10C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 25184u);
    set32(c.r[2], c.r[2].w[0] - 25128u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030E0F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E0DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030E0DCu) [[unlikely]] return; }
L_0030E0DC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E0E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030E0E8u) [[unlikely]] return; }
L_0030E0E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E0F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030E0F4u) [[unlikely]] return; }
L_0030E0F4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0030E110; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E10Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030E10Cu) [[unlikely]] return; }
L_0030E10C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030E110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030E130:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E080u | kUnwind; return; } goto L_0030E080; }
L_0030E140:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030DFC0u | kUnwind; return; } goto L_0030DFC0; }
L_0030E150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030D840u | kUnwind; return; } goto L_0030D840; }
L_0030E160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030DF00u | kUnwind; return; } goto L_0030DF00; }
L_0030E170:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E1A0u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030E1A0u) [[unlikely]] return; }
L_0030E1A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030E1C4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E1C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 237u, depth + 1u); else { c.pc = 0x0030E1E0u; return; } if (c.pc != 0x0030E1C0u) [[unlikely]] return; }
L_0030E1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030E1C4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030E1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E1F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0030E1F4u) [[unlikely]] return; }
L_0030E1F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 24848u);
    set32(c.r[2], c.r[2].w[0] - 24792u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 1424u), 0u);  goto L_0030E234; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E230u); set32(c.r[6], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0030E230u) [[unlikely]] return; }
L_0030E230:
    st32((c.r[16].w[0] + 1424u), 0u);
    c.budget -= 1;
L_0030E234:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030E2E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 24848u);
    set32(c.r[2], c.r[2].w[0] - 24792u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 20000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E28Cu); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030E28Cu) [[unlikely]] return; }
L_0030E28C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0030E2D4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E2B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030E2B8u) [[unlikely]] return; }
L_0030E2B8:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E2C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030E2C4u) [[unlikely]] return; }
L_0030E2C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E2D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030E2D0u) [[unlikely]] return; }
L_0030E2D0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0030E2D4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0030E2EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E2E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030E2E8u) [[unlikely]] return; }
L_0030E2E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030E2EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030E300:
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
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0030E340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030E4B8; } }
L_0030E340:
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_0030E46C; }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));  goto L_0030E420; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 580u)));  goto L_0030E370; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030E4B8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 1;
L_0030E370:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], 0u + 42u);  goto L_0030E384; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030E3EC; } }
    set32(c.r[5], 0u + 42u);
    c.budget -= 1;
L_0030E384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E38Cu);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030E38Cu) [[unlikely]] return; }
L_0030E38C:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030E3B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030E3C0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_0030E3B0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030E3C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0030E3EC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0030E3E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030E3E0; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_0030E3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E3EC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030E3EC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 20000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E3FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030E3FCu) [[unlikely]] return; }
L_0030E3FC:
    st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E414u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030E414u) [[unlikely]] return; }
L_0030E414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E4B4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 1;
L_0030E420:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 136u);  goto L_0030E438; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E430u); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030E430u) [[unlikely]] return; }
L_0030E430:
    st32((c.r[19].w[0] + 1424u), 0u);
    set32(c.r[4], 0u + 136u);
    c.budget -= 2;
L_0030E438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030E440u) [[unlikely]] return; }
L_0030E440:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030E4BC; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E460u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 253u, depth + 1u); else { c.pc = 0x0030E4E0u; return; } if (c.pc != 0x0030E460u) [[unlikely]] return; }
L_0030E460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E4B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_0030E46C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030E4B4; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0030E4B4; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 172u)));
    set32(c.r[4], 0u - 513u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0] + 172u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[6].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 12;
L_0030E4B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030E4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030E4BC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030E4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E4F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x0030E4F4u) [[unlikely]] return; }
L_0030E4F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 24944u);
    set32(c.r[3], c.r[3].w[0] - 24888u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 44u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0030E538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0030E5FC; } }
L_0030E538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 20384u));
    c.f[2] = ld32((c.r[2].w[0] + 20388u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 20392u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20396u));
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E580u); set32(c.r[6], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0030E580u) [[unlikely]] return; }
L_0030E580:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[7], ld32((c.r[3].w[0] + 3028u)));
    st32((c.r[7].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    st32((c.r[7].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[7].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    st32((c.r[7].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[7].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[7].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 244u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 248u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 252u)));
    st32((c.r[7].w[0] + 240u), 0u);
    st32((c.r[7].w[0] + 244u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 248u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[7].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[7].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 31;
L_0030E5FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030E6AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 24944u);
    set32(c.r[2], c.r[2].w[0] - 24888u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030E694; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030E694; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030E688u) [[unlikely]] return; }
L_0030E688:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E694u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030E694u) [[unlikely]] return; }
L_0030E694:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0030E6B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E6ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030E6ACu) [[unlikely]] return; }
L_0030E6AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030E6B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030E6D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E250u | kUnwind; return; } goto L_0030E250; }
L_0030E6E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E610u | kUnwind; return; } goto L_0030E610; }
L_0030E6F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E520u | kUnwind; return; } goto L_0030E520; }
L_0030E700:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E730u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030E730u) [[unlikely]] return; }
L_0030E730:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030E754; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E750u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 267u, depth + 1u); else { c.pc = 0x0030E770u; return; } if (c.pc != 0x0030E750u) [[unlikely]] return; }
L_0030E750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030E754:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030E770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E784u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0030E784u) [[unlikely]] return; }
L_0030E784:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 24512u);
    set32(c.r[2], c.r[2].w[0] - 24456u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E7A4u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0030E7A4u) [[unlikely]] return; }
L_0030E7A4:
    st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E7B8u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0030E7B8u) [[unlikely]] return; }
L_0030E7B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1428u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E7E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 14u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0030E818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030E84C; } }
L_0030E818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E820u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030E820u) [[unlikely]] return; }
L_0030E820:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030E850; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E840u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 282u, depth + 1u); else { c.pc = 0x0030E9C0u; return; } if (c.pc != 0x0030E840u) [[unlikely]] return; }
L_0030E840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E84C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030E84C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030E850:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030E870:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[4].w[0] + 80u));  goto L_0030E8AC; }
    c.f[2] = 0u;
    c.budget -= 1;
L_0030E8AC:
    c.f[1] = ld32((c.r[17].w[0] + 1428u));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E8C0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0030E8C0u) [[unlikely]] return; }
L_0030E8C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 1424u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 1424u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 464u)));  goto L_0030E908; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_0030E93C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E938; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 1;
L_0030E908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E910u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x0030E910u) [[unlikely]] return; }
L_0030E910:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E920u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0030E920u) [[unlikely]] return; }
L_0030E920:
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E930u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 166u, depth + 1u); else { c.pc = 0x001590F0u; return; } if (c.pc != 0x0030E930u) [[unlikely]] return; }
L_0030E930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0030E9A4; } }
L_0030E938:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0030E93C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0030E960; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0030E960:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030E9A0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E980u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x0030E980u) [[unlikely]] return; }
L_0030E980:
    set32(c.r[6], ld32((c.r[17].w[0] + 1424u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E990u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0030E990u) [[unlikely]] return; }
L_0030E990:
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E9A0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 166u, depth + 1u); else { c.pc = 0x001590F0u; return; } if (c.pc != 0x0030E9A0u) [[unlikely]] return; }
L_0030E9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0030E9A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0030E9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E9D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x0030E9D8u) [[unlikely]] return; }
L_0030E9D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 24608u);
    set32(c.r[3], c.r[3].w[0] - 24552u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E60000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 3028u)));
    c.f[1] = ld32((c.r[2].w[0] + 192u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 144u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 196u));
    st32((c.r[16].w[0] + 148u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 200u));
    st32((c.r[16].w[0] + 152u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 204u));
    st32((c.r[16].w[0] + 156u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EA44u); st32((c.r[16].w[0] + 148u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0030EA44u) [[unlikely]] return; }
L_0030EA44:
    c.f[0] = ld32((c.r[17].w[0] + 1392u));
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1396u));
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1400u));
    st32((c.r[16].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1404u));
    st32((c.r[16].w[0] + 172u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.f[3] = ld32((c.r[17].w[0] + 192u));
    c.f[1] = ld32((c.r[17].w[0] + 200u));
    c.f[2] = ld32((c.r[2].w[0] + 192u));
    c.f[0] = ld32((c.r[2].w[0] + 200u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EA84u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x0030EA84u) [[unlikely]] return; }
L_0030EA84:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[3].w[0] + 1084u));
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[4] = ld32((c.r[3].w[0] + 656u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030EAD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 44u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0030EB04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0030EBAC; } }
L_0030EB04:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0030EB14; }
    set32(c.r[18], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_0030EB14:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 3028u)));  if (t) { goto L_0030EB90; } }
L_0030EB28:
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EB3Cu); set32(c.r[17], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0030EB3Cu) [[unlikely]] return; }
L_0030EB3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[28].w[0] - 32100u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[13], c.f[2]);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[8], 0u + 1u);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EB80u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0030EB80u) [[unlikely]] return; }
L_0030EB80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 4;
L_0030EB90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EB28u | kUnwind; return; } goto L_0030EB28; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0030EBAC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0030EBD0:
    c.f[1] = ld32((c.r[4].w[0] + 92u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030ECC4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0030EBF4; }
    set32(c.r[3], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 1;
L_0030EBF4:
    set32(c.r[5], ld32((c.r[3].w[0] + 80u)));
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    st32((c.r[5].w[0] + 48u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    st32((c.r[5].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    st32((c.r[5].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 156u));
    st32((c.r[5].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    st32((c.r[5].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    st32((c.r[5].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    st32((c.r[5].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 156u));
    st32((c.r[5].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    st32((c.r[5].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    st32((c.r[5].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 156u));
    st32((c.r[5].w[0] + 76u), c.f[0]);
    st32((c.r[5].w[0] + 108u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 160u));
    st32((c.r[5].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 164u));
    st32((c.r[5].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 168u));
    st32((c.r[5].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 172u));
    st32((c.r[5].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 160u));
    st32((c.r[5].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 164u));
    st32((c.r[5].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 168u));
    st32((c.r[5].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 172u));
    st32((c.r[5].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 160u));
    st32((c.r[5].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 164u));
    st32((c.r[5].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 168u));
    st32((c.r[5].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 172u));
    st32((c.r[5].w[0] + 140u), c.f[0]);
    st32((c.r[5].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 52;
L_0030ECC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030ECD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[5], c.r[2].w[0] + 27u);
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030ED10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0030ED68; } }
L_0030ED10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ED18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030ED18u) [[unlikely]] return; }
L_0030ED18:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030ED38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030ED48; } }
L_0030ED38:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030ED48:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0030ED68; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[19], ld32((c.r[3].w[0] + 4u)));  goto L_0030ED60; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030ED60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030ED68; } }
L_0030ED68:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0030EE34; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[3].w[0] + 3024u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 2916u);  if (t) { goto L_0030EDCC; } }
L_0030ED88:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 10100u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EDA8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030EDA8u) [[unlikely]] return; }
L_0030EDA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0030EDCC; }
    c.f[0] = ld32((c.r[20].w[0] + 136u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 328u), c.f[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EDC8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030EDC8u) [[unlikely]] return; }
L_0030EDC8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0030EDCC:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030ED88u | kUnwind; return; } goto L_0030ED88; }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1024u)));
    c.budget -= 11;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[2], c.r[3].w[0] + 1024u);  if (t) { goto L_0030EE30; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = ld32((c.r[20].w[0] + 136u));  if (t) { goto L_0030EE1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_0030EE20; } }
L_0030EE1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030EE20:
    set32(c.r[4], ld32((c.r[2].w[0] + 76u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EE30u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0030EE30u) [[unlikely]] return; }
L_0030EE30:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0030EE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EE3Cu);  if (depth < kMaxDepth) unit_0053(c, 122u, depth + 1u); else { c.pc = 0x0026D1E0u; return; } if (c.pc != 0x0030EE3Cu) [[unlikely]] return; }
L_0030EE3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0030EE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030EEFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 24608u);
    set32(c.r[2], c.r[2].w[0] - 24552u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030EEE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030EEE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030EED8u) [[unlikely]] return; }
L_0030EED8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EEE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030EEE4u) [[unlikely]] return; }
L_0030EEE4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0030EF00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EEFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030EEFCu) [[unlikely]] return; }
L_0030EEFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030EF00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030EF20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030EFAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 24512u);
    set32(c.r[2], c.r[2].w[0] - 24456u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030EF94; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030EF7Cu) [[unlikely]] return; }
L_0030EF7C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030EF88u) [[unlikely]] return; }
L_0030EF88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030EF94u) [[unlikely]] return; }
L_0030EF94:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0030EFB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EFACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030EFACu) [[unlikely]] return; }
L_0030EFAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030EFB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030EFD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EF20u | kUnwind; return; } goto L_0030EF20; }
L_0030EFE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EE60u | kUnwind; return; } goto L_0030EE60; }
L_0030EFF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EAD0u | kUnwind; return; } goto L_0030EAD0; }
L_0030F000:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F030u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030F030u) [[unlikely]] return; }
L_0030F030:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030F054; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F050u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 313u, depth + 1u); else { c.pc = 0x0030F070u; return; } if (c.pc != 0x0030F050u) [[unlikely]] return; }
L_0030F050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030F054:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030F070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F084u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0030F084u) [[unlikely]] return; }
L_0030F084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 24080u);
    set32(c.r[3], c.r[3].w[0] - 24024u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1424u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F0C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 14u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0030F138; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 124u);  goto L_0030F108; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030F16C; } }
    set32(c.r[4], 0u + 124u);
    c.budget -= 1;
L_0030F108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F110u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030F110u) [[unlikely]] return; }
L_0030F110:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030F170; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F130u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 325u, depth + 1u); else { c.pc = 0x0030F200u; return; } if (c.pc != 0x0030F130u) [[unlikely]] return; }
L_0030F130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030F16C; } }
L_0030F138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F140u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030F140u) [[unlikely]] return; }
L_0030F140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030F16C; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F160u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 339u, depth + 1u); else { c.pc = 0x0030F450u; return; } if (c.pc != 0x0030F160u) [[unlikely]] return; }
L_0030F160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030F16C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030F16C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030F170:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030F190:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0030F1E8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030F1E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F1C4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x0030F1C4u) [[unlikely]] return; }
L_0030F1C4:
    set32(c.r[6], ld32((c.r[16].w[0] + 1424u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F1D4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0030F1D4u) [[unlikely]] return; }
L_0030F1D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F1E4u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 166u, depth + 1u); else { c.pc = 0x001590F0u; return; } if (c.pc != 0x0030F1E4u) [[unlikely]] return; }
L_0030F1E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030F1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F1F0u);  if (depth < kMaxDepth) unit_0057(c, 175u, depth + 1u); else { c.pc = 0x0027DB10u; return; } if (c.pc != 0x0030F1F0u) [[unlikely]] return; }
L_0030F1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0030F200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F214u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 148u, depth + 1u); else { c.pc = 0x00275380u; return; } if (c.pc != 0x0030F214u) [[unlikely]] return; }
L_0030F214:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 24176u);
    set32(c.r[3], c.r[3].w[0] - 24120u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F250:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F274u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0055(c, 166u, depth + 1u); else { c.pc = 0x002756A0u; return; } if (c.pc != 0x0030F274u) [[unlikely]] return; }
L_0030F274:
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));  goto L_0030F38C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3424u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 1424u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F2A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0030F2A4u) [[unlikely]] return; }
L_0030F2A4:
    set32(c.r[20], c.r[18].w[0] + 736u);
    set32(c.r[18], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F2B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0030F2B4u) [[unlikely]] return; }
L_0030F2B4:
    c.f[3] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 736u));
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 744u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F2D0u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x0030F2D0u) [[unlikely]] return; }
L_0030F2D0:
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[4].d[0] = c.r[3].d[0] & 65535ull;  goto L_0030F2E8; }
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull | 65535ull;  if (t) { goto L_0030F2F4; } }
L_0030F2E8:
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[18].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 3;
L_0030F2F4:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[18].sd[0] < -32768ll ? 1ull : 0ull;  goto L_0030F30C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - c.r[5].w[0]);  if (t) { goto L_0030F318; } }
L_0030F30C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030F318; } }
    set32(c.r[18], c.r[18].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0030F318:
    c.budget -= 2;
    if (c.r[18].sd[0] < 0) { set32(c.r[3], 0u - c.r[18].w[0]);  goto L_0030F324; }
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030F324:
    c.r[1].d[0] = c.r[3].sd[0] < 1092ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030F33C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0030F34C; } }
L_0030F33C:
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { set32(c.r[18], 0u - 1092u);  goto L_0030F348; }
    set32(c.r[18], 0u + 1092u);
    c.budget -= 1;
L_0030F348:
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_0030F34C:
    set32(c.r[3], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 1424u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F364u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x0030F364u) [[unlikely]] return; }
L_0030F364:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F374u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0030F374u) [[unlikely]] return; }
L_0030F374:
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F384u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 166u, depth + 1u); else { c.pc = 0x001590F0u; return; } if (c.pc != 0x0030F384u) [[unlikely]] return; }
L_0030F384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[19].w[0] + 16u)));  if (t) { goto L_0030F3C0; } }
L_0030F38C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 80u));  goto L_0030F3B0; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0030F3B0:
    c.f[0] = ld32((c.r[19].w[0] + 116u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 116u), c.f[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
L_0030F3C0:
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F3CCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030F3CCu) [[unlikely]] return; }
L_0030F3CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0030F3E8; }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
L_0030F3E8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0030F410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 112u)));  c.pc = t; return; }
L_0030F420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 112u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0030F448; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F440u);  if (depth < kMaxDepth) unit_0055(c, 272u, depth + 1u); else { c.pc = 0x002768D0u; return; } if (c.pc != 0x0030F440u) [[unlikely]] return; }
L_0030F440:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0030F448:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030F450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F468u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x0030F468u) [[unlikely]] return; }
L_0030F468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 24272u);
    set32(c.r[3], c.r[3].w[0] - 24216u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], 0u + 10001u);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 3028u)));
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 196u));
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 200u));
    st32((c.r[17].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 204u));
    st32((c.r[17].w[0] + 156u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 25;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 10012u);  goto L_0030F4E8; }
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 148u), c.f[0]);  if (t) { goto L_0030F508; } }
L_0030F4E8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0030F50C; }
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 6;
L_0030F508:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030F50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F514u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0030F514u) [[unlikely]] return; }
L_0030F514:
    c.f[0] = ld32((c.r[16].w[0] + 1392u));
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1396u));
    st32((c.r[17].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1400u));
    st32((c.r[17].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1404u));
    st32((c.r[17].w[0] + 172u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.f[3] = ld32((c.r[16].w[0] + 192u));
    c.f[1] = ld32((c.r[16].w[0] + 200u));
    c.f[2] = ld32((c.r[2].w[0] + 192u));
    c.f[0] = ld32((c.r[2].w[0] + 200u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F554u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x0030F554u) [[unlikely]] return; }
L_0030F554:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[3].w[0] + 1084u));
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.f[4] = ld32((c.r[3].w[0] + 656u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030F5A0:
    c.f[1] = ld32((c.r[4].w[0] + 92u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030F694; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0030F5C4; }
    set32(c.r[3], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 1;
L_0030F5C4:
    set32(c.r[5], ld32((c.r[3].w[0] + 80u)));
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    st32((c.r[5].w[0] + 48u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    st32((c.r[5].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    st32((c.r[5].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 156u));
    st32((c.r[5].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    st32((c.r[5].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    st32((c.r[5].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    st32((c.r[5].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 156u));
    st32((c.r[5].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    st32((c.r[5].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    st32((c.r[5].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 156u));
    st32((c.r[5].w[0] + 76u), c.f[0]);
    st32((c.r[5].w[0] + 108u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 160u));
    st32((c.r[5].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 164u));
    st32((c.r[5].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 168u));
    st32((c.r[5].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 172u));
    st32((c.r[5].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 160u));
    st32((c.r[5].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 164u));
    st32((c.r[5].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 168u));
    st32((c.r[5].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 172u));
    st32((c.r[5].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 160u));
    st32((c.r[5].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 164u));
    st32((c.r[5].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 168u));
    st32((c.r[5].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 172u));
    st32((c.r[5].w[0] + 140u), c.f[0]);
    st32((c.r[5].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 52;
L_0030F694:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030F6A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[5], c.r[2].w[0] + 27u);
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030F6E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0030F738; } }
L_0030F6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F6E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030F6E8u) [[unlikely]] return; }
L_0030F6E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030F708; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030F718; } }
L_0030F708:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030F718:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0030F738; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[19], ld32((c.r[3].w[0] + 4u)));  goto L_0030F730; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030F730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030F738; } }
L_0030F738:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0030F804; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[3].w[0] + 3024u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 2916u);  if (t) { goto L_0030F79C; } }
L_0030F758:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 10100u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F778u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030F778u) [[unlikely]] return; }
L_0030F778:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0030F79C; }
    c.f[0] = ld32((c.r[20].w[0] + 136u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 328u), c.f[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F798u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030F798u) [[unlikely]] return; }
L_0030F798:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0030F79C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030F758u | kUnwind; return; } goto L_0030F758; }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1024u)));
    c.budget -= 11;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[2], c.r[3].w[0] + 1024u);  if (t) { goto L_0030F800; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = ld32((c.r[20].w[0] + 136u));  if (t) { goto L_0030F7EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 152u)));  if (t) { goto L_0030F7F0; } }
L_0030F7EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030F7F0:
    set32(c.r[4], ld32((c.r[2].w[0] + 76u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F800u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0030F800u) [[unlikely]] return; }
L_0030F800:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0030F804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F80Cu);  if (depth < kMaxDepth) unit_0053(c, 122u, depth + 1u); else { c.pc = 0x0026D1E0u; return; } if (c.pc != 0x0030F80Cu) [[unlikely]] return; }
L_0030F80C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0030F830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030F8CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 24272u);
    set32(c.r[2], c.r[2].w[0] - 24216u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030F8B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030F8B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030F8A8u) [[unlikely]] return; }
L_0030F8A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030F8B4u) [[unlikely]] return; }
L_0030F8B4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0030F8D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030F8CCu) [[unlikely]] return; }
L_0030F8CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030F8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030F8F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030F98C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 24176u);
    set32(c.r[2], c.r[2].w[0] - 24120u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030F974; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22832u);
    set32(c.r[2], c.r[2].w[0] + 22888u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030F974; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030F968u) [[unlikely]] return; }
L_0030F968:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F974u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030F974u) [[unlikely]] return; }
L_0030F974:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0030F990; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F98Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030F98Cu) [[unlikely]] return; }
L_0030F98C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030F990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030F9B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030FA3C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 24080u);
    set32(c.r[2], c.r[2].w[0] - 24024u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030FA24; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030FA0Cu) [[unlikely]] return; }
L_0030FA0C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030FA18u) [[unlikely]] return; }
L_0030FA18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030FA24u) [[unlikely]] return; }
L_0030FA24:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0030FA40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030FA3Cu) [[unlikely]] return; }
L_0030FA3C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030FA40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030FA60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030F9B0u | kUnwind; return; } goto L_0030F9B0; }
L_0030FA70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030F8F0u | kUnwind; return; } goto L_0030F8F0; }
L_0030FA80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030F830u | kUnwind; return; } goto L_0030F830; }
L_0030FA90:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAC0u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030FAC0u) [[unlikely]] return; }
L_0030FAC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030FAE4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 370u, depth + 1u); else { c.pc = 0x0030FB00u; return; } if (c.pc != 0x0030FAE0u) [[unlikely]] return; }
L_0030FAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030FAE4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030FB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0030FB14u) [[unlikely]] return; }
L_0030FB14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 23696u);
    set32(c.r[3], c.r[3].w[0] - 23640u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030FB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB58u); set32(c.r[4], 0u + 61u);  if (depth < kMaxDepth) unit_0068(c, 319u, depth + 1u); else { c.pc = 0x002C3790u; return; } if (c.pc != 0x0030FB58u) [[unlikely]] return; }
L_0030FB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB60u); set32(c.r[4], 0u + 62u);  if (depth < kMaxDepth) unit_0068(c, 319u, depth + 1u); else { c.pc = 0x002C3790u; return; } if (c.pc != 0x0030FB60u) [[unlikely]] return; }
L_0030FB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 85u, depth + 1u); else { c.pc = 0x0027CCC0u; return; } if (c.pc != 0x0030FB68u) [[unlikely]] return; }
L_0030FB68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030FB80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB9Cu); set32(c.r[4], 0u + 660u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030FB9Cu) [[unlikely]] return; }
L_0030FB9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030FBC8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FBB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 8u, depth + 1u); else { c.pc = 0x002AC0E0u; return; } if (c.pc != 0x0030FBB0u) [[unlikely]] return; }
L_0030FBB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 23792u);
    set32(c.r[2], c.r[2].w[0] - 23736u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
L_0030FBC8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030FBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FBF4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x0030FBF4u) [[unlikely]] return; }
L_0030FBF4:
    set32(c.r[3], 0u + 71u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 61u);  goto L_0030FCD4; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0030FCD0; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 61u);  goto L_0030FCA0; }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 61u);  goto L_0030FC44; }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0030FC40; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030FC40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0030FCE8; } }
L_0030FC40:
    set32(c.r[4], 0u + 61u);
    c.budget -= 1;
L_0030FC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FC4Cu);  if (depth < kMaxDepth) unit_0068(c, 321u, depth + 1u); else { c.pc = 0x002C37E0u; return; } if (c.pc != 0x0030FC4Cu) [[unlikely]] return; }
L_0030FC4C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 62u);  goto L_0030FC70; }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 61u);
    c.f[12] = 0u;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FC6Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x0030FC6Cu) [[unlikely]] return; }
L_0030FC6C:
    set32(c.r[4], 0u + 62u);
    c.budget -= 1;
L_0030FC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FC78u);  if (depth < kMaxDepth) unit_0068(c, 321u, depth + 1u); else { c.pc = 0x002C37E0u; return; } if (c.pc != 0x0030FC78u) [[unlikely]] return; }
L_0030FC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030FCE4; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 62u);
    c.f[12] = 0u;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FC98u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x0030FC98u) [[unlikely]] return; }
L_0030FC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030FCE4; } }
L_0030FCA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FCA8u);  if (depth < kMaxDepth) unit_0068(c, 321u, depth + 1u); else { c.pc = 0x002C37E0u; return; } if (c.pc != 0x0030FCA8u) [[unlikely]] return; }
L_0030FCA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030FCE4; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 61u);
    c.f[12] = 0u;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FCC8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x0030FCC8u) [[unlikely]] return; }
L_0030FCC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030FCE4; } }
L_0030FCD0:
    set32(c.r[4], 0u + 61u);
    c.budget -= 1;
L_0030FCD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FCDCu);  if (depth < kMaxDepth) unit_0068(c, 319u, depth + 1u); else { c.pc = 0x002C3790u; return; } if (c.pc != 0x0030FCDCu) [[unlikely]] return; }
L_0030FCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FCE4u); set32(c.r[4], 0u + 62u);  if (depth < kMaxDepth) unit_0068(c, 319u, depth + 1u); else { c.pc = 0x002C3790u; return; } if (c.pc != 0x0030FCE4u) [[unlikely]] return; }
L_0030FCE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0030FCE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030FD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FD1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x0030FD1Cu) [[unlikely]] return; }
L_0030FD1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 23840u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 23828u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43540000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 12878ull;
    set32(c.r[4], c.r[4].w[0] - 22000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FD50u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0030FD50u) [[unlikely]] return; }
L_0030FD50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030FD70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030FDE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 23840u);
    set32(c.r[2], c.r[2].w[0] - 23828u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FDB0u); set32(c.r[5], 0u + 10600u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030FDB0u) [[unlikely]] return; }
L_0030FDB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FDBCu); set32(c.r[4], c.r[4].w[0] - 21952u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0030FDBCu) [[unlikely]] return; }
L_0030FDBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FDC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x0030FDC8u) [[unlikely]] return; }
L_0030FDC8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0030FDE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FDE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0030FDE0u) [[unlikely]] return; }
L_0030FDE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030FDE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030FE00:
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
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_007C(c, 34u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 21824u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_007B[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030FE54:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE68u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x0030FE68u) [[unlikely]] return; }
L_0030FE68:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE84u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0030FE84u) [[unlikely]] return; }
L_0030FE84:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE90u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0030FE90u) [[unlikely]] return; }
L_0030FE90:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
L_0030FE9C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FEACu); set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0028CB70u; return; } if (c.pc != 0x0030FEACu) [[unlikely]] return; }
L_0030FEAC:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FEC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x0030FEC0u) [[unlikely]] return; }
L_0030FEC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 300u);  goto L_0030FEE8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 200u);  goto L_0030FEE8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 100u);  goto L_0030FEE8; }
L_0030FEE8:
    set32(c.r[17], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0030FF00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030FF58; } }
L_0030FF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF08u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030FF08u) [[unlikely]] return; }
L_0030FF08:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030FF28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030FF38; } }
L_0030FF28:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030FF38:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0030FF58; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0030FF50; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030FF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030FF58; } }
L_0030FF58:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[6], 0u + 10600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF68u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030FF68u) [[unlikely]] return; }
L_0030FF68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 44u)));  goto L_0030FF8C; }
    set32(c.r[25], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF88u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030FF88u) [[unlikely]] return; }
L_0030FF88:
    set32(c.r[17], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_0030FF8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0030FFA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007C(c, 2u, depth); } }
L_0030FFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FFA8u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030FFA8u) [[unlikely]] return; }
L_0030FFA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030FFC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030FFD8; } }
L_0030FFC8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030FFD8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_007C(c, 2u, depth); }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0030FFF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030FFFC; } }
L_0030FFF8:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0030FFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007C(c, 2u, depth); } }
    [[clang::musttail]] return unit_007C(c, 2u, depth);
}

}
