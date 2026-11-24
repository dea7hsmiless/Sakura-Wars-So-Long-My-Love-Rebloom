#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0081[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0,
    41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0,
    94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0,
    0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0,
    0, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0,
    209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0,
    263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275,
    0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 0,
    298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 383, 0, 384, 0, 0,
    0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0,
    392, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0,
    400, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0,
    0, 0, 405, 0, 406, 0, 407, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0,
    0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0,
    433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0,
};

void unit_0081(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00324000;
    case 2u: goto L_00324004;
    case 3u: goto L_0032402C;
    case 4u: goto L_00324098;
    case 5u: goto L_003240AC;
    case 6u: goto L_003240B8;
    case 7u: goto L_003240DC;
    case 8u: goto L_003240F0;
    case 9u: goto L_00324100;
    case 10u: goto L_00324134;
    case 11u: goto L_0032416C;
    case 12u: goto L_00324178;
    case 13u: goto L_00324194;
    case 14u: goto L_00324198;
    case 15u: goto L_003241CC;
    case 16u: goto L_003241E0;
    case 17u: goto L_00324200;
    case 18u: goto L_0032422C;
    case 19u: goto L_00324240;
    case 20u: goto L_0032429C;
    case 21u: goto L_003242A8;
    case 22u: goto L_003242C0;
    case 23u: goto L_003242E0;
    case 24u: goto L_00324358;
    case 25u: goto L_00324364;
    case 26u: goto L_0032437C;
    case 27u: goto L_003243A0;
    case 28u: goto L_00324418;
    case 29u: goto L_00324424;
    case 30u: goto L_0032443C;
    case 31u: goto L_00324460;
    case 32u: goto L_00324474;
    case 33u: goto L_003244A0;
    case 34u: goto L_003244FC;
    case 35u: goto L_00324508;
    case 36u: goto L_00324514;
    case 37u: goto L_0032452C;
    case 38u: goto L_00324550;
    case 39u: goto L_00324560;
    case 40u: goto L_00324570;
    case 41u: goto L_00324580;
    case 42u: goto L_00324590;
    case 43u: goto L_003245A0;
    case 44u: goto L_003245D0;
    case 45u: goto L_003245F0;
    case 46u: goto L_00324610;
    case 47u: goto L_00324648;
    case 48u: goto L_00324674;
    case 49u: goto L_0032467C;
    case 50u: goto L_00324790;
    case 51u: goto L_003247B0;
    case 52u: goto L_003247D0;
    case 53u: goto L_00324800;
    case 54u: goto L_00324834;
    case 55u: goto L_003248B4;
    case 56u: goto L_003248D0;
    case 57u: goto L_00324948;
    case 58u: goto L_00324960;
    case 59u: goto L_00324980;
    case 60u: goto L_003249A4;
    case 61u: goto L_003249B0;
    case 62u: goto L_003249C0;
    case 63u: goto L_003249D4;
    case 64u: goto L_00324A10;
    case 65u: goto L_00324AD0;
    case 66u: goto L_00324AF8;
    case 67u: goto L_00324B68;
    case 68u: goto L_00324B84;
    case 69u: goto L_00324B98;
    case 70u: goto L_00324BAC;
    case 71u: goto L_00324BF0;
    case 72u: goto L_00324C10;
    case 73u: goto L_00324C20;
    case 74u: goto L_00324C3C;
    case 75u: goto L_00324C5C;
    case 76u: goto L_00324C80;
    case 77u: goto L_00324C94;
    case 78u: goto L_00324C9C;
    case 79u: goto L_00324CC0;
    case 80u: goto L_00324CD4;
    case 81u: goto L_00324CF4;
    case 82u: goto L_00324D20;
    case 83u: goto L_00324D38;
    case 84u: goto L_00324D40;
    case 85u: goto L_00324D50;
    case 86u: goto L_00324D60;
    case 87u: goto L_00324DA4;
    case 88u: goto L_00324DC8;
    case 89u: goto L_00324DD0;
    case 90u: goto L_00324DDC;
    case 91u: goto L_00324DE4;
    case 92u: goto L_00324DF0;
    case 93u: goto L_00324DF8;
    case 94u: goto L_00324E00;
    case 95u: goto L_00324E10;
    case 96u: goto L_00324E2C;
    case 97u: goto L_00324E40;
    case 98u: goto L_00324E5C;
    case 99u: goto L_00324E6C;
    case 100u: goto L_00324E90;
    case 101u: goto L_00324EAC;
    case 102u: goto L_00324EDC;
    case 103u: goto L_00324EF0;
    case 104u: goto L_00324F48;
    case 105u: goto L_00324FA0;
    case 106u: goto L_00324FD4;
    case 107u: goto L_00324FEC;
    case 108u: goto L_00325020;
    case 109u: goto L_00325044;
    case 110u: goto L_00325088;
    case 111u: goto L_00325094;
    case 112u: goto L_0032509C;
    case 113u: goto L_003250A8;
    case 114u: goto L_003250B8;
    case 115u: goto L_003250CC;
    case 116u: goto L_003250EC;
    case 117u: goto L_00325188;
    case 118u: goto L_0032519C;
    case 119u: goto L_003251A8;
    case 120u: goto L_003251C0;
    case 121u: goto L_003251D0;
    case 122u: goto L_003251DC;
    case 123u: goto L_003251E8;
    case 124u: goto L_00325208;
    case 125u: goto L_00325220;
    case 126u: goto L_00325264;
    case 127u: goto L_00325270;
    case 128u: goto L_00325284;
    case 129u: goto L_003252A0;
    case 130u: goto L_003252D0;
    case 131u: goto L_00325338;
    case 132u: goto L_00325340;
    case 133u: goto L_00325350;
    case 134u: goto L_0032536C;
    case 135u: goto L_003253B0;
    case 136u: goto L_003253C8;
    case 137u: goto L_003253D0;
    case 138u: goto L_003253E0;
    case 139u: goto L_003253F4;
    case 140u: goto L_00325450;
    case 141u: goto L_00325490;
    case 142u: goto L_003254B0;
    case 143u: goto L_003254BC;
    case 144u: goto L_003254CC;
    case 145u: goto L_003254F0;
    case 146u: goto L_00325504;
    case 147u: goto L_00325540;
    case 148u: goto L_00325558;
    case 149u: goto L_003255E0;
    case 150u: goto L_003255FC;
    case 151u: goto L_0032560C;
    case 152u: goto L_00325630;
    case 153u: goto L_00325650;
    case 154u: goto L_003256C8;
    case 155u: goto L_003256D4;
    case 156u: goto L_003256EC;
    case 157u: goto L_00325710;
    case 158u: goto L_00325788;
    case 159u: goto L_00325794;
    case 160u: goto L_003257AC;
    case 161u: goto L_003257D0;
    case 162u: goto L_00325848;
    case 163u: goto L_00325854;
    case 164u: goto L_0032586C;
    case 165u: goto L_00325890;
    case 166u: goto L_003258EC;
    case 167u: goto L_003258F8;
    case 168u: goto L_00325904;
    case 169u: goto L_0032591C;
    case 170u: goto L_00325940;
    case 171u: goto L_003259B8;
    case 172u: goto L_003259C4;
    case 173u: goto L_003259DC;
    case 174u: goto L_00325A00;
    case 175u: goto L_00325A10;
    case 176u: goto L_00325A20;
    case 177u: goto L_00325A30;
    case 178u: goto L_00325A40;
    case 179u: goto L_00325A50;
    case 180u: goto L_00325A60;
    case 181u: goto L_00325A70;
    case 182u: goto L_00325A80;
    case 183u: goto L_00325AB0;
    case 184u: goto L_00325AD0;
    case 185u: goto L_00325AF0;
    case 186u: goto L_00325B14;
    case 187u: goto L_00325B2C;
    case 188u: goto L_00325B40;
    case 189u: goto L_00325B5C;
    case 190u: goto L_00325BBC;
    case 191u: goto L_00325BD8;
    case 192u: goto L_00325C00;
    case 193u: goto L_00325C24;
    case 194u: goto L_00325C64;
    case 195u: goto L_00325E08;
    case 196u: goto L_00325E2C;
    case 197u: goto L_00325E50;
    case 198u: goto L_00325E6C;
    case 199u: goto L_00325E74;
    case 200u: goto L_00325E88;
    case 201u: goto L_00325E90;
    case 202u: goto L_00325EA4;
    case 203u: goto L_00325EAC;
    case 204u: goto L_00325EC0;
    case 205u: goto L_00325EC8;
    case 206u: goto L_00325EDC;
    case 207u: goto L_00325EE4;
    case 208u: goto L_00325EF8;
    case 209u: goto L_00325F00;
    case 210u: goto L_00325F14;
    case 211u: goto L_00325F1C;
    case 212u: goto L_00325F50;
    case 213u: goto L_00325F70;
    case 214u: goto L_00325F84;
    case 215u: goto L_00325FA8;
    case 216u: goto L_00325FC0;
    case 217u: goto L_00326030;
    case 218u: goto L_00326058;
    case 219u: goto L_00326078;
    case 220u: goto L_0032609C;
    case 221u: goto L_003260C0;
    case 222u: goto L_00326120;
    case 223u: goto L_00326134;
    case 224u: goto L_00326160;
    case 225u: goto L_00326184;
    case 226u: goto L_003261A0;
    case 227u: goto L_003261D4;
    case 228u: goto L_003261E8;
    case 229u: goto L_003261FC;
    case 230u: goto L_00326220;
    case 231u: goto L_00326234;
    case 232u: goto L_00326248;
    case 233u: goto L_00326260;
    case 234u: goto L_00326270;
    case 235u: goto L_003262B0;
    case 236u: goto L_003262D4;
    case 237u: goto L_0032630C;
    case 238u: goto L_00326378;
    case 239u: goto L_00326394;
    case 240u: goto L_00326400;
    case 241u: goto L_00326414;
    case 242u: goto L_00326424;
    case 243u: goto L_00326430;
    case 244u: goto L_00326464;
    case 245u: goto L_00326480;
    case 246u: goto L_0032649C;
    case 247u: goto L_00326514;
    case 248u: goto L_00326524;
    case 249u: goto L_00326550;
    case 250u: goto L_00326568;
    case 251u: goto L_00326574;
    case 252u: goto L_00326590;
    case 253u: goto L_003265A4;
    case 254u: goto L_003265C4;
    case 255u: goto L_003265CC;
    case 256u: goto L_003265E0;
    case 257u: goto L_00326698;
    case 258u: goto L_003266B0;
    case 259u: goto L_003266C4;
    case 260u: goto L_003266E4;
    case 261u: goto L_0032675C;
    case 262u: goto L_00326770;
    case 263u: goto L_00326780;
    case 264u: goto L_0032678C;
    case 265u: goto L_003267A8;
    case 266u: goto L_003267BC;
    case 267u: goto L_003267F0;
    case 268u: goto L_00326804;
    case 269u: goto L_00326820;
    case 270u: goto L_00326840;
    case 271u: goto L_003268B0;
    case 272u: goto L_003268C0;
    case 273u: goto L_003268DC;
    case 274u: goto L_003268E8;
    case 275u: goto L_003268FC;
    case 276u: goto L_00326908;
    case 277u: goto L_0032694C;
    case 278u: goto L_0032696C;
    case 279u: goto L_00326998;
    case 280u: goto L_003269B8;
    case 281u: goto L_003269D0;
    case 282u: goto L_003269D8;
    case 283u: goto L_003269E0;
    case 284u: goto L_003269F0;
    case 285u: goto L_00326A18;
    case 286u: goto L_00326A38;
    case 287u: goto L_00326A4C;
    case 288u: goto L_00326A6C;
    case 289u: goto L_00326A80;
    case 290u: goto L_00326AA0;
    case 291u: goto L_00326AD0;
    case 292u: goto L_00326AEC;
    case 293u: goto L_00326B00;
    case 294u: goto L_00326B40;
    case 295u: goto L_00326B58;
    case 296u: goto L_00326B64;
    case 297u: goto L_00326B6C;
    case 298u: goto L_00326B80;
    case 299u: goto L_00326B90;
    case 300u: goto L_00326BB0;
    case 301u: goto L_00326BB8;
    case 302u: goto L_00326BC0;
    case 303u: goto L_00326BD0;
    case 304u: goto L_00326BF4;
    case 305u: goto L_00326C08;
    case 306u: goto L_00326C40;
    case 307u: goto L_00326C78;
    case 308u: goto L_00326D84;
    case 309u: goto L_00326D8C;
    case 310u: goto L_00326D98;
    case 311u: goto L_00326DA4;
    case 312u: goto L_00326DB4;
    case 313u: goto L_00326DD0;
    case 314u: goto L_00326DEC;
    case 315u: goto L_00326E1C;
    case 316u: goto L_00326E34;
    case 317u: goto L_00326E5C;
    case 318u: goto L_00326E90;
    case 319u: goto L_00326EA0;
    case 320u: goto L_00326EA8;
    case 321u: goto L_00326EC0;
    case 322u: goto L_00326ED4;
    case 323u: goto L_00326F10;
    case 324u: goto L_00326F2C;
    case 325u: goto L_00326F34;
    case 326u: goto L_00326F50;
    case 327u: goto L_00326F78;
    case 328u: goto L_00326FA4;
    case 329u: goto L_00326FC0;
    case 330u: goto L_00326FD8;
    case 331u: goto L_00327008;
    case 332u: goto L_00327028;
    case 333u: goto L_00327030;
    case 334u: goto L_00327040;
    case 335u: goto L_0032704C;
    case 336u: goto L_0032706C;
    case 337u: goto L_003270CC;
    case 338u: goto L_003270E8;
    case 339u: goto L_00327110;
    case 340u: goto L_00327124;
    case 341u: goto L_00327150;
    case 342u: goto L_00327170;
    case 343u: goto L_00327184;
    case 344u: goto L_003271E8;
    case 345u: goto L_00327230;
    case 346u: goto L_00327244;
    case 347u: goto L_0032724C;
    case 348u: goto L_00327264;
    case 349u: goto L_00327280;
    case 350u: goto L_00327298;
    case 351u: goto L_003272A0;
    case 352u: goto L_003272A8;
    case 353u: goto L_003272C0;
    case 354u: goto L_003272E0;
    case 355u: goto L_0032731C;
    case 356u: goto L_00327340;
    case 357u: goto L_00327354;
    case 358u: goto L_00327378;
    case 359u: goto L_003273A0;
    case 360u: goto L_003273B8;
    case 361u: goto L_003273F4;
    case 362u: goto L_00327440;
    case 363u: goto L_0032745C;
    case 364u: goto L_0032746C;
    case 365u: goto L_00327490;
    case 366u: goto L_003274A4;
    case 367u: goto L_003274E4;
    case 368u: goto L_00327500;
    case 369u: goto L_0032753C;
    case 370u: goto L_00327574;
    case 371u: goto L_00327598;
    case 372u: goto L_003275A8;
    case 373u: goto L_003275DC;
    case 374u: goto L_00327614;
    case 375u: goto L_00327630;
    case 376u: goto L_0032765C;
    case 377u: goto L_003276A0;
    case 378u: goto L_0032773C;
    case 379u: goto L_003277A4;
    case 380u: goto L_003277D8;
    case 381u: goto L_00327850;
    case 382u: goto L_00327860;
    case 383u: goto L_0032786C;
    case 384u: goto L_00327874;
    case 385u: goto L_00327890;
    case 386u: goto L_003278C0;
    case 387u: goto L_003278D0;
    case 388u: goto L_003278EC;
    case 389u: goto L_003278FC;
    case 390u: goto L_00327920;
    case 391u: goto L_00327974;
    case 392u: goto L_00327980;
    case 393u: goto L_00327994;
    case 394u: goto L_003279A0;
    case 395u: goto L_003279B4;
    case 396u: goto L_003279C0;
    case 397u: goto L_003279D4;
    case 398u: goto L_003279E0;
    case 399u: goto L_003279F4;
    case 400u: goto L_00327A00;
    case 401u: goto L_00327A18;
    case 402u: goto L_00327A24;
    case 403u: goto L_00327A38;
    case 404u: goto L_00327A78;
    case 405u: goto L_00327A88;
    case 406u: goto L_00327A90;
    case 407u: goto L_00327A98;
    case 408u: goto L_00327AA0;
    case 409u: goto L_00327AB0;
    case 410u: goto L_00327AC4;
    case 411u: goto L_00327AD0;
    case 412u: goto L_00327ADC;
    case 413u: goto L_00327AF4;
    case 414u: goto L_00327B10;
    case 415u: goto L_00327B8C;
    case 416u: goto L_00327BDC;
    case 417u: goto L_00327C0C;
    case 418u: goto L_00327C3C;
    case 419u: goto L_00327C78;
    case 420u: goto L_00327C88;
    case 421u: goto L_00327C98;
    case 422u: goto L_00327CA8;
    case 423u: goto L_00327CB8;
    case 424u: goto L_00327CC8;
    case 425u: goto L_00327CD8;
    case 426u: goto L_00327CE0;
    case 427u: goto L_00327D0C;
    case 428u: goto L_00327D3C;
    case 429u: goto L_00327D6C;
    case 430u: goto L_00327D9C;
    case 431u: goto L_00327E40;
    case 432u: goto L_00327E64;
    case 433u: goto L_00327E80;
    case 434u: goto L_00327E90;
    case 435u: goto L_00327EA0;
    case 436u: goto L_00327EB0;
    case 437u: goto L_00327EC0;
    case 438u: goto L_00327ED0;
    case 439u: goto L_00327EE0;
    case 440u: goto L_00327EF0;
    case 441u: goto L_00327F10;
    case 442u: goto L_00327F20;
    case 443u: goto L_00327F4C;
    case 444u: goto L_00327F6C;
    case 445u: goto L_00327F90;
    case 446u: goto L_00327FEC;
    case 447u: goto L_00327FF8;
    default: bad_entry(c, 0x00324000u); return;
    }
L_00324000:
    set32(c.r[5], 0u + 69u);
    c.budget -= 1;
L_00324004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324194; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00324024; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00324088; } }
L_00324024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032402Cu); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0032402Cu) [[unlikely]] return; }
L_0032402C:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0032404C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032405C; } }
L_0032404C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0032405C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00324088; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0032407C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00324080; } }
L_0032407C:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00324080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324088; } }
L_00324088:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[6], 0u + 10001u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324098u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00324098u) [[unlikely]] return; }
L_00324098:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003240ACu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x003240ACu) [[unlikely]] return; }
L_003240AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003240B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 385u, depth + 1u); else { c.pc = 0x003232E0u; return; } if (c.pc != 0x003240B8u) [[unlikely]] return; }
L_003240B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 576u)));
    c.budget -= 4;
    if (c.r[3].sd[0] <= 0) { st32((c.r[16].w[0] + 104u), 0u);  goto L_003240E0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003240DCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x003240DCu) [[unlikely]] return; }
L_003240DC:
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_003240E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 4;
L_003240F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00324120; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324100u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x00324100u) [[unlikely]] return; }
L_00324100:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_00324114; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324120; } }
L_00324114:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00324120:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 104u));  goto L_00324144; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324134u); set32(c.r[5], 0u + 10001u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00324134u) [[unlikely]] return; }
L_00324134:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_00324194; } }
L_00324144:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00324194; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 4;
L_0032416C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_00324194; } }
L_00324178:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324194u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x00324194u) [[unlikely]] return; }
L_00324194:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_00324198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_003241BC; }
    c.f[1] = 0u;
    c.budget -= 1;
L_003241BC:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_003241CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003241E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003241F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324224; } }
L_003241F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324200u); set32(c.r[4], c.r[4].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x00324200u) [[unlikely]] return; }
L_00324200:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_00324214; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032422C; } }
L_00324214:
    set32(c.r[2], ld32((c.r[2].w[0] + 584u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 63ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_0032422C; } }
L_00324224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032422Cu);  if (depth < kMaxDepth) unit_0063(c, 207u, depth + 1u); else { c.pc = 0x002AE0E0u; return; } if (c.pc != 0x0032422Cu) [[unlikely]] return; }
L_0032422C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00324240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003242C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 15056u);
    set32(c.r[2], c.r[2].w[0] - 15000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003242A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032429Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0032429Cu) [[unlikely]] return; }
L_0032429C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003242A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003242A8u) [[unlikely]] return; }
L_003242A8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003242C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003242C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003242C0u) [[unlikely]] return; }
L_003242C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003242C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003242E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032437C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14960u);
    set32(c.r[2], c.r[2].w[0] - 14904u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00324364; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21872u);
    set32(c.r[2], c.r[2].w[0] + 21928u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00324364; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324358u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00324358u) [[unlikely]] return; }
L_00324358:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324364u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00324364u) [[unlikely]] return; }
L_00324364:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00324380; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032437Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0032437Cu) [[unlikely]] return; }
L_0032437C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00324380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003243A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032443C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14864u);
    set32(c.r[2], c.r[2].w[0] - 14808u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00324424; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23216u);
    set32(c.r[2], c.r[2].w[0] + 23272u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00324424; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324418u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00324418u) [[unlikely]] return; }
L_00324418:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324424u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00324424u) [[unlikely]] return; }
L_00324424:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00324440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032443Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0032443Cu) [[unlikely]] return; }
L_0032443C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00324440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00324460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324474u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x00324474u) [[unlikely]] return; }
L_00324474:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003244A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032452C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14768u);
    set32(c.r[2], c.r[2].w[0] - 14712u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00324514; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003244FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x003244FCu) [[unlikely]] return; }
L_003244FC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324508u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00324508u) [[unlikely]] return; }
L_00324508:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324514u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00324514u) [[unlikely]] return; }
L_00324514:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00324530; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032452Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0032452Cu) [[unlikely]] return; }
L_0032452C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00324530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00324550:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003244A0u | kUnwind; return; } goto L_003244A0; }
L_00324560:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003230B0u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 370u, depth); }
L_00324570:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003243A0u | kUnwind; return; } goto L_003243A0; }
L_00324580:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003242E0u | kUnwind; return; } goto L_003242E0; }
L_00324590:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00324240u | kUnwind; return; } goto L_00324240; }
L_003245A0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003245D0u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003245D0u) [[unlikely]] return; }
L_003245D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003245F4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003245F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 62u, depth + 1u); else { c.pc = 0x003249C0u; return; } if (c.pc != 0x003245F0u) [[unlikely]] return; }
L_003245F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003245F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00324610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00324630; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00324778; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 192u);  goto L_0032463C; }
L_00324630:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324778; } }
L_0032463C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324648u); set32(c.r[5], c.r[5].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00324648u) [[unlikely]] return; }
L_00324648:
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324674u); st32((c.r[29].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x00324674u) [[unlikely]] return; }
L_00324674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032467Cu); set32(c.r[4], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0032467Cu) [[unlikely]] return; }
L_0032467C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], 0u + 360u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[29].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003246C4; } }
    set32(c.r[2], c.r[2].w[0] + 360u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_003246C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], 0u + 45u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 576u)));
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.r[1].d[0] = c.r[2].sd[0] < 38ll ? 1ull : 0ull;  goto L_00324760; }
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 7u);  goto L_00324708; }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0032475C; } }
L_00324708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00324744; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 2u);  goto L_00324748; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 3u);  goto L_00324748; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[4].w[0] - 3u);  goto L_0032474C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324748; } }
L_00324744:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00324748:
    set32(c.r[3], c.r[4].w[0] - 3u);
    c.budget -= 1;
L_0032474C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 23u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0032475C:
    c.r[1].d[0] = c.r[2].sd[0] < 38ll ? 1ull : 0ull;
    c.budget -= 1;
L_00324760:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032476C; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_0032476C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00324778; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00324778:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00324790:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20648u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0]));  c.pc = t; return; }
L_003247B0:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20652u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0]));  c.pc = t; return; }
L_003247D0:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20656u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::cvt_s_w(c.f[0]);  c.pc = t; return; }
L_00324800:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032482C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032489C; } }
L_0032482C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324834u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00324834u) [[unlikely]] return; }
L_00324834:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00324854; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00324864; } }
L_00324854:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00324864:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));  goto L_00324874; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032489C; } }
L_00324874:
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0032488C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032489C; } }
L_0032488C:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0032489C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00324964; }
    set32(c.r[16], ld32((c.r[18].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003248B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x003248B4u) [[unlikely]] return; }
L_003248B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003248C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00324938; } }
L_003248C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003248D0u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003248D0u) [[unlikely]] return; }
L_003248D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003248F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00324900; } }
L_003248F0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00324900:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));  goto L_00324910; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00324938; } }
L_00324910:
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00324928; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00324938; } }
L_00324928:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00324938:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 40000ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324948u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00324948u) [[unlikely]] return; }
L_00324948:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324960; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324960u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00324960u) [[unlikely]] return; }
L_00324960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00324964:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00324980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003249A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003249A4u);  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x003249A4u) [[unlikely]] return; }
L_003249A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003249A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003249B0u); c.r[5].d[0] = 0ull | 40000ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x003249B0u) [[unlikely]] return; }
L_003249B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003249C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003249D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x003249D4u) [[unlikely]] return; }
L_003249D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 14240u);
    set32(c.r[3], c.r[3].w[0] - 14184u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1424u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324A10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
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
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00324A54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00324D00; } }
L_00324A54:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[20].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00324BA4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00324BA0; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00324AC8; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00324AC4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00324AC4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00324AC4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00324AC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull | 40001ull;  if (t) { goto L_00324B90; } }
L_00324AC4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00324AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324AD0u); c.r[5].d[0] = 0ull | 40001ull;  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00324AD0u) [[unlikely]] return; }
L_00324AD0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 21u);  goto L_00324BB0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00324AF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00324B58; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00324AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324AF8u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00324AF8u) [[unlikely]] return; }
L_00324AF8:
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00324B1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00324B2C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00324B1C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00324B2C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00324B58; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00324B4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00324B4C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_00324B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324B58; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00324B58:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 40001ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324B68u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00324B68u) [[unlikely]] return; }
L_00324B68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324BAC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324B84u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00324B84u) [[unlikely]] return; }
L_00324B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324BAC; } }
    c.r[5].d[0] = 0ull | 40001ull;
    c.budget -= 1;
L_00324B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324B98u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00324B98u) [[unlikely]] return; }
L_00324B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324BAC; } }
L_00324BA0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00324BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324BACu); c.r[5].d[0] = 0ull | 40001ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00324BACu) [[unlikely]] return; }
L_00324BAC:
    set32(c.r[2], 0u + 21u);
    c.budget -= 1;
L_00324BB0:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 120u);  goto L_00324CCC; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00324C8C; }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 148u);  goto L_00324C54; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 96u);  goto L_00324BE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00324D00; } }
    set32(c.r[4], 0u + 96u);
    c.budget -= 1;
L_00324BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324BF0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00324BF0u) [[unlikely]] return; }
L_00324BF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00324C48; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 60u, depth + 1u); else { c.pc = 0x002789B0u; return; } if (c.pc != 0x00324C10u) [[unlikely]] return; }
L_00324C10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14000u);
    set32(c.r[2], c.r[2].w[0] - 13944u);
    c.budget -= 4;
L_00324C20:
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C3Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00324C3Cu) [[unlikely]] return; }
L_00324C3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
L_00324C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00324D00; } }
    set32(c.r[4], 0u + 148u);
    c.budget -= 1;
L_00324C54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C5Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00324C5Cu) [[unlikely]] return; }
L_00324C5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00324D04; }
    set32(c.r[9], ld32((c.r[20].w[0] + 1424u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C80u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 133u, depth + 1u); else { c.pc = 0x00325350u; return; } if (c.pc != 0x00324C80u) [[unlikely]] return; }
L_00324C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324D00; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00324C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C94u);  if (depth < kMaxDepth) unit_0081(c, 103u, depth + 1u); else { c.pc = 0x00324EF0u; return; } if (c.pc != 0x00324C94u) [[unlikely]] return; }
L_00324C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C9Cu); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00324C9Cu) [[unlikely]] return; }
L_00324C9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324D00; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324CC0u); set32(c.r[9], c.r[20].w[0] + 1424u);  if (depth < kMaxDepth) unit_0081(c, 108u, depth + 1u); else { c.pc = 0x00325020u; return; } if (c.pc != 0x00324CC0u) [[unlikely]] return; }
L_00324CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324D00; } }
    set32(c.r[4], 0u + 120u);
    c.budget -= 1;
L_00324CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324CD4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00324CD4u) [[unlikely]] return; }
L_00324CD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324D00; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324CF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 145u, depth + 1u); else { c.pc = 0x003254F0u; return; } if (c.pc != 0x00324CF4u) [[unlikely]] return; }
L_00324CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324D00; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00324D00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00324D04:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00324D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull | 40001ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324D38u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00324D38u) [[unlikely]] return; }
L_00324D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324D40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 85u, depth + 1u); else { c.pc = 0x0027CCC0u; return; } if (c.pc != 0x00324D40u) [[unlikely]] return; }
L_00324D40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324D50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A6280u | kUnwind; return; } [[clang::musttail]] return unit_0021(c, 177u, depth); }
L_00324D60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00324D94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324E64; } }
L_00324D94:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 208u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00324DA4u) [[unlikely]] return; }
L_00324DA4:
    set32(c.r[3], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 1320u)));
    c.f[1] = ld32((c.r[3].w[0] + 1268u));
    c.f[0] = ld32((c.r[2].w[0] + 196u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 196u), c.f[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 1320u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00324DC8u) [[unlikely]] return; }
L_00324DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DD0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00324DD0u) [[unlikely]] return; }
L_00324DD0:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DDCu); set32(c.r[4], c.r[20].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00324DDCu) [[unlikely]] return; }
L_00324DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DE4u); set32(c.r[4], ld32((c.r[20].w[0] + 1424u)));  if (depth < kMaxDepth) unit_0081(c, 52u, depth + 1u); else { c.pc = 0x003247D0u; return; } if (c.pc != 0x00324DE4u) [[unlikely]] return; }
L_00324DE4:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DF0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00324DF0u) [[unlikely]] return; }
L_00324DF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00324DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E00u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00324E00u) [[unlikely]] return; }
L_00324E00:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E10u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00324E10u) [[unlikely]] return; }
L_00324E10:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[16], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E2Cu); set32(c.r[6], c.r[2].w[0] + 1264u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00324E2Cu) [[unlikely]] return; }
L_00324E2C:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E40u); set32(c.r[4], c.r[2].w[0] + 1264u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x00324E40u) [[unlikely]] return; }
L_00324E40:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00324DF8u | kUnwind; return; } goto L_00324DF8; } }
    set32(c.r[4], c.r[20].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E5Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 120u, depth + 1u); else { c.pc = 0x002790D0u; return; } if (c.pc != 0x00324E5Cu) [[unlikely]] return; }
L_00324E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00324E70; } }
L_00324E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E6Cu);  if (depth < kMaxDepth) unit_006B(c, 152u, depth + 1u); else { c.pc = 0x002CDEC0u; return; } if (c.pc != 0x00324E6Cu) [[unlikely]] return; }
L_00324E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00324E70:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00324E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324EACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x00324EACu) [[unlikely]] return; }
L_00324EAC:
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 140u)));  goto L_00324EC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00324EE0; } }
L_00324EC0:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[17].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00324EDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324EDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 103u, depth + 1u); else { c.pc = 0x00324EF0u; return; } if (c.pc != 0x00324EDCu) [[unlikely]] return; }
L_00324EDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00324EE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00324EF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 576u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00324F2C; } }
    set32(c.r[2], c.r[2].w[0] - 72u);
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_00324F2C; }
    set32(c.r[16], 0u + 5u);
    c.budget -= 1;
L_00324F2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00324F40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00324F98; } }
L_00324F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F48u); set32(c.r[5], 0u + 41u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00324F48u) [[unlikely]] return; }
L_00324F48:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00324F68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00324F78; } }
L_00324F68:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00324F78:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00324F98; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00324F90; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00324F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324F98; } }
L_00324F98:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00324FA0:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[4], c.r[17].w[0] + 80u);  goto L_00324FE0; }
    c.r[1].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00324FDC; } }
    set32(c.r[2], c.r[16].w[0] + 2u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00324FDC; } }
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324FD4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0018B0B0u; return; } if (c.pc != 0x00324FD4u) [[unlikely]] return; }
L_00324FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00324FF0; } }
L_00324FDC:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 1;
L_00324FE0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324FECu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_001A(c, 268u, depth + 1u); else { c.pc = 0x0018B0E0u; return; } if (c.pc != 0x00324FECu) [[unlikely]] return; }
L_00324FEC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00324FF0:
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00324FA0u | kUnwind; return; } goto L_00324FA0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00325020:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325044u); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 148u, depth + 1u); else { c.pc = 0x00275380u; return; } if (c.pc != 0x00325044u) [[unlikely]] return; }
L_00325044:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14336u);
    set32(c.r[2], c.r[2].w[0] - 14280u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 120u), 0u);
    st32((c.r[17].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 112u), 0u);
    st32((c.r[17].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 14;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 3u);  goto L_00325144; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325088u); set32(c.r[5], ld32((c.r[2].w[0] + 3028u)));  if (depth < kMaxDepth) unit_0081(c, 46u, depth + 1u); else { c.pc = 0x00324610u; return; } if (c.pc != 0x00325088u) [[unlikely]] return; }
L_00325088:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325094u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00325094u) [[unlikely]] return; }
L_00325094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032509Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0081(c, 52u, depth + 1u); else { c.pc = 0x003247D0u; return; } if (c.pc != 0x0032509Cu) [[unlikely]] return; }
L_0032509C:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003250A8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003250A8u) [[unlikely]] return; }
L_003250A8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003250B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x003250B8u) [[unlikely]] return; }
L_003250B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003250CCu); set32(c.r[5], c.r[2].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003250CCu) [[unlikely]] return; }
L_003250CC:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003250E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032513C; } }
L_003250E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003250ECu); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003250ECu) [[unlikely]] return; }
L_003250EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0032510C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032511C; } }
L_0032510C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0032511C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0032513C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[16], ld32((c.r[3].w[0] + 4u)));  goto L_00325134; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00325134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032513C; } }
L_0032513C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (t) { goto L_0032525C; } }
L_00325144:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003252B0; }
    set32(c.r[4], ld32((c.r[4].w[0] + 1320u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 240u)));
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 248u)));
    st32((c.r[17].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 252u)));
    st32((c.r[17].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325188u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00325188u) [[unlikely]] return; }
L_00325188:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[19], c.r[16].w[0] + 736u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032519Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 345u, depth + 1u); else { c.pc = 0x002D3A70u; return; } if (c.pc != 0x0032519Cu) [[unlikely]] return; }
L_0032519C:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003251A8u); set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x003251A8u) [[unlikely]] return; }
L_003251A8:
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003251C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003251C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x003251C0u) [[unlikely]] return; }
L_003251C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[16].w[0] + 352u);  if (t) { goto L_003251D4; } }
L_003251C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003251D0u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x003251D0u) [[unlikely]] return; }
L_003251D0:
    set32(c.r[5], c.r[18].w[0] + 352u);
    c.budget -= 1;
L_003251D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003251DCu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003251DCu) [[unlikely]] return; }
L_003251DC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003251E8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003251E8u) [[unlikely]] return; }
L_003251E8:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00325200; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00325258; } }
L_00325200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325208u); set32(c.r[5], 0u + 43u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00325208u) [[unlikely]] return; }
L_00325208:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00325228; }
L_00325220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00325238; } }
L_00325228:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00325238:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00325258; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[16], ld32((c.r[3].w[0] + 4u)));  goto L_00325250; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00325250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325258; } }
L_00325258:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0032525C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325264u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00325264u) [[unlikely]] return; }
L_00325264:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325270u); set32(c.r[5], 0u + 10900u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00325270u) [[unlikely]] return; }
L_00325270:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325284u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00325284u) [[unlikely]] return; }
L_00325284:
    set32(c.r[3], ld32((c.r[2].w[0] + 308u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003252A0u); st32((c.r[2].w[0] + 308u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003252A0u) [[unlikely]] return; }
L_003252A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 4;
L_003252B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003252D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00325338; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 1320u)));
    st32((c.r[4].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    st32((c.r[4].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[4].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    st32((c.r[4].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325338u); set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00325338u) [[unlikely]] return; }
L_00325338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325340u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 162u, depth + 1u); else { c.pc = 0x002755C0u; return; } if (c.pc != 0x00325340u) [[unlikely]] return; }
L_00325340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032536Cu); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x0032536Cu) [[unlikely]] return; }
L_0032536C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 14432u);
    set32(c.r[3], c.r[3].w[0] - 14376u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 136u), 0u);
    st32((c.r[17].w[0] + 140u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 144u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003253B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003253C8u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_0081(c, 59u, depth + 1u); else { c.pc = 0x00324980u; return; } if (c.pc != 0x003253C8u) [[unlikely]] return; }
L_003253C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003253D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x003253D0u) [[unlikely]] return; }
L_003253D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003253E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003253F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 77u, depth + 1u); else { c.pc = 0x0026CAC0u; return; } if (c.pc != 0x003253F4u) [[unlikely]] return; }
L_003253F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00325484; }
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 100u));  goto L_00325428; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00325480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325480; } }
L_00325428:
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00325480; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 2916u);  if (t) { goto L_00325468; } }
L_00325450:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 6;
L_00325468:
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00325450u | kUnwind; return; } goto L_00325450; }
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 3;
L_00325480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00325484:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 44u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003254D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003254B0u); set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_0081(c, 50u, depth + 1u); else { c.pc = 0x00324790u; return; } if (c.pc != 0x003254B0u) [[unlikely]] return; }
L_003254B0:
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003254BCu); set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_0081(c, 51u, depth + 1u); else { c.pc = 0x003247B0u; return; } if (c.pc != 0x003254BCu) [[unlikely]] return; }
L_003254BC:
    st32((c.r[16].w[0] + 144u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003254CCu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0081(c, 53u, depth + 1u); else { c.pc = 0x00324800u; return; } if (c.pc != 0x003254CCu) [[unlikely]] return; }
L_003254CC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 2;
L_003254D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003254F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325504u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x00325504u) [[unlikely]] return; }
L_00325504:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 14528u);
    set32(c.r[3], c.r[3].w[0] - 14472u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325558u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 312u, depth + 1u); else { c.pc = 0x00272910u; return; } if (c.pc != 0x00325558u) [[unlikely]] return; }
L_00325558:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00325640; }
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0032563C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] & 1ull;  goto L_0032558C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032563C; } }
L_0032558C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032563C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 580u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 28u)));  goto L_003255B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003255BC; } }
L_003255B8:
    set32(c.r[3], c.r[2].w[0] + 48u);
    c.budget -= 1;
L_003255BC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003255D4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_003255D4; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003255D4:
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003255E0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x003255E0u) [[unlikely]] return; }
L_003255E0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003255FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x003255FCu) [[unlikely]] return; }
L_003255FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032560Cu); set32(c.r[5], c.r[5].w[0] + 13248u);  if (depth < kMaxDepth) unit_0059(c, 52u, depth + 1u); else { c.pc = 0x002845E0u; return; } if (c.pc != 0x0032560Cu) [[unlikely]] return; }
L_0032560C:
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    c.f[12] = 0u;
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325630u); st32((c.r[17].w[0] + 308u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x00325630u) [[unlikely]] return; }
L_00325630:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 3;
L_0032563C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00325640:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00325650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003256EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14528u);
    set32(c.r[2], c.r[2].w[0] - 14472u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003256D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003256D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003256C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003256C8u) [[unlikely]] return; }
L_003256C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003256D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003256D4u) [[unlikely]] return; }
L_003256D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003256F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003256ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003256ECu) [[unlikely]] return; }
L_003256EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003256F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00325710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003257AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14432u);
    set32(c.r[2], c.r[2].w[0] - 14376u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00325794; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00325794; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325788u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00325788u) [[unlikely]] return; }
L_00325788:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325794u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00325794u) [[unlikely]] return; }
L_00325794:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003257B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003257ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003257ACu) [[unlikely]] return; }
L_003257AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003257B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003257D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032586C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14336u);
    set32(c.r[2], c.r[2].w[0] - 14280u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00325854; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22832u);
    set32(c.r[2], c.r[2].w[0] + 22888u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00325854; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325848u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00325848u) [[unlikely]] return; }
L_00325848:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325854u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00325854u) [[unlikely]] return; }
L_00325854:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00325870; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032586Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0032586Cu) [[unlikely]] return; }
L_0032586C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00325870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00325890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032591C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14240u);
    set32(c.r[2], c.r[2].w[0] - 14184u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00325904; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003258ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x003258ECu) [[unlikely]] return; }
L_003258EC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003258F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003258F8u) [[unlikely]] return; }
L_003258F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325904u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00325904u) [[unlikely]] return; }
L_00325904:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00325920; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032591Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0032591Cu) [[unlikely]] return; }
L_0032591C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00325920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00325940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003259DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14000u);
    set32(c.r[2], c.r[2].w[0] - 13944u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003259C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23216u);
    set32(c.r[2], c.r[2].w[0] + 23272u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003259C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003259B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003259B8u) [[unlikely]] return; }
L_003259B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003259C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003259C4u) [[unlikely]] return; }
L_003259C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003259E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003259DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003259DCu) [[unlikely]] return; }
L_003259DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003259E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00325A00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00325940u | kUnwind; return; } goto L_00325940; }
L_00325A10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00325890u | kUnwind; return; } goto L_00325890; }
L_00325A20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00324E90u | kUnwind; return; } goto L_00324E90; }
L_00325A30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00324D60u | kUnwind; return; } goto L_00324D60; }
L_00325A40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003257D0u | kUnwind; return; } goto L_003257D0; }
L_00325A50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00325710u | kUnwind; return; } goto L_00325710; }
L_00325A60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00325490u | kUnwind; return; } goto L_00325490; }
L_00325A70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00325650u | kUnwind; return; } goto L_00325650; }
L_00325A80:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325AB0u); set32(c.r[4], 0u + 1488u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00325AB0u) [[unlikely]] return; }
L_00325AB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00325AD4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325AD0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 252u, depth + 1u); else { c.pc = 0x00326590u; return; } if (c.pc != 0x00325AD0u) [[unlikely]] return; }
L_00325AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00325AD4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00325AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 5000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325B14u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00325B14u) [[unlikely]] return; }
L_00325B14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00325BE8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325B2Cu); set32(c.r[5], 0u + 11000u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00325B2Cu) [[unlikely]] return; }
L_00325B2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00325BE4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325B40u); set32(c.r[5], 0u + 11000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00325B40u) [[unlikely]] return; }
L_00325B40:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00325B54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00325BAC; } }
L_00325B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325B5Cu); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00325B5Cu) [[unlikely]] return; }
L_00325B5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00325B7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00325B8C; } }
L_00325B7C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00325B8C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00325BAC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00325BA4; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00325BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325BAC; } }
L_00325BAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 11000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325BBCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00325BBCu) [[unlikely]] return; }
L_00325BBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00325BE4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325BD8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00325BD8u) [[unlikely]] return; }
L_00325BD8:
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 3;
L_00325BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00325BE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00325C00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325C24u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0081(c, 216u, depth + 1u); else { c.pc = 0x00325FC0u; return; } if (c.pc != 0x00325C24u) [[unlikely]] return; }
L_00325C24:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00325E2C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 164u)));  goto L_00325C44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00325E30; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 1;
L_00325C44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[18].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325C64u); set32(c.r[4], ld32((c.r[18].w[0] + 420u)));  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00325C64u) [[unlikely]] return; }
L_00325C64:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_00325E2C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[6], 0u + 5004u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[5], 0u + 5005u);  goto L_00325D08; }
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[3], 0u + 5006u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u + 4u);  goto L_00325D94; }
    set32(c.r[3], 0u + 5003u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u + 3u);  goto L_00325D94; }
    set32(c.r[3], 0u + 5002u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u + 2u);  goto L_00325D94; }
    set32(c.r[3], 0u + 5005u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u + 1u);  goto L_00325D94; }
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[6].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_00325D94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325CFC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325D94; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325D94; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325D94; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325D94; } }
    set32(c.r[17], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325D94; } }
L_00325CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325E2C; } }
    set32(c.r[5], 0u + 5005u);
    c.budget -= 1;
L_00325D08:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00325D94; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[3], 0u + 5006u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u + 4u);  goto L_00325D94; }
    set32(c.r[3], 0u + 5002u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u + 3u);  goto L_00325D94; }
    set32(c.r[3], 0u + 5003u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u + 2u);  goto L_00325D94; }
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[17], 0u + 1u);  goto L_00325D94; }
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_00325D94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325D8C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325D94; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325D94; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325D94; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325D94; } }
    set32(c.r[17], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325D94; } }
L_00325D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325E2C; } }
L_00325D94:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 20192u);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], 0u + 5005u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 14;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 420u)));  goto L_00325E00; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 5002u);
    c.f[1] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 80u), c.f[1]);
    set32(c.r[3], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00325DFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 5;
L_00325DFC:
    set32(c.r[4], ld32((c.r[18].w[0] + 420u)));
    c.budget -= 1;
L_00325E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E08u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x00325E08u) [[unlikely]] return; }
L_00325E08:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E2Cu); st32((c.r[18].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x00325E2Cu) [[unlikely]] return; }
L_00325E2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00325E30:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00325E50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 5000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E6Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00325E6Cu) [[unlikely]] return; }
L_00325E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 212u, depth + 1u); else { c.pc = 0x00325F50u; return; } if (c.pc != 0x00325E74u) [[unlikely]] return; }
L_00325E74:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5001u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E88u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00325E88u) [[unlikely]] return; }
L_00325E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 212u, depth + 1u); else { c.pc = 0x00325F50u; return; } if (c.pc != 0x00325E90u) [[unlikely]] return; }
L_00325E90:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5004u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EA4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00325EA4u) [[unlikely]] return; }
L_00325EA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 212u, depth + 1u); else { c.pc = 0x00325F50u; return; } if (c.pc != 0x00325EACu) [[unlikely]] return; }
L_00325EAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5005u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EC0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00325EC0u) [[unlikely]] return; }
L_00325EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 212u, depth + 1u); else { c.pc = 0x00325F50u; return; } if (c.pc != 0x00325EC8u) [[unlikely]] return; }
L_00325EC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5002u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EDCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00325EDCu) [[unlikely]] return; }
L_00325EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 212u, depth + 1u); else { c.pc = 0x00325F50u; return; } if (c.pc != 0x00325EE4u) [[unlikely]] return; }
L_00325EE4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5003u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EF8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00325EF8u) [[unlikely]] return; }
L_00325EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 212u, depth + 1u); else { c.pc = 0x00325F50u; return; } if (c.pc != 0x00325F00u) [[unlikely]] return; }
L_00325F00:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5006u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F14u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00325F14u) [[unlikely]] return; }
L_00325F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 212u, depth + 1u); else { c.pc = 0x00325F50u; return; } if (c.pc != 0x00325F1Cu) [[unlikely]] return; }
L_00325F1C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00325F3C; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00325F38; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 576u), 0u);
    c.budget -= 2;
L_00325F38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00325F3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00325F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00325FAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F70u);  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002D5D30u; return; } if (c.pc != 0x00325F70u) [[unlikely]] return; }
L_00325F70:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00325FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F84u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00325F84u) [[unlikely]] return; }
L_00325F84:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325FA8u); st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x00325FA8u) [[unlikely]] return; }
L_00325FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00325FAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325FC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[2], 0u + 5004u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0] + 576u)));  if (t) { goto L_00325FF4; } }
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_00326020; }
    c.r[1].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032601C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - 4u);  if (t) { goto L_00326020; } }
L_00325FF4:
    set32(c.r[2], 0u + 5005u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032601C; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0032601C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032601C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_00326020; } }
L_0032601C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00326020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00326030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 5000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326058u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00326058u) [[unlikely]] return; }
L_00326058:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00326144; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[2].w[0] + 576u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326078u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00326078u) [[unlikely]] return; }
L_00326078:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_00326140; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00326140; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032609Cu); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0032609Cu) [[unlikely]] return; }
L_0032609C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00326140; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003260B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00326110; } }
L_003260B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003260C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003260C0u) [[unlikely]] return; }
L_003260C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003260E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003260F0; } }
L_003260E0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003260F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00326110; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00326108; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00326108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326110; } }
L_00326110:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 20000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326120u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00326120u) [[unlikely]] return; }
L_00326120:
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[6], 0u - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326134u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00326134u) [[unlikely]] return; }
L_00326134:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 3;
L_00326140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00326144:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00326160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 5000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326184u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00326184u) [[unlikely]] return; }
L_00326184:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0032624C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 576u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003261A0u); set32(c.r[5], 0u + 11000u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x003261A0u) [[unlikely]] return; }
L_003261A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00326248; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_00326248; } }
    c.r[1].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;  goto L_00326204; }
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003261D4u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003261D4u) [[unlikely]] return; }
L_003261D4:
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003261E8u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003261E8u) [[unlikely]] return; }
L_003261E8:
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003261FCu); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003261FCu) [[unlikely]] return; }
L_003261FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326248; } }
L_00326204:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00326248; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00326220u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00326220u) [[unlikely]] return; }
L_00326220:
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00326234u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00326234u) [[unlikely]] return; }
L_00326234:
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00326248u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00326248u) [[unlikely]] return; }
L_00326248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0032624C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00326260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326270u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 216u, depth + 1u); else { c.pc = 0x00325FC0u; return; } if (c.pc != 0x00326270u) [[unlikely]] return; }
L_00326270:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[4], ld32((c.r[5].w[0] + 148u)));  goto L_00326280; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00326298; } }
L_00326280:
    set32(c.r[3], 0u + 5005u);
    set32(c.r[5], c.r[2].w[0] + 1u);
    set32(c.r[2], 0u + 5461u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_00326298; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_00326298:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003262B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003262D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0081(c, 216u, depth + 1u); else { c.pc = 0x00325FC0u; return; } if (c.pc != 0x003262D4u) [[unlikely]] return; }
L_003262D4:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003262E4; } }
    set32(c.r[18], 0u + 2u);
    c.budget -= 1;
L_003262E4:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { set32(c.r[2], ld32((c.r[19].w[0] + 580u)));  goto L_003262F4; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 2;
L_003262F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00326304; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032633C; } }
L_00326304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032630Cu); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0032630Cu) [[unlikely]] return; }
L_0032630C:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0032632C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032633C; } }
L_0032632C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0032633C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00326358; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00326368; } }
L_00326358:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00326368:
    set32(c.r[17], ld32((c.r[19].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326378u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x00326378u) [[unlikely]] return; }
L_00326378:
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0032638C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003263F0; } }
L_0032638C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326394u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00326394u) [[unlikely]] return; }
L_00326394:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003263B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003263C4; } }
L_003263B4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003263C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003263F0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003263E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003263E8; } }
L_003263E4:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_003263E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003263F0; } }
L_003263F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 22002u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326400u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00326400u) [[unlikely]] return; }
L_00326400:
    set32(c.r[20], ld32((c.r[19].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0032641C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326414u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00326414u) [[unlikely]] return; }
L_00326414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[20].w[0] + 352u);  if (t) { goto L_00326428; } }
L_0032641C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326424u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00326424u) [[unlikely]] return; }
L_00326424:
    set32(c.r[5], c.r[19].w[0] + 352u);
    c.budget -= 1;
L_00326428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326430u); set32(c.r[4], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00326430u) [[unlikely]] return; }
L_00326430:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    set32(c.r[2], 0u + 5004u);
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0] + 36u)));  goto L_0032646C; }
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], c.r[18].w[0] + 500u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00326464u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00326464u) [[unlikely]] return; }
L_00326464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 580u)));  if (t) { goto L_00326484; } }
L_0032646C:
    set32(c.r[5], c.r[18].w[0] + 503u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00326480u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00326480u) [[unlikely]] return; }
L_00326480:
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 1;
L_00326484:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00326494; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00326504; } }
L_00326494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032649Cu); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0032649Cu) [[unlikely]] return; }
L_0032649C:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003264BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003264CC; } }
L_003264BC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003264CC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));  goto L_003264DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00326504; } }
L_003264DC:
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003264F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00326504; } }
L_003264F4:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00326504:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 22001u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326514u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00326514u) [[unlikely]] return; }
L_00326514:
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326524u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00326524u) [[unlikely]] return; }
L_00326524:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00326550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 22001u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326568u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00326568u) [[unlikely]] return; }
L_00326568:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326574u); set32(c.r[5], 0u + 22002u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00326574u) [[unlikely]] return; }
L_00326574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003265A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x003265A4u) [[unlikely]] return; }
L_003265A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 13472u);
    set32(c.r[2], c.r[2].w[0] - 13416u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1424u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003265C4u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003265C4u) [[unlikely]] return; }
L_003265C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003265CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 95u, depth + 1u); else { c.pc = 0x0028D070u; return; } if (c.pc != 0x003265CCu) [[unlikely]] return; }
L_003265CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003265E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00326628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00326AAC; } }
L_00326628:
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003268F4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003268F0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00326690; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0032668C; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0032668C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0032668C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 21000u);  if (t) { goto L_003268D4; } }
L_0032668C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00326690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326698u);  if (depth < kMaxDepth) unit_0081(c, 216u, depth + 1u); else { c.pc = 0x00325FC0u; return; } if (c.pc != 0x00326698u) [[unlikely]] return; }
L_00326698:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003267A0; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003266B0u); set32(c.r[5], 0u + 21000u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x003266B0u) [[unlikely]] return; }
L_003266B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 21u);  goto L_0032690C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003266C4u); set32(c.r[5], 0u + 21001u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x003266C4u) [[unlikely]] return; }
L_003266C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003266DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0032674C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003266DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003266E4u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003266E4u) [[unlikely]] return; }
L_003266E4:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00326708; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00326718; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00326708:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00326718:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0032674C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0032673C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00326740; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_0032673C:
    set32(c.r[5], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_00326740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032674C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032674C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 21000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032675Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0032675Cu) [[unlikely]] return; }
L_0032675C:
    set32(c.r[21], ld32((c.r[19].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00326778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326770u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00326770u) [[unlikely]] return; }
L_00326770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[21].w[0] + 352u);  if (t) { goto L_00326784; } }
L_00326778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326780u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00326780u) [[unlikely]] return; }
L_00326780:
    set32(c.r[5], c.r[19].w[0] + 352u);
    c.budget -= 1;
L_00326784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032678Cu); set32(c.r[4], c.r[20].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0032678Cu) [[unlikely]] return; }
L_0032678C:
    set32(c.r[2], ld32((c.r[20].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 308u), c.r[2].w[0]);  if (t) { goto L_00326908; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003267A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003267A8u); set32(c.r[5], 0u + 21001u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x003267A8u) [[unlikely]] return; }
L_003267A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00326908; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003267BCu); set32(c.r[5], 0u + 21000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x003267BCu) [[unlikely]] return; }
L_003267BC:
    set32(c.r[2], c.r[20].w[0] << 4);
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[5], c.r[2].w[0] - c.r[20].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], 0u + 5004u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[20], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_003267DC; } }
    set32(c.r[20], 0u - c.r[20].w[0]);
    c.budget -= 1;
L_003267DC:
    set32(c.r[21], ld32((c.r[19].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003267FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003267F0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x003267F0u) [[unlikely]] return; }
L_003267F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[21].w[0] + 352u);  if (t) { goto L_00326808; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003267FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326804u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00326804u) [[unlikely]] return; }
L_00326804:
    set32(c.r[5], c.r[19].w[0] + 352u);
    c.budget -= 1;
L_00326808:
    set32(c.r[3], c.r[20].w[0] << 16);
    set32(c.r[2], 0u + 360u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326820u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00326820u) [[unlikely]] return; }
L_00326820:
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00326838; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003268A0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00326838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326840u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00326840u) [[unlikely]] return; }
L_00326840:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00326864; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00326874; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00326864:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00326874:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003268A0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00326894; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00326894; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_00326894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003268A0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003268A0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 21001u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003268B0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x003268B0u) [[unlikely]] return; }
L_003268B0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003268C0u); set32(c.r[4], c.r[20].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003268C0u) [[unlikely]] return; }
L_003268C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 308u), c.r[2].w[0]);  if (t) { goto L_00326908; } }
    set32(c.r[5], 0u + 21000u);
    c.budget -= 1;
L_003268D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003268DCu);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x003268DCu) [[unlikely]] return; }
L_003268DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003268E8u); set32(c.r[5], 0u + 21001u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x003268E8u) [[unlikely]] return; }
L_003268E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326908; } }
L_003268F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003268F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003268FCu); set32(c.r[5], 0u + 21000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x003268FCu) [[unlikely]] return; }
L_003268FC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326908u); set32(c.r[5], 0u + 21001u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00326908u) [[unlikely]] return; }
L_00326908:
    set32(c.r[2], 0u + 21u);
    c.budget -= 1;
L_0032690C:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 124u);  goto L_00326A78; }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 140u);  goto L_00326A44; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[19].w[0] + 1424u);  goto L_003269B0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 96u);  goto L_00326944; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00326AAC; } }
    set32(c.r[4], 0u + 96u);
    c.budget -= 1;
L_00326944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032694Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0032694Cu) [[unlikely]] return; }
L_0032694C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003269A4; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032696Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 60u, depth + 1u); else { c.pc = 0x002789B0u; return; } if (c.pc != 0x0032696Cu) [[unlikely]] return; }
L_0032696C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 13232u);
    set32(c.r[2], c.r[2].w[0] - 13176u);
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 2u);
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326998u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00326998u) [[unlikely]] return; }
L_00326998:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[20].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
L_003269A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00326AAC; } }
    set32(c.r[4], c.r[19].w[0] + 1424u);
    c.budget -= 1;
L_003269B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003269B8u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003269B8u) [[unlikely]] return; }
L_003269B8:
    set32(c.r[20], ld32((c.r[19].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], 0u + 116u);  goto L_00326A10; }
    set32(c.r[4], c.r[19].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003269D0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003269D0u) [[unlikely]] return; }
L_003269D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003269D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003269D8u) [[unlikely]] return; }
L_003269D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003269E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 233u, depth + 1u); else { c.pc = 0x00326260u; return; } if (c.pc != 0x003269E0u) [[unlikely]] return; }
L_003269E0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003269F0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x003269F0u) [[unlikely]] return; }
L_003269F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[19].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], 0u + 116u);
    c.budget -= 8;
L_00326A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326A18u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00326A18u) [[unlikely]] return; }
L_00326A18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_00326AB0; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326A38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 321u, depth + 1u); else { c.pc = 0x00326EC0u; return; } if (c.pc != 0x00326A38u) [[unlikely]] return; }
L_00326A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326AAC; } }
    set32(c.r[4], 0u + 140u);
    c.budget -= 1;
L_00326A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326A4Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00326A4Cu) [[unlikely]] return; }
L_00326A4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326AAC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326A6Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 339u, depth + 1u); else { c.pc = 0x00327110u; return; } if (c.pc != 0x00326A6Cu) [[unlikely]] return; }
L_00326A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326AAC; } }
    set32(c.r[4], 0u + 124u);
    c.budget -= 1;
L_00326A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326A80u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00326A80u) [[unlikely]] return; }
L_00326A80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326AAC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326AA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 356u, depth + 1u); else { c.pc = 0x00327340u; return; } if (c.pc != 0x00326AA0u) [[unlikely]] return; }
L_00326AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326AAC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00326AAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00326AB0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00326AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326AECu); set32(c.r[4], 0u + 664u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00326AECu) [[unlikely]] return; }
L_00326AEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00326B1C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 8u, depth + 1u); else { c.pc = 0x002AC0E0u; return; } if (c.pc != 0x00326B00u) [[unlikely]] return; }
L_00326B00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 13856u);
    set32(c.r[2], c.r[2].w[0] - 13800u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 660u), 0u);
    c.budget -= 7;
L_00326B1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00326B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 21000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B58u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00326B58u) [[unlikely]] return; }
L_00326B58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B64u); set32(c.r[5], 0u + 21001u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00326B64u) [[unlikely]] return; }
L_00326B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 85u, depth + 1u); else { c.pc = 0x0027CCC0u; return; } if (c.pc != 0x00326B6Cu) [[unlikely]] return; }
L_00326B6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326B80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027DC70u | kUnwind; return; } [[clang::musttail]] return unit_0057(c, 181u, depth); }
L_00326B90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 420u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00326BEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326BB0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00326BB0u) [[unlikely]] return; }
L_00326BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326BB8u); set32(c.r[4], ld32((c.r[16].w[0] + 420u)));  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00326BB8u) [[unlikely]] return; }
L_00326BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326BC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 233u, depth + 1u); else { c.pc = 0x00326260u; return; } if (c.pc != 0x00326BC0u) [[unlikely]] return; }
L_00326BC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326BD0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00326BD0u) [[unlikely]] return; }
L_00326BD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 7;
L_00326BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326BF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 376u, depth + 1u); else { c.pc = 0x00286FF0u; return; } if (c.pc != 0x00326BF4u) [[unlikely]] return; }
L_00326BF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00326C28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C08u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00326C08u) [[unlikely]] return; }
L_00326C08:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
L_00326C28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00326C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00326C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326DAC; } }
L_00326C6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C78u); set32(c.r[5], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0081(c, 216u, depth + 1u); else { c.pc = 0x00325FC0u; return; } if (c.pc != 0x00326C78u) [[unlikely]] return; }
L_00326C78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00326C88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00326CA4; } }
L_00326C88:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_00326C98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00326CA4; } }
L_00326C98:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00326CA4; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00326CA4:
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 1264u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 1268u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[4].w[0] + 1272u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[4].w[0] + 1276u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[2].w[0] + 1280u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[2].w[0] + 1284u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[2].w[0] + 1288u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[2].w[0] + 1292u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[2].w[0] + 1296u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[2].w[0] + 1300u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[2].w[0] + 1304u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[2].w[0] + 1308u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[2].w[0] + 1312u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    st32((c.r[2].w[0] + 1316u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[2].w[0] + 1320u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[2].w[0] + 1324u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    st32((c.r[2].w[0] + 1328u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[2].w[0] + 1332u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[2].w[0] + 1336u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    st32((c.r[2].w[0] + 1340u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1320u)));
    c.f[1] = ld32((c.r[3].w[0] + 1268u));
    c.f[0] = ld32((c.r[2].w[0] + 196u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 196u), c.f[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 1320u)));
    c.budget -= 56;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00326D84u) [[unlikely]] return; }
L_00326D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00326D8Cu) [[unlikely]] return; }
L_00326D8C:
    set32(c.r[5], c.r[18].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D98u); set32(c.r[4], c.r[17].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00326D98u) [[unlikely]] return; }
L_00326D98:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326DA4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 120u, depth + 1u); else { c.pc = 0x002790D0u; return; } if (c.pc != 0x00326DA4u) [[unlikely]] return; }
L_00326DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00326DB8; } }
L_00326DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326DB4u);  if (depth < kMaxDepth) unit_006B(c, 152u, depth + 1u); else { c.pc = 0x002CDEC0u; return; } if (c.pc != 0x00326DB4u) [[unlikely]] return; }
L_00326DB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00326DB8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00326DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326DECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x00326DECu) [[unlikely]] return; }
L_00326DEC:
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 1320u)));  goto L_00326E4C; }
    set32(c.r[3], 0u + 87u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 1320u)));  goto L_00326E24; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00326E14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00326E78; } }
L_00326E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E1Cu);  if (depth < kMaxDepth) unit_0081(c, 318u, depth + 1u); else { c.pc = 0x00326E90u; return; } if (c.pc != 0x00326E1Cu) [[unlikely]] return; }
L_00326E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326E74; } }
L_00326E24:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00326E74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E34u); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00326E34u) [[unlikely]] return; }
L_00326E34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326E74; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 308u), c.r[3].w[0]);  if (t) { goto L_00326E74; } }
L_00326E4C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00326E74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E5Cu); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00326E5Cu) [[unlikely]] return; }
L_00326E5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326E74; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 308u)));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 4;
L_00326E74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00326E78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00326E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326EA0u);  if (depth < kMaxDepth) unit_0081(c, 217u, depth + 1u); else { c.pc = 0x00326030u; return; } if (c.pc != 0x00326EA0u) [[unlikely]] return; }
L_00326EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326EA8u);  if (depth < kMaxDepth) unit_0081(c, 224u, depth + 1u); else { c.pc = 0x00326160u; return; } if (c.pc != 0x00326EA8u) [[unlikely]] return; }
L_00326EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00326EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326ED4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 148u, depth + 1u); else { c.pc = 0x00275380u; return; } if (c.pc != 0x00326ED4u) [[unlikely]] return; }
L_00326ED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 13568u);
    set32(c.r[3], c.r[3].w[0] - 13512u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326F2Cu); set32(c.r[5], 0u + 22003u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00326F2Cu) [[unlikely]] return; }
L_00326F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326F34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 155u, depth + 1u); else { c.pc = 0x00275510u; return; } if (c.pc != 0x00326F34u) [[unlikely]] return; }
L_00326F34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00326F9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326F78u); set32(c.r[5], c.r[2].w[0] + 1424u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00326F78u) [[unlikely]] return; }
L_00326F78:
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
L_00326F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326FA4u);  if (depth < kMaxDepth) unit_0055(c, 162u, depth + 1u); else { c.pc = 0x002755C0u; return; } if (c.pc != 0x00326FA4u) [[unlikely]] return; }
L_00326FA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326FC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326FD8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x00326FD8u) [[unlikely]] return; }
L_00326FD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003270F8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00327000; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003270F4; } }
L_00327000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327008u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00327008u) [[unlikely]] return; }
L_00327008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003270F4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1100u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003270F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327028u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00327028u) [[unlikely]] return; }
L_00327028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327030u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0081(c, 233u, depth + 1u); else { c.pc = 0x00326260u; return; } if (c.pc != 0x00327030u) [[unlikely]] return; }
L_00327030:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327040u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00327040u) [[unlikely]] return; }
L_00327040:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032704Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0032704Cu) [[unlikely]] return; }
L_0032704C:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00327064; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003270BC; } }
L_00327064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032706Cu); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0032706Cu) [[unlikely]] return; }
L_0032706C:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0032708C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032709C; } }
L_0032708C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0032709C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003270BC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_003270B4; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003270B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003270BC; } }
L_003270BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[6], 0u + 22003u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003270CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x003270CCu) [[unlikely]] return; }
L_003270CC:
    set32(c.r[3], ld32((c.r[2].w[0] + 308u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003270E8u); st32((c.r[2].w[0] + 308u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003270E8u) [[unlikely]] return; }
L_003270E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 3;
L_003270F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003270F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00327110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327124u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x00327124u) [[unlikely]] return; }
L_00327124:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 13664u);
    set32(c.r[2], c.r[2].w[0] - 13608u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 136u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327150u); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00327150u) [[unlikely]] return; }
L_00327150:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327184u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 77u, depth + 1u); else { c.pc = 0x0026CAC0u; return; } if (c.pc != 0x00327184u) [[unlikely]] return; }
L_00327184:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0032721C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 100u));  goto L_003271B8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00327218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327218; } }
L_003271B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00327218; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 2916u);  if (t) { goto L_00327200; } }
L_003271E8:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 6;
L_00327200:
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003271E8u | kUnwind; return; } goto L_003271E8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 3;
L_00327218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0032721C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327244u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 67u, depth + 1u); else { c.pc = 0x0026C980u; return; } if (c.pc != 0x00327244u) [[unlikely]] return; }
L_00327244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032724Cu);  if (depth < kMaxDepth) unit_0081(c, 185u, depth + 1u); else { c.pc = 0x00325AF0u; return; } if (c.pc != 0x0032724Cu) [[unlikely]] return; }
L_0032724C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1320u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00327268; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327264u);  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x00327264u) [[unlikely]] return; }
L_00327264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00327268:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327298u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_0081(c, 249u, depth + 1u); else { c.pc = 0x00326550u; return; } if (c.pc != 0x00327298u) [[unlikely]] return; }
L_00327298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003272A0u);  if (depth < kMaxDepth) unit_0081(c, 197u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x003272A0u) [[unlikely]] return; }
L_003272A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003272A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x003272A8u) [[unlikely]] return; }
L_003272A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003272C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 44u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00327324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003272E0u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0081(c, 216u, depth + 1u); else { c.pc = 0x00325FC0u; return; } if (c.pc != 0x003272E0u) [[unlikely]] return; }
L_003272E0:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003272F0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003272F0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00327300; }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_00327300:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 608u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 864u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032731Cu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0081(c, 235u, depth + 1u); else { c.pc = 0x003262B0u; return; } if (c.pc != 0x0032731Cu) [[unlikely]] return; }
L_0032731C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 2;
L_00327324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327354u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x00327354u) [[unlikely]] return; }
L_00327354:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 13760u);
    set32(c.r[2], c.r[2].w[0] - 13704u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327378u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0081(c, 216u, depth + 1u); else { c.pc = 0x00325FC0u; return; } if (c.pc != 0x00327378u) [[unlikely]] return; }
L_00327378:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003273A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003273B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 312u, depth + 1u); else { c.pc = 0x00272910u; return; } if (c.pc != 0x003273B8u) [[unlikely]] return; }
L_003273B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_003274B4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003273D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003274B0; } }
L_003273D8:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003274B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003273F4u); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x003273F4u) [[unlikely]] return; }
L_003273F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 580u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 28u)));  goto L_00327418; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032741C; } }
L_00327418:
    set32(c.r[3], c.r[2].w[0] + 48u);
    c.budget -= 1;
L_0032741C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00327434; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00327434; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00327434:
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327440u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00327440u) [[unlikely]] return; }
L_00327440:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032745Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0032745Cu) [[unlikely]] return; }
L_0032745C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032746Cu); set32(c.r[5], c.r[5].w[0] + 13248u);  if (depth < kMaxDepth) unit_0059(c, 52u, depth + 1u); else { c.pc = 0x002845E0u; return; } if (c.pc != 0x0032746Cu) [[unlikely]] return; }
L_0032746C:
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    c.f[12] = 0u;
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327490u); st32((c.r[17].w[0] + 308u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x00327490u) [[unlikely]] return; }
L_00327490:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[3], ld32((c.r[16].w[0] + 116u)));  goto L_003274A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003274A4u);  if (depth < kMaxDepth) unit_0081(c, 197u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x003274A4u) [[unlikely]] return; }
L_003274A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_003274A8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_003274B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_003274B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003274E8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003274E4; } }
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003274E4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x003274E4u) [[unlikely]] return; }
L_003274E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003274E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00327500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032754C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_00327534; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032760C; } }
L_00327534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032753Cu);  if (depth < kMaxDepth) unit_0081(c, 216u, depth + 1u); else { c.pc = 0x00325FC0u; return; } if (c.pc != 0x0032753Cu) [[unlikely]] return; }
L_0032753C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00327608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00327614; } }
L_0032754C:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 5004u);
    set32(c.r[4], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032757C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5005u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327574u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00327574u) [[unlikely]] return; }
L_00327574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327598; } }
L_0032757C:
    set32(c.r[3], 0u + 5005u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00327598; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327598u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00327598u) [[unlikely]] return; }
L_00327598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  goto L_003275BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003275A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 216u, depth + 1u); else { c.pc = 0x00325FC0u; return; } if (c.pc != 0x003275A8u) [[unlikely]] return; }
L_003275A8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003275B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00327614; } }
L_003275B8:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_003275BC:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_003275D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00327614; } }
L_003275D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003275DCu);  if (depth < kMaxDepth) unit_0081(c, 216u, depth + 1u); else { c.pc = 0x00325FC0u; return; } if (c.pc != 0x003275DCu) [[unlikely]] return; }
L_003275DC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u + 1u);  goto L_003275FC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3432u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 660u), 0u);  goto L_00327600; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00327614; } }
L_003275FC:
    st32((c.r[17].w[0] + 660u), c.r[2].w[0]);
    c.budget -= 1;
L_00327600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00327614; } }
L_00327608:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032760C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327614u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 207u, depth + 1u); else { c.pc = 0x002AE0E0u; return; } if (c.pc != 0x00327614u) [[unlikely]] return; }
L_00327614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00327630:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032765Cu); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x0032765Cu) [[unlikely]] return; }
L_0032765C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 13904u);
    set32(c.r[2], c.r[2].w[0] - 13892u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 52u), 0u);
    st32((c.r[18].w[0] + 56u), 0u);
    st32((c.r[18].w[0] + 60u), 0u);
    st32((c.r[18].w[0] + 64u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 1320u)));  if (t) { goto L_003278C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003276A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 441u, depth + 1u); else { c.pc = 0x00327F10u; return; } if (c.pc != 0x003276A0u) [[unlikely]] return; }
L_003276A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] < 0) { c.r[17].d[0] = 0ull + 0ull;  goto L_003276BC; }
    c.r[1].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] + 71u);  goto L_003276C0; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003276BC:
    set32(c.r[3], c.r[17].w[0] + 71u);
    c.budget -= 1;
L_003276C0:
    set32(c.r[2], 0u + 5004u);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 60u)));  goto L_003276E8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 3u);
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
L_003276E8:
    set32(c.r[3], c.r[2].w[0] - 70u);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], ld32((c.r[18].w[0] + 44u)));  goto L_00327720; }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032771C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032771C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032771C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 576u), c.r[3].w[0]);
    c.budget -= 2;
L_0032771C:
    set32(c.r[19], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_00327720:
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00327734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032776C; } }
L_00327734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032773Cu); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0032773Cu) [[unlikely]] return; }
L_0032773C:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0032775C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032776C; } }
L_0032775C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0032776C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00327788; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00327798; } }
L_00327788:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00327798:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003277A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x003277A4u) [[unlikely]] return; }
L_003277A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003277D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00327840; } }
L_003277D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003277D8u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003277D8u) [[unlikely]] return; }
L_003277D8:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003277F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00327808; } }
L_003277F8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00327808:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));  goto L_00327818; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00327840; } }
L_00327818:
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00327830; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00327840; } }
L_00327830:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00327840:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[6], 0u + 22000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327850u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00327850u) [[unlikely]] return; }
L_00327850:
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327860u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00327860u) [[unlikely]] return; }
L_00327860:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032786Cu); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0032786Cu) [[unlikely]] return; }
L_0032786C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327874u);  if (depth < kMaxDepth) unit_0081(c, 224u, depth + 1u); else { c.pc = 0x00326160u; return; } if (c.pc != 0x00327874u) [[unlikely]] return; }
L_00327874:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327890u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327890u) [[unlikely]] return; }
L_00327890:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 608u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1588u);  if (t) { goto L_003278AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  if (t) { goto L_003278B0; } }
L_003278AC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003278B0:
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.f[12] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003278C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 367u, depth + 1u); else { c.pc = 0x002C3F00u; return; } if (c.pc != 0x003278C0u) [[unlikely]] return; }
L_003278C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 64u)));  if (t) { goto L_003278F0; } }
L_003278C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003278D0u);  if (depth < kMaxDepth) unit_0081(c, 235u, depth + 1u); else { c.pc = 0x003262B0u; return; } if (c.pc != 0x003278D0u) [[unlikely]] return; }
L_003278D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003278ECu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003278ECu) [[unlikely]] return; }
L_003278EC:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 1;
L_003278F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003278FCu); set32(c.r[4], c.r[4].w[0] - 19952u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x003278FCu) [[unlikely]] return; }
L_003278FC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00327920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00327AF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 13904u);
    set32(c.r[2], c.r[2].w[0] - 13892u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327A80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5004u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327974u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00327974u) [[unlikely]] return; }
L_00327974:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327980u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 192u, depth + 1u); else { c.pc = 0x00325C00u; return; } if (c.pc != 0x00327980u) [[unlikely]] return; }
L_00327980:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5005u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327994u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00327994u) [[unlikely]] return; }
L_00327994:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003279A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 192u, depth + 1u); else { c.pc = 0x00325C00u; return; } if (c.pc != 0x003279A0u) [[unlikely]] return; }
L_003279A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5002u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003279B4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003279B4u) [[unlikely]] return; }
L_003279B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003279C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 192u, depth + 1u); else { c.pc = 0x00325C00u; return; } if (c.pc != 0x003279C0u) [[unlikely]] return; }
L_003279C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5003u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003279D4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003279D4u) [[unlikely]] return; }
L_003279D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003279E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 192u, depth + 1u); else { c.pc = 0x00325C00u; return; } if (c.pc != 0x003279E0u) [[unlikely]] return; }
L_003279E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5006u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003279F4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003279F4u) [[unlikely]] return; }
L_003279F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A00u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 192u, depth + 1u); else { c.pc = 0x00325C00u; return; } if (c.pc != 0x00327A00u) [[unlikely]] return; }
L_00327A00:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  goto L_00327A1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A18u);  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x00327A18u) [[unlikely]] return; }
L_00327A18:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_00327A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A24u); set32(c.r[5], 0u + 22000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00327A24u) [[unlikely]] return; }
L_00327A24:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A38u); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327A38u) [[unlikely]] return; }
L_00327A38:
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00327A48; }
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 1;
L_00327A48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327AC4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 1588u);  if (t) { goto L_00327A6C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  if (t) { goto L_00327A70; } }
L_00327A6C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00327A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A78u); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0069(c, 18u, depth + 1u); else { c.pc = 0x002C41C0u; return; } if (c.pc != 0x00327A78u) [[unlikely]] return; }
L_00327A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327AC4; } }
L_00327A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A88u);  if (depth < kMaxDepth) unit_0081(c, 442u, depth + 1u); else { c.pc = 0x00327F20u; return; } if (c.pc != 0x00327A88u) [[unlikely]] return; }
L_00327A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A90u); set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  if (depth < kMaxDepth) unit_0081(c, 249u, depth + 1u); else { c.pc = 0x00326550u; return; } if (c.pc != 0x00327A90u) [[unlikely]] return; }
L_00327A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A98u);  if (depth < kMaxDepth) unit_0081(c, 197u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x00327A98u) [[unlikely]] return; }
L_00327A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327AA0u);  if (depth < kMaxDepth) unit_0081(c, 185u, depth + 1u); else { c.pc = 0x00325AF0u; return; } if (c.pc != 0x00327AA0u) [[unlikely]] return; }
L_00327AA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327AB0u); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00327AB0u) [[unlikely]] return; }
L_00327AB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327AC4u); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327AC4u) [[unlikely]] return; }
L_00327AC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327AD0u); set32(c.r[4], c.r[4].w[0] - 19904u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00327AD0u) [[unlikely]] return; }
L_00327AD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327ADCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x00327ADCu) [[unlikely]] return; }
L_00327ADC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00327AF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327AF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00327AF4u) [[unlikely]] return; }
L_00327AF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00327AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00327B10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1001u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00327DF0; } }
    set32(c.r[3], 0u + 1000u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1000u);  goto L_00327DD0; }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00327DCC; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 44u)));  goto L_00327CE8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[16], ld32((c.r[18].w[0] + 60u)));  goto L_00327C68; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 44u)));  goto L_00327BAC; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 44u)));  goto L_00327B84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  if (t) { goto L_00327DF4; } }
L_00327B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327B8Cu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x00327B8Cu) [[unlikely]] return; }
L_00327B8C:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 100u);  goto L_00327BA4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00327DF0; } }
L_00327BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00327DF0; } }
L_00327BAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], ld32((c.r[3].w[0] + 1320u)));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[17], ld32((c.r[16].w[0] + 464u)));  if (t) { goto L_00327C30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00327BFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327BDCu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x00327BDCu) [[unlikely]] return; }
L_00327BDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_00327BF0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327BFC; } }
L_00327BF0:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00327BFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[17].w[0] + 80u));  goto L_00327C34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327C0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x00327C0Cu) [[unlikely]] return; }
L_00327C0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 496u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00327DF0; } }
L_00327C30:
    c.f[20] = ld32((c.r[17].w[0] + 80u));
    c.budget -= 1;
L_00327C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327C3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x00327C3Cu) [[unlikely]] return; }
L_00327C3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00327DF0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
L_00327C68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327C78u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 431u, depth + 1u); else { c.pc = 0x00327E40u; return; } if (c.pc != 0x00327C78u) [[unlikely]] return; }
L_00327C78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5001u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327C88u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 431u, depth + 1u); else { c.pc = 0x00327E40u; return; } if (c.pc != 0x00327C88u) [[unlikely]] return; }
L_00327C88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5004u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327C98u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 431u, depth + 1u); else { c.pc = 0x00327E40u; return; } if (c.pc != 0x00327C98u) [[unlikely]] return; }
L_00327C98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5005u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327CA8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 431u, depth + 1u); else { c.pc = 0x00327E40u; return; } if (c.pc != 0x00327CA8u) [[unlikely]] return; }
L_00327CA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5002u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327CB8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 431u, depth + 1u); else { c.pc = 0x00327E40u; return; } if (c.pc != 0x00327CB8u) [[unlikely]] return; }
L_00327CB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5003u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327CC8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 431u, depth + 1u); else { c.pc = 0x00327E40u; return; } if (c.pc != 0x00327CC8u) [[unlikely]] return; }
L_00327CC8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327CD8u); set32(c.r[5], 0u + 5006u);  if (depth < kMaxDepth) unit_0081(c, 431u, depth + 1u); else { c.pc = 0x00327E40u; return; } if (c.pc != 0x00327CD8u) [[unlikely]] return; }
L_00327CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327CE0u);  if (depth < kMaxDepth) unit_0081(c, 217u, depth + 1u); else { c.pc = 0x00326030u; return; } if (c.pc != 0x00327CE0u) [[unlikely]] return; }
L_00327CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327DCC; } }
L_00327CE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], ld32((c.r[3].w[0] + 1320u)));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[17], ld32((c.r[16].w[0] + 464u)));  if (t) { goto L_00327D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D0Cu);  if (depth < kMaxDepth) unit_0081(c, 442u, depth + 1u); else { c.pc = 0x00327F20u; return; } if (c.pc != 0x00327D0Cu) [[unlikely]] return; }
L_00327D0C:
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[18].w[0] + 44u)));  goto L_00327D94; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00327D5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D3Cu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x00327D3Cu) [[unlikely]] return; }
L_00327D3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_00327D50; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327D5C; } }
L_00327D50:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00327D5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327D90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x00327D6Cu) [[unlikely]] return; }
L_00327D6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 496u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00327DF0; } }
L_00327D90:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_00327D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D9Cu);  if (depth < kMaxDepth) unit_0081(c, 216u, depth + 1u); else { c.pc = 0x00325FC0u; return; } if (c.pc != 0x00327D9Cu) [[unlikely]] return; }
L_00327D9C:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    set32(c.r[4], ld32((c.r[4].w[0] + 608u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 864u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00327DF0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_00327DCC:
    set32(c.r[4], 0u + 1000u);
    c.budget -= 1;
L_00327DD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st32((c.r[18].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 8;
L_00327DF0:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_00327DF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_00327E18; }
    c.f[1] = 0u;
    c.budget -= 1;
L_00327E18:
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00327E40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E64u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00327E64u) [[unlikely]] return; }
L_00327E64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00327EF4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E80u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00327E80u) [[unlikely]] return; }
L_00327E80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E90u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00327E90u) [[unlikely]] return; }
L_00327E90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EA0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00327EA0u) [[unlikely]] return; }
L_00327EA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EB0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00327EB0u) [[unlikely]] return; }
L_00327EB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EC0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00327EC0u) [[unlikely]] return; }
L_00327EC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327ED0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00327ED0u) [[unlikely]] return; }
L_00327ED0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EE0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00327EE0u) [[unlikely]] return; }
L_00327EE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EF0u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00327EF0u) [[unlikely]] return; }
L_00327EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00327EF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00327F10:
    c.budget -= 2;
    { set32(c.r[4], 0u + 3u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00184510u | kUnwind; return; } [[clang::musttail]] return unit_0019(c, 17u, depth); }
L_00327F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00327F74; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F4Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00327F4Cu) [[unlikely]] return; }
L_00327F4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00327F78; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], 0u + 100u);
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F6Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327F6Cu) [[unlikely]] return; }
L_00327F6C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 2;
L_00327F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00327F78:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0082(c, 2u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 13856u);
    set32(c.r[2], c.r[2].w[0] - 13800u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00327FF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327FECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00327FECu) [[unlikely]] return; }
L_00327FEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327FF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00327FF8u) [[unlikely]] return; }
L_00327FF8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 2;
    [[clang::musttail]] return unit_0082(c, 1u, depth);
}

}
