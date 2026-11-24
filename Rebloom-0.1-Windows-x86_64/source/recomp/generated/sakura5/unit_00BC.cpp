#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BC[4096] = {
    1, 2, 0, 0, 3, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0,
    14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    44, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86,
    0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 219,
    0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0,
    237, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 245, 0,
    0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 254,
    0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260,
    0, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0,
    0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0,
    0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0,
    296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0,
    302, 0, 303, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0,
    308, 0, 0, 309, 0, 310, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0,
    0, 318, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 0, 326, 0, 0, 327,
    0, 328, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0,
    0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0,
    0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0,
    438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0,
    442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0,
    0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0,
    0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0,
    0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 501, 0, 502, 0, 503, 0, 0, 0, 0,
    0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0,
    511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0,
    0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 536, 0, 0, 0,
    537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 541,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0,
    543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0,
    0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BC(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00410000;
    case 2u: goto L_00410004;
    case 3u: goto L_00410010;
    case 4u: goto L_00410014;
    case 5u: goto L_00410020;
    case 6u: goto L_00410040;
    case 7u: goto L_00410080;
    case 8u: goto L_004100A4;
    case 9u: goto L_004100BC;
    case 10u: goto L_004100C0;
    case 11u: goto L_004100D4;
    case 12u: goto L_004100E4;
    case 13u: goto L_004100F4;
    case 14u: goto L_00410100;
    case 15u: goto L_0041010C;
    case 16u: goto L_00410120;
    case 17u: goto L_00410128;
    case 18u: goto L_00410140;
    case 19u: goto L_00410144;
    case 20u: goto L_00410180;
    case 21u: goto L_004101BC;
    case 22u: goto L_004101C0;
    case 23u: goto L_004101DC;
    case 24u: goto L_004101F4;
    case 25u: goto L_00410214;
    case 26u: goto L_0041021C;
    case 27u: goto L_00410224;
    case 28u: goto L_00410240;
    case 29u: goto L_00410278;
    case 30u: goto L_00410280;
    case 31u: goto L_004102B0;
    case 32u: goto L_004102CC;
    case 33u: goto L_004102DC;
    case 34u: goto L_004102F4;
    case 35u: goto L_00410304;
    case 36u: goto L_00410334;
    case 37u: goto L_00410350;
    case 38u: goto L_00410360;
    case 39u: goto L_0041037C;
    case 40u: goto L_0041038C;
    case 41u: goto L_004103BC;
    case 42u: goto L_004103D8;
    case 43u: goto L_004103E8;
    case 44u: goto L_00410400;
    case 45u: goto L_00410404;
    case 46u: goto L_00410414;
    case 47u: goto L_00410440;
    case 48u: goto L_00410444;
    case 49u: goto L_00410460;
    case 50u: goto L_00410470;
    case 51u: goto L_00410488;
    case 52u: goto L_00410498;
    case 53u: goto L_004104C8;
    case 54u: goto L_004104E0;
    case 55u: goto L_00410520;
    case 56u: goto L_00410534;
    case 57u: goto L_00410540;
    case 58u: goto L_00410574;
    case 59u: goto L_00410580;
    case 60u: goto L_00410590;
    case 61u: goto L_004105A0;
    case 62u: goto L_004105C8;
    case 63u: goto L_004105E0;
    case 64u: goto L_004105F8;
    case 65u: goto L_00410610;
    case 66u: goto L_00410628;
    case 67u: goto L_00410640;
    case 68u: goto L_00410650;
    case 69u: goto L_00410668;
    case 70u: goto L_00410680;
    case 71u: goto L_004106A8;
    case 72u: goto L_004106C0;
    case 73u: goto L_004106E4;
    case 74u: goto L_00410724;
    case 75u: goto L_00410740;
    case 76u: goto L_00410790;
    case 77u: goto L_004107BC;
    case 78u: goto L_004107D4;
    case 79u: goto L_00410800;
    case 80u: goto L_00410818;
    case 81u: goto L_0041083C;
    case 82u: goto L_00410854;
    case 83u: goto L_00410894;
    case 84u: goto L_004108BC;
    case 85u: goto L_004108E0;
    case 86u: goto L_004108FC;
    case 87u: goto L_00410918;
    case 88u: goto L_00410940;
    case 89u: goto L_00410958;
    case 90u: goto L_00410960;
    case 91u: goto L_0041097C;
    case 92u: goto L_004109B4;
    case 93u: goto L_004109D8;
    case 94u: goto L_004109F0;
    case 95u: goto L_00410A0C;
    case 96u: goto L_00410A28;
    case 97u: goto L_00410A50;
    case 98u: goto L_00410A68;
    case 99u: goto L_00410A70;
    case 100u: goto L_00410A8C;
    case 101u: goto L_00410AC4;
    case 102u: goto L_00410AEC;
    case 103u: goto L_00410B00;
    case 104u: goto L_00410B1C;
    case 105u: goto L_00410B38;
    case 106u: goto L_00410B50;
    case 107u: goto L_00410B60;
    case 108u: goto L_00410B84;
    case 109u: goto L_00410BA0;
    case 110u: goto L_00410BBC;
    case 111u: goto L_00410BD8;
    case 112u: goto L_00410BF0;
    case 113u: goto L_00410C00;
    case 114u: goto L_00410C24;
    case 115u: goto L_00410C40;
    case 116u: goto L_00410C98;
    case 117u: goto L_00410CA0;
    case 118u: goto L_00410CA8;
    case 119u: goto L_00410CB0;
    case 120u: goto L_00410CC0;
    case 121u: goto L_00410CD0;
    case 122u: goto L_00410CEC;
    case 123u: goto L_00410D24;
    case 124u: goto L_00410D48;
    case 125u: goto L_00410D58;
    case 126u: goto L_00410D6C;
    case 127u: goto L_00410D84;
    case 128u: goto L_00410DF0;
    case 129u: goto L_00410E3C;
    case 130u: goto L_00410E64;
    case 131u: goto L_00410E70;
    case 132u: goto L_00410E7C;
    case 133u: goto L_00410E98;
    case 134u: goto L_00410EA8;
    case 135u: goto L_00410EC8;
    case 136u: goto L_00410EE0;
    case 137u: goto L_00410F00;
    case 138u: goto L_00410F48;
    case 139u: goto L_00410F58;
    case 140u: goto L_00410F84;
    case 141u: goto L_00410F94;
    case 142u: goto L_00411010;
    case 143u: goto L_004110B0;
    case 144u: goto L_00411100;
    case 145u: goto L_00411114;
    case 146u: goto L_00411124;
    case 147u: goto L_0041112C;
    case 148u: goto L_00411134;
    case 149u: goto L_0041113C;
    case 150u: goto L_00411148;
    case 151u: goto L_00411160;
    case 152u: goto L_00411178;
    case 153u: goto L_00411190;
    case 154u: goto L_004111A8;
    case 155u: goto L_004111B4;
    case 156u: goto L_004111C0;
    case 157u: goto L_004111CC;
    case 158u: goto L_004111EC;
    case 159u: goto L_00411204;
    case 160u: goto L_00411228;
    case 161u: goto L_00411234;
    case 162u: goto L_00411280;
    case 163u: goto L_004112C0;
    case 164u: goto L_004112D0;
    case 165u: goto L_004112E0;
    case 166u: goto L_004112FC;
    case 167u: goto L_00411318;
    case 168u: goto L_00411330;
    case 169u: goto L_0041134C;
    case 170u: goto L_00411358;
    case 171u: goto L_004113CC;
    case 172u: goto L_004113DC;
    case 173u: goto L_00411414;
    case 174u: goto L_00411428;
    case 175u: goto L_00411434;
    case 176u: goto L_00411440;
    case 177u: goto L_0041144C;
    case 178u: goto L_004114B8;
    case 179u: goto L_00411508;
    case 180u: goto L_00411534;
    case 181u: goto L_00411540;
    case 182u: goto L_00411568;
    case 183u: goto L_00411588;
    case 184u: goto L_00411594;
    case 185u: goto L_0041159C;
    case 186u: goto L_004115CC;
    case 187u: goto L_00411614;
    case 188u: goto L_00411678;
    case 189u: goto L_004116A4;
    case 190u: goto L_004116D8;
    case 191u: goto L_004116F4;
    case 192u: goto L_00411720;
    case 193u: goto L_00411754;
    case 194u: goto L_00411770;
    case 195u: goto L_00411780;
    case 196u: goto L_004117AC;
    case 197u: goto L_004117E4;
    case 198u: goto L_004117FC;
    case 199u: goto L_0041182C;
    case 200u: goto L_00411860;
    case 201u: goto L_0041186C;
    case 202u: goto L_00411878;
    case 203u: goto L_004118D8;
    case 204u: goto L_0041190C;
    case 205u: goto L_00411914;
    case 206u: goto L_0041191C;
    case 207u: goto L_00411928;
    case 208u: goto L_0041193C;
    case 209u: goto L_0041194C;
    case 210u: goto L_00411958;
    case 211u: goto L_004119A4;
    case 212u: goto L_004119B4;
    case 213u: goto L_004119C0;
    case 214u: goto L_00411A00;
    case 215u: goto L_00411A48;
    case 216u: goto L_00411A5C;
    case 217u: goto L_00411A68;
    case 218u: goto L_00411A74;
    case 219u: goto L_00411A7C;
    case 220u: goto L_00411A90;
    case 221u: goto L_00411AA0;
    case 222u: goto L_00411AC8;
    case 223u: goto L_00411B08;
    case 224u: goto L_00411B40;
    case 225u: goto L_00411B74;
    case 226u: goto L_00411B8C;
    case 227u: goto L_00411BA0;
    case 228u: goto L_00411BE0;
    case 229u: goto L_00411BF0;
    case 230u: goto L_00411C04;
    case 231u: goto L_00411C28;
    case 232u: goto L_00411C3C;
    case 233u: goto L_00411C48;
    case 234u: goto L_00411C54;
    case 235u: goto L_00411C68;
    case 236u: goto L_00411C74;
    case 237u: goto L_00411C80;
    case 238u: goto L_00411C94;
    case 239u: goto L_00411CA0;
    case 240u: goto L_00411CAC;
    case 241u: goto L_00411CC0;
    case 242u: goto L_00411CCC;
    case 243u: goto L_00411CD8;
    case 244u: goto L_00411CEC;
    case 245u: goto L_00411CF8;
    case 246u: goto L_00411D04;
    case 247u: goto L_00411D18;
    case 248u: goto L_00411D24;
    case 249u: goto L_00411D30;
    case 250u: goto L_00411D44;
    case 251u: goto L_00411D50;
    case 252u: goto L_00411D5C;
    case 253u: goto L_00411D70;
    case 254u: goto L_00411D7C;
    case 255u: goto L_00411D88;
    case 256u: goto L_00411D9C;
    case 257u: goto L_00411DA8;
    case 258u: goto L_00411DD0;
    case 259u: goto L_00411DE8;
    case 260u: goto L_00411DFC;
    case 261u: goto L_00411E08;
    case 262u: goto L_00411E10;
    case 263u: goto L_00411E24;
    case 264u: goto L_00411E30;
    case 265u: goto L_00411E38;
    case 266u: goto L_00411E4C;
    case 267u: goto L_00411E58;
    case 268u: goto L_00411E80;
    case 269u: goto L_00411E98;
    case 270u: goto L_00411EAC;
    case 271u: goto L_00411EB8;
    case 272u: goto L_00411EC0;
    case 273u: goto L_00411ED4;
    case 274u: goto L_00411EE0;
    case 275u: goto L_00411F08;
    case 276u: goto L_00411F20;
    case 277u: goto L_00411F34;
    case 278u: goto L_00411F40;
    case 279u: goto L_00411F48;
    case 280u: goto L_00411F5C;
    case 281u: goto L_00411F68;
    case 282u: goto L_00411F70;
    case 283u: goto L_00411F84;
    case 284u: goto L_00411F90;
    case 285u: goto L_00411FB8;
    case 286u: goto L_00411FD0;
    case 287u: goto L_00411FE4;
    case 288u: goto L_00411FF0;
    case 289u: goto L_00411FF8;
    case 290u: goto L_0041200C;
    case 291u: goto L_00412018;
    case 292u: goto L_00412040;
    case 293u: goto L_00412058;
    case 294u: goto L_0041206C;
    case 295u: goto L_00412078;
    case 296u: goto L_00412080;
    case 297u: goto L_00412094;
    case 298u: goto L_004120A0;
    case 299u: goto L_004120C8;
    case 300u: goto L_004120E0;
    case 301u: goto L_004120F4;
    case 302u: goto L_00412100;
    case 303u: goto L_00412108;
    case 304u: goto L_0041211C;
    case 305u: goto L_00412128;
    case 306u: goto L_00412150;
    case 307u: goto L_0041216C;
    case 308u: goto L_00412180;
    case 309u: goto L_0041218C;
    case 310u: goto L_00412194;
    case 311u: goto L_004121A8;
    case 312u: goto L_004121B4;
    case 313u: goto L_004121BC;
    case 314u: goto L_004121D0;
    case 315u: goto L_004121DC;
    case 316u: goto L_004121E4;
    case 317u: goto L_004121F8;
    case 318u: goto L_00412204;
    case 319u: goto L_0041220C;
    case 320u: goto L_00412220;
    case 321u: goto L_0041222C;
    case 322u: goto L_00412234;
    case 323u: goto L_00412248;
    case 324u: goto L_00412254;
    case 325u: goto L_0041225C;
    case 326u: goto L_00412270;
    case 327u: goto L_0041227C;
    case 328u: goto L_00412284;
    case 329u: goto L_00412298;
    case 330u: goto L_004122A4;
    case 331u: goto L_004122C0;
    case 332u: goto L_00412310;
    case 333u: goto L_00412350;
    case 334u: goto L_00412368;
    case 335u: goto L_0041237C;
    case 336u: goto L_00412390;
    case 337u: goto L_004123CC;
    case 338u: goto L_00412410;
    case 339u: goto L_00412428;
    case 340u: goto L_0041243C;
    case 341u: goto L_00412450;
    case 342u: goto L_00412464;
    case 343u: goto L_0041248C;
    case 344u: goto L_004124A0;
    case 345u: goto L_004124B8;
    case 346u: goto L_004124E4;
    case 347u: goto L_004124F8;
    case 348u: goto L_0041250C;
    case 349u: goto L_00412548;
    case 350u: goto L_00412578;
    case 351u: goto L_0041258C;
    case 352u: goto L_004125B0;
    case 353u: goto L_004125FC;
    case 354u: goto L_00412648;
    case 355u: goto L_0041265C;
    case 356u: goto L_00412680;
    case 357u: goto L_00412694;
    case 358u: goto L_004126A8;
    case 359u: goto L_004126C0;
    case 360u: goto L_00412710;
    case 361u: goto L_0041273C;
    case 362u: goto L_0041275C;
    case 363u: goto L_00412808;
    case 364u: goto L_00412828;
    case 365u: goto L_00412968;
    case 366u: goto L_00412994;
    case 367u: goto L_0041299C;
    case 368u: goto L_004129A4;
    case 369u: goto L_004129AC;
    case 370u: goto L_004129B4;
    case 371u: goto L_004129BC;
    case 372u: goto L_004129C4;
    case 373u: goto L_004129CC;
    case 374u: goto L_004129D0;
    case 375u: goto L_004129E4;
    case 376u: goto L_00412A10;
    case 377u: goto L_00412A50;
    case 378u: goto L_00412A58;
    case 379u: goto L_00412A78;
    case 380u: goto L_00412AB8;
    case 381u: goto L_00412AE0;
    case 382u: goto L_00412B08;
    case 383u: goto L_00412B4C;
    case 384u: goto L_00412B68;
    case 385u: goto L_00412B78;
    case 386u: goto L_00412B8C;
    case 387u: goto L_00412BB0;
    case 388u: goto L_00412BEC;
    case 389u: goto L_00412BF8;
    case 390u: goto L_00412C04;
    case 391u: goto L_00412C10;
    case 392u: goto L_00412C38;
    case 393u: goto L_00412C44;
    case 394u: goto L_00412C50;
    case 395u: goto L_00412C5C;
    case 396u: goto L_00412C84;
    case 397u: goto L_00412C90;
    case 398u: goto L_00412C9C;
    case 399u: goto L_00412CA8;
    case 400u: goto L_00412CD0;
    case 401u: goto L_00412D04;
    case 402u: goto L_00412D3C;
    case 403u: goto L_00412D48;
    case 404u: goto L_00412D54;
    case 405u: goto L_00412D60;
    case 406u: goto L_00412D88;
    case 407u: goto L_00412D94;
    case 408u: goto L_00412DA0;
    case 409u: goto L_00412DAC;
    case 410u: goto L_00412DD4;
    case 411u: goto L_00412DE0;
    case 412u: goto L_00412DEC;
    case 413u: goto L_00412DF8;
    case 414u: goto L_00412E20;
    case 415u: goto L_00412E2C;
    case 416u: goto L_00412E38;
    case 417u: goto L_00412E44;
    case 418u: goto L_00412E4C;
    case 419u: goto L_00412E54;
    case 420u: goto L_00412E80;
    case 421u: goto L_00412EB8;
    case 422u: goto L_00412EEC;
    case 423u: goto L_00412EF8;
    case 424u: goto L_00412F20;
    case 425u: goto L_00412F54;
    case 426u: goto L_00412F60;
    case 427u: goto L_00412F88;
    case 428u: goto L_00412FBC;
    case 429u: goto L_00412FC8;
    case 430u: goto L_00412FF0;
    case 431u: goto L_00413024;
    case 432u: goto L_00413030;
    case 433u: goto L_00413058;
    case 434u: goto L_0041308C;
    case 435u: goto L_00413098;
    case 436u: goto L_004130C0;
    case 437u: goto L_004130F4;
    case 438u: goto L_00413100;
    case 439u: goto L_00413128;
    case 440u: goto L_0041315C;
    case 441u: goto L_00413168;
    case 442u: goto L_00413180;
    case 443u: goto L_004131A4;
    case 444u: goto L_004131C0;
    case 445u: goto L_004131DC;
    case 446u: goto L_004131EC;
    case 447u: goto L_00413210;
    case 448u: goto L_00413224;
    case 449u: goto L_00413230;
    case 450u: goto L_00413240;
    case 451u: goto L_00413258;
    case 452u: goto L_00413270;
    case 453u: goto L_00413284;
    case 454u: goto L_00413290;
    case 455u: goto L_004132D8;
    case 456u: goto L_004132E0;
    case 457u: goto L_004132F0;
    case 458u: goto L_00413308;
    case 459u: goto L_00413320;
    case 460u: goto L_00413334;
    case 461u: goto L_00413340;
    case 462u: goto L_00413350;
    case 463u: goto L_00413368;
    case 464u: goto L_00413380;
    case 465u: goto L_00413394;
    case 466u: goto L_004133A0;
    case 467u: goto L_004133B0;
    case 468u: goto L_004133C8;
    case 469u: goto L_004133E0;
    case 470u: goto L_004133FC;
    case 471u: goto L_00413430;
    case 472u: goto L_00413454;
    case 473u: goto L_0041345C;
    case 474u: goto L_0041348C;
    case 475u: goto L_004134B0;
    case 476u: goto L_004134CC;
    case 477u: goto L_004134F0;
    case 478u: goto L_00413500;
    case 479u: goto L_00413514;
    case 480u: goto L_0041352C;
    case 481u: goto L_00413550;
    case 482u: goto L_00413560;
    case 483u: goto L_0041358C;
    case 484u: goto L_00413598;
    case 485u: goto L_00413600;
    case 486u: goto L_0041362C;
    case 487u: goto L_00413650;
    case 488u: goto L_00413674;
    case 489u: goto L_0041368C;
    case 490u: goto L_004136B0;
    case 491u: goto L_004136DC;
    case 492u: goto L_004136F4;
    case 493u: goto L_0041370C;
    case 494u: goto L_00413718;
    case 495u: goto L_00413730;
    case 496u: goto L_00413758;
    case 497u: goto L_00413770;
    case 498u: goto L_004137A0;
    case 499u: goto L_004137C8;
    case 500u: goto L_004137D0;
    case 501u: goto L_004137DC;
    case 502u: goto L_004137E4;
    case 503u: goto L_004137EC;
    case 504u: goto L_00413808;
    case 505u: goto L_0041381C;
    case 506u: goto L_00413834;
    case 507u: goto L_0041383C;
    case 508u: goto L_00413854;
    case 509u: goto L_00413860;
    case 510u: goto L_00413878;
    case 511u: goto L_00413880;
    case 512u: goto L_004138A8;
    case 513u: goto L_004138C0;
    case 514u: goto L_004138C8;
    case 515u: goto L_004138E0;
    case 516u: goto L_004138E8;
    case 517u: goto L_004138F0;
    case 518u: goto L_00413920;
    case 519u: goto L_004139B0;
    case 520u: goto L_00413A60;
    case 521u: goto L_00413AA4;
    case 522u: goto L_00413AE4;
    case 523u: goto L_00413AEC;
    case 524u: goto L_00413B10;
    case 525u: goto L_00413B18;
    case 526u: goto L_00413B20;
    case 527u: goto L_00413B28;
    case 528u: goto L_00413B80;
    case 529u: goto L_00413BE8;
    case 530u: goto L_00413BF8;
    case 531u: goto L_00413C9C;
    case 532u: goto L_00413CAC;
    case 533u: goto L_00413CBC;
    case 534u: goto L_00413CD8;
    case 535u: goto L_00413CE8;
    case 536u: goto L_00413CF0;
    case 537u: goto L_00413D00;
    case 538u: goto L_00413D08;
    case 539u: goto L_00413D5C;
    case 540u: goto L_00413D6C;
    case 541u: goto L_00413D7C;
    case 542u: goto L_00413DE8;
    case 543u: goto L_00413E00;
    case 544u: goto L_00413E2C;
    case 545u: goto L_00413E34;
    case 546u: goto L_00413E8C;
    case 547u: goto L_00413EA0;
    case 548u: goto L_00413EB8;
    case 549u: goto L_00413F78;
    case 550u: goto L_00413F9C;
    default: bad_entry(c, 0x00410000u); return;
    }
L_00410000:
    c.budget -= 1;
L_00410004:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_00410010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00410014:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00410020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 202u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00410230; } }
    set32(c.r[3], 0u + 201u);
    c.budget -= 1;
L_00410040:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0041020C; } }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_004101C8; }
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_004101B4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_00410154; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0041013C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_00410104; }
    goto L_00410084;
L_00410080:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_00410084:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  goto L_00410094; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00410234; } }
L_00410094:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull | 40003ull;  goto L_004100B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004100A4u);  if (depth < kMaxDepth) unit_00BC(c, 60u, depth + 1u); else { c.pc = 0x00410590u; return; } if (c.pc != 0x004100A4u) [[unlikely]] return; }
L_004100A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_004100C8; }
    c.r[4].d[0] = 0ull | 40003ull;
    c.budget -= 1;
L_004100B0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004100BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x004100BCu) [[unlikely]] return; }
L_004100BC:
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
L_004100C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00410230; } }
L_004100C8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004100D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004100D4u) [[unlikely]] return; }
L_004100D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004100E4u); c.r[6].d[0] = 0ull | 40003ull;  if (depth < kMaxDepth) unit_00BB(c, 21u, depth + 1u); else { c.pc = 0x0040C290u; return; } if (c.pc != 0x004100E4u) [[unlikely]] return; }
L_004100E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004100F4u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004100F4u) [[unlikely]] return; }
L_004100F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00410230; } }
    goto L_00410104;
L_00410100:
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_00410104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041010Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0041010Cu) [[unlikely]] return; }
L_0041010C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410230; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410120u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 22u, depth + 1u); else { c.pc = 0x0040C2A0u; return; } if (c.pc != 0x00410120u) [[unlikely]] return; }
L_00410120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410128u); set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00410128u) [[unlikely]] return; }
L_00410128:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00410230; } }
L_0041013C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410144u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x00410144u) [[unlikely]] return; }
    goto L_00410144;
L_00410140:
    c.budget -= 1;
L_00410144:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00410230; } }
L_00410154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00410230; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041018C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 76u), c.r[5].w[0]);  goto L_00410230; }
    goto L_00410184;
L_00410180:
    st32((c.r[16].w[0] + 76u), c.r[5].w[0]);
    c.budget -= 1;
L_00410184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00410230; } }
L_0041018C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16752u));
    c.f[1] = ld32((c.r[4].w[0] + 16756u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16760u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_00410230; } }
L_004101B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004101BCu);  if (depth < kMaxDepth) unit_00BC(c, 85u, depth + 1u); else { c.pc = 0x004108E0u; return; } if (c.pc != 0x004101BCu) [[unlikely]] return; }
L_004101BC:
    set32(c.r[3], 0u + 200u);
    c.budget -= 1;
L_004101C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00410230; } }
L_004101C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004101DCu);  if (depth < kMaxDepth) unit_0026(c, 18u, depth + 1u); else { c.pc = 0x001B8140u; return; } if (c.pc != 0x004101DCu) [[unlikely]] return; }
L_004101DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], 0u + 50u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004101F4u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004101F4u) [[unlikely]] return; }
L_004101F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00410230; } }
L_0041020C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410214u);  if (depth < kMaxDepth) unit_00C1(c, 139u, depth + 1u); else { c.pc = 0x00424FD0u; return; } if (c.pc != 0x00410214u) [[unlikely]] return; }
L_00410214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041021Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x0041021Cu) [[unlikely]] return; }
L_0041021C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410224u);  if (depth < kMaxDepth) unit_0024(c, 504u, depth + 1u); else { c.pc = 0x001B3720u; return; } if (c.pc != 0x00410224u) [[unlikely]] return; }
L_00410224:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_00410230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00410234:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00410240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004104C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 31872u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00410000u < 16384u) { entry = entries_00BC[(t - 0x00410000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00410278:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_00410280:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  goto L_00410298; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_004104C8; } }
L_00410298:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004104CC; }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_004102B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 1132u);  goto L_004102D4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004102CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004102CCu) [[unlikely]] return; }
L_004102CC:
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[4], 0u + 1132u);
    c.budget -= 2;
L_004102D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004102DCu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004102DCu) [[unlikely]] return; }
L_004102DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 128u), c.r[4].w[0]);  goto L_004102FC; }
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004102F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 469u, depth + 1u); else { c.pc = 0x004133E0u; return; } if (c.pc != 0x004102F4u) [[unlikely]] return; }
L_004102F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 128u), c.r[4].w[0]);
    c.budget -= 2;
L_004102FC:
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_00410304:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  goto L_0041031C; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_004104C8; } }
L_0041031C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004104C8; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_00410334:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 256u);  goto L_00410358; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410350u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410350u) [[unlikely]] return; }
L_00410350:
    st32((c.r[16].w[0] + 124u), 0u);
    set32(c.r[4], 0u + 256u);
    c.budget -= 2;
L_00410358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00410360u) [[unlikely]] return; }
L_00410360:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 124u), c.r[4].w[0]);  goto L_00410384; }
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041037Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 436u, depth + 1u); else { c.pc = 0x0041B990u; return; } if (c.pc != 0x0041037Cu) [[unlikely]] return; }
L_0041037C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 124u), c.r[4].w[0]);
    c.budget -= 2;
L_00410384:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_0041038C:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  goto L_004103A4; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_004104C8; } }
L_004103A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004104C8; } }
    set32(c.r[2], 0u + 7u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_004103BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 196u);  goto L_004103E0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004103D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004103D8u) [[unlikely]] return; }
L_004103D8:
    st32((c.r[16].w[0] + 132u), 0u);
    set32(c.r[4], 0u + 196u);
    c.budget -= 2;
L_004103E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004103E8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004103E8u) [[unlikely]] return; }
L_004103E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 132u), c.r[4].w[0]);  goto L_0041040C; }
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410404u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 98u, depth + 1u); else { c.pc = 0x0040D000u; return; } if (c.pc != 0x00410404u) [[unlikely]] return; }
    goto L_00410404;
L_00410400:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00410404:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 132u), c.r[4].w[0]);
    c.budget -= 2;
L_0041040C:
    set32(c.r[3], 0u + 8u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_00410414:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  goto L_0041042C; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_004104C8; } }
L_0041042C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004104C8; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_00410440:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 1;
L_00410444:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 116u);  goto L_00410468; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410460u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410460u) [[unlikely]] return; }
L_00410460:
    st32((c.r[16].w[0] + 136u), 0u);
    set32(c.r[4], 0u + 116u);
    c.budget -= 2;
L_00410468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410470u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00410470u) [[unlikely]] return; }
L_00410470:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 136u), c.r[4].w[0]);  goto L_00410490; }
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410488u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 121u, depth + 1u); else { c.pc = 0x00410CD0u; return; } if (c.pc != 0x00410488u) [[unlikely]] return; }
L_00410488:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 136u), c.r[4].w[0]);
    c.budget -= 2;
L_00410490:
    set32(c.r[3], 0u + 10u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_00410498:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  goto L_004104B0; }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_004104C8; } }
L_004104B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004104C8; } }
    set32(c.r[3], 0u + 11u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_004104C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004104CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004104E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00410510; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_0041050C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 112u), 0u);  if (t) { goto L_00410510; } }
L_0041050C:
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 1;
L_00410510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00410520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410534u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x00410534u) [[unlikely]] return; }
L_00410534:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00410578; }
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 1;
L_00410540:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00410574; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00410574; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43D20000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410574u); set32(c.r[5], 0u + 70u);  if (depth < kMaxDepth) unit_003D(c, 43u, depth + 1u); else { c.pc = 0x00214610u; return; } if (c.pc != 0x00410574u) [[unlikely]] return; }
L_00410574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00410578:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00410580:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
    c.pc = 0x00410584u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00410590:
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  c.pc = t; return; }
L_004105A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004105C8u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004105C8u) [[unlikely]] return; }
L_004105C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004105E0u); set32(c.r[5], c.r[2].w[0] + 11u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004105E0u) [[unlikely]] return; }
L_004105E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004105F8u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004105F8u) [[unlikely]] return; }
L_004105F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410610u); set32(c.r[5], c.r[2].w[0] + 21u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410610u) [[unlikely]] return; }
L_00410610:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], 0u + 31u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410628u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410628u) [[unlikely]] return; }
L_00410628:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  goto L_00410658; }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], 0u + 31u);
    c.budget -= 2;
L_00410640:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410650u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410650u) [[unlikely]] return; }
L_00410650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041066C; } }
L_00410658:
    set32(c.r[5], 0u + 31u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410668u); set32(c.r[7], 0u + 30u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410668u) [[unlikely]] return; }
L_00410668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041066C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00410680:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 10;
L_004106A8:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 104u)));  goto L_004106E8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 1u);  if (t) { goto L_004106C8; } }
L_004106C0:
    c.r[2].d[0] = c.r[17].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_004106C8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], 0u + 7u);  goto L_004106D8; }
    set32(c.r[7], 0u + 3u);
    c.budget -= 1;
L_004106D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004106E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004106E4u) [[unlikely]] return; }
L_004106E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 1;
L_004106E8:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00410728; }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 1u);  if (t) { goto L_00410708; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00410708:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], 0u + 6u);  goto L_00410718; }
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_00410718:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410724u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410724u) [[unlikely]] return; }
L_00410724:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00410728:
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004106A8u | kUnwind; return; } goto L_004106A8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 108u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
L_00410740:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00410758; } }
    set32(c.r[3], c.r[6].w[0] + 11u);
    set32(c.r[2], c.r[6].w[0] + 12u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 4;
L_00410758:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[4].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00410774; }
    set32(c.r[3], c.r[6].w[0] + 11u);
    set32(c.r[2], c.r[6].w[0] + 12u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 5;
L_00410774:
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00410740u | kUnwind; return; } goto L_00410740; } }
    set32(c.r[19], ld32((c.r[29].w[0] + 100u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[17], c.r[20].w[0] << 2);
    c.budget -= 4;
L_00410790:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 104u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  goto L_004107C8; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[5].d[0];  if (t) { goto L_004107C4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004107BCu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004107BCu) [[unlikely]] return; }
L_004107BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);  if (t) { goto L_004107D8; } }
L_004107C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_004107C8:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004107D4u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004107D4u) [[unlikely]] return; }
L_004107D4:
    set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_004107D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_00410804; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[5].d[0];  if (t) { goto L_00410800; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410800u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410800u) [[unlikely]] return; }
L_00410800:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00410804:
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410790u | kUnwind; return; } goto L_00410790; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 2;
L_00410818:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 104u)));  goto L_00410858; }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 21u);  if (t) { goto L_00410838; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00410838:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0041083C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], 0u + 5u);  goto L_00410848; }
    set32(c.r[7], 0u + 3u);
    c.budget -= 1;
L_00410848:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410854u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410854u) [[unlikely]] return; }
L_00410854:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 1;
L_00410858:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00410898; }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 21u);  if (t) { goto L_00410878; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00410878:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], 0u + 4u);  goto L_00410888; }
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_00410888:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410894u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410894u) [[unlikely]] return; }
L_00410894:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00410898:
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410818u | kUnwind; return; } goto L_00410818; }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 31u);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004108BCu); set32(c.r[7], c.r[2].w[0] + 11u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004108BCu) [[unlikely]] return; }
L_004108BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004108E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 7;
L_004108FC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0041091C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], c.r[16].w[0] + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410918u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410918u) [[unlikely]] return; }
L_00410918:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0041091C:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004108FCu | kUnwind; return; } goto L_004108FC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410940u); set32(c.r[5], c.r[2].w[0] + 11u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410940u) [[unlikely]] return; }
L_00410940:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[7], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410958u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410958u) [[unlikely]] return; }
L_00410958:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 2;
L_00410960:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 84u)));  goto L_00410984; }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], c.r[16].w[0] + 21u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041097Cu); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041097Cu) [[unlikely]] return; }
L_0041097C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_004109B8; } }
L_00410984:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 21u);  if (t) { goto L_00410998; } }
    c.r[2].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00410998:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], 0u + 10u);  goto L_004109A8; }
    set32(c.r[7], 0u + 8u);
    c.budget -= 1;
L_004109A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004109B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004109B4u) [[unlikely]] return; }
L_004109B4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004109B8:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410960u | kUnwind; return; } goto L_00410960; }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], 0u + 31u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004109D8u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004109D8u) [[unlikely]] return; }
L_004109D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004109F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 7;
L_00410A0C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00410A2C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], c.r[16].w[0] + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A28u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410A28u) [[unlikely]] return; }
L_00410A28:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00410A2C:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410A0Cu | kUnwind; return; } goto L_00410A0C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[7], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A50u); set32(c.r[5], c.r[2].w[0] + 11u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410A50u) [[unlikely]] return; }
L_00410A50:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A68u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410A68u) [[unlikely]] return; }
L_00410A68:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 2;
L_00410A70:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 84u)));  goto L_00410A94; }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], c.r[16].w[0] + 21u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A8Cu); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410A8Cu) [[unlikely]] return; }
L_00410A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00410AC8; } }
L_00410A94:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 21u);  if (t) { goto L_00410AA8; } }
    c.r[2].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00410AA8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], 0u + 11u);  goto L_00410AB8; }
    set32(c.r[7], 0u + 9u);
    c.budget -= 1;
L_00410AB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410AC4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410AC4u) [[unlikely]] return; }
L_00410AC4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00410AC8:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410A70u | kUnwind; return; } goto L_00410A70; }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 31u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410AECu); set32(c.r[7], c.r[2].w[0] + 21u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00410AECu) [[unlikely]] return; }
L_00410AEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00410B00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 7;
L_00410B1C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00410B3C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410B38u); set32(c.r[5], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410B38u) [[unlikely]] return; }
L_00410B38:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00410B3C:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410B1Cu | kUnwind; return; } goto L_00410B1C; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 2;
L_00410B50:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410B60u); set32(c.r[5], c.r[16].w[0] + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410B60u) [[unlikely]] return; }
L_00410B60:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410B50u | kUnwind; return; } goto L_00410B50; }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410B84u); set32(c.r[5], 0u + 31u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410B84u) [[unlikely]] return; }
L_00410B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00410BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 7;
L_00410BBC:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00410BDC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410BD8u); set32(c.r[5], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410BD8u) [[unlikely]] return; }
L_00410BD8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00410BDC:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410BBCu | kUnwind; return; } goto L_00410BBC; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 2;
L_00410BF0:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410C00u); set32(c.r[5], c.r[16].w[0] + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410C00u) [[unlikely]] return; }
L_00410C00:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410BF0u | kUnwind; return; } goto L_00410BF0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410C24u); set32(c.r[5], 0u + 31u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410C24u) [[unlikely]] return; }
L_00410C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00410C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00410C68; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00410C84; } }
L_00410C68:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00410C84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410C98u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00C0(c, 435u, depth + 1u); else { c.pc = 0x004230B0u; return; } if (c.pc != 0x00410C98u) [[unlikely]] return; }
L_00410C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410CA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 436u, depth + 1u); else { c.pc = 0x004230E0u; return; } if (c.pc != 0x00410CA0u) [[unlikely]] return; }
L_00410CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410CA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 28u, depth + 1u); else { c.pc = 0x00410240u; return; } if (c.pc != 0x00410CA8u) [[unlikely]] return; }
L_00410CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410CB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 54u, depth + 1u); else { c.pc = 0x004104E0u; return; } if (c.pc != 0x00410CB0u) [[unlikely]] return; }
L_00410CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00410CC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410520u | kUnwind; return; } goto L_00410520; }
L_00410CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410CECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 433u, depth + 1u); else { c.pc = 0x00423030u; return; } if (c.pc != 0x00410CECu) [[unlikely]] return; }
L_00410CEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14880u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D24u); st32((c.r[16].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_00BC(c, 224u, depth + 1u); else { c.pc = 0x00411B40u; return; } if (c.pc != 0x00410D24u) [[unlikely]] return; }
L_00410D24:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 872u);  goto L_00410D50; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), 0u);  goto L_00410D4C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410D48u) [[unlikely]] return; }
L_00410D48:
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_00410D4C:
    set32(c.r[4], 0u + 872u);
    c.budget -= 1;
L_00410D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D58u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00410D58u) [[unlikely]] return; }
L_00410D58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  goto L_00410D70; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x00410D6Cu) [[unlikely]] return; }
L_00410D6C:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_00410D70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D84u); st32((c.r[2].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 489u, depth + 1u); else { c.pc = 0x00423AD0u; return; } if (c.pc != 0x00410D84u) [[unlikely]] return; }
L_00410D84:
    set32(c.r[8], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[7], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[8].w[0] + 752u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[7].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[5].w[0] + 16768u));
    c.f[1] = ld32((c.r[4].w[0] + 16772u));
    c.f[0] = ld32((c.r[3].w[0] + 16776u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00410DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00410EE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14880u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  goto L_00410E44; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 88u), 0u);  goto L_00410E40; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410E3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410E3Cu) [[unlikely]] return; }
L_00410E3C:
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 1;
L_00410E40:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 1;
L_00410E44:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00410E68; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 80u), 0u);  goto L_00410E68; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410E64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410E64u) [[unlikely]] return; }
L_00410E64:
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 1;
L_00410E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410E70u);  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003C3510u; return; } if (c.pc != 0x00410E70u) [[unlikely]] return; }
L_00410E70:
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410E7Cu); set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00410E7Cu) [[unlikely]] return; }
L_00410E7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  goto L_00410EA0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410E98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410E98u) [[unlikely]] return; }
L_00410E98:
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 2;
L_00410EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410EA8u);  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00410EA8u) [[unlikely]] return; }
L_00410EA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 112u), 0u);  if (t) { goto L_00410EC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410EC8u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00410EC8u) [[unlikely]] return; }
L_00410EC8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00410EE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410EE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00410EE0u) [[unlikely]] return; }
L_00410EE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00410EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00410F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_00410FA4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_00410F30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00410FF8; } }
L_00410F30:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 124u);  goto L_00410F50; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410F48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410F48u) [[unlikely]] return; }
L_00410F48:
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[4], 0u + 124u);
    c.budget -= 2;
L_00410F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410F58u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00410F58u) [[unlikely]] return; }
L_00410F58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  goto L_00410F88; }
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 31824u);
    set32(c.r[8], c.r[8].w[0] - 31808u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410F84u); set32(c.r[9], 0u + 3u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x00410F84u) [[unlikely]] return; }
L_00410F84:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_00410F88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410F94u); set32(c.r[5], 0u + 2000u);  if (depth < kMaxDepth) unit_008B(c, 497u, depth + 1u); else { c.pc = 0x0034FE20u; return; } if (c.pc != 0x00410F94u) [[unlikely]] return; }
L_00410F94:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00410FF4; } }
L_00410FA4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00410FF4; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 100u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] + 100u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 16784u));
    c.f[1] = ld32((c.r[4].w[0] + 16788u));
    c.f[0] = ld32((c.r[3].w[0] + 16792u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 15;
L_00410FF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00410FF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00411010:
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_0041105C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_00411030; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004110A4; } }
L_00411030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004110A4; } }
L_0041105C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004110A4; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st32((c.r[4].w[0] + 4u), c.r[7].w[0]);
    c.f[2] = ld32((c.r[6].w[0] + 16800u));
    c.f[1] = ld32((c.r[5].w[0] + 16804u));
    c.f[0] = ld32((c.r[3].w[0] + 16808u));
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 14;
L_004110A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004110B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0041124C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  goto L_0041121C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004111E4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 4111u);  goto L_004110F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00411274; } }
L_004110F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411100u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00411100u) [[unlikely]] return; }
L_00411100:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411114u);  if (depth < kMaxDepth) unit_0051(c, 77u, depth + 1u); else { c.pc = 0x00264970u; return; } if (c.pc != 0x00411114u) [[unlikely]] return; }
L_00411114:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411124u);  if (depth < kMaxDepth) unit_0026(c, 19u, depth + 1u); else { c.pc = 0x001B8150u; return; } if (c.pc != 0x00411124u) [[unlikely]] return; }
L_00411124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041112Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 224u, depth + 1u); else { c.pc = 0x00411B40u; return; } if (c.pc != 0x0041112Cu) [[unlikely]] return; }
L_0041112C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411134u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 227u, depth + 1u); else { c.pc = 0x00411BA0u; return; } if (c.pc != 0x00411134u) [[unlikely]] return; }
L_00411134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041113Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 387u, depth + 1u); else { c.pc = 0x00412BB0u; return; } if (c.pc != 0x0041113Cu) [[unlikely]] return; }
L_0041113C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x00411148u) [[unlikely]] return; }
L_00411148:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411160u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411160u) [[unlikely]] return; }
L_00411160:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411178u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411178u) [[unlikely]] return; }
L_00411178:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411190u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411190u) [[unlikely]] return; }
L_00411190:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004111A8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004111A8u) [[unlikely]] return; }
L_004111A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004111B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 331u, depth + 1u); else { c.pc = 0x004122C0u; return; } if (c.pc != 0x004111B4u) [[unlikely]] return; }
L_004111B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004111C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 352u, depth + 1u); else { c.pc = 0x004125B0u; return; } if (c.pc != 0x004111C0u) [[unlikely]] return; }
L_004111C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004111CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 381u, depth + 1u); else { c.pc = 0x00412AE0u; return; } if (c.pc != 0x004111CCu) [[unlikely]] return; }
L_004111CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00411270; } }
L_004111E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004111ECu);  if (depth < kMaxDepth) unit_00C0(c, 497u, depth + 1u); else { c.pc = 0x00423BE0u; return; } if (c.pc != 0x004111ECu) [[unlikely]] return; }
L_004111EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x420C0000u);  goto L_00411208; }
    c.r[4].d[0] = 0ull | 40005ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411204u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x00411204u) [[unlikely]] return; }
L_00411204:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.budget -= 1;
L_00411208:
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00411270; } }
L_0041121C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411228u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00411228u) [[unlikely]] return; }
L_00411228:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411234u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 381u, depth + 1u); else { c.pc = 0x00412AE0u; return; } if (c.pc != 0x00411234u) [[unlikely]] return; }
L_00411234:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00411270; } }
L_0041124C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16816u));
    c.f[1] = ld32((c.r[4].w[0] + 16820u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16824u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 9;
L_00411270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00411274:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00411280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004112F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004112B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004119EC; } }
L_004112B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004112C0u);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x004112C0u) [[unlikely]] return; }
L_004112C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  goto L_004112E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004112D0u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x004112D0u) [[unlikely]] return; }
L_004112D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004119E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004112E0u);  if (depth < kMaxDepth) unit_00C1(c, 553u, depth + 1u); else { c.pc = 0x00426FC0u; return; } if (c.pc != 0x004112E0u) [[unlikely]] return; }
L_004112E0:
    st32((c.r[28].w[0] - 30152u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 2;
L_004112E8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004119E8; } }
L_004112F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004112FCu);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x004112FCu) [[unlikely]] return; }
L_004112FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  goto L_00411388; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30152u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00411328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411318u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x00411318u) [[unlikely]] return; }
L_00411318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041133C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0041133C; } }
L_00411328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411330u);  if (depth < kMaxDepth) unit_00C1(c, 573u, depth + 1u); else { c.pc = 0x00427210u; return; } if (c.pc != 0x00411330u) [[unlikely]] return; }
L_00411330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041133C; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0041133C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00411384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041134Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 442u, depth + 1u); else { c.pc = 0x00413180u; return; } if (c.pc != 0x0041134Cu) [[unlikely]] return; }
L_0041134C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411358u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00BC(c, 352u, depth + 1u); else { c.pc = 0x004125B0u; return; } if (c.pc != 0x00411358u) [[unlikely]] return; }
L_00411358:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16832u));
    c.f[1] = ld32((c.r[4].w[0] + 16836u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16840u));
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), 0u);  if (t) { goto L_004119E8; } }
L_00411384:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 1;
L_00411388:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 96u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004113A4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004113A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004113BC; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_004113BC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[3].d[0] = 0ull | 32768ull;  goto L_00411458; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004113CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 442u, depth + 1u); else { c.pc = 0x00413180u; return; } if (c.pc != 0x004113CCu) [[unlikely]] return; }
L_004113CC:
    set32(c.r[4], 0u + 7u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004113DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004113DCu) [[unlikely]] return; }
L_004113DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004113FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00411418; } }
L_004113FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041140C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00411414; } }
L_0041140C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411414u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00411414u) [[unlikely]] return; }
L_00411414:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00411418:
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411428u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 460u, depth + 1u); else { c.pc = 0x00423620u; return; } if (c.pc != 0x00411428u) [[unlikely]] return; }
L_00411428:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411434u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 352u, depth + 1u); else { c.pc = 0x004125B0u; return; } if (c.pc != 0x00411434u) [[unlikely]] return; }
L_00411434:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411440u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 331u, depth + 1u); else { c.pc = 0x004122C0u; return; } if (c.pc != 0x00411440u) [[unlikely]] return; }
L_00411440:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041144Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 381u, depth + 1u); else { c.pc = 0x00412AE0u; return; } if (c.pc != 0x0041144Cu) [[unlikely]] return; }
L_0041144C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_004119E8; } }
L_00411458:
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00411470; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00411470:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00411488; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00411488:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  goto L_00411888; }
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_004114B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004114BC; } }
L_004114B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004114B8u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004114B8u) [[unlikely]] return; }
L_004114B8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004114BC:
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004114D4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004114D4:
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00411884; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_00411500; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00411508; } }
L_00411500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411508u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00411508u) [[unlikely]] return; }
L_00411508:
    set32(c.r[16], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041152C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00411534; } }
L_0041152C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411534u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00411534u) [[unlikely]] return; }
L_00411534:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411540u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 460u, depth + 1u); else { c.pc = 0x00423620u; return; } if (c.pc != 0x00411540u) [[unlikely]] return; }
L_00411540:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_00411560; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0041156C; } }
L_00411560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411568u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00411568u) [[unlikely]] return; }
L_00411568:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041156C:
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);  goto L_004115A0; }
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411588u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00411588u) [[unlikely]] return; }
L_00411588:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411594u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 381u, depth + 1u); else { c.pc = 0x00412AE0u; return; } if (c.pc != 0x00411594u) [[unlikely]] return; }
L_00411594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041159Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 420u, depth + 1u); else { c.pc = 0x00412E80u; return; } if (c.pc != 0x0041159Cu) [[unlikely]] return; }
L_0041159C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 1;
L_004115A0:
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_004115C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004115D0; } }
L_004115C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004115CCu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004115CCu) [[unlikely]] return; }
L_004115CC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004115D0:
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_004119E8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004115FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_0041161C; } }
L_004115FC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041160C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00411618; } }
L_0041160C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411614u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00411614u) [[unlikely]] return; }
L_00411614:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00411618:
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 1;
L_0041161C:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_00411808; }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_00411788; }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_004116FC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_00411654; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004119E8; } }
L_00411654:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_00411670; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0041167C; } }
L_00411670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411678u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00411678u) [[unlikely]] return; }
L_00411678:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041167C:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_0041169C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004116A4; } }
L_0041169C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004116A4u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x004116A4u) [[unlikely]] return; }
L_004116A4:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004116C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004116DC; } }
L_004116C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 28u)));  goto L_004116D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004116D8; } }
L_004116D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004116D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004116D8u) [[unlikely]] return; }
L_004116D8:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_004116DC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004116F4u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 381u, depth + 1u); else { c.pc = 0x00412AE0u; return; } if (c.pc != 0x004116F4u) [[unlikely]] return; }
L_004116F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004119E8; } }
L_004116FC:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00411718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00411720; } }
L_00411718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411720u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00411720u) [[unlikely]] return; }
L_00411720:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041173C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00411758; } }
L_0041173C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 28u)));  goto L_0041174C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00411754; } }
L_0041174C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411754u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00411754u) [[unlikely]] return; }
L_00411754:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00411758:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00411778; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411770u); c.r[5].d[0] = c.r[2].d[0] | 44875ull;  if (depth < kMaxDepth) unit_00BC(c, 444u, depth + 1u); else { c.pc = 0x004131C0u; return; } if (c.pc != 0x00411770u) [[unlikely]] return; }
L_00411770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004119E8; } }
L_00411778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411780u);  if (depth < kMaxDepth) unit_00BC(c, 442u, depth + 1u); else { c.pc = 0x00413180u; return; } if (c.pc != 0x00411780u) [[unlikely]] return; }
L_00411780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004119E8; } }
L_00411788:
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004117A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004117B0; } }
L_004117A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004117ACu);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x004117ACu) [[unlikely]] return; }
L_004117AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004117B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004117CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_004117EC; } }
L_004117CC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_004117DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004117E8; } }
L_004117DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004117E4u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004117E4u) [[unlikely]] return; }
L_004117E4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004117E8:
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 1;
L_004117EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004119E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004117FCu); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_003D(c, 37u, depth + 1u); else { c.pc = 0x00214580u; return; } if (c.pc != 0x004117FCu) [[unlikely]] return; }
L_004117FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_004119E8; } }
L_00411808:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00411824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041182C; } }
L_00411824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041182Cu);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x0041182Cu) [[unlikely]] return; }
L_0041182C:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00411848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00411864; } }
L_00411848:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 28u)));  goto L_00411858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00411860; } }
L_00411858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411860u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00411860u) [[unlikely]] return; }
L_00411860:
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00411864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041186Cu);  if (depth < kMaxDepth) unit_00C1(c, 362u, depth + 1u); else { c.pc = 0x00425F80u; return; } if (c.pc != 0x0041186Cu) [[unlikely]] return; }
L_0041186C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411878u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 444u, depth + 1u); else { c.pc = 0x004131C0u; return; } if (c.pc != 0x00411878u) [[unlikely]] return; }
L_00411878:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_004119E8; } }
L_00411884:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 1;
L_00411888:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 80u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);  goto L_0041198C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004118C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_004118E0; } }
L_004118C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_004118D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004118DC; } }
L_004118D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004118D8u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004118D8u) [[unlikely]] return; }
L_004118D8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004118DC:
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 1;
L_004118E0:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00411934; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_00411900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004119E8; } }
L_00411900:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041190Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0041190Cu) [[unlikely]] return; }
L_0041190C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411914u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 261u, depth + 1u); else { c.pc = 0x004257E0u; return; } if (c.pc != 0x00411914u) [[unlikely]] return; }
L_00411914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041191Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 387u, depth + 1u); else { c.pc = 0x00412BB0u; return; } if (c.pc != 0x0041191Cu) [[unlikely]] return; }
L_0041191C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411928u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 381u, depth + 1u); else { c.pc = 0x00412AE0u; return; } if (c.pc != 0x00411928u) [[unlikely]] return; }
L_00411928:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_004119E8; } }
L_00411934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041193Cu);  if (depth < kMaxDepth) unit_00BC(c, 442u, depth + 1u); else { c.pc = 0x00413180u; return; } if (c.pc != 0x0041193Cu) [[unlikely]] return; }
L_0041193C:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041194Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0041194Cu) [[unlikely]] return; }
L_0041194C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411958u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00BC(c, 352u, depth + 1u); else { c.pc = 0x004125B0u; return; } if (c.pc != 0x00411958u) [[unlikely]] return; }
L_00411958:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16848u));
    c.f[1] = ld32((c.r[4].w[0] + 16852u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16856u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.r[4].w[0]);  if (t) { goto L_004119E8; } }
L_0041198C:
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004119E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004119A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 442u, depth + 1u); else { c.pc = 0x00413180u; return; } if (c.pc != 0x004119A4u) [[unlikely]] return; }
L_004119A4:
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004119B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004119B4u) [[unlikely]] return; }
L_004119B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004119C0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00BC(c, 352u, depth + 1u); else { c.pc = 0x004125B0u; return; } if (c.pc != 0x004119C0u) [[unlikely]] return; }
L_004119C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16864u));
    c.f[1] = ld32((c.r[4].w[0] + 16868u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16872u));
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 10;
L_004119E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004119EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00411A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_00411B00; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  goto L_00411AB8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  goto L_00411A3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00411B34; } }
L_00411A3C:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A48u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00411A48u) [[unlikely]] return; }
L_00411A48:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A5Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00411A5Cu) [[unlikely]] return; }
L_00411A5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A68u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00BC(c, 331u, depth + 1u); else { c.pc = 0x004122C0u; return; } if (c.pc != 0x00411A68u) [[unlikely]] return; }
L_00411A68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A74u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00BC(c, 381u, depth + 1u); else { c.pc = 0x00412AE0u; return; } if (c.pc != 0x00411A74u) [[unlikely]] return; }
L_00411A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A7Cu); set32(c.r[4], 0u + 4111u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00411A7Cu) [[unlikely]] return; }
L_00411A7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A90u);  if (depth < kMaxDepth) unit_0051(c, 77u, depth + 1u); else { c.pc = 0x00264970u; return; } if (c.pc != 0x00411A90u) [[unlikely]] return; }
L_00411A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411AA0u);  if (depth < kMaxDepth) unit_0026(c, 19u, depth + 1u); else { c.pc = 0x001B8150u; return; } if (c.pc != 0x00411AA0u) [[unlikely]] return; }
L_00411AA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00411B30; } }
L_00411AB8:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411AC8u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411AC8u) [[unlikely]] return; }
L_00411AC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00411B30; } }
L_00411B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411B08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 486u, depth + 1u); else { c.pc = 0x0034FCB0u; return; } if (c.pc != 0x00411B08u) [[unlikely]] return; }
L_00411B08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16880u));
    c.f[1] = ld32((c.r[4].w[0] + 16884u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16888u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_00411B30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00411B34:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00411B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_00411B7C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), 0u);  goto L_00411B78; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411B74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411B74u) [[unlikely]] return; }
L_00411B74:
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_00411B78:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_00411B7C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00411B90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411B8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 486u, depth + 1u); else { c.pc = 0x0034FCB0u; return; } if (c.pc != 0x00411B8Cu) [[unlikely]] return; }
L_00411B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00411B90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00411BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 64u);  goto L_00411BE8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), 0u);  goto L_00411BE4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411BE0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411BE0u) [[unlikely]] return; }
L_00411BE0:
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_00411BE4:
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00411BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411BF0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411BF0u) [[unlikely]] return; }
L_00411BF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  goto L_00411C08; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411C04u) [[unlikely]] return; }
L_00411C04:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_00411C08:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C28u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411C28u) [[unlikely]] return; }
L_00411C28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411C40; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411C3Cu) [[unlikely]] return; }
L_00411C3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C48u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411C48u) [[unlikely]] return; }
L_00411C48:
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C54u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411C54u) [[unlikely]] return; }
L_00411C54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411C6C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411C68u) [[unlikely]] return; }
L_00411C68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C74u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411C74u) [[unlikely]] return; }
L_00411C74:
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C80u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411C80u) [[unlikely]] return; }
L_00411C80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411C98; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C94u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411C94u) [[unlikely]] return; }
L_00411C94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411CA0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411CA0u) [[unlikely]] return; }
L_00411CA0:
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411CACu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411CACu) [[unlikely]] return; }
L_00411CAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411CC4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411CC0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411CC0u) [[unlikely]] return; }
L_00411CC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411CCCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411CCCu) [[unlikely]] return; }
L_00411CCC:
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411CD8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411CD8u) [[unlikely]] return; }
L_00411CD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411CF0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411CECu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411CECu) [[unlikely]] return; }
L_00411CEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411CF8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411CF8u) [[unlikely]] return; }
L_00411CF8:
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D04u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411D04u) [[unlikely]] return; }
L_00411D04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411D1C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D18u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411D18u) [[unlikely]] return; }
L_00411D18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D24u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411D24u) [[unlikely]] return; }
L_00411D24:
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D30u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411D30u) [[unlikely]] return; }
L_00411D30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411D48; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D44u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411D44u) [[unlikely]] return; }
L_00411D44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D50u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411D50u) [[unlikely]] return; }
L_00411D50:
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D5Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411D5Cu) [[unlikely]] return; }
L_00411D5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411D74; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D70u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411D70u) [[unlikely]] return; }
L_00411D70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D7Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411D7Cu) [[unlikely]] return; }
L_00411D7C:
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D88u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411D88u) [[unlikely]] return; }
L_00411D88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411DA0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D9Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411D9Cu) [[unlikely]] return; }
L_00411D9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411DA8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411DA8u) [[unlikely]] return; }
L_00411DA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00411DC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00411DD0; } }
L_00411DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411DD0u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00411DD0u) [[unlikely]] return; }
L_00411DD0:
    set32(c.r[3], 0u + 1u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411DE8u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411DE8u) [[unlikely]] return; }
L_00411DE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00411E00; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411DFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411DFCu) [[unlikely]] return; }
L_00411DFC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00411E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411E08u) [[unlikely]] return; }
L_00411E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E10u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411E10u) [[unlikely]] return; }
L_00411E10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00411E28; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E24u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411E24u) [[unlikely]] return; }
L_00411E24:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00411E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411E30u) [[unlikely]] return; }
L_00411E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E38u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411E38u) [[unlikely]] return; }
L_00411E38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411E50; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E4Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411E4Cu) [[unlikely]] return; }
L_00411E4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E58u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411E58u) [[unlikely]] return; }
L_00411E58:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_00411E78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00411E80; } }
L_00411E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E80u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00411E80u) [[unlikely]] return; }
L_00411E80:
    set32(c.r[3], 0u + 1u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E98u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411E98u) [[unlikely]] return; }
L_00411E98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00411EB0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411EACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411EACu) [[unlikely]] return; }
L_00411EAC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00411EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411EB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411EB8u) [[unlikely]] return; }
L_00411EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411EC0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411EC0u) [[unlikely]] return; }
L_00411EC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411ED8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411ED4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411ED4u) [[unlikely]] return; }
L_00411ED4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411EE0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411EE0u) [[unlikely]] return; }
L_00411EE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_00411F00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00411F08; } }
L_00411F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F08u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00411F08u) [[unlikely]] return; }
L_00411F08:
    set32(c.r[3], 0u + 1u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F20u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411F20u) [[unlikely]] return; }
L_00411F20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00411F38; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411F34u) [[unlikely]] return; }
L_00411F34:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00411F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411F40u) [[unlikely]] return; }
L_00411F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F48u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411F48u) [[unlikely]] return; }
L_00411F48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00411F60; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F5Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411F5Cu) [[unlikely]] return; }
L_00411F5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00411F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411F68u) [[unlikely]] return; }
L_00411F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F70u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411F70u) [[unlikely]] return; }
L_00411F70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411F88; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F84u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411F84u) [[unlikely]] return; }
L_00411F84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F90u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411F90u) [[unlikely]] return; }
L_00411F90:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 3u);  goto L_00411FB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00411FB8; } }
L_00411FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411FB8u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00411FB8u) [[unlikely]] return; }
L_00411FB8:
    set32(c.r[3], 0u + 1u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411FD0u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411FD0u) [[unlikely]] return; }
L_00411FD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00411FE8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411FE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00411FE4u) [[unlikely]] return; }
L_00411FE4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00411FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411FF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00411FF0u) [[unlikely]] return; }
L_00411FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411FF8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00411FF8u) [[unlikely]] return; }
L_00411FF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00412010; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041200Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0041200Cu) [[unlikely]] return; }
L_0041200C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00412010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412018u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00412018u) [[unlikely]] return; }
L_00412018:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 4u);  goto L_00412038; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412040; } }
L_00412038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412040u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412040u) [[unlikely]] return; }
L_00412040:
    set32(c.r[3], 0u + 1u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412058u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00412058u) [[unlikely]] return; }
L_00412058:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00412070; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041206Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0041206Cu) [[unlikely]] return; }
L_0041206C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412078u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00412078u) [[unlikely]] return; }
L_00412078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412080u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00412080u) [[unlikely]] return; }
L_00412080:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00412098; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412094u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00412094u) [[unlikely]] return; }
L_00412094:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00412098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004120A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x004120A0u) [[unlikely]] return; }
L_004120A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 5u);  goto L_004120C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004120C8; } }
L_004120C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004120C8u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x004120C8u) [[unlikely]] return; }
L_004120C8:
    set32(c.r[3], 0u + 1u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004120E0u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x004120E0u) [[unlikely]] return; }
L_004120E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_004120F8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004120F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x004120F4u) [[unlikely]] return; }
L_004120F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004120F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412100u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00412100u) [[unlikely]] return; }
L_00412100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412108u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00412108u) [[unlikely]] return; }
L_00412108:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00412120; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041211Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0041211Cu) [[unlikely]] return; }
L_0041211C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00412120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412128u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00412128u) [[unlikely]] return; }
L_00412128:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 6u);  goto L_00412148; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412150; } }
L_00412148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412150u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412150u) [[unlikely]] return; }
L_00412150:
    set32(c.r[3], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[4], 0u + 64u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041216Cu); st32((c.r[2].w[0] + 44u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041216Cu) [[unlikely]] return; }
L_0041216C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00412184; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412180u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00412180u) [[unlikely]] return; }
L_00412180:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041218Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0041218Cu) [[unlikely]] return; }
L_0041218C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412194u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00412194u) [[unlikely]] return; }
L_00412194:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_004121AC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121A8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x004121A8u) [[unlikely]] return; }
L_004121A8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004121AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x004121B4u) [[unlikely]] return; }
L_004121B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121BCu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x004121BCu) [[unlikely]] return; }
L_004121BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_004121D4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121D0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x004121D0u) [[unlikely]] return; }
L_004121D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004121D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x004121DCu) [[unlikely]] return; }
L_004121DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121E4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x004121E4u) [[unlikely]] return; }
L_004121E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_004121FC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121F8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x004121F8u) [[unlikely]] return; }
L_004121F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004121FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412204u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00412204u) [[unlikely]] return; }
L_00412204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041220Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041220Cu) [[unlikely]] return; }
L_0041220C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00412224; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412220u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00412220u) [[unlikely]] return; }
L_00412220:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041222Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0041222Cu) [[unlikely]] return; }
L_0041222C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412234u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00412234u) [[unlikely]] return; }
L_00412234:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_0041224C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412248u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00412248u) [[unlikely]] return; }
L_00412248:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041224C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x00412254u) [[unlikely]] return; }
L_00412254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041225Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041225Cu) [[unlikely]] return; }
L_0041225C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00412274; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412270u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00412270u) [[unlikely]] return; }
L_00412270:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041227Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0041227Cu) [[unlikely]] return; }
L_0041227C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412284u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00412284u) [[unlikely]] return; }
L_00412284:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0041229C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412298u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x00412298u) [[unlikely]] return; }
L_00412298:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041229C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004122A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x004122A4u) [[unlikely]] return; }
L_004122A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004122C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004122F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00412318; } }
L_004122F8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_00412308; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00412314; } }
L_00412308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412310u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00412310u) [[unlikely]] return; }
L_00412310:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412314:
    set32(c.r[16], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 1;
L_00412318:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_00412514; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_00412398; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 104u)));  goto L_00412340; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00412590; } }
L_00412340:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412350u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412350u) [[unlikely]] return; }
L_00412350:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412368u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412368u) [[unlikely]] return; }
L_00412368:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041237Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041237Cu) [[unlikely]] return; }
L_0041237C:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412390u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00412390u) [[unlikely]] return; }
L_00412390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041258C; } }
L_00412398:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004123B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004123D0; } }
L_004123B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_004123C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004123CC; } }
L_004123C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004123CCu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004123CCu) [[unlikely]] return; }
L_004123CC:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_004123D0:
    set32(c.r[7], 0u + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[7].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 84u)));  goto L_004124C0; }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 84u)));  goto L_0041246C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[7].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 104u)));  goto L_00412444; }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 104u)));  goto L_00412418; }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[7], c.r[16].w[0] + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412410u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00412410u) [[unlikely]] return; }
L_00412410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041258C; } }
L_00412418:
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412428u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00412428u) [[unlikely]] return; }
L_00412428:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041243Cu); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041243Cu) [[unlikely]] return; }
L_0041243C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041258C; } }
L_00412444:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412450u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00412450u) [[unlikely]] return; }
L_00412450:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412464u); set32(c.r[7], 0u + 13u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00412464u) [[unlikely]] return; }
L_00412464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041258C; } }
L_0041246C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[7].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 104u)));  goto L_004124A8; }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041248Cu);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041248Cu) [[unlikely]] return; }
L_0041248C:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004124A0u); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004124A0u) [[unlikely]] return; }
L_004124A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041258C; } }
L_004124A8:
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004124B8u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004124B8u) [[unlikely]] return; }
L_004124B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041258C; } }
L_004124C0:
    set32(c.r[7], 0u + 7u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[7].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 104u)));  goto L_004124D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 104u)));  if (t) { goto L_004124EC; } }
L_004124D4:
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004124E4u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004124E4u) [[unlikely]] return; }
L_004124E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041258C; } }
L_004124EC:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004124F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004124F8u) [[unlikely]] return; }
L_004124F8:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041250Cu); set32(c.r[7], 0u + 14u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041250Cu) [[unlikely]] return; }
L_0041250C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041258C; } }
L_00412514:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0041254C; } }
L_00412530:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_00412540; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412548; } }
L_00412540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412548u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00412548u) [[unlikely]] return; }
L_00412548:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041254C:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 104u)));  goto L_0041257C; }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00412578; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412578u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00412578u) [[unlikely]] return; }
L_00412578:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 1;
L_0041257C:
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041258Cu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041258Cu) [[unlikely]] return; }
L_0041258C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00412590:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004125B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004125E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00412604; } }
L_004125E4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_004125F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00412600; } }
L_004125F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004125FCu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004125FCu) [[unlikely]] return; }
L_004125FC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412600:
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 1;
L_00412604:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 104u)));  goto L_0041269C; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 104u)));  goto L_00412688; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[6].d[0]) { c.r[2].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;  goto L_00412664; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 104u)));  goto L_00412638; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004126AC; } }
L_00412638:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412648u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412648u) [[unlikely]] return; }
L_00412648:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041265Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041265Cu) [[unlikely]] return; }
L_0041265C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004126A8; } }
L_00412664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[4].w[0] + 3u);  if (t) { goto L_00412670; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00412670:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412680u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00412680u) [[unlikely]] return; }
L_00412680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004126A8; } }
L_00412688:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412694u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00412694u) [[unlikely]] return; }
L_00412694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004126A8; } }
L_0041269C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004126A8u); set32(c.r[7], 0u + 13u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004126A8u) [[unlikely]] return; }
L_004126A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004126AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004126C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00412708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00412714; } }
L_00412708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412710u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412710u) [[unlikely]] return; }
L_00412710:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412714:
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_00412ABC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 31744u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00410000u < 16384u) { entry = entries_00BC[(t - 0x00410000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0041273C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[21], c.r[19].w[0] + 11u);  if (t) { goto L_0041275C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041275Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041275Cu) [[unlikely]] return; }
L_0041275C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_00412798; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[17], 0u + 3u);  goto L_004127F4; }
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[4].d[0]) { set32(c.r[17], 0u + 1u);  goto L_004127F4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[17].d[0] = c.r[4].d[0] + 0ull;  goto L_004127F4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004127F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 104u)));  if (t) { goto L_004127F8; } }
L_00412798:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 4u);  goto L_004127D0; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[17], 0u + 3u);  goto L_004127F4; }
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[4].d[0]) { set32(c.r[17], 0u + 1u);  goto L_004127F4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[17].d[0] = c.r[4].d[0] + 0ull;  goto L_004127F4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004127F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004127F4; } }
L_004127D0:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u + 6u);  goto L_004127F4; }
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[4].d[0]) { set32(c.r[17], 0u + 5u);  goto L_004127F4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[17], 0u + 5u);  goto L_004127F4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[17].d[0] = c.r[3].d[0] + 0ull;  goto L_004127F4; }
L_004127F4:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 1;
L_004127F8:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412808u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00412808u) [[unlikely]] return; }
L_00412808:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[21], c.r[19].w[0] + 31u);  if (t) { goto L_00412828; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412828u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412828u) [[unlikely]] return; }
L_00412828:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0041290C; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_004128D0; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_004128A8; }
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_0041288C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[16].w[0] + 52u)));  goto L_00412870; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004128C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_004128C8; } }
L_00412870:
    c.r[2].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412884; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00412884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004128C4; } }
L_0041288C:
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004128A0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004128A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] << 1);  if (t) { goto L_004128C4; } }
L_004128A8:
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004128BC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004128BC:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_004128C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_004128C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_004129D0; } }
L_004128D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], 0u + 20u);  goto L_004129D0; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u + 11u);  goto L_00412900; }
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[4].d[0]) { set32(c.r[17], 0u + 7u);  goto L_00412900; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[17].d[0] = c.r[3].d[0] + 0ull;  goto L_00412900; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[17].d[0] = c.r[2].d[0] + 0ull;  goto L_00412900; }
L_00412900:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_004129D0; } }
L_0041290C:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[17], 0u + 16u);  goto L_00412934; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[17], 0u + 24u);  goto L_00412934; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[17], 0u + 8u);  goto L_00412934; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00412934; }
L_00412934:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0041296C; } }
L_00412950:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 28u)));  goto L_00412960; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412968; } }
L_00412960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00412968u) [[unlikely]] return; }
L_00412968:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041296C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 104u)));  goto L_004129D4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 31792u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00410000u < 16384u) { entry = entries_00BC[(t - 0x00410000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00412994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_004129D0; } }
L_0041299C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_004129D0; } }
L_004129A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { goto L_004129D0; } }
L_004129AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 3u);  if (t) { goto L_004129D0; } }
L_004129B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_004129D0; } }
L_004129BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 5u);  if (t) { goto L_004129D0; } }
L_004129C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 6u);  if (t) { goto L_004129D0; } }
L_004129CC:
    set32(c.r[17], c.r[17].w[0] + 7u);
    c.budget -= 1;
L_004129D0:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 1;
L_004129D4:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004129E4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004129E4u) [[unlikely]] return; }
L_004129E4:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_00412AB8; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_00412A14; }
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[5], 0u + 38u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412A10u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412A10u) [[unlikely]] return; }
L_00412A10:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00412A14:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[17], 0u + 3u);  goto L_00412A3C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u + 1u);  goto L_00412A3C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[17].d[0] = c.r[3].d[0] + 0ull;  goto L_00412A3C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00412A3C; }
L_00412A3C:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 38u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412A50u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00412A50u) [[unlikely]] return; }
L_00412A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00412AB8; } }
L_00412A58:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[16], c.r[19].w[0] + 34u);  if (t) { goto L_00412A78; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412A78u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412A78u) [[unlikely]] return; }
L_00412A78:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u + 5u);  goto L_00412AA4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[17].d[0] = c.r[3].d[0] + 0ull;  goto L_00412AA4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[17].d[0] = c.r[2].d[0] + 0ull;  goto L_00412AA4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00412AA4; }
L_00412AA4:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412AB8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00412AB8u) [[unlikely]] return; }
L_00412AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00412ABC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00412AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00412B90; } }
L_00412B08:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_00412B18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00412B80; } }
L_00412B18:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412B34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00412B50; } }
L_00412B34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_00412B44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412B4C; } }
L_00412B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412B4Cu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00412B4Cu) [[unlikely]] return; }
L_00412B4C:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00412B50:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00412B70; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412B68u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 359u, depth + 1u); else { c.pc = 0x004126C0u; return; } if (c.pc != 0x00412B68u) [[unlikely]] return; }
L_00412B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_00412B90; } }
L_00412B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412B78u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00BC(c, 359u, depth + 1u); else { c.pc = 0x004126C0u; return; } if (c.pc != 0x00412B78u) [[unlikely]] return; }
L_00412B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00412B8C; } }
L_00412B80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412B8Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 359u, depth + 1u); else { c.pc = 0x004126C0u; return; } if (c.pc != 0x00412B8Cu) [[unlikely]] return; }
L_00412B8C:
    set32(c.r[16], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_00412B90:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00412B08u | kUnwind; return; } goto L_00412B08; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00412BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00412BE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00412BF0; } }
L_00412BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412BECu);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412BECu) [[unlikely]] return; }
L_00412BEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412BF8u);  if (depth < kMaxDepth) unit_00C1(c, 301u, depth + 1u); else { c.pc = 0x00425B20u; return; } if (c.pc != 0x00412BF8u) [[unlikely]] return; }
L_00412BF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C04u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 467u, depth + 1u); else { c.pc = 0x00423820u; return; } if (c.pc != 0x00412C04u) [[unlikely]] return; }
L_00412C04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C10u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 458u, depth + 1u); else { c.pc = 0x004234F0u; return; } if (c.pc != 0x00412C10u) [[unlikely]] return; }
L_00412C10:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_00412C30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00412C3C; } }
L_00412C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C38u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412C38u) [[unlikely]] return; }
L_00412C38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C44u);  if (depth < kMaxDepth) unit_00C1(c, 311u, depth + 1u); else { c.pc = 0x00425BD0u; return; } if (c.pc != 0x00412C44u) [[unlikely]] return; }
L_00412C44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C50u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 467u, depth + 1u); else { c.pc = 0x00423820u; return; } if (c.pc != 0x00412C50u) [[unlikely]] return; }
L_00412C50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C5Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 458u, depth + 1u); else { c.pc = 0x004234F0u; return; } if (c.pc != 0x00412C5Cu) [[unlikely]] return; }
L_00412C5C:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_00412C7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00412C88; } }
L_00412C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C84u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412C84u) [[unlikely]] return; }
L_00412C84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C90u);  if (depth < kMaxDepth) unit_00C1(c, 321u, depth + 1u); else { c.pc = 0x00425C80u; return; } if (c.pc != 0x00412C90u) [[unlikely]] return; }
L_00412C90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C9Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 467u, depth + 1u); else { c.pc = 0x00423820u; return; } if (c.pc != 0x00412C9Cu) [[unlikely]] return; }
L_00412C9C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412CA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 458u, depth + 1u); else { c.pc = 0x004234F0u; return; } if (c.pc != 0x00412CA8u) [[unlikely]] return; }
L_00412CA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_00412CC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412CD0; } }
L_00412CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412CD0u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412CD0u) [[unlikely]] return; }
L_00412CD0:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00412CEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00412D08; } }
L_00412CEC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 28u)));  goto L_00412CFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412D04; } }
L_00412CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412D04u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00412D04u) [[unlikely]] return; }
L_00412D04:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00412D08:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 3u);  goto L_00412D34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00412D40; } }
L_00412D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412D3Cu);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412D3Cu) [[unlikely]] return; }
L_00412D3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412D48u);  if (depth < kMaxDepth) unit_00C1(c, 331u, depth + 1u); else { c.pc = 0x00425D40u; return; } if (c.pc != 0x00412D48u) [[unlikely]] return; }
L_00412D48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412D54u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 467u, depth + 1u); else { c.pc = 0x00423820u; return; } if (c.pc != 0x00412D54u) [[unlikely]] return; }
L_00412D54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412D60u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 458u, depth + 1u); else { c.pc = 0x004234F0u; return; } if (c.pc != 0x00412D60u) [[unlikely]] return; }
L_00412D60:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 4u);  goto L_00412D80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00412D8C; } }
L_00412D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412D88u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412D88u) [[unlikely]] return; }
L_00412D88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412D94u);  if (depth < kMaxDepth) unit_00C1(c, 339u, depth + 1u); else { c.pc = 0x00425DD0u; return; } if (c.pc != 0x00412D94u) [[unlikely]] return; }
L_00412D94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412DA0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 467u, depth + 1u); else { c.pc = 0x00423820u; return; } if (c.pc != 0x00412DA0u) [[unlikely]] return; }
L_00412DA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412DACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 458u, depth + 1u); else { c.pc = 0x004234F0u; return; } if (c.pc != 0x00412DACu) [[unlikely]] return; }
L_00412DAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 5u);  goto L_00412DCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00412DD8; } }
L_00412DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412DD4u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412DD4u) [[unlikely]] return; }
L_00412DD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412DE0u);  if (depth < kMaxDepth) unit_00C1(c, 348u, depth + 1u); else { c.pc = 0x00425E80u; return; } if (c.pc != 0x00412DE0u) [[unlikely]] return; }
L_00412DE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412DECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 467u, depth + 1u); else { c.pc = 0x00423820u; return; } if (c.pc != 0x00412DECu) [[unlikely]] return; }
L_00412DEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412DF8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 458u, depth + 1u); else { c.pc = 0x004234F0u; return; } if (c.pc != 0x00412DF8u) [[unlikely]] return; }
L_00412DF8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 6u);  goto L_00412E18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00412E24; } }
L_00412E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412E20u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412E20u) [[unlikely]] return; }
L_00412E20:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00412E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412E2Cu);  if (depth < kMaxDepth) unit_00C1(c, 357u, depth + 1u); else { c.pc = 0x00425F20u; return; } if (c.pc != 0x00412E2Cu) [[unlikely]] return; }
L_00412E2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412E38u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 467u, depth + 1u); else { c.pc = 0x00423820u; return; } if (c.pc != 0x00412E38u) [[unlikely]] return; }
L_00412E38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412E44u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 458u, depth + 1u); else { c.pc = 0x004234F0u; return; } if (c.pc != 0x00412E44u) [[unlikely]] return; }
L_00412E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 48u)));  if (t) { goto L_00412E5C; } }
L_00412E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412E54u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_00C1(c, 365u, depth + 1u); else { c.pc = 0x00425FB0u; return; } if (c.pc != 0x00412E54u) [[unlikely]] return; }
L_00412E54:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 2;
L_00412E5C:
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412E4Cu | kUnwind; return; } goto L_00412E4C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00412E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00412EB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412EB8; } }
L_00412EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412EB8u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412EB8u) [[unlikely]] return; }
L_00412EB8:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00412ED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00412EF0; } }
L_00412ED4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 28u)));  goto L_00412EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412EEC; } }
L_00412EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412EECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00412EECu) [[unlikely]] return; }
L_00412EEC:
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00412EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412EF8u);  if (depth < kMaxDepth) unit_00C1(c, 295u, depth + 1u); else { c.pc = 0x00425AC0u; return; } if (c.pc != 0x00412EF8u) [[unlikely]] return; }
L_00412EF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_00412F18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412F20; } }
L_00412F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412F20u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412F20u) [[unlikely]] return; }
L_00412F20:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00412F3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00412F58; } }
L_00412F3C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 28u)));  goto L_00412F4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412F54; } }
L_00412F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412F54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00412F54u) [[unlikely]] return; }
L_00412F54:
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00412F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412F60u);  if (depth < kMaxDepth) unit_00C1(c, 306u, depth + 1u); else { c.pc = 0x00425B80u; return; } if (c.pc != 0x00412F60u) [[unlikely]] return; }
L_00412F60:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_00412F80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412F88; } }
L_00412F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412F88u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412F88u) [[unlikely]] return; }
L_00412F88:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00412FA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00412FC0; } }
L_00412FA4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 28u)));  goto L_00412FB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412FBC; } }
L_00412FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412FBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00412FBCu) [[unlikely]] return; }
L_00412FBC:
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00412FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412FC8u);  if (depth < kMaxDepth) unit_00C1(c, 315u, depth + 1u); else { c.pc = 0x00425C20u; return; } if (c.pc != 0x00412FC8u) [[unlikely]] return; }
L_00412FC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 3u);  goto L_00412FE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00412FF0; } }
L_00412FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412FF0u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00412FF0u) [[unlikely]] return; }
L_00412FF0:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041300C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00413028; } }
L_0041300C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 28u)));  goto L_0041301C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00413024; } }
L_0041301C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413024u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00413024u) [[unlikely]] return; }
L_00413024:
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00413028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413030u);  if (depth < kMaxDepth) unit_00C1(c, 326u, depth + 1u); else { c.pc = 0x00425CE0u; return; } if (c.pc != 0x00413030u) [[unlikely]] return; }
L_00413030:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 4u);  goto L_00413050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00413058; } }
L_00413050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413058u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00413058u) [[unlikely]] return; }
L_00413058:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00413074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00413090; } }
L_00413074:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 28u)));  goto L_00413084; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041308C; } }
L_00413084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041308Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041308Cu) [[unlikely]] return; }
L_0041308C:
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00413090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413098u);  if (depth < kMaxDepth) unit_00C1(c, 335u, depth + 1u); else { c.pc = 0x00425D90u; return; } if (c.pc != 0x00413098u) [[unlikely]] return; }
L_00413098:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 5u);  goto L_004130B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004130C0; } }
L_004130B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004130C0u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x004130C0u) [[unlikely]] return; }
L_004130C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004130DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_004130F8; } }
L_004130DC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 28u)));  goto L_004130EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004130F4; } }
L_004130EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004130F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004130F4u) [[unlikely]] return; }
L_004130F4:
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_004130F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413100u);  if (depth < kMaxDepth) unit_00C1(c, 343u, depth + 1u); else { c.pc = 0x00425E20u; return; } if (c.pc != 0x00413100u) [[unlikely]] return; }
L_00413100:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 6u);  goto L_00413120; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00413128; } }
L_00413120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413128u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00413128u) [[unlikely]] return; }
L_00413128:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00413144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00413160; } }
L_00413144:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 28u)));  goto L_00413154; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041315C; } }
L_00413154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041315Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041315Cu) [[unlikely]] return; }
L_0041315C:
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00413160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413168u);  if (depth < kMaxDepth) unit_00C1(c, 352u, depth + 1u); else { c.pc = 0x00425ED0u; return; } if (c.pc != 0x00413168u) [[unlikely]] return; }
L_00413168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00413180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004131AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004131A4u);  if (depth < kMaxDepth) unit_0025(c, 530u, depth + 1u); else { c.pc = 0x001B7F60u; return; } if (c.pc != 0x004131A4u) [[unlikely]] return; }
L_004131A4:
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_004131AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004131C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004131DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 442u, depth + 1u); else { c.pc = 0x00413180u; return; } if (c.pc != 0x004131DCu) [[unlikely]] return; }
L_004131DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004131ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 529u, depth + 1u); else { c.pc = 0x001B7F40u; return; } if (c.pc != 0x004131ECu) [[unlikely]] return; }
L_004131EC:
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00413210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413224u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003C3510u; return; } if (c.pc != 0x00413224u) [[unlikely]] return; }
L_00413224:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413230u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00413230u) [[unlikely]] return; }
L_00413230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00413240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413258u); set32(c.r[4], ld32((c.r[4].w[0] + 112u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00413258u) [[unlikely]] return; }
L_00413258:
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00413270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003C3510u; return; } if (c.pc != 0x00413284u) [[unlikely]] return; }
L_00413284:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413290u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00413290u) [[unlikely]] return; }
L_00413290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_004132AC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004132C4; } }
L_004132AC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_004132C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004132D8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00C0(c, 435u, depth + 1u); else { c.pc = 0x004230B0u; return; } if (c.pc != 0x004132D8u) [[unlikely]] return; }
L_004132D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004132E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 436u, depth + 1u); else { c.pc = 0x004230E0u; return; } if (c.pc != 0x004132E0u) [[unlikely]] return; }
L_004132E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004132F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413308u); set32(c.r[4], ld32((c.r[4].w[0] + 112u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00413308u) [[unlikely]] return; }
L_00413308:
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00413320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413334u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003C3510u; return; } if (c.pc != 0x00413334u) [[unlikely]] return; }
L_00413334:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413340u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00413340u) [[unlikely]] return; }
L_00413340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00413350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413368u); set32(c.r[4], ld32((c.r[4].w[0] + 112u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00413368u) [[unlikely]] return; }
L_00413368:
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00413380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413394u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003C3510u; return; } if (c.pc != 0x00413394u) [[unlikely]] return; }
L_00413394:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004133A0u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x004133A0u) [[unlikely]] return; }
L_004133A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004133B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004133C8u); set32(c.r[4], ld32((c.r[4].w[0] + 112u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x004133C8u) [[unlikely]] return; }
L_004133C8:
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004133E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004133FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 433u, depth + 1u); else { c.pc = 0x00423030u; return; } if (c.pc != 0x004133FCu) [[unlikely]] return; }
L_004133FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14944u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 13;
L_00413430:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 112u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413430u | kUnwind; return; } goto L_00413430; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[4].w[0] << 5);
    c.budget -= 2;
L_00413454:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0041345C:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 144u), 0u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041345Cu | kUnwind; return; } goto L_0041345C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00413454u | kUnwind; return; } goto L_00413454; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041348C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 1104u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041348Cu | kUnwind; return; } goto L_0041348C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004134B0u); st32((c.r[16].w[0] + 1128u), 0u);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x004134B0u) [[unlikely]] return; }
L_004134B0:
    c.r[2].d[0] = c.r[2].d[0] ^ 100ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[16].w[0] + 1112u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1116u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004134CCu); st32((c.r[16].w[0] + 1124u), 0u);  if (depth < kMaxDepth) unit_00BD(c, 57u, depth + 1u); else { c.pc = 0x00414810u; return; } if (c.pc != 0x004134CCu) [[unlikely]] return; }
L_004134CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 872u);  goto L_004134F8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), 0u);  goto L_004134F4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004134F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004134F0u) [[unlikely]] return; }
L_004134F0:
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_004134F4:
    set32(c.r[4], 0u + 872u);
    c.budget -= 1;
L_004134F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413500u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00413500u) [[unlikely]] return; }
L_00413500:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  goto L_00413518; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413514u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x00413514u) [[unlikely]] return; }
L_00413514:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_00413518:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041352Cu); st32((c.r[2].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 489u, depth + 1u); else { c.pc = 0x00423AD0u; return; } if (c.pc != 0x0041352Cu) [[unlikely]] return; }
L_0041352C:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    st32((c.r[3].w[0] + 752u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 124u);  goto L_00413558; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00413550u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00413550u) [[unlikely]] return; }
L_00413550:
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[4], 0u + 124u);
    c.budget -= 2;
L_00413558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413560u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00413560u) [[unlikely]] return; }
L_00413560:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 100u), c.r[2].w[0]);  goto L_00413590; }
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 31600u);
    set32(c.r[8], c.r[8].w[0] - 31584u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041358Cu); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x0041358Cu) [[unlikely]] return; }
L_0041358C:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_00413590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413598u);  if (depth < kMaxDepth) unit_00C0(c, 358u, depth + 1u); else { c.pc = 0x004225F0u; return; } if (c.pc != 0x00413598u) [[unlikely]] return; }
L_00413598:
    st32((c.r[16].w[0] + 1128u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 16896u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 16900u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 16904u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00413600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041368C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041362Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 57u, depth + 1u); else { c.pc = 0x00414810u; return; } if (c.pc != 0x0041362Cu) [[unlikely]] return; }
L_0041362C:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00413654; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 80u), 0u);  goto L_00413654; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00413650u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00413650u) [[unlikely]] return; }
L_00413650:
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 1;
L_00413654:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00413678; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413674u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00413674u) [[unlikely]] return; }
L_00413674:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00413678:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00413690; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041368Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0041368Cu) [[unlikely]] return; }
L_0041368C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00413690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004136B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 11;
L_004136DC:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004136F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004136F4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x004136F4u) [[unlikely]] return; }
L_004136F4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004136F8:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004136DCu | kUnwind; return; } goto L_004136DC; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 5);
    c.budget -= 2;
L_0041370C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 3;
L_00413718:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00413734; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413730u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x00413730u) [[unlikely]] return; }
L_00413730:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00413734:
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00413718u | kUnwind; return; } goto L_00413718; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041370Cu | kUnwind; return; } goto L_0041370C; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00413758:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1104u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00413774; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413770u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x00413770u) [[unlikely]] return; }
L_00413770:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00413774:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00413758u | kUnwind; return; } goto L_00413758; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004137A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004137C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x004137C8u) [[unlikely]] return; }
L_004137C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004137D0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x004137D0u) [[unlikely]] return; }
L_004137D0:
    set32(c.r[19], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004137DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x004137DCu) [[unlikely]] return; }
L_004137DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004137E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x004137E4u) [[unlikely]] return; }
L_004137E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004137ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x004137ECu) [[unlikely]] return; }
L_004137EC:
    set32(c.r[5], ld32((c.r[19].w[0] + 352u)));
    set32(c.r[2], 0u - 65u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413808u); st32((c.r[5].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00413808u) [[unlikely]] return; }
L_00413808:
    set32(c.r[2], ld32((c.r[19].w[0] + 352u)));
    set32(c.r[3], 0u + 50u);
    c.r[17].d[0] = 0ull + 0ull;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 5;
L_0041381C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 112u);  if (t) { goto L_0041383C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413834u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x00413834u) [[unlikely]] return; }
L_00413834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041383Cu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x0041383Cu) [[unlikely]] return; }
L_0041383C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041381Cu | kUnwind; return; } goto L_0041381C; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 5);
    c.budget -= 2;
L_00413854:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] << 2);
    c.budget -= 3;
L_00413860:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[21], c.r[2].w[0] + 144u);  if (t) { goto L_00413880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413878u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x00413878u) [[unlikely]] return; }
L_00413878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413880u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x00413880u) [[unlikely]] return; }
L_00413880:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00413860u | kUnwind; return; } goto L_00413860; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00413854u | kUnwind; return; } goto L_00413854; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_004138A8:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1104u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 1104u);  if (t) { goto L_004138C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138C0u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x004138C0u) [[unlikely]] return; }
L_004138C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138C8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x004138C8u) [[unlikely]] return; }
L_004138C8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004138A8u | kUnwind; return; } goto L_004138A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x004138E0u) [[unlikely]] return; }
L_004138E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x004138E8u) [[unlikely]] return; }
L_004138E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138F0u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x004138F0u) [[unlikely]] return; }
L_004138F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00413920:
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00413984; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 100u)));  goto L_00413940; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004139A8; } }
L_00413940:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004139A8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 1128u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004139A8; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 100u)));
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004139A8; } }
L_00413984:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16912u));
    c.f[1] = ld32((c.r[5].w[0] + 16916u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16920u));
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 9;
L_004139A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004139B0:
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_00413A08; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 4u)));  goto L_004139D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00413A50; } }
L_004139D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[6].d[0] << 33;
    c.r[6].d[0] = c.r[6].d[0] >> 33;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00413A50; } }
L_00413A08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00413A50; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st32((c.r[4].w[0] + 4u), c.r[7].w[0]);
    c.f[2] = ld32((c.r[6].w[0] + 16928u));
    c.f[1] = ld32((c.r[5].w[0] + 16932u));
    c.f[0] = ld32((c.r[3].w[0] + 16936u));
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 14;
L_00413A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00413A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00413B40; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = 0ull | 40005ull;  goto L_00413B04; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 1120u), 0u);  goto L_00413A9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00413B68; } }
L_00413A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413AA4u);  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x00413AA4u) [[unlikely]] return; }
L_00413AA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12532u));
    set32(c.r[2], c.r[2].w[0] >> 3);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 12532u));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 7ull;  if (t) { goto L_00413AD8; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  goto L_00413ADC; }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 1;
L_00413AD8:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_00413ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413AE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 66u, depth + 1u); else { c.pc = 0x00414950u; return; } if (c.pc != 0x00413AE4u) [[unlikely]] return; }
L_00413AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413AECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 112u, depth + 1u); else { c.pc = 0x00414F80u; return; } if (c.pc != 0x00413AECu) [[unlikely]] return; }
L_00413AEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00413B64; } }
L_00413B04:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413B10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x00413B10u) [[unlikely]] return; }
L_00413B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413B18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 117u, depth + 1u); else { c.pc = 0x00415000u; return; } if (c.pc != 0x00413B18u) [[unlikely]] return; }
L_00413B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413B20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 129u, depth + 1u); else { c.pc = 0x00415190u; return; } if (c.pc != 0x00413B20u) [[unlikely]] return; }
L_00413B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413B28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 141u, depth + 1u); else { c.pc = 0x00415310u; return; } if (c.pc != 0x00413B28u) [[unlikely]] return; }
L_00413B28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00413B64; } }
L_00413B40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16944u));
    c.f[1] = ld32((c.r[4].w[0] + 16948u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16952u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 9;
L_00413B64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00413B68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00413B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 202u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00413FCC; } }
    set32(c.r[3], 0u + 201u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 1128u)));  goto L_00413FAC; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 1128u)));  goto L_00413F94; }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 1128u)));  goto L_00413EB0; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 1112u)));  goto L_00413E68; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00413BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00413FF8; } }
L_00413BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413BE8u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x00413BE8u) [[unlikely]] return; }
L_00413BE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 80u)));  goto L_00413C34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413BF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 200u, depth + 1u); else { c.pc = 0x00415B10u; return; } if (c.pc != 0x00413BF8u) [[unlikely]] return; }
L_00413BF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 1120u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16960u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[4].w[0] + 16964u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16968u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_00413FF4; } }
L_00413C34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = ld64((c.r[5].w[0] + 96u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00413C50; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_00413C50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00413C68; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00413C68:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_00413D14; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], 0u + 9u);  goto L_00413CCC; }
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00413CC8; } }
    set32(c.r[4], 0u + 7u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413C9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00413C9Cu) [[unlikely]] return; }
L_00413C9C:
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00413CB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413CACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 188u, depth + 1u); else { c.pc = 0x004159D0u; return; } if (c.pc != 0x00413CACu) [[unlikely]] return; }
L_00413CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_00413CC0; } }
L_00413CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413CBCu);  if (depth < kMaxDepth) unit_00BD(c, 191u, depth + 1u); else { c.pc = 0x00415A20u; return; } if (c.pc != 0x00413CBCu) [[unlikely]] return; }
L_00413CBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 1;
L_00413CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_00413FF4; } }
L_00413CC8:
    set32(c.r[4], 0u + 9u);
    c.budget -= 1;
L_00413CCC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413CD8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00413CD8u) [[unlikely]] return; }
L_00413CD8:
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00413CF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413CE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 188u, depth + 1u); else { c.pc = 0x004159D0u; return; } if (c.pc != 0x00413CE8u) [[unlikely]] return; }
L_00413CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413CF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 194u, depth + 1u); else { c.pc = 0x00415A70u; return; } if (c.pc != 0x00413CF0u) [[unlikely]] return; }
L_00413CF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);  if (t) { goto L_00413D0C; } }
L_00413CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D00u);  if (depth < kMaxDepth) unit_00BD(c, 191u, depth + 1u); else { c.pc = 0x00415A20u; return; } if (c.pc != 0x00413D00u) [[unlikely]] return; }
L_00413D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 197u, depth + 1u); else { c.pc = 0x00415AC0u; return; } if (c.pc != 0x00413D08u) [[unlikely]] return; }
L_00413D08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 1;
L_00413D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_00413FF4; } }
L_00413D14:
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00413D28; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_00413D28:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00413D44; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00413D44:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[5].w[0] + 80u));  goto L_00413D88; }
    set32(c.r[4], 0u + 9u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00413D5Cu) [[unlikely]] return; }
L_00413D5C:
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00413D74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 194u, depth + 1u); else { c.pc = 0x00415A70u; return; } if (c.pc != 0x00413D6Cu) [[unlikely]] return; }
L_00413D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);  if (t) { goto L_00413D80; } }
L_00413D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D7Cu);  if (depth < kMaxDepth) unit_00BD(c, 197u, depth + 1u); else { c.pc = 0x00415AC0u; return; } if (c.pc != 0x00413D7Cu) [[unlikely]] return; }
L_00413D7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 1;
L_00413D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_00413FF4; } }
L_00413D88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);  goto L_00413E0C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 336u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[17].w[0] + 1116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1112u)));
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_00413DDC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 1116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_00413DF4; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00413DDC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413DE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00413DE8u) [[unlikely]] return; }
L_00413DE8:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00413FF4; } }
L_00413DF4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413E00u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00413E00u) [[unlikely]] return; }
L_00413E00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_00413FF4; } }
L_00413E0C:
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00413FF4; } }
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413E2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00413E2Cu) [[unlikely]] return; }
L_00413E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413E34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 200u, depth + 1u); else { c.pc = 0x00415B10u; return; } if (c.pc != 0x00413E34u) [[unlikely]] return; }
L_00413E34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[17].w[0] + 68u), c.r[4].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 16976u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[4].w[0] + 16980u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16984u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_00413FF4; } }
L_00413E68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1128u)));  goto L_00413E94; }
    set32(c.r[2], ld32((c.r[17].w[0] + 1116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_00413E80; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00413E80:
    set32(c.r[4], ld32((c.r[17].w[0] + 1128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413E8Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00413E8Cu) [[unlikely]] return; }
L_00413E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  if (t) { goto L_00413EA4; } }
L_00413E94:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413EA0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00413EA0u) [[unlikely]] return; }
L_00413EA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_00413EA4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00413FF4; } }
L_00413EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413EB8u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00413EB8u) [[unlikely]] return; }
L_00413EB8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_00413F68; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00413F40; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 1112u)));  goto L_00413EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00413F70; } }
L_00413EE4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00413F18; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16992u));
    c.f[1] = ld32((c.r[4].w[0] + 16996u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17000u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_00413FF4; } }
L_00413F18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17008u));
    c.f[1] = ld32((c.r[4].w[0] + 17012u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17016u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_00413FF4; } }
L_00413F40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17024u));
    c.f[1] = ld32((c.r[4].w[0] + 17028u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17032u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_00413FF4; } }
L_00413F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00413FF4; } }
L_00413F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413F78u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x00413F78u) [[unlikely]] return; }
L_00413F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413FF4; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 200u);
    st32((c.r[17].w[0] + 1120u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00413FF4; } }
L_00413F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413F9Cu);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x00413F9Cu) [[unlikely]] return; }
L_00413F9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00413FF4; } }
L_00413FAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00413FF4; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00413FF4; } }
L_00413FCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17040u));
    c.f[1] = ld32((c.r[4].w[0] + 17044u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17048u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 10;
L_00413FF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00413FF8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 2;
    [[clang::musttail]] return unit_00BD(c, 1u, depth);
}

}
