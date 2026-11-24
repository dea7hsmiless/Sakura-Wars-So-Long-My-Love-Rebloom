#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C0[4096] = {
    1, 2, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0,
    11, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0,
    19, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43,
    0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0,
    0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 58, 59, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0,
    0, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0,
    89, 90, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 197,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218,
    0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0,
    0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302,
    0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    335, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0,
    344, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    352, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0,
    0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0,
    0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0,
    476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 481,
    0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 487,
    0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491,
    0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513,
    0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0,
    521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0,
    0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0,
};

void unit_00C0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00420000;
    case 2u: goto L_00420004;
    case 3u: goto L_0042000C;
    case 4u: goto L_00420018;
    case 5u: goto L_00420024;
    case 6u: goto L_0042002C;
    case 7u: goto L_0042003C;
    case 8u: goto L_00420054;
    case 9u: goto L_00420064;
    case 10u: goto L_00420078;
    case 11u: goto L_00420080;
    case 12u: goto L_0042008C;
    case 13u: goto L_0042009C;
    case 14u: goto L_004200A4;
    case 15u: goto L_004200C0;
    case 16u: goto L_004200CC;
    case 17u: goto L_004200E4;
    case 18u: goto L_004200F4;
    case 19u: goto L_00420100;
    case 20u: goto L_00420108;
    case 21u: goto L_00420110;
    case 22u: goto L_0042011C;
    case 23u: goto L_0042012C;
    case 24u: goto L_00420134;
    case 25u: goto L_00420168;
    case 26u: goto L_00420174;
    case 27u: goto L_00420184;
    case 28u: goto L_0042019C;
    case 29u: goto L_004201AC;
    case 30u: goto L_004201C0;
    case 31u: goto L_004201C8;
    case 32u: goto L_004201D4;
    case 33u: goto L_004201DC;
    case 34u: goto L_004201EC;
    case 35u: goto L_0042020C;
    case 36u: goto L_00420214;
    case 37u: goto L_00420224;
    case 38u: goto L_00420234;
    case 39u: goto L_0042023C;
    case 40u: goto L_0042024C;
    case 41u: goto L_00420254;
    case 42u: goto L_00420270;
    case 43u: goto L_0042027C;
    case 44u: goto L_0042028C;
    case 45u: goto L_00420294;
    case 46u: goto L_004202B4;
    case 47u: goto L_004202C0;
    case 48u: goto L_004202D0;
    case 49u: goto L_004202E8;
    case 50u: goto L_004202F8;
    case 51u: goto L_0042030C;
    case 52u: goto L_00420314;
    case 53u: goto L_00420320;
    case 54u: goto L_00420330;
    case 55u: goto L_00420338;
    case 56u: goto L_00420340;
    case 57u: goto L_00420358;
    case 58u: goto L_00420364;
    case 59u: goto L_00420368;
    case 60u: goto L_00420380;
    case 61u: goto L_00420390;
    case 62u: goto L_004203D4;
    case 63u: goto L_004203E4;
    case 64u: goto L_004203FC;
    case 65u: goto L_00420408;
    case 66u: goto L_00420424;
    case 67u: goto L_0042043C;
    case 68u: goto L_00420468;
    case 69u: goto L_00420474;
    case 70u: goto L_00420488;
    case 71u: goto L_00420494;
    case 72u: goto L_004204A4;
    case 73u: goto L_004204BC;
    case 74u: goto L_004204CC;
    case 75u: goto L_004204E0;
    case 76u: goto L_004204F0;
    case 77u: goto L_00420540;
    case 78u: goto L_00420590;
    case 79u: goto L_004205A0;
    case 80u: goto L_004205B8;
    case 81u: goto L_004205C4;
    case 82u: goto L_004205E0;
    case 83u: goto L_004205F8;
    case 84u: goto L_0042062C;
    case 85u: goto L_00420638;
    case 86u: goto L_00420648;
    case 87u: goto L_00420660;
    case 88u: goto L_00420670;
    case 89u: goto L_00420680;
    case 90u: goto L_00420684;
    case 91u: goto L_00420698;
    case 92u: goto L_004206A0;
    case 93u: goto L_004206D8;
    case 94u: goto L_004206E8;
    case 95u: goto L_00420700;
    case 96u: goto L_00420710;
    case 97u: goto L_00420718;
    case 98u: goto L_00420740;
    case 99u: goto L_00420758;
    case 100u: goto L_00420778;
    case 101u: goto L_00420784;
    case 102u: goto L_00420794;
    case 103u: goto L_004207AC;
    case 104u: goto L_004207BC;
    case 105u: goto L_004207D0;
    case 106u: goto L_004207E4;
    case 107u: goto L_004207FC;
    case 108u: goto L_0042081C;
    case 109u: goto L_00420830;
    case 110u: goto L_00420840;
    case 111u: goto L_004208C0;
    case 112u: goto L_004208C8;
    case 113u: goto L_00420900;
    case 114u: goto L_00420910;
    case 115u: goto L_00420918;
    case 116u: goto L_00420930;
    case 117u: goto L_00420940;
    case 118u: goto L_00420948;
    case 119u: goto L_00420970;
    case 120u: goto L_00420988;
    case 121u: goto L_004209A8;
    case 122u: goto L_004209B4;
    case 123u: goto L_004209C4;
    case 124u: goto L_004209DC;
    case 125u: goto L_004209EC;
    case 126u: goto L_00420A00;
    case 127u: goto L_00420A14;
    case 128u: goto L_00420A2C;
    case 129u: goto L_00420A4C;
    case 130u: goto L_00420A58;
    case 131u: goto L_00420A70;
    case 132u: goto L_00420ACC;
    case 133u: goto L_00420AE8;
    case 134u: goto L_00420AF4;
    case 135u: goto L_00420B10;
    case 136u: goto L_00420B20;
    case 137u: goto L_00420B38;
    case 138u: goto L_00420B48;
    case 139u: goto L_00420B58;
    case 140u: goto L_00420B68;
    case 141u: goto L_00420B84;
    case 142u: goto L_00420B90;
    case 143u: goto L_00420BA8;
    case 144u: goto L_00420BBC;
    case 145u: goto L_00420BF8;
    case 146u: goto L_00420C0C;
    case 147u: goto L_00420C20;
    case 148u: goto L_00420C38;
    case 149u: goto L_00420C5C;
    case 150u: goto L_00420C68;
    case 151u: goto L_00420C78;
    case 152u: goto L_00420C90;
    case 153u: goto L_00420CA4;
    case 154u: goto L_00420CB8;
    case 155u: goto L_00420CD0;
    case 156u: goto L_00420D20;
    case 157u: goto L_00420D38;
    case 158u: goto L_00420D50;
    case 159u: goto L_00420D64;
    case 160u: goto L_00420D7C;
    case 161u: goto L_00420D8C;
    case 162u: goto L_00420DE0;
    case 163u: goto L_00420EBC;
    case 164u: goto L_00420ECC;
    case 165u: goto L_00420EE8;
    case 166u: goto L_00420F00;
    case 167u: goto L_00420F10;
    case 168u: goto L_00420F5C;
    case 169u: goto L_00420F6C;
    case 170u: goto L_00420F8C;
    case 171u: goto L_00420FE8;
    case 172u: goto L_00421008;
    case 173u: goto L_00421018;
    case 174u: goto L_00421030;
    case 175u: goto L_0042103C;
    case 176u: goto L_004210B0;
    case 177u: goto L_004210C0;
    case 178u: goto L_004210F4;
    case 179u: goto L_0042110C;
    case 180u: goto L_00421144;
    case 181u: goto L_0042115C;
    case 182u: goto L_00421174;
    case 183u: goto L_0042118C;
    case 184u: goto L_004211F0;
    case 185u: goto L_00421204;
    case 186u: goto L_00421224;
    case 187u: goto L_00421238;
    case 188u: goto L_00421250;
    case 189u: goto L_0042126C;
    case 190u: goto L_004212C0;
    case 191u: goto L_00421320;
    case 192u: goto L_00421334;
    case 193u: goto L_0042133C;
    case 194u: goto L_00421354;
    case 195u: goto L_0042135C;
    case 196u: goto L_00421374;
    case 197u: goto L_0042137C;
    case 198u: goto L_00421394;
    case 199u: goto L_004213A4;
    case 200u: goto L_004213AC;
    case 201u: goto L_004213C8;
    case 202u: goto L_004213E0;
    case 203u: goto L_00421430;
    case 204u: goto L_00421448;
    case 205u: goto L_00421460;
    case 206u: goto L_00421474;
    case 207u: goto L_004214DC;
    case 208u: goto L_00421500;
    case 209u: goto L_00421550;
    case 210u: goto L_00421580;
    case 211u: goto L_004215AC;
    case 212u: goto L_004215D4;
    case 213u: goto L_00421618;
    case 214u: goto L_00421630;
    case 215u: goto L_00421650;
    case 216u: goto L_004216B0;
    case 217u: goto L_004216F4;
    case 218u: goto L_004216FC;
    case 219u: goto L_00421704;
    case 220u: goto L_0042170C;
    case 221u: goto L_00421714;
    case 222u: goto L_0042172C;
    case 223u: goto L_0042173C;
    case 224u: goto L_00421758;
    case 225u: goto L_00421768;
    case 226u: goto L_00421794;
    case 227u: goto L_004217B0;
    case 228u: goto L_004217FC;
    case 229u: goto L_00421810;
    case 230u: goto L_00421820;
    case 231u: goto L_00421848;
    case 232u: goto L_0042187C;
    case 233u: goto L_00421888;
    case 234u: goto L_004218A0;
    case 235u: goto L_004218DC;
    case 236u: goto L_00421900;
    case 237u: goto L_00421914;
    case 238u: goto L_00421930;
    case 239u: goto L_004219D8;
    case 240u: goto L_004219EC;
    case 241u: goto L_00421A28;
    case 242u: goto L_00421A50;
    case 243u: goto L_00421A64;
    case 244u: goto L_00421A80;
    case 245u: goto L_00421A88;
    case 246u: goto L_00421A98;
    case 247u: goto L_00421AA8;
    case 248u: goto L_00421AB8;
    case 249u: goto L_00421AC8;
    case 250u: goto L_00421AD8;
    case 251u: goto L_00421AE8;
    case 252u: goto L_00421AF8;
    case 253u: goto L_00421B30;
    case 254u: goto L_00421B40;
    case 255u: goto L_00421B64;
    case 256u: goto L_00421BB0;
    case 257u: goto L_00421BC8;
    case 258u: goto L_00421BEC;
    case 259u: goto L_00421C04;
    case 260u: goto L_00421C14;
    case 261u: goto L_00421C24;
    case 262u: goto L_00421C60;
    case 263u: goto L_00421C80;
    case 264u: goto L_00421C90;
    case 265u: goto L_00421D20;
    case 266u: goto L_00421D34;
    case 267u: goto L_00421D54;
    case 268u: goto L_00421D6C;
    case 269u: goto L_00421D84;
    case 270u: goto L_00421D94;
    case 271u: goto L_00421DDC;
    case 272u: goto L_00421DEC;
    case 273u: goto L_00421E10;
    case 274u: goto L_00421E5C;
    case 275u: goto L_00421E6C;
    case 276u: goto L_00421E98;
    case 277u: goto L_00421EC0;
    case 278u: goto L_00421EE0;
    case 279u: goto L_00421EF0;
    case 280u: goto L_00421F18;
    case 281u: goto L_00421F3C;
    case 282u: goto L_00421F5C;
    case 283u: goto L_00421F6C;
    case 284u: goto L_00421F90;
    case 285u: goto L_00421FA8;
    case 286u: goto L_00421FCC;
    case 287u: goto L_00421FF0;
    case 288u: goto L_0042200C;
    case 289u: goto L_00422020;
    case 290u: goto L_00422030;
    case 291u: goto L_00422050;
    case 292u: goto L_00422074;
    case 293u: goto L_00422090;
    case 294u: goto L_004220A0;
    case 295u: goto L_004220C0;
    case 296u: goto L_004220E0;
    case 297u: goto L_00422104;
    case 298u: goto L_00422120;
    case 299u: goto L_00422130;
    case 300u: goto L_00422150;
    case 301u: goto L_00422168;
    case 302u: goto L_0042217C;
    case 303u: goto L_00422190;
    case 304u: goto L_004221A0;
    case 305u: goto L_004221B0;
    case 306u: goto L_004221DC;
    case 307u: goto L_004221F0;
    case 308u: goto L_00422218;
    case 309u: goto L_00422228;
    case 310u: goto L_00422244;
    case 311u: goto L_00422280;
    case 312u: goto L_00422290;
    case 313u: goto L_004222A0;
    case 314u: goto L_004222B0;
    case 315u: goto L_004222C4;
    case 316u: goto L_004222F0;
    case 317u: goto L_00422300;
    case 318u: goto L_00422320;
    case 319u: goto L_00422330;
    case 320u: goto L_00422338;
    case 321u: goto L_00422340;
    case 322u: goto L_00422348;
    case 323u: goto L_00422360;
    case 324u: goto L_00422378;
    case 325u: goto L_004223B0;
    case 326u: goto L_004223C0;
    case 327u: goto L_004223CC;
    case 328u: goto L_00422410;
    case 329u: goto L_00422420;
    case 330u: goto L_00422428;
    case 331u: goto L_00422440;
    case 332u: goto L_00422450;
    case 333u: goto L_00422458;
    case 334u: goto L_00422470;
    case 335u: goto L_00422480;
    case 336u: goto L_00422488;
    case 337u: goto L_00422490;
    case 338u: goto L_004224A0;
    case 339u: goto L_004224B4;
    case 340u: goto L_004224C0;
    case 341u: goto L_004224D0;
    case 342u: goto L_004224E4;
    case 343u: goto L_004224F0;
    case 344u: goto L_00422500;
    case 345u: goto L_00422510;
    case 346u: goto L_00422518;
    case 347u: goto L_00422530;
    case 348u: goto L_00422540;
    case 349u: goto L_00422548;
    case 350u: goto L_00422554;
    case 351u: goto L_00422570;
    case 352u: goto L_00422580;
    case 353u: goto L_00422588;
    case 354u: goto L_004225A0;
    case 355u: goto L_004225B0;
    case 356u: goto L_004225C0;
    case 357u: goto L_004225D0;
    case 358u: goto L_004225F0;
    case 359u: goto L_00422610;
    case 360u: goto L_0042263C;
    case 361u: goto L_00422654;
    case 362u: goto L_00422660;
    case 363u: goto L_00422678;
    case 364u: goto L_00422690;
    case 365u: goto L_004226A4;
    case 366u: goto L_004226BC;
    case 367u: goto L_004226CC;
    case 368u: goto L_00422700;
    case 369u: goto L_00422714;
    case 370u: goto L_0042273C;
    case 371u: goto L_00422770;
    case 372u: goto L_004227B8;
    case 373u: goto L_004227E0;
    case 374u: goto L_004227F8;
    case 375u: goto L_00422810;
    case 376u: goto L_00422848;
    case 377u: goto L_00422860;
    case 378u: goto L_004228A0;
    case 379u: goto L_004228B8;
    case 380u: goto L_004228CC;
    case 381u: goto L_004228E0;
    case 382u: goto L_004228F0;
    case 383u: goto L_00422900;
    case 384u: goto L_00422930;
    case 385u: goto L_00422940;
    case 386u: goto L_00422960;
    case 387u: goto L_00422970;
    case 388u: goto L_004229A0;
    case 389u: goto L_004229B0;
    case 390u: goto L_004229D0;
    case 391u: goto L_004229E0;
    case 392u: goto L_00422A10;
    case 393u: goto L_00422A20;
    case 394u: goto L_00422A40;
    case 395u: goto L_00422A54;
    case 396u: goto L_00422A5C;
    case 397u: goto L_00422A6C;
    case 398u: goto L_00422A88;
    case 399u: goto L_00422AA0;
    case 400u: goto L_00422AB0;
    case 401u: goto L_00422AC8;
    case 402u: goto L_00422AE0;
    case 403u: goto L_00422AF4;
    case 404u: goto L_00422B40;
    case 405u: goto L_00422B84;
    case 406u: goto L_00422B9C;
    case 407u: goto L_00422BC0;
    case 408u: goto L_00422BD4;
    case 409u: goto L_00422C30;
    case 410u: goto L_00422C48;
    case 411u: goto L_00422C5C;
    case 412u: goto L_00422C70;
    case 413u: goto L_00422C80;
    case 414u: goto L_00422CA0;
    case 415u: goto L_00422CB0;
    case 416u: goto L_00422CE0;
    case 417u: goto L_00422D20;
    case 418u: goto L_00422D3C;
    case 419u: goto L_00422DA0;
    case 420u: goto L_00422E08;
    case 421u: goto L_00422E24;
    case 422u: goto L_00422E54;
    case 423u: goto L_00422E6C;
    case 424u: goto L_00422EB0;
    case 425u: goto L_00422EC8;
    case 426u: goto L_00422EF4;
    case 427u: goto L_00422F0C;
    case 428u: goto L_00422F50;
    case 429u: goto L_00422F68;
    case 430u: goto L_00422FB0;
    case 431u: goto L_00423000;
    case 432u: goto L_00423018;
    case 433u: goto L_00423030;
    case 434u: goto L_00423044;
    case 435u: goto L_004230B0;
    case 436u: goto L_004230E0;
    case 437u: goto L_00423108;
    case 438u: goto L_0042315C;
    case 439u: goto L_00423168;
    case 440u: goto L_00423188;
    case 441u: goto L_004231B0;
    case 442u: goto L_004231C4;
    case 443u: goto L_00423230;
    case 444u: goto L_00423268;
    case 445u: goto L_004232B0;
    case 446u: goto L_004232D0;
    case 447u: goto L_00423320;
    case 448u: goto L_00423330;
    case 449u: goto L_00423358;
    case 450u: goto L_00423388;
    case 451u: goto L_00423394;
    case 452u: goto L_004233B4;
    case 453u: goto L_004233D0;
    case 454u: goto L_00423450;
    case 455u: goto L_0042348C;
    case 456u: goto L_00423498;
    case 457u: goto L_004234D0;
    case 458u: goto L_004234F0;
    case 459u: goto L_004235F0;
    case 460u: goto L_00423620;
    case 461u: goto L_00423660;
    case 462u: goto L_00423748;
    case 463u: goto L_004237C0;
    case 464u: goto L_004237C8;
    case 465u: goto L_004237F0;
    case 466u: goto L_004237F8;
    case 467u: goto L_00423820;
    case 468u: goto L_0042382C;
    case 469u: goto L_00423860;
    case 470u: goto L_0042389C;
    case 471u: goto L_004238D0;
    case 472u: goto L_004238EC;
    case 473u: goto L_00423930;
    case 474u: goto L_00423944;
    case 475u: goto L_0042395C;
    case 476u: goto L_00423980;
    case 477u: goto L_004239AC;
    case 478u: goto L_004239BC;
    case 479u: goto L_004239D8;
    case 480u: goto L_004239EC;
    case 481u: goto L_004239FC;
    case 482u: goto L_00423A0C;
    case 483u: goto L_00423A30;
    case 484u: goto L_00423A4C;
    case 485u: goto L_00423A58;
    case 486u: goto L_00423A64;
    case 487u: goto L_00423A7C;
    case 488u: goto L_00423AA0;
    case 489u: goto L_00423AD0;
    case 490u: goto L_00423AE0;
    case 491u: goto L_00423AFC;
    case 492u: goto L_00423B10;
    case 493u: goto L_00423B50;
    case 494u: goto L_00423B70;
    case 495u: goto L_00423BB4;
    case 496u: goto L_00423BC8;
    case 497u: goto L_00423BE0;
    case 498u: goto L_00423BF0;
    case 499u: goto L_00423C1C;
    case 500u: goto L_00423C24;
    case 501u: goto L_00423C50;
    case 502u: goto L_00423C64;
    case 503u: goto L_00423C74;
    case 504u: goto L_00423CA0;
    case 505u: goto L_00423CB4;
    case 506u: goto L_00423CCC;
    case 507u: goto L_00423CD4;
    case 508u: goto L_00423D00;
    case 509u: goto L_00423D14;
    case 510u: goto L_00423D24;
    case 511u: goto L_00423D34;
    case 512u: goto L_00423D60;
    case 513u: goto L_00423D7C;
    case 514u: goto L_00423D84;
    case 515u: goto L_00423DA4;
    case 516u: goto L_00423DC8;
    case 517u: goto L_00423DE0;
    case 518u: goto L_00423E14;
    case 519u: goto L_00423E28;
    case 520u: goto L_00423E60;
    case 521u: goto L_00423E80;
    case 522u: goto L_00423EC4;
    case 523u: goto L_00423ED4;
    case 524u: goto L_00423EE0;
    case 525u: goto L_00423F20;
    case 526u: goto L_00423F4C;
    case 527u: goto L_00423F58;
    case 528u: goto L_00423F70;
    case 529u: goto L_00423F90;
    case 530u: goto L_00423FD4;
    case 531u: goto L_00423FEC;
    default: bad_entry(c, 0x00420000u); return;
    }
L_00420000:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 1;
L_00420004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420034; } }
L_0042000C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420018u); set32(c.r[5], c.r[5].w[0] - 30032u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420018u) [[unlikely]] return; }
L_00420018:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420024u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420024u) [[unlikely]] return; }
L_00420024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420364; } }
L_0042002C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420364; } }
L_00420034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042003Cu);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x0042003Cu) [[unlikely]] return; }
L_0042003C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420364; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420054u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420054u) [[unlikely]] return; }
L_00420054:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420064u); set32(c.r[5], c.r[5].w[0] - 30064u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420064u) [[unlikely]] return; }
L_00420064:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420078u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420078u) [[unlikely]] return; }
L_00420078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420364; } }
L_00420080:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042008Cu); set32(c.r[6], 0u + 54u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0042008Cu) [[unlikely]] return; }
L_0042008C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420364; } }
L_0042009C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004200A4u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x004200A4u) [[unlikely]] return; }
L_004200A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 108u)));  goto L_004200B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004200C4; } }
L_004200B8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420364; } }
    goto L_004200C4;
L_004200C0:
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 1;
L_004200C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004200CCu);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x004200CCu) [[unlikely]] return; }
L_004200CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420364; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004200E4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004200E4u) [[unlikely]] return; }
L_004200E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004200F4u); set32(c.r[5], c.r[5].w[0] - 30064u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x004200F4u) [[unlikely]] return; }
L_004200F4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
L_00420100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420108u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420108u) [[unlikely]] return; }
L_00420108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420364; } }
L_00420110:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042011Cu); set32(c.r[6], 0u + 55u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0042011Cu) [[unlikely]] return; }
L_0042011C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420364; } }
L_0042012C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420134u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00420134u) [[unlikely]] return; }
L_00420134:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_0042015C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 400u);  goto L_00420154; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042017C; } }
L_00420154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420364; } }
L_0042015C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420168u); set32(c.r[5], c.r[5].w[0] - 30000u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420168u) [[unlikely]] return; }
L_00420168:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420174u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420174u) [[unlikely]] return; }
L_00420174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420364; } }
L_0042017C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420184u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x00420184u) [[unlikely]] return; }
L_00420184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420364; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042019Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0042019Cu) [[unlikely]] return; }
L_0042019C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201ACu); set32(c.r[5], c.r[5].w[0] - 30064u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x004201ACu) [[unlikely]] return; }
L_004201AC:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x004201C0u) [[unlikely]] return; }
L_004201C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420364; } }
L_004201C8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201D4u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004201D4u) [[unlikely]] return; }
L_004201D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201DCu);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x001B5C70u; return; } if (c.pc != 0x004201DCu) [[unlikely]] return; }
L_004201DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420364; } }
L_004201EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00420364; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420364; } }
L_0042020C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420214u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00420214u) [[unlikely]] return; }
L_00420214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420224u);  if (depth < kMaxDepth) unit_00C1(c, 541u, depth + 1u); else { c.pc = 0x00426EB0u; return; } if (c.pc != 0x00420224u) [[unlikely]] return; }
L_00420224:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420364; } }
L_00420234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042023Cu);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x0042023Cu) [[unlikely]] return; }
L_0042023C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042024Cu);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x0042024Cu) [[unlikely]] return; }
L_0042024C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420254u);  if (depth < kMaxDepth) unit_00C1(c, 544u, depth + 1u); else { c.pc = 0x00426F00u; return; } if (c.pc != 0x00420254u) [[unlikely]] return; }
L_00420254:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 600u);  goto L_00420268; }
    set32(c.r[3], 0u + 500u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420364; } }
L_00420268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420364; } }
L_00420270:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042027Cu); set32(c.r[6], 0u + 57u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0042027Cu) [[unlikely]] return; }
L_0042027C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420364; } }
L_0042028C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420294u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00420294u) [[unlikely]] return; }
L_00420294:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_004202A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004202C8; } }
L_004202A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004202B4u); set32(c.r[5], c.r[5].w[0] - 29968u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x004202B4u) [[unlikely]] return; }
L_004202B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004202C0u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x004202C0u) [[unlikely]] return; }
L_004202C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420364; } }
L_004202C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004202D0u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x004202D0u) [[unlikely]] return; }
L_004202D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420364; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004202E8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004202E8u) [[unlikely]] return; }
L_004202E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004202F8u); set32(c.r[5], c.r[5].w[0] - 30064u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x004202F8u) [[unlikely]] return; }
L_004202F8:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042030Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x0042030Cu) [[unlikely]] return; }
L_0042030C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420364; } }
L_00420314:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420320u); set32(c.r[6], 0u + 58u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420320u) [[unlikely]] return; }
L_00420320:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420364; } }
L_00420330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420338u); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00420338u) [[unlikely]] return; }
L_00420338:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_0042034C; }
    goto L_00420344;
L_00420340:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 1;
L_00420344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420364; } }
L_0042034C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420358u); set32(c.r[5], c.r[5].w[0] - 30000u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420358u) [[unlikely]] return; }
L_00420358:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420364u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420364u) [[unlikely]] return; }
L_00420364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00420368:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00420380:
    c.budget -= 2;
    {  goto L_00420390; }
L_00420390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 101u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420434; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420418; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004203CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004204E4; } }
L_004203CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203D4u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x004203D4u) [[unlikely]] return; }
L_004203D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004204E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203E4u);  if (depth < kMaxDepth) unit_00C1(c, 563u, depth + 1u); else { c.pc = 0x004270F0u; return; } if (c.pc != 0x004203E4u) [[unlikely]] return; }
L_004203E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 100u);  goto L_00420410; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203FCu); set32(c.r[5], c.r[5].w[0] - 29920u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x004203FCu) [[unlikely]] return; }
L_004203FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420408u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420408u) [[unlikely]] return; }
L_00420408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004204E0; } }
L_00420410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_004204E0; } }
L_00420418:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420424u); set32(c.r[6], 0u + 46u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420424u) [[unlikely]] return; }
L_00420424:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_004204E0; } }
L_00420434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042043Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0042043Cu) [[unlikely]] return; }
L_0042043C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_0042047C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_0042045C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042049C; } }
L_0042045C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420468u); set32(c.r[5], c.r[5].w[0] - 29888u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420468u) [[unlikely]] return; }
L_00420468:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420474u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420474u) [[unlikely]] return; }
L_00420474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004204E0; } }
L_0042047C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420488u); set32(c.r[5], c.r[5].w[0] - 29856u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420488u) [[unlikely]] return; }
L_00420488:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420494u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420494u) [[unlikely]] return; }
L_00420494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004204E0; } }
L_0042049C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204A4u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x004204A4u) [[unlikely]] return; }
L_004204A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004204E0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204BCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004204BCu) [[unlikely]] return; }
L_004204BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204CCu); set32(c.r[5], c.r[5].w[0] - 29824u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x004204CCu) [[unlikely]] return; }
L_004204CC:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x004204E0u) [[unlikely]] return; }
L_004204E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004204E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004204F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 401u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004207F4; } }
    set32(c.r[3], 0u + 400u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_004207D8; }
    set32(c.r[3], 0u + 301u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420750; }
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420734; }
    set32(c.r[3], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004206F8; } }
    set32(c.r[3], 0u + 202u);
    c.budget -= 1;
L_00420540:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004206D0; } }
    set32(c.r[3], 0u + 201u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_004206B0; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0042068C; }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_004205F0; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_004205D4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00420588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00420834; } }
L_00420588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420590u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00420590u) [[unlikely]] return; }
L_00420590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205A0u);  if (depth < kMaxDepth) unit_00C1(c, 555u, depth + 1u); else { c.pc = 0x00427010u; return; } if (c.pc != 0x004205A0u) [[unlikely]] return; }
L_004205A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 100u);  goto L_004205CC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205B8u); set32(c.r[5], c.r[5].w[0] - 29792u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x004205B8u) [[unlikely]] return; }
L_004205B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205C4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x004205C4u) [[unlikely]] return; }
L_004205C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420830; } }
L_004205CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420830; } }
L_004205D4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205E0u); set32(c.r[6], 0u + 49u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004205E0u) [[unlikely]] return; }
L_004205E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420830; } }
L_004205F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205F8u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x004205F8u) [[unlikely]] return; }
L_004205F8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_00420620; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_00420618; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420640; } }
L_00420618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420830; } }
L_00420620:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042062Cu); set32(c.r[5], c.r[5].w[0] - 29760u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0042062Cu) [[unlikely]] return; }
L_0042062C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420638u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420638u) [[unlikely]] return; }
L_00420638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420830; } }
L_00420640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420648u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x00420648u) [[unlikely]] return; }
L_00420648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420830; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420660u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420660u) [[unlikely]] return; }
L_00420660:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420670u); set32(c.r[5], c.r[5].w[0] - 29728u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420670u) [[unlikely]] return; }
L_00420670:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420684u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420684u) [[unlikely]] return; }
    goto L_00420684;
L_00420680:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00420684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420830; } }
L_0042068C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420698u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420698u) [[unlikely]] return; }
L_00420698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206A0u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x001B5C70u; return; } if (c.pc != 0x004206A0u) [[unlikely]] return; }
L_004206A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420830; } }
L_004206B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00420830; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420830; } }
L_004206D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206D8u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x004206D8u) [[unlikely]] return; }
L_004206D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206E8u);  if (depth < kMaxDepth) unit_00C1(c, 540u, depth + 1u); else { c.pc = 0x00426EA0u; return; } if (c.pc != 0x004206E8u) [[unlikely]] return; }
L_004206E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420830; } }
L_004206F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420700u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00420700u) [[unlikely]] return; }
L_00420700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420710u);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x00420710u) [[unlikely]] return; }
L_00420710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420718u);  if (depth < kMaxDepth) unit_00C1(c, 544u, depth + 1u); else { c.pc = 0x00426F00u; return; } if (c.pc != 0x00420718u) [[unlikely]] return; }
L_00420718:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 400u);  goto L_0042072C; }
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420830; } }
L_0042072C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420830; } }
L_00420734:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420740u); set32(c.r[6], 0u + 51u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420740u) [[unlikely]] return; }
L_00420740:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420830; } }
L_00420750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420758u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00420758u) [[unlikely]] return; }
L_00420758:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_0042076C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042078C; } }
L_0042076C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420778u); set32(c.r[5], c.r[5].w[0] - 29696u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420778u) [[unlikely]] return; }
L_00420778:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420784u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420784u) [[unlikely]] return; }
L_00420784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420830; } }
L_0042078C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420794u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x00420794u) [[unlikely]] return; }
L_00420794:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420830; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004207ACu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004207ACu) [[unlikely]] return; }
L_004207AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004207BCu); set32(c.r[5], c.r[5].w[0] - 29728u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x004207BCu) [[unlikely]] return; }
L_004207BC:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004207D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x004207D0u) [[unlikely]] return; }
L_004207D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420830; } }
L_004207D8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004207E4u); set32(c.r[6], 0u + 52u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004207E4u) [[unlikely]] return; }
L_004207E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420830; } }
L_004207F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004207FCu); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x004207FCu) [[unlikely]] return; }
L_004207FC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_00420810; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420830; } }
L_00420810:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042081Cu); set32(c.r[5], c.r[5].w[0] - 29664u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0042081Cu) [[unlikely]] return; }
L_0042081C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420830u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420830u) [[unlikely]] return; }
L_00420830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00420834:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00420840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 201u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00420A24; } }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420A08; }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420980; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420964; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00420928; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004208F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_004208D8; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_004208B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00420A5C; } }
L_004208B4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004208C0u); set32(c.r[6], 0u + 59u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004208C0u) [[unlikely]] return; }
L_004208C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004208C8u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x001B5C70u; return; } if (c.pc != 0x004208C8u) [[unlikely]] return; }
L_004208C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420A58; } }
L_004208D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00420A58; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420A58; } }
L_004208F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420900u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00420900u) [[unlikely]] return; }
L_00420900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420A58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420910u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x00420910u) [[unlikely]] return; }
L_00420910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420918u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 311u, depth + 1u); else { c.pc = 0x00422280u; return; } if (c.pc != 0x00420918u) [[unlikely]] return; }
L_00420918:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420A58; } }
L_00420928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420930u);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x00420930u) [[unlikely]] return; }
L_00420930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420A58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420940u);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x00420940u) [[unlikely]] return; }
L_00420940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420948u);  if (depth < kMaxDepth) unit_00C0(c, 304u, depth + 1u); else { c.pc = 0x004221A0u; return; } if (c.pc != 0x00420948u) [[unlikely]] return; }
L_00420948:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 200u);  goto L_0042095C; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420A58; } }
L_0042095C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420A58; } }
L_00420964:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420970u); set32(c.r[6], 0u + 43u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420970u) [[unlikely]] return; }
L_00420970:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420A58; } }
L_00420980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420988u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00420988u) [[unlikely]] return; }
L_00420988:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_0042099C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004209BC; } }
L_0042099C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004209A8u); set32(c.r[5], c.r[5].w[0] - 29632u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x004209A8u) [[unlikely]] return; }
L_004209A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004209B4u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x004209B4u) [[unlikely]] return; }
L_004209B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420A58; } }
L_004209BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004209C4u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x004209C4u) [[unlikely]] return; }
L_004209C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420A58; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004209DCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004209DCu) [[unlikely]] return; }
L_004209DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004209ECu); set32(c.r[5], c.r[5].w[0] - 29600u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x004209ECu) [[unlikely]] return; }
L_004209EC:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420A00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420A00u) [[unlikely]] return; }
L_00420A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420A58; } }
L_00420A08:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420A14u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420A14u) [[unlikely]] return; }
L_00420A14:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420A58; } }
L_00420A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420A2Cu); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00420A2Cu) [[unlikely]] return; }
L_00420A2C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_00420A40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420A58; } }
L_00420A40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420A4Cu); set32(c.r[5], c.r[5].w[0] - 29568u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420A4Cu) [[unlikely]] return; }
L_00420A4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420A58u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420A58u) [[unlikely]] return; }
L_00420A58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00420A5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00420A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 101u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420C30; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_00420BC4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00420B30; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00420B08; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_00420AC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00420CBC; } }
L_00420AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420ACCu);  if (depth < kMaxDepth) unit_00C1(c, 46u, depth + 1u); else { c.pc = 0x00424680u; return; } if (c.pc != 0x00420ACCu) [[unlikely]] return; }
L_00420ACC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 108u)));  goto L_00420AFC; }
    set32(c.r[6], ld32((c.r[16].w[0] + 124u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420AE8u); set32(c.r[5], c.r[5].w[0] - 29536u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420AE8u) [[unlikely]] return; }
L_00420AE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420AF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420AF4u) [[unlikely]] return; }
L_00420AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420CB8; } }
L_00420AFC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420CB8; } }
L_00420B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B10u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00420B10u) [[unlikely]] return; }
L_00420B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B20u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_00C1(c, 542u, depth + 1u); else { c.pc = 0x00426EC0u; return; } if (c.pc != 0x00420B20u) [[unlikely]] return; }
L_00420B20:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420CB8; } }
L_00420B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B38u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00420B38u) [[unlikely]] return; }
L_00420B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B48u);  if (depth < kMaxDepth) unit_00C1(c, 548u, depth + 1u); else { c.pc = 0x00426F50u; return; } if (c.pc != 0x00420B48u) [[unlikely]] return; }
L_00420B48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 124u)));  goto L_00420B98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B58u);  if (depth < kMaxDepth) unit_00C1(c, 557u, depth + 1u); else { c.pc = 0x00427050u; return; } if (c.pc != 0x00420B58u) [[unlikely]] return; }
L_00420B58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 124u)));  goto L_00420B74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B68u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_00C1(c, 51u, depth + 1u); else { c.pc = 0x00424730u; return; } if (c.pc != 0x00420B68u) [[unlikely]] return; }
L_00420B68:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420CB8; } }
L_00420B74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B84u); set32(c.r[5], c.r[5].w[0] - 29504u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420B84u) [[unlikely]] return; }
L_00420B84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420B90u) [[unlikely]] return; }
L_00420B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420CB8; } }
L_00420B98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420BA8u); set32(c.r[5], c.r[5].w[0] - 29472u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420BA8u) [[unlikely]] return; }
L_00420BA8:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420BBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420BBCu) [[unlikely]] return; }
L_00420BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420CB8; } }
L_00420BC4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420C14; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420C00; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420BEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 108u)));  if (t) { goto L_00420C24; } }
L_00420BEC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420BF8u); set32(c.r[6], 0u + 61u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420BF8u) [[unlikely]] return; }
L_00420BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420C20; } }
L_00420C00:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420C0Cu); set32(c.r[6], 0u + 62u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420C0Cu) [[unlikely]] return; }
L_00420C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420C20; } }
L_00420C14:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420C20u); set32(c.r[6], 0u + 63u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420C20u) [[unlikely]] return; }
L_00420C20:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 1;
L_00420C24:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00420CB8; } }
L_00420C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420C38u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00420C38u) [[unlikely]] return; }
L_00420C38:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 124u)));  goto L_00420C4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420C70; } }
L_00420C4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420C5Cu); set32(c.r[5], c.r[5].w[0] - 29536u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420C5Cu) [[unlikely]] return; }
L_00420C5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420C68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420C68u) [[unlikely]] return; }
L_00420C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420CB8; } }
L_00420C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420C78u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x00420C78u) [[unlikely]] return; }
L_00420C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420CB8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420C90u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420C90u) [[unlikely]] return; }
L_00420C90:
    set32(c.r[6], ld32((c.r[16].w[0] + 124u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420CA4u); set32(c.r[5], c.r[5].w[0] - 29472u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00420CA4u) [[unlikely]] return; }
L_00420CA4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420CB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00420CB8u) [[unlikely]] return; }
L_00420CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00420CBC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00420CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00420D38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15712u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00420D20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00420D20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420D20u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00420D20u) [[unlikely]] return; }
L_00420D20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00420D3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420D38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00420D38u) [[unlikely]] return; }
L_00420D38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00420D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00420D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420D64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 441u, depth + 1u); else { c.pc = 0x004231B0u; return; } if (c.pc != 0x00420D64u) [[unlikely]] return; }
L_00420D64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15776u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420D7Cu); st32((c.r[16].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x00420D7Cu) [[unlikely]] return; }
L_00420D7C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420D8Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 305u, depth + 1u); else { c.pc = 0x004221B0u; return; } if (c.pc != 0x00420D8Cu) [[unlikely]] return; }
L_00420D8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 18440u));
    c.f[1] = ld32((c.r[3].w[0] + 18444u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 18448u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00420DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 701u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0042127C; } }
    set32(c.r[3], 0u + 700u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00421264; }
    set32(c.r[5], 0u + 601u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00421248; }
    set32(c.r[5], 0u + 600u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_004211C4; }
    set32(c.r[5], 0u + 501u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[16].w[0] + 80u);  goto L_00421184; }
    set32(c.r[5], 0u + 500u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[5].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00421168; }
    set32(c.r[4], 0u + 402u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00421104; }
    set32(c.r[4], 0u + 401u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_004210E8; }
    set32(c.r[7], 0u + 400u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_004210B8; } }
    set32(c.r[4], 0u + 301u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[4].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 116u)));  goto L_00421048; }
    set32(c.r[6], 0u + 300u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_00420FF0; }
    set32(c.r[4], 0u + 201u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[4].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 116u)));  goto L_00420FA4; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_00420F44; }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420EF8; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00420EDC; }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00420EB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004212A8; } }
L_00420EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420EBCu);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x00420EBCu) [[unlikely]] return; }
L_00420EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004212A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420ECCu);  if (depth < kMaxDepth) unit_00C0(c, 358u, depth + 1u); else { c.pc = 0x004225F0u; return; } if (c.pc != 0x00420ECCu) [[unlikely]] return; }
L_00420ECC:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[3], 0u + 100u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_00420EDC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420EE8u); set32(c.r[6], 0u + 75u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00420EE8u) [[unlikely]] return; }
L_00420EE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_00420EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420F00u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00420F00u) [[unlikely]] return; }
L_00420F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004212A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420F10u); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00420F10u) [[unlikely]] return; }
L_00420F10:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 700u);  goto L_00420F3C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_00420F30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420F38; } }
L_00420F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_00420F38:
    set32(c.r[3], 0u + 700u);
    c.budget -= 1;
L_00420F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_00420F44:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 132u);  goto L_00420F64; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00420F5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00420F5Cu) [[unlikely]] return; }
L_00420F5C:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], 0u + 132u);
    c.budget -= 2;
L_00420F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420F6Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00420F6Cu) [[unlikely]] return; }
L_00420F6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), c.r[4].w[0]);  goto L_00420F94; }
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420F8Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 297u, depth + 1u); else { c.pc = 0x0041ED30u; return; } if (c.pc != 0x00420F8Cu) [[unlikely]] return; }
L_00420F8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 2;
L_00420F94:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_00420FA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004212A4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  goto L_00420FCC; }
    st32((c.r[16].w[0] + 76u), c.r[6].w[0]);
    c.budget -= 1;
L_00420FCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004212A4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00420FE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00420FE8u) [[unlikely]] return; }
L_00420FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), 0u);  if (t) { goto L_004212A4; } }
L_00420FF0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 120u);  goto L_00421010; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00421008u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00421008u) [[unlikely]] return; }
L_00421008:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], 0u + 120u);
    c.budget -= 2;
L_00421010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421018u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00421018u) [[unlikely]] return; }
L_00421018:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), c.r[4].w[0]);  goto L_00421038; }
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421030u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 417u, depth + 1u); else { c.pc = 0x00422D20u; return; } if (c.pc != 0x00421030u) [[unlikely]] return; }
L_00421030:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 2;
L_00421038:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0042103C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_00421048:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004212A4; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], 0u + 200u);  goto L_00421090; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  goto L_00421094; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 76u), c.r[7].w[0]);  goto L_00421094; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 76u), c.r[7].w[0]);  goto L_00421094; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 1;
L_00421090:
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_00421094:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004212A4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004210B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004210B0u) [[unlikely]] return; }
L_004210B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), 0u);  if (t) { goto L_004212A4; } }
L_004210B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004210C0u);  if (depth < kMaxDepth) unit_00C0(c, 316u, depth + 1u); else { c.pc = 0x004222F0u; return; } if (c.pc != 0x004210C0u) [[unlikely]] return; }
L_004210C0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 120u), c.r[3].w[0]);  if (t) { goto L_004210D8; } }
    set32(c.r[3], 0u + 500u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_004210D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_004210E8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004210F4u); set32(c.r[6], 0u + 79u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004210F4u) [[unlikely]] return; }
L_004210F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_00421104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042110Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0042110Cu) [[unlikely]] return; }
L_0042110C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 700u);  goto L_00421134; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 500u);  goto L_0042112C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042113C; } }
L_0042112C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_00421134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_0042113C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421144u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x00421144u) [[unlikely]] return; }
L_00421144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004212A4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042115Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0042115Cu) [[unlikely]] return; }
L_0042115C:
    set32(c.r[3], 0u + 700u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_00421168:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421174u); set32(c.r[5], c.r[5].w[0] + 18456u);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x00421174u) [[unlikely]] return; }
L_00421174:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_00421184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042118Cu);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0042118Cu) [[unlikely]] return; }
L_0042118C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004212A4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 600u);  goto L_004211BC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 600u);
    c.budget -= 5;
L_004211BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_004211C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 120u)));  goto L_0042120C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_004211F8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004211F0u); set32(c.r[6], 0u + 77u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004211F0u) [[unlikely]] return; }
L_004211F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_0042123C; } }
L_004211F8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421204u); set32(c.r[6], 0u + 81u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00421204u) [[unlikely]] return; }
L_00421204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00421238; } }
L_0042120C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0042122C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421224u); set32(c.r[6], 0u + 78u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00421224u) [[unlikely]] return; }
L_00421224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00421238; } }
L_0042122C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421238u); set32(c.r[6], 0u + 82u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00421238u) [[unlikely]] return; }
L_00421238:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0042123C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_00421248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421250u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00421250u) [[unlikely]] return; }
L_00421250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004212A4; } }
    set32(c.r[3], 0u + 700u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_00421264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042126Cu);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x0042126Cu) [[unlikely]] return; }
L_0042126C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004212A4; } }
L_0042127C:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004212A4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_004212A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004212A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004212C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0042138C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0042136C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0042134C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 120u)));  goto L_00421308; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004213CC; } }
L_00421308:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00421328; }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421320u); set32(c.r[6], 0u + 76u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00421320u) [[unlikely]] return; }
L_00421320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00421334; } }
L_00421328:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421334u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00421334u) [[unlikely]] return; }
L_00421334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042133Cu);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x001B5C70u; return; } if (c.pc != 0x0042133Cu) [[unlikely]] return; }
L_0042133C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_004213C8; } }
L_0042134C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421354u);  if (depth < kMaxDepth) unit_00C0(c, 331u, depth + 1u); else { c.pc = 0x00422440u; return; } if (c.pc != 0x00421354u) [[unlikely]] return; }
L_00421354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042135Cu);  if (depth < kMaxDepth) unit_00C0(c, 347u, depth + 1u); else { c.pc = 0x00422530u; return; } if (c.pc != 0x0042135Cu) [[unlikely]] return; }
L_0042135C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_004213C8; } }
L_0042136C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421374u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x00421374u) [[unlikely]] return; }
L_00421374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042137Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 311u, depth + 1u); else { c.pc = 0x00422280u; return; } if (c.pc != 0x0042137Cu) [[unlikely]] return; }
L_0042137C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_004213C8; } }
L_0042138C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421394u);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x00421394u) [[unlikely]] return; }
L_00421394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004213C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004213A4u);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x004213A4u) [[unlikely]] return; }
L_004213A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004213ACu);  if (depth < kMaxDepth) unit_00C0(c, 304u, depth + 1u); else { c.pc = 0x004221A0u; return; } if (c.pc != 0x004213ACu) [[unlikely]] return; }
L_004213AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004213C0; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_004213C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004213C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x004213C8u) [[unlikely]] return; }
L_004213C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004213CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004213E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00421448; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15776u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00421430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00421430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421430u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00421430u) [[unlikely]] return; }
L_00421430:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0042144C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421448u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00421448u) [[unlikely]] return; }
L_00421448:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042144C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00421460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421474u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 441u, depth + 1u); else { c.pc = 0x004231B0u; return; } if (c.pc != 0x00421474u) [[unlikely]] return; }
L_00421474:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D4C0000u);
    set32(c.r[3], c.r[3].w[0] + 15904u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21331ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 132u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[5], c.r[5].w[0] + 18472u);
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004214DCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x004214DCu) [[unlikely]] return; }
L_004214DC:
    st32((c.r[28].w[0] - 30132u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00421500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00421630; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15904u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_0042155C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 132u), 0u);  goto L_00421558; }
    set32(c.r[5], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00421554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421550u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00421550u) [[unlikely]] return; }
L_00421550:
    st32((c.r[17].w[0] + 136u), 0u);
    c.budget -= 1;
L_00421554:
    st32((c.r[17].w[0] + 132u), 0u);
    c.budget -= 1;
L_00421558:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_0042155C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 156u)));  goto L_0042158C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 148u), 0u);  goto L_00421588; }
    set32(c.r[5], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00421584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421580u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00421580u) [[unlikely]] return; }
L_00421580:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_00421584:
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 1;
L_00421588:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_0042158C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  goto L_004215B4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 156u), 0u);  goto L_004215B0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004215ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004215ACu) [[unlikely]] return; }
L_004215AC:
    st32((c.r[17].w[0] + 156u), 0u);
    c.budget -= 1;
L_004215B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_004215B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30132u)));  goto L_004215DC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 160u), 0u);  goto L_004215D8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004215D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004215D4u) [[unlikely]] return; }
L_004215D4:
    st32((c.r[17].w[0] + 160u), 0u);
    c.budget -= 1;
L_004215D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30132u)));
    c.budget -= 1;
L_004215DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_004215E8; } }
    st32((c.r[28].w[0] - 30132u), 0u);
    c.budget -= 1;
L_004215E8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0042161C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00421618; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421618u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00421618u) [[unlikely]] return; }
L_00421618:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0042161C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00421634; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421630u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00421630u) [[unlikely]] return; }
L_00421630:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00421634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00421650:
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 160u)));  goto L_0042167C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004216A4; } }
L_00421678:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 1;
L_0042167C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004216A4; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004216A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004216A4; } }
L_004216A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004216A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004216B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00421724; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_004216DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00421798; } }
L_004216DC:
    set32(c.r[6], 0u + 27u);
    set32(c.r[5], c.r[5].w[0] - 29440u);
    set32(c.r[7], 0u + 5u);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004216F4u); set32(c.r[10], 0u + 17u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x004216F4u) [[unlikely]] return; }
L_004216F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004216FCu);  if (depth < kMaxDepth) unit_00C0(c, 318u, depth + 1u); else { c.pc = 0x00422320u; return; } if (c.pc != 0x004216FCu) [[unlikely]] return; }
L_004216FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421704u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 521u, depth + 1u); else { c.pc = 0x00426CC0u; return; } if (c.pc != 0x00421704u) [[unlikely]] return; }
L_00421704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042170Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 409u, depth + 1u); else { c.pc = 0x00422C30u; return; } if (c.pc != 0x0042170Cu) [[unlikely]] return; }
L_0042170C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421714u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 378u, depth + 1u); else { c.pc = 0x004228A0u; return; } if (c.pc != 0x00421714u) [[unlikely]] return; }
L_00421714:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421794; } }
L_00421724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042172Cu);  if (depth < kMaxDepth) unit_00C0(c, 412u, depth + 1u); else { c.pc = 0x00422C70u; return; } if (c.pc != 0x0042172Cu) [[unlikely]] return; }
L_0042172C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042173Cu);  if (depth < kMaxDepth) unit_00C0(c, 412u, depth + 1u); else { c.pc = 0x00422C70u; return; } if (c.pc != 0x0042173Cu) [[unlikely]] return; }
L_0042173C:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00421794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421758u);  if (depth < kMaxDepth) unit_00C0(c, 381u, depth + 1u); else { c.pc = 0x004228E0u; return; } if (c.pc != 0x00421758u) [[unlikely]] return; }
L_00421758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421768u);  if (depth < kMaxDepth) unit_00C0(c, 381u, depth + 1u); else { c.pc = 0x004228E0u; return; } if (c.pc != 0x00421768u) [[unlikely]] return; }
L_00421768:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00421794; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421794u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00421794u) [[unlikely]] return; }
L_00421794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00421798:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004217B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  goto L_00421860; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_004217E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0042188C; } }
L_004217E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_00421804; }
    set32(c.r[5], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00421800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004217FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x004217FCu) [[unlikely]] return; }
L_004217FC:
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 1;
L_00421800:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 1;
L_00421804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421810u); c.r[5].d[0] = c.r[2].d[0] | 12536ull;  if (depth < kMaxDepth) unit_00C0(c, 476u, depth + 1u); else { c.pc = 0x00423980u; return; } if (c.pc != 0x00421810u) [[unlikely]] return; }
L_00421810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_00421888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421820u); set32(c.r[4], 0u + 200u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00421820u) [[unlikely]] return; }
L_00421820:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 140u), c.r[4].w[0]);  goto L_00421850; }
    set32(c.r[8], ld32((c.r[16].w[0] + 144u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 29336u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421848u); set32(c.r[7], c.r[7].w[0] - 29320u);  if (depth < kMaxDepth) unit_00BA(c, 265u, depth + 1u); else { c.pc = 0x0040A5D0u; return; } if (c.pc != 0x00421848u) [[unlikely]] return; }
L_00421848:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 140u), c.r[4].w[0]);
    c.budget -= 2;
L_00421850:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421888; } }
L_00421860:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00421888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042187Cu);  if (depth < kMaxDepth) unit_00C0(c, 328u, depth + 1u); else { c.pc = 0x00422410u; return; } if (c.pc != 0x0042187Cu) [[unlikely]] return; }
L_0042187C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00421888u) [[unlikely]] return; }
L_00421888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042188C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004218A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004218C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00421918; } }
L_004218C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_004218E4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004218DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004218DCu) [[unlikely]] return; }
L_004218DC:
    st32((c.r[16].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 2;
L_004218E4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00421908; }
    set32(c.r[5], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00421904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421900u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00421900u) [[unlikely]] return; }
L_00421900:
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 1;
L_00421904:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00421908:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421914u); st32((c.r[16].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00421914u) [[unlikely]] return; }
L_00421914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00421918:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00421930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 501u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00421C78; } }
    set32(c.r[4], 0u + 500u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00421C44; }
    set32(c.r[3], 0u + 400u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00421C38; }
    set32(c.r[3], 0u + 301u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00421BFC; } }
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00421BC0; } }
    set32(c.r[3], 0u + 202u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 156u)));  goto L_00421B7C; }
    set32(c.r[3], 0u + 201u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 156u)));  goto L_00421B10; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00421A34; }
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  goto L_00421A20; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  goto L_00421A04; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 164u)));  goto L_004219C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00421C84; } }
L_004219C8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 108u)));  goto L_004219F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004219D8u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004219D8u) [[unlikely]] return; }
L_004219D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 164u), c.r[4].w[0]);  goto L_004219F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004219ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 163u, depth + 1u); else { c.pc = 0x0041D810u; return; } if (c.pc != 0x004219ECu) [[unlikely]] return; }
L_004219EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    c.budget -= 2;
L_004219F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 1;
L_004219F8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421C80; } }
L_00421A04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00421C80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[5].w[0]);  if (t) { goto L_00421C80; } }
L_00421A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421A28u);  if (depth < kMaxDepth) unit_00C1(c, 640u, depth + 1u); else { c.pc = 0x004278E0u; return; } if (c.pc != 0x00421A28u) [[unlikely]] return; }
L_00421A28:
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421C80; } }
L_00421A34:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00421A58; }
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00421A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421A50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00421A50u) [[unlikely]] return; }
L_00421A50:
    st32((c.r[16].w[0] + 152u), 0u);
    c.budget -= 1;
L_00421A54:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_00421A58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421A64u); c.r[5].d[0] = c.r[2].d[0] | 12536ull;  if (depth < kMaxDepth) unit_00C0(c, 476u, depth + 1u); else { c.pc = 0x00423980u; return; } if (c.pc != 0x00421A64u) [[unlikely]] return; }
L_00421A64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_00421C80; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 136u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421A80u); c.r[6].d[0] = c.r[2].d[0] | 12536ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00421A80u) [[unlikely]] return; }
L_00421A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421A88u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00421A88u) [[unlikely]] return; }
L_00421A88:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421A98u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00421A98u) [[unlikely]] return; }
L_00421A98:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421AA8u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00421AA8u) [[unlikely]] return; }
L_00421AA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421AB8u); st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00421AB8u) [[unlikely]] return; }
L_00421AB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421AC8u); st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00421AC8u) [[unlikely]] return; }
L_00421AC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421AD8u); st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00421AD8u) [[unlikely]] return; }
L_00421AD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421AE8u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00421AE8u) [[unlikely]] return; }
L_00421AE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421AF8u); st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00421AF8u) [[unlikely]] return; }
L_00421AF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421C80; } }
L_00421B10:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 48u);  goto L_00421B38; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 156u), 0u);  goto L_00421B34; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00421B30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00421B30u) [[unlikely]] return; }
L_00421B30:
    st32((c.r[16].w[0] + 156u), 0u);
    c.budget -= 1;
L_00421B34:
    set32(c.r[4], 0u + 48u);
    c.budget -= 1;
L_00421B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421B40u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00421B40u) [[unlikely]] return; }
L_00421B40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 156u), c.r[4].w[0]);  goto L_00421B6C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[7].d[0] = c.r[2].d[0] | 12531ull;
    c.r[5].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421B64u); set32(c.r[6], c.r[3].w[0] + 5u);  if (depth < kMaxDepth) unit_0025(c, 479u, depth + 1u); else { c.pc = 0x001B7890u; return; } if (c.pc != 0x00421B64u) [[unlikely]] return; }
L_00421B64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 156u), c.r[4].w[0]);
    c.budget -= 2;
L_00421B6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421C80; } }
L_00421B7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00421C80; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 300u);  goto L_00421BB8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 156u), 0u);  goto L_00421BB4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00421BB0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00421BB0u) [[unlikely]] return; }
L_00421BB0:
    st32((c.r[16].w[0] + 156u), 0u);
    c.budget -= 1;
L_00421BB4:
    set32(c.r[3], 0u + 300u);
    c.budget -= 1;
L_00421BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421C80; } }
L_00421BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421BC8u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00421BC8u) [[unlikely]] return; }
L_00421BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421C80; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.r[5].d[0] = c.r[2].d[0] | 12536ull;
    set32(c.r[6], c.r[3].w[0] + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421BECu); set32(c.r[7], c.r[3].w[0] + 72u);  if (depth < kMaxDepth) unit_00C1(c, 537u, depth + 1u); else { c.pc = 0x00426E20u; return; } if (c.pc != 0x00421BECu) [[unlikely]] return; }
L_00421BEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421C80; } }
L_00421BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421C04u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00421C04u) [[unlikely]] return; }
L_00421C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421C14u);  if (depth < kMaxDepth) unit_00C1(c, 548u, depth + 1u); else { c.pc = 0x00426F50u; return; } if (c.pc != 0x00421C14u) [[unlikely]] return; }
L_00421C14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 400u);  goto L_00421C30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421C24u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 323u, depth + 1u); else { c.pc = 0x00422360u; return; } if (c.pc != 0x00421C24u) [[unlikely]] return; }
L_00421C24:
    set32(c.r[3], 0u + 500u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421C80; } }
L_00421C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421C80; } }
L_00421C38:
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[4].w[0]);  if (t) { goto L_00421C80; } }
L_00421C44:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), 0u);  goto L_00421C68; }
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00421C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421C60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00421C60u) [[unlikely]] return; }
L_00421C60:
    st32((c.r[16].w[0] + 152u), 0u);
    c.budget -= 1;
L_00421C64:
    st32((c.r[16].w[0] + 148u), 0u);
    c.budget -= 1;
L_00421C68:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421C80; } }
L_00421C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421C80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00421C80u) [[unlikely]] return; }
L_00421C80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00421C84:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00421C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 301u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00421ED8; } }
    set32(c.r[4], 0u + 300u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00421EA4; }
    set32(c.r[3], 0u + 201u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  goto L_00421E28; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  goto L_00421DBC; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00421DB0; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00421D7C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00421D4C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00421D04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00421EE4; } }
L_00421D04:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00421D28; }
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00421D24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421D20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00421D20u) [[unlikely]] return; }
L_00421D20:
    st32((c.r[16].w[0] + 152u), 0u);
    c.budget -= 1;
L_00421D24:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_00421D28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421D34u); c.r[5].d[0] = c.r[2].d[0] | 12536ull;  if (depth < kMaxDepth) unit_00C0(c, 476u, depth + 1u); else { c.pc = 0x00423980u; return; } if (c.pc != 0x00421D34u) [[unlikely]] return; }
L_00421D34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_00421EE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421EE0; } }
L_00421D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421D54u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00421D54u) [[unlikely]] return; }
L_00421D54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421EE0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421D6Cu); c.r[5].d[0] = c.r[2].d[0] | 12536ull;  if (depth < kMaxDepth) unit_00C1(c, 539u, depth + 1u); else { c.pc = 0x00426E80u; return; } if (c.pc != 0x00421D6Cu) [[unlikely]] return; }
L_00421D6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421EE0; } }
L_00421D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421D84u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00421D84u) [[unlikely]] return; }
L_00421D84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421EE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421D94u);  if (depth < kMaxDepth) unit_00C1(c, 548u, depth + 1u); else { c.pc = 0x00426F50u; return; } if (c.pc != 0x00421D94u) [[unlikely]] return; }
L_00421D94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 100u);  goto L_00421DA8; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421EE0; } }
L_00421DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421EE0; } }
L_00421DB0:
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[4].w[0]);  if (t) { goto L_00421EE0; } }
L_00421DBC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 48u);  goto L_00421DE4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 160u), 0u);  goto L_00421DE0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00421DDCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00421DDCu) [[unlikely]] return; }
L_00421DDC:
    st32((c.r[16].w[0] + 160u), 0u);
    c.budget -= 1;
L_00421DE0:
    set32(c.r[4], 0u + 48u);
    c.budget -= 1;
L_00421DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421DECu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00421DECu) [[unlikely]] return; }
L_00421DEC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 160u), c.r[4].w[0]);  goto L_00421E18; }
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[7].d[0] = c.r[2].d[0] | 12531ull;
    c.r[5].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421E10u); set32(c.r[6], c.r[3].w[0] + 5u);  if (depth < kMaxDepth) unit_0025(c, 486u, depth + 1u); else { c.pc = 0x001B79C0u; return; } if (c.pc != 0x00421E10u) [[unlikely]] return; }
L_00421E10:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 160u), c.r[4].w[0]);
    c.budget -= 2;
L_00421E18:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421EE0; } }
L_00421E28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00421EE0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_00421E64; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 160u), 0u);  goto L_00421E60; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00421E5Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00421E5Cu) [[unlikely]] return; }
L_00421E5C:
    st32((c.r[16].w[0] + 160u), 0u);
    c.budget -= 1;
L_00421E60:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 1;
L_00421E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421E6Cu);  if (depth < kMaxDepth) unit_00C1(c, 642u, depth + 1u); else { c.pc = 0x00427910u; return; } if (c.pc != 0x00421E6Cu) [[unlikely]] return; }
L_00421E6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  goto L_00421E88; }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 300u);
    st32((c.r[16].w[0] + 100u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421EE0; } }
L_00421E88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421E98u); c.r[6].d[0] = c.r[2].d[0] | 12536ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00421E98u) [[unlikely]] return; }
L_00421E98:
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421EE0; } }
L_00421EA4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), 0u);  goto L_00421EC8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00421EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421EC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00421EC0u) [[unlikely]] return; }
L_00421EC0:
    st32((c.r[16].w[0] + 152u), 0u);
    c.budget -= 1;
L_00421EC4:
    st32((c.r[16].w[0] + 148u), 0u);
    c.budget -= 1;
L_00421EC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00421EE0; } }
L_00421ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421EE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00421EE0u) [[unlikely]] return; }
L_00421EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00421EE4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00421EF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421F18u); set32(c.r[4], c.r[18].w[0] + 80u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x00421F18u) [[unlikely]] return; }
L_00421F18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421F2C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00421F44; }
L_00421F2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421F3Cu); set32(c.r[5], c.r[5].w[0] - 29296u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00421F3Cu) [[unlikely]] return; }
L_00421F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00421F70; } }
L_00421F44:
    st32((c.r[18].w[0] + 132u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18488u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421F5Cu); st32((c.r[18].w[0] + 144u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x00421F5Cu) [[unlikely]] return; }
L_00421F5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421F6Cu); set32(c.r[5], c.r[5].w[0] - 29272u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00421F6Cu) [[unlikely]] return; }
L_00421F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00421F70:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00421F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421FA8u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x00421FA8u) [[unlikely]] return; }
L_00421FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421FBC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00421FD4; } }
L_00421FBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421FCCu); set32(c.r[5], c.r[5].w[0] - 29248u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00421FCCu) [[unlikely]] return; }
L_00421FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00422024; } }
L_00421FD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00422020; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421FF0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x00421FF0u) [[unlikely]] return; }
L_00421FF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00422010; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042200Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042200Cu) [[unlikely]] return; }
L_0042200C:
    st32((c.r[16].w[0] + 140u), 0u);
    c.budget -= 1;
L_00422010:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422020u); set32(c.r[5], c.r[5].w[0] - 29224u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00422020u) [[unlikely]] return; }
L_00422020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00422024:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422050u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x00422050u) [[unlikely]] return; }
L_00422050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00422064; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0042207C; }
L_00422064:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422074u); set32(c.r[5], c.r[5].w[0] - 29200u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00422074u) [[unlikely]] return; }
L_00422074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004220A4; } }
L_0042207C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18520u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422090u); st32((c.r[17].w[0] + 148u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x00422090u) [[unlikely]] return; }
L_00422090:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004220A0u); set32(c.r[5], c.r[5].w[0] - 29176u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x004220A0u) [[unlikely]] return; }
L_004220A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004220A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004220C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004220E0u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x004220E0u) [[unlikely]] return; }
L_004220E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004220F4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0042210C; }
L_004220F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422104u); set32(c.r[5], c.r[5].w[0] - 29152u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00422104u) [[unlikely]] return; }
L_00422104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00422134; } }
L_0042210C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18536u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422120u); st32((c.r[17].w[0] + 148u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x00422120u) [[unlikely]] return; }
L_00422120:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422130u); set32(c.r[5], c.r[5].w[0] - 29128u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00422130u) [[unlikely]] return; }
L_00422130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00422134:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00422150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422168u); set32(c.r[4], 0u + 168u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00422168u) [[unlikely]] return; }
L_00422168:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00422180; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042217Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 205u, depth + 1u); else { c.pc = 0x00421460u; return; } if (c.pc != 0x0042217Cu) [[unlikely]] return; }
L_0042217C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00422180:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422190:
    set32(c.r[2], ld32((c.r[28].w[0] - 30132u)));
    c.budget -= 3;
    { set32(c.r[4], c.r[2].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00142090u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 170u, depth); }
L_004221A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30132u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 100u)));  c.pc = t; return; }
L_004221B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 52u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004221DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004221DCu) [[unlikely]] return; }
L_004221DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00422258; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004221F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x004221F0u) [[unlikely]] return; }
L_004221F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x494C0000u);
    set32(c.r[3], c.r[3].w[0] + 15840u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21331ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422218u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00422218u) [[unlikely]] return; }
L_00422218:
    set32(c.r[4], ld32((c.r[28].w[0] - 30132u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422228u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 279u, depth + 1u); else { c.pc = 0x00421EF0u; return; } if (c.pc != 0x00422228u) [[unlikely]] return; }
L_00422228:
    set32(c.r[4], ld32((c.r[28].w[0] - 30128u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 30128u), c.r[16].w[0]);  goto L_00422248; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00422244u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00422244u) [[unlikely]] return; }
L_00422244:
    st32((c.r[28].w[0] - 30128u), c.r[16].w[0]);
    c.budget -= 1;
L_00422248:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00422258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00422280:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30132u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00422030u | kUnwind; return; } goto L_00422030; }
L_00422290:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30132u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004220C0u | kUnwind; return; } goto L_004220C0; }
L_004222A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30132u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 136u)));  c.pc = t; return; }
L_004222B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004222C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x004222C4u) [[unlikely]] return; }
L_004222C4:
    set32(c.r[3], 0u + 4556u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].d[0] = 0ull | 54212ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004222F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422300u);  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x00422300u) [[unlikely]] return; }
L_00422300:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[1].d[0] = c.r[1].d[0] | 10756ull;
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422330u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 483u, depth + 1u); else { c.pc = 0x00423A30u; return; } if (c.pc != 0x00422330u) [[unlikely]] return; }
L_00422330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422338u);  if (depth < kMaxDepth) unit_00C1(c, 386u, depth + 1u); else { c.pc = 0x00426180u; return; } if (c.pc != 0x00422338u) [[unlikely]] return; }
L_00422338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422340u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 261u, depth + 1u); else { c.pc = 0x004257E0u; return; } if (c.pc != 0x00422340u) [[unlikely]] return; }
L_00422340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422348u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 323u, depth + 1u); else { c.pc = 0x00422360u; return; } if (c.pc != 0x00422348u) [[unlikely]] return; }
L_00422348:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422360:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30132u)));  goto L_004223A4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30132u)));
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 4;
L_00422378:
    set32(c.r[4], ld32((c.r[28].w[0] - 30132u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 116u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422378u | kUnwind; return; } goto L_00422378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004223A8; } }
L_004223A4:
    st32((c.r[3].w[0] + 112u), 0u);
    c.budget -= 1;
L_004223A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004223B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30132u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 112u)));  c.pc = t; return; }
L_004223C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30132u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004223EC; } }
L_004223CC:
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_004223EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004223FC; } }
L_004223EC:
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 136u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004223CCu | kUnwind; return; } goto L_004223CC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004223FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00422410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422420u);  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x00422420u) [[unlikely]] return; }
L_00422420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422428u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 584u, depth + 1u); else { c.pc = 0x00427300u; return; } if (c.pc != 0x00422428u) [[unlikely]] return; }
L_00422428:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422450u);  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x00422450u) [[unlikely]] return; }
L_00422450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422458u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 587u, depth + 1u); else { c.pc = 0x00427390u; return; } if (c.pc != 0x00422458u) [[unlikely]] return; }
L_00422458:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422480u);  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x00422480u) [[unlikely]] return; }
L_00422480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422488u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 592u, depth + 1u); else { c.pc = 0x00427420u; return; } if (c.pc != 0x00422488u) [[unlikely]] return; }
L_00422488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422490u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 323u, depth + 1u); else { c.pc = 0x00422360u; return; } if (c.pc != 0x00422490u) [[unlikely]] return; }
L_00422490:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004224A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004224B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x004224B4u) [[unlikely]] return; }
L_004224B4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004224C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 596u, depth + 1u); else { c.pc = 0x00427480u; return; } if (c.pc != 0x004224C0u) [[unlikely]] return; }
L_004224C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004224D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004224E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x004224E4u) [[unlikely]] return; }
L_004224E4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004224F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 604u, depth + 1u); else { c.pc = 0x00427570u; return; } if (c.pc != 0x004224F0u) [[unlikely]] return; }
L_004224F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422510u);  if (depth < kMaxDepth) unit_00C0(c, 314u, depth + 1u); else { c.pc = 0x004222B0u; return; } if (c.pc != 0x00422510u) [[unlikely]] return; }
L_00422510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422518u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x00422518u) [[unlikely]] return; }
L_00422518:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 12532u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422540u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x00422540u) [[unlikely]] return; }
L_00422540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422548u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 131u, depth + 1u); else { c.pc = 0x00424F10u; return; } if (c.pc != 0x00422548u) [[unlikely]] return; }
L_00422548:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422554u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 608u, depth + 1u); else { c.pc = 0x00427600u; return; } if (c.pc != 0x00422554u) [[unlikely]] return; }
L_00422554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422580u);  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x00422580u) [[unlikely]] return; }
L_00422580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422588u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 624u, depth + 1u); else { c.pc = 0x00427760u; return; } if (c.pc != 0x00422588u) [[unlikely]] return; }
L_00422588:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004225A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004225B0u);  if (depth < kMaxDepth) unit_00C0(c, 316u, depth + 1u); else { c.pc = 0x004222F0u; return; } if (c.pc != 0x004225B0u) [[unlikely]] return; }
L_004225B0:
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004225C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004225D0u);  if (depth < kMaxDepth) unit_00C0(c, 316u, depth + 1u); else { c.pc = 0x004222F0u; return; } if (c.pc != 0x004225D0u) [[unlikely]] return; }
L_004225D0:
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 17ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004225F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30132u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00422600; }
    set32(c.r[2], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 1;
L_00422600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00422610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00422678; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042263Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x0042263Cu) [[unlikely]] return; }
L_0042263C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00422658; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422654u); set32(c.r[5], c.r[5].w[0] - 29088u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00422654u) [[unlikely]] return; }
L_00422654:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00422658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00422660u) [[unlikely]] return; }
L_00422660:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0042267C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422678u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00422678u) [[unlikely]] return; }
L_00422678:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042267C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00422690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004226A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x004226A4u) [[unlikely]] return; }
L_004226A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004226B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004226E4; } }
L_004226B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004226BCu);  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x004226BCu) [[unlikely]] return; }
L_004226BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30128u)));  goto L_004226D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004226CCu); set32(c.r[4], ld32((c.r[28].w[0] - 30132u)));  if (depth < kMaxDepth) unit_00C0(c, 284u, depth + 1u); else { c.pc = 0x00421F90u; return; } if (c.pc != 0x004226CCu) [[unlikely]] return; }
L_004226CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004226E4; } }
L_004226D4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[2], 0u + 1u);  goto L_004226E4; }
    st32((c.r[28].w[0] - 30128u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_004226E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422714u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00422714u) [[unlikely]] return; }
L_00422714:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20570000u);
    set32(c.r[3], c.r[3].w[0] + 15968u);
    c.r[2].d[0] = c.r[2].d[0] | 21331ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042273Cu); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x0042273Cu) [[unlikely]] return; }
L_0042273C:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004227F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15968u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), 0u);  goto L_004227C0; }
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004227BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004227B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x004227B8u) [[unlikely]] return; }
L_004227B8:
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 1;
L_004227BC:
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 1;
L_004227C0:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30124u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004227D8; }
    st32((c.r[28].w[0] - 30124u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004227D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004227E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x004227E0u) [[unlikely]] return; }
L_004227E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004227FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004227F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x004227F8u) [[unlikely]] return; }
L_004227F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004227FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00422810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042288C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[2].d[0] | 1776ull;
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422848u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_00C0(c, 476u, depth + 1u); else { c.pc = 0x00423980u; return; } if (c.pc != 0x00422848u) [[unlikely]] return; }
L_00422848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00422868; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422860u); set32(c.r[5], c.r[5].w[0] - 29056u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00422860u) [[unlikely]] return; }
L_00422860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), 0u);  if (t) { goto L_00422888; } }
L_00422868:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 30124u), c.r[16].w[0]);
    c.budget -= 8;
L_00422888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042288C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004228A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004228B8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004228B8u) [[unlikely]] return; }
L_004228B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004228D0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004228CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 368u, depth + 1u); else { c.pc = 0x00422700u; return; } if (c.pc != 0x004228CCu) [[unlikely]] return; }
L_004228CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004228D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004228E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30124u)));  c.pc = t; return; }
L_004228F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422900u);  if (depth < kMaxDepth) unit_00C1(c, 131u, depth + 1u); else { c.pc = 0x00424F10u; return; } if (c.pc != 0x00422900u) [[unlikely]] return; }
L_00422900:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30124u)));  goto L_00422910; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00422918; } }
L_00422910:
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 2;
L_00422918:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422940u);  if (depth < kMaxDepth) unit_00C1(c, 131u, depth + 1u); else { c.pc = 0x00424F10u; return; } if (c.pc != 0x00422940u) [[unlikely]] return; }
L_00422940:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_00422950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00422954; } }
L_00422950:
    c.r[2].d[0] = c.r[2].d[0] | 1760ull;
    c.budget -= 1;
L_00422954:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422970u);  if (depth < kMaxDepth) unit_00C1(c, 129u, depth + 1u); else { c.pc = 0x00424ED0u; return; } if (c.pc != 0x00422970u) [[unlikely]] return; }
L_00422970:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30124u)));  goto L_00422980; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00422988; } }
L_00422980:
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 9104u);
    c.budget -= 2;
L_00422988:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004229A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004229B0u);  if (depth < kMaxDepth) unit_00C1(c, 129u, depth + 1u); else { c.pc = 0x00424ED0u; return; } if (c.pc != 0x004229B0u) [[unlikely]] return; }
L_004229B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull | 58208ull;  goto L_004229BC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004229BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004229D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004229E0u);  if (depth < kMaxDepth) unit_00C1(c, 129u, depth + 1u); else { c.pc = 0x00424ED0u; return; } if (c.pc != 0x004229E0u) [[unlikely]] return; }
L_004229E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30124u)));  goto L_004229F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004229F8; } }
L_004229F0:
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 2;
L_004229F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422A10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422A20u);  if (depth < kMaxDepth) unit_00C1(c, 129u, depth + 1u); else { c.pc = 0x00424ED0u; return; } if (c.pc != 0x00422A20u) [[unlikely]] return; }
L_00422A20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 4544u);  goto L_00422A2C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00422A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422A54u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00C0(c, 390u, depth + 1u); else { c.pc = 0x004229D0u; return; } if (c.pc != 0x00422A54u) [[unlikely]] return; }
L_00422A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422A5Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 392u, depth + 1u); else { c.pc = 0x00422A10u; return; } if (c.pc != 0x00422A5Cu) [[unlikely]] return; }
L_00422A5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00422A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422A6Cu);  if (depth < kMaxDepth) unit_0048(c, 22u, depth + 1u); else { c.pc = 0x00240200u; return; } if (c.pc != 0x00422A6Cu) [[unlikely]] return; }
L_00422A6C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00422A80; }
L_00422A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00422A8C; } }
L_00422A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422A88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 10u, depth + 1u); else { c.pc = 0x00240070u; return; } if (c.pc != 0x00422A88u) [[unlikely]] return; }
L_00422A88:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00422A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00422AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422AB0u);  if (depth < kMaxDepth) unit_00C0(c, 390u, depth + 1u); else { c.pc = 0x004229D0u; return; } if (c.pc != 0x00422AB0u) [[unlikely]] return; }
L_00422AB0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_00422AC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00422ACC; } }
L_00422AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422AC8u);  if (depth < kMaxDepth) unit_0048(c, 17u, depth + 1u); else { c.pc = 0x00240150u; return; } if (c.pc != 0x00422AC8u) [[unlikely]] return; }
L_00422AC8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00422ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422AF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00422AF4u) [[unlikely]] return; }
L_00422AF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43540000u);
    set32(c.r[3], c.r[3].w[0] + 16032u);
    c.r[2].d[0] = c.r[2].d[0] | 20563ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 30120u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422B40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00422B9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 16032u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30120u)));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00422B7C; }
    st32((c.r[28].w[0] - 30120u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00422B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422B84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00422B84u) [[unlikely]] return; }
L_00422B84:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00422BA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422B9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00422B9Cu) [[unlikely]] return; }
L_00422B9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00422BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00422BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422BD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 336u, depth + 1u); else { c.pc = 0x001B6160u; return; } if (c.pc != 0x00422BD4u) [[unlikely]] return; }
L_00422BD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_00422BEC; }
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 2;
L_00422BEC:
    set32(c.r[4], c.r[3].w[0] + 60u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00422C1C; }
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00422C18; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 2;
L_00422C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00422C1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422C48u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00422C48u) [[unlikely]] return; }
L_00422C48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00422C60; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422C5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 402u, depth + 1u); else { c.pc = 0x00422AE0u; return; } if (c.pc != 0x00422C5Cu) [[unlikely]] return; }
L_00422C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00422C60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30120u)));  c.pc = t; return; }
L_00422C80:
    set32(c.r[3], ld32((c.r[28].w[0] - 30120u)));
    st32((c.r[3].w[0] + 52u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30120u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 56u), c.r[4].w[0]);  c.pc = t; return; }
L_00422CA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30120u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 56u)));  c.pc = t; return; }
L_00422CB0:
    set32(c.r[3], 0u + 60u);
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00422CD4; } }
    set32(c.r[2], 0u + 99u);
    c.budget -= 1;
L_00422CD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00422CE0:
    set32(c.r[5], 0u + 60u);
    mmi::divu(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00422D0C; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 1;
L_00422D0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00422D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422D3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 441u, depth + 1u); else { c.pc = 0x004231B0u; return; } if (c.pc != 0x00422D3Cu) [[unlikely]] return; }
L_00422D3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 16096u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[4].w[0] + 18552u));
    c.f[1] = ld32((c.r[2].w[0] + 18556u));
    c.f[0] = ld32((c.r[3].w[0] + 18560u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00422DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 400u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00422F88; }
    set32(c.r[3], 0u + 301u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00422F04; }
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00422EE8; }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00422E64; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00422E48; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00422E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00422F98; } }
L_00422E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422E08u);  if (depth < kMaxDepth) unit_00C0(c, 325u, depth + 1u); else { c.pc = 0x004223B0u; return; } if (c.pc != 0x00422E08u) [[unlikely]] return; }
L_00422E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00422E1C; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00422F94; } }
L_00422E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422E24u);  if (depth < kMaxDepth) unit_00C0(c, 326u, depth + 1u); else { c.pc = 0x004223C0u; return; } if (c.pc != 0x00422E24u) [[unlikely]] return; }
L_00422E24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_00422E38; }
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00422F94; } }
L_00422E38:
    set32(c.r[3], 0u + 400u);
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00422F94; } }
L_00422E48:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422E54u); set32(c.r[6], 0u + 38u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00422E54u) [[unlikely]] return; }
L_00422E54:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00422F94; } }
L_00422E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422E6Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00422E6Cu) [[unlikely]] return; }
L_00422E6C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 3u);  goto L_00422E98; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 116u), c.r[4].w[0]);  goto L_00422E8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00422EA8; } }
L_00422E8C:
    set32(c.r[3], 0u + 400u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00422F94; } }
L_00422E98:
    set32(c.r[3], 0u + 400u);
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00422F94; } }
L_00422EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422EB0u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x00422EB0u) [[unlikely]] return; }
L_00422EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00422F94; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422EC8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00422EC8u) [[unlikely]] return; }
L_00422EC8:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 400u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00422F94; } }
L_00422EE8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422EF4u); set32(c.r[6], 0u + 39u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00422EF4u) [[unlikely]] return; }
L_00422EF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00422F94; } }
L_00422F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422F0Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00422F0Cu) [[unlikely]] return; }
L_00422F0C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 3u);  goto L_00422F38; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 116u), c.r[4].w[0]);  goto L_00422F2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00422F48; } }
L_00422F2C:
    set32(c.r[3], 0u + 400u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00422F94; } }
L_00422F38:
    set32(c.r[3], 0u + 400u);
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00422F94; } }
L_00422F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422F50u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x00422F50u) [[unlikely]] return; }
L_00422F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00422F94; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422F68u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00422F68u) [[unlikely]] return; }
L_00422F68:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 400u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00422F94; } }
L_00422F88:
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00422F94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00422F98:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00423018; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 16096u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00423000; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00423000; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423000u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00423000u) [[unlikely]] return; }
L_00423000:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0042301C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423018u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00423018u) [[unlikely]] return; }
L_00423018:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042301C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00423030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423044u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00423044u) [[unlikely]] return; }
L_00423044:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42540000u);
    set32(c.r[3], c.r[3].w[0] + 14624u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 19539ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1056u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004230B0:
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004230D0; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[12]);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.budget -= 2;
L_004230D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004230E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0042317C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_0042317C; } }
L_00423108:
    c.budget -= 2;
    if (c.r[3].sd[0] > 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00423194; }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[16].w[0] + 52u));  goto L_00423138; }
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00423190; } }
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 1;
L_00423138:
    set32(c.r[25], c.r[16].w[0] + 52u);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042315Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 165u, depth + 1u); else { c.pc = 0x00141FC0u; return; } if (c.pc != 0x0042315Cu) [[unlikely]] return; }
L_0042315C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423168u); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0008(c, 168u, depth + 1u); else { c.pc = 0x00142040u; return; } if (c.pc != 0x00423168u) [[unlikely]] return; }
L_00423168:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 52u);  goto L_00423180; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00423190; } }
L_0042317C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00423180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423188u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x00423188u) [[unlikely]] return; }
L_00423188:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00423108u | kUnwind; return; } goto L_00423108; }
L_00423190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00423194:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004231B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004231C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 433u, depth + 1u); else { c.pc = 0x00423030u; return; } if (c.pc != 0x004231C4u) [[unlikely]] return; }
L_004231C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x424C0000u);
    set32(c.r[3], c.r[3].w[0] + 15520u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21331ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1056u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 80u), c.f[2]);
    st32((c.r[16].w[0] + 84u), c.f[1]);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00423230:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423268u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x00423268u) [[unlikely]] return; }
L_00423268:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004232A0; }
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[17].w[0] + 80u), c.f[2]);
    st32((c.r[17].w[0] + 84u), c.f[1]);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    st32((c.r[17].w[0] + 92u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
L_004232A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004232B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004232D0u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x004232D0u) [[unlikely]] return; }
L_004232D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00423304; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 1056u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[17].w[0] + 80u), c.f[2]);
    st32((c.r[17].w[0] + 84u), c.f[1]);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    st32((c.r[17].w[0] + 96u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 11;
L_00423304:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00423320:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 104u), c.r[5].w[0]);  c.pc = t; return; }
L_00423330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004233A8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_004233A8; } }
L_00423358:
    c.budget -= 2;
    if (c.r[3].sd[0] > 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004233C0; }
    c.f[2] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[25], c.r[17].w[0] + 80u);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423388u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 165u, depth + 1u); else { c.pc = 0x00141FC0u; return; } if (c.pc != 0x00423388u) [[unlikely]] return; }
L_00423388:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423394u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0008(c, 168u, depth + 1u); else { c.pc = 0x00142040u; return; } if (c.pc != 0x00423394u) [[unlikely]] return; }
L_00423394:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 80u);  goto L_004233AC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_004233BC; } }
L_004233A8:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 1;
L_004233AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004233B4u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x004233B4u) [[unlikely]] return; }
L_004233B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00423358u | kUnwind; return; } goto L_00423358; }
L_004233BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004233C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004233D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[7], c.r[7].w[0] + 16280u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x494D0000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[6].d[0] = c.r[2].d[0] | 21248ull;
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), 0u);  c.pc = t; return; }
L_00423450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004234D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 16280u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00423490; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042348Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 471u, depth + 1u); else { c.pc = 0x004238D0u; return; } if (c.pc != 0x0042348Cu) [[unlikely]] return; }
L_0042348C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00423490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423498u);  if (depth < kMaxDepth) unit_00C0(c, 473u, depth + 1u); else { c.pc = 0x00423930u; return; } if (c.pc != 0x00423498u) [[unlikely]] return; }
L_00423498:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_004234BC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_004234BC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004234D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004234D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x004234D0u) [[unlikely]] return; }
L_004234D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004234D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004234F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00423570; } }
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_0042353C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] - 1u);  goto L_00423530; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_00423530:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
L_0042353C:
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] - 1u);  goto L_00423550; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_00423550:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_00423574; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] - 1u);  goto L_00423568; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_00423568:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_00423570:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_00423574:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_004235C0; }
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_0042358C; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_0042358C:
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] - 1u);  goto L_004235A0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_004235A0:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004235BC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[4].w[0] - 1u);  goto L_004235BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 32u)));  if (t) { goto L_004235BC; } }
L_004235BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_004235C0:
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  goto L_004235DC; }
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00423604; } }
L_004235DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), c.r[16].w[0]);  goto L_00423600; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004235F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004235F0u) [[unlikely]] return; }
L_004235F0:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00423604; }
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 1;
L_00423600:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00423604:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00423620:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 13;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0042365C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004237A0; } }
L_0042365C:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 1;
L_00423660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[16].w[0]);  if (t) { goto L_004236C8; } }
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { set32(c.r[4], ld32((c.r[20].w[0] + 52u)));  goto L_00423694; }
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] - 1u);  goto L_00423688; }
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 1;
L_00423688:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
L_00423694:
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] - 1u);  goto L_004236A8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 1;
L_004236A8:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 40u)));  goto L_004236CC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] - 1u);  goto L_004236C0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 1;
L_004236C0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004236C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 1;
L_004236CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 52u)));  goto L_00423718; }
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { set32(c.r[4], ld32((c.r[20].w[0] + 52u)));  goto L_004236E4; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 2;
L_004236E4:
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] - 1u);  goto L_004236F8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 1;
L_004236F8:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00423714; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[4].w[0] - 1u);  goto L_00423714; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[20].w[0] + 32u)));  if (t) { goto L_00423714; } }
L_00423714:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 1;
L_00423718:
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 44u)));  goto L_00423734; }
    st32((c.r[20].w[0] + 28u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004237A0; } }
L_00423734:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 28u), c.r[18].w[0]);  goto L_00423758; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423748u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00423748u) [[unlikely]] return; }
L_00423748:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 36u)));  goto L_00423760; }
    st32((c.r[20].w[0] + 28u), c.r[18].w[0]);
    c.budget -= 1;
L_00423758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004237A0; } }
L_00423760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00423778; } }
    c.budget -= 2;
    if (c.r[19].sd[0] <= 0) { set32(c.r[16], 0u + 1u);  goto L_00423778; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00423778; } }
L_00423778:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] - 1u);  goto L_00423790; }
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 1;
L_00423790:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00423660u | kUnwind; return; } goto L_00423660; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004237A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004237C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  if (t) { goto L_004237D0; } }
L_004237C8:
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_004237D0:
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004237C8u | kUnwind; return; } goto L_004237C8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004237F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  if (t) { goto L_00423808; } }
L_004237F8:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00423818; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 1;
L_00423808:
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004237F8u | kUnwind; return; } goto L_004237F8; } }
L_00423818:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00423820:
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00423840; } }
L_0042382C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 60u)));  goto L_0042383C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042384C; } }
L_0042383C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00423840:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042382Cu | kUnwind; return; } goto L_0042382C; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0042384C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00423860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00423890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), c.r[16].w[0]);  if (t) { goto L_004238A0; } }
L_00423890:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042389Cu); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0042389Cu) [[unlikely]] return; }
L_0042389C:
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    c.budget -= 1;
L_004238A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004238D0:
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00423904; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_0042390C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 60u)));
    c.budget -= 1;
L_004238EC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[6].d[0] = c.r[3].d[0] + 0ull;  goto L_00423904; }
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_0042390C; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00423904:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004238ECu | kUnwind; return; } goto L_004238EC; }
L_0042390C:
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 56u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 60u), 0u);  c.pc = t; return; }
L_00423930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0042395C; } }
L_00423944:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  goto L_00423960; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042395Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042395Cu) [[unlikely]] return; }
L_0042395C:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_00423960:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423944u | kUnwind; return; } goto L_00423944; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00423980:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1024u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004239ACu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x004239ACu) [[unlikely]] return; }
L_004239AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004239BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x004239BCu) [[unlikely]] return; }
L_004239BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00423A10; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004239D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x004239D8u) [[unlikely]] return; }
L_004239D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00423A00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004239ECu); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x004239ECu) [[unlikely]] return; }
L_004239EC:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004239FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x004239FCu) [[unlikely]] return; }
L_004239FC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00423A00:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423A0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00423A0Cu) [[unlikely]] return; }
L_00423A0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00423A10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00423A30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423A4Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x00423A4Cu) [[unlikely]] return; }
L_00423A4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423A58u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 249u, depth + 1u); else { c.pc = 0x001FB450u; return; } if (c.pc != 0x00423A58u) [[unlikely]] return; }
L_00423A58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00423AA4; } }
L_00423A64:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423A7Cu); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00423A7Cu) [[unlikely]] return; }
L_00423A7C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00423AA4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00423AA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423AA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00423AA0u) [[unlikely]] return; }
L_00423AA0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00423AA4:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00423A64u | kUnwind; return; } goto L_00423A64; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00423AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 29024u);  c.pc = t; return; }
L_00423AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423AFCu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00423AFCu) [[unlikely]] return; }
L_00423AFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00423B3C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423B10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00423B10u) [[unlikely]] return; }
L_00423B10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[4].w[0] + 16224u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[28].w[0] - 30116u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 11;
L_00423B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00423B50:
    set32(c.r[3], ld32((c.r[28].w[0] - 30116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_00423B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull | 40001ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[8], ld32((c.r[28].w[0] - 30116u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00423BBC; } }
    set32(c.r[6], ld32((c.r[8].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00423BCC; }
    set32(c.r[2], c.r[4].w[0] - 32768u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[8].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423BB4u); set32(c.r[5], c.r[2].w[0] - 7232u);  if (depth < kMaxDepth) unit_0026(c, 24u, depth + 1u); else { c.pc = 0x001B81B0u; return; } if (c.pc != 0x00423BB4u) [[unlikely]] return; }
L_00423BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00423BC8; } }
L_00423BBC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423BC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00423BC8u) [[unlikely]] return; }
L_00423BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00423BCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00423BE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30116u)));  c.pc = t; return; }
L_00423BF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423C1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 512u, depth + 1u); else { c.pc = 0x00423D60u; return; } if (c.pc != 0x00423C1Cu) [[unlikely]] return; }
L_00423C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423C24u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00423C24u) [[unlikely]] return; }
L_00423C24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  goto L_00423C54; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423C50u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x00423C50u) [[unlikely]] return; }
L_00423C50:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_00423C54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 72u);  goto L_00423C6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423C64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 512u, depth + 1u); else { c.pc = 0x00423D60u; return; } if (c.pc != 0x00423C64u) [[unlikely]] return; }
L_00423C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00423D38; } }
L_00423C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423C74u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00423C74u) [[unlikely]] return; }
L_00423C74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  goto L_00423CA4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423CA0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x00423CA0u) [[unlikely]] return; }
L_00423CA0:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_00423CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00423CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423CB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 512u, depth + 1u); else { c.pc = 0x00423D60u; return; } if (c.pc != 0x00423CB4u) [[unlikely]] return; }
L_00423CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00423D38; } }
L_00423CBC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_00423D28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423CCCu);  if (depth < kMaxDepth) unit_0010(c, 57u, depth + 1u); else { c.pc = 0x00160990u; return; } if (c.pc != 0x00423CCCu) [[unlikely]] return; }
L_00423CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423CD4u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00423CD4u) [[unlikely]] return; }
L_00423CD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  goto L_00423D04; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423D00u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x00423D00u) [[unlikely]] return; }
L_00423D00:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_00423D04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_00423D1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423D14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 512u, depth + 1u); else { c.pc = 0x00423D60u; return; } if (c.pc != 0x00423D14u) [[unlikely]] return; }
L_00423D14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00423D38; } }
L_00423D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423D24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 125u, depth + 1u); else { c.pc = 0x0015D370u; return; } if (c.pc != 0x00423D24u) [[unlikely]] return; }
L_00423D24:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_00423D28:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423D34u); set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_00A8(c, 294u, depth + 1u); else { c.pc = 0x003C3580u; return; } if (c.pc != 0x00423D34u) [[unlikely]] return; }
L_00423D34:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00423D38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00423D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423D7Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 57u, depth + 1u); else { c.pc = 0x00160990u; return; } if (c.pc != 0x00423D7Cu) [[unlikely]] return; }
L_00423D7C:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_00423D84:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 52u);  if (t) { goto L_00423DA8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00423DA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00423DA4u) [[unlikely]] return; }
L_00423DA4:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00423DA8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00423D84u | kUnwind; return; } goto L_00423D84; }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423DC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 294u, depth + 1u); else { c.pc = 0x003C3580u; return; } if (c.pc != 0x00423DC8u) [[unlikely]] return; }
L_00423DC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00423DE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423E14u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00423E14u) [[unlikely]] return; }
L_00423E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00423E4C; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423E28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00423E28u) [[unlikely]] return; }
L_00423E28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D420000u);
    set32(c.r[3], c.r[3].w[0] + 16160u);
    c.r[2].d[0] = c.r[2].d[0] | 18259ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 9;
L_00423E4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423E60u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 498u, depth + 1u); else { c.pc = 0x00423BF0u; return; } if (c.pc != 0x00423E60u) [[unlikely]] return; }
L_00423E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00423E80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00423ECC; } }
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423EC4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00423EC4u) [[unlikely]] return; }
L_00423EC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00423F00; } }
L_00423ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00423EE4; } }
L_00423ED4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423EE0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00423EE0u) [[unlikely]] return; }
L_00423EE0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00423EE4:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 6;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00423ED4u | kUnwind; return; } goto L_00423ED4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00423F00:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00423F20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00423F70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 16160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423F4Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 512u, depth + 1u); else { c.pc = 0x00423D60u; return; } if (c.pc != 0x00423F4Cu) [[unlikely]] return; }
L_00423F4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423F58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00423F58u) [[unlikely]] return; }
L_00423F58:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00423F74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423F70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00423F70u) [[unlikely]] return; }
L_00423F70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00423F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00423F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00C1(c, 4u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 16224u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  goto L_00423FDC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00423FD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00423FD4u) [[unlikely]] return; }
L_00423FD4:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 2;
L_00423FDC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30116u)));  goto L_00423FF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423FECu);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x001B8190u; return; } if (c.pc != 0x00423FECu) [[unlikely]] return; }
L_00423FEC:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30116u)));
    c.budget -= 2;
L_00423FF4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  [[clang::musttail]] return unit_00C1(c, 2u, depth); }
    st32((c.r[28].w[0] - 30116u), 0u);
    c.budget -= 1;
    [[clang::musttail]] return unit_00C1(c, 1u, depth);
}

}
