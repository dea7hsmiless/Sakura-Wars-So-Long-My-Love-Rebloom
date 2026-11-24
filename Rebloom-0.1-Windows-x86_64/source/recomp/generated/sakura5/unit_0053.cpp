#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0053[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191,
    0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0,
    217, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 232,
    0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0,
    0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 275,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0,
    0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0,
    0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0, 0,
    0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0,
    0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0,
    423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0,
    0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0,
    0, 437, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450,
    0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456,
    0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0,
    0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0,
    469, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0053(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0026C000;
    case 2u: goto L_0026C070;
    case 3u: goto L_0026C084;
    case 4u: goto L_0026C0A4;
    case 5u: goto L_0026C0D4;
    case 6u: goto L_0026C110;
    case 7u: goto L_0026C13C;
    case 8u: goto L_0026C148;
    case 9u: goto L_0026C168;
    case 10u: goto L_0026C184;
    case 11u: goto L_0026C194;
    case 12u: goto L_0026C1B0;
    case 13u: goto L_0026C214;
    case 14u: goto L_0026C22C;
    case 15u: goto L_0026C24C;
    case 16u: goto L_0026C254;
    case 17u: goto L_0026C26C;
    case 18u: goto L_0026C27C;
    case 19u: goto L_0026C28C;
    case 20u: goto L_0026C2AC;
    case 21u: goto L_0026C2C4;
    case 22u: goto L_0026C2D0;
    case 23u: goto L_0026C2F0;
    case 24u: goto L_0026C300;
    case 25u: goto L_0026C310;
    case 26u: goto L_0026C320;
    case 27u: goto L_0026C33C;
    case 28u: goto L_0026C358;
    case 29u: goto L_0026C370;
    case 30u: goto L_0026C3B4;
    case 31u: goto L_0026C420;
    case 32u: goto L_0026C45C;
    case 33u: goto L_0026C47C;
    case 34u: goto L_0026C4B0;
    case 35u: goto L_0026C4CC;
    case 36u: goto L_0026C4F0;
    case 37u: goto L_0026C508;
    case 38u: goto L_0026C560;
    case 39u: goto L_0026C5BC;
    case 40u: goto L_0026C5C8;
    case 41u: goto L_0026C5E0;
    case 42u: goto L_0026C600;
    case 43u: goto L_0026C610;
    case 44u: goto L_0026C618;
    case 45u: goto L_0026C620;
    case 46u: goto L_0026C650;
    case 47u: goto L_0026C6A8;
    case 48u: goto L_0026C6E4;
    case 49u: goto L_0026C6FC;
    case 50u: goto L_0026C724;
    case 51u: goto L_0026C78C;
    case 52u: goto L_0026C7B8;
    case 53u: goto L_0026C7E0;
    case 54u: goto L_0026C80C;
    case 55u: goto L_0026C82C;
    case 56u: goto L_0026C848;
    case 57u: goto L_0026C870;
    case 58u: goto L_0026C8A0;
    case 59u: goto L_0026C8B8;
    case 60u: goto L_0026C8DC;
    case 61u: goto L_0026C8E4;
    case 62u: goto L_0026C8F0;
    case 63u: goto L_0026C92C;
    case 64u: goto L_0026C938;
    case 65u: goto L_0026C940;
    case 66u: goto L_0026C95C;
    case 67u: goto L_0026C980;
    case 68u: goto L_0026C9B0;
    case 69u: goto L_0026C9B8;
    case 70u: goto L_0026C9DC;
    case 71u: goto L_0026CA04;
    case 72u: goto L_0026CA18;
    case 73u: goto L_0026CA38;
    case 74u: goto L_0026CA58;
    case 75u: goto L_0026CA74;
    case 76u: goto L_0026CAB0;
    case 77u: goto L_0026CAC0;
    case 78u: goto L_0026CAD8;
    case 79u: goto L_0026CB10;
    case 80u: goto L_0026CB40;
    case 81u: goto L_0026CB70;
    case 82u: goto L_0026CB7C;
    case 83u: goto L_0026CB94;
    case 84u: goto L_0026CBC8;
    case 85u: goto L_0026CC24;
    case 86u: goto L_0026CC34;
    case 87u: goto L_0026CC5C;
    case 88u: goto L_0026CCAC;
    case 89u: goto L_0026CCC4;
    case 90u: goto L_0026CD10;
    case 91u: goto L_0026CD24;
    case 92u: goto L_0026CD74;
    case 93u: goto L_0026CDA0;
    case 94u: goto L_0026CDBC;
    case 95u: goto L_0026CDD4;
    case 96u: goto L_0026CE20;
    case 97u: goto L_0026CE64;
    case 98u: goto L_0026CEB0;
    case 99u: goto L_0026CEF4;
    case 100u: goto L_0026CF0C;
    case 101u: goto L_0026CF1C;
    case 102u: goto L_0026CF64;
    case 103u: goto L_0026CFA0;
    case 104u: goto L_0026CFB8;
    case 105u: goto L_0026CFE0;
    case 106u: goto L_0026D004;
    case 107u: goto L_0026D01C;
    case 108u: goto L_0026D028;
    case 109u: goto L_0026D038;
    case 110u: goto L_0026D044;
    case 111u: goto L_0026D05C;
    case 112u: goto L_0026D094;
    case 113u: goto L_0026D0A0;
    case 114u: goto L_0026D0C0;
    case 115u: goto L_0026D0F0;
    case 116u: goto L_0026D108;
    case 117u: goto L_0026D130;
    case 118u: goto L_0026D140;
    case 119u: goto L_0026D154;
    case 120u: goto L_0026D170;
    case 121u: goto L_0026D184;
    case 122u: goto L_0026D1E0;
    case 123u: goto L_0026D274;
    case 124u: goto L_0026D2D0;
    case 125u: goto L_0026D2D8;
    case 126u: goto L_0026D310;
    case 127u: goto L_0026D334;
    case 128u: goto L_0026D34C;
    case 129u: goto L_0026D380;
    case 130u: goto L_0026D39C;
    case 131u: goto L_0026D3C4;
    case 132u: goto L_0026D3F0;
    case 133u: goto L_0026D420;
    case 134u: goto L_0026D470;
    case 135u: goto L_0026D524;
    case 136u: goto L_0026D580;
    case 137u: goto L_0026D5A0;
    case 138u: goto L_0026D5C0;
    case 139u: goto L_0026D61C;
    case 140u: goto L_0026D628;
    case 141u: goto L_0026D640;
    case 142u: goto L_0026D660;
    case 143u: goto L_0026D670;
    case 144u: goto L_0026D684;
    case 145u: goto L_0026D70C;
    case 146u: goto L_0026D728;
    case 147u: goto L_0026D78C;
    case 148u: goto L_0026D7C0;
    case 149u: goto L_0026D850;
    case 150u: goto L_0026D87C;
    case 151u: goto L_0026D890;
    case 152u: goto L_0026D8B0;
    case 153u: goto L_0026D8CC;
    case 154u: goto L_0026D8E0;
    case 155u: goto L_0026D8FC;
    case 156u: goto L_0026D91C;
    case 157u: goto L_0026D924;
    case 158u: goto L_0026D940;
    case 159u: goto L_0026D950;
    case 160u: goto L_0026D970;
    case 161u: goto L_0026D97C;
    case 162u: goto L_0026D9A4;
    case 163u: goto L_0026D9B0;
    case 164u: goto L_0026D9DC;
    case 165u: goto L_0026D9FC;
    case 166u: goto L_0026DA10;
    case 167u: goto L_0026DA34;
    case 168u: goto L_0026DA40;
    case 169u: goto L_0026DA64;
    case 170u: goto L_0026DA88;
    case 171u: goto L_0026DA94;
    case 172u: goto L_0026DAC0;
    case 173u: goto L_0026DAD0;
    case 174u: goto L_0026DAE8;
    case 175u: goto L_0026DB38;
    case 176u: goto L_0026DB60;
    case 177u: goto L_0026DB78;
    case 178u: goto L_0026DB8C;
    case 179u: goto L_0026DBA0;
    case 180u: goto L_0026DBC0;
    case 181u: goto L_0026DBDC;
    case 182u: goto L_0026DBF0;
    case 183u: goto L_0026DC08;
    case 184u: goto L_0026DC44;
    case 185u: goto L_0026DC64;
    case 186u: goto L_0026DC84;
    case 187u: goto L_0026DC94;
    case 188u: goto L_0026DCA0;
    case 189u: goto L_0026DCCC;
    case 190u: goto L_0026DCDC;
    case 191u: goto L_0026DCFC;
    case 192u: goto L_0026DD0C;
    case 193u: goto L_0026DD18;
    case 194u: goto L_0026DD2C;
    case 195u: goto L_0026DD58;
    case 196u: goto L_0026DD70;
    case 197u: goto L_0026DD7C;
    case 198u: goto L_0026DDB0;
    case 199u: goto L_0026DDD4;
    case 200u: goto L_0026DDF8;
    case 201u: goto L_0026DE00;
    case 202u: goto L_0026DE0C;
    case 203u: goto L_0026DE18;
    case 204u: goto L_0026DE24;
    case 205u: goto L_0026DE38;
    case 206u: goto L_0026DE44;
    case 207u: goto L_0026DE4C;
    case 208u: goto L_0026DE58;
    case 209u: goto L_0026DE6C;
    case 210u: goto L_0026DE9C;
    case 211u: goto L_0026DEB0;
    case 212u: goto L_0026DF0C;
    case 213u: goto L_0026DF20;
    case 214u: goto L_0026DF50;
    case 215u: goto L_0026DF68;
    case 216u: goto L_0026DF78;
    case 217u: goto L_0026DF80;
    case 218u: goto L_0026DF8C;
    case 219u: goto L_0026DFA0;
    case 220u: goto L_0026DFD0;
    case 221u: goto L_0026DFE4;
    case 222u: goto L_0026E020;
    case 223u: goto L_0026E034;
    case 224u: goto L_0026E040;
    case 225u: goto L_0026E048;
    case 226u: goto L_0026E054;
    case 227u: goto L_0026E068;
    case 228u: goto L_0026E098;
    case 229u: goto L_0026E0AC;
    case 230u: goto L_0026E0E8;
    case 231u: goto L_0026E0F4;
    case 232u: goto L_0026E0FC;
    case 233u: goto L_0026E108;
    case 234u: goto L_0026E11C;
    case 235u: goto L_0026E14C;
    case 236u: goto L_0026E160;
    case 237u: goto L_0026E19C;
    case 238u: goto L_0026E1B0;
    case 239u: goto L_0026E1BC;
    case 240u: goto L_0026E1C4;
    case 241u: goto L_0026E1D0;
    case 242u: goto L_0026E1E4;
    case 243u: goto L_0026E214;
    case 244u: goto L_0026E228;
    case 245u: goto L_0026E270;
    case 246u: goto L_0026E284;
    case 247u: goto L_0026E28C;
    case 248u: goto L_0026E2A0;
    case 249u: goto L_0026E2B4;
    case 250u: goto L_0026E2D0;
    case 251u: goto L_0026E2E4;
    case 252u: goto L_0026E340;
    case 253u: goto L_0026E3C8;
    case 254u: goto L_0026E420;
    case 255u: goto L_0026E458;
    case 256u: goto L_0026E494;
    case 257u: goto L_0026E4A8;
    case 258u: goto L_0026E4C8;
    case 259u: goto L_0026E4F0;
    case 260u: goto L_0026E51C;
    case 261u: goto L_0026E538;
    case 262u: goto L_0026E580;
    case 263u: goto L_0026E5DC;
    case 264u: goto L_0026E5F8;
    case 265u: goto L_0026E604;
    case 266u: goto L_0026E60C;
    case 267u: goto L_0026E630;
    case 268u: goto L_0026E638;
    case 269u: goto L_0026E650;
    case 270u: goto L_0026E674;
    case 271u: goto L_0026E68C;
    case 272u: goto L_0026E694;
    case 273u: goto L_0026E6D8;
    case 274u: goto L_0026E6E4;
    case 275u: goto L_0026E6FC;
    case 276u: goto L_0026E720;
    case 277u: goto L_0026E72C;
    case 278u: goto L_0026E738;
    case 279u: goto L_0026E750;
    case 280u: goto L_0026E770;
    case 281u: goto L_0026E794;
    case 282u: goto L_0026E7B4;
    case 283u: goto L_0026E7CC;
    case 284u: goto L_0026E7D4;
    case 285u: goto L_0026E7F8;
    case 286u: goto L_0026E828;
    case 287u: goto L_0026E848;
    case 288u: goto L_0026E850;
    case 289u: goto L_0026E89C;
    case 290u: goto L_0026E8DC;
    case 291u: goto L_0026E8F8;
    case 292u: goto L_0026E904;
    case 293u: goto L_0026E91C;
    case 294u: goto L_0026E93C;
    case 295u: goto L_0026E974;
    case 296u: goto L_0026E9BC;
    case 297u: goto L_0026EA20;
    case 298u: goto L_0026EA30;
    case 299u: goto L_0026EA50;
    case 300u: goto L_0026EA60;
    case 301u: goto L_0026EA70;
    case 302u: goto L_0026EAAC;
    case 303u: goto L_0026EAB8;
    case 304u: goto L_0026EAC8;
    case 305u: goto L_0026EADC;
    case 306u: goto L_0026EB04;
    case 307u: goto L_0026EB20;
    case 308u: goto L_0026EB40;
    case 309u: goto L_0026EB4C;
    case 310u: goto L_0026EB6C;
    case 311u: goto L_0026EB80;
    case 312u: goto L_0026EB90;
    case 313u: goto L_0026EBA0;
    case 314u: goto L_0026EBB0;
    case 315u: goto L_0026EBD4;
    case 316u: goto L_0026EBDC;
    case 317u: goto L_0026EC38;
    case 318u: goto L_0026EC5C;
    case 319u: goto L_0026EC88;
    case 320u: goto L_0026EC9C;
    case 321u: goto L_0026ECA8;
    case 322u: goto L_0026ECC0;
    case 323u: goto L_0026ECEC;
    case 324u: goto L_0026ED04;
    case 325u: goto L_0026ED18;
    case 326u: goto L_0026ED48;
    case 327u: goto L_0026ED7C;
    case 328u: goto L_0026ED98;
    case 329u: goto L_0026EDB8;
    case 330u: goto L_0026EDD0;
    case 331u: goto L_0026EDD8;
    case 332u: goto L_0026EDE8;
    case 333u: goto L_0026EE00;
    case 334u: goto L_0026EE10;
    case 335u: goto L_0026EE20;
    case 336u: goto L_0026EE30;
    case 337u: goto L_0026EE50;
    case 338u: goto L_0026EE6C;
    case 339u: goto L_0026EE88;
    case 340u: goto L_0026EEA8;
    case 341u: goto L_0026EEC0;
    case 342u: goto L_0026EED0;
    case 343u: goto L_0026EEE0;
    case 344u: goto L_0026EF00;
    case 345u: goto L_0026EF2C;
    case 346u: goto L_0026EF40;
    case 347u: goto L_0026EF4C;
    case 348u: goto L_0026EF58;
    case 349u: goto L_0026EF70;
    case 350u: goto L_0026EF9C;
    case 351u: goto L_0026EFAC;
    case 352u: goto L_0026EFC8;
    case 353u: goto L_0026EFD8;
    case 354u: goto L_0026F008;
    case 355u: goto L_0026F03C;
    case 356u: goto L_0026F058;
    case 357u: goto L_0026F078;
    case 358u: goto L_0026F090;
    case 359u: goto L_0026F098;
    case 360u: goto L_0026F0BC;
    case 361u: goto L_0026F0F8;
    case 362u: goto L_0026F144;
    case 363u: goto L_0026F1A4;
    case 364u: goto L_0026F1C8;
    case 365u: goto L_0026F234;
    case 366u: goto L_0026F254;
    case 367u: goto L_0026F274;
    case 368u: goto L_0026F2E0;
    case 369u: goto L_0026F304;
    case 370u: goto L_0026F370;
    case 371u: goto L_0026F38C;
    case 372u: goto L_0026F3A4;
    case 373u: goto L_0026F3C8;
    case 374u: goto L_0026F3F0;
    case 375u: goto L_0026F408;
    case 376u: goto L_0026F410;
    case 377u: goto L_0026F46C;
    case 378u: goto L_0026F4A4;
    case 379u: goto L_0026F4C0;
    case 380u: goto L_0026F4D0;
    case 381u: goto L_0026F4E8;
    case 382u: goto L_0026F4F8;
    case 383u: goto L_0026F520;
    case 384u: goto L_0026F530;
    case 385u: goto L_0026F540;
    case 386u: goto L_0026F55C;
    case 387u: goto L_0026F564;
    case 388u: goto L_0026F574;
    case 389u: goto L_0026F590;
    case 390u: goto L_0026F5A0;
    case 391u: goto L_0026F5B0;
    case 392u: goto L_0026F60C;
    case 393u: goto L_0026F618;
    case 394u: goto L_0026F630;
    case 395u: goto L_0026F650;
    case 396u: goto L_0026F660;
    case 397u: goto L_0026F678;
    case 398u: goto L_0026F6C8;
    case 399u: goto L_0026F70C;
    case 400u: goto L_0026F73C;
    case 401u: goto L_0026F768;
    case 402u: goto L_0026F794;
    case 403u: goto L_0026F7F8;
    case 404u: goto L_0026F82C;
    case 405u: goto L_0026F868;
    case 406u: goto L_0026F898;
    case 407u: goto L_0026F8AC;
    case 408u: goto L_0026F8C0;
    case 409u: goto L_0026F8E0;
    case 410u: goto L_0026F90C;
    case 411u: goto L_0026F92C;
    case 412u: goto L_0026F950;
    case 413u: goto L_0026F958;
    case 414u: goto L_0026F974;
    case 415u: goto L_0026F990;
    case 416u: goto L_0026F9D0;
    case 417u: goto L_0026F9DC;
    case 418u: goto L_0026F9EC;
    case 419u: goto L_0026F9FC;
    case 420u: goto L_0026FA24;
    case 421u: goto L_0026FA54;
    case 422u: goto L_0026FA70;
    case 423u: goto L_0026FA80;
    case 424u: goto L_0026FA90;
    case 425u: goto L_0026FAB8;
    case 426u: goto L_0026FAE8;
    case 427u: goto L_0026FB0C;
    case 428u: goto L_0026FB20;
    case 429u: goto L_0026FB58;
    case 430u: goto L_0026FB7C;
    case 431u: goto L_0026FBA0;
    case 432u: goto L_0026FBB8;
    case 433u: goto L_0026FBF4;
    case 434u: goto L_0026FC0C;
    case 435u: goto L_0026FC5C;
    case 436u: goto L_0026FC70;
    case 437u: goto L_0026FC84;
    case 438u: goto L_0026FC8C;
    case 439u: goto L_0026FCA0;
    case 440u: goto L_0026FCC0;
    case 441u: goto L_0026FCFC;
    case 442u: goto L_0026FD08;
    case 443u: goto L_0026FD28;
    case 444u: goto L_0026FD64;
    case 445u: goto L_0026FD70;
    case 446u: goto L_0026FD94;
    case 447u: goto L_0026FDB4;
    case 448u: goto L_0026FDD4;
    case 449u: goto L_0026FDEC;
    case 450u: goto L_0026FDFC;
    case 451u: goto L_0026FE08;
    case 452u: goto L_0026FE2C;
    case 453u: goto L_0026FE44;
    case 454u: goto L_0026FE5C;
    case 455u: goto L_0026FE6C;
    case 456u: goto L_0026FE7C;
    case 457u: goto L_0026FE90;
    case 458u: goto L_0026FEA8;
    case 459u: goto L_0026FEB4;
    case 460u: goto L_0026FECC;
    case 461u: goto L_0026FEE0;
    case 462u: goto L_0026FEF4;
    case 463u: goto L_0026FF08;
    case 464u: goto L_0026FF1C;
    case 465u: goto L_0026FF34;
    case 466u: goto L_0026FF44;
    case 467u: goto L_0026FF54;
    case 468u: goto L_0026FF68;
    case 469u: goto L_0026FF80;
    case 470u: goto L_0026FF8C;
    case 471u: goto L_0026FFA4;
    case 472u: goto L_0026FFB8;
    case 473u: goto L_0026FFCC;
    case 474u: goto L_0026FFE0;
    default: bad_entry(c, 0x0026C000u); return;
    }
L_0026C000:
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 33ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026C0E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[6], c.r[4].w[0] + 112u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[21], c.r[6].w[0] + 2916u);  if (t) { goto L_0026C038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_0026C03C; } }
L_0026C038:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026C03C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_0026C0E8; }
    set32(c.r[5], ld32((c.r[6].w[0] + 13264u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 2916u)));
    set32(c.r[4], c.r[4].w[0] - 6088u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    ld128((c.r[3].w[0] + 192u) & ~15u, c.r[3]);
    c.f[21] = ld32((c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);  if (t) { goto L_0026C0D8; } }
L_0026C070:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C084u); set32(c.r[5], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0026C084u) [[unlikely]] return; }
L_0026C084:
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 5u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C0A4u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x0026C0A4u) [[unlikely]] return; }
L_0026C0A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.f[13] = c.f[0];
    c.f[14] = 0u;
    set32(c.r[7], 0u + 1u);
    c.f[0] = ld32((c.r[28].w[0] - 32256u));
    set32(c.r[6], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.facc = fp::ee::add(c.fcr31, c.f[14], c.f[21]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C0D4u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0026C0D4u) [[unlikely]] return; }
L_0026C0D4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0026C0D8:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C070u | kUnwind; return; } goto L_0026C070; }
L_0026C0E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0026C0E8:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0026C110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C13Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005C(c, 46u, depth + 1u); else { c.pc = 0x00290810u; return; } if (c.pc != 0x0026C13Cu) [[unlikely]] return; }
L_0026C13C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C148u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0026C148u) [[unlikely]] return; }
L_0026C148:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 100u), c.r[2].w[0]);  goto L_0026C16C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C168u); set32(c.r[6], c.r[6].w[0] - 6080u);  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x0026C168u) [[unlikely]] return; }
L_0026C168:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_0026C16C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026C17C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C198; } }
L_0026C17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C184u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0026C184u) [[unlikely]] return; }
L_0026C184:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C194u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x0026C194u) [[unlikely]] return; }
L_0026C194:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026C198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026C1B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[17], c.r[5].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 15;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026C344; }
    set32(c.r[2], ld32((c.r[16].w[0] + 604u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 100u)));  goto L_0026C204; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C344; } }
L_0026C204:
    set32(c.r[5], 0u + 1u);
    set32(c.r[18], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C214u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 153u, depth + 1u); else { c.pc = 0x0029D800u; return; } if (c.pc != 0x0026C214u) [[unlikely]] return; }
L_0026C214:
    set32(c.r[3], c.r[17].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], c.r[3].w[0] + 124u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C22Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x0026C22Cu) [[unlikely]] return; }
L_0026C22C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_0026C23C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C344; } }
L_0026C23C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C24Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0026C24Cu) [[unlikely]] return; }
L_0026C24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C254u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0026C254u) [[unlikely]] return; }
L_0026C254:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { st32((c.r[16].w[0] + 592u), c.r[21].w[0]);  goto L_0026C294; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C26Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026C26Cu) [[unlikely]] return; }
L_0026C26C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C27Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026C27Cu) [[unlikely]] return; }
L_0026C27C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C28Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x0026C28Cu) [[unlikely]] return; }
L_0026C28C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 592u), c.r[21].w[0]);
    c.budget -= 2;
L_0026C294:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_0026C2A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C344; } }
L_0026C2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2ACu);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0026C2ACu) [[unlikely]] return; }
L_0026C2AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 604u), c.r[17].w[0]);  goto L_0026C2D8; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026C2C4u) [[unlikely]] return; }
L_0026C2C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x0026C2D0u) [[unlikely]] return; }
L_0026C2D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 604u), c.r[17].w[0]);
    c.budget -= 2;
L_0026C2D8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0026C2E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C344; } }
L_0026C2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2F0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026C2F0u) [[unlikely]] return; }
L_0026C2F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 604u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C300u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x0026C300u) [[unlikely]] return; }
L_0026C300:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C310u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003A(c, 317u, depth + 1u); else { c.pc = 0x0020B090u; return; } if (c.pc != 0x0026C310u) [[unlikely]] return; }
L_0026C310:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 604u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C320u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003A(c, 323u, depth + 1u); else { c.pc = 0x0020B310u; return; } if (c.pc != 0x0026C320u) [[unlikely]] return; }
L_0026C320:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0026C344; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C33Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C33Cu) [[unlikely]] return; }
L_0026C33C:
    st32((c.r[19].w[0] + 100u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0026C344:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 5;
L_0026C358:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0026C370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0026C3AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026C410; } }
L_0026C3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3B4u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026C3B4u) [[unlikely]] return; }
L_0026C3B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026C3D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026C3E4; } }
L_0026C3D4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026C3E4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0026C410; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0026C404; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026C408; } }
L_0026C404:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0026C408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C410; } }
L_0026C410:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 10402u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C420u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0026C420u) [[unlikely]] return; }
L_0026C420:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0026C48C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[16].w[0] + 344u), c.r[2].w[0]);  if (t) { goto L_0026C464; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C45Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C45Cu) [[unlikely]] return; }
L_0026C45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 308u)));  if (t) { goto L_0026C480; } }
L_0026C464:
    set32(c.r[25], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C47Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C47Cu) [[unlikely]] return; }
L_0026C47C:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.budget -= 1;
L_0026C480:
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0026C48C:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026C4B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C4CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026C4CCu) [[unlikely]] return; }
L_0026C4CC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_0026C4E8; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0026C554; } }
L_0026C4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C4F0u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026C4F0u) [[unlikely]] return; }
L_0026C4F0:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC4020000u);  goto L_0026C54C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C508u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x0026C508u) [[unlikely]] return; }
L_0026C508:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC4020000u);  goto L_0026C534; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC3BE0000u);  goto L_0026C528; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C540; } }
L_0026C528:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C550; } }
L_0026C534:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C550; } }
L_0026C540:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C550; } }
L_0026C54C:
    c.f[0] = c.r[2].w[0];
    c.budget -= 1;
L_0026C550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0026C554:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026C560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026C5E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21440u);
    set32(c.r[2], c.r[2].w[0] + 21496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0026C5C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C5BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0026C5BCu) [[unlikely]] return; }
L_0026C5BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C5C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0026C5C8u) [[unlikely]] return; }
L_0026C5C8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0026C5E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C5E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0026C5E0u) [[unlikely]] return; }
L_0026C5E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026C5E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026C600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0026C610:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C560u | kUnwind; return; } goto L_0026C560; }
L_0026C618:
    c.budget -= 2;
L_0026C620:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C650u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x0026C650u) [[unlikely]] return; }
L_0026C650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21536u);
    set32(c.r[3], c.r[3].w[0] + 21592u);
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E4B0000u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21569ull;
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 96u), 0u);
    st32((c.r[20].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[2], c.r[2].w[0] + 856u);
    st32((c.r[20].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 116u), 0u);
    st32((c.r[20].w[0] + 112u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 120u), 0u);
    st32((c.r[20].w[0] + 124u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 128u), 0u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6A8u); st32((c.r[20].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x0026C6A8u) [[unlikely]] return; }
L_0026C6A8:
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0026C764; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] + 452u);  if (t) { goto L_0026C754; } }
L_0026C6E4:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C6FCu) [[unlikely]] return; }
L_0026C6FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0026C754; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 19u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C724u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0026C724u) [[unlikely]] return; }
L_0026C724:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 148u)));  if (t) { goto L_0026C738; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 640u), c.r[3].w[0]);
    c.budget -= 2;
L_0026C738:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 148u)));  if (t) { goto L_0026C74C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 668u), c.r[3].w[0]);
    c.budget -= 2;
L_0026C74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 120u), c.r[18].w[0]);  if (t) { goto L_0026C760; } }
L_0026C754:
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C6E4u | kUnwind; return; } goto L_0026C6E4; }
L_0026C760:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0026C764:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 484u)));  goto L_0026C774; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026C774:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C78Cu); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x0026C78Cu) [[unlikely]] return; }
L_0026C78C:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));  if (t) { goto L_0026C7A4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_0026C7A4:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7B8u); set32(c.r[5], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C7B8u) [[unlikely]] return; }
L_0026C7B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_0026C7E8; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 28u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7E0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0026C7E0u) [[unlikely]] return; }
L_0026C7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0026C84C; } }
L_0026C7E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_0026C810; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C80Cu); set32(c.r[5], 0u + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C80Cu) [[unlikely]] return; }
L_0026C80C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_0026C810:
    set32(c.r[5], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_0026C84C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C82Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0026C82Cu) [[unlikely]] return; }
L_0026C82C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C848u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0026C848u) [[unlikely]] return; }
L_0026C848:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0026C84C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0026C870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026C954; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C8A0u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026C8A0u) [[unlikely]] return; }
L_0026C8A0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C8C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C8B8u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 84u, depth + 1u); else { c.pc = 0x0028CF30u; return; } if (c.pc != 0x0026C8B8u) [[unlikely]] return; }
L_0026C8B8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026C8C8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026C8C8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], 0u + 61u);  goto L_0026C8D4; }
    set32(c.r[17], 0u + 22u);
    c.budget -= 1;
L_0026C8D4:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_0026C8DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C8E4u); set32(c.r[5], c.r[17].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026C8E4u) [[unlikely]] return; }
L_0026C8E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C8F0u); set32(c.r[5], c.r[18].w[0] + 10100u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026C8F0u) [[unlikely]] return; }
L_0026C8F0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C8DCu | kUnwind; return; } goto L_0026C8DC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0026C930; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C92Cu); set32(c.r[5], c.r[3].w[0] + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C92Cu) [[unlikely]] return; }
L_0026C92C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0026C930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C938u);  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x0026C938u) [[unlikely]] return; }
L_0026C938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C940u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x0026C940u) [[unlikely]] return; }
L_0026C940:
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_0026C954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C95Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x0026C95Cu) [[unlikely]] return; }
L_0026C95C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026C980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026CA74; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9B0u); set32(c.r[5], c.r[2].w[0] + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C9B0u) [[unlikely]] return; }
L_0026C9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9B8u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x0026C9B8u) [[unlikely]] return; }
L_0026C9B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0026C9E0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026C9D4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026C9D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00282740u; return; } if (c.pc != 0x0026C9DCu) [[unlikely]] return; }
L_0026C9DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0026C9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0026CA08; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA04u); set32(c.r[5], 0u + 17u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CA04u) [[unlikely]] return; }
L_0026CA04:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0026CA08:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA18u); set32(c.r[5], 0u + 13u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CA18u) [[unlikely]] return; }
L_0026CA18:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_0026CA3C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA38u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CA38u) [[unlikely]] return; }
L_0026CA38:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_0026CA3C:
    set32(c.r[5], ld32((c.r[3].w[0] + 644u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 128u)));  goto L_0026CA78; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA58u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0026CA58u) [[unlikely]] return; }
L_0026CA58:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA74u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0026CA74u) [[unlikely]] return; }
L_0026CA74:
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_0026CA78:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0026CAB4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026CA90; }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 1;
L_0026CA90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026CAB0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026CAA8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 2;
L_0026CAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CAB0u); set32(c.r[5], ld32((c.r[5].w[0])));  if (depth < kMaxDepth) unit_0069(c, 18u, depth + 1u); else { c.pc = 0x002C41C0u; return; } if (c.pc != 0x0026CAB0u) [[unlikely]] return; }
L_0026CAB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0026CAB4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026CAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CAD8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x0026CAD8u) [[unlikely]] return; }
L_0026CAD8:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0026D11C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_0026CF04; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026CB30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CB10u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0026CB10u) [[unlikely]] return; }
L_0026CB10:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0026CB24; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026CB30; } }
L_0026CB24:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0026CB30:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 100u));  goto L_0026CBD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CB40u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0026CB40u) [[unlikely]] return; }
L_0026CB40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CBD0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0026CB98; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CB70u); set32(c.r[5], c.r[2].w[0] + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CB70u) [[unlikely]] return; }
L_0026CB70:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026CB98; } }
L_0026CB7C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CB94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CB94u) [[unlikely]] return; }
L_0026CB94:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0026CB98:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CB7Cu | kUnwind; return; } goto L_0026CB7C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CBC8u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0026CBC8u) [[unlikely]] return; }
L_0026CBC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), 0u);  if (t) { goto L_0026CD84; } }
L_0026CBD0:
    c.f[1] = ld32((c.r[17].w[0] + 100u));
    c.budget -= 1;
L_0026CBD4:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0026CDC4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0026CD28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026CD28; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC24u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CC24u) [[unlikely]] return; }
L_0026CC24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_0026CCA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC34u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0026CC34u) [[unlikely]] return; }
L_0026CC34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0026CC4C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0026CC88; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_0026CC4C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026CC7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC5Cu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0026CC5Cu) [[unlikely]] return; }
L_0026CC5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0026CC70; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026CC7C; } }
L_0026CC70:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 144u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0026CC7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026CCA0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0026CC88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0026CD28; } }
L_0026CCA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0026CCA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CCACu); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026CCACu) [[unlikely]] return; }
L_0026CCAC:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026CD28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CCC4u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026CCC4u) [[unlikely]] return; }
L_0026CCC4:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026CD28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026CD28; } }
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026CD08; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026CD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD10u);  if (depth < kMaxDepth) unit_0058(c, 279u, depth + 1u); else { c.pc = 0x00282AD0u; return; } if (c.pc != 0x0026CD10u) [[unlikely]] return; }
L_0026CD10:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD24u); set32(c.r[5], 0u + 49u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CD24u) [[unlikely]] return; }
L_0026CD24:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026CD28:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0026CEC8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_0026CD88; }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    c.r[2].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026CD84; } }
    c.r[1].d[0] = c.r[3].sd[0] < 116ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026CD84; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD74u); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x0026CD74u) [[unlikely]] return; }
L_0026CD74:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_0026D118; } }
L_0026CD84:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_0026CD88:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CDA0u); set32(c.r[5], c.r[2].w[0] + 300u);  if (depth < kMaxDepth) unit_0062(c, 78u, depth + 1u); else { c.pc = 0x002A8A10u; return; } if (c.pc != 0x0026CDA0u) [[unlikely]] return; }
L_0026CDA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CDBCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x0026CDBCu) [[unlikely]] return; }
L_0026CDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D118; } }
L_0026CDC4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026CDF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CDD4u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0026CDD4u) [[unlikely]] return; }
L_0026CDD4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0026CDE8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026CDF4; } }
L_0026CDE8:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0026CDF4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026CEC4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026CEC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE20u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0026CE20u) [[unlikely]] return; }
L_0026CE20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026CEC4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026CEC4; } }
    c.f[1] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026CEC4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE64u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CE64u) [[unlikely]] return; }
L_0026CE64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CEC4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.f[1] = ld32((c.r[3].w[0] + 172u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026CEC4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0026CEB4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CEB0u); set32(c.r[5], c.r[2].w[0] + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CEB0u) [[unlikely]] return; }
L_0026CEB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0026CEB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0026CEC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0026CEC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026D118; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CEF4u); set32(c.r[5], c.r[2].w[0] + 300u);  if (depth < kMaxDepth) unit_0062(c, 78u, depth + 1u); else { c.pc = 0x002A8A10u; return; } if (c.pc != 0x0026CEF4u) [[unlikely]] return; }
L_0026CEF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
L_0026CF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF0Cu);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0026CF0Cu) [[unlikely]] return; }
L_0026CF0C:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CF1Cu) [[unlikely]] return; }
L_0026CF1C:
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 112u)));  goto L_0026CF84; }
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[4], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF64u); set32(c.r[5], c.r[2].w[0] + 17233u);  if (depth < kMaxDepth) unit_005C(c, 364u, depth + 1u); else { c.pc = 0x002933C0u; return; } if (c.pc != 0x0026CF64u) [[unlikely]] return; }
L_0026CF64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CF80; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 864u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_0026CF80:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_0026CF84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_0026CF98; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
L_0026CF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CFA0u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026CFA0u) [[unlikely]] return; }
L_0026CFA0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 22u);  goto L_0026CFC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CFB8u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 84u, depth + 1u); else { c.pc = 0x0028CF30u; return; } if (c.pc != 0x0026CFB8u) [[unlikely]] return; }
L_0026CFB8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 61u);  goto L_0026CFC8; }
    set32(c.r[3], 0u + 22u);
    c.budget -= 1;
L_0026CFC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CFE0u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0026CFE0u) [[unlikely]] return; }
L_0026CFE0:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 28u));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_0026D020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D004u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0026D004u) [[unlikely]] return; }
L_0026D004:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u - 1u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 700u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D01Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 71u, depth + 1u); else { c.pc = 0x002A88E0u; return; } if (c.pc != 0x0026D01Cu) [[unlikely]] return; }
L_0026D01C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0026D020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D028u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0026D028u) [[unlikely]] return; }
L_0026D028:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D038u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D038u) [[unlikely]] return; }
L_0026D038:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D044u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026D044u) [[unlikely]] return; }
L_0026D044:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026D098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D05Cu); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026D05Cu) [[unlikely]] return; }
L_0026D05C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D094; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026D094; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026D08C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026D08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D094u);  if (depth < kMaxDepth) unit_0058(c, 279u, depth + 1u); else { c.pc = 0x00282AD0u; return; } if (c.pc != 0x0026D094u) [[unlikely]] return; }
L_0026D094:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026D098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0A0u);  if (depth < kMaxDepth) unit_0053(c, 134u, depth + 1u); else { c.pc = 0x0026D470u; return; } if (c.pc != 0x0026D0A0u) [[unlikely]] return; }
L_0026D0A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 257ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  goto L_0026D0C4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0C0u); set32(c.r[5], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x0026D0C0u) [[unlikely]] return; }
L_0026D0C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_0026D0C4:
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_0026D0F4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0F0u); set32(c.r[5], c.r[2].w[0] + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D0F0u) [[unlikely]] return; }
L_0026D0F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0026D0F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D108u); set32(c.r[5], c.r[2].w[0] + 44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D108u) [[unlikely]] return; }
L_0026D108:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0026D118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0026D11C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026D130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x0026D154u) [[unlikely]] return; }
L_0026D154:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026D170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D184u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 194u, depth + 1u); else { c.pc = 0x00289A80u; return; } if (c.pc != 0x0026D184u) [[unlikely]] return; }
L_0026D184:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0026D1CC; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0026D1BC; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0026D1BC:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_0026D1CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026D1E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 33ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026D43C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[23], ld32((c.r[5].w[0] + 3024u)));
    set32(c.r[4], c.r[5].w[0] + 112u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[30], c.r[4].w[0] + 2916u);  if (t) { goto L_0026D240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_0026D244; } }
L_0026D240:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026D244:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_0026D440; }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], c.r[2].w[0] + 27u);
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026D26C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0026D2C4; } }
L_0026D26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D274u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026D274u) [[unlikely]] return; }
L_0026D274:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026D294; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026D2A4; } }
L_0026D294:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026D2A4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0026D2C4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[20], ld32((c.r[3].w[0] + 4u)));  goto L_0026D2BC; }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026D2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D2C4; } }
L_0026D2C4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D2D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00282740u; return; } if (c.pc != 0x0026D2D0u) [[unlikely]] return; }
L_0026D2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0026D430; } }
L_0026D2D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[30].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 484u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 7;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0026D2F8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026D2F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D318; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D310u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x0026D310u) [[unlikely]] return; }
L_0026D310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_0026D320; } }
L_0026D318:
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_0026D320:
    c.f[20] = c.f[0];
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D334u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026D334u) [[unlikely]] return; }
L_0026D334:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 124u)));  goto L_0026D368; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D34Cu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026D34Cu) [[unlikely]] return; }
L_0026D34C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D364; } }
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026D364:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_0026D368:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0026D378; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_0026D378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D380u);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0026D380u) [[unlikely]] return; }
L_0026D380:
    set32(c.r[8], ld32((c.r[16].w[0] + 96u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D39Cu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x0026D39Cu) [[unlikely]] return; }
L_0026D39C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.f[13] = c.f[0];
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3C4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0026D3C4u) [[unlikely]] return; }
L_0026D3C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 129ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_0026D3F4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026D3F0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], c.r[3].w[0] + 10099u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3F0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0062(c, 82u, depth + 1u); else { c.pc = 0x002A8A70u; return; } if (c.pc != 0x0026D3F0u) [[unlikely]] return; }
L_0026D3F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_0026D3F4:
    c.r[3].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0026D430; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0026D42C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D420u); set32(c.r[6], c.r[2].w[0] + 10100u);  if (depth < kMaxDepth) unit_0061(c, 368u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x0026D420u) [[unlikely]] return; }
L_0026D420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D42C; } }
    st32((c.r[2].w[0] + 328u), c.f[20]);
    c.budget -= 1;
L_0026D42C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0026D430:
    c.r[3].d[0] = c.r[19].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D2D8u | kUnwind; return; } goto L_0026D2D8; }
L_0026D43C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_0026D440:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0026D470:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0026D5A4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_0026D4D4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026D4D0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[5].w[0] + 1444u);  goto L_0026D554; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D554; } }
L_0026D4D0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0026D4D4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], 0u + 3u);  goto L_0026D4E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0026D4E8; } }
L_0026D4E4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0026D4E8:
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] + 1444u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1444u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[17], c.r[4].w[0] + 1444u);  if (t) { goto L_0026D544; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[18].d[0] = c.r[17].d[0] + 0ull;  goto L_0026D554; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D524u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0026D524u) [[unlikely]] return; }
L_0026D524:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[17].d[0] = c.r[16].d[0] + 0ull;  goto L_0026D53C; }
L_0026D53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026D554; } }
L_0026D544:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0026D554; } }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026D554:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0026D5A8; }
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0026D584; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026D578; }
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 1;
L_0026D578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D580u); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0069(c, 18u, depth + 1u); else { c.pc = 0x002C41C0u; return; } if (c.pc != 0x0026D580u) [[unlikely]] return; }
L_0026D580:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0026D584:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026D590; }
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 1;
L_0026D590:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D5A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 367u, depth + 1u); else { c.pc = 0x002C3F00u; return; } if (c.pc != 0x0026D5A0u) [[unlikely]] return; }
L_0026D5A0:
    st32((c.r[19].w[0] + 128u), c.r[18].w[0]);
    c.budget -= 1;
L_0026D5A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0026D5A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026D5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026D640; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0026D628; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D61Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0026D61Cu) [[unlikely]] return; }
L_0026D61C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D628u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0026D628u) [[unlikely]] return; }
L_0026D628:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0026D644; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D640u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0026D640u) [[unlikely]] return; }
L_0026D640:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026D644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026D660:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D5C0u | kUnwind; return; } goto L_0026D5C0; }
L_0026D670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D684u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x0026D684u) [[unlikely]] return; }
L_0026D684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21632u);
    set32(c.r[3], c.r[3].w[0] + 21688u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534B0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21569ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 608u)));
    set32(c.r[3], c.r[3].w[0] + 896u);
    st32((c.r[16].w[0] + 156u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 180u);
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D70Cu); st32((c.r[16].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x0026D70Cu) [[unlikely]] return; }
L_0026D70C:
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D728u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026D728u) [[unlikely]] return; }
L_0026D728:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0026D760; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 488u)));  goto L_0026D74C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026D74C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0026D780; } }
L_0026D760:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 492u)));  goto L_0026D770; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026D770:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 4;
L_0026D780:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D78Cu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0026D78Cu) [[unlikely]] return; }
L_0026D78C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.f[0] = ld32((c.r[2].w[0] + 1152u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 594u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 1152u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D7C0u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x0026D7C0u) [[unlikely]] return; }
L_0026D7C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1104u)));
    c.budget -= 9;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 608u)));  goto L_0026D7F8; }
    set32(c.r[3], 0u + 2450u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_0026D800; } }
L_0026D7F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 640u)));
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 2;
L_0026D800:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], 0u + 5u);  goto L_0026D824; }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_0026D834; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_0026D824:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_0026D848; } }
L_0026D834:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 4u);  goto L_0026D844; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), 0u);  if (t) { goto L_0026D848; } }
L_0026D844:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_0026D848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D850u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x0026D850u) [[unlikely]] return; }
L_0026D850:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));  if (t) { goto L_0026D868; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_0026D868:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D87Cu); set32(c.r[5], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D87Cu) [[unlikely]] return; }
L_0026D87C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D890u); set32(c.r[5], 0u + 50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D890u) [[unlikely]] return; }
L_0026D890:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0026D8D0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D8B0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0026D8B0u) [[unlikely]] return; }
L_0026D8B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D8CCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0026D8CCu) [[unlikely]] return; }
L_0026D8CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026D8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026D8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D8FCu); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026D8FCu) [[unlikely]] return; }
L_0026D8FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026D91C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D91Cu);  if (depth < kMaxDepth) unit_0026(c, 17u, depth + 1u); else { c.pc = 0x001B8130u; return; } if (c.pc != 0x0026D91Cu) [[unlikely]] return; }
L_0026D91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D924u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x0026D924u) [[unlikely]] return; }
L_0026D924:
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D940u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x0026D940u) [[unlikely]] return; }
L_0026D940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026D950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D970u); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 301u, depth + 1u); else { c.pc = 0x002BF0A0u; return; } if (c.pc != 0x0026D970u) [[unlikely]] return; }
L_0026D970:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D97Cu); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 310u, depth + 1u); else { c.pc = 0x002BF230u; return; } if (c.pc != 0x0026D97Cu) [[unlikely]] return; }
L_0026D97C:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0026D9A8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026D998; }
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 1;
L_0026D998:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D9A4u); set32(c.r[5], c.r[5].w[0] - 6064u);  if (depth < kMaxDepth) unit_0069(c, 21u, depth + 1u); else { c.pc = 0x002C4250u; return; } if (c.pc != 0x0026D9A4u) [[unlikely]] return; }
L_0026D9A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0026D9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D9B0u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026D9B0u) [[unlikely]] return; }
L_0026D9B0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0026D9E4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026D9D0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026D9D0:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D9DCu); set32(c.r[5], 0u + 43u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x0026D9DCu) [[unlikely]] return; }
L_0026D9DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_0026DA00; } }
L_0026D9E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026D9F0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026D9F0:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D9FCu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x0026D9FCu) [[unlikely]] return; }
L_0026D9FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0026DA00:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA10u); set32(c.r[5], 0u + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DA10u) [[unlikely]] return; }
L_0026DA10:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0026DA38; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA34u); c.f[13] = ld32((c.r[2].w[0] + 2452u));  if (depth < kMaxDepth) unit_0026(c, 18u, depth + 1u); else { c.pc = 0x001B8140u; return; } if (c.pc != 0x0026DA34u) [[unlikely]] return; }
L_0026DA34:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0026DA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA40u);  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x0026DA40u) [[unlikely]] return; }
L_0026DA40:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026DA50; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0026DA50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA64u);  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x0026DA64u) [[unlikely]] return; }
L_0026DA64:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026DA74; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026DA74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA88u);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x0026DA88u) [[unlikely]] return; }
L_0026DA88:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA94u); set32(c.r[5], 0u + 10300u);  if (depth < kMaxDepth) unit_0062(c, 66u, depth + 1u); else { c.pc = 0x002A8800u; return; } if (c.pc != 0x0026DA94u) [[unlikely]] return; }
L_0026DA94:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u - 3u);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026DAB8; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026DAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DAC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00282740u; return; } if (c.pc != 0x0026DAC0u) [[unlikely]] return; }
L_0026DAC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DAD0u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026DAD0u) [[unlikely]] return; }
L_0026DAD0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0026DB28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DAE8u); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026DAE8u) [[unlikely]] return; }
L_0026DAE8:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026DB24; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 3028u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 176u)));  goto L_0026DB14; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 2;
L_0026DB14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
L_0026DB24:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0026DB28:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB38u); set32(c.r[5], 0u + 54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DB38u) [[unlikely]] return; }
L_0026DB38:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0026DB64; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB60u); set32(c.r[5], 0u + 17u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DB60u) [[unlikely]] return; }
L_0026DB60:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0026DB64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026DB70; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026DB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB78u);  if (depth < kMaxDepth) unit_005B(c, 288u, depth + 1u); else { c.pc = 0x0028ECA0u; return; } if (c.pc != 0x0026DB78u) [[unlikely]] return; }
L_0026DB78:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB8Cu); set32(c.r[5], 0u + 13u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DB8Cu) [[unlikely]] return; }
L_0026DB8C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DBA0u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DBA0u) [[unlikely]] return; }
L_0026DBA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 644u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0026DBE0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DBC0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0026DBC0u) [[unlikely]] return; }
L_0026DBC0:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DBDCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0026DBDCu) [[unlikely]] return; }
L_0026DBDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0026DBE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026DBF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x0026DC08u) [[unlikely]] return; }
L_0026DC08:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0026E290; }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E28C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 6048u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0026C000u < 16384u) { entry = entries_0053[(t - 0x0026C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0026DC44:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026DC54; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0026DC54:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC64u); c.f[13] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x0026DC64u) [[unlikely]] return; }
L_0026DC64:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026DC74; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026DC74:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC84u); c.f[13] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x0026DC84u) [[unlikely]] return; }
L_0026DC84:
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 4;
L_0026DC94:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DCA0u); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 311u, depth + 1u); else { c.pc = 0x002BF240u; return; } if (c.pc != 0x0026DCA0u) [[unlikely]] return; }
L_0026DCA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E28C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026DCB8; }
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 1;
L_0026DCB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DCCCu); set32(c.r[5], c.r[5].w[0] - 6064u);  if (depth < kMaxDepth) unit_0069(c, 8u, depth + 1u); else { c.pc = 0x002C4060u; return; } if (c.pc != 0x0026DCCCu) [[unlikely]] return; }
L_0026DCCC:
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 4;
L_0026DCDC:
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    c.f[1] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026E28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DCFCu); set32(c.r[4], ld32((c.r[17].w[0] + 152u)));  if (depth < kMaxDepth) unit_0025(c, 532u, depth + 1u); else { c.pc = 0x001B7F90u; return; } if (c.pc != 0x0026DCFCu) [[unlikely]] return; }
L_0026DCFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 279u, depth + 1u); else { c.pc = 0x0026E750u; return; } if (c.pc != 0x0026DD0Cu) [[unlikely]] return; }
L_0026DD0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_0026DD18:
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0026DD34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD2Cu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0026DD2Cu) [[unlikely]] return; }
L_0026DD2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_0026DD3C; }
L_0026DD34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026DD48; } }
L_0026DD3C:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] & 4112ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0026DD48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));  goto L_0026DD74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD58u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 49u, depth + 1u); else { c.pc = 0x0028C8A0u; return; } if (c.pc != 0x0026DD58u) [[unlikely]] return; }
L_0026DD58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026DD70; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD70u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0067(c, 301u, depth + 1u); else { c.pc = 0x002BF0A0u; return; } if (c.pc != 0x0026DD70u) [[unlikely]] return; }
L_0026DD70:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0026DD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD7Cu); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 313u, depth + 1u); else { c.pc = 0x002BF290u; return; } if (c.pc != 0x0026DD7Cu) [[unlikely]] return; }
L_0026DD7C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 1u);  goto L_0026DDA0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026DDA0; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0026DDA0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026E28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DDB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 301u, depth + 1u); else { c.pc = 0x0026EA70u; return; } if (c.pc != 0x0026DDB0u) [[unlikely]] return; }
L_0026DDB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026DDC0; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0026DDC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DDD4u);  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x0026DDD4u) [[unlikely]] return; }
L_0026DDD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026DDE4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026DDE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DDF8u);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x0026DDF8u) [[unlikely]] return; }
L_0026DDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 344u, depth + 1u); else { c.pc = 0x0026EF00u; return; } if (c.pc != 0x0026DE00u) [[unlikely]] return; }
L_0026DE00:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 531u, depth + 1u); else { c.pc = 0x001B7F70u; return; } if (c.pc != 0x0026DE0Cu) [[unlikely]] return; }
L_0026DE0C:
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_0026E230; } }
L_0026DE18:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE24u); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 311u, depth + 1u); else { c.pc = 0x002BF240u; return; } if (c.pc != 0x0026DE24u) [[unlikely]] return; }
L_0026DE24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E28C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE38u); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 309u, depth + 1u); else { c.pc = 0x002BF220u; return; } if (c.pc != 0x0026DE38u) [[unlikely]] return; }
L_0026DE38:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_0026DE44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 279u, depth + 1u); else { c.pc = 0x0026E750u; return; } if (c.pc != 0x0026DE4Cu) [[unlikely]] return; }
L_0026DE4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0026DE58:
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026DE8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE6Cu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0026DE6Cu) [[unlikely]] return; }
L_0026DE6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0026DE80; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DE8C; } }
L_0026DE80:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 4112ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0026DE8C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 144u)));  goto L_0026DEBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE9Cu); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 49u, depth + 1u); else { c.pc = 0x0028C8A0u; return; } if (c.pc != 0x0026DE9Cu) [[unlikely]] return; }
L_0026DE9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026DEB8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEB0u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0053(c, 262u, depth + 1u); else { c.pc = 0x0026E580u; return; } if (c.pc != 0x0026DEB0u) [[unlikely]] return; }
L_0026DEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E28C; } }
L_0026DEB8:
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 1;
L_0026DEBC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026E28C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 156u)));  goto L_0026DF2C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026DF28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0026DF28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026DF28; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF0Cu); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 310u, depth + 1u); else { c.pc = 0x002BF230u; return; } if (c.pc != 0x0026DF0Cu) [[unlikely]] return; }
L_0026DF0C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.f[12] = ld32((c.r[2].w[0] + 48u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF20u); set32(c.r[4], ld32((c.r[3].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 307u, depth + 1u); else { c.pc = 0x002BF160u; return; } if (c.pc != 0x0026DF20u) [[unlikely]] return; }
L_0026DF20:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 148u), c.r[3].w[0]);
    c.budget -= 2;
L_0026DF28:
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_0026DF2C:
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026E28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 301u, depth + 1u); else { c.pc = 0x0026EA70u; return; } if (c.pc != 0x0026DF50u) [[unlikely]] return; }
L_0026DF50:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_0026DF70; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF68u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0053(c, 262u, depth + 1u); else { c.pc = 0x0026E580u; return; } if (c.pc != 0x0026DF68u) [[unlikely]] return; }
L_0026DF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E28C; } }
L_0026DF70:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_0026DF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 307u, depth + 1u); else { c.pc = 0x0026EB20u; return; } if (c.pc != 0x0026DF80u) [[unlikely]] return; }
L_0026DF80:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0026DF8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026DFC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFA0u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0026DFA0u) [[unlikely]] return; }
L_0026DFA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0026DFB4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DFC0; } }
L_0026DFB4:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 4112ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0026DFC0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 144u)));  goto L_0026DFF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFD0u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 49u, depth + 1u); else { c.pc = 0x0028C8A0u; return; } if (c.pc != 0x0026DFD0u) [[unlikely]] return; }
L_0026DFD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026DFEC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFE4u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0053(c, 262u, depth + 1u); else { c.pc = 0x0026E580u; return; } if (c.pc != 0x0026DFE4u) [[unlikely]] return; }
L_0026DFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E28C; } }
L_0026DFEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 1;
L_0026DFF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026E28C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026E02C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E020u);  if (depth < kMaxDepth) unit_0067(c, 313u, depth + 1u); else { c.pc = 0x002BF290u; return; } if (c.pc != 0x0026E020u) [[unlikely]] return; }
L_0026E020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E28C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026E02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E034u);  if (depth < kMaxDepth) unit_0053(c, 313u, depth + 1u); else { c.pc = 0x0026EBA0u; return; } if (c.pc != 0x0026E034u) [[unlikely]] return; }
L_0026E034:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_0026E040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E048u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 314u, depth + 1u); else { c.pc = 0x0026EBB0u; return; } if (c.pc != 0x0026E048u) [[unlikely]] return; }
L_0026E048:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0026E054:
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026E088; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E068u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0026E068u) [[unlikely]] return; }
L_0026E068:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0026E07C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E088; } }
L_0026E07C:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 4112ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0026E088:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 144u)));  goto L_0026E0B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E098u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 49u, depth + 1u); else { c.pc = 0x0028C8A0u; return; } if (c.pc != 0x0026E098u) [[unlikely]] return; }
L_0026E098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E0B4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E0ACu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0053(c, 262u, depth + 1u); else { c.pc = 0x0026E580u; return; } if (c.pc != 0x0026E0ACu) [[unlikely]] return; }
L_0026E0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E28C; } }
L_0026E0B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 1;
L_0026E0B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026E28C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026E28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E0E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 335u, depth + 1u); else { c.pc = 0x0026EE20u; return; } if (c.pc != 0x0026E0E8u) [[unlikely]] return; }
L_0026E0E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_0026E0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E0FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 336u, depth + 1u); else { c.pc = 0x0026EE30u; return; } if (c.pc != 0x0026E0FCu) [[unlikely]] return; }
L_0026E0FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0026E108:
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026E13C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E11Cu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0026E11Cu) [[unlikely]] return; }
L_0026E11C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0026E130; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E13C; } }
L_0026E130:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 4112ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0026E13C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 144u)));  goto L_0026E16C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E14Cu); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 49u, depth + 1u); else { c.pc = 0x0028C8A0u; return; } if (c.pc != 0x0026E14Cu) [[unlikely]] return; }
L_0026E14C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E168; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E160u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0053(c, 262u, depth + 1u); else { c.pc = 0x0026E580u; return; } if (c.pc != 0x0026E160u) [[unlikely]] return; }
L_0026E160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E28C; } }
L_0026E168:
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 1;
L_0026E16C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026E28C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026E1A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E19Cu);  if (depth < kMaxDepth) unit_0067(c, 313u, depth + 1u); else { c.pc = 0x002BF290u; return; } if (c.pc != 0x0026E19Cu) [[unlikely]] return; }
L_0026E19C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E28C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026E1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E1B0u);  if (depth < kMaxDepth) unit_0053(c, 343u, depth + 1u); else { c.pc = 0x0026EEE0u; return; } if (c.pc != 0x0026E1B0u) [[unlikely]] return; }
L_0026E1B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_0026E1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E1C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 344u, depth + 1u); else { c.pc = 0x0026EF00u; return; } if (c.pc != 0x0026E1C4u) [[unlikely]] return; }
L_0026E1C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0026E1D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026E204; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E1E4u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0026E1E4u) [[unlikely]] return; }
L_0026E1E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_0026E1F8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E204; } }
L_0026E1F8:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0026E204:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 144u)));  goto L_0026E234; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E214u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 49u, depth + 1u); else { c.pc = 0x0028C8A0u; return; } if (c.pc != 0x0026E214u) [[unlikely]] return; }
L_0026E214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E230; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E228u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0053(c, 262u, depth + 1u); else { c.pc = 0x0026E580u; return; } if (c.pc != 0x0026E228u) [[unlikely]] return; }
L_0026E228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E28C; } }
L_0026E230:
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 1;
L_0026E234:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026E28C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 176u)));  goto L_0026E258; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026E260; } }
L_0026E258:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_0026E260:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026E28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E270u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x0026E270u) [[unlikely]] return; }
L_0026E270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E28C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_0026E284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E28Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 385u, depth + 1u); else { c.pc = 0x0026F540u; return; } if (c.pc != 0x0026E28Cu) [[unlikely]] return; }
L_0026E28C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0026E290:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026E2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E2B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x0026E2B4u) [[unlikely]] return; }
L_0026E2B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026E2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E2E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 194u, depth + 1u); else { c.pc = 0x00289A80u; return; } if (c.pc != 0x0026E2E4u) [[unlikely]] return; }
L_0026E2E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0026E32C; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0026E31C; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0026E31C:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_0026E32C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026E340:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 33ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026E548; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[22], ld32((c.r[5].w[0] + 3024u)));
    set32(c.r[4], c.r[5].w[0] + 112u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[23], c.r[4].w[0] + 2916u);  if (t) { goto L_0026E39C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_0026E3A0; } }
L_0026E39C:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026E3A0:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_0026E54C; }
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026E3C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0026E418; } }
L_0026E3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E3C8u); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026E3C8u) [[unlikely]] return; }
L_0026E3C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026E3E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026E3F8; } }
L_0026E3E8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0026E3F8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0026E418; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[20], ld32((c.r[4].w[0] + 4u)));  goto L_0026E410; }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026E410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E418; } }
L_0026E418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0026E53C; } }
L_0026E420:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[23].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 484u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 7;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0026E440; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026E440:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_0026E460; }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E458u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x0026E458u) [[unlikely]] return; }
L_0026E458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_0026E468; } }
L_0026E460:
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_0026E468:
    set32(c.r[2], 0u + 5u);
    c.f[20] = c.f[0];
    set32(c.r[3], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], 0u + 1u);  if (t) { goto L_0026E4B0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 108u)));  goto L_0026E49C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E494u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 110u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0026E494u) [[unlikely]] return; }
L_0026E494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_0026E4C8; } }
L_0026E49C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 110u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4A8u); set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0026E4A8u) [[unlikely]] return; }
L_0026E4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0026E4C8; } }
L_0026E4B0:
    set32(c.r[7], ld32((c.r[5].w[0] + 1104u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4C8u); c.r[9].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x0026E4C8u) [[unlikely]] return; }
L_0026E4C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.f[13] = c.f[0];
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = 0u;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.f[12] = c.f[20];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4F0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0026E4F0u) [[unlikely]] return; }
L_0026E4F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0026E53C; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0026E538; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 33u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E51Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0026E51Cu) [[unlikely]] return; }
L_0026E51C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026E538; } }
    st32((c.r[4].w[0] + 328u), c.f[20]);
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E538u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0026E538u) [[unlikely]] return; }
L_0026E538:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0026E53C:
    c.r[3].d[0] = c.r[19].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E420u | kUnwind; return; } goto L_0026E420; }
L_0026E548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0026E54C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0026E580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026E720; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;  goto L_0026E610; }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026E5FC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026E5D0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026E5D0:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5DCu); set32(c.r[5], 0u + 43u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x0026E5DCu) [[unlikely]] return; }
L_0026E5DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026E5EC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026E5EC:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5F8u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x0026E5F8u) [[unlikely]] return; }
L_0026E5F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026E5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E604u);  if (depth < kMaxDepth) unit_0053(c, 301u, depth + 1u); else { c.pc = 0x0026EA70u; return; } if (c.pc != 0x0026E604u) [[unlikely]] return; }
L_0026E604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E60Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 307u, depth + 1u); else { c.pc = 0x0026EB20u; return; } if (c.pc != 0x0026E60Cu) [[unlikely]] return; }
L_0026E60C:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 1;
L_0026E610:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));  goto L_0026E724; }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;  goto L_0026E654; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E630u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 313u, depth + 1u); else { c.pc = 0x0026EBA0u; return; } if (c.pc != 0x0026E630u) [[unlikely]] return; }
L_0026E630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E638u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026E638u) [[unlikely]] return; }
L_0026E638:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E650u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 314u, depth + 1u); else { c.pc = 0x0026EBB0u; return; } if (c.pc != 0x0026E650u) [[unlikely]] return; }
L_0026E650:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 1;
L_0026E654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E720; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;  goto L_0026E698; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E674u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026E674u) [[unlikely]] return; }
L_0026E674:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E68Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 335u, depth + 1u); else { c.pc = 0x0026EE20u; return; } if (c.pc != 0x0026E68Cu) [[unlikely]] return; }
L_0026E68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E694u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 336u, depth + 1u); else { c.pc = 0x0026EE30u; return; } if (c.pc != 0x0026E694u) [[unlikely]] return; }
L_0026E694:
    c.r[2].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 1;
L_0026E698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E720; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[2].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].sd[0] < 13ll ? 1ull : 0ull;  goto L_0026E700; }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_0026E6DC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026E6D0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026E6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E6D8u); set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  if (depth < kMaxDepth) unit_0068(c, 262u, depth + 1u); else { c.pc = 0x002C2F30u; return; } if (c.pc != 0x0026E6D8u) [[unlikely]] return; }
L_0026E6D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0026E6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E6E4u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026E6E4u) [[unlikely]] return; }
L_0026E6E4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E6FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 343u, depth + 1u); else { c.pc = 0x0026EEE0u; return; } if (c.pc != 0x0026E6FCu) [[unlikely]] return; }
L_0026E6FC:
    c.r[2].d[0] = c.r[16].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 1;
L_0026E700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E720; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[2].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E720u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 344u, depth + 1u); else { c.pc = 0x0026EF00u; return; } if (c.pc != 0x0026E720u) [[unlikely]] return; }
L_0026E720:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0026E724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E72Cu); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 301u, depth + 1u); else { c.pc = 0x002BF0A0u; return; } if (c.pc != 0x0026E72Cu) [[unlikely]] return; }
L_0026E72C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E738u); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 310u, depth + 1u); else { c.pc = 0x002BF230u; return; } if (c.pc != 0x0026E738u) [[unlikely]] return; }
L_0026E738:
    st32((c.r[17].w[0] + 96u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026E750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E770u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E770u) [[unlikely]] return; }
L_0026E770:
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 136u)));  goto L_0026E798; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.f[13] = ld32((c.r[2].w[0] + 2452u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E794u); c.f[12] = ld32((c.r[2].w[0] + 2448u));  if (depth < kMaxDepth) unit_0026(c, 18u, depth + 1u); else { c.pc = 0x001B8140u; return; } if (c.pc != 0x0026E794u) [[unlikely]] return; }
L_0026E794:
    set32(c.r[5], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 1;
L_0026E798:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], ld32((c.r[17].w[0] + 140u)));  goto L_0026E7B8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.f[12] = 0u;
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E7B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 299u, depth + 1u); else { c.pc = 0x002BEF10u; return; } if (c.pc != 0x0026E7B4u) [[unlikely]] return; }
L_0026E7B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 1;
L_0026E7B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_0026EA10; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E7CCu); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 309u, depth + 1u); else { c.pc = 0x002BF220u; return; } if (c.pc != 0x0026E7CCu) [[unlikely]] return; }
L_0026E7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E7D4u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026E7D4u) [[unlikely]] return; }
L_0026E7D4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_0026E7FC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E7F8u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0026E7F8u) [[unlikely]] return; }
L_0026E7F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0026E7FC:
    set32(c.r[2], ld32((c.r[3].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026E818; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026E818:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E828u); c.f[13] = ld32((c.r[2].w[0] + 52u));  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x0026E828u) [[unlikely]] return; }
L_0026E828:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026E838; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0026E838:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E848u); c.f[13] = ld32((c.r[2].w[0] + 52u));  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x0026E848u) [[unlikely]] return; }
L_0026E848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E850u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026E850u) [[unlikely]] return; }
L_0026E850:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  goto L_0026E8A4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  goto L_0026E8E0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026E880; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026E880:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 43u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E89Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026E89Cu) [[unlikely]] return; }
L_0026E89C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E8DC; } }
L_0026E8A4:
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E8DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026E8C0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026E8C0:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 24u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8DCu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026E8DCu) [[unlikely]] return; }
L_0026E8DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_0026E8E0:
    c.r[2].d[0] = c.r[2].d[0] & 257ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_0026E8FC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8F8u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x0026E8F8u) [[unlikely]] return; }
L_0026E8F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0026E8FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E904u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026E904u) [[unlikely]] return; }
L_0026E904:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026EA0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E91Cu); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026E91Cu) [[unlikely]] return; }
L_0026E91C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026EA0C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E93Cu); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026E93Cu) [[unlikely]] return; }
L_0026E93C:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 120u)));  goto L_0026E9F0; }
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 112u)));  goto L_0026E9A4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[16].w[0] + 148u)));  goto L_0026E968; }
    set32(c.r[7], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 1;
L_0026E968:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0026E994; } }
L_0026E974:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[7].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0026E994; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_0026E9A0; } }
L_0026E994:
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E974u | kUnwind; return; } goto L_0026E974; }
L_0026E9A0:
    set32(c.r[6], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_0026E9A4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0026EA0C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0026E9DC; } }
L_0026E9BC:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0026E9DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_0026EA0C; } }
L_0026E9DC:
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E9BCu | kUnwind; return; } goto L_0026E9BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026EA0C; } }
L_0026E9F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 124u)));  goto L_0026EA00; }
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 2;
L_0026EA00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026EA0C; } }
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 1;
L_0026EA0C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0026EA10:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA20u); set32(c.r[5], 0u + 51u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EA20u) [[unlikely]] return; }
L_0026EA20:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EA30u) [[unlikely]] return; }
L_0026EA30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026EA50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EA60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EA70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026EAC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0026EACC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 257ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));  goto L_0026EAB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EAACu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x0026EAACu) [[unlikely]] return; }
L_0026EAAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0026EAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EAB8u); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 310u, depth + 1u); else { c.pc = 0x002BF230u; return; } if (c.pc != 0x0026EAB8u) [[unlikely]] return; }
L_0026EAB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EAC8u); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 307u, depth + 1u); else { c.pc = 0x002BF160u; return; } if (c.pc != 0x0026EAC8u) [[unlikely]] return; }
L_0026EAC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0026EACC:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EADCu); set32(c.r[5], 0u + 52u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EADCu) [[unlikely]] return; }
L_0026EADC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0026EB08; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB04u); set32(c.r[5], 0u + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EB04u) [[unlikely]] return; }
L_0026EB04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0026EB08:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026EB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 100u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB40u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EB40u) [[unlikely]] return; }
L_0026EB40:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB4Cu); set32(c.r[5], 0u + 10300u);  if (depth < kMaxDepth) unit_0062(c, 64u, depth + 1u); else { c.pc = 0x002A87C0u; return; } if (c.pc != 0x0026EB4Cu) [[unlikely]] return; }
L_0026EB4C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EB6Cu) [[unlikely]] return; }
L_0026EB6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026EB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EB90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EBA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  [[clang::musttail]] return unit_0067(c, 309u, depth); }
L_0026EBB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 100u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EBD4u) [[unlikely]] return; }
L_0026EBD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBDCu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0026EBDCu) [[unlikely]] return; }
L_0026EBDC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0026EC18; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u + 2000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026EC14; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0026EC3C; }
L_0026EC14:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0026EC18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026EC24; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0026EC24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC38u);  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x0026EC38u) [[unlikely]] return; }
L_0026EC38:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0026EC3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026EC48; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026EC48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC5Cu);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x0026EC5Cu) [[unlikely]] return; }
L_0026EC5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026EC80; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026EC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC88u);  if (depth < kMaxDepth) unit_005B(c, 282u, depth + 1u); else { c.pc = 0x0028EA90u; return; } if (c.pc != 0x0026EC88u) [[unlikely]] return; }
L_0026EC88:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC9Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0026EC9Cu) [[unlikely]] return; }
L_0026EC9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ECA8u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026ECA8u) [[unlikely]] return; }
L_0026ECA8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  goto L_0026EDDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ECC0u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026ECC0u) [[unlikely]] return; }
L_0026ECC0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026EDD8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3028u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = c.r[2].d[0] + 0ull;  goto L_0026ECE4; }
L_0026ECE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ECECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0026ECECu) [[unlikely]] return; }
L_0026ECEC:
    set32(c.r[6], ld32((c.r[17].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 352u);  if (t) { goto L_0026ED0C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED04u); set32(c.r[4], c.r[2].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0026ED04u) [[unlikely]] return; }
L_0026ED04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 128u)));  if (t) { goto L_0026ED1C; } }
L_0026ED0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED18u); set32(c.r[4], c.r[2].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0026ED18u) [[unlikely]] return; }
L_0026ED18:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_0026ED1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 608u)));  goto L_0026ED34; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 128u)));  goto L_0026ED9C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 608u)));
    c.budget -= 1;
L_0026ED34:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 656u);
    set32(c.r[5], c.r[2].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED48u); set32(c.r[6], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0026ED48u) [[unlikely]] return; }
L_0026ED48:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED7Cu); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0026ED7Cu) [[unlikely]] return; }
L_0026ED7C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + 352u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED98u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0026ED98u) [[unlikely]] return; }
L_0026ED98:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_0026ED9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026EDD8; } }
    set32(c.r[6], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDB8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0026EDB8u) [[unlikely]] return; }
L_0026EDB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], c.r[3].w[0] + 352u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDD0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0026EDD0u) [[unlikely]] return; }
L_0026EDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDD8u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_006C(c, 107u, depth + 1u); else { c.pc = 0x002D1210u; return; } if (c.pc != 0x0026EDD8u) [[unlikely]] return; }
L_0026EDD8:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0026EDDC:
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EDE8u) [[unlikely]] return; }
L_0026EDE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0026EE00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EE10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EE20:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  [[clang::musttail]] return unit_0067(c, 310u, depth); }
L_0026EE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 100u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE50u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EE50u) [[unlikely]] return; }
L_0026EE50:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026EE60; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0026EE60:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE6Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x0026EE6Cu) [[unlikely]] return; }
L_0026EE6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026EE7C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026EE7C:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE88u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x0026EE88u) [[unlikely]] return; }
L_0026EE88:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EEA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EEA8u) [[unlikely]] return; }
L_0026EEA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026EEC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026EEE0:
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u - 2u);
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 176u), c.r[3].w[0]);  c.pc = t; return; }
L_0026EF00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 100u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF2Cu); c.r[18].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EF2Cu) [[unlikely]] return; }
L_0026EF2C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF40u); set32(c.r[5], 0u + 53u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EF40u) [[unlikely]] return; }
L_0026EF40:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF4Cu); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 309u, depth + 1u); else { c.pc = 0x002BF220u; return; } if (c.pc != 0x0026EF4Cu) [[unlikely]] return; }
L_0026EF4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF58u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026EF58u) [[unlikely]] return; }
L_0026EF58:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0026F0B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF70u); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026EF70u) [[unlikely]] return; }
L_0026EF70:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026F0B0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 3028u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0026EFA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0026EF9Cu) [[unlikely]] return; }
L_0026EF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 352u);  if (t) { goto L_0026EFB0; } }
L_0026EFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EFACu);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0026EFACu) [[unlikely]] return; }
L_0026EFAC:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_0026EFB0:
    set32(c.r[6], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 76u)));  goto L_0026EFD0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EFC8u); set32(c.r[4], c.r[2].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0026EFC8u) [[unlikely]] return; }
L_0026EFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 132u)));  if (t) { goto L_0026EFDC; } }
L_0026EFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EFD8u); set32(c.r[4], c.r[2].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0026EFD8u) [[unlikely]] return; }
L_0026EFD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 1;
L_0026EFDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 608u)));  goto L_0026EFF4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 132u)));  goto L_0026F05C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 1;
L_0026EFF4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + 656u);
    set32(c.r[5], c.r[2].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F008u); set32(c.r[6], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0026F008u) [[unlikely]] return; }
L_0026F008:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F03Cu); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0026F03Cu) [[unlikely]] return; }
L_0026F03C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + 352u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F058u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0026F058u) [[unlikely]] return; }
L_0026F058:
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 1;
L_0026F05C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_0026F09C; }
    set32(c.r[6], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F078u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0026F078u) [[unlikely]] return; }
L_0026F078:
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], c.r[3].w[0] + 352u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F090u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0026F090u) [[unlikely]] return; }
L_0026F090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F098u); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_006C(c, 107u, depth + 1u); else { c.pc = 0x002D1210u; return; } if (c.pc != 0x0026F098u) [[unlikely]] return; }
L_0026F098:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_0026F09C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFDFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 5;
L_0026F0B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_0026F0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F0BCu);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026F0BCu) [[unlikely]] return; }
L_0026F0BC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0026F3A8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 3028u)));  if (t) { goto L_0026F0E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (t) { goto L_0026F0F0; } }
L_0026F0E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 2;
L_0026F0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F0F8u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026F0F8u) [[unlikely]] return; }
L_0026F0F8:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 76u)));  goto L_0026F128; }
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2000ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 176u)));  goto L_0026F240; }
    c.r[1].d[0] = c.r[3].sd[0] < 2010ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026F23C; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_0026F128:
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026F13C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026F194; } }
L_0026F13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F144u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026F144u) [[unlikely]] return; }
L_0026F144:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026F164; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026F174; } }
L_0026F164:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026F174:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0026F194; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0026F18C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F194; } }
L_0026F194:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[6], 0u + 33u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F1A4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0026F1A4u) [[unlikely]] return; }
L_0026F1A4:
    set32(c.r[19], ld32((c.r[18].w[0] + 76u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0026F1C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026F224; } }
L_0026F1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F1C8u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026F1C8u) [[unlikely]] return; }
L_0026F1C8:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026F1E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026F1F8; } }
L_0026F1E8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026F1F8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0026F224; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0026F218; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026F21C; } }
L_0026F218:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0026F21C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F224; } }
L_0026F224:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[6], 0u + 33u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F234u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0026F234u) [[unlikely]] return; }
L_0026F234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026F374; } }
L_0026F23C:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_0026F240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F254u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 338u, depth + 1u); else { c.pc = 0x0028B760u; return; } if (c.pc != 0x0026F254u) [[unlikely]] return; }
L_0026F254:
    set32(c.r[17], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026F26C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026F2D0; } }
L_0026F26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F274u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026F274u) [[unlikely]] return; }
L_0026F274:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026F294; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026F2A4; } }
L_0026F294:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026F2A4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0026F2D0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0026F2C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026F2C8; } }
L_0026F2C4:
    set32(c.r[5], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_0026F2C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F2D0; } }
L_0026F2D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[6], 0u + 33u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2E0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0026F2E0u) [[unlikely]] return; }
L_0026F2E0:
    set32(c.r[19], ld32((c.r[18].w[0] + 76u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0026F2FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026F360; } }
L_0026F2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F304u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0026F304u) [[unlikely]] return; }
L_0026F304:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0026F324; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026F334; } }
L_0026F324:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0026F334:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0026F360; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_0026F354; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026F358; } }
L_0026F354:
    set32(c.r[5], c.r[2].w[0] + 36u);
    c.budget -= 1;
L_0026F358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F360; } }
L_0026F360:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[6], 0u + 33u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F370u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0026F370u) [[unlikely]] return; }
L_0026F370:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026F374:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0026F38C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F38Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0026F38Cu) [[unlikely]] return; }
L_0026F38C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0026F3A4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F3A4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0026F3A4u) [[unlikely]] return; }
L_0026F3A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0026F3A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026F3B4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026F3B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F3C8u);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x0026F3C8u) [[unlikely]] return; }
L_0026F3C8:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], 0u - 2u);
    set32(c.r[5], 0u + 33u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F3F0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0026F3F0u) [[unlikely]] return; }
L_0026F3F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026F400; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026F400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F408u);  if (depth < kMaxDepth) unit_005B(c, 282u, depth + 1u); else { c.pc = 0x0028EA90u; return; } if (c.pc != 0x0026F408u) [[unlikely]] return; }
L_0026F408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F410u); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0026F410u) [[unlikely]] return; }
L_0026F410:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0026F44C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], 0u + 2000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026F448; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 72u)));  goto L_0026F470; }
L_0026F448:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0026F44C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026F458; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0026F458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F46Cu);  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x0026F46Cu) [[unlikely]] return; }
L_0026F46C:
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 1;
L_0026F470:
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 72u)));  goto L_0026F4A8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026F4A4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4A4u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F4A4u) [[unlikely]] return; }
L_0026F4A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 1;
L_0026F4A8:
    c.r[2].d[0] = c.r[2].d[0] & 257ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0] + 16u)));  goto L_0026F4C4; }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4C0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x0026F4C0u) [[unlikely]] return; }
L_0026F4C0:
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_0026F4C4:
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F4D0u) [[unlikely]] return; }
L_0026F4D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026F4E0; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026F4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4E8u);  if (depth < kMaxDepth) unit_0058(c, 279u, depth + 1u); else { c.pc = 0x00282AD0u; return; } if (c.pc != 0x0026F4E8u) [[unlikely]] return; }
L_0026F4E8:
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F4F8u) [[unlikely]] return; }
L_0026F4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0026F520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F55Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F55Cu) [[unlikely]] return; }
L_0026F55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F564u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 38u, depth + 1u); else { c.pc = 0x0028C790u; return; } if (c.pc != 0x0026F564u) [[unlikely]] return; }
L_0026F564:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F574u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x0026F574u) [[unlikely]] return; }
L_0026F574:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F590u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x0026F590u) [[unlikely]] return; }
L_0026F590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026F5A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F5B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026F630; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21688u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0026F618; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F60Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0026F60Cu) [[unlikely]] return; }
L_0026F60C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F618u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0026F618u) [[unlikely]] return; }
L_0026F618:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0026F634; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F630u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0026F630u) [[unlikely]] return; }
L_0026F630:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026F634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F650:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F5B0u | kUnwind; return; } goto L_0026F5B0; }
L_0026F660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F678u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x0026F678u) [[unlikely]] return; }
L_0026F678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21776u);
    set32(c.r[3], c.r[3].w[0] + 21832u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x554B0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21569ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F6C8u); st32((c.r[16].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x0026F6C8u) [[unlikely]] return; }
L_0026F6C8:
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0026F75C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], c.r[2].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F70Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0026F70Cu) [[unlikely]] return; }
L_0026F70C:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], 0u + 7u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_0026F748; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F73Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 364u, depth + 1u); else { c.pc = 0x002933C0u; return; } if (c.pc != 0x0026F73Cu) [[unlikely]] return; }
L_0026F73C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_0026F78C; } }
L_0026F748:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 644u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_0026F78C; } }
L_0026F75C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F768u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0026F768u) [[unlikely]] return; }
L_0026F768:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 644u)));
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 9;
L_0026F78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F794u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026F794u) [[unlikely]] return; }
L_0026F794:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0026F7CC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 488u)));  goto L_0026F7B8; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F7B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0026F7EC; } }
L_0026F7CC:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 492u)));  goto L_0026F7DC; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F7DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 4;
L_0026F7EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7F8u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0026F7F8u) [[unlikely]] return; }
L_0026F7F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.f[0] = ld32((c.r[2].w[0] + 1152u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 596u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 1152u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F82Cu); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x0026F82Cu) [[unlikely]] return; }
L_0026F82C:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0026F86C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[0] = ld32((c.r[3].w[0] + 1152u));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 596u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 1152u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F868u); set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x0026F868u) [[unlikely]] return; }
L_0026F868:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0026F86C:
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));  if (t) { goto L_0026F890; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_0026F890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F898u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x0026F898u) [[unlikely]] return; }
L_0026F898:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F8ACu); set32(c.r[5], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F8ACu) [[unlikely]] return; }
L_0026F8AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F8C0u); set32(c.r[5], 0u + 55u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F8C0u) [[unlikely]] return; }
L_0026F8C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  goto L_0026F914; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F90Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F90Cu) [[unlikely]] return; }
L_0026F90C:
    st32((c.r[16].w[0] + 124u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 2;
L_0026F914:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0026F934; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F92Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F92Cu) [[unlikely]] return; }
L_0026F92C:
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_0026F934:
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026F950; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F950u);  if (depth < kMaxDepth) unit_0026(c, 17u, depth + 1u); else { c.pc = 0x001B8130u; return; } if (c.pc != 0x0026F950u) [[unlikely]] return; }
L_0026F950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F958u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x0026F958u) [[unlikely]] return; }
L_0026F958:
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F974u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x0026F974u) [[unlikely]] return; }
L_0026F974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026F990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026F9B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 176u)));  if (t) { goto L_0026F9B4; } }
L_0026F9B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F9B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_0026F9D4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026F9D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F9D0u);  if (depth < kMaxDepth) unit_0071(c, 293u, depth + 1u); else { c.pc = 0x002E6740u; return; } if (c.pc != 0x0026F9D0u) [[unlikely]] return; }
L_0026F9D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_0026F9D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F9DCu); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026F9DCu) [[unlikely]] return; }
L_0026F9DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F9ECu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 320u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x0026F9ECu) [[unlikely]] return; }
L_0026F9EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F9FCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 326u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x0026F9FCu) [[unlikely]] return; }
L_0026F9FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 592u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 116u)));  goto L_0026FA30; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 116u)));  goto L_0026FA28; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FA24u) [[unlikely]] return; }
L_0026FA24:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_0026FA28:
    st32((c.r[3].w[0] + 592u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 2;
L_0026FA30:
    set32(c.r[4], ld32((c.r[3].w[0] + 604u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0026FA60; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 116u)));  goto L_0026FA58; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FA54u) [[unlikely]] return; }
L_0026FA54:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_0026FA58:
    st32((c.r[3].w[0] + 604u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 2;
L_0026FA60:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  goto L_0026FAF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA70u); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0026FA70u) [[unlikely]] return; }
L_0026FA70:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA80u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 320u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x0026FA80u) [[unlikely]] return; }
L_0026FA80:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA90u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 326u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x0026FA90u) [[unlikely]] return; }
L_0026FA90:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 592u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 120u)));  goto L_0026FAC4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 120u)));  goto L_0026FABC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FAB8u) [[unlikely]] return; }
L_0026FAB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_0026FABC:
    st32((c.r[3].w[0] + 592u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 2;
L_0026FAC4:
    set32(c.r[4], ld32((c.r[3].w[0] + 604u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026FAF0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 120u)));  goto L_0026FAEC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAE8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FAE8u) [[unlikely]] return; }
L_0026FAE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_0026FAEC:
    st32((c.r[3].w[0] + 604u), 0u);
    c.budget -= 1;
L_0026FAF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 1;
L_0026FAF4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0026FB14; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FB0Cu) [[unlikely]] return; }
L_0026FB0C:
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0026FB14:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026FB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0026FB5C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB58u); c.f[13] = ld32((c.r[2].w[0] + 2452u));  if (depth < kMaxDepth) unit_0026(c, 18u, depth + 1u); else { c.pc = 0x001B8140u; return; } if (c.pc != 0x0026FB58u) [[unlikely]] return; }
L_0026FB58:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0026FB5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026FB68; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0026FB68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB7Cu);  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x0026FB7Cu) [[unlikely]] return; }
L_0026FB7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026FB8C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026FB8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBA0u);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x0026FBA0u) [[unlikely]] return; }
L_0026FBA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026FBB0; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0026FBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBB8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00282740u; return; } if (c.pc != 0x0026FBB8u) [[unlikely]] return; }
L_0026FBB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], 0u - 3u);
    set32(c.r[2], ld32((c.r[3].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0026FBE8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_0026FBE8:
    set32(c.r[17], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBF4u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0026FBF4u) [[unlikely]] return; }
L_0026FBF4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0026FC4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC0Cu); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0026FC0Cu) [[unlikely]] return; }
L_0026FC0C:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026FC48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 3028u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 176u)));  goto L_0026FC38; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 2;
L_0026FC38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
L_0026FC48:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0026FC4C:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC5Cu); set32(c.r[5], 0u + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FC5Cu) [[unlikely]] return; }
L_0026FC5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC70u); set32(c.r[5], 0u + 13u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FC70u) [[unlikely]] return; }
L_0026FC70:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC84u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FC84u) [[unlikely]] return; }
L_0026FC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 415u, depth + 1u); else { c.pc = 0x0026F990u; return; } if (c.pc != 0x0026FC8Cu) [[unlikely]] return; }
L_0026FC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026FCA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCC0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x0026FCC0u) [[unlikely]] return; }
L_0026FCC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  [[clang::musttail]] return unit_0054(c, 32u, depth); }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 31u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5968u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0026C000u < 16384u) { entry = entries_0053[(t - 0x0026C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0026FCFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD08u); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 301u, depth + 1u); else { c.pc = 0x002BF0A0u; return; } if (c.pc != 0x0026FD08u) [[unlikely]] return; }
L_0026FD08:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], 0u + 14u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[7], 0u + 38u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD28u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x0026FD28u) [[unlikely]] return; }
L_0026FD28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0026FD3C; }
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 344u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
L_0026FD3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026FD48; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0026FD48:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD64u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0026FD64u) [[unlikely]] return; }
L_0026FD64:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_0026FD70:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 120u)));  goto L_0026FD88; }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 580u)));  if (t) { goto L_0026FD8C; } }
L_0026FD88:
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 1;
L_0026FD8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD94u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_005C(c, 46u, depth + 1u); else { c.pc = 0x00290810u; return; } if (c.pc != 0x0026FD94u) [[unlikely]] return; }
L_0026FD94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 112u)));  goto L_0026FFE4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026FFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDB4u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0026FDB4u) [[unlikely]] return; }
L_0026FDB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 108u), c.r[4].w[0]);  goto L_0026FDDC; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDD4u); set32(c.r[6], c.r[6].w[0] - 5984u);  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x0026FDD4u) [[unlikely]] return; }
L_0026FDD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 108u), c.r[4].w[0]);
    c.budget -= 2;
L_0026FDDC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 31u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDECu);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0026FDECu) [[unlikely]] return; }
L_0026FDEC:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x0026FDFCu) [[unlikely]] return; }
L_0026FDFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0026FE08:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 31u, depth); } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE2Cu); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x0026FE2Cu) [[unlikely]] return; }
L_0026FE2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 31u, depth); } }
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE44u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0026FE44u) [[unlikely]] return; }
L_0026FE44:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 116u)));  goto L_0026FE84; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE5Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026FE5Cu) [[unlikely]] return; }
L_0026FE5C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE6Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026FE6Cu) [[unlikely]] return; }
L_0026FE6C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE7Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x0026FE7Cu) [[unlikely]] return; }
L_0026FE7C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 2;
L_0026FE84:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE90u); st32((c.r[2].w[0] + 592u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0026FE90u) [[unlikely]] return; }
L_0026FE90:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 116u)));  goto L_0026FEBC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEA8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026FEA8u) [[unlikely]] return; }
L_0026FEA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEB4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x0026FEB4u) [[unlikely]] return; }
L_0026FEB4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 2;
L_0026FEBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FECCu); st32((c.r[2].w[0] + 604u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026FECCu) [[unlikely]] return; }
L_0026FECC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x0026FEE0u) [[unlikely]] return; }
L_0026FEE0:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 592u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEF4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 317u, depth + 1u); else { c.pc = 0x0020B090u; return; } if (c.pc != 0x0026FEF4u) [[unlikely]] return; }
L_0026FEF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF08u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 323u, depth + 1u); else { c.pc = 0x0020B310u; return; } if (c.pc != 0x0026FF08u) [[unlikely]] return; }
L_0026FF08:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026FFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF1Cu); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0026FF1Cu) [[unlikely]] return; }
L_0026FF1C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 120u)));  goto L_0026FF5C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026FF34u) [[unlikely]] return; }
L_0026FF34:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF44u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026FF44u) [[unlikely]] return; }
L_0026FF44:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF54u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x0026FF54u) [[unlikely]] return; }
L_0026FF54:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 2;
L_0026FF5C:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF68u); st32((c.r[2].w[0] + 592u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0026FF68u) [[unlikely]] return; }
L_0026FF68:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 120u)));  goto L_0026FF94; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF80u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026FF80u) [[unlikely]] return; }
L_0026FF80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF8Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x0026FF8Cu) [[unlikely]] return; }
L_0026FF8C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 2;
L_0026FF94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFA4u); st32((c.r[2].w[0] + 604u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0026FFA4u) [[unlikely]] return; }
L_0026FFA4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x0026FFB8u) [[unlikely]] return; }
L_0026FFB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 592u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFCCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 317u, depth + 1u); else { c.pc = 0x0020B090u; return; } if (c.pc != 0x0026FFCCu) [[unlikely]] return; }
L_0026FFCC:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFE0u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 323u, depth + 1u); else { c.pc = 0x0020B310u; return; } if (c.pc != 0x0026FFE0u) [[unlikely]] return; }
L_0026FFE0:
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_0026FFE4:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  [[clang::musttail]] return unit_0054(c, 3u, depth); }
    set32(c.r[3], ld32((c.r[28].w[0] - 30344u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270004u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 299u, depth + 1u); else { c.pc = 0x002BEF10u; return; } if (c.pc != 0x00270004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0054(c, 2u, depth);
}

}
