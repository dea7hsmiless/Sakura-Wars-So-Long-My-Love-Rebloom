#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B8[4096] = {
    1, 2, 3, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    9, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0,
    0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0,
    66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0,
    114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 180, 181, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0,
    0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0,
    261, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0,
    0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0,
    0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0,
    0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 0, 309,
    0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0,
    323, 0, 324, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0,
    0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0,
    0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0,
    0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0,
    0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0,
    405, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 410,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0,
    0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418,
    0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0,
    0, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0,
    439, 0, 440, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 447, 0, 448, 0, 449, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0,
    0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0,
    0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0,
    0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0,
    0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0,
    484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487,
    0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0,
    0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498,
    0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0,
    0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 504, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 511, 0, 512, 0, 0, 0, 513, 0, 514, 0, 515,
    0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0,
    0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0,
    0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0,
    531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0,
};

void unit_00B8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00400000;
    case 2u: goto L_00400004;
    case 3u: goto L_00400008;
    case 4u: goto L_00400018;
    case 5u: goto L_0040001C;
    case 6u: goto L_00400040;
    case 7u: goto L_00400048;
    case 8u: goto L_00400060;
    case 9u: goto L_00400080;
    case 10u: goto L_00400084;
    case 11u: goto L_004000A4;
    case 12u: goto L_004000C4;
    case 13u: goto L_004000D0;
    case 14u: goto L_004000E0;
    case 15u: goto L_004000F0;
    case 16u: goto L_00400144;
    case 17u: goto L_00400154;
    case 18u: goto L_00400164;
    case 19u: goto L_00400194;
    case 20u: goto L_004001E0;
    case 21u: goto L_004001F4;
    case 22u: goto L_00400210;
    case 23u: goto L_00400220;
    case 24u: goto L_0040022C;
    case 25u: goto L_00400254;
    case 26u: goto L_00400264;
    case 27u: goto L_00400280;
    case 28u: goto L_0040028C;
    case 29u: goto L_004002AC;
    case 30u: goto L_0040032C;
    case 31u: goto L_00400338;
    case 32u: goto L_00400344;
    case 33u: goto L_00400350;
    case 34u: goto L_00400360;
    case 35u: goto L_0040037C;
    case 36u: goto L_0040039C;
    case 37u: goto L_004003A8;
    case 38u: goto L_004003C4;
    case 39u: goto L_004003CC;
    case 40u: goto L_004003EC;
    case 41u: goto L_004003FC;
    case 42u: goto L_00400408;
    case 43u: goto L_00400430;
    case 44u: goto L_004004E4;
    case 45u: goto L_004004F0;
    case 46u: goto L_00400508;
    case 47u: goto L_00400548;
    case 48u: goto L_00400568;
    case 49u: goto L_004005B8;
    case 50u: goto L_004005C0;
    case 51u: goto L_004005E4;
    case 52u: goto L_004005EC;
    case 53u: goto L_00400604;
    case 54u: goto L_0040060C;
    case 55u: goto L_00400634;
    case 56u: goto L_00400648;
    case 57u: goto L_00400650;
    case 58u: goto L_00400668;
    case 59u: goto L_004006B0;
    case 60u: goto L_004006D0;
    case 61u: goto L_004006E0;
    case 62u: goto L_00400730;
    case 63u: goto L_00400750;
    case 64u: goto L_00400760;
    case 65u: goto L_00400770;
    case 66u: goto L_00400780;
    case 67u: goto L_00400794;
    case 68u: goto L_004007A0;
    case 69u: goto L_004007B4;
    case 70u: goto L_004007D4;
    case 71u: goto L_004007DC;
    case 72u: goto L_004007E4;
    case 73u: goto L_00400834;
    case 74u: goto L_00400870;
    case 75u: goto L_00400894;
    case 76u: goto L_004008D0;
    case 77u: goto L_00400934;
    case 78u: goto L_0040099C;
    case 79u: goto L_004009C8;
    case 80u: goto L_004009FC;
    case 81u: goto L_00400A00;
    case 82u: goto L_00400A60;
    case 83u: goto L_00400AA4;
    case 84u: goto L_00400AC0;
    case 85u: goto L_00400B0C;
    case 86u: goto L_00400B60;
    case 87u: goto L_00400B84;
    case 88u: goto L_00400BA0;
    case 89u: goto L_00400BE0;
    case 90u: goto L_00400C00;
    case 91u: goto L_00400C44;
    case 92u: goto L_00400C6C;
    case 93u: goto L_00400C74;
    case 94u: goto L_00400C80;
    case 95u: goto L_00400CA4;
    case 96u: goto L_00400CB0;
    case 97u: goto L_00400CC4;
    case 98u: goto L_00400CF0;
    case 99u: goto L_00400D10;
    case 100u: goto L_00400D24;
    case 101u: goto L_00400D50;
    case 102u: goto L_00400D94;
    case 103u: goto L_00400DB8;
    case 104u: goto L_00400DD0;
    case 105u: goto L_00400DF0;
    case 106u: goto L_00400E00;
    case 107u: goto L_00400E10;
    case 108u: goto L_00400E24;
    case 109u: goto L_00400E30;
    case 110u: goto L_00400E44;
    case 111u: goto L_00400E58;
    case 112u: goto L_00400E6C;
    case 113u: goto L_00400E78;
    case 114u: goto L_00400E80;
    case 115u: goto L_00400E8C;
    case 116u: goto L_00400EA0;
    case 117u: goto L_00400EB0;
    case 118u: goto L_00400EB8;
    case 119u: goto L_00400ED0;
    case 120u: goto L_00400EE0;
    case 121u: goto L_00400EE8;
    case 122u: goto L_00400F00;
    case 123u: goto L_00400F30;
    case 124u: goto L_00400F7C;
    case 125u: goto L_00400FB0;
    case 126u: goto L_00400FF0;
    case 127u: goto L_00401034;
    case 128u: goto L_0040105C;
    case 129u: goto L_00401098;
    case 130u: goto L_0040111C;
    case 131u: goto L_004011B4;
    case 132u: goto L_004011CC;
    case 133u: goto L_004011E4;
    case 134u: goto L_00401200;
    case 135u: goto L_00401220;
    case 136u: goto L_0040122C;
    case 137u: goto L_004012C0;
    case 138u: goto L_004012CC;
    case 139u: goto L_004012D4;
    case 140u: goto L_004012F4;
    case 141u: goto L_00401324;
    case 142u: goto L_00401364;
    case 143u: goto L_0040137C;
    case 144u: goto L_00401398;
    case 145u: goto L_004013B4;
    case 146u: goto L_00401408;
    case 147u: goto L_00401420;
    case 148u: goto L_0040142C;
    case 149u: goto L_00401434;
    case 150u: goto L_00401460;
    case 151u: goto L_00401490;
    case 152u: goto L_004014AC;
    case 153u: goto L_004014E8;
    case 154u: goto L_00401500;
    case 155u: goto L_00401578;
    case 156u: goto L_00401594;
    case 157u: goto L_004015B0;
    case 158u: goto L_004015C4;
    case 159u: goto L_004015D0;
    case 160u: goto L_004015D8;
    case 161u: goto L_004015E4;
    case 162u: goto L_00401600;
    case 163u: goto L_0040161C;
    case 164u: goto L_00401648;
    case 165u: goto L_0040165C;
    case 166u: goto L_00401688;
    case 167u: goto L_004016B0;
    case 168u: goto L_004016C0;
    case 169u: goto L_004016E0;
    case 170u: goto L_00401710;
    case 171u: goto L_00401728;
    case 172u: goto L_00401740;
    case 173u: goto L_00401774;
    case 174u: goto L_0040179C;
    case 175u: goto L_004017C4;
    case 176u: goto L_004017F0;
    case 177u: goto L_0040183C;
    case 178u: goto L_00401844;
    case 179u: goto L_00401854;
    case 180u: goto L_0040185C;
    case 181u: goto L_00401860;
    case 182u: goto L_00401878;
    case 183u: goto L_004018B8;
    case 184u: goto L_004018CC;
    case 185u: goto L_004018E0;
    case 186u: goto L_004018E8;
    case 187u: goto L_00401900;
    case 188u: goto L_00401910;
    case 189u: goto L_00401920;
    case 190u: goto L_00401950;
    case 191u: goto L_00401964;
    case 192u: goto L_004019A0;
    case 193u: goto L_004019D0;
    case 194u: goto L_004019E0;
    case 195u: goto L_00401A20;
    case 196u: goto L_00401A40;
    case 197u: goto L_00401A88;
    case 198u: goto L_00401AA8;
    case 199u: goto L_00401AC0;
    case 200u: goto L_00401AC8;
    case 201u: goto L_00401AD0;
    case 202u: goto L_00401AE4;
    case 203u: goto L_00401AF0;
    case 204u: goto L_00401B04;
    case 205u: goto L_00401B18;
    case 206u: goto L_00401B38;
    case 207u: goto L_00401B4C;
    case 208u: goto L_00401B5C;
    case 209u: goto L_00401B64;
    case 210u: goto L_00401B78;
    case 211u: goto L_00401B8C;
    case 212u: goto L_00401BA0;
    case 213u: goto L_00401BB8;
    case 214u: goto L_00401BC8;
    case 215u: goto L_00401BD4;
    case 216u: goto L_00401BDC;
    case 217u: goto L_00401BEC;
    case 218u: goto L_00401C00;
    case 219u: goto L_00401C48;
    case 220u: goto L_00401C50;
    case 221u: goto L_00401CD8;
    case 222u: goto L_00401CEC;
    case 223u: goto L_00401D00;
    case 224u: goto L_00401D08;
    case 225u: goto L_00401D50;
    case 226u: goto L_00401D58;
    case 227u: goto L_00401D70;
    case 228u: goto L_00401D98;
    case 229u: goto L_00401DA0;
    case 230u: goto L_00401DA8;
    case 231u: goto L_00401DB0;
    case 232u: goto L_00401DC4;
    case 233u: goto L_00401DE0;
    case 234u: goto L_00401DEC;
    case 235u: goto L_00401E00;
    case 236u: goto L_00401E20;
    case 237u: goto L_00401E60;
    case 238u: goto L_00401E80;
    case 239u: goto L_00401EAC;
    case 240u: goto L_00401EB8;
    case 241u: goto L_00401EC4;
    case 242u: goto L_00401ED0;
    case 243u: goto L_00401EDC;
    case 244u: goto L_00401F00;
    case 245u: goto L_00401F20;
    case 246u: goto L_00401F4C;
    case 247u: goto L_00401F58;
    case 248u: goto L_00401F64;
    case 249u: goto L_00401F70;
    case 250u: goto L_00401F7C;
    case 251u: goto L_00401FA0;
    case 252u: goto L_00401FC0;
    case 253u: goto L_00402010;
    case 254u: goto L_00402030;
    case 255u: goto L_00402080;
    case 256u: goto L_004020A0;
    case 257u: goto L_004020B4;
    case 258u: goto L_004020E8;
    case 259u: goto L_004020F0;
    case 260u: goto L_004020F8;
    case 261u: goto L_00402100;
    case 262u: goto L_0040210C;
    case 263u: goto L_00402120;
    case 264u: goto L_0040215C;
    case 265u: goto L_0040217C;
    case 266u: goto L_00402190;
    case 267u: goto L_0040219C;
    case 268u: goto L_004021B4;
    case 269u: goto L_004021C8;
    case 270u: goto L_004021D4;
    case 271u: goto L_004021EC;
    case 272u: goto L_00402204;
    case 273u: goto L_00402218;
    case 274u: goto L_0040223C;
    case 275u: goto L_00402258;
    case 276u: goto L_0040226C;
    case 277u: goto L_00402284;
    case 278u: goto L_004022A0;
    case 279u: goto L_004022C0;
    case 280u: goto L_004022DC;
    case 281u: goto L_004022F0;
    case 282u: goto L_00402304;
    case 283u: goto L_00402318;
    case 284u: goto L_0040232C;
    case 285u: goto L_00402340;
    case 286u: goto L_00402354;
    case 287u: goto L_0040236C;
    case 288u: goto L_00402384;
    case 289u: goto L_00402398;
    case 290u: goto L_004023C4;
    case 291u: goto L_004023E4;
    case 292u: goto L_004023F0;
    case 293u: goto L_00402400;
    case 294u: goto L_00402418;
    case 295u: goto L_00402434;
    case 296u: goto L_00402458;
    case 297u: goto L_0040246C;
    case 298u: goto L_00402478;
    case 299u: goto L_0040248C;
    case 300u: goto L_004024A0;
    case 301u: goto L_004024B0;
    case 302u: goto L_004024BC;
    case 303u: goto L_004024E0;
    case 304u: goto L_0040250C;
    case 305u: goto L_00402540;
    case 306u: goto L_00402554;
    case 307u: goto L_0040255C;
    case 308u: goto L_00402570;
    case 309u: goto L_0040257C;
    case 310u: goto L_00402590;
    case 311u: goto L_00402598;
    case 312u: goto L_004025A8;
    case 313u: goto L_004025C4;
    case 314u: goto L_004025E0;
    case 315u: goto L_00402638;
    case 316u: goto L_00402664;
    case 317u: goto L_00402680;
    case 318u: goto L_004026A0;
    case 319u: goto L_004026AC;
    case 320u: goto L_004026B8;
    case 321u: goto L_004026DC;
    case 322u: goto L_004026EC;
    case 323u: goto L_00402700;
    case 324u: goto L_00402708;
    case 325u: goto L_0040271C;
    case 326u: goto L_00402728;
    case 327u: goto L_0040273C;
    case 328u: goto L_0040275C;
    case 329u: goto L_004027A8;
    case 330u: goto L_004027BC;
    case 331u: goto L_004027D4;
    case 332u: goto L_004027E4;
    case 333u: goto L_00402800;
    case 334u: goto L_00402824;
    case 335u: goto L_00402834;
    case 336u: goto L_0040284C;
    case 337u: goto L_00402894;
    case 338u: goto L_004028B8;
    case 339u: goto L_004028DC;
    case 340u: goto L_004028EC;
    case 341u: goto L_00402904;
    case 342u: goto L_0040294C;
    case 343u: goto L_00402970;
    case 344u: goto L_00402994;
    case 345u: goto L_0040299C;
    case 346u: goto L_004029A4;
    case 347u: goto L_004029BC;
    case 348u: goto L_00402A04;
    case 349u: goto L_00402A28;
    case 350u: goto L_00402A4C;
    case 351u: goto L_00402A5C;
    case 352u: goto L_00402A74;
    case 353u: goto L_00402ABC;
    case 354u: goto L_00402AE0;
    case 355u: goto L_00402B04;
    case 356u: goto L_00402B14;
    case 357u: goto L_00402B2C;
    case 358u: goto L_00402B74;
    case 359u: goto L_00402B98;
    case 360u: goto L_00402BBC;
    case 361u: goto L_00402BCC;
    case 362u: goto L_00402BE4;
    case 363u: goto L_00402C2C;
    case 364u: goto L_00402C50;
    case 365u: goto L_00402C74;
    case 366u: goto L_00402C84;
    case 367u: goto L_00402CA0;
    case 368u: goto L_00402CC4;
    case 369u: goto L_00402CD4;
    case 370u: goto L_00402CF0;
    case 371u: goto L_00402D14;
    case 372u: goto L_00402D24;
    case 373u: goto L_00402D40;
    case 374u: goto L_00402D64;
    case 375u: goto L_00402D74;
    case 376u: goto L_00402D90;
    case 377u: goto L_00402DB4;
    case 378u: goto L_00402DD0;
    case 379u: goto L_00402DF4;
    case 380u: goto L_00402E18;
    case 381u: goto L_00402E34;
    case 382u: goto L_00402E58;
    case 383u: goto L_00402E74;
    case 384u: goto L_00402E98;
    case 385u: goto L_00402EB4;
    case 386u: goto L_00402ED8;
    case 387u: goto L_00402EF4;
    case 388u: goto L_00402F18;
    case 389u: goto L_00402F34;
    case 390u: goto L_00402F58;
    case 391u: goto L_00402F70;
    case 392u: goto L_00402F8C;
    case 393u: goto L_00402FB8;
    case 394u: goto L_00402FCC;
    case 395u: goto L_00403010;
    case 396u: goto L_00403040;
    case 397u: goto L_00403058;
    case 398u: goto L_00403070;
    case 399u: goto L_004030A4;
    case 400u: goto L_004030CC;
    case 401u: goto L_004030EC;
    case 402u: goto L_00403114;
    case 403u: goto L_00403140;
    case 404u: goto L_00403178;
    case 405u: goto L_00403180;
    case 406u: goto L_00403188;
    case 407u: goto L_004031A0;
    case 408u: goto L_004031DC;
    case 409u: goto L_004031E4;
    case 410u: goto L_004031FC;
    case 411u: goto L_0040322C;
    case 412u: goto L_00403258;
    case 413u: goto L_00403268;
    case 414u: goto L_00403288;
    case 415u: goto L_00403290;
    case 416u: goto L_004032C4;
    case 417u: goto L_004032F4;
    case 418u: goto L_004032FC;
    case 419u: goto L_0040331C;
    case 420u: goto L_00403360;
    case 421u: goto L_0040336C;
    case 422u: goto L_00403390;
    case 423u: goto L_0040339C;
    case 424u: goto L_004033A4;
    case 425u: goto L_004033D0;
    case 426u: goto L_00403414;
    case 427u: goto L_00403424;
    case 428u: goto L_0040343C;
    case 429u: goto L_00403450;
    case 430u: goto L_004034A0;
    case 431u: goto L_004034C0;
    case 432u: goto L_004034D0;
    case 433u: goto L_004034E4;
    case 434u: goto L_004034EC;
    case 435u: goto L_00403534;
    case 436u: goto L_0040353C;
    case 437u: goto L_00403550;
    case 438u: goto L_00403578;
    case 439u: goto L_00403580;
    case 440u: goto L_00403588;
    case 441u: goto L_00403590;
    case 442u: goto L_004035A4;
    case 443u: goto L_004035B8;
    case 444u: goto L_004035C0;
    case 445u: goto L_004035C8;
    case 446u: goto L_004035D0;
    case 447u: goto L_0040360C;
    case 448u: goto L_00403614;
    case 449u: goto L_0040361C;
    case 450u: goto L_00403628;
    case 451u: goto L_0040363C;
    case 452u: goto L_00403660;
    case 453u: goto L_00403688;
    case 454u: goto L_004036A0;
    case 455u: goto L_004036B0;
    case 456u: goto L_004036EC;
    case 457u: goto L_0040371C;
    case 458u: goto L_00403730;
    case 459u: goto L_00403764;
    case 460u: goto L_00403778;
    case 461u: goto L_00403790;
    case 462u: goto L_004037C0;
    case 463u: goto L_004037EC;
    case 464u: goto L_00403800;
    case 465u: goto L_00403834;
    case 466u: goto L_00403844;
    case 467u: goto L_00403850;
    case 468u: goto L_0040385C;
    case 469u: goto L_00403874;
    case 470u: goto L_00403888;
    case 471u: goto L_0040389C;
    case 472u: goto L_004038B0;
    case 473u: goto L_004038C4;
    case 474u: goto L_004038E0;
    case 475u: goto L_004038F0;
    case 476u: goto L_00403914;
    case 477u: goto L_00403928;
    case 478u: goto L_0040394C;
    case 479u: goto L_00403970;
    case 480u: goto L_0040398C;
    case 481u: goto L_004039A0;
    case 482u: goto L_004039C4;
    case 483u: goto L_004039DC;
    case 484u: goto L_00403A00;
    case 485u: goto L_00403A24;
    case 486u: goto L_00403A50;
    case 487u: goto L_00403A7C;
    case 488u: goto L_00403A90;
    case 489u: goto L_00403AA4;
    case 490u: goto L_00403AD0;
    case 491u: goto L_00403B14;
    case 492u: goto L_00403B34;
    case 493u: goto L_00403B58;
    case 494u: goto L_00403B70;
    case 495u: goto L_00403B90;
    case 496u: goto L_00403BCC;
    case 497u: goto L_00403BDC;
    case 498u: goto L_00403BFC;
    case 499u: goto L_00403C0C;
    case 500u: goto L_00403C30;
    case 501u: goto L_00403C78;
    case 502u: goto L_00403C90;
    case 503u: goto L_00403CCC;
    case 504u: goto L_00403CD0;
    case 505u: goto L_00403CDC;
    case 506u: goto L_00403CE4;
    case 507u: goto L_00403D0C;
    case 508u: goto L_00403D1C;
    case 509u: goto L_00403D34;
    case 510u: goto L_00403D4C;
    case 511u: goto L_00403D54;
    case 512u: goto L_00403D5C;
    case 513u: goto L_00403D6C;
    case 514u: goto L_00403D74;
    case 515u: goto L_00403D7C;
    case 516u: goto L_00403D94;
    case 517u: goto L_00403DB8;
    case 518u: goto L_00403DC0;
    case 519u: goto L_00403DCC;
    case 520u: goto L_00403DE8;
    case 521u: goto L_00403DF8;
    case 522u: goto L_00403E10;
    case 523u: goto L_00403E34;
    case 524u: goto L_00403E64;
    case 525u: goto L_00403E78;
    case 526u: goto L_00403E90;
    case 527u: goto L_00403EBC;
    case 528u: goto L_00403F00;
    case 529u: goto L_00403F54;
    case 530u: goto L_00403F74;
    case 531u: goto L_00403F80;
    case 532u: goto L_00403FA0;
    case 533u: goto L_00403FC8;
    case 534u: goto L_00403FEC;
    default: bad_entry(c, 0x00400000u); return;
    }
L_00400000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.budget -= 1;
L_00400004:
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 1;
L_00400008:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 1812u)));
    c.budget -= 4;
L_00400018:
    set32(c.r[2], ld32((c.r[17].w[0] + 1812u)));
    c.budget -= 1;
L_0040001C:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 1812u), c.r[2].w[0]);  if (t) { goto L_00400030; } }
    set32(c.r[2], c.r[2].w[0] + 6u);
    st32((c.r[17].w[0] + 1812u), c.r[2].w[0]);
    c.budget -= 2;
L_00400030:
    set32(c.r[3], ld32((c.r[17].w[0] + 1812u)));
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1808u)));  goto L_0040004C; }
L_00400040:
    set32(c.r[2], c.r[3].w[0] - 6u);
    st32((c.r[17].w[0] + 1812u), c.r[2].w[0]);
    c.budget -= 2;
L_00400048:
    set32(c.r[4], ld32((c.r[17].w[0] + 1808u)));
    c.budget -= 1;
L_0040004C:
    set32(c.r[2], ld32((c.r[17].w[0] + 1812u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_00400060:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], ld32((c.r[17].w[0] + 1812u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040001Cu | kUnwind; return; } goto L_0040001C; }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(36ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400018u | kUnwind; return; } goto L_00400018; } }
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400084u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00400084u) [[unlikely]] return; }
    goto L_00400084;
L_00400080:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00400084:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_004000A8; }
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004000A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004000A4u) [[unlikely]] return; }
L_004000A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_004000A8:
    set32(c.r[3], ld32((c.r[17].w[0] + 1812u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 1u);  if (t) { goto L_004000C4; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004000C4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004000C4u) [[unlikely]] return; }
L_004000C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004000D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 350u, depth + 1u); else { c.pc = 0x003FFF00u; return; } if (c.pc != 0x004000D0u) [[unlikely]] return; }
L_004000D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004000E0:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 1;
    c.pc = 0x004000E4u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_004000F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 11;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 148u)));  goto L_004002C4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[17].w[0] + 156u)));  goto L_004001AC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 360u);  goto L_0040015C; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u - 1u);  goto L_00400148; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0040040C; } }
L_00400144:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_00400148:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400154u); st32((c.r[17].w[0] + 88u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00400154u) [[unlikely]] return; }
L_00400154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00400408; } }
L_0040015C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400164u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00400164u) [[unlikely]] return; }
L_00400164:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 156u), c.r[4].w[0]);  goto L_0040019C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 29846u);
    set32(c.r[7], c.r[7].w[0] + 29864u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400194u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x00400194u) [[unlikely]] return; }
L_00400194:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 156u), c.r[4].w[0]);
    c.budget -= 2;
L_0040019C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 4;
L_004001AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00400408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400144u | kUnwind; return; } goto L_00400144; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400144u | kUnwind; return; } goto L_00400144; } }
L_004001E0:
    set32(c.r[4], ld32((c.r[6].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004001F4u); c.r[5].d[0] = c.r[2].d[0] | 17473ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x004001F4u) [[unlikely]] return; }
L_004001F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400210u); c.r[5].d[0] = c.r[2].d[0] | 21075ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00400210u) [[unlikely]] return; }
L_00400210:
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
L_00400220:
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040022Cu); c.r[5].d[0] = c.r[2].d[0] | 20545ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0040022Cu) [[unlikely]] return; }
L_0040022C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00400244; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00400244; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], 0u + 432u);  goto L_0040025C; }
L_00400244:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400254u); set32(c.r[5], c.r[5].w[0] + 29884u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00400254u) [[unlikely]] return; }
L_00400254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400144u | kUnwind; return; } goto L_00400144; } }
L_0040025C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400264u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00400264u) [[unlikely]] return; }
L_00400264:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 148u), c.r[2].w[0]);  goto L_00400284; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400280u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 284u, depth + 1u); else { c.pc = 0x00207340u; return; } if (c.pc != 0x00400280u) [[unlikely]] return; }
L_00400280:
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_00400284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040028Cu); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0040028Cu) [[unlikely]] return; }
L_0040028C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 160u), c.r[4].w[0]);  goto L_004002B4; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004002ACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 139u, depth + 1u); else { c.pc = 0x00205870u; return; } if (c.pc != 0x004002ACu) [[unlikely]] return; }
L_004002AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 160u), c.r[4].w[0]);
    c.budget -= 2;
L_004002B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00400408; } }
L_004002C4:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00400408; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400144u | kUnwind; return; } goto L_00400144; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400144u | kUnwind; return; } goto L_00400144; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[8].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00400408; } }
    c.r[2].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400144u | kUnwind; return; } goto L_00400144; } }
    c.r[2].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400144u | kUnwind; return; } goto L_00400144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040032Cu);  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x0040032Cu) [[unlikely]] return; }
L_0040032C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400338u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x00400338u) [[unlikely]] return; }
L_00400338:
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400344u); set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x00400344u) [[unlikely]] return; }
L_00400344:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400350u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x00400350u) [[unlikely]] return; }
L_00400350:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400360u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00400360u) [[unlikely]] return; }
L_00400360:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  goto L_00400384; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040037Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040037Cu) [[unlikely]] return; }
L_0040037C:
    st32((c.r[17].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 2;
L_00400384:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004003A4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040039Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040039Cu) [[unlikely]] return; }
L_0040039C:
    st32((c.r[17].w[0] + 160u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004003A4:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_004003A8:
    set32(c.r[4], c.r[17].w[0] + 1456u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 168u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004003C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 64u, depth + 1u); else { c.pc = 0x00210D10u; return; } if (c.pc != 0x004003C4u) [[unlikely]] return; }
L_004003C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004003CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x004003CCu) [[unlikely]] return; }
L_004003CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004003A8u | kUnwind; return; } goto L_004003A8; }
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[4], c.r[17].w[0] + 1128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004003ECu); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x004003ECu) [[unlikely]] return; }
L_004003EC:
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[4], c.r[17].w[0] + 1288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004003FCu); set32(c.r[6], 0u + 51u);  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x004003FCu) [[unlikely]] return; }
L_004003FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400408u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00400408u) [[unlikely]] return; }
L_00400408:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0040040C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00400430:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 50u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 50u);  goto L_00400C30; }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 1840u)));  goto L_00400C10; }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 30u);  goto L_00400ACC; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_004008E0; }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 15u);  goto L_004007C0; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  goto L_00400660; }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 9u);  goto L_00400638; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004005FC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004005DC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 6u);  goto L_004004D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00400CF4; } }
L_004004D0:
    set32(c.r[4], 0u + 288u);
    st32((c.r[17].w[0] + 1832u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1812u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004004E4u); st32((c.r[17].w[0] + 1808u), 0u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x004004E4u) [[unlikely]] return; }
L_004004E4:
    st32((c.r[17].w[0] + 1840u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004004F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001ECBC0u; return; } if (c.pc != 0x004004F0u) [[unlikely]] return; }
L_004004F0:
    st32((c.r[17].w[0] + 1824u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 1828u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400508u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x00207BE0u; return; } if (c.pc != 0x00400508u) [[unlikely]] return; }
L_00400508:
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[3], 0u + 16u);
    st32((c.r[2].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 16;
L_00400548:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  goto L_0040056C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[16].w[0] + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00400568u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00400568u) [[unlikely]] return; }
L_00400568:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0040056C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[2].w[0] + 1844u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00400548u | kUnwind; return; } goto L_00400548; }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 256u);
    st32((c.r[17].w[0] + 1736u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 1740u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 1748u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[17].w[0] + 1748u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004005B8u); st32((c.r[17].w[0] + 1748u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 350u, depth + 1u); else { c.pc = 0x003FFF00u; return; } if (c.pc != 0x004005B8u) [[unlikely]] return; }
L_004005B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004005C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 353u, depth + 1u); else { c.pc = 0x003FFF70u; return; } if (c.pc != 0x004005C0u) [[unlikely]] return; }
L_004005C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00400CF0; } }
L_004005DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004005E4u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x004005E4u) [[unlikely]] return; }
L_004005E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004005ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003FCCA0u; return; } if (c.pc != 0x004005ECu) [[unlikely]] return; }
L_004005EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00400CF0; } }
L_004005FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400604u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00400604u) [[unlikely]] return; }
L_00400604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040060Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x0040060Cu) [[unlikely]] return; }
L_0040060C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00400CF0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 1812u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 1u);  if (t) { goto L_00400634; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400634u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00400634u) [[unlikely]] return; }
L_00400634:
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_00400638:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400648u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 350u, depth + 1u); else { c.pc = 0x003FFF00u; return; } if (c.pc != 0x00400648u) [[unlikely]] return; }
L_00400648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400650u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 353u, depth + 1u); else { c.pc = 0x003FFF70u; return; } if (c.pc != 0x00400650u) [[unlikely]] return; }
L_00400650:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00400CF0; } }
L_00400660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400668u); c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00400668u) [[unlikely]] return; }
L_00400668:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull | 32768ull;  goto L_004006D8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 1808u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[17].w[0] + 1808u), c.r[3].w[0]);  if (t) { goto L_0040068C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1832u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 1808u), c.r[2].w[0]);
    c.budget -= 3;
L_0040068C:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_004006B4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004006B0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004006B0u) [[unlikely]] return; }
L_004006B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_004006B4:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004007BC; } }
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004006D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004006D0u) [[unlikely]] return; }
L_004006D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004007BC; } }
L_004006D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004006E0u); c.r[4].d[0] = c.r[2].d[0] << 16;  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x004006E0u) [[unlikely]] return; }
L_004006E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 16u);  goto L_00400758; }
    set32(c.r[2], ld32((c.r[17].w[0] + 1808u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 1808u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1832u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00400710; }
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 1808u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
L_00400710:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00400734; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00400730u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00400730u) [[unlikely]] return; }
L_00400730:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00400734:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004007BC; } }
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400750u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00400750u) [[unlikely]] return; }
L_00400750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004007BC; } }
L_00400758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400760u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00400760u) [[unlikely]] return; }
L_00400760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00400C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400770u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00400770u) [[unlikely]] return; }
L_00400770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00400AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400780u); c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (depth < kMaxDepth) unit_002B(c, 333u, depth + 1u); else { c.pc = 0x001CEE30u; return; } if (c.pc != 0x00400780u) [[unlikely]] return; }
L_00400780:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_00400798; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400794u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B8(c, 1u, depth + 1u); else { c.pc = 0x00400000u; return; } if (c.pc != 0x00400794u) [[unlikely]] return; }
L_00400794:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 1;
L_00400798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004007A0u);  if (depth < kMaxDepth) unit_002B(c, 333u, depth + 1u); else { c.pc = 0x001CEE30u; return; } if (c.pc != 0x004007A0u) [[unlikely]] return; }
L_004007A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00400CF0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004007B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B8(c, 1u, depth + 1u); else { c.pc = 0x00400000u; return; } if (c.pc != 0x004007B4u) [[unlikely]] return; }
L_004007B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00400CF0; } }
L_004007BC:
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_004007C0:
    set32(c.r[4], 0u + 6u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004007D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004007D4u) [[unlikely]] return; }
L_004007D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004007DCu); set32(c.r[4], c.r[17].w[0] + 1288u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x004007DCu) [[unlikely]] return; }
L_004007DC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 1808u)));
    c.budget -= 2;
L_004007E4:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    if (c.r[3].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] << 2);  goto L_0040080C; }
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(36ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  goto L_0040083C; }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0040080C:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 1844u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004008A0; }
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400834u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00400834u) [[unlikely]] return; }
L_00400834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040089C; } }
L_0040083C:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[3].w[0] + 1844u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1844u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 152u)));  goto L_00400878; }
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040089C; } }
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400870u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00400870u) [[unlikely]] return; }
L_00400870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040089C; } }
L_00400878:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00400898; }
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400894u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00400894u) [[unlikely]] return; }
L_00400894:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00400898:
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0040089C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004008A0:
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1808u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004007E4u | kUnwind; return; } goto L_004007E4; }
    st32((c.r[17].w[0] + 1836u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 88u)));  goto L_004008D4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004008D0u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004008D0u) [[unlikely]] return; }
L_004008D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_004008D4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00400CF0; } }
L_004008E0:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.f[20] = ld32((c.r[17].w[0] + 1836u));  if (t) { goto L_004008F8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00400914; } }
L_004008F8:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_00400914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 1836u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 1836u), c.f[0]);
    c.budget -= 8;
L_00400934:
    c.f[2] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[21] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);  if (t) { goto L_0040099C; } }
    c.f[0] = ld32((c.r[17].w[0] + 1836u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0040099C; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040099Cu); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x0040099Cu) [[unlikely]] return; }
L_0040099C:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004009CC; }
    c.f[0] = ld32((c.r[17].w[0] + 1836u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004009C8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004009C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 346u, depth + 1u); else { c.pc = 0x003FFE40u; return; } if (c.pc != 0x004009C8u) [[unlikely]] return; }
L_004009C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004009CC:
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400934u | kUnwind; return; } goto L_00400934; } }
    c.f[1] = ld32((c.r[17].w[0] + 1836u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00400CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 1808u)));  if (t) { goto L_00400A18; } }
L_004009FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 1812u)));
    c.budget -= 1;
L_00400A00:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 1812u), c.r[2].w[0]);  if (t) { goto L_00400A14; } }
    set32(c.r[2], c.r[2].w[0] + 6u);
    st32((c.r[17].w[0] + 1812u), c.r[2].w[0]);
    c.budget -= 2;
L_00400A14:
    set32(c.r[3], ld32((c.r[17].w[0] + 1808u)));
    c.budget -= 1;
L_00400A18:
    set32(c.r[4], ld32((c.r[17].w[0] + 1812u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], ld32((c.r[17].w[0] + 1812u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00400A00u | kUnwind; return; } goto L_00400A00; }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(36ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004009FCu | kUnwind; return; } goto L_004009FC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_00400A64; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400A60u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00400A60u) [[unlikely]] return; }
L_00400A60:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00400A64:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400634u | kUnwind; return; } goto L_00400634; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1816u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1808u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400634u | kUnwind; return; } goto L_00400634; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00400AA8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 14u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00400AA4u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00400AA4u) [[unlikely]] return; }
L_00400AA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00400AA8:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 1820u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400634u | kUnwind; return; } goto L_00400634; } }
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400AC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00400AC0u) [[unlikely]] return; }
L_00400AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400634u | kUnwind; return; } goto L_00400634; } }
L_00400AC8:
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_00400ACC:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1808u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 1812u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    if (c.r[16].sd[0] < 0) { set32(c.r[4], 0u + 3u);  goto L_00400B00; }
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(36ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_00400B14; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_00400B00:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400B0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00400B0Cu) [[unlikely]] return; }
L_00400B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400634u | kUnwind; return; } goto L_00400634; } }
L_00400B14:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 1816u), c.r[4].w[0]);  goto L_00400B3C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 1816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00400B38; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400634u | kUnwind; return; } goto L_00400634; } }
L_00400B38:
    st32((c.r[17].w[0] + 1816u), c.r[4].w[0]);
    c.budget -= 1;
L_00400B3C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 1812u)));
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 1820u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400B60u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00400B60u) [[unlikely]] return; }
L_00400B60:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00400B88; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 14u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00400B84u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00400B84u) [[unlikely]] return; }
L_00400B84:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00400B88:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 1820u)));  if (t) { goto L_00400BA0; } }
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400BA0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00400BA0u) [[unlikely]] return; }
L_00400BA0:
    set32(c.r[6], ld32((c.r[17].w[0] + 1816u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1820u)));
    set32(c.r[3], c.r[3].w[0] + 29556u);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 1828u), c.r[6].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400BE0u); set32(c.r[4], ld32((c.r[17].w[0] + 1840u)));  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x00400BE0u) [[unlikely]] return; }
L_00400BE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 29552u);
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400C00u); set32(c.r[4], c.r[17].w[0] + 1128u);  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x00400C00u) [[unlikely]] return; }
L_00400C00:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00400CF0; } }
L_00400C10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00400634u | kUnwind; return; } goto L_00400634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00400CF0; } }
L_00400C2C:
    set32(c.r[2], 0u + 50u);
    c.budget -= 1;
L_00400C30:
    set32(c.r[4], 0u + 2u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400C44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00400C44u) [[unlikely]] return; }
L_00400C44:
    set32(c.r[6], ld32((c.r[17].w[0] + 1824u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_00400C6C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1828u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00400C6C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1840u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400C6Cu); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x00400C6Cu) [[unlikely]] return; }
L_00400C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400C74u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00400C74u) [[unlikely]] return; }
L_00400C74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400C80u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x00400C80u) [[unlikely]] return; }
L_00400C80:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00400CAC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 152u), 0u);  goto L_00400CA8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00400CA4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00400CA4u) [[unlikely]] return; }
L_00400CA4:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_00400CA8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00400CAC:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00400CB0:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400CC4u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x00400CC4u) [[unlikely]] return; }
L_00400CC4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00400CB0u | kUnwind; return; } goto L_00400CB0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 16385u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400CF0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00400CF0u) [[unlikely]] return; }
L_00400CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00400CF4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00400D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400D24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 249u, depth + 1u); else { c.pc = 0x003FF310u; return; } if (c.pc != 0x00400D24u) [[unlikely]] return; }
L_00400D24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 13808u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 800u), 0u);
    st32((c.r[16].w[0] + 796u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00400D50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00400DD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 13808u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 796u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00400D98; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00400D94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00400D94u) [[unlikely]] return; }
L_00400D94:
    st32((c.r[17].w[0] + 796u), 0u);
    c.budget -= 1;
L_00400D98:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00400DBC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400DB8u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00400DB8u) [[unlikely]] return; }
L_00400DB8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00400DBC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00400DD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400DD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00400DD0u) [[unlikely]] return; }
L_00400DD0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00400DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00400DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00400E00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00400E10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400E24u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00400E24u) [[unlikely]] return; }
L_00400E24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400E30u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00400E30u) [[unlikely]] return; }
L_00400E30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);  goto L_00400E60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400E44u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x00400E44u) [[unlikely]] return; }
L_00400E44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400E58u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 182u, depth + 1u); else { c.pc = 0x003FE040u; return; } if (c.pc != 0x00400E58u) [[unlikely]] return; }
L_00400E58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 2;
L_00400E60:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400E6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 187u, depth + 1u); else { c.pc = 0x003FE0E0u; return; } if (c.pc != 0x00400E6Cu) [[unlikely]] return; }
L_00400E6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400E78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 60u, depth + 1u); else { c.pc = 0x003FC8E0u; return; } if (c.pc != 0x00400E78u) [[unlikely]] return; }
L_00400E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400E80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 61u, depth + 1u); else { c.pc = 0x003FC8F0u; return; } if (c.pc != 0x00400E80u) [[unlikely]] return; }
L_00400E80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400E8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 89u, depth + 1u); else { c.pc = 0x003FCD40u; return; } if (c.pc != 0x00400E8Cu) [[unlikely]] return; }
L_00400E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00400EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400EB0u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00400EB0u) [[unlikely]] return; }
L_00400EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400EB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003FCCA0u; return; } if (c.pc != 0x00400EB8u) [[unlikely]] return; }
L_00400EB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00400ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400EE0u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00400EE0u) [[unlikely]] return; }
L_00400EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400EE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x00400EE8u) [[unlikely]] return; }
L_00400EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00400F00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00400F24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00400F90; } }
L_00400F24:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400F30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00400F30u) [[unlikely]] return; }
L_00400F30:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00400F44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00400F58; } }
L_00400F44:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_00400F58; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_00400F58:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));  goto L_00400F80; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00400F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400F7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00400F7Cu) [[unlikely]] return; }
L_00400F7C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 1;
L_00400F80:
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00400F90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00400FB0:
    c.r[2].d[0] = c.r[5].sd[0] < 1018ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);  goto L_00400FDC; }
    c.r[1].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00400FD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00400FE0; } }
L_00400FD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 1;
L_00400FDC:
    c.f[0] = c.r[2].w[0];
    c.budget -= 1;
L_00400FE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00400FF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004011DC; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_0040103C; }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { st32((c.r[17].w[0] + 88u), c.r[5].w[0]);  goto L_0040102C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004011E8; } }
L_0040102C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401034u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00401034u) [[unlikely]] return; }
L_00401034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004011E4; } }
L_0040103C:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_0040104C; }
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 2;
L_0040104C:
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 792u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 148u), 0u);  if (t) { goto L_004010E8; } }
L_0040105C:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 5;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00401090; }
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_004010E4; } }
L_00401090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401098u);  if (depth < kMaxDepth) unit_00B8(c, 122u, depth + 1u); else { c.pc = 0x00400F00u; return; } if (c.pc != 0x00401098u) [[unlikely]] return; }
L_00401098:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] << 4);  goto L_004010C0; }
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 160u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    st32((c.r[3].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_004010D8; } }
L_004010C0:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 6;
L_004010D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 3;
L_004010E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004010E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 792u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 30528u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040105Cu | kUnwind; return; } goto L_0040105C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040111Cu); set32(c.r[4], 0u + 548u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0040111Cu) [[unlikely]] return; }
L_0040111C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 796u), c.r[2].w[0]);  goto L_004011B8; }
    set32(c.r[9], ld32((c.r[17].w[0] + 792u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 148u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[4], c.r[28].w[0] - 31584u);
    st64((c.r[29].w[0]), c.r[7].d[0]);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] + 30544u);
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 30536u);
    set32(c.r[4], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 30540u);
    set32(c.r[3], c.r[3].w[0] + 30532u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[11], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] + c.r[10].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[9].d[0]);
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[6].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[9], ld32((c.r[3].w[0])));
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + 30617u);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004011B4u); set32(c.r[8], c.r[17].w[0] + 152u);  if (depth < kMaxDepth) unit_00B9(c, 89u, depth + 1u); else { c.pc = 0x00404DA0u; return; } if (c.pc != 0x004011B4u) [[unlikely]] return; }
L_004011B4:
    st32((c.r[17].w[0] + 796u), c.r[2].w[0]);
    c.budget -= 1;
L_004011B8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004011CCu); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x004011CCu) [[unlikely]] return; }
L_004011CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004011E4; } }
L_004011DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004011E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x004011E4u) [[unlikely]] return; }
L_004011E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004011E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00401200:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 289u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401220u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00401220u) [[unlikely]] return; }
L_00401220:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040122Cu); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0040122Cu) [[unlikely]] return; }
L_0040122C:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004015B8; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004015A8; }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 25u);  goto L_00401544; }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 4096u);  goto L_004014F8; }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_004014C0; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 20u);  goto L_0040146C; }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00401448; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 4111u);  goto L_00401374; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 796u)));  goto L_00401308; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_004012D8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004012B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004015E8; } }
L_004012B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004012C0u);  if (depth < kMaxDepth) unit_0024(c, 315u, depth + 1u); else { c.pc = 0x001B23D0u; return; } if (c.pc != 0x004012C0u) [[unlikely]] return; }
L_004012C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004012CCu); st32((c.r[18].w[0] + 800u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001ECBC0u; return; } if (c.pc != 0x004012CCu) [[unlikely]] return; }
L_004012CC:
    st32((c.r[18].w[0] + 804u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 812u), 0u);
    c.budget -= 2;
L_004012D4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_004012D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 796u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004012F4u); c.r[6].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x004012F4u) [[unlikely]] return; }
L_004012F4:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004015E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 796u)));
    c.budget -= 1;
L_00401308:
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[18].w[0] + 812u), c.r[2].w[0]);  if (t) { goto L_004015B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401324u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00401324u) [[unlikely]] return; }
L_00401324:
    set32(c.r[5], ld32((c.r[18].w[0] + 792u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 812u)));
    set32(c.r[3], c.r[3].w[0] + 30528u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 14;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[18].w[0] + 88u)));  goto L_00401368; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401364u);  if (depth < kMaxDepth) unit_0024(c, 309u, depth + 1u); else { c.pc = 0x001B2350u; return; } if (c.pc != 0x00401364u) [[unlikely]] return; }
L_00401364:
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 1;
L_00401368:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4111u);
    c.budget -= 3;
L_00401374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040137Cu);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0040137Cu) [[unlikely]] return; }
L_0040137C:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004015E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401398u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00401398u) [[unlikely]] return; }
L_00401398:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004015E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004013B4u);  if (depth < kMaxDepth) unit_0025(c, 526u, depth + 1u); else { c.pc = 0x001B7F00u; return; } if (c.pc != 0x004013B4u) [[unlikely]] return; }
L_004013B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004015E4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 792u)));
    set32(c.r[2], c.r[2].w[0] + 30528u);
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 15;
    { const bool t = c.r[7].sd[0] >= 0; st32((c.r[18].w[0] + 808u), c.r[6].w[0]);  if (t) { goto L_00401410; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01210000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401408u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x00401408u) [[unlikely]] return; }
L_00401408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00401424; } }
L_00401410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01210000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401420u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x00401420u) [[unlikely]] return; }
L_00401420:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00401424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040142Cu);  if (depth < kMaxDepth) unit_00B8(c, 107u, depth + 1u); else { c.pc = 0x00400E10u; return; } if (c.pc != 0x0040142Cu) [[unlikely]] return; }
L_0040142C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401434u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 116u, depth + 1u); else { c.pc = 0x00400EA0u; return; } if (c.pc != 0x00401434u) [[unlikely]] return; }
L_00401434:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004015E4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00401448:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004015E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401460u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 119u, depth + 1u); else { c.pc = 0x00400ED0u; return; } if (c.pc != 0x00401460u) [[unlikely]] return; }
L_00401460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004015E4; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_0040146C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 808u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401490u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x00400FB0u; return; } if (c.pc != 0x00401490u) [[unlikely]] return; }
L_00401490:
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01210000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004014ACu); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x004014ACu) [[unlikely]] return; }
L_004014AC:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004015E4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_004014C0:
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004015E4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 796u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004014E8u); st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 128u, depth + 1u); else { c.pc = 0x00224E70u; return; } if (c.pc != 0x004014E8u) [[unlikely]] return; }
L_004014E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4096u);
    c.budget -= 4;
L_004014F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401500u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00401500u) [[unlikely]] return; }
L_00401500:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00401528; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00401540; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00401528:
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004015E4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00401540:
    set32(c.r[4], 0u + 25u);
    c.budget -= 1;
L_00401544:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[18].w[0] + 88u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004015E4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 796u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401578u); st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 130u, depth + 1u); else { c.pc = 0x00224EA0u; return; } if (c.pc != 0x00401578u) [[unlikely]] return; }
L_00401578:
    set32(c.r[6], ld32((c.r[18].w[0] + 804u)));
    c.budget -= 3;
    if (c.r[6].sd[0] < 0) { set32(c.r[3], ld32((c.r[18].w[0] + 88u)));  goto L_00401598; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401594u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x00401594u) [[unlikely]] return; }
L_00401594:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 1;
L_00401598:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004015E4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004015A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004015B0u);  if (depth < kMaxDepth) unit_00B8(c, 107u, depth + 1u); else { c.pc = 0x00400E10u; return; } if (c.pc != 0x004015B0u) [[unlikely]] return; }
L_004015B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004012D4u | kUnwind; return; } goto L_004012D4; } }
L_004015B8:
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004015C4u); st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x004015C4u) [[unlikely]] return; }
L_004015C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004015D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x004015D0u) [[unlikely]] return; }
L_004015D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004015D8u); set32(c.r[4], ld32((c.r[18].w[0] + 800u)));  if (depth < kMaxDepth) unit_0024(c, 309u, depth + 1u); else { c.pc = 0x001B2350u; return; } if (c.pc != 0x004015D8u) [[unlikely]] return; }
L_004015D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004015E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x004015E4u) [[unlikely]] return; }
L_004015E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004015E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00401600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040161Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0040161Cu) [[unlikely]] return; }
L_0040161C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 13888u);
    set32(c.r[4], 0u + 872u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401648u); st32((c.r[16].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00401648u) [[unlikely]] return; }
L_00401648:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  goto L_00401660; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040165Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x0040165Cu) [[unlikely]] return; }
L_0040165C:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_00401660:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 88u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401688u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00401688u) [[unlikely]] return; }
L_00401688:
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004016B0u); st32((c.r[4].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x004016B0u) [[unlikely]] return; }
L_004016B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004016C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 305u, depth + 1u); else { c.pc = 0x004221B0u; return; } if (c.pc != 0x004016C0u) [[unlikely]] return; }
L_004016C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004016E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00401728; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401710u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00401710u) [[unlikely]] return; }
L_00401710:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040172C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401728u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00401728u) [[unlikely]] return; }
L_00401728:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040172C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00401740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_0040177C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), 0u);  goto L_00401778; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00401774u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00401774u) [[unlikely]] return; }
L_00401774:
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 1;
L_00401778:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_0040177C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  goto L_004017A4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), 0u);  goto L_004017A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040179Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040179Cu) [[unlikely]] return; }
L_0040179C:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_004017A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_004017A4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_004017CC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 100u), 0u);  goto L_004017C8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004017C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004017C4u) [[unlikely]] return; }
L_004017C4:
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 1;
L_004017C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_004017CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004017F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00401D58; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 56u));  goto L_00401C54; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 30640u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00400000u < 16384u) { entry = entries_00B8[(t - 0x00400000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040183C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401844u);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x00401844u) [[unlikely]] return; }
L_00401844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00401C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401854u);  if (depth < kMaxDepth) unit_00C0(c, 358u, depth + 1u); else { c.pc = 0x004225F0u; return; } if (c.pc != 0x00401854u) [[unlikely]] return; }
L_00401854:
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401860u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x00401860u) [[unlikely]] return; }
    goto L_00401860;
L_0040185C:
    set32(c.r[4], 0u + 272u);
    c.budget -= 1;
L_00401860:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  goto L_0040187C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401878u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x00401878u) [[unlikely]] return; }
L_00401878:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_0040187C:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_004018A0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_004018A0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004018A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004018B8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x004018B8u) [[unlikely]] return; }
L_004018B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004018CCu); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004018CCu) [[unlikely]] return; }
L_004018CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004018E0u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004018E0u) [[unlikely]] return; }
L_004018E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004018E8u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x004018E8u) [[unlikely]] return; }
L_004018E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 100u), c.r[2].w[0]);  goto L_00401904; }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401900u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x00401900u) [[unlikely]] return; }
L_00401900:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_00401904:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401910u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00B8(c, 314u, depth + 1u); else { c.pc = 0x004025E0u; return; } if (c.pc != 0x00401910u) [[unlikely]] return; }
L_00401910:
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 58u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
L_00401920:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[4], 0u + 3u);  goto L_00401958; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00401C50; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00401950u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00401950u) [[unlikely]] return; }
L_00401950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00401C50; } }
L_00401958:
    set32(c.r[3], 0u + 30u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 3;
L_00401964:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  goto L_0040197C; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00401C50; } }
L_0040197C:
    c.r[4].d[0] = ld64((c.r[5].w[0] + 80u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 16ull;  goto L_004019A8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004019A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 263u, depth + 1u); else { c.pc = 0x00402120u; return; } if (c.pc != 0x004019A0u) [[unlikely]] return; }
L_004019A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00401C50; } }
L_004019A8:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[6].d[0] = ld64((c.r[5].w[0] + 96u));  goto L_004019E8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004019D8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004019D0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00B8(c, 263u, depth + 1u); else { c.pc = 0x00402120u; return; } if (c.pc != 0x004019D0u) [[unlikely]] return; }
L_004019D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00401C50; } }
L_004019D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004019E0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00B8(c, 263u, depth + 1u); else { c.pc = 0x00402120u; return; } if (c.pc != 0x004019E0u) [[unlikely]] return; }
L_004019E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00401C50; } }
L_004019E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_00401A10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00401A48; }
L_00401A10:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_00401A28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401A20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 244u, depth + 1u); else { c.pc = 0x00401F00u; return; } if (c.pc != 0x00401A20u) [[unlikely]] return; }
L_00401A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00401A44; } }
L_00401A28:
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00401A44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401A40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 237u, depth + 1u); else { c.pc = 0x00401E60u; return; } if (c.pc != 0x00401A40u) [[unlikely]] return; }
L_00401A40:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00401A44:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00401A48:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[6].d[0] = ld64((c.r[4].w[0] + 96u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00401A78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u - 1u);  goto L_00401AB0; }
L_00401A78:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_00401A90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401A88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 253u, depth + 1u); else { c.pc = 0x00402010u; return; } if (c.pc != 0x00401A88u) [[unlikely]] return; }
L_00401A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00401AAC; } }
L_00401A90:
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00401AAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401AA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 251u, depth + 1u); else { c.pc = 0x00401FA0u; return; } if (c.pc != 0x00401AA8u) [[unlikely]] return; }
L_00401AA8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00401AAC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00401AB0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00401C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401AC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 255u, depth + 1u); else { c.pc = 0x00402080u; return; } if (c.pc != 0x00401AC0u) [[unlikely]] return; }
L_00401AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00401C50; } }
L_00401AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401AD0u); set32(c.r[5], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_00B8(c, 236u, depth + 1u); else { c.pc = 0x00401E20u; return; } if (c.pc != 0x00401AD0u) [[unlikely]] return; }
L_00401AD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401AE4u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00401AE4u) [[unlikely]] return; }
L_00401AE4:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401AF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 236u, depth + 1u); else { c.pc = 0x00401E20u; return; } if (c.pc != 0x00401AF0u) [[unlikely]] return; }
L_00401AF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401B04u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00401B04u) [[unlikely]] return; }
L_00401B04:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00401C50; } }
L_00401B18:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[5], ld32((c.r[16].w[0] + 60u)));  goto L_00401B30; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00401C50; } }
L_00401B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401B38u);  if (depth < kMaxDepth) unit_00B8(c, 236u, depth + 1u); else { c.pc = 0x00401E20u; return; } if (c.pc != 0x00401B38u) [[unlikely]] return; }
L_00401B38:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401B4Cu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00401B4Cu) [[unlikely]] return; }
L_00401B4C:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), 0u);  if (t) { goto L_00401C50; } }
L_00401B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401B64u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B8(c, 303u, depth + 1u); else { c.pc = 0x004024E0u; return; } if (c.pc != 0x00401B64u) [[unlikely]] return; }
L_00401B64:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401B78u); set32(c.r[7], 0u + 13u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00401B78u) [[unlikely]] return; }
L_00401B78:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00401B8Cu); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00401B8Cu) [[unlikely]] return; }
L_00401B8C:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00401BA0u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00401BA0u) [[unlikely]] return; }
L_00401BA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_00401C50; } }
L_00401BB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401BC8u); set32(c.r[6], 0u + 92u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00401BC8u) [[unlikely]] return; }
L_00401BC8:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00401C50; } }
L_00401BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401BDCu); set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00401BDCu) [[unlikely]] return; }
L_00401BDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00401C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401BECu); set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x00401BECu) [[unlikely]] return; }
L_00401BEC:
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], 0u + 15u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00401C50; } }
L_00401C00:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00401C18; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00401C50; } }
L_00401C18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 52u), 0u);  goto L_00401C50; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), 0u);  goto L_00401C4C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00401C48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00401C48u) [[unlikely]] return; }
L_00401C48:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_00401C4C:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_00401C50:
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.budget -= 1;
L_00401C54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_00401CF0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_00401C88; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00401CA0; } }
L_00401C88:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00401CA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 56u), c.f[1]);  if (t) { goto L_00401CEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401CD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 236u, depth + 1u); else { c.pc = 0x00401E20u; return; } if (c.pc != 0x00401CD8u) [[unlikely]] return; }
L_00401CD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401CECu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00401CECu) [[unlikely]] return; }
L_00401CEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_00401CF0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00401D5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401D00u);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x00401D00u) [[unlikely]] return; }
L_00401D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401D08u);  if (depth < kMaxDepth) unit_0024(c, 202u, depth + 1u); else { c.pc = 0x001B16D0u; return; } if (c.pc != 0x00401D08u) [[unlikely]] return; }
L_00401D08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00401D24; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00401D3C; } }
L_00401D24:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_00401D3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401D50u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x00401D50u) [[unlikely]] return; }
L_00401D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401D58u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x00401D58u) [[unlikely]] return; }
L_00401D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00401D5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00401D70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00401E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401D98u);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x00401D98u) [[unlikely]] return; }
L_00401D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401DA0u);  if (depth < kMaxDepth) unit_0024(c, 202u, depth + 1u); else { c.pc = 0x001B16D0u; return; } if (c.pc != 0x00401DA0u) [[unlikely]] return; }
L_00401DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401DA8u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x00401DA8u) [[unlikely]] return; }
L_00401DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401DB0u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x00401DB0u) [[unlikely]] return; }
L_00401DB0:
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[17].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401DC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00401DC4u) [[unlikely]] return; }
L_00401DC4:
    set32(c.r[3], c.r[17].w[0] + 100u);
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401DE0u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x00401DE0u) [[unlikely]] return; }
L_00401DE0:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401DECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00401DECu) [[unlikely]] return; }
L_00401DEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401E00u); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x00401E00u) [[unlikely]] return; }
L_00401E00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00401E20:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;  goto L_00401E34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 11u);  if (t) { goto L_00401E50; } }
L_00401E34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00401E50; }
    set32(c.r[2], c.r[5].w[0] - 11u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[5].d[0] + 0ull;  goto L_00401E54; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00401E50:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00401E54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00401E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401E80u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00401E80u) [[unlikely]] return; }
L_00401E80:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_00401EE8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 30688u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00400000u < 16384u) { entry = entries_00B8[(t - 0x00400000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00401EAC:
    set32(c.r[2], c.r[4].w[0] + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00401EE4; } }
L_00401EB8:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00401EE4; } }
L_00401EC4:
    set32(c.r[2], c.r[4].w[0] - 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00401EE4; } }
L_00401ED0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00401EE4; } }
L_00401EDC:
    set32(c.r[2], 0u + 11u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_00401EE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_00401EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00401F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401F20u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00401F20u) [[unlikely]] return; }
L_00401F20:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_00401F88; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 30752u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00400000u < 16384u) { entry = entries_00B8[(t - 0x00400000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00401F4C:
    set32(c.r[2], c.r[4].w[0] + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00401F84; } }
L_00401F58:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00401F84; } }
L_00401F64:
    set32(c.r[2], c.r[4].w[0] - 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00401F84; } }
L_00401F70:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00401F84; } }
L_00401F7C:
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_00401F84:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_00401F88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00401FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00401FC0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00401FC0u) [[unlikely]] return; }
L_00401FC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_00401FE0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00401FF4; } }
L_00401FE0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_00401FF8; }
    set32(c.r[2], 0u + 11u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_00401FF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_00401FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00402010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402030u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00402030u) [[unlikely]] return; }
L_00402030:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 60u), c.r[4].w[0]);  if (t) { goto L_0040204C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), 0u);  if (t) { goto L_0040206C; } }
L_0040204C:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 13u);  goto L_00402060; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_0040206C; } }
L_00402060:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_00402070; }
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_0040206C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_00402070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00402080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040210C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004020A0u);  if (depth < kMaxDepth) unit_00B8(c, 236u, depth + 1u); else { c.pc = 0x00401E20u; return; } if (c.pc != 0x004020A0u) [[unlikely]] return; }
L_004020A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004020B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004020B4u) [[unlikely]] return; }
L_004020B4:
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_00402104; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 30816u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00400000u < 16384u) { entry = entries_00B8[(t - 0x00400000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004020E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_00402104; } }
L_004020F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_00402104; } }
L_004020F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_00402104; } }
L_00402100:
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_00402104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040210Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 314u, depth + 1u); else { c.pc = 0x004025E0u; return; } if (c.pc != 0x0040210Cu) [[unlikely]] return; }
L_0040210C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00402120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004024CC; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] + 30880u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00400000u < 16384u) { entry = entries_00B8[(t - 0x00400000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040215C:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_00402184; }
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040217Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040217Cu) [[unlikely]] return; }
L_0040217C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004024D0; } }
L_00402184:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402190u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00402190u) [[unlikely]] return; }
L_00402190:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040219Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 236u, depth + 1u); else { c.pc = 0x00401E20u; return; } if (c.pc != 0x0040219Cu) [[unlikely]] return; }
L_0040219C:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004021B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 236u, depth + 1u); else { c.pc = 0x00401E20u; return; } if (c.pc != 0x004021B4u) [[unlikely]] return; }
L_004021B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004021C8u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004021C8u) [[unlikely]] return; }
L_004021C8:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004021D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 236u, depth + 1u); else { c.pc = 0x00401E20u; return; } if (c.pc != 0x004021D4u) [[unlikely]] return; }
L_004021D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.r[7].d[0] = c.r[2].d[0] << 56;
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004021ECu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x004021ECu) [[unlikely]] return; }
L_004021EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00402204u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00402204u) [[unlikely]] return; }
L_00402204:
    set32(c.r[7], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402218u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00402218u) [[unlikely]] return; }
L_00402218:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[7], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[7].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 84u), c.r[7].w[0]);  if (t) { goto L_00402248; } }
    set32(c.r[5], 0u + 12u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040223Cu); st32((c.r[17].w[0] + 60u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 255u, depth + 1u); else { c.pc = 0x00402080u; return; } if (c.pc != 0x0040223Cu) [[unlikely]] return; }
L_0040223C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_004024CC; } }
L_00402248:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402258u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00402258u) [[unlikely]] return; }
L_00402258:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040226Cu); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040226Cu) [[unlikely]] return; }
L_0040226C:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00402284u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00402284u) [[unlikely]] return; }
L_00402284:
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_004024CC; } }
L_004022A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_004022CC; } }
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004022C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004022C0u) [[unlikely]] return; }
L_004022C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_004024CC; } }
L_004022CC:
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004022DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004022DCu) [[unlikely]] return; }
L_004022DC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 84u)));  goto L_00402308; }
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004022F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 236u, depth + 1u); else { c.pc = 0x00401E20u; return; } if (c.pc != 0x004022F0u) [[unlikely]] return; }
L_004022F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402304u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00402304u) [[unlikely]] return; }
L_00402304:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_00402308:
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402318u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00402318u) [[unlikely]] return; }
L_00402318:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040232Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x0040232Cu) [[unlikely]] return; }
L_0040232C:
    set32(c.r[7], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402340u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00402340u) [[unlikely]] return; }
L_00402340:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00402354u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00402354u) [[unlikely]] return; }
L_00402354:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040236Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040236Cu) [[unlikely]] return; }
L_0040236C:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00402384u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00402384u) [[unlikely]] return; }
L_00402384:
    set32(c.r[7], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402398u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00402398u) [[unlikely]] return; }
L_00402398:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], 0u + 3u);  goto L_004023B4; }
    set32(c.r[4], 0u + 5u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_004023B8; } }
L_004023B4:
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 1;
L_004023B8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_004024CC; } }
L_004023C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004023F8; } }
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004023E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004023E4u) [[unlikely]] return; }
L_004023E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004023F0u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_00B8(c, 314u, depth + 1u); else { c.pc = 0x004025E0u; return; } if (c.pc != 0x004023F0u) [[unlikely]] return; }
L_004023F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004024CC; } }
L_004023F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402400u);  if (depth < kMaxDepth) unit_00B8(c, 317u, depth + 1u); else { c.pc = 0x00402680u; return; } if (c.pc != 0x00402400u) [[unlikely]] return; }
L_00402400:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 15u);  goto L_00402428; }
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402418u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00402418u) [[unlikely]] return; }
L_00402418:
    set32(c.r[3], 0u + 7u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { goto L_004024CC; } }
L_00402428:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402434u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00402434u) [[unlikely]] return; }
L_00402434:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402458u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00402458u) [[unlikely]] return; }
L_00402458:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040246Cu); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040246Cu) [[unlikely]] return; }
L_0040246C:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402478u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 236u, depth + 1u); else { c.pc = 0x00401E20u; return; } if (c.pc != 0x00402478u) [[unlikely]] return; }
L_00402478:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040248Cu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040248Cu) [[unlikely]] return; }
L_0040248C:
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 60u);
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_004024CC; } }
L_004024A0:
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004024B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004024B0u) [[unlikely]] return; }
L_004024B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004024BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 303u, depth + 1u); else { c.pc = 0x004024E0u; return; } if (c.pc != 0x004024BCu) [[unlikely]] return; }
L_004024BC:
    set32(c.r[4], 0u + 9u);
    set32(c.r[3], 0u + 28u);
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
L_004024CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004024D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004024E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040250Cu); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040250Cu) [[unlikely]] return; }
L_0040250C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 60u)));  goto L_00402574; }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00402570; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 30944u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00400000u < 16384u) { entry = entries_00B8[(t - 0x00400000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00402540:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402554u); set32(c.r[7], 0u + 15u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00402554u) [[unlikely]] return; }
L_00402554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00402570; } }
L_0040255C:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402570u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00402570u) [[unlikely]] return; }
L_00402570:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_00402574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040257Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 236u, depth + 1u); else { c.pc = 0x00401E20u; return; } if (c.pc != 0x0040257Cu) [[unlikely]] return; }
L_0040257C:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402590u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00402590u) [[unlikely]] return; }
L_00402590:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 2;
L_00402598:
    set32(c.r[6], c.r[17].w[0] + 1u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004025A8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004025A8u) [[unlikely]] return; }
L_004025A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00402598u | kUnwind; return; } goto L_00402598; }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004025C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 318u, depth + 1u); else { c.pc = 0x0020FCD0u; return; } if (c.pc != 0x004025C4u) [[unlikely]] return; }
L_004025C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004025E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00402664; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00402668; }
    st32((c.r[17].w[0] + 104u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0040262C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_0040262C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040262C:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402638u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x00402638u) [[unlikely]] return; }
L_00402638:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00402658; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_00402658; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00402658:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402664u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x00402664u) [[unlikely]] return; }
L_00402664:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00402668:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00402680:
    set32(c.r[29], c.r[29].w[0] - 928u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004026A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00BA(c, 199u, depth + 1u); else { c.pc = 0x00409C50u; return; } if (c.pc != 0x004026A0u) [[unlikely]] return; }
L_004026A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004026ACu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00BA(c, 202u, depth + 1u); else { c.pc = 0x00409C80u; return; } if (c.pc != 0x004026ACu) [[unlikely]] return; }
L_004026AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004026C8; } }
L_004026B8:
    set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 88u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 640u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_004026C8:
    c.r[2].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] + c.r[4].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004026B8u | kUnwind; return; } goto L_004026B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004026DCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00BA(c, 220u, depth + 1u); else { c.pc = 0x00409E40u; return; } if (c.pc != 0x004026DCu) [[unlikely]] return; }
L_004026DC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004026ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 262u, depth + 1u); else { c.pc = 0x0040A500u; return; } if (c.pc != 0x004026ECu) [[unlikely]] return; }
L_004026EC:
    set32(c.r[6], c.r[17].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402700u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 223u, depth + 1u); else { c.pc = 0x00409E80u; return; } if (c.pc != 0x00402700u) [[unlikely]] return; }
L_00402700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402708u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x00409C20u; return; } if (c.pc != 0x00402708u) [[unlikely]] return; }
L_00402708:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040271Cu); set32(c.r[6], c.r[29].w[0] + 896u);  if (depth < kMaxDepth) unit_00BA(c, 258u, depth + 1u); else { c.pc = 0x0040A480u; return; } if (c.pc != 0x0040271Cu) [[unlikely]] return; }
L_0040271C:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402728u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BA(c, 208u, depth + 1u); else { c.pc = 0x00409D10u; return; } if (c.pc != 0x00402728u) [[unlikely]] return; }
L_00402728:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00402DB8; }
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040273Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BA(c, 212u, depth + 1u); else { c.pc = 0x00409D80u; return; } if (c.pc != 0x0040273Cu) [[unlikely]] return; }
L_0040273C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 608u);  goto L_00402750; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00402DB8; } }
L_00402750:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040275Cu); set32(c.r[6], 0u + 176u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0040275Cu) [[unlikely]] return; }
L_0040275C:
    set32(c.r[3], ld32((c.r[29].w[0] + 624u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00402770; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_00402784; } }
L_00402770:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00402784; }
    c.f[0] = ld32((c.r[29].w[0] + 608u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_00402784:
    set32(c.r[4], ld32((c.r[29].w[0] + 612u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_004027A8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004027A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004027A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x004027A8u) [[unlikely]] return; }
L_004027A8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004027BCu); c.r[16].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x00409CA0u; return; } if (c.pc != 0x004027BCu) [[unlikely]] return; }
L_004027BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_004027CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00402DB8; } }
L_004027CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004027D4u);  if (depth < kMaxDepth) unit_00B8(c, 378u, depth + 1u); else { c.pc = 0x00402DD0u; return; } if (c.pc != 0x004027D4u) [[unlikely]] return; }
L_004027D4:
    set32(c.r[4], c.r[29].w[0] + 896u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004027E4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x00409CA0u; return; } if (c.pc != 0x004027E4u) [[unlikely]] return; }
L_004027E4:
    st32((c.r[29].w[0] + 576u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 50u);
    set32(c.r[6], c.r[29].w[0] + 576u);
    st32((c.r[29].w[0] + 580u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402800u); st32((c.r[29].w[0] + 592u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402800u) [[unlikely]] return; }
L_00402800:
    set32(c.r[4], ld32((c.r[29].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 896u);  goto L_00402828; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402824; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402824u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402824u) [[unlikely]] return; }
L_00402824:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 1;
L_00402828:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402834u); set32(c.r[6], 0u + 17u);  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x00409CA0u; return; } if (c.pc != 0x00402834u) [[unlikely]] return; }
L_00402834:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 896u);  goto L_004028E0; }
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040284Cu); set32(c.r[6], 0u + 54u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0040284Cu) [[unlikely]] return; }
L_0040284C:
    set32(c.r[3], ld32((c.r[29].w[0] + 560u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00402860; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 544u)));  if (t) { goto L_00402874; } }
L_00402860:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00402874; }
    c.f[0] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_00402874:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    set32(c.r[4], 0u + 4u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    set32(c.r[5], 0u + 54u);
    set32(c.r[6], c.r[29].w[0] + 512u);
    st32((c.r[29].w[0] + 516u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402894u); st32((c.r[29].w[0] + 528u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402894u) [[unlikely]] return; }
L_00402894:
    set32(c.r[4], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 548u)));  goto L_004028BC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004028B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004028B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x004028B8u) [[unlikely]] return; }
L_004028B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 548u)));
    c.budget -= 1;
L_004028BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004028DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004028DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004028DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x004028DCu) [[unlikely]] return; }
L_004028DC:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 1;
L_004028E0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004028ECu); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x00409CA0u; return; } if (c.pc != 0x004028ECu) [[unlikely]] return; }
L_004028EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 896u);  goto L_00402998; }
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402904u); set32(c.r[6], 0u + 54u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00402904u) [[unlikely]] return; }
L_00402904:
    set32(c.r[3], ld32((c.r[29].w[0] + 496u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00402918; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 480u)));  if (t) { goto L_0040292C; } }
L_00402918:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0040292C; }
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0040292C:
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    set32(c.r[4], 0u + 4u);
    st32((c.r[29].w[0] + 448u), c.r[2].w[0]);
    set32(c.r[5], 0u + 54u);
    set32(c.r[6], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 452u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040294Cu); st32((c.r[29].w[0] + 464u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0040294Cu) [[unlikely]] return; }
L_0040294C:
    set32(c.r[4], ld32((c.r[29].w[0] + 452u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 484u)));  goto L_00402974; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402970u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402970u) [[unlikely]] return; }
L_00402970:
    set32(c.r[4], ld32((c.r[29].w[0] + 484u)));
    c.budget -= 1;
L_00402974:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00402994; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402994u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402994u) [[unlikely]] return; }
L_00402994:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 1;
L_00402998:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0040299C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004029A4u); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x00409CA0u; return; } if (c.pc != 0x004029A4u) [[unlikely]] return; }
L_004029A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 896u);  goto L_00402A50; }
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004029BCu); set32(c.r[6], 0u + 54u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x004029BCu) [[unlikely]] return; }
L_004029BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_004029D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 416u)));  if (t) { goto L_004029E4; } }
L_004029D0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_004029E4; }
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_004029E4:
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    set32(c.r[4], 0u + 4u);
    st32((c.r[29].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[5], 0u + 54u);
    set32(c.r[6], c.r[29].w[0] + 384u);
    st32((c.r[29].w[0] + 388u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402A04u); st32((c.r[29].w[0] + 400u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402A04u) [[unlikely]] return; }
L_00402A04:
    set32(c.r[4], ld32((c.r[29].w[0] + 388u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 420u)));  goto L_00402A2C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402A28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402A28u) [[unlikely]] return; }
L_00402A28:
    set32(c.r[4], ld32((c.r[29].w[0] + 420u)));
    c.budget -= 1;
L_00402A2C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00402A4C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402A4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402A4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402A4Cu) [[unlikely]] return; }
L_00402A4C:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 1;
L_00402A50:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402A5Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x00409CA0u; return; } if (c.pc != 0x00402A5Cu) [[unlikely]] return; }
L_00402A5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 896u);  goto L_00402B08; }
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402A74u); set32(c.r[6], 0u + 54u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00402A74u) [[unlikely]] return; }
L_00402A74:
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00402A88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 352u)));  if (t) { goto L_00402A9C; } }
L_00402A88:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00402A9C; }
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_00402A9C:
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    set32(c.r[4], 0u + 4u);
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[5], 0u + 54u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 324u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402ABCu); st32((c.r[29].w[0] + 336u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402ABCu) [[unlikely]] return; }
L_00402ABC:
    set32(c.r[4], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 356u)));  goto L_00402AE4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402AE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402AE0u) [[unlikely]] return; }
L_00402AE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 1;
L_00402AE4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00402B04; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402B04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402B04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402B04u) [[unlikely]] return; }
L_00402B04:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 1;
L_00402B08:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402B14u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x00409CA0u; return; } if (c.pc != 0x00402B14u) [[unlikely]] return; }
L_00402B14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 896u);  goto L_00402BC0; }
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402B2Cu); set32(c.r[6], 0u + 54u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00402B2Cu) [[unlikely]] return; }
L_00402B2C:
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00402B40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 288u)));  if (t) { goto L_00402B54; } }
L_00402B40:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00402B54; }
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_00402B54:
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    set32(c.r[4], 0u + 4u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[5], 0u + 54u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 260u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402B74u); st32((c.r[29].w[0] + 272u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402B74u) [[unlikely]] return; }
L_00402B74:
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 292u)));  goto L_00402B9C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402B98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402B98u) [[unlikely]] return; }
L_00402B98:
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 1;
L_00402B9C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00402BBC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402BBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402BBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402BBCu) [[unlikely]] return; }
L_00402BBC:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 1;
L_00402BC0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402BCCu); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x00409CA0u; return; } if (c.pc != 0x00402BCCu) [[unlikely]] return; }
L_00402BCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 896u);  goto L_00402C78; }
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402BE4u); set32(c.r[6], 0u + 54u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00402BE4u) [[unlikely]] return; }
L_00402BE4:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00402BF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 224u)));  if (t) { goto L_00402C0C; } }
L_00402BF8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00402C0C; }
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_00402C0C:
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    set32(c.r[4], 0u + 4u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[5], 0u + 54u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 196u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402C2Cu); st32((c.r[29].w[0] + 208u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402C2Cu) [[unlikely]] return; }
L_00402C2C:
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 228u)));  goto L_00402C54; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402C50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402C50u) [[unlikely]] return; }
L_00402C50:
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 1;
L_00402C54:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00402C74; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402C74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402C74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402C74u) [[unlikely]] return; }
L_00402C74:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 1;
L_00402C78:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402C84u); set32(c.r[6], 0u + 23u);  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x00409CA0u; return; } if (c.pc != 0x00402C84u) [[unlikely]] return; }
L_00402C84:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 55u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 164u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402CA0u); st32((c.r[29].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402CA0u) [[unlikely]] return; }
L_00402CA0:
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 896u);  goto L_00402CC8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402CC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402CC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402CC4u) [[unlikely]] return; }
L_00402CC4:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 1;
L_00402CC8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402CD4u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x00409CA0u; return; } if (c.pc != 0x00402CD4u) [[unlikely]] return; }
L_00402CD4:
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 51u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 132u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402CF0u); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402CF0u) [[unlikely]] return; }
L_00402CF0:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 896u);  goto L_00402D18; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402D14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402D14u) [[unlikely]] return; }
L_00402D14:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 1;
L_00402D18:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402D24u); set32(c.r[6], 0u + 25u);  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x00409CA0u; return; } if (c.pc != 0x00402D24u) [[unlikely]] return; }
L_00402D24:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 53u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402D40u); st32((c.r[29].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402D40u) [[unlikely]] return; }
L_00402D40:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 896u);  goto L_00402D68; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402D64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402D64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402D64u) [[unlikely]] return; }
L_00402D64:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 1;
L_00402D68:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402D74u); set32(c.r[6], 0u + 26u);  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x00409CA0u; return; } if (c.pc != 0x00402D74u) [[unlikely]] return; }
L_00402D74:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 52u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402D90u); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402D90u) [[unlikely]] return; }
L_00402D90:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00402DB8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402DB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402DB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402DB4u) [[unlikely]] return; }
L_00402DB4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00402DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 928u);  c.pc = t; return; }
L_00402DD0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[4], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 50u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 176u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402DF4u); st32((c.r[29].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402DF4u) [[unlikely]] return; }
L_00402DF4:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_00402E1C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402E18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402E18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402E18u) [[unlikely]] return; }
L_00402E18:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00402E1C:
    set32(c.r[5], 0u + 51u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402E34u); st32((c.r[29].w[0] + 160u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402E34u) [[unlikely]] return; }
L_00402E34:
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_00402E5C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402E58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402E58u) [[unlikely]] return; }
L_00402E58:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00402E5C:
    set32(c.r[5], 0u + 52u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402E74u); st32((c.r[29].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402E74u) [[unlikely]] return; }
L_00402E74:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_00402E9C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402E98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402E98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402E98u) [[unlikely]] return; }
L_00402E98:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00402E9C:
    set32(c.r[5], 0u + 53u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402EB4u); st32((c.r[29].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402EB4u) [[unlikely]] return; }
L_00402EB4:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_00402EDC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402ED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402ED8u) [[unlikely]] return; }
L_00402ED8:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00402EDC:
    set32(c.r[5], 0u + 54u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402EF4u); st32((c.r[29].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402EF4u) [[unlikely]] return; }
L_00402EF4:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_00402F1C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00402F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402F18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402F18u) [[unlikely]] return; }
L_00402F18:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00402F1C:
    set32(c.r[5], 0u + 55u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402F34u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00402F34u) [[unlikely]] return; }
L_00402F34:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00402F5C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00402F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402F58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00402F58u) [[unlikely]] return; }
L_00402F58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00402F5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00402F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402F8Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00402F8Cu) [[unlikely]] return; }
L_00402F8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 13952u);
    set32(c.r[4], 0u + 872u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[16].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402FB8u); st32((c.r[17].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00402FB8u) [[unlikely]] return; }
L_00402FB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  goto L_00402FD0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00402FCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x00402FCCu) [[unlikely]] return; }
L_00402FCC:
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_00402FD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    st32((c.r[17].w[0] + 76u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[17].w[0] + 80u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 84u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00403010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00403058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403040u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00403040u) [[unlikely]] return; }
L_00403040:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040305C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00403058u) [[unlikely]] return; }
L_00403058:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040305C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00403070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_004030AC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), 0u);  goto L_004030A8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004030A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004030A4u) [[unlikely]] return; }
L_004030A4:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_004030A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_004030AC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_004030D4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), 0u);  goto L_004030D0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004030CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004030CCu) [[unlikely]] return; }
L_004030CC:
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_004030D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_004030D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_004030F4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004030ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004030ECu) [[unlikely]] return; }
L_004030EC:
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 2;
L_004030F4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_0040311C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), 0u);  goto L_00403118; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00403114u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00403114u) [[unlikely]] return; }
L_00403114:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 1;
L_00403118:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0040311C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00403140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004034D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 31008u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00400000u < 16384u) { entry = entries_00B8[(t - 0x00400000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00403178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403180u);  if (depth < kMaxDepth) unit_00B8(c, 378u, depth + 1u); else { c.pc = 0x00402DD0u; return; } if (c.pc != 0x00403180u) [[unlikely]] return; }
L_00403180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403188u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x00403188u) [[unlikely]] return; }
L_00403188:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  goto L_004031A4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004031A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x004031A0u) [[unlikely]] return; }
L_004031A0:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_004031A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_004031C4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_004031C4; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004031C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004031DCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x004031DCu) [[unlikely]] return; }
L_004031DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004031E4u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x004031E4u) [[unlikely]] return; }
L_004031E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  goto L_00403200; }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004031FCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x004031FCu) [[unlikely]] return; }
L_004031FC:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_00403200:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00403220; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_00403220; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00403220:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040322Cu); set32(c.r[6], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x0040322Cu) [[unlikely]] return; }
L_0040322C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0040324C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_0040324C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040324C:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403258u); set32(c.r[6], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x00403258u) [[unlikely]] return; }
L_00403258:
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 38u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
L_00403268:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00403294; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004034D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403288u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 452u, depth + 1u); else { c.pc = 0x00403660u; return; } if (c.pc != 0x00403288u) [[unlikely]] return; }
L_00403288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 68u)));  if (t) { goto L_004034D4; } }
L_00403290:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00403294:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { set32(c.r[5], ld32((c.r[16].w[0] + 72u)));  goto L_004032CC; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004034D0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004034D0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004032C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004032C4u) [[unlikely]] return; }
L_004032C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), 0u);  if (t) { goto L_004034D0; } }
L_004032CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = ld64((c.r[5].w[0] + 80u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);  goto L_00403304; }
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004032F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004032F4u) [[unlikely]] return; }
L_004032F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004032FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 464u, depth + 1u); else { c.pc = 0x00403800u; return; } if (c.pc != 0x004032FCu) [[unlikely]] return; }
L_004032FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004034D0; } }
L_00403304:
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = ld64((c.r[5].w[0] + 96u));  goto L_00403324; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040331Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 467u, depth + 1u); else { c.pc = 0x00403850u; return; } if (c.pc != 0x0040331Cu) [[unlikely]] return; }
L_0040331C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004034D0; } }
L_00403324:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040334C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004034D0; } }
L_0040334C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_00403374; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403360u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 455u, depth + 1u); else { c.pc = 0x004036B0u; return; } if (c.pc != 0x00403360u) [[unlikely]] return; }
L_00403360:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040336Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 458u, depth + 1u); else { c.pc = 0x00403730u; return; } if (c.pc != 0x0040336Cu) [[unlikely]] return; }
L_0040336C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004034D0; } }
L_00403374:
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004034D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403390u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B8(c, 455u, depth + 1u); else { c.pc = 0x004036B0u; return; } if (c.pc != 0x00403390u) [[unlikely]] return; }
L_00403390:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040339Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 458u, depth + 1u); else { c.pc = 0x00403730u; return; } if (c.pc != 0x0040339Cu) [[unlikely]] return; }
L_0040339C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004034D0; } }
L_004033A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004033BC; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004034D0; } }
L_004033BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_004034D0; } }
L_004033D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_004033E8; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004034D0; } }
L_004033E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_004033FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_00403448; } }
L_004033FC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 112u);  goto L_0040341C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00403414u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00403414u) [[unlikely]] return; }
L_00403414:
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], 0u + 112u);
    c.budget -= 2;
L_0040341C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00403424u) [[unlikely]] return; }
L_00403424:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), c.r[4].w[0]);  goto L_00403444; }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040343Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 162u, depth + 1u); else { c.pc = 0x00401600u; return; } if (c.pc != 0x0040343Cu) [[unlikely]] return; }
L_0040343C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    c.budget -= 2;
L_00403444:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_00403448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_004034D0; } }
L_00403450:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00403470; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004034D0; } }
L_00403470:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004034B8; }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004034B4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 99u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004034A0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004034A0u) [[unlikely]] return; }
L_004034A0:
    set32(c.r[4], 0u + 60u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_004034D0; } }
L_004034B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004034B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004034C0u);  if (depth < kMaxDepth) unit_00B8(c, 481u, depth + 1u); else { c.pc = 0x004039A0u; return; } if (c.pc != 0x004034C0u) [[unlikely]] return; }
L_004034C0:
    set32(c.r[4], 0u + 30u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
L_004034D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_004034D4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00403540; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004034E4u);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x004034E4u) [[unlikely]] return; }
L_004034E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004034ECu);  if (depth < kMaxDepth) unit_0024(c, 202u, depth + 1u); else { c.pc = 0x001B16D0u; return; } if (c.pc != 0x004034ECu) [[unlikely]] return; }
L_004034EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00403508; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00403520; } }
L_00403508:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_00403520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403534u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x00403534u) [[unlikely]] return; }
L_00403534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040353Cu);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0040353Cu) [[unlikely]] return; }
L_0040353C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00403540:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00403550:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040363C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403578u);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x00403578u) [[unlikely]] return; }
L_00403578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403580u);  if (depth < kMaxDepth) unit_0024(c, 202u, depth + 1u); else { c.pc = 0x001B16D0u; return; } if (c.pc != 0x00403580u) [[unlikely]] return; }
L_00403580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403588u); set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x00403588u) [[unlikely]] return; }
L_00403588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403590u); set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x00403590u) [[unlikely]] return; }
L_00403590:
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004035A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x004035A4u) [[unlikely]] return; }
L_004035A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[3].d[0] = 0ull | 65535ull;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004035B8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x004035B8u) [[unlikely]] return; }
L_004035B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004035C0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x004035C0u) [[unlikely]] return; }
L_004035C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004035C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x004035C8u) [[unlikely]] return; }
L_004035C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004035D0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x004035D0u) [[unlikely]] return; }
L_004035D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16240u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 16244u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16252u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 72u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040360Cu); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0040360Cu) [[unlikely]] return; }
L_0040360C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403614u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x00403614u) [[unlikely]] return; }
L_00403614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040361Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0040361Cu) [[unlikely]] return; }
L_0040361C:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403628u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00403628u) [[unlikely]] return; }
L_00403628:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040363Cu); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0040363Cu) [[unlikely]] return; }
L_0040363C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00403660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403688u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00403688u) [[unlikely]] return; }
L_00403688:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004036A0u); set32(c.r[5], c.r[2].w[0] + 10u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004036A0u) [[unlikely]] return; }
L_004036A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004036B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004036F4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_00403720; }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 7u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004036ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004036ECu) [[unlikely]] return; }
L_004036EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040371C; } }
L_004036F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0040371C; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], 0u + 7u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040371Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040371Cu) [[unlikely]] return; }
L_0040371C:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_00403720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00403730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004037EC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[7], c.r[17].w[0] + 5u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403764u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00403764u) [[unlikely]] return; }
L_00403764:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], c.r[17].w[0] + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403778u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00403778u) [[unlikely]] return; }
L_00403778:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403790u); set32(c.r[5], c.r[2].w[0] + 10u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00403790u) [[unlikely]] return; }
L_00403790:
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_004037B4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_004037B4; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004037B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004037C0u); set32(c.r[6], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x004037C0u) [[unlikely]] return; }
L_004037C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_004037E0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_004037E0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004037E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004037ECu); set32(c.r[6], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x004037ECu) [[unlikely]] return; }
L_004037EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00403800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0040383C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0040382C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00403848; } }
L_0040382C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403834u);  if (depth < kMaxDepth) unit_00B8(c, 475u, depth + 1u); else { c.pc = 0x004038F0u; return; } if (c.pc != 0x00403834u) [[unlikely]] return; }
L_00403834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00403844; } }
L_0040383C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403844u);  if (depth < kMaxDepth) unit_00B8(c, 467u, depth + 1u); else { c.pc = 0x00403850u; return; } if (c.pc != 0x00403844u) [[unlikely]] return; }
L_00403844:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00403848:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00403850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 3;
L_0040385C:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403874u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00403874u) [[unlikely]] return; }
L_00403874:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403888u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00403888u) [[unlikely]] return; }
L_00403888:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040389Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040389Cu) [[unlikely]] return; }
L_0040389C:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004038B0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004038B0u) [[unlikely]] return; }
L_004038B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 99u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004038C4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004038C4u) [[unlikely]] return; }
L_004038C4:
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 58u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004038E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 318u, depth + 1u); else { c.pc = 0x0020FCD0u; return; } if (c.pc != 0x004038E0u) [[unlikely]] return; }
L_004038E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004038F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403914u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00403914u) [[unlikely]] return; }
L_00403914:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403928u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00403928u) [[unlikely]] return; }
L_00403928:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[7], 0u + 4u);  goto L_0040393C; }
    set32(c.r[7], 0u + 5u);
    c.budget -= 1;
L_0040393C:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040394Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040394Cu) [[unlikely]] return; }
L_0040394C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[7], 0u + 4u);  goto L_00403960; }
    set32(c.r[7], 0u + 5u);
    c.budget -= 1;
L_00403960:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403970u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00403970u) [[unlikely]] return; }
L_00403970:
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 28u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040398Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 318u, depth + 1u); else { c.pc = 0x0020FCD0u; return; } if (c.pc != 0x0040398Cu) [[unlikely]] return; }
L_0040398C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004039A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004039C4u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004039C4u) [[unlikely]] return; }
L_004039C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004039DCu); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004039DCu) [[unlikely]] return; }
L_004039DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[7], 0u + 6u);  goto L_004039F0; }
    set32(c.r[7], 0u + 7u);
    c.budget -= 1;
L_004039F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403A00u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00403A00u) [[unlikely]] return; }
L_00403A00:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[7], 0u + 6u);  goto L_00403A14; }
    set32(c.r[7], 0u + 7u);
    c.budget -= 1;
L_00403A14:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403A24u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00403A24u) [[unlikely]] return; }
L_00403A24:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00403A44; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_00403A44; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00403A44:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403A50u); set32(c.r[6], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x00403A50u) [[unlikely]] return; }
L_00403A50:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00403A70; }
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_00403A70; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00403A70:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403A7Cu); set32(c.r[6], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x00403A7Cu) [[unlikely]] return; }
L_00403A7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00403A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403AA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 249u, depth + 1u); else { c.pc = 0x003FF310u; return; } if (c.pc != 0x00403AA4u) [[unlikely]] return; }
L_00403AA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 14016u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00403AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00403B70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14016u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_00403B1C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00403B14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00403B14u) [[unlikely]] return; }
L_00403B14:
    st32((c.r[17].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 2;
L_00403B1C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00403B38; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00403B34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00403B34u) [[unlikely]] return; }
L_00403B34:
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 1;
L_00403B38:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00403B5C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403B58u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00403B58u) [[unlikely]] return; }
L_00403B58:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00403B5C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00403B74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403B70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00403B70u) [[unlikely]] return; }
L_00403B70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00403B74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00403B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00403C48; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00403BE4; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u - 1u);  goto L_00403BD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00403C7C; } }
L_00403BCC:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_00403BD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403BDCu); st32((c.r[16].w[0] + 88u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00403BDCu) [[unlikely]] return; }
L_00403BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00403C78; } }
L_00403BE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 84u);  goto L_00403C04; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00403BFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00403BFCu) [[unlikely]] return; }
L_00403BFC:
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[4], 0u + 84u);
    c.budget -= 2;
L_00403C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403C0Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00403C0Cu) [[unlikely]] return; }
L_00403C0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[4].w[0]);  goto L_00403C38; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 31072u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403C30u); set32(c.r[7], c.r[7].w[0] + 31088u);  if (depth < kMaxDepth) unit_00BA(c, 154u, depth + 1u); else { c.pc = 0x004095F0u; return; } if (c.pc != 0x00403C30u) [[unlikely]] return; }
L_00403C30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 148u), c.r[4].w[0]);
    c.budget -= 2;
L_00403C38:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 4;
L_00403C48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00403BCCu | kUnwind; return; } goto L_00403BCC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00403C78; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403C78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00403C78u) [[unlikely]] return; }
L_00403C78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00403C7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00403C90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00403DF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 31040u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00400000u < 16384u) { entry = entries_00B8[(t - 0x00400000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00403CCC:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_00403CD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403CDCu); st32((c.r[16].w[0] + 88u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00403CDCu) [[unlikely]] return; }
L_00403CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00403DFC; } }
L_00403CE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00403CD0u | kUnwind; return; } goto L_00403CD0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 88u);  goto L_00403D14; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00403D0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00403D0Cu) [[unlikely]] return; }
L_00403D0C:
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[4], 0u + 88u);
    c.budget -= 2;
L_00403D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403D1Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00403D1Cu) [[unlikely]] return; }
L_00403D1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 152u), c.r[4].w[0]);  goto L_00403D3C; }
    set32(c.r[6], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403D34u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 391u, depth + 1u); else { c.pc = 0x00402F70u; return; } if (c.pc != 0x00403D34u) [[unlikely]] return; }
L_00403D34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 152u), c.r[4].w[0]);
    c.budget -= 2;
L_00403D3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00403DF8; } }
L_00403D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403D54u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00403D54u) [[unlikely]] return; }
L_00403D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403D5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003FCCA0u; return; } if (c.pc != 0x00403D5Cu) [[unlikely]] return; }
L_00403D5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00403DF8; } }
L_00403D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403D74u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00403D74u) [[unlikely]] return; }
L_00403D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403D7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x00403D7Cu) [[unlikely]] return; }
L_00403D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00403DF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00403DF8; } }
L_00403D94:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00403DF8; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00403DF8; } }
L_00403DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403DC0u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00403DC0u) [[unlikely]] return; }
L_00403DC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403DCCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x00403DCCu) [[unlikely]] return; }
L_00403DCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00403DF0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00403DE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00403DE8u) [[unlikely]] return; }
L_00403DE8:
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00403DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403DF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00403DF8u) [[unlikely]] return; }
L_00403DF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00403DFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00403E10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403E34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 249u, depth + 1u); else { c.pc = 0x003FF310u; return; } if (c.pc != 0x00403E34u) [[unlikely]] return; }
L_00403E34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14096u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    c.budget -= 8;
    { const bool t = c.r[17].sd[0] <= 0; st32((c.r[16].w[0] + 160u), 0u);  if (t) { goto L_00403E80; } }
    st32((c.r[16].w[0] + 168u), c.r[17].w[0]);
    set32(c.r[17], c.r[17].w[0] << 4);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403E64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00403E64u) [[unlikely]] return; }
L_00403E64:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403E78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00403E78u) [[unlikely]] return; }
L_00403E78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00403EBC; } }
L_00403E80:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403E90u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00403E90u) [[unlikely]] return; }
L_00403E90:
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_00403EBC:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 172u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00403EBCu | kUnwind; return; } goto L_00403EBC; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00403F00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00B9(c, 2u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14096u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  goto L_00403F5C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 152u), 0u);  goto L_00403F58; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00403F54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00403F54u) [[unlikely]] return; }
L_00403F54:
    st32((c.r[18].w[0] + 152u), 0u);
    c.budget -= 1;
L_00403F58:
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 1;
L_00403F5C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00403F7C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00403F74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00403F74u) [[unlikely]] return; }
L_00403F74:
    st32((c.r[18].w[0] + 148u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00403F7C:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00403F80:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 172u);  if (t) { goto L_00403FA4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00403FA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00403FA0u) [[unlikely]] return; }
L_00403FA0:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_00403FA4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00403F80u | kUnwind; return; } goto L_00403F80; }
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00403FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403FC8u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00403FC8u) [[unlikely]] return; }
L_00403FC8:
    st32((c.r[18].w[0] + 164u), 0u);
    c.budget -= 1;
L_00403FCC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00403FF0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00403FECu); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00403FECu) [[unlikely]] return; }
L_00403FEC:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_00403FF0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  [[clang::musttail]] return unit_00B9(c, 3u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404004u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00404004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00B9(c, 2u, depth);
}

}
