#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0059[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 33, 34, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81,
    0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90,
    0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99,
    0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0,
    124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202,
    0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213,
    0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0,
    235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0,
    0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0,
    0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 309, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 311, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0,
    0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 359,
    0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 416, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0,
    0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0,
    0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445,
    0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450,
    0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0059(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00284000;
    case 2u: goto L_00284004;
    case 3u: goto L_00284040;
    case 4u: goto L_00284050;
    case 5u: goto L_00284070;
    case 6u: goto L_002840DC;
    case 7u: goto L_002840F0;
    case 8u: goto L_00284114;
    case 9u: goto L_00284120;
    case 10u: goto L_0028412C;
    case 11u: goto L_0028413C;
    case 12u: goto L_00284150;
    case 13u: goto L_00284170;
    case 14u: goto L_0028417C;
    case 15u: goto L_00284190;
    case 16u: goto L_002841B4;
    case 17u: goto L_002841DC;
    case 18u: goto L_002841EC;
    case 19u: goto L_002841F8;
    case 20u: goto L_00284214;
    case 21u: goto L_00284220;
    case 22u: goto L_00284230;
    case 23u: goto L_0028423C;
    case 24u: goto L_00284250;
    case 25u: goto L_00284264;
    case 26u: goto L_0028426C;
    case 27u: goto L_0028427C;
    case 28u: goto L_00284288;
    case 29u: goto L_002842A8;
    case 30u: goto L_002842B4;
    case 31u: goto L_002842C0;
    case 32u: goto L_002842CC;
    case 33u: goto L_002842E4;
    case 34u: goto L_002842E8;
    case 35u: goto L_00284300;
    case 36u: goto L_002843AC;
    case 37u: goto L_002843BC;
    case 38u: goto L_002843DC;
    case 39u: goto L_00284424;
    case 40u: goto L_0028444C;
    case 41u: goto L_00284478;
    case 42u: goto L_00284480;
    case 43u: goto L_00284488;
    case 44u: goto L_00284490;
    case 45u: goto L_00284498;
    case 46u: goto L_002844A0;
    case 47u: goto L_002844C0;
    case 48u: goto L_00284588;
    case 49u: goto L_00284590;
    case 50u: goto L_002845A0;
    case 51u: goto L_002845C8;
    case 52u: goto L_002845E0;
    case 53u: goto L_00284600;
    case 54u: goto L_00284628;
    case 55u: goto L_00284640;
    case 56u: goto L_00284650;
    case 57u: goto L_00284660;
    case 58u: goto L_00284674;
    case 59u: goto L_00284688;
    case 60u: goto L_002846B4;
    case 61u: goto L_002846C4;
    case 62u: goto L_002846E0;
    case 63u: goto L_00284710;
    case 64u: goto L_00284728;
    case 65u: goto L_00284740;
    case 66u: goto L_00284760;
    case 67u: goto L_0028476C;
    case 68u: goto L_00284780;
    case 69u: goto L_0028479C;
    case 70u: goto L_002847C0;
    case 71u: goto L_002847E4;
    case 72u: goto L_00284804;
    case 73u: goto L_0028481C;
    case 74u: goto L_00284828;
    case 75u: goto L_00284834;
    case 76u: goto L_00284840;
    case 77u: goto L_0028484C;
    case 78u: goto L_00284858;
    case 79u: goto L_00284864;
    case 80u: goto L_00284870;
    case 81u: goto L_0028487C;
    case 82u: goto L_00284888;
    case 83u: goto L_00284894;
    case 84u: goto L_002848A4;
    case 85u: goto L_002848AC;
    case 86u: goto L_002848C0;
    case 87u: goto L_002848D8;
    case 88u: goto L_002848E4;
    case 89u: goto L_002848F0;
    case 90u: goto L_002848FC;
    case 91u: goto L_00284908;
    case 92u: goto L_00284914;
    case 93u: goto L_00284928;
    case 94u: goto L_00284940;
    case 95u: goto L_0028494C;
    case 96u: goto L_00284958;
    case 97u: goto L_00284964;
    case 98u: goto L_00284970;
    case 99u: goto L_0028497C;
    case 100u: goto L_00284988;
    case 101u: goto L_00284994;
    case 102u: goto L_002849A0;
    case 103u: goto L_002849AC;
    case 104u: goto L_002849B8;
    case 105u: goto L_002849BC;
    case 106u: goto L_002849C4;
    case 107u: goto L_002849D0;
    case 108u: goto L_002849E4;
    case 109u: goto L_00284A04;
    case 110u: goto L_00284A1C;
    case 111u: goto L_00284A28;
    case 112u: goto L_00284A34;
    case 113u: goto L_00284A48;
    case 114u: goto L_00284A60;
    case 115u: goto L_00284A6C;
    case 116u: goto L_00284A78;
    case 117u: goto L_00284A8C;
    case 118u: goto L_00284AA4;
    case 119u: goto L_00284AB0;
    case 120u: goto L_00284ABC;
    case 121u: goto L_00284AC8;
    case 122u: goto L_00284ADC;
    case 123u: goto L_00284AF4;
    case 124u: goto L_00284B00;
    case 125u: goto L_00284B0C;
    case 126u: goto L_00284B20;
    case 127u: goto L_00284B3C;
    case 128u: goto L_00284B44;
    case 129u: goto L_00284B50;
    case 130u: goto L_00284B5C;
    case 131u: goto L_00284B64;
    case 132u: goto L_00284B6C;
    case 133u: goto L_00284B98;
    case 134u: goto L_00284BB0;
    case 135u: goto L_00284BBC;
    case 136u: goto L_00284BC8;
    case 137u: goto L_00284BDC;
    case 138u: goto L_00284BF8;
    case 139u: goto L_00284C18;
    case 140u: goto L_00284C38;
    case 141u: goto L_00284C58;
    case 142u: goto L_00284C78;
    case 143u: goto L_00284C98;
    case 144u: goto L_00284CB8;
    case 145u: goto L_00284CD8;
    case 146u: goto L_00284CF8;
    case 147u: goto L_00284D18;
    case 148u: goto L_00284D38;
    case 149u: goto L_00284D58;
    case 150u: goto L_00284D78;
    case 151u: goto L_00284D98;
    case 152u: goto L_00284DB8;
    case 153u: goto L_00284DD8;
    case 154u: goto L_00284DF8;
    case 155u: goto L_00284E18;
    case 156u: goto L_00284E38;
    case 157u: goto L_00284E58;
    case 158u: goto L_00284E78;
    case 159u: goto L_00284E98;
    case 160u: goto L_00284EC0;
    case 161u: goto L_00284EDC;
    case 162u: goto L_00284EFC;
    case 163u: goto L_00284F1C;
    case 164u: goto L_00284F3C;
    case 165u: goto L_00284F5C;
    case 166u: goto L_00284F84;
    case 167u: goto L_00284FA0;
    case 168u: goto L_00284FC0;
    case 169u: goto L_00284FE0;
    case 170u: goto L_00285000;
    case 171u: goto L_00285020;
    case 172u: goto L_00285040;
    case 173u: goto L_00285060;
    case 174u: goto L_00285080;
    case 175u: goto L_002850A0;
    case 176u: goto L_002850C0;
    case 177u: goto L_002850E0;
    case 178u: goto L_00285100;
    case 179u: goto L_00285120;
    case 180u: goto L_00285140;
    case 181u: goto L_00285160;
    case 182u: goto L_00285180;
    case 183u: goto L_002851A0;
    case 184u: goto L_002851C0;
    case 185u: goto L_002851E8;
    case 186u: goto L_00285204;
    case 187u: goto L_00285224;
    case 188u: goto L_00285244;
    case 189u: goto L_00285264;
    case 190u: goto L_00285284;
    case 191u: goto L_002852A4;
    case 192u: goto L_002852C4;
    case 193u: goto L_002852E4;
    case 194u: goto L_0028530C;
    case 195u: goto L_00285324;
    case 196u: goto L_00285330;
    case 197u: goto L_00285348;
    case 198u: goto L_00285360;
    case 199u: goto L_00285378;
    case 200u: goto L_002853D0;
    case 201u: goto L_002853EC;
    case 202u: goto L_002853FC;
    case 203u: goto L_00285410;
    case 204u: goto L_00285418;
    case 205u: goto L_00285444;
    case 206u: goto L_0028545C;
    case 207u: goto L_0028546C;
    case 208u: goto L_0028548C;
    case 209u: goto L_002854A4;
    case 210u: goto L_002854B4;
    case 211u: goto L_002854D4;
    case 212u: goto L_002854F0;
    case 213u: goto L_002854FC;
    case 214u: goto L_00285508;
    case 215u: goto L_00285518;
    case 216u: goto L_00285530;
    case 217u: goto L_0028553C;
    case 218u: goto L_00285548;
    case 219u: goto L_00285554;
    case 220u: goto L_00285560;
    case 221u: goto L_00285574;
    case 222u: goto L_0028558C;
    case 223u: goto L_00285598;
    case 224u: goto L_002855AC;
    case 225u: goto L_002855C0;
    case 226u: goto L_002855C8;
    case 227u: goto L_002855F4;
    case 228u: goto L_00285608;
    case 229u: goto L_00285610;
    case 230u: goto L_00285638;
    case 231u: goto L_00285654;
    case 232u: goto L_00285660;
    case 233u: goto L_00285668;
    case 234u: goto L_00285674;
    case 235u: goto L_00285680;
    case 236u: goto L_0028568C;
    case 237u: goto L_00285698;
    case 238u: goto L_002856A4;
    case 239u: goto L_002856B8;
    case 240u: goto L_002856D0;
    case 241u: goto L_002856DC;
    case 242u: goto L_002856E8;
    case 243u: goto L_002856FC;
    case 244u: goto L_00285710;
    case 245u: goto L_0028572C;
    case 246u: goto L_00285744;
    case 247u: goto L_00285750;
    case 248u: goto L_00285770;
    case 249u: goto L_00285784;
    case 250u: goto L_00285798;
    case 251u: goto L_002857A4;
    case 252u: goto L_002857C4;
    case 253u: goto L_002857D8;
    case 254u: goto L_002857EC;
    case 255u: goto L_002857F8;
    case 256u: goto L_00285818;
    case 257u: goto L_00285830;
    case 258u: goto L_00285850;
    case 259u: goto L_00285868;
    case 260u: goto L_00285874;
    case 261u: goto L_00285880;
    case 262u: goto L_002858A4;
    case 263u: goto L_002858B8;
    case 264u: goto L_002858D4;
    case 265u: goto L_002858EC;
    case 266u: goto L_002858F8;
    case 267u: goto L_00285918;
    case 268u: goto L_00285934;
    case 269u: goto L_00285940;
    case 270u: goto L_0028594C;
    case 271u: goto L_00285958;
    case 272u: goto L_00285968;
    case 273u: goto L_00285984;
    case 274u: goto L_00285994;
    case 275u: goto L_002859A8;
    case 276u: goto L_002859B0;
    case 277u: goto L_002859E0;
    case 278u: goto L_00285A00;
    case 279u: goto L_00285A28;
    case 280u: goto L_00285A3C;
    case 281u: goto L_00285AD4;
    case 282u: goto L_00285AF8;
    case 283u: goto L_00285B04;
    case 284u: goto L_00285B48;
    case 285u: goto L_00285B54;
    case 286u: goto L_00285BB0;
    case 287u: goto L_00285C38;
    case 288u: goto L_00285C58;
    case 289u: goto L_00285D50;
    case 290u: goto L_00285D8C;
    case 291u: goto L_00285DCC;
    case 292u: goto L_00285DD4;
    case 293u: goto L_00285DDC;
    case 294u: goto L_00285DE4;
    case 295u: goto L_00285DF0;
    case 296u: goto L_00285E04;
    case 297u: goto L_00285E0C;
    case 298u: goto L_00285E1C;
    case 299u: goto L_00285E28;
    case 300u: goto L_00285E30;
    case 301u: goto L_00285E78;
    case 302u: goto L_00285EF8;
    case 303u: goto L_00285FE8;
    case 304u: goto L_00286064;
    case 305u: goto L_0028606C;
    case 306u: goto L_00286074;
    case 307u: goto L_00286084;
    case 308u: goto L_002860F4;
    case 309u: goto L_002860F8;
    case 310u: goto L_00286118;
    case 311u: goto L_00286120;
    case 312u: goto L_00286124;
    case 313u: goto L_00286144;
    case 314u: goto L_00286170;
    case 315u: goto L_00286178;
    case 316u: goto L_0028617C;
    case 317u: goto L_002861BC;
    case 318u: goto L_002861E8;
    case 319u: goto L_00286208;
    case 320u: goto L_00286270;
    case 321u: goto L_00286298;
    case 322u: goto L_002862C4;
    case 323u: goto L_0028630C;
    case 324u: goto L_00286338;
    case 325u: goto L_00286358;
    case 326u: goto L_00286364;
    case 327u: goto L_00286430;
    case 328u: goto L_00286460;
    case 329u: goto L_00286478;
    case 330u: goto L_00286488;
    case 331u: goto L_002864A4;
    case 332u: goto L_00286500;
    case 333u: goto L_00286530;
    case 334u: goto L_00286540;
    case 335u: goto L_00286550;
    case 336u: goto L_00286560;
    case 337u: goto L_00286570;
    case 338u: goto L_002865D0;
    case 339u: goto L_002866FC;
    case 340u: goto L_00286708;
    case 341u: goto L_00286738;
    case 342u: goto L_00286760;
    case 343u: goto L_002867E0;
    case 344u: goto L_002867EC;
    case 345u: goto L_00286828;
    case 346u: goto L_00286850;
    case 347u: goto L_00286880;
    case 348u: goto L_0028688C;
    case 349u: goto L_0028689C;
    case 350u: goto L_002868C4;
    case 351u: goto L_002868E4;
    case 352u: goto L_00286904;
    case 353u: goto L_0028692C;
    case 354u: goto L_00286938;
    case 355u: goto L_00286944;
    case 356u: goto L_0028695C;
    case 357u: goto L_00286964;
    case 358u: goto L_0028696C;
    case 359u: goto L_0028697C;
    case 360u: goto L_00286988;
    case 361u: goto L_00286990;
    case 362u: goto L_002869B0;
    case 363u: goto L_00286CD0;
    case 364u: goto L_00286CFC;
    case 365u: goto L_00286D28;
    case 366u: goto L_00286D34;
    case 367u: goto L_00286D64;
    case 368u: goto L_00286DA4;
    case 369u: goto L_00286E1C;
    case 370u: goto L_00286E30;
    case 371u: goto L_00286F60;
    case 372u: goto L_00286FA0;
    case 373u: goto L_00286FAC;
    case 374u: goto L_00286FC4;
    case 375u: goto L_00286FE0;
    case 376u: goto L_00286FF0;
    case 377u: goto L_0028704C;
    case 378u: goto L_00287074;
    case 379u: goto L_002870AC;
    case 380u: goto L_002870C0;
    case 381u: goto L_002870D4;
    case 382u: goto L_0028710C;
    case 383u: goto L_00287130;
    case 384u: goto L_00287140;
    case 385u: goto L_00287174;
    case 386u: goto L_002871F0;
    case 387u: goto L_002871F8;
    case 388u: goto L_00287264;
    case 389u: goto L_00287294;
    case 390u: goto L_002872DC;
    case 391u: goto L_002872F4;
    case 392u: goto L_00287350;
    case 393u: goto L_00287384;
    case 394u: goto L_00287438;
    case 395u: goto L_00287444;
    case 396u: goto L_002874CC;
    case 397u: goto L_002874D4;
    case 398u: goto L_00287548;
    case 399u: goto L_00287580;
    case 400u: goto L_002875C0;
    case 401u: goto L_002875C8;
    case 402u: goto L_002875EC;
    case 403u: goto L_0028762C;
    case 404u: goto L_0028763C;
    case 405u: goto L_00287650;
    case 406u: goto L_00287678;
    case 407u: goto L_00287714;
    case 408u: goto L_002877B0;
    case 409u: goto L_002877FC;
    case 410u: goto L_0028781C;
    case 411u: goto L_00287864;
    case 412u: goto L_002878B8;
    case 413u: goto L_0028794C;
    case 414u: goto L_00287960;
    case 415u: goto L_00287968;
    case 416u: goto L_00287990;
    case 417u: goto L_00287998;
    case 418u: goto L_002879A4;
    case 419u: goto L_002879BC;
    case 420u: goto L_002879CC;
    case 421u: goto L_002879E4;
    case 422u: goto L_002879F0;
    case 423u: goto L_00287A44;
    case 424u: goto L_00287A70;
    case 425u: goto L_00287A84;
    case 426u: goto L_00287AC0;
    case 427u: goto L_00287AE4;
    case 428u: goto L_00287B08;
    case 429u: goto L_00287B2C;
    case 430u: goto L_00287B4C;
    case 431u: goto L_00287B60;
    case 432u: goto L_00287B68;
    case 433u: goto L_00287B94;
    case 434u: goto L_00287BA0;
    case 435u: goto L_00287BC4;
    case 436u: goto L_00287BF4;
    case 437u: goto L_00287C0C;
    case 438u: goto L_00287C70;
    case 439u: goto L_00287D28;
    case 440u: goto L_00287D50;
    case 441u: goto L_00287D90;
    case 442u: goto L_00287E08;
    case 443u: goto L_00287E5C;
    case 444u: goto L_00287E64;
    case 445u: goto L_00287E7C;
    case 446u: goto L_00287E98;
    case 447u: goto L_00287EAC;
    case 448u: goto L_00287F24;
    case 449u: goto L_00287F54;
    case 450u: goto L_00287F7C;
    case 451u: goto L_00287F84;
    case 452u: goto L_00287F9C;
    default: bad_entry(c, 0x00284000u); return;
    }
L_00284000:
    c.budget -= 1;
L_00284004:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 344u)));  goto L_00284038; }
    c.f[1] = ld32((c.r[16].w[0] + 324u));
    c.f[0] = ld32((c.r[16].w[0] + 328u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002842E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 344u)));
    c.budget -= 4;
L_00284038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284040u);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x00284040u) [[unlikely]] return; }
L_00284040:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  goto L_00284054; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284050u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x00284050u) [[unlikely]] return; }
L_00284050:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_00284054:
    set32(c.r[18], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 74u));
    c.budget -= 5;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 416u)));  goto L_00284084; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284070u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00284070u) [[unlikely]] return; }
L_00284070:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 416u)));
    c.budget -= 5;
L_00284084:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00284244; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 420u)));  goto L_00284200; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00284184; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002840E4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 308u)));  goto L_002840C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002842B8; } }
L_002840C4:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002842B4; } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002840DCu); set32(c.r[5], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002840DCu) [[unlikely]] return; }
L_002840DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002842B4; } }
L_002840E4:
    set32(c.r[5], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002840F0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x002840F0u) [[unlikely]] return; }
L_002840F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  goto L_002842D8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00284118; }
    set32(c.r[2], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00284134; }
L_00284114:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00284118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284120u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00284120u) [[unlikely]] return; }
L_00284120:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028412Cu); set32(c.r[5], c.r[17].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0028412Cu) [[unlikely]] return; }
L_0028412C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 308u)));  if (t) { goto L_00284154; } }
L_00284134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028413Cu);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028413Cu) [[unlikely]] return; }
L_0028413C:
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[7], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284150u); set32(c.r[6], c.r[17].w[0] + 352u);  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x00284150u) [[unlikely]] return; }
L_00284150:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.budget -= 1;
L_00284154:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 464u)));  goto L_00284174; }
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284170u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x00284170u) [[unlikely]] return; }
L_00284170:
    set32(c.r[5], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 1;
L_00284174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028417Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00A8(c, 192u, depth + 1u); else { c.pc = 0x003C2350u; return; } if (c.pc != 0x0028417Cu) [[unlikely]] return; }
L_0028417C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002842B4; } }
L_00284184:
    set32(c.r[5], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284190u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x00284190u) [[unlikely]] return; }
L_00284190:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002842D4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1168u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002842D4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002841B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 9u, depth + 1u); else { c.pc = 0x002041E0u; return; } if (c.pc != 0x002841B4u) [[unlikely]] return; }
L_002841B4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002842D4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 48u);  goto L_002841E4; }
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002841DCu); set32(c.r[6], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x002841DCu) [[unlikely]] return; }
L_002841DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 464u)));  if (t) { goto L_002841F0; } }
L_002841E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002841ECu);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002841ECu) [[unlikely]] return; }
L_002841EC:
    set32(c.r[5], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 1;
L_002841F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002841F8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00A8(c, 192u, depth + 1u); else { c.pc = 0x003C2350u; return; } if (c.pc != 0x002841F8u) [[unlikely]] return; }
L_002841F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002842B4; } }
L_00284200:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002842D4; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 3;
    if (c.r[7].sd[0] >= 0) { set32(c.r[5], c.r[16].w[0] + 48u);  goto L_00284228; }
L_00284214:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284220u); set32(c.r[5], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00284220u) [[unlikely]] return; }
L_00284220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 420u)));  if (t) { goto L_00284234; } }
L_00284228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284230u); set32(c.r[6], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x00284230u) [[unlikely]] return; }
L_00284230:
    set32(c.r[5], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_00284234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028423Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00A8(c, 192u, depth + 1u); else { c.pc = 0x003C2350u; return; } if (c.pc != 0x0028423Cu) [[unlikely]] return; }
L_0028423C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002842B4; } }
L_00284244:
    set32(c.r[5], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284250u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x00284250u) [[unlikely]] return; }
L_00284250:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002842D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284264u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00284264u) [[unlikely]] return; }
L_00284264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028426Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028426Cu) [[unlikely]] return; }
L_0028426C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[17].w[0] + 736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028427Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0028427Cu) [[unlikely]] return; }
L_0028427C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284288u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00284288u) [[unlikely]] return; }
L_00284288:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 464u)));  goto L_002842AC; }
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002842A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x002842A8u) [[unlikely]] return; }
L_002842A8:
    set32(c.r[5], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 1;
L_002842AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002842B4u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00A8(c, 192u, depth + 1u); else { c.pc = 0x003C2350u; return; } if (c.pc != 0x002842B4u) [[unlikely]] return; }
L_002842B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002842B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002842C0u);  if (depth < kMaxDepth) unit_0059(c, 55u, depth + 1u); else { c.pc = 0x00284640u; return; } if (c.pc != 0x002842C0u) [[unlikely]] return; }
L_002842C0:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002842CCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x002842CCu) [[unlikely]] return; }
L_002842CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002842E4; } }
L_002842D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_002842D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 3;
L_002842E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002842E8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00284300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_002844A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 332u));  goto L_0028434C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002844A4; } }
    c.f[1] = ld32((c.r[17].w[0] + 332u));
    c.budget -= 1;
L_0028434C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00284374; } }
    c.f[0] = ld32((c.r[17].w[0] + 324u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00284374; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00284374:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002844A0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002844A0; } }
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 344u)));  goto L_002843A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002844A0; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 344u)));
    c.budget -= 1;
L_002843A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002843ACu);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002843ACu) [[unlikely]] return; }
L_002843AC:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));  goto L_002843C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002843BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002843BCu) [[unlikely]] return; }
L_002843BC:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_002843C0:
    set32(c.r[18], ld32((c.r[17].w[0] + 348u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 74u));
    c.budget -= 5;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));  goto L_002843F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002843DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002843DCu) [[unlikely]] return; }
L_002843DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 5;
L_002843F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.f[1] = ld32((c.r[4].w[0] + 68u));  if (t) { goto L_00284434; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00284434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284424u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00284424u) [[unlikely]] return; }
L_00284424:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 68u), c.r[4].w[0]);  if (t) { goto L_00284454; } }
L_00284434:
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_00284458; }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028444Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0028444Cu) [[unlikely]] return; }
L_0028444C:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    st32((c.r[3].w[0] + 68u), c.f[20]);
    c.budget -= 2;
L_00284454:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_00284458:
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[4].w[0] + 352u)));
    c.f[1] = ld32((c.r[3].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002844A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284478u);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x00284478u) [[unlikely]] return; }
L_00284478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284480u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00284480u) [[unlikely]] return; }
L_00284480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284488u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00284488u) [[unlikely]] return; }
L_00284488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284490u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 55u, depth + 1u); else { c.pc = 0x00284640u; return; } if (c.pc != 0x00284490u) [[unlikely]] return; }
L_00284490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284498u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x00284498u) [[unlikely]] return; }
L_00284498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002844A0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x002844A0u) [[unlikely]] return; }
L_002844A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002844A4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002844C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 13;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_00284504; }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 324u));  if (t) { goto L_00284508; } }
    c.f[1] = ld32((c.r[5].w[0] + 80u));
    c.budget -= 1;
L_00284504:
    c.f[0] = ld32((c.r[16].w[0] + 324u));
    c.budget -= 1;
L_00284508:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 324u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00284594; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[16].w[0] + 332u));  goto L_00284540; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00284590; } }
    c.f[1] = ld32((c.r[16].w[0] + 332u));
    c.budget -= 1;
L_00284540:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00284568; } }
    c.f[0] = ld32((c.r[16].w[0] + 324u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00284568; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00284568:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00284590; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00284590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284588u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 55u, depth + 1u); else { c.pc = 0x00284640u; return; } if (c.pc != 0x00284588u) [[unlikely]] return; }
L_00284588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284590u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x00284590u) [[unlikely]] return; }
L_00284590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00284594:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002845A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002845C8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[6].d[0] = c.r[2].d[0] | 17752ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002845C8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 136u, depth + 1u); else { c.pc = 0x003C5620u; return; } if (c.pc != 0x002845C8u) [[unlikely]] return; }
L_002845C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002845E0:
    st32((c.r[4].w[0] + 340u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 5;
    { set32(c.r[5], c.r[5].w[0] + 17920u);  [[clang::musttail]] return unit_00A8(c, 231u, depth); }
L_00284600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30336u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00284628; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30340u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284628u); c.r[6].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284628u) [[unlikely]] return; }
L_00284628:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00284640:
    st32((c.r[28].w[0] - 30340u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 340u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30336u), c.r[3].w[0]);  c.pc = t; return; }
L_00284650:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00283E90u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 421u, depth); }
L_00284660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284674u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 65u, depth + 1u); else { c.pc = 0x00290B70u; return; } if (c.pc != 0x00284674u) [[unlikely]] return; }
L_00284674:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[16].w[0] + 2064u);
    set32(c.r[2], c.r[2].w[0] + 23816u);
    set32(c.r[3], c.r[16].w[0] + 2144u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
L_00284688:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00284688u | kUnwind; return; } goto L_00284688; } }
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002846B4u); set32(c.r[6], 0u + 240u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002846B4u) [[unlikely]] return; }
L_002846B4:
    set32(c.r[4], c.r[16].w[0] + 400u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002846C4u); set32(c.r[6], 0u + 240u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002846C4u) [[unlikely]] return; }
L_002846C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002846E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00284728; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 23816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284710u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 67u, depth + 1u); else { c.pc = 0x00290BE0u; return; } if (c.pc != 0x00284710u) [[unlikely]] return; }
L_00284710:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0028472C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284728u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00284728u) [[unlikely]] return; }
L_00284728:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028472C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00284740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284760u); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x00284760u) [[unlikely]] return; }
L_00284760:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028476Cu); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001A8E80u; return; } if (c.pc != 0x0028476Cu) [[unlikely]] return; }
L_0028476C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00284790; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284780u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0059(c, 70u, depth + 1u); else { c.pc = 0x002847C0u; return; } if (c.pc != 0x00284780u) [[unlikely]] return; }
L_00284780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00284790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002847A0; } }
L_00284790:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028479Cu); set32(c.r[4], c.r[4].w[0] - 2848u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0028479Cu) [[unlikely]] return; }
L_0028479C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002847A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002847C0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002847E4u); set32(c.r[4], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002847E4u) [[unlikely]] return; }
L_002847E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284804u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00284804u) [[unlikely]] return; }
L_00284804:
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028481Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x0028481Cu) [[unlikely]] return; }
L_0028481C:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284828u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284828u) [[unlikely]] return; }
L_00284828:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284834u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284834u) [[unlikely]] return; }
L_00284834:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284840u) [[unlikely]] return; }
L_00284840:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028484Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x0028484Cu) [[unlikely]] return; }
L_0028484C:
    st32((c.r[16].w[0] + 2016u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284858u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284858u) [[unlikely]] return; }
L_00284858:
    st32((c.r[16].w[0] + 2020u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284864u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284864u) [[unlikely]] return; }
L_00284864:
    st32((c.r[16].w[0] + 2148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284870u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284870u) [[unlikely]] return; }
L_00284870:
    st32((c.r[16].w[0] + 2024u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028487Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x0028487Cu) [[unlikely]] return; }
L_0028487C:
    st32((c.r[16].w[0] + 2028u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284888u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284888u) [[unlikely]] return; }
L_00284888:
    st32((c.r[16].w[0] + 2032u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284894u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284894u) [[unlikely]] return; }
L_00284894:
    st32((c.r[16].w[0] + 2036u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848A4u); set32(c.r[5], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002848A4u) [[unlikely]] return; }
L_002848A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002848ACu) [[unlikely]] return; }
L_002848AC:
    st32((c.r[16].w[0] + 2144u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 344u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002848C0u) [[unlikely]] return; }
L_002848C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848D8u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002848D8u) [[unlikely]] return; }
L_002848D8:
    st16((c.r[16].w[0] + 100u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002848E4u) [[unlikely]] return; }
L_002848E4:
    st16((c.r[16].w[0] + 102u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002848F0u) [[unlikely]] return; }
L_002848F0:
    st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002848FCu) [[unlikely]] return; }
L_002848FC:
    st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284908u) [[unlikely]] return; }
L_00284908:
    st16((c.r[16].w[0] + 108u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284914u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284914u) [[unlikely]] return; }
L_00284914:
    st16((c.r[16].w[0] + 110u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284928u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00284928u) [[unlikely]] return; }
L_00284928:
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284940u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284940u) [[unlikely]] return; }
L_00284940:
    st32((c.r[16].w[0] + 804u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028494Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x0028494Cu) [[unlikely]] return; }
L_0028494C:
    st32((c.r[16].w[0] + 808u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284958u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284958u) [[unlikely]] return; }
L_00284958:
    st32((c.r[16].w[0] + 812u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284964u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284964u) [[unlikely]] return; }
L_00284964:
    st32((c.r[16].w[0] + 816u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284970u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284970u) [[unlikely]] return; }
L_00284970:
    st32((c.r[16].w[0] + 820u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028497Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x0028497Cu) [[unlikely]] return; }
L_0028497C:
    st32((c.r[16].w[0] + 824u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284988u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284988u) [[unlikely]] return; }
L_00284988:
    st32((c.r[16].w[0] + 828u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284994u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284994u) [[unlikely]] return; }
L_00284994:
    st32((c.r[16].w[0] + 832u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002849A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002849A0u) [[unlikely]] return; }
L_002849A0:
    st32((c.r[16].w[0] + 836u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002849ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002849ACu) [[unlikely]] return; }
L_002849AC:
    st32((c.r[16].w[0] + 840u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002849B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002849B8u) [[unlikely]] return; }
L_002849B8:
    st32((c.r[16].w[0] + 844u), c.f[0]);
    c.budget -= 1;
L_002849BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002849C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002849C4u) [[unlikely]] return; }
L_002849C4:
    st32((c.r[16].w[0] + 848u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002849D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002849D0u) [[unlikely]] return; }
L_002849D0:
    st32((c.r[16].w[0] + 852u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 328u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002849E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002849E4u) [[unlikely]] return; }
L_002849E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A04u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00284A04u) [[unlikely]] return; }
L_00284A04:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A1Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284A1Cu) [[unlikely]] return; }
L_00284A1C:
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284A28u) [[unlikely]] return; }
L_00284A28:
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284A34u) [[unlikely]] return; }
L_00284A34:
    st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 312u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00284A48u) [[unlikely]] return; }
L_00284A48:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A60u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284A60u) [[unlikely]] return; }
L_00284A60:
    st16((c.r[16].w[0] + 86u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284A6Cu) [[unlikely]] return; }
L_00284A6C:
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284A78u) [[unlikely]] return; }
L_00284A78:
    st16((c.r[16].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A8Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00284A8Cu) [[unlikely]] return; }
L_00284A8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284AA4u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284AA4u) [[unlikely]] return; }
L_00284AA4:
    st16((c.r[16].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284AB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284AB0u) [[unlikely]] return; }
L_00284AB0:
    st16((c.r[16].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284ABCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284ABCu) [[unlikely]] return; }
L_00284ABC:
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284AC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284AC8u) [[unlikely]] return; }
L_00284AC8:
    st16((c.r[16].w[0] + 98u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284ADCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00284ADCu) [[unlikely]] return; }
L_00284ADC:
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284AF4u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284AF4u) [[unlikely]] return; }
L_00284AF4:
    st32((c.r[16].w[0] + 960u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284B00u) [[unlikely]] return; }
L_00284B00:
    st32((c.r[16].w[0] + 964u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284B0Cu) [[unlikely]] return; }
L_00284B0C:
    st32((c.r[16].w[0] + 968u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00284B20u) [[unlikely]] return; }
L_00284B20:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 976u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B3Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 96u, depth + 1u); else { c.pc = 0x00290EC0u; return; } if (c.pc != 0x00284B3Cu) [[unlikely]] return; }
L_00284B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284B44u) [[unlikely]] return; }
L_00284B44:
    st32((c.r[16].w[0] + 992u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284B50u) [[unlikely]] return; }
L_00284B50:
    st32((c.r[16].w[0] + 996u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284B5Cu) [[unlikely]] return; }
L_00284B5C:
    st32((c.r[16].w[0] + 1000u), c.f[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00284B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00284B6Cu) [[unlikely]] return; }
L_00284B6C:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0] + 1004u), c.f[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00284B64u | kUnwind; return; } goto L_00284B64; } }
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00284B98u) [[unlikely]] return; }
L_00284B98:
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284BB0u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284BB0u) [[unlikely]] return; }
L_00284BB0:
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284BBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284BBCu) [[unlikely]] return; }
L_00284BBC:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284BC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284BC8u) [[unlikely]] return; }
L_00284BC8:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284BDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00284BDCu) [[unlikely]] return; }
L_00284BDC:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284BF8u); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284BF8u) [[unlikely]] return; }
L_00284BF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284C04; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00284C04:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C18u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284C18u) [[unlikely]] return; }
L_00284C18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284C24; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00284C24:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C38u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284C38u) [[unlikely]] return; }
L_00284C38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284C44; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00284C44:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C58u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284C58u) [[unlikely]] return; }
L_00284C58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284C64; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_00284C64:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C78u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284C78u) [[unlikely]] return; }
L_00284C78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284C84; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
L_00284C84:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C98u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284C98u) [[unlikely]] return; }
L_00284C98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284CA4; }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_00284CA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284CB8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284CB8u) [[unlikely]] return; }
L_00284CB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284CC4; }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_00284CC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284CD8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284CD8u) [[unlikely]] return; }
L_00284CD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284CE4; }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_00284CE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284CF8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284CF8u) [[unlikely]] return; }
L_00284CF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284D04; }
    set32(c.r[3], 0u + 256u);
    c.budget -= 1;
L_00284D04:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D18u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284D18u) [[unlikely]] return; }
L_00284D18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284D24; }
    set32(c.r[3], 0u + 512u);
    c.budget -= 1;
L_00284D24:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D38u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284D38u) [[unlikely]] return; }
L_00284D38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284D44; }
    set32(c.r[3], 0u + 1024u);
    c.budget -= 1;
L_00284D44:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D58u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284D58u) [[unlikely]] return; }
L_00284D58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284D64; }
    set32(c.r[3], 0u + 2048u);
    c.budget -= 1;
L_00284D64:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D78u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284D78u) [[unlikely]] return; }
L_00284D78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284D84; }
    set32(c.r[3], 0u + 4096u);
    c.budget -= 1;
L_00284D84:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D98u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284D98u) [[unlikely]] return; }
L_00284D98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284DA4; }
    set32(c.r[3], 0u + 8192u);
    c.budget -= 1;
L_00284DA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284DB8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284DB8u) [[unlikely]] return; }
L_00284DB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284DC4; }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 1;
L_00284DC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284DD8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284DD8u) [[unlikely]] return; }
L_00284DD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284DE4; }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00284DE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284DF8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284DF8u) [[unlikely]] return; }
L_00284DF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284E04; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_00284E04:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E18u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284E18u) [[unlikely]] return; }
L_00284E18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284E24; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 1;
L_00284E24:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E38u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284E38u) [[unlikely]] return; }
L_00284E38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284E44; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.budget -= 1;
L_00284E44:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E58u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284E58u) [[unlikely]] return; }
L_00284E58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284E64; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 1;
L_00284E64:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E78u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284E78u) [[unlikely]] return; }
L_00284E78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284E84; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_00284E84:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E98u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284E98u) [[unlikely]] return; }
L_00284E98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284EA4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 1;
L_00284EA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 264u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284EC0u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00284EC0u) [[unlikely]] return; }
L_00284EC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284EDCu); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284EDCu) [[unlikely]] return; }
L_00284EDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284EE8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00284EE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284EFCu); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284EFCu) [[unlikely]] return; }
L_00284EFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284F08; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00284F08:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F1Cu); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284F1Cu) [[unlikely]] return; }
L_00284F1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284F28; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00284F28:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F3Cu); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284F3Cu) [[unlikely]] return; }
L_00284F3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284F48; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_00284F48:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F5Cu); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284F5Cu) [[unlikely]] return; }
L_00284F5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284F68; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
L_00284F68:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F84u); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00284F84u) [[unlikely]] return; }
L_00284F84:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284FA0u); st32((c.r[16].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284FA0u) [[unlikely]] return; }
L_00284FA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284FAC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00284FAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284FC0u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284FC0u) [[unlikely]] return; }
L_00284FC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284FCC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00284FCC:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284FE0u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00284FE0u) [[unlikely]] return; }
L_00284FE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00284FEC; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00284FEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285000u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285000u) [[unlikely]] return; }
L_00285000:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028500C; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_0028500C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285020u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285020u) [[unlikely]] return; }
L_00285020:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028502C; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
L_0028502C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285040u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285040u) [[unlikely]] return; }
L_00285040:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028504C; }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_0028504C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285060u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285060u) [[unlikely]] return; }
L_00285060:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028506C; }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_0028506C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285080u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285080u) [[unlikely]] return; }
L_00285080:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028508C; }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_0028508C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002850A0u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002850A0u) [[unlikely]] return; }
L_002850A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002850AC; }
    set32(c.r[3], 0u + 256u);
    c.budget -= 1;
L_002850AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002850C0u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002850C0u) [[unlikely]] return; }
L_002850C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002850CC; }
    set32(c.r[3], 0u + 512u);
    c.budget -= 1;
L_002850CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002850E0u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002850E0u) [[unlikely]] return; }
L_002850E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002850EC; }
    set32(c.r[3], 0u + 1024u);
    c.budget -= 1;
L_002850EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285100u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285100u) [[unlikely]] return; }
L_00285100:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028510C; }
    set32(c.r[3], 0u + 2048u);
    c.budget -= 1;
L_0028510C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285120u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285120u) [[unlikely]] return; }
L_00285120:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028512C; }
    set32(c.r[3], 0u + 4096u);
    c.budget -= 1;
L_0028512C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285140u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285140u) [[unlikely]] return; }
L_00285140:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028514C; }
    set32(c.r[3], 0u + 8192u);
    c.budget -= 1;
L_0028514C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285160u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285160u) [[unlikely]] return; }
L_00285160:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028516C; }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 1;
L_0028516C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285180u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285180u) [[unlikely]] return; }
L_00285180:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028518C; }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0028518C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002851A0u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002851A0u) [[unlikely]] return; }
L_002851A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002851AC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_002851AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002851C0u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002851C0u) [[unlikely]] return; }
L_002851C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002851CC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 1;
L_002851CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 248u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002851E8u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002851E8u) [[unlikely]] return; }
L_002851E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285204u); st32((c.r[16].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285204u) [[unlikely]] return; }
L_00285204:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00285210; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00285210:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285224u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285224u) [[unlikely]] return; }
L_00285224:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00285230; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00285230:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285244u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285244u) [[unlikely]] return; }
L_00285244:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00285250; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00285250:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285264u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285264u) [[unlikely]] return; }
L_00285264:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00285270; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_00285270:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285284u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285284u) [[unlikely]] return; }
L_00285284:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00285290; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
L_00285290:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002852A4u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002852A4u) [[unlikely]] return; }
L_002852A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002852B0; }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_002852B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002852C4u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002852C4u) [[unlikely]] return; }
L_002852C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002852D0; }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_002852D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002852E4u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002852E4u) [[unlikely]] return; }
L_002852E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002852F0; }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_002852F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028530Cu); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0028530Cu) [[unlikely]] return; }
L_0028530C:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 6;
L_00285324:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285330u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285330u) [[unlikely]] return; }
L_00285330:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028533C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028533C:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285348u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285348u) [[unlikely]] return; }
L_00285348:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00285354; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00285354:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285360u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285360u) [[unlikely]] return; }
L_00285360:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028536C; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0028536C:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285378u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285378u) [[unlikely]] return; }
L_00285378:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00285384; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_00285384:
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[3], 0u + 15u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285324u | kUnwind; return; } goto L_00285324; } }
    set32(c.r[4], c.r[29].w[0] + 232u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002853D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002853D0u) [[unlikely]] return; }
L_002853D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 144u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002853ECu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 96u, depth + 1u); else { c.pc = 0x00290EC0u; return; } if (c.pc != 0x002853ECu) [[unlikely]] return; }
L_002853EC:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002853FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002853FCu) [[unlikely]] return; }
L_002853FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_00285410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285418u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285418u) [[unlikely]] return; }
L_00285418:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 112u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285410u | kUnwind; return; } goto L_00285410; } }
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285444u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00285444u) [[unlikely]] return; }
L_00285444:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 6;
L_0028545C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028546Cu); set32(c.r[5], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x0028546Cu) [[unlikely]] return; }
L_0028546C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028545Cu | kUnwind; return; } goto L_0028545C; }
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028548Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0028548Cu) [[unlikely]] return; }
L_0028548C:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 6;
L_002854A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002854B4u); set32(c.r[5], c.r[2].w[0] + 400u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002854B4u) [[unlikely]] return; }
L_002854B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002854A4u | kUnwind; return; } goto L_002854A4; }
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002854D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002854D4u) [[unlikely]] return; }
L_002854D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 688u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002854F0u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00291060u; return; } if (c.pc != 0x002854F0u) [[unlikely]] return; }
L_002854F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002854FCu); set32(c.r[5], c.r[16].w[0] + 656u);  if (depth < kMaxDepth) unit_005C(c, 108u, depth + 1u); else { c.pc = 0x00291010u; return; } if (c.pc != 0x002854FCu) [[unlikely]] return; }
L_002854FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285508u); set32(c.r[5], c.r[16].w[0] + 736u);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00291060u; return; } if (c.pc != 0x00285508u) [[unlikely]] return; }
L_00285508:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285518u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00285518u) [[unlikely]] return; }
L_00285518:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285530u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00285530u) [[unlikely]] return; }
L_00285530:
    st32((c.r[16].w[0] + 784u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028553Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x0028553Cu) [[unlikely]] return; }
L_0028553C:
    st32((c.r[16].w[0] + 788u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285548u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00285548u) [[unlikely]] return; }
L_00285548:
    st32((c.r[16].w[0] + 792u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285554u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00285554u) [[unlikely]] return; }
L_00285554:
    st32((c.r[16].w[0] + 796u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285560u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00285560u) [[unlikely]] return; }
L_00285560:
    st32((c.r[16].w[0] + 800u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285574u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00285574u) [[unlikely]] return; }
L_00285574:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028558Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x0028558Cu) [[unlikely]] return; }
L_0028558C:
    st32((c.r[16].w[0] + 856u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285598u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285598u) [[unlikely]] return; }
L_00285598:
    st32((c.r[16].w[0] + 860u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002855ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002855ACu) [[unlikely]] return; }
L_002855AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002855C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002855C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002855C8u) [[unlikely]] return; }
L_002855C8:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0] + 864u), c.f[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002855C0u | kUnwind; return; } goto L_002855C0; } }
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002855F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002855F4u) [[unlikely]] return; }
L_002855F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_00285608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285610u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285610u) [[unlikely]] return; }
L_00285610:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0] + 884u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285608u | kUnwind; return; } goto L_00285608; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285638u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00285638u) [[unlikely]] return; }
L_00285638:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 896u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285654u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x00285654u) [[unlikely]] return; }
L_00285654:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285660u); set32(c.r[5], c.r[16].w[0] + 912u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x00285660u) [[unlikely]] return; }
L_00285660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285668u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00285668u) [[unlikely]] return; }
L_00285668:
    st32((c.r[16].w[0] + 928u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285674u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00285674u) [[unlikely]] return; }
L_00285674:
    st32((c.r[16].w[0] + 932u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285680u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00285680u) [[unlikely]] return; }
L_00285680:
    st32((c.r[16].w[0] + 936u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028568Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x0028568Cu) [[unlikely]] return; }
L_0028568C:
    st32((c.r[16].w[0] + 940u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285698u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00285698u) [[unlikely]] return; }
L_00285698:
    st32((c.r[16].w[0] + 944u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002856A4u) [[unlikely]] return; }
L_002856A4:
    st32((c.r[16].w[0] + 948u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002856B8u) [[unlikely]] return; }
L_002856B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856D0u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002856D0u) [[unlikely]] return; }
L_002856D0:
    st16((c.r[16].w[0] + 640u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002856DCu) [[unlikely]] return; }
L_002856DC:
    st16((c.r[16].w[0] + 642u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002856E8u) [[unlikely]] return; }
L_002856E8:
    st16((c.r[16].w[0] + 644u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002856FCu) [[unlikely]] return; }
L_002856FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_00285710:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 20u);
    set32(c.r[18], c.r[2].w[0] + 1444u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028572Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0028572Cu) [[unlikely]] return; }
L_0028572C:
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285744u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285744u) [[unlikely]] return; }
L_00285744:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285750u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00285750u) [[unlikely]] return; }
L_00285750:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285710u | kUnwind; return; } goto L_00285710; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285770u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00285770u) [[unlikely]] return; }
L_00285770:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_00285784:
    set32(c.r[2], c.r[17].w[0] << 3);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285798u); set32(c.r[18], c.r[2].w[0] + 1828u);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285798u) [[unlikely]] return; }
L_00285798:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002857A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002857A4u) [[unlikely]] return; }
L_002857A4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285784u | kUnwind; return; } goto L_00285784; } }
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002857C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002857C4u) [[unlikely]] return; }
L_002857C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002857D8:
    set32(c.r[2], c.r[17].w[0] << 3);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002857ECu); set32(c.r[18], c.r[2].w[0] + 1876u);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002857ECu) [[unlikely]] return; }
L_002857EC:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002857F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002857F8u) [[unlikely]] return; }
L_002857F8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002857D8u | kUnwind; return; } goto L_002857D8; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285818u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00285818u) [[unlikely]] return; }
L_00285818:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 6;
L_00285830:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[16].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285850u); set32(c.r[18], c.r[2].w[0] + 1024u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00285850u) [[unlikely]] return; }
L_00285850:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285868u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285868u) [[unlikely]] return; }
L_00285868:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285874u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x00285874u) [[unlikely]] return; }
L_00285874:
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285880u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x00285880u) [[unlikely]] return; }
L_00285880:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00285830u | kUnwind; return; } goto L_00285830; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002858A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002858A4u) [[unlikely]] return; }
L_002858A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002858B8:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 20u);
    set32(c.r[18], c.r[2].w[0] + 1628u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002858D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002858D4u) [[unlikely]] return; }
L_002858D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002858ECu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002858ECu) [[unlikely]] return; }
L_002858EC:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002858F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002858F8u) [[unlikely]] return; }
L_002858F8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002858B8u | kUnwind; return; } goto L_002858B8; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285918u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00285918u) [[unlikely]] return; }
L_00285918:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1936u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285934u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x00285934u) [[unlikely]] return; }
L_00285934:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285940u); set32(c.r[5], c.r[16].w[0] + 1952u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x00285940u) [[unlikely]] return; }
L_00285940:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028594Cu); set32(c.r[5], c.r[16].w[0] + 1968u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x0028594Cu) [[unlikely]] return; }
L_0028594C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285958u); set32(c.r[5], c.r[16].w[0] + 1984u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x00285958u) [[unlikely]] return; }
L_00285958:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285968u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00285968u) [[unlikely]] return; }
L_00285968:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 2000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285984u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x00285984u) [[unlikely]] return; }
L_00285984:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285994u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00285994u) [[unlikely]] return; }
L_00285994:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_002859A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002859B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002859B0u) [[unlikely]] return; }
L_002859B0:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[4].w[0] + 2064u), c.f[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 2068u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002859A8u | kUnwind; return; } goto L_002859A8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002859E0u); set32(c.r[4], c.r[4].w[0] - 2800u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002859E0u) [[unlikely]] return; }
L_002859E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_00285A00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285A28u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00285A28u) [[unlikely]] return; }
L_00285A28:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00285A34; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00285A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285A3Cu); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00285A3Cu) [[unlikely]] return; }
L_00285A3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23840u);
    set32(c.r[2], c.r[2].w[0] + 23896u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[17].w[0] + 72u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 168u), 0u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[17].w[0] + 160u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 188u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 124u), 0u);
    st32((c.r[17].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    st32((c.r[17].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 33;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00285B80; }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00285B7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285AD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 393u, depth + 1u); else { c.pc = 0x0016FF80u; return; } if (c.pc != 0x00285AD4u) [[unlikely]] return; }
L_00285AD4:
    st32((c.r[17].w[0] + 88u), 0u);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 108u)));
    c.f[0] = 0u;
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[19], c.r[17].w[0] + 76u);  if (t) { goto L_00285AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_00285B14; } }
L_00285AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285AF8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00285AF8u) [[unlikely]] return; }
L_00285AF8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B04u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00285B04u) [[unlikely]] return; }
L_00285B04:
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 4;
L_00285B14:
    st32((c.r[19].w[0] + 8u), c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    st32((c.r[19].w[0] + 16u), 0u);
    c.f[0] = 0u;
    st16((c.r[19].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 112u), 0u);
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 114u)));
    c.budget -= 9;
    { const bool t = c.r[19].sd[0] > 0; set32(c.r[18], c.r[17].w[0] + 100u);  if (t) { goto L_00285B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_00285B64; } }
L_00285B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B48u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00285B48u) [[unlikely]] return; }
L_00285B48:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B54u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00285B54u) [[unlikely]] return; }
L_00285B54:
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 4;
L_00285B64:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 8u), c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 20u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00285B90; } }
L_00285B7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00285B80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00285B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00285BB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00285D3C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00285D38; } }
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[17].d[0] = 0ull + 0ull;  goto L_00285C34; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_00285C24; }
L_00285C24:
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 160u), c.f[0]);  if (t) { goto L_00285D38; } }
L_00285C34:
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 1;
L_00285C38:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 76u));
    set32(c.r[16], c.r[2].w[0] + 76u);
    c.f[0] = ld32((c.r[2].w[0] + 84u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285C58u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x00285C58u) [[unlikely]] return; }
L_00285C58:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00285D2C; }
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_00285CB4; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[4] = ld32((c.r[5].w[0] + 80u));  goto L_00285CA4; }
L_00285CA4:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[0]);  if (t) { goto L_00285D28; } }
L_00285CB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[4] = ld32((c.r[5].w[0] + 80u));  goto L_00285CD4; }
L_00285CD4:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[28].w[0] - 32668u));
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 12u), c.f[3]);  if (t) { goto L_00285D10; } }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00285D28; } }
L_00285D10:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 6;
L_00285D28:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00285D2C:
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00285C38u | kUnwind; return; } goto L_00285C38; }
L_00285D38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00285D3C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00285D50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00286430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285D8Cu);  if (depth < kMaxDepth) unit_0059(c, 362u, depth + 1u); else { c.pc = 0x002869B0u; return; } if (c.pc != 0x00285D8Cu) [[unlikely]] return; }
L_00285D8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00286434; }
    set32(c.r[3], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00286430; } }
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00285DC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286430; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285DCCu);  if (depth < kMaxDepth) unit_0059(c, 363u, depth + 1u); else { c.pc = 0x00286CD0u; return; } if (c.pc != 0x00285DCCu) [[unlikely]] return; }
L_00285DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285DD4u);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x00285DD4u) [[unlikely]] return; }
L_00285DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285DDCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x00285DDCu) [[unlikely]] return; }
L_00285DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285DE4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x00285DE4u) [[unlikely]] return; }
L_00285DE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285DF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00285DF0u) [[unlikely]] return; }
L_00285DF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], 0u + 127u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285E04u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x00285E04u) [[unlikely]] return; }
L_00285E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285E0Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00285E0Cu) [[unlikely]] return; }
L_00285E0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285E1Cu); set32(c.r[6], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00285E1Cu) [[unlikely]] return; }
L_00285E1C:
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285E28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0014(c, 16u, depth + 1u); else { c.pc = 0x001701C0u; return; } if (c.pc != 0x00285E28u) [[unlikely]] return; }
L_00285E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285E30u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x00285E30u) [[unlikely]] return; }
L_00285E30:
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[4] = c.r[2].w[0];
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[23] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::add(c.fcr31, c.f[0], c.f[23]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = ld32((c.r[28].w[0] - 31672u));
    c.f[0] = ld32((c.r[28].w[0] - 31668u));
    c.f[21] = fp::ee::add(c.fcr31, c.f[4], c.f[22]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.budget -= 18;
L_00285E78:
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    c.f[1] = fp::ee::add(c.fcr31, c.f[22], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 172u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[23]);
    st32((c.r[29].w[0] + 80u), c.f[23]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285EF8u); st32((c.r[29].w[0] + 112u), c.f[20]);  if (depth < kMaxDepth) unit_000E(c, 335u, depth + 1u); else { c.pc = 0x0015AE50u; return; } if (c.pc != 0x00285EF8u) [[unlikely]] return; }
L_00285EF8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285E78u | kUnwind; return; } goto L_00285E78; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00285F28; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[2], 0u + 20006u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00285F34; } }
L_00285F28:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 16560u);  if (t) { goto L_00285F3C; } }
L_00285F34:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[16], c.r[16].w[0] + 16592u);
    c.budget -= 2;
L_00285F3C:
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], ld32((c.r[16].w[0] + 8u)));  goto L_00285F7C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0])));  if (t) { goto L_00285F80; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00285F7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00285F80:
    c.f[0] = fp::ee::add(c.fcr31, c.f[23], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 172u));
    c.f[1] = c.r[2].w[0];
    c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 76u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[23]);
    st32((c.r[29].w[0] + 68u), c.f[22]);
    st32((c.r[29].w[0] + 72u), c.f[20]);
    st32((c.r[29].w[0] + 80u), c.f[23]);
    st32((c.r[29].w[0] + 84u), c.f[21]);
    st32((c.r[29].w[0] + 88u), c.f[20]);
    st32((c.r[29].w[0] + 100u), c.f[22]);
    st32((c.r[29].w[0] + 104u), c.f[20]);
    st32((c.r[29].w[0] + 116u), c.f[21]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285FE8u); st32((c.r[29].w[0] + 120u), c.f[20]);  if (depth < kMaxDepth) unit_000E(c, 335u, depth + 1u); else { c.pc = 0x0015AE50u; return; } if (c.pc != 0x00285FE8u) [[unlikely]] return; }
L_00285FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    c.f[3] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[17].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[22]);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[23], c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[23]);
    st32((c.r[29].w[0] + 72u), c.f[20]);
    st32((c.r[29].w[0] + 80u), c.f[23]);
    st32((c.r[29].w[0] + 88u), c.f[20]);
    st32((c.r[29].w[0] + 104u), c.f[20]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286064u); st32((c.r[29].w[0] + 120u), c.f[20]);  if (depth < kMaxDepth) unit_000E(c, 335u, depth + 1u); else { c.pc = 0x0015AE50u; return; } if (c.pc != 0x00286064u) [[unlikely]] return; }
L_00286064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028606Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0028606Cu) [[unlikely]] return; }
L_0028606C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286074u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00286074u) [[unlikely]] return; }
L_00286074:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286084u); set32(c.r[6], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00286084u) [[unlikely]] return; }
L_00286084:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1180u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], ld32((c.r[4].w[0] + 116u)));  if (t) { goto L_00286208; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 96u)));  goto L_002860B4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 1180u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 96u)));  goto L_0028620C; }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_002860B4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 176u)));  goto L_002860CC; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00286208; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_002860CC:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00286208; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 2736u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00284000u < 16384u) { entry = entries_0059[(t - 0x00284000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002860F4:
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_002860F8:
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44540000u);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286118u); c.r[7].d[0] = c.r[2].d[0] | 16705ull;  if (depth < kMaxDepth) unit_0059(c, 346u, depth + 1u); else { c.pc = 0x00286850u; return; } if (c.pc != 0x00286118u) [[unlikely]] return; }
L_00286118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286208; } }
L_00286120:
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_00286124:
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44540000u);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286144u); c.r[7].d[0] = c.r[2].d[0] | 16961ull;  if (depth < kMaxDepth) unit_0059(c, 346u, depth + 1u); else { c.pc = 0x00286850u; return; } if (c.pc != 0x00286144u) [[unlikely]] return; }
L_00286144:
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44540000u);
    c.r[7].d[0] = c.r[2].d[0] | 16962ull;
    c.r[2].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286170u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 346u, depth + 1u); else { c.pc = 0x00286850u; return; } if (c.pc != 0x00286170u) [[unlikely]] return; }
L_00286170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286208; } }
L_00286178:
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_0028617C:
    c.r[1].d[0] = c.r[16].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00286190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 999u);  if (t) { goto L_0028619C; } }
L_00286190:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], 0u + 10u);  goto L_002861A0; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028619C:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_002861A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44540000u);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002861BCu); c.r[7].d[0] = c.r[2].d[0] | 17217ull;  if (depth < kMaxDepth) unit_0059(c, 346u, depth + 1u); else { c.pc = 0x00286850u; return; } if (c.pc != 0x002861BCu) [[unlikely]] return; }
L_002861BC:
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44540000u);
    c.r[7].d[0] = c.r[2].d[0] | 17218ull;
    c.r[2].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002861E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 346u, depth + 1u); else { c.pc = 0x00286850u; return; } if (c.pc != 0x002861E8u) [[unlikely]] return; }
L_002861E8:
    set32(c.r[2], 0u + 100u);
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44540000u);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286208u); c.r[7].d[0] = c.r[2].d[0] | 17219ull;  if (depth < kMaxDepth) unit_0059(c, 346u, depth + 1u); else { c.pc = 0x00286850u; return; } if (c.pc != 0x00286208u) [[unlikely]] return; }
L_00286208:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_0028620C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_0028635C; }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_00286358; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[1].d[0] = c.r[16].sd[0] < 1000ll ? 1ull : 0ull;  goto L_002862D0; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 10u);  goto L_0028627C; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 10u);  goto L_00286254; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286358; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00286254:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x444B0000u);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286270u); c.r[7].d[0] = c.r[2].d[0] | 16705ull;  if (depth < kMaxDepth) unit_0059(c, 346u, depth + 1u); else { c.pc = 0x00286850u; return; } if (c.pc != 0x00286270u) [[unlikely]] return; }
L_00286270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286358; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_0028627C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x444B0000u);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286298u); c.r[7].d[0] = c.r[2].d[0] | 16961ull;  if (depth < kMaxDepth) unit_0059(c, 346u, depth + 1u); else { c.pc = 0x00286850u; return; } if (c.pc != 0x00286298u) [[unlikely]] return; }
L_00286298:
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 180u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x444B0000u);
    c.r[7].d[0] = c.r[2].d[0] | 16962ull;
    c.r[2].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002862C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 346u, depth + 1u); else { c.pc = 0x00286850u; return; } if (c.pc != 0x002862C4u) [[unlikely]] return; }
L_002862C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286358; } }
    c.r[1].d[0] = c.r[16].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002862D0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002862E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 999u);  if (t) { goto L_002862EC; } }
L_002862E0:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], 0u + 10u);  goto L_002862F0; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002862EC:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_002862F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x444B0000u);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028630Cu); c.r[7].d[0] = c.r[2].d[0] | 17217ull;  if (depth < kMaxDepth) unit_0059(c, 346u, depth + 1u); else { c.pc = 0x00286850u; return; } if (c.pc != 0x0028630Cu) [[unlikely]] return; }
L_0028630C:
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 180u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x444B0000u);
    c.r[7].d[0] = c.r[2].d[0] | 17218ull;
    c.r[2].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286338u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 346u, depth + 1u); else { c.pc = 0x00286850u; return; } if (c.pc != 0x00286338u) [[unlikely]] return; }
L_00286338:
    set32(c.r[2], 0u + 100u);
    set32(c.r[5], ld32((c.r[17].w[0] + 180u)));
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x444B0000u);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286358u); c.r[7].d[0] = c.r[2].d[0] | 17219ull;  if (depth < kMaxDepth) unit_0059(c, 346u, depth + 1u); else { c.pc = 0x00286850u; return; } if (c.pc != 0x00286358u) [[unlikely]] return; }
L_00286358:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_0028635C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286364u);  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x00286364u) [[unlikely]] return; }
L_00286364:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 168u));  goto L_002863B4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 80u));  goto L_002863A4; }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 168u));  if (t) { goto L_002863A8; } }
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.budget -= 1;
L_002863A4:
    c.f[0] = ld32((c.r[17].w[0] + 168u));
    c.budget -= 1;
L_002863A8:
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 168u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 168u));
    c.budget -= 3;
L_002863B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00286428; } }
    st32((c.r[17].w[0] + 168u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[4].w[0] + 80u));  goto L_00286404; }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 164u));  if (t) { goto L_00286408; } }
    c.f[2] = ld32((c.r[4].w[0] + 80u));
    c.budget -= 1;
L_00286404:
    c.f[1] = ld32((c.r[17].w[0] + 164u));
    c.budget -= 1;
L_00286408:
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 164u), c.f[1]);  if (t) { goto L_00286428; } }
    st16((c.r[17].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 120u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00286428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286430u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x00286430u) [[unlikely]] return; }
L_00286430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00286434:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00286460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286478u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0059(c, 362u, depth + 1u); else { c.pc = 0x002869B0u; return; } if (c.pc != 0x00286478u) [[unlikely]] return; }
L_00286478:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002864BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002864E4; } }
L_00286488:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] + 84u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002864A4u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002864A4u) [[unlikely]] return; }
L_002864A4:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002864BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002864E4; } }
L_002864BC:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286488u | kUnwind; return; } goto L_00286488; }
    c.f[1] = ld32((c.r[17].w[0] + 164u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002864E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002864E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286500:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00286524; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00286520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286524; } }
L_00286520:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00286524:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00286530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 184u), 0u);  c.pc = t; return; }
L_00286540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 188u), 0u);  c.pc = t; return; }
L_00286550:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 184u), c.r[3].w[0]);  c.pc = t; return; }
L_00286560:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 188u), c.r[3].w[0]);  c.pc = t; return; }
L_00286570:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] + 76u);  if (t) { goto L_002865C0; } }
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = 0u;
    st32((c.r[4].w[0] + 4u), c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[12]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002865C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 2;
L_002865C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002865D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_00286604; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0028673C; }
L_00286604:
    c.r[1].d[0] = c.r[16].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[17].w[0] + 96u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_0028661C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0028666C; } }
L_0028661C:
    c.r[1].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00286634; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0028666C; } }
L_00286634:
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { c.r[1].d[0] = c.r[16].sd[0] < -99ll ? 1ull : 0ull;  goto L_00286648; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0028666C; } }
L_00286648:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[16].sd[0] < -9ll ? 1ull : 0ull;  goto L_0028665C; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0028666C; } }
L_0028665C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st32((c.r[17].w[0] + 176u), 0u);  goto L_0028666C; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 2;
L_0028666C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  goto L_002866DC; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002866D8; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 1180u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], ld32((c.r[5].w[0] + 1184u)));  if (t) { goto L_0028669C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 2;
L_0028669C:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002866D8; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002866D8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 148u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002866D4; }
    c.r[2].d[0] = 0ull | 50005ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002866D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002866D4:
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 1;
L_002866D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_002866DC:
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[18].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));  goto L_002866F4; }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286714; } }
L_002866F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002866FCu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002866FCu) [[unlikely]] return; }
L_002866FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286708u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00286708u) [[unlikely]] return; }
L_00286708:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 3;
L_00286714:
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  goto L_00286728; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0028672C; } }
L_00286728:
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_0028672C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286738u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 337u, depth + 1u); else { c.pc = 0x00286570u; return; } if (c.pc != 0x00286738u) [[unlikely]] return; }
L_00286738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0028673C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00286760:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_00286828; } }
    c.r[1].d[0] = c.r[16].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[17].w[0] + 120u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_002867A0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 180u), c.r[2].w[0]);  if (t) { goto L_002867BC; } }
L_002867A0:
    c.r[1].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u + 6u);  goto L_002867B8; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 180u), c.r[2].w[0]);  if (t) { goto L_002867BC; } }
L_002867B8:
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 1;
L_002867BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 114u)));
    c.budget -= 4;
    if (c.r[18].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));  goto L_002867D8; }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 96u)));  if (t) { goto L_002867FC; } }
L_002867D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002867E0u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002867E0u) [[unlikely]] return; }
L_002867E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002867ECu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002867ECu) [[unlikely]] return; }
L_002867EC:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 96u)));
    c.budget -= 4;
L_002867FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00286820; }
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  goto L_00286818; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0028681C; } }
L_00286818:
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_0028681C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286828u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0059(c, 337u, depth + 1u); else { c.pc = 0x00286570u; return; } if (c.pc != 0x00286828u) [[unlikely]] return; }
L_00286828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00286850:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286880u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 393u, depth + 1u); else { c.pc = 0x0016FF80u; return; } if (c.pc != 0x00286880u) [[unlikely]] return; }
L_00286880:
    c.f[12] = ld32((c.r[17].w[0] + 168u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028688Cu); set32(c.r[4], ld32((c.r[17].w[0] + 128u)));  if (depth < kMaxDepth) unit_0014(c, 7u, depth + 1u); else { c.pc = 0x001700C0u; return; } if (c.pc != 0x0028688Cu) [[unlikely]] return; }
L_0028688C:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028689Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 14u, depth + 1u); else { c.pc = 0x00170180u; return; } if (c.pc != 0x0028689Cu) [[unlikely]] return; }
L_0028689C:
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 128u)));  goto L_00286924; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 2704u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00284000u < 16384u) { entry = entries_0059[(t - 0x00284000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002868C4:
    c.f[0] = ld32((c.r[28].w[0] - 32176u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.f[0]);  if (t) { goto L_00286920; } }
L_002868E4:
    c.f[0] = ld32((c.r[28].w[0] - 32172u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.f[0]);  if (t) { goto L_00286920; } }
L_00286904:
    c.f[0] = ld32((c.r[28].w[0] - 32168u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 7;
L_00286920:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 1;
L_00286924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028692Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 8u, depth + 1u); else { c.pc = 0x001700D0u; return; } if (c.pc != 0x0028692Cu) [[unlikely]] return; }
L_0028692C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286938u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001F(c, 213u, depth + 1u); else { c.pc = 0x0019E620u; return; } if (c.pc != 0x00286938u) [[unlikely]] return; }
L_00286938:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286944u); set32(c.r[5], c.r[16].w[0] + 9u);  if (depth < kMaxDepth) unit_0013(c, 393u, depth + 1u); else { c.pc = 0x0016FF80u; return; } if (c.pc != 0x00286944u) [[unlikely]] return; }
L_00286944:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[3].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028695Cu); set32(c.r[4], c.r[3].w[0] + 96u);  if (depth < kMaxDepth) unit_001D(c, 234u, depth + 1u); else { c.pc = 0x00196630u; return; } if (c.pc != 0x0028695Cu) [[unlikely]] return; }
L_0028695C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286964u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x00286964u) [[unlikely]] return; }
L_00286964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028696Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0028696Cu) [[unlikely]] return; }
L_0028696C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028697Cu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0028697Cu) [[unlikely]] return; }
L_0028697C:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286988u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0014(c, 16u, depth + 1u); else { c.pc = 0x001701C0u; return; } if (c.pc != 0x00286988u) [[unlikely]] return; }
L_00286988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286990u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x00286990u) [[unlikely]] return; }
L_00286990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002869B0:
    set32(c.r[7], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[7].w[0] + 112u);  if (t) { goto L_002869C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00286CC0; } }
L_002869C8:
    set32(c.r[11], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[8], 0u + 3u);
    set32(c.r[2], ld32((c.r[5].w[0] + 1184u)));
    set32(c.r[9], ld32((c.r[11].w[0] + 60u)));
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != c.r[8].d[0]; set32(c.r[3], ld32((c.r[5].w[0] + 1180u)));  if (t) { goto L_002869F0; } }
    set32(c.r[9], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[8], 0u + 2u);
    c.budget -= 4;
    if (c.r[9].d[0] == c.r[8].d[0]) { set32(c.r[7], ld32((c.r[7].w[0] + 16u)));  goto L_00286A68; }
L_002869F0:
    set32(c.r[10], ld32((c.r[11].w[0])));
    set32(c.r[9], 0u + 1u);
    c.budget -= 4;
    if (c.r[10].d[0] != c.r[9].d[0]) { set32(c.r[8], 0u + 9u);  goto L_00286A10; }
    set32(c.r[8], ld32((c.r[11].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_00286A64; } }
    set32(c.r[8], 0u + 9u);
    c.budget -= 1;
L_00286A10:
    c.budget -= 2;
    if (c.r[10].d[0] != c.r[8].d[0]) { set32(c.r[9], ld32((c.r[5].w[0] + 148u)));  goto L_00286A28; }
    set32(c.r[8], ld32((c.r[11].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00286A64; } }
    set32(c.r[9], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 1;
L_00286A28:
    set32(c.r[8], 0u + 7013u);
    c.budget -= 3;
    if (c.r[9].d[0] != c.r[8].d[0]) { set32(c.r[8], ld32((c.r[4].w[0] + 72u)));  goto L_00286A4C; }
    set32(c.r[9], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[8], 0u + 2u);
    set32(c.r[9], ld32((c.r[9].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_00286A64; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 1;
L_00286A4C:
    set32(c.r[9], ld32((c.r[5].w[0] + 1296u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_00286A64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286CC0; } }
L_00286A64:
    set32(c.r[7], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 1;
L_00286A68:
    set32(c.r[8], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] != c.r[8].d[0]) { set32(c.r[8], 0u + 3u);  goto L_00286A7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286CC0; } }
L_00286A7C:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[8].d[0]) { set32(c.r[8], ld32((c.r[28].w[0] - 30380u)));  goto L_00286AA8; }
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00286AA4; } }
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00286AA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286CC0; } }
L_00286AA4:
    set32(c.r[8], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_00286AA8:
    set32(c.r[8], ld32((c.r[8].w[0] + 132u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 128u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[8].sd[0] <= 0; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00286ACC; } }
    c.r[1].d[0] = c.r[8].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[8].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;  goto L_00286AD0; }
    set32(c.r[9], 0u + 1u);
    c.budget -= 1;
L_00286ACC:
    c.r[8].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00286AD0:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[8], 0u + 15u);  goto L_00286AE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286CC0; } }
L_00286AE0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[8].d[0]) { c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));  goto L_00286B14; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00286B10; } }
    set32(c.r[8], ld32((c.r[5].w[0] + 148u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[2].d[0]) { set32(c.r[8], ld32((c.r[4].w[0] + 72u)));  goto L_00286BE4; }
    c.r[2].d[0] = 0ull | 50005ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_00286BE0; } }
L_00286B10:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));
    c.budget -= 1;
L_00286B14:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_00286BE0; } }
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00286BE0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00286CC0; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00286B4C; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[9], ld32((c.r[5].w[0] + 1100u)));  goto L_00286B58; }
L_00286B4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286CC0; } }
L_00286B58:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[9].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 11u);  goto L_00286B98; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_00286B94; } }
    set32(c.r[8], ld32((c.r[5].w[0] + 1180u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_00286B94; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_00286B94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286CC0; } }
L_00286B94:
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_00286B98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00286BE0; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_00286BE0; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00286BE0; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00286BE0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00286CC0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[2].d[0];  if (t) { goto L_00286BE0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286CC0; } }
L_00286BE0:
    set32(c.r[8], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 1;
L_00286BE4:
    set32(c.r[5], ld32((c.r[8].w[0] + 172u)));
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_00286C24; }
    c.r[2].d[0] = c.r[5].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00286C20; } }
    c.r[2].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 11u);  goto L_00286C34; }
    set32(c.r[5], ld32((c.r[8].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00286C30; } }
L_00286C20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_00286C24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_00286CC0; } }
L_00286C30:
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_00286C34:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 12u);  goto L_00286C68; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00286C64; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00286C64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_00286CC0; } }
L_00286C64:
    set32(c.r[2], 0u + 12u);
    c.budget -= 1;
L_00286C68:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00286CA0; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00286C9C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00286CC0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286CC0; } }
L_00286C9C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00286CA0:
    c.budget -= 2;
    if (c.r[7].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00286CC0; }
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00286CBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286CC0; } }
L_00286CBC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00286CC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00286CD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286CFCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x00286CFCu) [[unlikely]] return; }
L_00286CFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[19], c.r[2].w[0] + 224u);
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[4], c.r[3].w[0] + 192u);
    set32(c.r[16], ld32((c.r[2].w[0] + 848u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286D28u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00286D28u) [[unlikely]] return; }
L_00286D28:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00286D8C; } }
L_00286D34:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 452u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1312u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00286D8C; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00286D88; } }
    set32(c.r[4], c.r[3].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286D64u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00286D64u) [[unlikely]] return; }
L_00286D64:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00286D88; } }
    c.f[1] = ld32((c.r[20].w[0] + 172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 172u), c.f[0]);
    c.budget -= 6;
L_00286D88:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00286D8C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286D34u | kUnwind; return; } goto L_00286D34; }
    set32(c.r[16], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286DA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00286DA4u) [[unlikely]] return; }
L_00286DA4:
    c.f[4] = ld32((c.r[16].w[0] + 696u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[16].w[0] + 712u));
    set32(c.r[3], c.r[16].w[0] + 688u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 708u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[16].w[0] + 692u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_00286DD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[3].w[0] + 32u));  if (t) { goto L_00286DE0; } }
L_00286DD8:
    c.f[3] = c.f[0];
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.budget -= 2;
L_00286DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[3]);
    st32((c.r[29].w[0] + 120u), c.f[4]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286E1Cu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x00286E1Cu) [[unlikely]] return; }
L_00286E1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286E30u); set32(c.r[7], c.r[20].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x00286E30u) [[unlikely]] return; }
L_00286E30:
    c.f[1] = ld32((c.r[20].w[0] + 144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 144u), c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 148u));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[20].w[0] + 148u), c.f[2]);
    c.f[2] = ld32((c.r[20].w[0] + 172u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[20].w[0] + 152u), c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 21;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], 0u + 559u);  goto L_00286E8C; }
    st32((c.r[20].w[0] + 144u), c.f[0]);
    set32(c.r[3], 0u + 559u);
    c.budget -= 2;
L_00286E8C:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[20].w[0] + 148u));  goto L_00286EB0; }
    st32((c.r[20].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 148u));
    c.budget -= 2;
L_00286EB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_00286ED0; }
    st32((c.r[20].w[0] + 148u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 2;
L_00286ED0:
    set32(c.r[3], 0u + 20006u);
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[1] = ld32((c.r[20].w[0] + 148u));  goto L_00286F1C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00286F18; } }
    c.f[1] = ld32((c.r[20].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_00286F3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 148u), c.f[0]);  if (t) { goto L_00286F38; } }
L_00286F18:
    c.f[1] = ld32((c.r[20].w[0] + 148u));
    c.budget -= 1;
L_00286F1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00286F38; } }
    st32((c.r[20].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_00286F38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00286F3C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00286F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286FC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23840u);
    set32(c.r[2], c.r[2].w[0] + 23896u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286FA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00286FA0u) [[unlikely]] return; }
L_00286FA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286FACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00286FACu) [[unlikely]] return; }
L_00286FAC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00286FC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286FC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00286FC4u) [[unlikely]] return; }
L_00286FC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286FE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286F60u | kUnwind; return; } goto L_00286F60; }
L_00286FF0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[19], ld32((c.r[6].w[0] + 960u)));
    set32(c.r[5], c.r[6].w[0] + 112u);
    set32(c.r[16], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[22], c.r[5].w[0] + 452u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028704Cu); set32(c.r[18], c.r[3].w[0] + 3728u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028704Cu) [[unlikely]] return; }
L_0028704C:
    c.f[0] = ld32((c.r[20].w[0] + 736u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 740u));
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 744u));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 748u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287074u); st32((c.r[29].w[0] + 252u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00287074u) [[unlikely]] return; }
L_00287074:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0028708C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 244u), 0u);  if (t) { goto L_002870D4; } }
L_0028708C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00287098; }
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 1;
L_00287098:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 336u);
    set32(c.r[7], c.r[29].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002870ACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 266u, depth + 1u); else { c.pc = 0x002660D0u; return; } if (c.pc != 0x002870ACu) [[unlikely]] return; }
L_002870AC:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002870C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 176u, depth + 1u); else { c.pc = 0x002C2280u; return; } if (c.pc != 0x002870C0u) [[unlikely]] return; }
L_002870C0:
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002870D4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x002870D4u) [[unlikely]] return; }
L_002870D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[2] = ld32((c.r[3].w[0] + 11072u));
    c.r[21].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 11076u));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[3].w[0] + 11080u));
    c.f[20] = ld32((c.r[2].w[0] + 11084u));
    c.f[23] = c.f[2] ^ fp::kSign;
    c.f[22] = c.f[1] ^ fp::kSign;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0] ^ fp::kSign;  if (t) { goto L_00287250; } }
L_0028710C:
    set32(c.r[25], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    set32(c.r[7], c.r[29].w[0] + 364u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287130u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287130u) [[unlikely]] return; }
L_00287130:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00287250; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287140u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00287140u) [[unlikely]] return; }
L_00287140:
    ld128((c.r[16].w[0] + 736u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 364u));
    st32((c.r[18].w[0] + 80u), c.f[0]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[20].d[0]; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_0028716C; } }
    st32((c.r[18].w[0] + 16u), c.f[23]);
    st32((c.r[18].w[0] + 20u), c.f[22]);
    st32((c.r[18].w[0] + 24u), c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 28u), c.f[20]);  if (t) { goto L_002871DC; } }
L_0028716C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287174u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00287174u) [[unlikely]] return; }
L_00287174:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 224u));  goto L_002871B4; }
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.f[3] = ld32((c.r[29].w[0] + 232u));
    c.f[2] = ld32((c.r[29].w[0] + 248u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 24u), c.f[2]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_002871DC; } }
L_002871B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.f[3] = ld32((c.r[29].w[0] + 228u));
    c.f[2] = ld32((c.r[29].w[0] + 244u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 24u), c.f[2]);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 10;
L_002871DC:
    c.f[12] = ld32((c.r[18].w[0] + 16u));
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002871F0u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_003A(c, 294u, depth + 1u); else { c.pc = 0x0020AC90u; return; } if (c.pc != 0x002871F0u) [[unlikely]] return; }
L_002871F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002871F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002871F8u) [[unlikely]] return; }
L_002871F8:
    set32(c.r[2], c.r[16].w[0] + 688u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[18].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 92u), 0u);
    set32(c.r[18], c.r[18].w[0] + 96u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 22;
L_00287250:
    c.r[2].d[0] = c.r[17].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028710Cu | kUnwind; return; } goto L_0028710C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287264u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00287264u) [[unlikely]] return; }
L_00287264:
    c.f[0] = ld32((c.r[20].w[0] + 736u));
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 740u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 744u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 748u));
    st32((c.r[29].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 3320u), 0u);  if (t) { goto L_0028740C; } }
L_00287294:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[2].w[0] + 3728u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3820u)));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0028740C; }
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002872DCu); st32((c.r[29].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002872DCu) [[unlikely]] return; }
L_002872DC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 140u)));  goto L_002873E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[19].w[0] + 1u);  if (t) { goto L_002873CC; } }
L_002872F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] + 3728u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3728u)));
    c.budget -= 8;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002873CC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002873C8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[5], c.r[6].w[0] + 16u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287350u); st32((c.r[29].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00287350u) [[unlikely]] return; }
L_00287350:
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 160u);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287384u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 72u, depth + 1u); else { c.pc = 0x0017CC60u; return; } if (c.pc != 0x00287384u) [[unlikely]] return; }
L_00287384:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002873C8; } }
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    c.f[2] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_002873C0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_002873C8; } }
L_002873C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_002873D8; } }
L_002873C8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002873CC:
    c.r[2].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002872F4u | kUnwind; return; } goto L_002872F4; }
L_002873D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00287408; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 1;
L_002873E8:
    set32(c.r[2], ld32((c.r[3].w[0] + 3320u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 3324u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 3320u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 3320u), c.r[2].w[0]);
    c.budget -= 8;
L_00287408:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0028740C:
    c.r[2].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00287294u | kUnwind; return; } goto L_00287294; }
    set32(c.r[5], ld32((c.r[20].w[0] + 140u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 3320u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[5].w[0] + 3324u);  if (t) { goto L_002874B0; } }
L_00287438:
    set32(c.r[11], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_002874A0; } }
L_00287444:
    set32(c.r[5], ld32((c.r[10].w[0])));
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[9], ld32((c.r[7].w[0])));
    set32(c.r[7], ld32((c.r[5].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[9].w[0] + 68u)));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[8], c.r[9].w[0] + 68u);  if (t) { goto L_0028746C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_00287474; } }
L_0028746C:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 2;
L_00287474:
    c.r[1].d[0] = c.r[5].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_002874A0; }
    c.f[0] = ld32((c.r[8].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[8].w[0]), c.r[5].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 8;
L_002874A0:
    c.r[5].d[0] = c.r[11].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[7], c.r[11].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00287444u | kUnwind; return; } goto L_00287444; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002874B0:
    c.r[5].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00287438u | kUnwind; return; } goto L_00287438; }
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[2].w[0] - 4u);  if (t) { goto L_00287514; } }
L_002874CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_00287504; } }
L_002874D4:
    set32(c.r[9], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[10].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0])));
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[4], ld32((c.r[8].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 68u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { set32(c.r[12], c.r[12].w[0] - 1u);  goto L_00287504; }
    st32((c.r[7].w[0]), c.r[8].w[0]);
    st32((c.r[9].w[0]), c.r[6].w[0]);
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.budget -= 3;
L_00287504:
    c.r[1].d[0] = c.r[13].d[0] < c.r[12].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[12].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002874D4u | kUnwind; return; } goto L_002874D4; }
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 1;
L_00287514:
    c.r[4].d[0] = c.r[13].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002874CCu | kUnwind; return; } goto L_002874CC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 3316u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028753C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0028753C:
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287548u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 188u, depth + 1u); else { c.pc = 0x00281B90u; return; } if (c.pc != 0x00287548u) [[unlikely]] return; }
L_00287548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_00287580:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3320u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002875AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00287798; } }
L_002875AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002875C0u); set32(c.r[6], c.r[6].w[0] + 11072u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x002875C0u) [[unlikely]] return; }
L_002875C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002875C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002875C8u) [[unlikely]] return; }
L_002875C8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 140u)));  goto L_002875F4; }
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.f[14] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002875ECu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003A(c, 294u, depth + 1u); else { c.pc = 0x0020AC90u; return; } if (c.pc != 0x002875ECu) [[unlikely]] return; }
L_002875EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 140u)));  if (t) { goto L_00287654; } }
L_002875F4:
    set32(c.r[3], ld32((c.r[2].w[0] + 3312u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_00287624; }
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_00287650; } }
L_00287624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028762Cu); set32(c.r[5], c.r[17].w[0] + 1200u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x0028762Cu) [[unlikely]] return; }
L_0028762C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028763Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0028763Cu) [[unlikely]] return; }
L_0028763C:
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.f[14] = ld32((c.r[29].w[0] + 132u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287650u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003A(c, 294u, depth + 1u); else { c.pc = 0x0020AC90u; return; } if (c.pc != 0x00287650u) [[unlikely]] return; }
L_00287650:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 1;
L_00287654:
    set32(c.r[3], ld32((c.r[4].w[0] + 3320u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 3324u);  if (t) { goto L_002876F8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 3316u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[9], c.r[4].w[0] + 3316u);  if (t) { goto L_002876C4; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002876AC; } }
L_00287678:
    set32(c.r[5], ld32((c.r[4].w[0] + 3312u)));
    set32(c.r[7], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[6].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_002876AC; }
    set32(c.r[5], ld32((c.r[6].w[0] + 68u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002876A8; } }
    st32((c.r[9].w[0]), c.r[10].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[7].w[0])));  if (t) { goto L_00287798; } }
L_002876A8:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_002876AC:
    c.r[5].d[0] = c.r[10].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[6], c.r[10].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00287678u | kUnwind; return; } goto L_00287678; }
    st32((c.r[9].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00287798; } }
L_002876C4:
    set32(c.r[4], c.r[5].w[0] + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 3316u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st32((c.r[5].w[0] + 3316u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3316u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00287798; } }
L_002876F8:
    set32(c.r[5], ld32((c.r[4].w[0] + 3316u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[10], c.r[4].w[0] + 3316u);  if (t) { goto L_00287764; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[9], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_00287748; } }
L_00287714:
    set32(c.r[5], ld32((c.r[4].w[0] + 3312u)));
    set32(c.r[7], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[6].d[0]) { set32(c.r[11], c.r[11].w[0] - 1u);  goto L_00287748; }
    set32(c.r[5], ld32((c.r[6].w[0] + 68u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00287744; } }
    st32((c.r[10].w[0]), c.r[11].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[7].w[0])));  if (t) { goto L_00287798; } }
L_00287744:
    set32(c.r[11], c.r[11].w[0] - 1u);
    c.budget -= 1;
L_00287748:
    c.budget -= 2;
    if (c.r[11].sd[0] >= 0) { set32(c.r[6], c.r[11].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00287714u | kUnwind; return; } goto L_00287714; }
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[10].w[0]), c.r[9].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] - 4u)));  if (t) { goto L_00287798; } }
L_00287764:
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[4].w[0] + 3316u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 3316u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st32((c.r[5].w[0] + 3316u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3316u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
L_00287798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002877B0:
    set32(c.r[29], c.r[29].w[0] - 480u);
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
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[30], ld32((c.r[2].w[0] + 3312u)));
    st32((c.r[2].w[0] + 3312u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002877FCu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002877FCu) [[unlikely]] return; }
L_002877FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_00287C3C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 1100u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 1104u)));  goto L_00287828; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028781Cu);  if (depth < kMaxDepth) unit_0052(c, 139u, depth + 1u); else { c.pc = 0x00269B20u; return; } if (c.pc != 0x0028781Cu) [[unlikely]] return; }
L_0028781C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00287C38; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1104u)));
    c.budget -= 1;
L_00287828:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));  goto L_00287854; }
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 3320u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00287850; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 3324u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 3312u), c.r[3].w[0]);  if (t) { goto L_00287C38; } }
L_00287850:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_00287854:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287864u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00287864u) [[unlikely]] return; }
L_00287864:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 608u)));  goto L_002878C0; }
    set32(c.r[6], ld32((c.r[17].w[0] + 608u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[17].w[0] + 1084u));
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.f[2] = ld32((c.r[6].w[0] + 740u));
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.f[1] = ld32((c.r[6].w[0] + 756u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 412u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 400u), 0u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 408u), c.f[3]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002878B8u); st32((c.r[29].w[0] + 404u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002878B8u) [[unlikely]] return; }
L_002878B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002879E8; } }
L_002878C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + 736u);  if (t) { goto L_002878D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[5].w[0] + 136u)));  if (t) { goto L_002878D8; } }
L_002878D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002878D8:
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.f[1] = ld32((c.r[6].w[0] + 20u));
    set32(c.r[3], ld32((c.r[17].w[0] + 1304u)));
    c.f[3] = ld32((c.r[17].w[0] + 1084u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[3].w[0] + 220u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 412u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 400u), 0u);
    st32((c.r[29].w[0] + 404u), c.f[0]);
    c.budget -= 20;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[29].w[0] + 408u), c.f[1]);  if (t) { goto L_00287934; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 136u)));  if (t) { goto L_00287938; } }
L_00287934:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00287938:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 384u);
    set32(c.r[7], c.r[29].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028794Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 266u, depth + 1u); else { c.pc = 0x002660D0u; return; } if (c.pc != 0x0028794Cu) [[unlikely]] return; }
L_0028794C:
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[6], c.r[29].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287960u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 176u, depth + 1u); else { c.pc = 0x002C2280u; return; } if (c.pc != 0x00287960u) [[unlikely]] return; }
L_00287960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287968u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00287968u) [[unlikely]] return; }
L_00287968:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 400u);  goto L_002879D8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 1180u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002879D4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287990u); set32(c.r[5], c.r[2].w[0] + 13744u);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x00287990u) [[unlikely]] return; }
L_00287990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287998u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00287998u) [[unlikely]] return; }
L_00287998:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002879A4u); set32(c.r[5], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002879A4u) [[unlikely]] return; }
L_002879A4:
    set32(c.r[6], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[7], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002879BCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002879BCu) [[unlikely]] return; }
L_002879BC:
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002879CCu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002879CCu) [[unlikely]] return; }
L_002879CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002879E4; } }
L_002879D4:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 1;
L_002879D8:
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002879E4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002879E4u) [[unlikely]] return; }
L_002879E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002879E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002879F0u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002879F0u) [[unlikely]] return; }
L_002879F0:
    c.f[0] = ld32((c.r[17].w[0] + 736u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 400u));
    c.f[2] = ld32((c.r[29].w[0] + 404u));
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[4] = ld32((c.r[17].w[0] + 740u));
    c.f[1] = ld32((c.r[29].w[0] + 408u));
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    st32((c.r[29].w[0] + 244u), c.f[4]);
    c.f[4] = ld32((c.r[17].w[0] + 744u));
    st32((c.r[29].w[0] + 248u), c.f[4]);
    c.f[4] = ld32((c.r[17].w[0] + 748u));
    st32((c.r[29].w[0] + 252u), c.f[4]);
    st32((c.r[29].w[0] + 256u), c.f[3]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 608u)));
    c.f[0] = ld32((c.r[2].w[0] + 852u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A44u); st32((c.r[29].w[0] + 272u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00287A44u) [[unlikely]] return; }
L_00287A44:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 240u);  goto L_00287A60; }
    st32((c.r[29].w[0] + 244u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 260u), 0u);  if (t) { goto L_00287AAC; } }
L_00287A60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A70u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x00287A70u) [[unlikely]] return; }
L_00287A70:
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A84u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x00287A84u) [[unlikely]] return; }
L_00287A84:
    set32(c.r[4], ld32((c.r[17].w[0] + 1100u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 140u)));  goto L_00287AB0; }
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.budget -= 6;
L_00287AAC:
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 1;
L_00287AB0:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[23], ld32((c.r[3].w[0] + 3320u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[3].w[0] + 3324u);  if (t) { goto L_00287BD8; } }
L_00287AC0:
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0])));
    set32(c.r[19], ld32((c.r[20].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] != c.r[19].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 84u)));  goto L_00287ADC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00287BD4; } }
L_00287ADC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 2;
L_00287AE4:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00287AE4u | kUnwind; return; } goto L_00287AE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00287B08u) [[unlikely]] return; }
L_00287B08:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 192u);  goto L_00287B3C; }
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 196u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B2Cu); st32((c.r[29].w[0] + 212u), 0u);  if (depth < kMaxDepth) unit_0016(c, 254u, depth + 1u); else { c.pc = 0x0017B7B0u; return; } if (c.pc != 0x00287B2Cu) [[unlikely]] return; }
L_00287B2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_00287BD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00287BE4; } }
L_00287B3C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B4Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x00287B4Cu) [[unlikely]] return; }
L_00287B4C:
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B60u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x00287B60u) [[unlikely]] return; }
L_00287B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00287B68u) [[unlikely]] return; }
L_00287B68:
    c.f[0] = ld32((c.r[19].w[0] + 736u));
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 740u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 744u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 748u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B94u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00287B94u) [[unlikely]] return; }
L_00287B94:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287BA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 45u, depth + 1u); else { c.pc = 0x0015C500u; return; } if (c.pc != 0x00287BA0u) [[unlikely]] return; }
L_00287BA0:
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287BC4u); st32((c.r[29].w[0] + 224u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 254u, depth + 1u); else { c.pc = 0x0017B7B0u; return; } if (c.pc != 0x00287BC4u) [[unlikely]] return; }
L_00287BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00287BD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00287BE4; } }
L_00287BD4:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00287BD8:
    c.r[3].d[0] = c.r[21].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00287AC0u | kUnwind; return; } goto L_00287AC0; }
L_00287BE4:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 140u)));  goto L_00287C34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287BF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00287BF4u) [[unlikely]] return; }
L_00287BF4:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00287C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00287C24; } }
L_00287C0C:
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[30].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00287C24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00287C30; } }
L_00287C24:
    c.r[3].d[0] = c.r[4].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00287C0Cu | kUnwind; return; } goto L_00287C0C; }
L_00287C30:
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 1;
L_00287C34:
    st32((c.r[3].w[0] + 3312u), c.r[16].w[0]);
    c.budget -= 1;
L_00287C38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_00287C3C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_00287C70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00287D20; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 140u)));  goto L_00287CCC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 13268u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 13268u);  if (t) { goto L_00287CBC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00287CF0; } }
L_00287CBC:
    set32(c.r[2], ld32((c.r[4].w[0] + 13260u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00287CF0; } }
L_00287CCC:
    set32(c.r[3], ld32((c.r[2].w[0] + 13268u)));
    set32(c.r[4], c.r[2].w[0] + 13268u);
    set32(c.r[2], ld32((c.r[2].w[0] + 13260u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { st32((c.r[4].w[0]), 0u);  goto L_00287CF0; }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00287CF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 13260u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00287D70; }
    set32(c.r[2], ld32((c.r[3].w[0] + 13268u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 13232u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 13272u), c.r[2].w[0]);  if (t) { goto L_00287D6C; } }
L_00287D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287D28u);  if (depth < kMaxDepth) unit_0059(c, 399u, depth + 1u); else { c.pc = 0x00287580u; return; } if (c.pc != 0x00287D28u) [[unlikely]] return; }
L_00287D28:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00287D6C; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287D50u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00287D50u) [[unlikely]] return; }
L_00287D50:
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3312u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00287D6C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_00287D6C; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00287D6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00287D70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00287D90:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00287DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 3u, depth); } }
L_00287DC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30332u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00287E00; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] - 2640u), 0u);
    st32((c.r[3].w[0] - 2656u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] - 2652u), 0u);
    st32((c.r[3].w[0] - 2648u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 2644u), 0u);
    st8((c.r[28].w[0] - 30332u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 13;
L_00287E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E08u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00287E08u) [[unlikely]] return; }
L_00287E08:
    c.f[0] = ld32((c.r[19].w[0] + 688u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[19].w[0] + 688u);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 692u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 696u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 700u));
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 704u));
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 708u));
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 712u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 716u));
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 720u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E5Cu); st32((c.r[29].w[0] + 240u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 258u, depth + 1u); else { c.pc = 0x0016EEA0u; return; } if (c.pc != 0x00287E5Cu) [[unlikely]] return; }
L_00287E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E64u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 256u, depth + 1u); else { c.pc = 0x0016EE80u; return; } if (c.pc != 0x00287E64u) [[unlikely]] return; }
L_00287E64:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E7Cu); set32(c.r[7], c.r[7].w[0] - 2656u);  if (depth < kMaxDepth) unit_0013(c, 269u, depth + 1u); else { c.pc = 0x0016EFB0u; return; } if (c.pc != 0x00287E7Cu) [[unlikely]] return; }
L_00287E7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_00287E8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { [[clang::musttail]] return unit_005A(c, 4u, depth); } }
L_00287E8C:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E98u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00287E98u) [[unlikely]] return; }
L_00287E98:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287EACu); st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00287EACu) [[unlikely]] return; }
L_00287EAC:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 10000u);  goto L_00287EF0; }
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00287EEC; } }
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00287EEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 2;
L_00287EEC:
    set32(c.r[2], 0u + 10000u);
    c.budget -= 1;
L_00287EF0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 160u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F24u); st32((c.r[29].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x00287F24u) [[unlikely]] return; }
L_00287F24:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F54u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x00287F54u) [[unlikely]] return; }
L_00287F54:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F7Cu); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 258u, depth + 1u); else { c.pc = 0x0016EEA0u; return; } if (c.pc != 0x00287F7Cu) [[unlikely]] return; }
L_00287F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F84u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 256u, depth + 1u); else { c.pc = 0x0016EE80u; return; } if (c.pc != 0x00287F84u) [[unlikely]] return; }
L_00287F84:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F9Cu); set32(c.r[7], c.r[7].w[0] - 2656u);  if (depth < kMaxDepth) unit_0013(c, 263u, depth + 1u); else { c.pc = 0x0016EEF0u; return; } if (c.pc != 0x00287F9Cu) [[unlikely]] return; }
L_00287F9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 160u));  goto L_00287FC0; }
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00287FBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 3u, depth); } }
L_00287FBC:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_00287FC0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[6] = ld32((c.r[28].w[0] - 32692u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[4] = ld32((c.r[29].w[0] + 164u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.f[5] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    set32(c.r[7], c.r[7].w[0] - 2656u);
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.budget -= 16;
    [[clang::musttail]] return unit_005A(c, 1u, depth);
}

}
