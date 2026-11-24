#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0054[4096] = {
    1, 2, 3, 0, 4, 0, 0, 0, 0, 0, 5, 6, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 32, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0,
    0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0,
    121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0,
    0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    301, 302, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352,
    0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0,
    0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391,
    0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397,
    0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0,
    0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0,
    0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0,
    0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0,
    469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0,
    474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0,
};

void unit_0054(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00270000;
    case 2u: goto L_00270004;
    case 3u: goto L_00270008;
    case 4u: goto L_00270010;
    case 5u: goto L_00270028;
    case 6u: goto L_0027002C;
    case 7u: goto L_0027003C;
    case 8u: goto L_00270044;
    case 9u: goto L_00270050;
    case 10u: goto L_00270064;
    case 11u: goto L_00270094;
    case 12u: goto L_002700A8;
    case 13u: goto L_002700BC;
    case 14u: goto L_002700CC;
    case 15u: goto L_002700D8;
    case 16u: goto L_002700E0;
    case 17u: goto L_002700EC;
    case 18u: goto L_002700F4;
    case 19u: goto L_00270118;
    case 20u: goto L_00270128;
    case 21u: goto L_00270148;
    case 22u: goto L_00270158;
    case 23u: goto L_002701A8;
    case 24u: goto L_002701F8;
    case 25u: goto L_0027020C;
    case 26u: goto L_0027023C;
    case 27u: goto L_00270250;
    case 28u: goto L_0027028C;
    case 29u: goto L_002702D0;
    case 30u: goto L_002702E4;
    case 31u: goto L_002702EC;
    case 32u: goto L_002702F0;
    case 33u: goto L_00270310;
    case 34u: goto L_00270324;
    case 35u: goto L_00270340;
    case 36u: goto L_0027035C;
    case 37u: goto L_0027038C;
    case 38u: goto L_002703D8;
    case 39u: goto L_00270434;
    case 40u: goto L_0027044C;
    case 41u: goto L_00270488;
    case 42u: goto L_002704E4;
    case 43u: goto L_002704FC;
    case 44u: goto L_00270550;
    case 45u: goto L_002705DC;
    case 46u: goto L_00270650;
    case 47u: goto L_002706AC;
    case 48u: goto L_0027070C;
    case 49u: goto L_00270734;
    case 50u: goto L_0027075C;
    case 51u: goto L_00270788;
    case 52u: goto L_002707A4;
    case 53u: goto L_002707E0;
    case 54u: goto L_00270818;
    case 55u: goto L_0027082C;
    case 56u: goto L_00270834;
    case 57u: goto L_0027083C;
    case 58u: goto L_0027086C;
    case 59u: goto L_00270874;
    case 60u: goto L_00270890;
    case 61u: goto L_00270898;
    case 62u: goto L_002708A4;
    case 63u: goto L_002708C0;
    case 64u: goto L_002708E0;
    case 65u: goto L_00270900;
    case 66u: goto L_0027091C;
    case 67u: goto L_00270938;
    case 68u: goto L_0027095C;
    case 69u: goto L_00270970;
    case 70u: goto L_00270980;
    case 71u: goto L_002709A0;
    case 72u: goto L_002709B8;
    case 73u: goto L_002709BC;
    case 74u: goto L_002709C8;
    case 75u: goto L_002709F4;
    case 76u: goto L_00270A50;
    case 77u: goto L_00270A5C;
    case 78u: goto L_00270A68;
    case 79u: goto L_00270A74;
    case 80u: goto L_00270A84;
    case 81u: goto L_00270AB8;
    case 82u: goto L_00270B14;
    case 83u: goto L_00270B20;
    case 84u: goto L_00270B2C;
    case 85u: goto L_00270C38;
    case 86u: goto L_00270C60;
    case 87u: goto L_00270C74;
    case 88u: goto L_00270CA0;
    case 89u: goto L_00270CE4;
    case 90u: goto L_00270D00;
    case 91u: goto L_00270D20;
    case 92u: goto L_00270D8C;
    case 93u: goto L_00270DA8;
    case 94u: goto L_00270DC0;
    case 95u: goto L_00270DD8;
    case 96u: goto L_00270E14;
    case 97u: goto L_00270E30;
    case 98u: goto L_00270E4C;
    case 99u: goto L_00270E54;
    case 100u: goto L_00270E60;
    case 101u: goto L_00270E78;
    case 102u: goto L_00270E94;
    case 103u: goto L_00270EAC;
    case 104u: goto L_00270EC8;
    case 105u: goto L_00270ED8;
    case 106u: goto L_00270EE0;
    case 107u: goto L_00270EF0;
    case 108u: goto L_00270F4C;
    case 109u: goto L_00270F58;
    case 110u: goto L_00270F70;
    case 111u: goto L_00270F90;
    case 112u: goto L_00270FA0;
    case 113u: goto L_00270FB4;
    case 114u: goto L_00270FDC;
    case 115u: goto L_00271004;
    case 116u: goto L_00271018;
    case 117u: goto L_00271030;
    case 118u: goto L_00271044;
    case 119u: goto L_00271060;
    case 120u: goto L_00271070;
    case 121u: goto L_00271080;
    case 122u: goto L_00271094;
    case 123u: goto L_0027109C;
    case 124u: goto L_002710B0;
    case 125u: goto L_002710C0;
    case 126u: goto L_002710DC;
    case 127u: goto L_00271114;
    case 128u: goto L_00271164;
    case 129u: goto L_00271180;
    case 130u: goto L_002711A0;
    case 131u: goto L_002711B8;
    case 132u: goto L_002711D8;
    case 133u: goto L_00271218;
    case 134u: goto L_00271270;
    case 135u: goto L_00271290;
    case 136u: goto L_002712A4;
    case 137u: goto L_002712C0;
    case 138u: goto L_0027131C;
    case 139u: goto L_00271328;
    case 140u: goto L_00271340;
    case 141u: goto L_00271360;
    case 142u: goto L_00271370;
    case 143u: goto L_00271388;
    case 144u: goto L_002713D8;
    case 145u: goto L_00271408;
    case 146u: goto L_00271474;
    case 147u: goto L_00271490;
    case 148u: goto L_002714BC;
    case 149u: goto L_002714CC;
    case 150u: goto L_002714E0;
    case 151u: goto L_0027150C;
    case 152u: goto L_00271520;
    case 153u: goto L_00271544;
    case 154u: goto L_00271580;
    case 155u: goto L_002715A0;
    case 156u: goto L_00271600;
    case 157u: goto L_00271618;
    case 158u: goto L_00271628;
    case 159u: goto L_00271674;
    case 160u: goto L_002716A4;
    case 161u: goto L_002716B0;
    case 162u: goto L_002716F8;
    case 163u: goto L_00271708;
    case 164u: goto L_00271724;
    case 165u: goto L_0027173C;
    case 166u: goto L_00271754;
    case 167u: goto L_00271764;
    case 168u: goto L_00271770;
    case 169u: goto L_0027179C;
    case 170u: goto L_002717A8;
    case 171u: goto L_002717B4;
    case 172u: goto L_002717C4;
    case 173u: goto L_002717E0;
    case 174u: goto L_002717F0;
    case 175u: goto L_00271828;
    case 176u: goto L_00271834;
    case 177u: goto L_00271844;
    case 178u: goto L_00271850;
    case 179u: goto L_00271860;
    case 180u: goto L_00271868;
    case 181u: goto L_00271880;
    case 182u: goto L_00271890;
    case 183u: goto L_002718A4;
    case 184u: goto L_002718B8;
    case 185u: goto L_002718CC;
    case 186u: goto L_002718E0;
    case 187u: goto L_002718F4;
    case 188u: goto L_00271908;
    case 189u: goto L_00271914;
    case 190u: goto L_00271934;
    case 191u: goto L_00271968;
    case 192u: goto L_00271974;
    case 193u: goto L_0027199C;
    case 194u: goto L_002719A8;
    case 195u: goto L_002719B8;
    case 196u: goto L_00271A04;
    case 197u: goto L_00271A14;
    case 198u: goto L_00271A28;
    case 199u: goto L_00271A34;
    case 200u: goto L_00271A54;
    case 201u: goto L_00271A6C;
    case 202u: goto L_00271A88;
    case 203u: goto L_00271A98;
    case 204u: goto L_00271AC8;
    case 205u: goto L_00271AF4;
    case 206u: goto L_00271B20;
    case 207u: goto L_00271B54;
    case 208u: goto L_00271B6C;
    case 209u: goto L_00271B74;
    case 210u: goto L_00271B7C;
    case 211u: goto L_00271B98;
    case 212u: goto L_00271BA8;
    case 213u: goto L_00271BBC;
    case 214u: goto L_00271BD8;
    case 215u: goto L_00271BE4;
    case 216u: goto L_00271BEC;
    case 217u: goto L_00271C0C;
    case 218u: goto L_00271C20;
    case 219u: goto L_00271C30;
    case 220u: goto L_00271C7C;
    case 221u: goto L_00271C98;
    case 222u: goto L_00271CA4;
    case 223u: goto L_00271CD4;
    case 224u: goto L_00271D3C;
    case 225u: goto L_00271D58;
    case 226u: goto L_00271D64;
    case 227u: goto L_00271D84;
    case 228u: goto L_00271DC4;
    case 229u: goto L_00271DF4;
    case 230u: goto L_00271E04;
    case 231u: goto L_00271E10;
    case 232u: goto L_00271E30;
    case 233u: goto L_00271E40;
    case 234u: goto L_00271E54;
    case 235u: goto L_00271E70;
    case 236u: goto L_00271E80;
    case 237u: goto L_00271EDC;
    case 238u: goto L_00271EE8;
    case 239u: goto L_00271F00;
    case 240u: goto L_00271F20;
    case 241u: goto L_00271F30;
    case 242u: goto L_00271F44;
    case 243u: goto L_00271FBC;
    case 244u: goto L_00271FD0;
    case 245u: goto L_00271FE0;
    case 246u: goto L_00271FF4;
    case 247u: goto L_0027201C;
    case 248u: goto L_00272030;
    case 249u: goto L_00272044;
    case 250u: goto L_002720CC;
    case 251u: goto L_002720F0;
    case 252u: goto L_00272104;
    case 253u: goto L_00272118;
    case 254u: goto L_00272120;
    case 255u: goto L_00272154;
    case 256u: goto L_00272178;
    case 257u: goto L_002721AC;
    case 258u: goto L_002721E8;
    case 259u: goto L_00272224;
    case 260u: goto L_00272260;
    case 261u: goto L_00272298;
    case 262u: goto L_002722BC;
    case 263u: goto L_002722C8;
    case 264u: goto L_00272344;
    case 265u: goto L_002723A4;
    case 266u: goto L_002723B4;
    case 267u: goto L_002723D0;
    case 268u: goto L_0027242C;
    case 269u: goto L_00272438;
    case 270u: goto L_00272450;
    case 271u: goto L_00272470;
    case 272u: goto L_00272480;
    case 273u: goto L_00272494;
    case 274u: goto L_002724D0;
    case 275u: goto L_002724EC;
    case 276u: goto L_002724F4;
    case 277u: goto L_00272510;
    case 278u: goto L_00272520;
    case 279u: goto L_00272534;
    case 280u: goto L_00272564;
    case 281u: goto L_00272570;
    case 282u: goto L_00272578;
    case 283u: goto L_00272584;
    case 284u: goto L_002725C0;
    case 285u: goto L_00272600;
    case 286u: goto L_00272620;
    case 287u: goto L_00272630;
    case 288u: goto L_00272644;
    case 289u: goto L_00272660;
    case 290u: goto L_002726BC;
    case 291u: goto L_002726C8;
    case 292u: goto L_002726E0;
    case 293u: goto L_00272700;
    case 294u: goto L_00272710;
    case 295u: goto L_00272728;
    case 296u: goto L_00272788;
    case 297u: goto L_00272794;
    case 298u: goto L_002727B4;
    case 299u: goto L_002727CC;
    case 300u: goto L_002727F0;
    case 301u: goto L_00272800;
    case 302u: goto L_00272804;
    case 303u: goto L_00272810;
    case 304u: goto L_00272820;
    case 305u: goto L_00272830;
    case 306u: goto L_0027284C;
    case 307u: goto L_00272874;
    case 308u: goto L_002728A4;
    case 309u: goto L_002728C0;
    case 310u: goto L_002728D8;
    case 311u: goto L_002728F8;
    case 312u: goto L_00272910;
    case 313u: goto L_00272934;
    case 314u: goto L_00272970;
    case 315u: goto L_00272978;
    case 316u: goto L_00272988;
    case 317u: goto L_002729A8;
    case 318u: goto L_002729C8;
    case 319u: goto L_002729E0;
    case 320u: goto L_002729F0;
    case 321u: goto L_002729FC;
    case 322u: goto L_00272A40;
    case 323u: goto L_00272A50;
    case 324u: goto L_00272A64;
    case 325u: goto L_00272A6C;
    case 326u: goto L_00272A84;
    case 327u: goto L_00272A94;
    case 328u: goto L_00272AA4;
    case 329u: goto L_00272AB8;
    case 330u: goto L_00272AD0;
    case 331u: goto L_00272ADC;
    case 332u: goto L_00272AF4;
    case 333u: goto L_00272B08;
    case 334u: goto L_00272B1C;
    case 335u: goto L_00272B30;
    case 336u: goto L_00272B4C;
    case 337u: goto L_00272B5C;
    case 338u: goto L_00272B70;
    case 339u: goto L_00272B90;
    case 340u: goto L_00272BD8;
    case 341u: goto L_00272BE8;
    case 342u: goto L_00272C24;
    case 343u: goto L_00272C58;
    case 344u: goto L_00272D04;
    case 345u: goto L_00272D30;
    case 346u: goto L_00272D58;
    case 347u: goto L_00272D94;
    case 348u: goto L_00272DA0;
    case 349u: goto L_00272DCC;
    case 350u: goto L_00272DDC;
    case 351u: goto L_00272DF4;
    case 352u: goto L_00272DFC;
    case 353u: goto L_00272E08;
    case 354u: goto L_00272E1C;
    case 355u: goto L_00272E58;
    case 356u: goto L_00272EF4;
    case 357u: goto L_00272F38;
    case 358u: goto L_00272F54;
    case 359u: goto L_00272F88;
    case 360u: goto L_00272F94;
    case 361u: goto L_00273020;
    case 362u: goto L_0027303C;
    case 363u: goto L_00273058;
    case 364u: goto L_0027307C;
    case 365u: goto L_002730B0;
    case 366u: goto L_002730BC;
    case 367u: goto L_00273140;
    case 368u: goto L_0027314C;
    case 369u: goto L_00273168;
    case 370u: goto L_00273178;
    case 371u: goto L_00273194;
    case 372u: goto L_002731A8;
    case 373u: goto L_002731B8;
    case 374u: goto L_002731D4;
    case 375u: goto L_002731EC;
    case 376u: goto L_00273208;
    case 377u: goto L_00273228;
    case 378u: goto L_002732D8;
    case 379u: goto L_002732F8;
    case 380u: goto L_00273320;
    case 381u: goto L_00273334;
    case 382u: goto L_00273350;
    case 383u: goto L_00273364;
    case 384u: goto L_002733C0;
    case 385u: goto L_002733F0;
    case 386u: goto L_00273428;
    case 387u: goto L_00273444;
    case 388u: goto L_002734B8;
    case 389u: goto L_002734D4;
    case 390u: goto L_002734E0;
    case 391u: goto L_002734FC;
    case 392u: goto L_0027351C;
    case 393u: goto L_00273524;
    case 394u: goto L_0027353C;
    case 395u: goto L_00273554;
    case 396u: goto L_00273558;
    case 397u: goto L_0027357C;
    case 398u: goto L_00273598;
    case 399u: goto L_002735A8;
    case 400u: goto L_002735DC;
    case 401u: goto L_002735E4;
    case 402u: goto L_00273618;
    case 403u: goto L_00273620;
    case 404u: goto L_00273634;
    case 405u: goto L_0027363C;
    case 406u: goto L_00273650;
    case 407u: goto L_00273670;
    case 408u: goto L_002736B8;
    case 409u: goto L_002736D0;
    case 410u: goto L_0027372C;
    case 411u: goto L_00273738;
    case 412u: goto L_00273750;
    case 413u: goto L_00273770;
    case 414u: goto L_00273780;
    case 415u: goto L_00273794;
    case 416u: goto L_002737D4;
    case 417u: goto L_002737F0;
    case 418u: goto L_0027380C;
    case 419u: goto L_00273814;
    case 420u: goto L_00273830;
    case 421u: goto L_00273840;
    case 422u: goto L_0027385C;
    case 423u: goto L_00273898;
    case 424u: goto L_002738BC;
    case 425u: goto L_002738D0;
    case 426u: goto L_002738FC;
    case 427u: goto L_00273928;
    case 428u: goto L_00273944;
    case 429u: goto L_00273954;
    case 430u: goto L_00273978;
    case 431u: goto L_00273990;
    case 432u: goto L_002739C8;
    case 433u: goto L_00273A08;
    case 434u: goto L_00273A28;
    case 435u: goto L_00273A30;
    case 436u: goto L_00273A60;
    case 437u: goto L_00273A8C;
    case 438u: goto L_00273AAC;
    case 439u: goto L_00273AC4;
    case 440u: goto L_00273AD0;
    case 441u: goto L_00273AF0;
    case 442u: goto L_00273B04;
    case 443u: goto L_00273B20;
    case 444u: goto L_00273B34;
    case 445u: goto L_00273B90;
    case 446u: goto L_00273BEC;
    case 447u: goto L_00273BF8;
    case 448u: goto L_00273C10;
    case 449u: goto L_00273C30;
    case 450u: goto L_00273C40;
    case 451u: goto L_00273C54;
    case 452u: goto L_00273CBC;
    case 453u: goto L_00273CD0;
    case 454u: goto L_00273CE4;
    case 455u: goto L_00273CEC;
    case 456u: goto L_00273D08;
    case 457u: goto L_00273D20;
    case 458u: goto L_00273D3C;
    case 459u: goto L_00273D48;
    case 460u: goto L_00273D54;
    case 461u: goto L_00273D64;
    case 462u: goto L_00273D74;
    case 463u: goto L_00273D9C;
    case 464u: goto L_00273DCC;
    case 465u: goto L_00273DF0;
    case 466u: goto L_00273E10;
    case 467u: goto L_00273E34;
    case 468u: goto L_00273E60;
    case 469u: goto L_00273E80;
    case 470u: goto L_00273E98;
    case 471u: goto L_00273EAC;
    case 472u: goto L_00273EC0;
    case 473u: goto L_00273EE0;
    case 474u: goto L_00273F00;
    case 475u: goto L_00273F24;
    case 476u: goto L_00273FB8;
    case 477u: goto L_00273FCC;
    case 478u: goto L_00273FE8;
    default: bad_entry(c, 0x00270000u); return;
    }
L_00270000:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270004:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_00270008:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_00270010:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_00270034; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270028u); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 311u, depth + 1u); else { c.pc = 0x002BF240u; return; } if (c.pc != 0x00270028u) [[unlikely]] return; }
L_00270028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002702EC; } }
    goto L_00270030;
L_0027002C:
    c.budget -= 1;
L_00270030:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_00270034:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_0027003C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270044u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 63u, depth + 1u); else { c.pc = 0x002708C0u; return; } if (c.pc != 0x00270044u) [[unlikely]] return; }
L_00270044:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_00270050:
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00270084; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270064u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x00270064u) [[unlikely]] return; }
L_00270064:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_00270078; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270084; } }
L_00270078:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] & 4112ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00270084:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));  goto L_002700B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270094u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 49u, depth + 1u); else { c.pc = 0x0028C8A0u; return; } if (c.pc != 0x00270094u) [[unlikely]] return; }
L_00270094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002700B0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002700A8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0054(c, 53u, depth + 1u); else { c.pc = 0x002707E0u; return; } if (c.pc != 0x002700A8u) [[unlikely]] return; }
L_002700A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002702EC; } }
L_002700B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_002700B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002700BCu); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 313u, depth + 1u); else { c.pc = 0x002BF290u; return; } if (c.pc != 0x002700BCu) [[unlikely]] return; }
L_002700BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002702EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002700CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 69u, depth + 1u); else { c.pc = 0x00270970u; return; } if (c.pc != 0x002700CCu) [[unlikely]] return; }
L_002700CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_002700D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002700E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 70u, depth + 1u); else { c.pc = 0x00270980u; return; } if (c.pc != 0x002700E0u) [[unlikely]] return; }
L_002700E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_002700EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002700F4u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002700F4u) [[unlikely]] return; }
L_002700F4:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_0027015C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 128u)));  goto L_0027012C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270118u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x00270118u) [[unlikely]] return; }
L_00270118:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270128u); set32(c.r[4], c.r[3].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00270128u) [[unlikely]] return; }
L_00270128:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 1;
L_0027012C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00270158; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00270158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x00270148u) [[unlikely]] return; }
L_00270148:
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270158u); set32(c.r[4], c.r[3].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00270158u) [[unlikely]] return; }
L_00270158:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_0027015C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00270168; }
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 1;
L_00270168:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002701FC; }
    c.f[1] = ld32((c.r[17].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0] + 100u));  goto L_002701AC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002701A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002701A8u); set32(c.r[5], 0u + 76u);  if (depth < kMaxDepth) unit_0071(c, 292u, depth + 1u); else { c.pc = 0x002E6720u; return; } if (c.pc != 0x002701A8u) [[unlikely]] return; }
L_002701A8:
    c.f[1] = ld32((c.r[17].w[0] + 100u));
    c.budget -= 1;
L_002701AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002701F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42CA0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002701F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002701F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002701F8u); set32(c.r[5], 0u + 96u);  if (depth < kMaxDepth) unit_0071(c, 292u, depth + 1u); else { c.pc = 0x002E6720u; return; } if (c.pc != 0x002701F8u) [[unlikely]] return; }
L_002701F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002701FC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0027022C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027020Cu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x0027020Cu) [[unlikely]] return; }
L_0027020C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_00270220; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027022C; } }
L_00270220:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0027022C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 116u)));  goto L_0027025C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027023Cu); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 49u, depth + 1u); else { c.pc = 0x0028C8A0u; return; } if (c.pc != 0x0027023Cu) [[unlikely]] return; }
L_0027023C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00270258; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270250u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0054(c, 53u, depth + 1u); else { c.pc = 0x002707E0u; return; } if (c.pc != 0x00270250u) [[unlikely]] return; }
L_00270250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002702EC; } }
L_00270258:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_0027025C:
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 176u)));  goto L_00270274; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027027C; } }
L_00270274:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_0027027C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002702EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027028Cu); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x0027028Cu) [[unlikely]] return; }
L_0027028C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002702EC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_002702DC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 176u)));  goto L_002702B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002702C0; } }
L_002702B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_002702C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002702EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702D0u); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002702D0u) [[unlikely]] return; }
L_002702D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002702EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_002702DC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_002702E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 97u, depth + 1u); else { c.pc = 0x00270E30u; return; } if (c.pc != 0x002702ECu) [[unlikely]] return; }
L_002702EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002702F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00270310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270324u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x00270324u) [[unlikely]] return; }
L_00270324:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00270340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027035Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_005A(c, 194u, depth + 1u); else { c.pc = 0x00289A80u; return; } if (c.pc != 0x0027035Cu) [[unlikely]] return; }
L_0027035C:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00270534; }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00270384; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  if (t) { goto L_00270500; } }
L_00270384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027038Cu);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0027038Cu) [[unlikely]] return; }
L_0027038C:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002704FC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  goto L_00270450; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[5].w[0] + 80u));  goto L_002703D0; }
    c.f[20] = 0u;
    c.budget -= 1;
L_002703D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703D8u); c.f[21] = ld32((c.r[4].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x002703D8u) [[unlikely]] return; }
L_002703D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[21], c.f[20]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_0027042C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 80u));  goto L_0027041C; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0027041C:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.f[0] = ld32((c.r[2].w[0] + 80u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_00270444; } }
L_0027042C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270434u);  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x00270434u) [[unlikely]] return; }
L_00270434:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_00270444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027044Cu); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x0027044Cu) [[unlikely]] return; }
L_0027044C:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_00270450:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002704FC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[5].w[0] + 80u));  goto L_00270480; }
    c.f[20] = 0u;
    c.budget -= 1;
L_00270480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270488u); c.f[21] = ld32((c.r[4].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x00270488u) [[unlikely]] return; }
L_00270488:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[21], c.f[20]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  goto L_002704DC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 80u));  goto L_002704CC; }
    c.f[1] = 0u;
    c.budget -= 1;
L_002704CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 80u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_002704F4; } }
L_002704DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002704E4u);  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x002704E4u) [[unlikely]] return; }
L_002704E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_002704F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002704FCu); set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x002704FCu) [[unlikely]] return; }
L_002704FC:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_00270500:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_00270524; }
    c.f[1] = 0u;
    c.budget -= 1;
L_00270524:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_00270534:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00270550:
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
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 33ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002707B4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 3024u)));
    set32(c.r[4], c.r[5].w[0] + 112u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[22], c.r[4].w[0] + 2916u);  if (t) { goto L_002705A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_002705AC; } }
L_002705A8:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002705AC:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_002707B8; }
    set32(c.r[18], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 116u)));  goto L_00270634; }
    set32(c.r[3], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002705D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0027062C; } }
L_002705D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705DCu); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002705DCu) [[unlikely]] return; }
L_002705DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002705FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0027060C; } }
L_002705FC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0027060C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0027062C; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[20], ld32((c.r[4].w[0] + 4u)));  goto L_00270624; }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027062C; } }
L_0027062C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002706A4; } }
L_00270634:
    set32(c.r[3], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00270648; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002706A0; } }
L_00270648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270650u); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00270650u) [[unlikely]] return; }
L_00270650:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00270670; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00270680; } }
L_00270670:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00270680:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_002706A0; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[20], ld32((c.r[4].w[0] + 4u)));  goto L_00270698; }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002706A0; } }
L_002706A0:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002706A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;  if (t) { goto L_002707AC; } }
L_002706AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], ld32((c.r[3].w[0])));  if (t) { goto L_002706D8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 484u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 4;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002706D0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002706D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002706F4; } }
L_002706D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 484u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 5;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002706F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002706F4; } }
L_002706F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_00270714; }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027070Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x0027070Cu) [[unlikely]] return; }
L_0027070C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_00270718; } }
L_00270714:
    c.f[20] = c.r[2].w[0];
    c.budget -= 1;
L_00270718:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270734u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x00270734u) [[unlikely]] return; }
L_00270734:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.f[13] = c.f[0];
    c.f[14] = 0u;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.f[12] = c.f[20];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027075Cu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0027075Cu) [[unlikely]] return; }
L_0027075C:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002707A8; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002707A4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 38u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270788u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00270788u) [[unlikely]] return; }
L_00270788:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002707A4; } }
    st32((c.r[4].w[0] + 328u), c.f[20]);
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002707A4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002707A4u) [[unlikely]] return; }
L_002707A4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002707A8:
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002707AC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002706ACu | kUnwind; return; } goto L_002706AC; }
L_002707B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002707B8:
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
L_002707E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00270898; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;  goto L_00270840; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00270820; }
    goto L_0027081C;
L_00270818:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027081C:
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00270820:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027082Cu); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x0027082Cu) [[unlikely]] return; }
L_0027082C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270834u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 69u, depth + 1u); else { c.pc = 0x00270970u; return; } if (c.pc != 0x00270834u) [[unlikely]] return; }
L_00270834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027083Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 70u, depth + 1u); else { c.pc = 0x00270980u; return; } if (c.pc != 0x0027083Cu) [[unlikely]] return; }
L_0027083C:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 1;
L_00270840:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));  goto L_0027089C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00270898; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00270868; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00270868:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 1;
L_0027086C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270874u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x00270874u) [[unlikely]] return; }
L_00270874:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00270884; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00270884:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270890u); set32(c.r[5], 0u + 27u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x00270890u) [[unlikely]] return; }
L_00270890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270898u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 97u, depth + 1u); else { c.pc = 0x00270E30u; return; } if (c.pc != 0x00270898u) [[unlikely]] return; }
L_00270898:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0027089C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002708A4u); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 301u, depth + 1u); else { c.pc = 0x002BF0A0u; return; } if (c.pc != 0x002708A4u) [[unlikely]] return; }
L_002708A4:
    st32((c.r[17].w[0] + 96u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002708C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 100u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002708E0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002708E0u) [[unlikely]] return; }
L_002708E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_00270904; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270900u); c.f[13] = ld32((c.r[2].w[0] + 2452u));  if (depth < kMaxDepth) unit_0026(c, 18u, depth + 1u); else { c.pc = 0x001B8140u; return; } if (c.pc != 0x00270900u) [[unlikely]] return; }
L_00270900:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_00270904:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00270910; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_00270910:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027091Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x0027091Cu) [[unlikely]] return; }
L_0027091C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0027092C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0027092C:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270938u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x00270938u) [[unlikely]] return; }
L_00270938:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[5].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00270960; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30344u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027095Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 299u, depth + 1u); else { c.pc = 0x002BEF10u; return; } if (c.pc != 0x0027095Cu) [[unlikely]] return; }
L_0027095C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00270960:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00270970:
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  [[clang::musttail]] return unit_0067(c, 309u, depth); }
L_00270980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709A0u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002709A0u) [[unlikely]] return; }
L_002709A0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 116u)));  goto L_00270B30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709B8u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002709B8u) [[unlikely]] return; }
L_002709B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 124u), c.r[2].w[0]);  goto L_002709CC; }
    goto L_002709C0;
L_002709BC:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 1;
L_002709C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 95u, depth + 1u); else { c.pc = 0x00158830u; return; } if (c.pc != 0x002709C8u) [[unlikely]] return; }
L_002709C8:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 1;
L_002709CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 352u);  goto L_00270A6C; }
    set32(c.r[17], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002709EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00270A44; } }
L_002709EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709F4u); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002709F4u) [[unlikely]] return; }
L_002709F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00270A14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00270A24; } }
L_00270A14:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00270A24:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00270A44; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[17], ld32((c.r[3].w[0])));  goto L_00270A3C; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270A44; } }
L_00270A44:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A50u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x00270A50u) [[unlikely]] return; }
L_00270A50:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A5Cu); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x00270A5Cu) [[unlikely]] return; }
L_00270A5C:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A68u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x00270A68u) [[unlikely]] return; }
L_00270A68:
    set32(c.r[4], 0u + 352u);
    c.budget -= 1;
L_00270A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A74u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00270A74u) [[unlikely]] return; }
L_00270A74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  goto L_00270A88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 95u, depth + 1u); else { c.pc = 0x00158830u; return; } if (c.pc != 0x00270A84u) [[unlikely]] return; }
L_00270A84:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_00270A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00270B2C; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00270B2C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00270AB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00270B08; } }
L_00270AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270AB8u); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00270AB8u) [[unlikely]] return; }
L_00270AB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00270AD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00270AE8; } }
L_00270AD8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00270AE8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00270B08; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[17], ld32((c.r[3].w[0])));  goto L_00270B00; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270B08; } }
L_00270B08:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B14u); set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x00270B14u) [[unlikely]] return; }
L_00270B14:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B20u); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x00270B20u) [[unlikely]] return; }
L_00270B20:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B2Cu); set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x00270B2Cu) [[unlikely]] return; }
L_00270B2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_00270B30:
    set32(c.r[4], 0u - 2u);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 116u)));  goto L_00270B7C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 8;
L_00270B7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[1] = 0u;
    st32((c.r[3].w[0] + 200u), 0u);
    st32((c.r[3].w[0] + 196u), 0u);
    st32((c.r[3].w[0] + 192u), 0u);
    st32((c.r[3].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    st32((c.r[2].w[0] + 248u), 0u);
    st32((c.r[2].w[0] + 244u), 0u);
    st32((c.r[2].w[0] + 240u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 22;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_00270C14; }
    st32((c.r[2].w[0] + 200u), c.f[1]);
    st32((c.r[2].w[0] + 196u), c.f[1]);
    st32((c.r[2].w[0] + 192u), c.f[1]);
    st32((c.r[2].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[2].w[0] + 248u), 0u);
    st32((c.r[2].w[0] + 244u), 0u);
    st32((c.r[2].w[0] + 240u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 16;
L_00270C14:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_00270C40; }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 29u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C38u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00270C38u) [[unlikely]] return; }
L_00270C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (t) { goto L_00270C64; } }
L_00270C40:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00270C60; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 29u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C60u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00270C60u) [[unlikely]] return; }
L_00270C60:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_00270C64:
    set32(c.r[5], 0u + 38u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C74u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00270C74u) [[unlikely]] return; }
L_00270C74:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_00270D90; }
    set32(c.r[17], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00270C98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00270CF0; } }
L_00270C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270CA0u); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00270CA0u) [[unlikely]] return; }
L_00270CA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00270CC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00270CD0; } }
L_00270CC0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00270CD0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00270CF0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00270CE8; }
L_00270CE4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270CF0; } }
L_00270CF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], 0u + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D00u); c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 368u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x00270D00u) [[unlikely]] return; }
L_00270D00:
    set32(c.r[17], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00270D18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00270D7C; } }
L_00270D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D20u); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00270D20u) [[unlikely]] return; }
L_00270D20:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00270D40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00270D50; } }
L_00270D40:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00270D50:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00270D7C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00270D70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00270D74; } }
L_00270D70:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00270D74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270D7C; } }
L_00270D7C:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], 0u + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D8Cu); c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 368u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x00270D8Cu) [[unlikely]] return; }
L_00270D8C:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_00270D90:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_00270DAC; }
    set32(c.r[5], 0u + 38u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DA8u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00270DA8u) [[unlikely]] return; }
L_00270DA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_00270DAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00270DB8; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00270DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DC0u);  if (depth < kMaxDepth) unit_0058(c, 279u, depth + 1u); else { c.pc = 0x00282AD0u; return; } if (c.pc != 0x00270DC0u) [[unlikely]] return; }
L_00270DC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00270E18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DD8u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00270DD8u) [[unlikely]] return; }
L_00270DD8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 26u);  goto L_00270DEC; }
    set32(c.r[5], 0u + 27u);
    c.budget -= 1;
L_00270DEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00270DFC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00270DFC:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E14u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x00270E14u) [[unlikely]] return; }
L_00270E14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00270E18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00270E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E4Cu); set32(c.r[4], ld32((c.r[2].w[0] + 100u)));  if (depth < kMaxDepth) unit_0067(c, 301u, depth + 1u); else { c.pc = 0x002BF0A0u; return; } if (c.pc != 0x00270E4Cu) [[unlikely]] return; }
L_00270E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E54u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 38u, depth + 1u); else { c.pc = 0x0028C790u; return; } if (c.pc != 0x00270E54u) [[unlikely]] return; }
L_00270E54:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E60u); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00270E60u) [[unlikely]] return; }
L_00270E60:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_00270E9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E78u);  if (depth < kMaxDepth) unit_005B(c, 12u, depth + 1u); else { c.pc = 0x0028C120u; return; } if (c.pc != 0x00270E78u) [[unlikely]] return; }
L_00270E78:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E94u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00270E94u) [[unlikely]] return; }
L_00270E94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_00270ECC; } }
L_00270E9C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00270EC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270EACu);  if (depth < kMaxDepth) unit_005B(c, 12u, depth + 1u); else { c.pc = 0x0028C120u; return; } if (c.pc != 0x00270EACu) [[unlikely]] return; }
L_00270EAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270EC8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00270EC8u) [[unlikely]] return; }
L_00270EC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00270ECC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270ED8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x00270ED8u) [[unlikely]] return; }
L_00270ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270EE0u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x00270EE0u) [[unlikely]] return; }
L_00270EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00270EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00270F70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21776u);
    set32(c.r[2], c.r[2].w[0] + 21832u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00270F58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270F4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00270F4Cu) [[unlikely]] return; }
L_00270F4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270F58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00270F58u) [[unlikely]] return; }
L_00270F58:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00270F74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270F70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00270F70u) [[unlikely]] return; }
L_00270F70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00270F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00270F90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00270EF0u | kUnwind; return; } goto L_00270EF0; }
L_00270FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270FB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00270FB4u) [[unlikely]] return; }
L_00270FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21872u);
    set32(c.r[3], c.r[3].w[0] + 21928u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E540000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 18242ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270FDCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00270FDCu) [[unlikely]] return; }
L_00270FDC:
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271004u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00271004u) [[unlikely]] return; }
L_00271004:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00271018u); set32(c.r[5], 0u + 63u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00271018u) [[unlikely]] return; }
L_00271018:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00271030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271044u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00271044u) [[unlikely]] return; }
L_00271044:
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271060u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x00271060u) [[unlikely]] return; }
L_00271060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00271070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_00271080:
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00271094u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00271094u) [[unlikely]] return; }
L_00271094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027109Cu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x0027109Cu) [[unlikely]] return; }
L_0027109C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002710B0u); set32(c.r[5], 0u + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002710B0u) [[unlikely]] return; }
L_002710B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002710C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x002710DCu) [[unlikely]] return; }
L_002710DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00271274; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 72u)));  goto L_00271184; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271114u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00271114u) [[unlikely]] return; }
L_00271114:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 72u)));  goto L_0027113C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 6;
L_0027113C:
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 72u)));  goto L_00271168; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00271164u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00271164u) [[unlikely]] return; }
L_00271164:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_00271168:
    c.r[3].d[0] = c.r[3].d[0] & 257ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00271180; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271180u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x00271180u) [[unlikely]] return; }
L_00271180:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_00271184:
    c.r[3].d[0] = c.r[3].d[0] & 65ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00271270; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711A0u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002711A0u) [[unlikely]] return; }
L_002711A0:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002711C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711B8u); set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002711B8u) [[unlikely]] return; }
L_002711B8:
    c.r[3].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002711C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002711D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00271260; } }
L_002711D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711D8u);  if (depth < kMaxDepth) unit_0052(c, 141u, depth + 1u); else { c.pc = 0x00269B70u; return; } if (c.pc != 0x002711D8u) [[unlikely]] return; }
L_002711D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002711E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00271260; } }
L_002711E8:
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 176u)));  goto L_00271200; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00271208; } }
L_00271200:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_00271208:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00271260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271218u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x00271218u) [[unlikely]] return; }
L_00271218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271260; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1308u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_00271260; }
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00271254; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00271254:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00271260; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00271260:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00271270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271270u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x00271270u) [[unlikely]] return; }
L_00271270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00271274:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00271290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002712A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x002712A4u) [[unlikely]] return; }
L_002712A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002712C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00271340; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21872u);
    set32(c.r[2], c.r[2].w[0] + 21928u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00271328; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027131Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0027131Cu) [[unlikely]] return; }
L_0027131C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271328u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00271328u) [[unlikely]] return; }
L_00271328:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00271344; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271340u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00271340u) [[unlikely]] return; }
L_00271340:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00271344:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00271360:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002712C0u | kUnwind; return; } goto L_002712C0; }
L_00271370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271388u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00271388u) [[unlikely]] return; }
L_00271388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21968u);
    set32(c.r[3], c.r[3].w[0] + 22024u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x544F0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 20290ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002713D8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005C(c, 46u, depth + 1u); else { c.pc = 0x00290810u; return; } if (c.pc != 0x002713D8u) [[unlikely]] return; }
L_002713D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 76u)));  goto L_002713EC; }
    set32(c.r[2], 0u + 11u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
L_002713EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00271400; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00271458; } }
L_00271400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271408u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00271408u) [[unlikely]] return; }
L_00271408:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00271428; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00271438; } }
L_00271428:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00271438:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00271458; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00271450; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00271450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271458; } }
L_00271458:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00271478; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271474u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00271474u) [[unlikely]] return; }
L_00271474:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00271478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00271490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002714C4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002714BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002714BCu) [[unlikely]] return; }
L_002714BC:
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002714C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002714CCu);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x002714CCu) [[unlikely]] return; }
L_002714CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002714E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00271510; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00271504; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00271504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027150Cu); set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  if (depth < kMaxDepth) unit_0068(c, 215u, depth + 1u); else { c.pc = 0x002C2780u; return; } if (c.pc != 0x0027150Cu) [[unlikely]] return; }
L_0027150C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00271510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00271520:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271544u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x00271544u) [[unlikely]] return; }
L_00271544:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00271E14; }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00271E10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5792u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00270000u < 16384u) { entry = entries_0054[(t - 0x00270000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00271580:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00271598; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002715F0; } }
L_00271598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715A0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002715A0u) [[unlikely]] return; }
L_002715A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002715C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002715D0; } }
L_002715C0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002715D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002715F0; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_002715E8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002715E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002715F0; } }
L_002715F0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  goto L_00271604; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271600u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 12u, depth + 1u); else { c.pc = 0x0028C120u; return; } if (c.pc != 0x00271600u) [[unlikely]] return; }
L_00271600:
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_00271604:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00271E10; } }
L_00271618:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271628u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00271628u) [[unlikely]] return; }
L_00271628:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0027163C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_00271650; } }
L_0027163C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_00271650; }
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_00271650:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00271678; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00271674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271674u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00271674u) [[unlikely]] return; }
L_00271674:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00271678:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[20].w[0] + 52u)));  goto L_00271694; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00271E10; } }
    set32(c.r[25], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 1;
L_00271694:
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002716A4u); set32(c.r[5], 0u + 61u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002716A4u) [[unlikely]] return; }
L_002716A4:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_002716B0:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002716D0; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00271E10; } }
L_002716D0:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002716E8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002716E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 88u);  goto L_00271700; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716F8u);  if (depth < kMaxDepth) unit_005B(c, 12u, depth + 1u); else { c.pc = 0x0028C120u; return; } if (c.pc != 0x002716F8u) [[unlikely]] return; }
L_002716F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271E10; } }
L_00271700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271708u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00271708u) [[unlikely]] return; }
L_00271708:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 100u), c.r[16].w[0]);  goto L_00271744; }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271724u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005C(c, 46u, depth + 1u); else { c.pc = 0x00290810u; return; } if (c.pc != 0x00271724u) [[unlikely]] return; }
L_00271724:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 5928u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027173Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x0027173Cu) [[unlikely]] return; }
L_0027173C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 100u), c.r[16].w[0]);
    c.budget -= 2;
L_00271744:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00271E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271754u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x00271754u) [[unlikely]] return; }
L_00271754:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271764u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x00271764u) [[unlikely]] return; }
L_00271764:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_00271770:
    set32(c.r[5], ld32((c.r[20].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00271E10; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    st32((c.r[20].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 5;
L_0027179C:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_002717A8:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002717B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002717B4u) [[unlikely]] return; }
L_002717B4:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002717C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002717C4u) [[unlikely]] return; }
L_002717C4:
    set32(c.r[3], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[19].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002717E0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002717E0u) [[unlikely]] return; }
L_002717E0:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002717F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002717F0u) [[unlikely]] return; }
L_002717F0:
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[3], 0u - 16u);
    set32(c.r[4], c.r[2].w[0] + 15u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30372u)));
    c.r[18].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[5], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[19].w[0]);  if (t) { goto L_00271828; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271828u); set32(c.r[4], c.r[4].w[0] - 5904u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00271828u) [[unlikely]] return; }
L_00271828:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271834u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00271834u) [[unlikely]] return; }
L_00271834:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271844u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00271844u) [[unlikely]] return; }
L_00271844:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271850u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00271850u) [[unlikely]] return; }
L_00271850:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271860u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00271860u) [[unlikely]] return; }
L_00271860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271868u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00271868u) [[unlikely]] return; }
L_00271868:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 76u)));  goto L_00271898; }
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271880u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00271880u) [[unlikely]] return; }
L_00271880:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271890u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x00271890u) [[unlikely]] return; }
L_00271890:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 2;
L_00271898:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718A4u); st32((c.r[2].w[0] + 588u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002718A4u) [[unlikely]] return; }
L_002718A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 76u)));  goto L_002718BC; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x002718B8u) [[unlikely]] return; }
L_002718B8:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_002718BC:
    st32((c.r[3].w[0] + 600u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718CCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002718CCu) [[unlikely]] return; }
L_002718CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 600u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x002718E0u) [[unlikely]] return; }
L_002718E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 588u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718F4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003A(c, 317u, depth + 1u); else { c.pc = 0x0020B090u; return; } if (c.pc != 0x002718F4u) [[unlikely]] return; }
L_002718F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 600u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271908u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003A(c, 323u, depth + 1u); else { c.pc = 0x0020B310u; return; } if (c.pc != 0x00271908u) [[unlikely]] return; }
L_00271908:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_00271914:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  goto L_00271994; }
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271934u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00271934u) [[unlikely]] return; }
L_00271934:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271990; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 1308u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00271990; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271990; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271968u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00271968u) [[unlikely]] return; }
L_00271968:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271974u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 100u, depth + 1u); else { c.pc = 0x002A5310u; return; } if (c.pc != 0x00271974u) [[unlikely]] return; }
L_00271974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271E10; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 1308u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
L_00271990:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_00271994:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_0027199C:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719A8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002719A8u) [[unlikely]] return; }
L_002719A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  goto L_00271A20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719B8u);  if (depth < kMaxDepth) unit_0026(c, 20u, depth + 1u); else { c.pc = 0x001B8160u; return; } if (c.pc != 0x002719B8u) [[unlikely]] return; }
L_002719B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271E10; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002719D0; }
    set32(c.r[3], ld32((c.r[5].w[0] + 152u)));
    c.budget -= 1;
L_002719D0:
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00271E10; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002719F8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 2;
L_002719F8:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A04u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00271A04u) [[unlikely]] return; }
L_00271A04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A14u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 306u, depth + 1u); else { c.pc = 0x002C35A0u; return; } if (c.pc != 0x00271A14u) [[unlikely]] return; }
L_00271A14:
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 3;
L_00271A20:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_00271A28:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A34u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00271A34u) [[unlikely]] return; }
L_00271A34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 100u)));  goto L_00271A70; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00271A4C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00271A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A54u); set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  if (depth < kMaxDepth) unit_0068(c, 244u, depth + 1u); else { c.pc = 0x002C2CC0u; return; } if (c.pc != 0x00271A54u) [[unlikely]] return; }
L_00271A54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271E10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[20].w[0] + 108u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A6Cu); set32(c.r[4], c.r[4].w[0] - 5840u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00271A6Cu) [[unlikely]] return; }
L_00271A6C:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 1;
L_00271A70:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  goto L_00271A90; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00271A88u) [[unlikely]] return; }
L_00271A88:
    st32((c.r[20].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 2;
L_00271A90:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_00271A98:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00271AC8u); set32(c.r[5], 0u + 62u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00271AC8u) [[unlikely]] return; }
L_00271AC8:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_00271AE8; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00271E10; } }
L_00271AE8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00271E10; } }
L_00271AF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00271B10; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00271B10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00271B28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B20u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 12u, depth + 1u); else { c.pc = 0x0028C120u; return; } if (c.pc != 0x00271B20u) [[unlikely]] return; }
L_00271B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271E10; } }
L_00271B28:
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_00271B60; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B54u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x00271B54u) [[unlikely]] return; }
L_00271B54:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00271E10; } }
L_00271B60:
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00271B6Cu) [[unlikely]] return; }
L_00271B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B74u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_0059(c, 408u, depth + 1u); else { c.pc = 0x002877B0u; return; } if (c.pc != 0x00271B74u) [[unlikely]] return; }
L_00271B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B7Cu); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00271B7Cu) [[unlikely]] return; }
L_00271B7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  goto L_00271BDC; }
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00271B98u) [[unlikely]] return; }
L_00271B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 1316u), c.r[2].w[0]);  if (t) { goto L_00271BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BA8u); set32(c.r[4], 0u + 660u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00271BA8u) [[unlikely]] return; }
L_00271BA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 1316u), c.r[2].w[0]);  goto L_00271BC0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 8u, depth + 1u); else { c.pc = 0x002AC0E0u; return; } if (c.pc != 0x00271BBCu) [[unlikely]] return; }
L_00271BBC:
    st32((c.r[16].w[0] + 1316u), c.r[2].w[0]);
    c.budget -= 1;
L_00271BC0:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1316u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00271BD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BD8u);  if (depth < kMaxDepth) unit_0063(c, 44u, depth + 1u); else { c.pc = 0x002AC530u; return; } if (c.pc != 0x00271BD8u) [[unlikely]] return; }
L_00271BD8:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_00271BDC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_00271BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BECu); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00271BECu) [[unlikely]] return; }
L_00271BEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  goto L_00271C18; }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1316u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00271C14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C0Cu);  if (depth < kMaxDepth) unit_0063(c, 46u, depth + 1u); else { c.pc = 0x002AC570u; return; } if (c.pc != 0x00271C0Cu) [[unlikely]] return; }
L_00271C0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271E10; } }
L_00271C14:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_00271C18:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_00271C20:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C30u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00271C30u) [[unlikely]] return; }
L_00271C30:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00271C44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_00271C58; } }
L_00271C44:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_00271C58; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_00271C58:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00271C7C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00271C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00271C7Cu) [[unlikely]] return; }
L_00271C7C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00271C9C; }
    set32(c.r[25], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C98u); set32(c.r[5], 0u + 26u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00271C98u) [[unlikely]] return; }
L_00271C98:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00271C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CA4u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00271CA4u) [[unlikely]] return; }
L_00271CA4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00271D5C; }
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00271CCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00271D24; } }
L_00271CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CD4u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00271CD4u) [[unlikely]] return; }
L_00271CD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00271CF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00271D04; } }
L_00271CF4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00271D04:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00271D24; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00271D1C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00271D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271D24; } }
L_00271D24:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00271D58; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10700u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D3Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00271D3Cu) [[unlikely]] return; }
L_00271D3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271D58; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D58u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00271D58u) [[unlikely]] return; }
L_00271D58:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00271D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D64u);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00271D64u) [[unlikely]] return; }
L_00271D64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00271D98; }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1316u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00271D94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D84u);  if (depth < kMaxDepth) unit_0063(c, 47u, depth + 1u); else { c.pc = 0x002AC580u; return; } if (c.pc != 0x00271D84u) [[unlikely]] return; }
L_00271D84:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00271E10; } }
L_00271D94:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00271D98:
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 84u)));  goto L_00271DCC; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271DC4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x00271DC4u) [[unlikely]] return; }
L_00271DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  if (t) { goto L_00271E08; } }
L_00271DCC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271DFC; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271DF4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x00271DF4u) [[unlikely]] return; }
L_00271DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271E04; } }
L_00271DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E04u);  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x00271E04u) [[unlikely]] return; }
L_00271E04:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_00271E08:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_00271E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00271E14:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00271E30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00271E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x00271E54u) [[unlikely]] return; }
L_00271E54:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00271E70:
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 12ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00271E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00271F00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21968u);
    set32(c.r[2], c.r[2].w[0] + 22024u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00271EE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271EDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00271EDCu) [[unlikely]] return; }
L_00271EDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271EE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00271EE8u) [[unlikely]] return; }
L_00271EE8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00271F04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00271F00u) [[unlikely]] return; }
L_00271F00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00271F04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00271F20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00271E80u | kUnwind; return; } goto L_00271E80; }
L_00271F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00271F44u) [[unlikely]] return; }
L_00271F44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 22064u);
    set32(c.r[3], c.r[3].w[0] + 22120u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 20547ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[2].w[0] + 520u)));  goto L_00271F7C; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00271F7C:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[3], ld32((c.r[6].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[6].w[0] + 180u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FBCu); set32(c.r[5], 0u + 71u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00271FBCu) [[unlikely]] return; }
L_00271FBC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00271FD0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_005A(c, 191u, depth); }
L_00271FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 254u, depth + 1u); else { c.pc = 0x00272120u; return; } if (c.pc != 0x00271FF4u) [[unlikely]] return; }
L_00271FF4:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u - 3u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[3], ld32((c.r[6].w[0] + 180u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[6].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027201Cu); set32(c.r[5], 0u + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027201Cu) [[unlikely]] return; }
L_0027201C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272044u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x00272044u) [[unlikely]] return; }
L_00272044:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002720E0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002720DC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 100u));  goto L_00272074; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002720DC; } }
L_00272074:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002720BC; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_002720AC; }
L_002720AC:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.f[0]);  if (t) { goto L_002720DC; } }
L_002720BC:
    set32(c.r[5], 0u + 71u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720CCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x002720CCu) [[unlikely]] return; }
L_002720CC:
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 4;
L_002720DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002720E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002720F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272104u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x00272104u) [[unlikely]] return; }
L_00272104:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272118:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
    c.pc = 0x0027211Cu; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00272120:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00272140; }
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 1;
L_00272140:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002723B8; }
    set32(c.r[4], c.r[4].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272154u); set32(c.r[17], 0u - 1u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x00272154u) [[unlikely]] return; }
L_00272154:
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_0027232C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272178u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 348u, depth + 1u); else { c.pc = 0x002A33F0u; return; } if (c.pc != 0x00272178u) [[unlikely]] return; }
L_00272178:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027219C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00272198; } }
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00272198:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0027219C:
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002721ACu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 348u, depth + 1u); else { c.pc = 0x002A33F0u; return; } if (c.pc != 0x002721ACu) [[unlikely]] return; }
L_002721AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002721D8; }
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002721D4; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 4;
L_002721D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002721D8:
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002721E8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 348u, depth + 1u); else { c.pc = 0x002A33F0u; return; } if (c.pc != 0x002721E8u) [[unlikely]] return; }
L_002721E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00272214; }
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00272210; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 4;
L_00272210:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00272214:
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272224u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 348u, depth + 1u); else { c.pc = 0x002A33F0u; return; } if (c.pc != 0x00272224u) [[unlikely]] return; }
L_00272224:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00272250; }
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027224C; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 4;
L_0027224C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00272250:
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272260u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 348u, depth + 1u); else { c.pc = 0x002A33F0u; return; } if (c.pc != 0x00272260u) [[unlikely]] return; }
L_00272260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272288; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00272288; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 4;
L_00272288:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] - 5728u);  if (t) { goto L_00272318; } }
L_00272298:
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[16].d[0] != c.r[7].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00272318; }
    c.r[10].d[0] = 0ull + 0ull;
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[12].w[0] << 2);
    c.budget -= 3;
L_002722BC:
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[8].w[0] + c.r[4].w[0]);  if (t) { goto L_002722E8; } }
L_002722C8:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_002722E8; }
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 2;
L_002722E8:
    c.r[4].d[0] = c.r[11].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[11].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002722C8u | kUnwind; return; } goto L_002722C8; }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[4].d[0] = c.r[12].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[12].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002722BCu | kUnwind; return; } goto L_002722BC; }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[7].d[0];  if (t) { goto L_00272314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[8].w[0] + 24u)));  if (t) { goto L_0027237C; } }
L_00272314:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00272318:
    c.r[4].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00272298u | kUnwind; return; } goto L_00272298; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027237C; } }
L_0027232C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 3168u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00272360; } }
L_00272344:
    set32(c.r[4], c.r[8].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_00272360; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272370; } }
L_00272360:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00272344u | kUnwind; return; } goto L_00272344; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00272370:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027237C; } }
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0027237C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_002723B4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00272394; }
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 1;
L_00272394:
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002723A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 367u, depth + 1u); else { c.pc = 0x002C3F00u; return; } if (c.pc != 0x002723A4u) [[unlikely]] return; }
L_002723A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002723B4u); set32(c.r[4], c.r[4].w[0] - 5280u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002723B4u) [[unlikely]] return; }
L_002723B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002723B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002723D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00272450; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22064u);
    set32(c.r[2], c.r[2].w[0] + 22120u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00272438; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027242Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0027242Cu) [[unlikely]] return; }
L_0027242C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272438u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00272438u) [[unlikely]] return; }
L_00272438:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00272454; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272450u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00272450u) [[unlikely]] return; }
L_00272450:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00272454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00272470:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002723D0u | kUnwind; return; } goto L_002723D0; }
L_00272480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272494u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00272494u) [[unlikely]] return; }
L_00272494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 22160u);
    set32(c.r[3], c.r[3].w[0] + 22216u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474D0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16708ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002724D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724ECu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002724ECu) [[unlikely]] return; }
L_002724EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x002724F4u) [[unlikely]] return; }
L_002724F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272534u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x00272534u) [[unlikely]] return; }
L_00272534:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00272624; }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00272590; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272564u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00272564u) [[unlikely]] return; }
L_00272564:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272570u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_005A(c, 335u, depth + 1u); else { c.pc = 0x0028B6D0u; return; } if (c.pc != 0x00272570u) [[unlikely]] return; }
L_00272570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272578u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 338u, depth + 1u); else { c.pc = 0x0028B760u; return; } if (c.pc != 0x00272578u) [[unlikely]] return; }
L_00272578:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272584u); set32(c.r[5], ld32((c.r[4].w[0] + 476u)));  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00272584u) [[unlikely]] return; }
L_00272584:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
L_00272590:
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 176u)));  goto L_002725A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002725B0; } }
L_002725A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_002725B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00272620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725C0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002725C0u) [[unlikely]] return; }
L_002725C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272620; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00272608; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272600u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x00272600u) [[unlikely]] return; }
L_00272600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272620; } }
L_00272608:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272620u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x00272620u) [[unlikely]] return; }
L_00272620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00272624:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x00272644u) [[unlikely]] return; }
L_00272644:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002726E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22160u);
    set32(c.r[2], c.r[2].w[0] + 22216u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002726C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002726BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002726BCu) [[unlikely]] return; }
L_002726BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002726C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002726C8u) [[unlikely]] return; }
L_002726C8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002726E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002726E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002726E0u) [[unlikely]] return; }
L_002726E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002726E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00272700:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00272660u | kUnwind; return; } goto L_00272660; }
L_00272710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272728u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00272728u) [[unlikely]] return; }
L_00272728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 22256u);
    set32(c.r[3], c.r[3].w[0] + 22312u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x59520000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21316ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 30396u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272788u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00272788u) [[unlikely]] return; }
L_00272788:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272794u); set32(c.r[5], 0u + 10300u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00272794u) [[unlikely]] return; }
L_00272794:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 1316u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002727BC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002727B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002727B4u) [[unlikely]] return; }
L_002727B4:
    st32((c.r[17].w[0] + 1316u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_002727BC:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002727CCu); set32(c.r[5], 0u + 67u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002727CCu) [[unlikely]] return; }
L_002727CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002727F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272804u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 305u, depth + 1u); else { c.pc = 0x00272830u; return; } if (c.pc != 0x00272804u) [[unlikely]] return; }
    goto L_00272804;
L_00272800:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00272804:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272810u); st32((c.r[28].w[0] - 30396u), 0u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x00272810u) [[unlikely]] return; }
L_00272810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027284Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0027284Cu) [[unlikely]] return; }
L_0027284C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 592u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00272880; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00272878; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272874u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272874u) [[unlikely]] return; }
L_00272874:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00272878:
    st32((c.r[3].w[0] + 592u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_00272880:
    set32(c.r[4], ld32((c.r[3].w[0] + 604u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  goto L_002728B0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_002728A8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002728A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002728A4u) [[unlikely]] return; }
L_002728A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002728A8:
    st32((c.r[3].w[0] + 604u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 2;
L_002728B0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  goto L_002728C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002728C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002728C0u) [[unlikely]] return; }
L_002728C0:
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 2;
L_002728C8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  goto L_002728E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002728D8u);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x002728D8u) [[unlikely]] return; }
L_002728D8:
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 2;
L_002728E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00272900; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002728F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002728F8u) [[unlikely]] return; }
L_002728F8:
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00272900:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272910:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272934u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x00272934u) [[unlikely]] return; }
L_00272934:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002732FC; }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002732F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5216u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00270000u < 16384u) { entry = entries_0054[(t - 0x00270000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00272970:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_00272978:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272988u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_005C(c, 46u, depth + 1u); else { c.pc = 0x00290810u; return; } if (c.pc != 0x00272988u) [[unlikely]] return; }
L_00272988:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_00272B60; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272B5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729A8u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002729A8u) [[unlikely]] return; }
L_002729A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 100u), c.r[4].w[0]);  goto L_002729D0; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729C8u); set32(c.r[6], c.r[6].w[0] - 5232u);  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x002729C8u) [[unlikely]] return; }
L_002729C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[4].w[0]);
    c.budget -= 2;
L_002729D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002732F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729E0u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x002729E0u) [[unlikely]] return; }
L_002729E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x002729F0u) [[unlikely]] return; }
L_002729F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_002729FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002732F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002732F8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 604u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002732F8; } }
    set32(c.r[17], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 153u, depth + 1u); else { c.pc = 0x0029D800u; return; } if (c.pc != 0x00272A40u) [[unlikely]] return; }
L_00272A40:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00272A50u) [[unlikely]] return; }
L_00272A50:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00272A64u) [[unlikely]] return; }
L_00272A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A6Cu); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00272A6Cu) [[unlikely]] return; }
L_00272A6C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_00272AAC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00272A84u) [[unlikely]] return; }
L_00272A84:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A94u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00272A94u) [[unlikely]] return; }
L_00272A94:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272AA4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x00272AA4u) [[unlikely]] return; }
L_00272AA4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_00272AAC:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272AB8u); st32((c.r[2].w[0] + 592u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x00272AB8u) [[unlikely]] return; }
L_00272AB8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_00272AE4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272AD0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00272AD0u) [[unlikely]] return; }
L_00272AD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272ADCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x00272ADCu) [[unlikely]] return; }
L_00272ADC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_00272AE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272AF4u); st32((c.r[2].w[0] + 604u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00272AF4u) [[unlikely]] return; }
L_00272AF4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x00272B08u) [[unlikely]] return; }
L_00272B08:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 592u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B1Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_003A(c, 317u, depth + 1u); else { c.pc = 0x0020B090u; return; } if (c.pc != 0x00272B1Cu) [[unlikely]] return; }
L_00272B1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B30u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_003A(c, 323u, depth + 1u); else { c.pc = 0x0020B310u; return; } if (c.pc != 0x00272B30u) [[unlikely]] return; }
L_00272B30:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  goto L_00272B54; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272B4Cu) [[unlikely]] return; }
L_00272B4C:
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 2;
L_00272B54:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_00272B5C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00272B60:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 86u, depth + 1u); else { c.pc = 0x0028CF70u; return; } if (c.pc != 0x00272B70u) [[unlikely]] return; }
L_00272B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_00272BE8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 6;
L_00272B90:
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002732F8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    st32((c.r[2].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  goto L_00272BE0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272BD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272BD8u) [[unlikely]] return; }
L_00272BD8:
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 2;
L_00272BE0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_00272BE8:
    set32(c.r[3], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C24u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00272C24u) [[unlikely]] return; }
L_00272C24:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_00272F3C; }
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00272C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272CA8; } }
L_00272C4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C58u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00272C58u) [[unlikely]] return; }
L_00272C58:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00272C78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00272C88; } }
L_00272C78:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00272C88:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00272CA8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00272CA0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00272CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272CA8; } }
L_00272CA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00272DEC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u + 10015u);
    set32(c.r[4], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[6], 0u + 31u);  goto L_00272CF4; }
    set32(c.r[2], 0u + 10014u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00272CF0; } }
    set32(c.r[2], 0u + 10013u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00272CF0; } }
    set32(c.r[2], 0u + 10008u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00272CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272CFC; } }
L_00272CF0:
    set32(c.r[6], 0u + 31u);
    c.budget -= 1;
L_00272CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_00272D14; } }
L_00272CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D04u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00272D04u) [[unlikely]] return; }
L_00272D04:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], 0u + 11u);  goto L_00272D14; }
    set32(c.r[6], 0u + 26u);
    c.budget -= 1;
L_00272D14:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D30u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x00272D30u) [[unlikely]] return; }
L_00272D30:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  goto L_00272E2C; }
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 1320u)));  goto L_00272DB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D58u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00272D58u) [[unlikely]] return; }
L_00272D58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 16160u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[3].w[0] + 16168u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 16172u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D94u); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00272D94u) [[unlikely]] return; }
L_00272D94:
    set32(c.r[4], c.r[19].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DA0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00272DA0u) [[unlikely]] return; }
L_00272DA0:
    set32(c.r[2], ld32((c.r[19].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 308u), c.r[2].w[0]);  if (t) { goto L_00272DBC; } }
L_00272DB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00272DB8; }
L_00272DB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00272DBC:
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DCCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00272DCCu) [[unlikely]] return; }
L_00272DCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DDCu); set32(c.r[5], c.r[5].w[0] + 13248u);  if (depth < kMaxDepth) unit_0059(c, 52u, depth + 1u); else { c.pc = 0x002845E0u; return; } if (c.pc != 0x00272DDCu) [[unlikely]] return; }
L_00272DDC:
    set32(c.r[2], ld32((c.r[19].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 308u), c.r[2].w[0]);  if (t) { goto L_00272E28; } }
L_00272DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DF4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00272DF4u) [[unlikely]] return; }
L_00272DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00272E20; } }
L_00272DFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E08u); set32(c.r[5], c.r[5].w[0] + 13248u);  if (depth < kMaxDepth) unit_0059(c, 52u, depth + 1u); else { c.pc = 0x002845E0u; return; } if (c.pc != 0x00272E08u) [[unlikely]] return; }
L_00272E08:
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[17].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E1Cu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0062(c, 76u, depth + 1u); else { c.pc = 0x002A89C0u; return; } if (c.pc != 0x00272E1Cu) [[unlikely]] return; }
L_00272E1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00272E20:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00272DFCu | kUnwind; return; } goto L_00272DFC; }
L_00272E28:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_00272E2C:
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00272F38; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], 0u - 1u);  if (t) { goto L_00272E4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 32u);  if (t) { goto L_00272F04; } }
L_00272E4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E58u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00272E58u) [[unlikely]] return; }
L_00272E58:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00272F04; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00272EDC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_00272EA8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00272EA4; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  goto L_00272E98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 31u);  if (t) { goto L_00272F04; } }
L_00272E98:
    c.f[20] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 33u);  if (t) { goto L_00272F04; } }
L_00272EA4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_00272EA8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  goto L_00272ED0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00272F04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 1;
L_00272ED0:
    c.f[20] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 31u);  if (t) { goto L_00272F04; } }
L_00272EDC:
    set32(c.r[2], 0u + 3000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00272F04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EF4u);  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x00272EF4u) [[unlikely]] return; }
L_00272EF4:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[17], 0u + 32u);  goto L_00272F04; }
    set32(c.r[17], 0u + 31u);
    c.budget -= 1;
L_00272F04:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00272F38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00272F1C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00272F1C:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F38u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x00272F38u) [[unlikely]] return; }
L_00272F38:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00272F3C:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 2148u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F54u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 348u, depth + 1u); else { c.pc = 0x002A33F0u; return; } if (c.pc != 0x00272F54u) [[unlikely]] return; }
L_00272F54:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 608u)));  if (t) { goto L_00273020; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00273024; }
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[18].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));  goto L_00272F80; }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 32676u));  if (t) { goto L_00272FD8; } }
L_00272F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F88u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00272F88u) [[unlikely]] return; }
L_00272F88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F94u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00272F94u) [[unlikely]] return; }
L_00272F94:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00272FBC; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_00272FBC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00272FD4; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_00272FD4:
    c.f[0] = ld32((c.r[28].w[0] - 32676u));
    c.budget -= 1;
L_00272FD8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[6], c.r[17].w[0] + 1580u);  goto L_00272FE8; }
    set32(c.r[6], c.r[17].w[0] + 1572u);
    c.budget -= 1;
L_00272FE8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00272FF8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 1;
L_00272FF8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00273020; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00273010; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 2;
L_00273010:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.f[12] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273020u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 367u, depth + 1u); else { c.pc = 0x002C3F00u; return; } if (c.pc != 0x00273020u) [[unlikely]] return; }
L_00273020:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00273024:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002732F8; } }
L_0027303C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_00273064; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273058u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x00273058u) [[unlikely]] return; }
L_00273058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002732F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00273064:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 2148u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027307Cu); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 348u, depth + 1u); else { c.pc = 0x002A33F0u; return; } if (c.pc != 0x0027307Cu) [[unlikely]] return; }
L_0027307C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 608u)));  if (t) { goto L_00273140; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00273144; }
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[18].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));  goto L_002730A8; }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 32676u));  if (t) { goto L_00273100; } }
L_002730A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730B0u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002730B0u) [[unlikely]] return; }
L_002730B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730BCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002730BCu) [[unlikely]] return; }
L_002730BC:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002730E4; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002730E4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002730FC; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002730FC:
    c.f[0] = ld32((c.r[28].w[0] - 32676u));
    c.budget -= 1;
L_00273100:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], c.r[17].w[0] + 1580u);  goto L_00273110; }
    set32(c.r[5], c.r[17].w[0] + 1572u);
    c.budget -= 1;
L_00273110:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00273120; }
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 1;
L_00273120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00273140; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00273138; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 2;
L_00273138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273140u); set32(c.r[5], ld32((c.r[5].w[0])));  if (depth < kMaxDepth) unit_0069(c, 18u, depth + 1u); else { c.pc = 0x002C41C0u; return; } if (c.pc != 0x00273140u) [[unlikely]] return; }
L_00273140:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00273144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027314Cu);  if (depth < kMaxDepth) unit_0054(c, 305u, depth + 1u); else { c.pc = 0x00272830u; return; } if (c.pc != 0x0027314Cu) [[unlikely]] return; }
L_0027314C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u - 16385u);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273168u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0054(c, 407u, depth + 1u); else { c.pc = 0x00273670u; return; } if (c.pc != 0x00273168u) [[unlikely]] return; }
L_00273168:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273178u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00273178u) [[unlikely]] return; }
L_00273178:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_00273198; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00273194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273194u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 259u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x00273194u) [[unlikely]] return; }
L_00273194:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00273198:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 1412u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731A8u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002731A8u) [[unlikely]] return; }
L_002731A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731B8u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002731B8u) [[unlikely]] return; }
L_002731B8:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273218; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731D4u); set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002731D4u) [[unlikely]] return; }
L_002731D4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002731F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731ECu); set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002731ECu) [[unlikely]] return; }
L_002731EC:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002731F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273218; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273208u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00273208u) [[unlikely]] return; }
L_00273208:
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002732D0; }
L_00273218:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002732CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273228u); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00273228u) [[unlikely]] return; }
L_00273228:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002732CC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (t) { goto L_00273264; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_00273268; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_00273264:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 1;
L_00273268:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_0027329C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273298; } }
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
L_00273298:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 1;
L_0027329C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002732CC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002732CC; } }
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
L_002732CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002732D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732D8u);  if (depth < kMaxDepth) unit_0072(c, 111u, depth + 1u); else { c.pc = 0x002E96E0u; return; } if (c.pc != 0x002732D8u) [[unlikely]] return; }
L_002732D8:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 8;
L_002732F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002732FC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00273320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273334u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x00273334u) [[unlikely]] return; }
L_00273334:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273364u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 194u, depth + 1u); else { c.pc = 0x00289A80u; return; } if (c.pc != 0x00273364u) [[unlikely]] return; }
L_00273364:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002733AC; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0027339C; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0027339C:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_002733AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002733C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 316u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002733F0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002733F0u) [[unlikely]] return; }
L_002733F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00273654; }
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00273650; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5184u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00270000u < 16384u) { entry = entries_0054[(t - 0x00270000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00273428:
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0027343C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00273494; } }
L_0027343C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273444u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00273444u) [[unlikely]] return; }
L_00273444:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00273464; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00273474; } }
L_00273464:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00273474:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00273494; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0027348C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027348C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273494; } }
L_00273494:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 176u)));  goto L_00273504; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30396u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002734EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002734B8u) [[unlikely]] return; }
L_002734B8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30396u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734D4u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_0057(c, 209u, depth + 1u); else { c.pc = 0x0027E360u; return; } if (c.pc != 0x002734D4u) [[unlikely]] return; }
L_002734D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30396u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734E0u); set32(c.r[4], ld32((c.r[2].w[0] + 108u)));  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x002734E0u) [[unlikely]] return; }
L_002734E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30396u)));
    st32((c.r[2].w[0] + 108u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_002734EC:
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734FCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x002734FCu) [[unlikely]] return; }
L_002734FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 464u)));  if (t) { goto L_00273590; } }
L_00273504:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[18].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027351Cu); st32((c.r[18].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0054(c, 407u, depth + 1u); else { c.pc = 0x00273670u; return; } if (c.pc != 0x0027351Cu) [[unlikely]] return; }
L_0027351C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273524u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00273524u) [[unlikely]] return; }
L_00273524:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027358C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027353Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0027353Cu) [[unlikely]] return; }
L_0027353C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[4].w[0] + 960u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + 452u);  if (t) { goto L_00273580; } }
L_00273554:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00273558:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[4].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00273580; }
    set32(c.r[5], ld32((c.r[4].w[0] + 1420u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0027357C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027357Cu);  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x0027357Cu) [[unlikely]] return; }
L_0027357C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00273580:
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00273554u | kUnwind; return; } goto L_00273554; }
L_0027358C:
    set32(c.r[3], ld32((c.r[18].w[0] + 464u)));
    c.budget -= 1;
L_00273590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 204u), 0u);  if (t) { goto L_00273650; } }
L_00273598:
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_00273650; } }
L_002735A8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_00273650; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002735D0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002735CC; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002735CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002735D0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002735DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x002735DCu) [[unlikely]] return; }
L_002735DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273650; } }
L_002735E4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_00273650; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0027360C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00273608; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00273608:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0027360C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273618u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00273618u) [[unlikely]] return; }
L_00273618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273650; } }
L_00273620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 11144u)));
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273634u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 66u, depth + 1u); else { c.pc = 0x002C4950u; return; } if (c.pc != 0x00273634u) [[unlikely]] return; }
L_00273634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273650; } }
L_0027363C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 11152u)));
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273650u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 66u, depth + 1u); else { c.pc = 0x002C4950u; return; } if (c.pc != 0x00273650u) [[unlikely]] return; }
L_00273650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00273654:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 14;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002736BC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002736B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002736B8u) [[unlikely]] return; }
L_002736B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002736BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002736D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00273750; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00273738; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027372Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0027372Cu) [[unlikely]] return; }
L_0027372C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273738u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00273738u) [[unlikely]] return; }
L_00273738:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00273754; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273750u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00273750u) [[unlikely]] return; }
L_00273750:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00273754:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00273770:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002736D0u | kUnwind; return; } goto L_002736D0; }
L_00273780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273794u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00273794u) [[unlikely]] return; }
L_00273794:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 22352u);
    set32(c.r[3], c.r[3].w[0] + 22408u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E540000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17477ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002737D4u); set32(c.r[5], 0u + 86u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002737D4u) [[unlikely]] return; }
L_002737D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002737F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027380Cu); set32(c.r[5], ld32((c.r[4].w[0] + 476u)));  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0027380Cu) [[unlikely]] return; }
L_0027380C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273814u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x00273814u) [[unlikely]] return; }
L_00273814:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273830:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  [[clang::musttail]] return unit_005B(c, 82u, depth); }
L_00273840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027385Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x0027385Cu) [[unlikely]] return; }
L_0027385C:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00273AD4; }
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00273AD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5136u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00270000u < 16384u) { entry = entries_0054[(t - 0x00270000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00273898:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002738B8; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00273AD0; } }
L_002738B8:
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_002738BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002738D0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x002738D0u) [[unlikely]] return; }
L_002738D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1184u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 72u)));  goto L_00273900; }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002738FC; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002738FCu);  if (depth < kMaxDepth) unit_005A(c, 335u, depth + 1u); else { c.pc = 0x0028B6D0u; return; } if (c.pc != 0x002738FCu) [[unlikely]] return; }
L_002738FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 1;
L_00273900:
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 72u)));  goto L_0027392C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00273928u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00273928u) [[unlikely]] return; }
L_00273928:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 1;
L_0027392C:
    c.r[3].d[0] = c.r[3].d[0] & 257ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[18].w[0] + 100u), 0u);  goto L_00273948; }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273944u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x00273944u) [[unlikely]] return; }
L_00273944:
    st32((c.r[18].w[0] + 100u), 0u);
    c.budget -= 1;
L_00273948:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_00273954:
    set32(c.r[16], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00273970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00273A14; } }
L_00273970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273978u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00273978u) [[unlikely]] return; }
L_00273978:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00273998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273990u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00273990u) [[unlikely]] return; }
L_00273990:
    c.r[3].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00273998:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_002739D8; }
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00273A14; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002739C8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002739C8u) [[unlikely]] return; }
L_002739C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00273A14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00273A14; } }
L_002739D8:
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 176u)));  goto L_002739F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002739F8; } }
L_002739F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_002739F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00273A14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A08u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x00273A08u) [[unlikely]] return; }
L_00273A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00273A14; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00273A14:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00273AD0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_00273A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A30u); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x00289C30u; return; } if (c.pc != 0x00273A30u) [[unlikely]] return; }
L_00273A30:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], 0u + 3004u);
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_00273A98; }
    set32(c.r[3], 0u + 10008u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00273A94; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00273AD0; } }
L_00273A60:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273A7C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00273A7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00273A94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A8Cu); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 12u, depth + 1u); else { c.pc = 0x0028C120u; return; } if (c.pc != 0x00273A8Cu) [[unlikely]] return; }
L_00273A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273AD0; } }
L_00273A94:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_00273A98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00273AA4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00273AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273AACu);  if (depth < kMaxDepth) unit_005B(c, 242u, depth + 1u); else { c.pc = 0x0028E560u; return; } if (c.pc != 0x00273AACu) [[unlikely]] return; }
L_00273AAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00273ABC; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00273ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273AC4u);  if (depth < kMaxDepth) unit_005B(c, 261u, depth + 1u); else { c.pc = 0x0028E890u; return; } if (c.pc != 0x00273AC4u) [[unlikely]] return; }
L_00273AC4:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_00273AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00273AD4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00273AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x00273B04u) [[unlikely]] return; }
L_00273B04:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 194u, depth + 1u); else { c.pc = 0x00289A80u; return; } if (c.pc != 0x00273B34u) [[unlikely]] return; }
L_00273B34:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00273B7C; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_00273B6C; }
    c.f[1] = 0u;
    c.budget -= 1;
L_00273B6C:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_00273B7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00273C10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22352u);
    set32(c.r[2], c.r[2].w[0] + 22408u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00273BF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273BECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00273BECu) [[unlikely]] return; }
L_00273BEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273BF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00273BF8u) [[unlikely]] return; }
L_00273BF8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00273C14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00273C10u) [[unlikely]] return; }
L_00273C10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00273C14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00273C30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00273B90u | kUnwind; return; } goto L_00273B90; }
L_00273C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00273C54u) [[unlikely]] return; }
L_00273C54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 22448u);
    set32(c.r[3], c.r[3].w[0] + 22504u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54430000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21062ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 16;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 516u)));  goto L_00273C98; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00273C98:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CBCu); set32(c.r[5], 0u + 82u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00273CBCu) [[unlikely]] return; }
L_00273CBC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 457u, depth + 1u); else { c.pc = 0x00273D20u; return; } if (c.pc != 0x00273CE4u) [[unlikely]] return; }
L_00273CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CECu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00273CECu) [[unlikely]] return; }
L_00273CEC:
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D08u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x00273D08u) [[unlikely]] return; }
L_00273D08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D3Cu); set32(c.r[5], 0u + 10800u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00273D3Cu) [[unlikely]] return; }
L_00273D3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D48u); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00273D48u) [[unlikely]] return; }
L_00273D48:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D54u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00273D54u) [[unlikely]] return; }
L_00273D54:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D64u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_003A(c, 320u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x00273D64u) [[unlikely]] return; }
L_00273D64:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D74u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_003A(c, 326u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x00273D74u) [[unlikely]] return; }
L_00273D74:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 592u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00273DA8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00273DA0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D9Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00273D9Cu) [[unlikely]] return; }
L_00273D9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00273DA0:
    st32((c.r[3].w[0] + 592u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_00273DA8:
    set32(c.r[4], ld32((c.r[3].w[0] + 604u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  goto L_00273DD8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00273DD0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00273DCCu) [[unlikely]] return; }
L_00273DCC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00273DD0:
    st32((c.r[3].w[0] + 604u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 2;
L_00273DD8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00273DF8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00273DF0u) [[unlikely]] return; }
L_00273DF0:
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00273DF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273E10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E34u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00273E34u) [[unlikely]] return; }
L_00273E34:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00273E68; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E60u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00273E60u) [[unlikely]] return; }
L_00273E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  if (t) { goto L_00273E84; } }
L_00273E68:
    set32(c.r[5], 0u + 5u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E80u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00273E80u) [[unlikely]] return; }
L_00273E80:
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_00273E84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E98u);  if (depth < kMaxDepth) unit_0056(c, 389u, depth + 1u); else { c.pc = 0x0027B3D0u; return; } if (c.pc != 0x00273E98u) [[unlikely]] return; }
L_00273E98:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00273EACu); set32(c.r[5], 0u + 83u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00273EACu) [[unlikely]] return; }
L_00273EAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00273EC0u); set32(c.r[5], 0u + 13u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00273EC0u) [[unlikely]] return; }
L_00273EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00273EE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F00u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x00273F00u) [[unlikely]] return; }
L_00273F00:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  [[clang::musttail]] return unit_0055(c, 55u, depth); }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00273F44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F24u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x00273F24u) [[unlikely]] return; }
L_00273F24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_00273F38; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273F44; } }
L_00273F38:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00273F44:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  [[clang::musttail]] return unit_0055(c, 6u, depth); }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 116u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 122u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_00273F74; }
L_00273F74:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FB8u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x00273FB8u) [[unlikely]] return; }
L_00273FB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FCCu); set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  if (depth < kMaxDepth) unit_0056(c, 389u, depth + 1u); else { c.pc = 0x0027B3D0u; return; } if (c.pc != 0x00273FCCu) [[unlikely]] return; }
L_00273FCC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00273FDC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00273FDC:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FE8u); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x00273FE8u) [[unlikely]] return; }
L_00273FE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00273FF8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00273FF8:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274004u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x00274004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0055(c, 2u, depth);
}

}
